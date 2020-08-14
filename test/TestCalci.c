#include "unity.h"
#include "calci.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_addition(void)
{
  TEST_ASSERT_EQUAL(15, calculator(0,5,10));
  TEST_ASSERT_EQUAL(178, calculator(0,78,100));

}
void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(-5, calculator(1,5,10));
  TEST_ASSERT_EQUAL(35, calculator(1,45,10));

}
void test_neither(void)
{
  TEST_ASSERT_EQUAL(-1, calculator(-1,5,10));
  TEST_ASSERT_EQUAL(-1, calculator(2,45,87));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_neither);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
