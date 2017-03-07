#include <CppUTest/CommandLineTestRunner.h>

#include "fibonacci_test.hpp"

int main (int argc, char* argv[]){
  return CommandLineTestRunner::RunAllTests(argc, argv);
}
