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
#if DEBUG == TRUE
    #define Db(a) _Db(a, #a);
#else
    #define Db(a) ;
#endif
#define cont(v) v.begin(), v.end()
#define rcont(v) v.rbegin(), v.rend()
typedef long long ll;
typedef pair<int,int> pii;
}
///// CODE :

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    return 0;
}