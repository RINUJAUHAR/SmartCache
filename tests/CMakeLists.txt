enable_testing()

# Temporarily no test sources, placeholder for now
add_executable(runTests test_main.cpp)
add_test(NAME runTests COMMAND runTests)
