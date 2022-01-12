#include "fibadder.hpp"

#include <adder/adder.hpp>
#include <fibonacci.h>

namespace fibadder {
int fibadd(int fib_index_a, int fib_index_b) {
    auto a = fastFibonacci(fib_index_a);
    auto b = fastFibonacci(fib_index_b);
    return adder::add(a, b);
}
}
