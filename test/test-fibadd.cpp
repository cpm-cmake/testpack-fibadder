#include <fibadder/fibadder.hpp>
#include <cassert>

int main()
{
    assert(fibadder::fibadd(4, 6) == 11);
    return 0;
}
