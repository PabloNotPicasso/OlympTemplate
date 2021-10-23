#include <bits/stdc++.h>
using namespace std;
namespace {
template<template<typename, typename> typename Container, typename T, typename D>
istream& operator>>(istream& is, Container<T, D>& container)
{
    for (auto& i : container)
        is >> i;
    return is;
}
template<template<typename, typename> typename Container, typename T, typename D>
void _Db(const Container<T, D>& c, const string name)
{
    cout << name << " : ";
    for (const auto& i : c)
        cout << i << " ";
    cout << endl;
}
template<typename Key, typename Value>
void _Db(const map<Key, Value>& mp, const string name)
{
    cout << name << " : \n";
    for (const auto& [key, value] : mp)
        cout << key << " : " << value << "\n";
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