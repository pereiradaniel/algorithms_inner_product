// Algorithms - Inner Product
// inner_product.cpp
// source: https://ict.senecacollege.ca/~oop345/pages/content/algor.html

// T inner_product(InputIterator f1, InputIterator l1, InputIterator f2, T init)
// accumulate the products of each pair in the range[f, l) to init and return the result.

// This program calculates the inner or dot product of
// array a with array b, displays the result, then calculates the
// sum of the squares of the differences between the elements of
// the arrays and displays that result.

#include <iostream>
#include <numeric>
#include <functional>

int main() {
    int a[] = { 3, 2, 4, 1 }, b[] = { 1, 2, 3, 4 }, s;

    s = std::inner_product(a, &a[4], b, (int)0);
    std::cout << "dot product = " << s << std::endl;
    s = std::inner_product(a, &a[4], b, (int)0,
        std::plus<int>(),
        [](int x, int y) { return (x - y) * (x - y); }
    );
    std::cout << "sum of "
        "(a[i]-b[i])^2 = " << s << std::endl;
}