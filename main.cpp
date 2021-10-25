#include <bits/stdc++.h>
using namespace std;
namespace {
template<typename VType>
void _Db(const vector<VType>& v, const string name)
{
    cout << name << " : ";
    for (const auto& i : v)
        cout << i << " ";
    cout << endl;
}
template<typename Key, typename Value>
void _Db(const map<Key, Value>& mp, const string name)
{
    cout << name << " : \n";
    for (const auto& [key, value] : mp)
        cout << key << " : " << value << endl;
}
template<typename T>
void _Db(const T& variable, const string name)
{
    cout << name << " : " << variable << endl;
}
#ifdef DEBUG
#define Db(a) _Db(a, #a);
#else
#define Db(a) ;
#endif
#define FAST_INPUT                                                                                 \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL);
#define cont(v) v.begin(), v.end()
#define rcont(v) v.rbegin(), v.rend()
typedef long long ll;
typedef pair<int, int> pii;
} // namespace
///// CODE :

int main()
{
    return 0;
}