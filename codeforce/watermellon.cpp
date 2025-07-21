#include <iostream>

bool even(int num)
{
    if (num % 2 == 0 && num != 2)
    {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}

int main ()
{
    int x;
    std::cin >> x; 
    even(x); 
    return 0;
}
