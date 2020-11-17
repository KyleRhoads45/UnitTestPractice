/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string_palidrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_sort_desc)
{
    Practice obj;
    bool actual = obj.sortDescending(1, 2, 3);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_dont_sort_desc)
{
    Practice obj;
    bool actual = obj.sortDescending(3, 2, 1);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_no_order_sort_desc)
{
    Practice obj;
    bool actual = obj.sortDescending(1, 3, 2);
    ASSERT_TRUE(actual);
}

