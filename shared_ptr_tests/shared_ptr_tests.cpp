#include <gtest/gtest.h>
#include <../shared_pointer.h>

TEST(MySharedPtrTest, DefaultConstructorTest)
{
	MySharedPtr<int> ptr;
	EXPECT_TRUE(ptr.get() == nullptr);
}
TEST(MySharedPtrTest, CopyConstructorTest)
{
	MySharedPtr<int> ptr1(new int(1));
	MySharedPtr<int> ptr2(ptr1);
	EXPECT_TRUE(*ptr2.get() == 1);
}
TEST(MySharedPtrTest, EqualOperatorTest)
{
	MySharedPtr<int> ptr1(new int(1));
	MySharedPtr<int> ptr2 = ptr1;
	EXPECT_TRUE(*ptr2.get() == 1);
}

TEST(MySharedPtrTest, ResetFunctionTest)
{
	MySharedPtr<int> ptr(new int(1));
	ptr.reset();
	EXPECT_TRUE(ptr.get() == nullptr);
}