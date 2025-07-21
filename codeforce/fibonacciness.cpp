#include <array>
#include <iostream>

bool fibonacciness(int a, int b, int c, int d)
{
    int x, y, z, total = 0;

    x = a + b;
    y = c - b;
    z = d - c;

    //std::cout << x << " " << y << " " << z << std::endl;

    if (x == y || x == z) {
        total += 1;
    } 

    if(y == x || y == z) {
        total += 1;
    } 

    if (z == x || z == y) {
        total += 1;
    } 

    if (total == 0) {
        total = 1;
    }

    std::cout << total << std::endl;

    return 0;
}


int main ()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d; 

    fibonacciness(a, b, c, d);
    return 0;
}
