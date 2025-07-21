#include <iostream>
#include <algorithm>


bool hasDuplicate (int arr[], int size)
{
    std::sort(arr);
    return false;
}

int main()
{
    int foo[5] = {1, 4, 3, 2, 5};
    int size = sizeof(foo) / sizeof(foo[0]);
    std::cout << "Hello" << std::endl;

    hasDuplicate(foo, size);
    return 0;
}
