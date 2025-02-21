#include <iostream>
 
int main()
{
    int w;
    std::cin >> w;
    (((w-2) != 0) && (w-2)%2 == 0) ? std::cout << "YES" : std::cout << "NO";
 
}
