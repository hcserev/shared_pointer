#include "shared_pointer.h"
#include "gtest/gtest.h"

int main()
{
    MySharedPtr<int> p(new int(3));
    int a = *p.get();
    //int b = p;
    return 0;
}
