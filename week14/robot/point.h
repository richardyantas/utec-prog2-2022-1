// #pragma once
// #include <iostream>
// using namespace std;
// template <typename T> class Point {
//     T x;
//     T y;

//     template <typename L>
//     friend ostream &operator<<(ostream &os, const Point<L> &p);

//     template <typename L>
//     friend Point<L> operator-(const Point<L> &q, const Point<L> &p);

//     template <typename L>
//     friend Point<L> operator+(const Point<L> &q, const Point<L> &p);

//   public:
//     Point(T x = 0, T y = 0) {
//         this->x = x;
//         this->y = y;
//     }
// };

// template <typename L> ostream &operator<<(ostream &os, const Point<L> &p) {
//     os << "(" << p.x << "," << p.y << ")";
//     return os;
// }

// template <typename L> Point<L> operator-(const Point<L> &q, const Point<L>
// &p) {
//     Point<L> r(q.x - p.x, q.y - p.y);
//     return r;
// }

// template <typename L> Point<L> operator+(const Point<L> &q, const Point<L>
// &p) {
//     Point<L> r(q.x + p.x, q.y + p.y);
//     return r;
// }

#pragma once
#include <iostream>
using namespace std;
template <typename T> class Point {

  public:
    T x;
    T y;
    T z;

    Point(T x = 0, T y = 0) {
        this->x = x;
        this->y = y;
    }
};

template <typename T> ostream &operator<<(ostream &os, const Point<T> &p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

template <typename T> Point<T> operator-(const Point<T> &q, const Point<T> &p) {
    Point<T> r(q.x - p.x, q.y - p.y);
    return r;
}

template <typename T> Point<T> operator+(const Point<T> &q, const Point<T> &p) {
    Point<T> r(q.x + p.x, q.y + p.y);
    return r;
}
