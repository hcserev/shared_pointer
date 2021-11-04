#include <memory>
#include "shared_pointer.h"

int main()
{
    MySharedPtr<int> p(new int(3));
    return 0;
}
