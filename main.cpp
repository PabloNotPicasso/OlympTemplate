#include <bits/stdc++.h>
using namespace std;
namespace {
template< template<typename, typename> typename Container, typename T, typename D>
void _Db(const Container<T,D>& c, const string name){
    cout << name << " : ";
    for( const auto& i : c) cout << i << " ";
    cout << '\n';
}
template<typename T>
void _Db(const T& c, const string name){
    cout << name << " : " << c << '\n';
}
#ifdef DEBUG
    #define Db(a) _Db(a, #a);
#else
    #define Db(a) ;
#endif
#define FAST_INPUT ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cont(v) v.begin(), v.end()
#define rcont(v) v.rbegin(), v.rend()
typedef long long ll;
typedef pair<int,int> pii;
}
///// CODE :

const int N = 1e5+5;
int dp[N][2];

string reverted(string str){
    reverse(str.begin(), str.end() );
    return str;
}

int main()
{
    Db(2);
    int n;
    cin >> n;
    vector<ll> c(n);
    vector<string> s(n);
    for( auto& i : c)
        cin >> i;
    for( auto& i : s)
        cin >> i;
    vector<vector<ll>> dp(N, vector<ll>(2,0));
    dp[0][0] = 0;
    dp[0][1] = c[0];
    bool isOk = 1;
    for( int i = 1; i < n; ++i)
    {
        string& cur    = s[i];
        string& priv   = s[i-1];
        string curRev  = reverted(cur);
        string privRev = reverted(priv);
        bool existsAns = 0;
        if(cur >= priv){
            dp[i][0] = min(dp[i][0], dp[i-1][0]);
            existsAns = 1;
            Db(cur >= priv);
        }
        if(cur >= privRev){
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
            existsAns = 1;
            Db(cur >= privRev);
        }
        if(curRev >= priv){
            dp[i][1] = min(dp[i][1], dp[i-1][0] + c[i]);
            existsAns = 1;
            Db(curRev >= priv);
        }
        if(curRev >= privRev){
            dp[i][1] = min(dp[i][1], dp[i-1][1] + c[i]);
            existsAns = 1;
            Db(curRev >= privRev);
        }
        isOk &= existsAns;
    }
    Db(dp[n-1]);
    if( isOk ){
        cout << min(dp[n-1][0], dp[n-1][1]);
    }else{
        cout << -1;
    }
    
    return 0;
}