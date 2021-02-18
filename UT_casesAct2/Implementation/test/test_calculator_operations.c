#include"unity.h"
#include<stdio.h>
#include<string.h>
#include"functionbreaker.h"
/* Modify these two lines according to the project */

#define PROJECT_NAME    "FunctionBreaker"

/* Prototypes for all the test functions */

void test_Function_breaker_testcase1(void);
void test_Function_breaker_testcase2(void);
void test_Function_breaker_testcase3(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Function_breaker_testcase1);
  RUN_TEST(test_Function_breaker_testcase2);
  RUN_TEST(test_Function_breaker_testcase3);

  /* Close the Unity Test Framework */
  return UNITY_END();
}


/* Write all the test functions */
void test_Function_breaker_testcase1(void) {
  TEST_ASSERT_EQUAL("$Welcome to LTTS;", "Grabage$Welcome to LTTS;ignore");
  
}
void test_Function_breaker_testcase2(void) {
  TEST_ASSERT_EQUAL("Hello$This is $$an example #2 string;And filled with words", "$an example #2 string;");
}
void test_Function_breaker_testcase3(void) {
  TEST_ASSERT_EQUAL("Program to read from file and $use the read data; as string", "$use the read data;");
}


