#include <bits/stdc++.h>
using namespace std;
namespace {
template<template<typename, typename> typename Container, typename T, typename D>
void _Db(const Container<T, D>& c, const string name)
{
    cout << c.size() << " sized " << name << " : ";
    for (const auto& i : c)
        cout << i << " ";
    cout << endl;
}
template<typename T>
void _Db(const T& c, const string name)
{
    cout << name << " : " << c << endl;
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

namespace Mediator {
class EmptyMediatorException : public std::exception {
public:
    const char* what() const noexcept override
    {
        return "Mediator is empty";
    }
};

template<typename ValueType>
class Mediator {
public:
    void add(const ValueType& value)
    {
        if (empty() || value < getMedian()) {
            left.insert(value);
        } else {
            right.insert(value);
        }
        recombine();
    }

    const ValueType& getMedian() const
    {
        if (empty()) {
            throw EmptyMediatorException();
        }
        return *left.rbegin();
    }
    bool empty() const
    {
        return left.empty();
    }
    void clear()
    {
        left.clear();
        right.clear();
    }

protected:
    void recombine()
    {
        // from left to right
        if (1. * left.size() - 1. * right.size() > 1) {
            auto toMove = prev(left.end());
            right.insert(*toMove);
            left.erase(toMove);
        } else if (right.size() > left.size()) {
            auto toMove = right.begin();
            left.insert(*toMove);
            right.erase(toMove);
        }
    }

private:
    multiset<ValueType> left;
    multiset<ValueType> right;
};
} // namespace Mediator

int main()
{
    Mediator::Mediator<int> med;
    try {
        assert(med.empty());
        med.getMedian();
        assert(false);
    } catch (Mediator::EmptyMediatorException& e) {
        // always catch exception
    }

    med.add(1);
    assert(med.getMedian() == 1);
    med.add(2);
    assert(med.getMedian() == 1);
    med.add(3);
    assert(med.getMedian() == 2);
    med.add(4);
    assert(med.getMedian() == 2);
    med.add(5);
    assert(med.getMedian() == 3);
    med.add(1);
    assert(med.getMedian() == 2);
    med.add(1);
    assert(med.getMedian() == 2);
    med.add(1);
    assert(med.getMedian() == 1);
    med.add(1);
    assert(med.getMedian() == 1);

    med.clear();
    assert(med.empty());
    med.add(5);
    assert(med.getMedian() == 5);
    med.add(4);
    assert(med.getMedian() == 4);
    med.add(3);
    assert(med.getMedian() == 4);
    med.add(2);
    assert(med.getMedian() == 3);
    med.add(1);
    assert(med.getMedian() == 3);
    return 0;
}