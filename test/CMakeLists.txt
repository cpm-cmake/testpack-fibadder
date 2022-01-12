add_executable(test-fibadd test-fibadd.cpp)
target_link_libraries(test-fibadd fibadder)
add_test(adder-fibadd test-fibadd)
