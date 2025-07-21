#include <iostream>

bool hasDuplicate (int arr[], int size)
{
    for (int i = 0; i < size; ++i) 
    {
        for (int j = i + 1; j < size; ++j) 
        {
            if(arr[j] == arr[i]) 
            {
                std::cout << "Has Duplicate" << std::endl;
                return true;
            }
        }

    }
    std::cout << "Doesn't have duplicate" << std::endl;
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
