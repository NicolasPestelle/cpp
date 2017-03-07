#include "Fibonacci.hpp"
TEST_GROUP(GroupFibo){};
TEST(GroupFibo, test_fibo_recur_1){
  int result = fibonacciRecursif(5);
  CHECK_EQUAL(5,result);
}
TEST(GroupFibo, test_fibo_recur_2){
  int result = fibonacciIteratif(5);
  CHECK_EQUAL(5,result);
}
