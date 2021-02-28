#include <iostream>
int main()
{
    std::cout << "You are an adventurer who needs to solve the puzzle to open the mystical portal";
    std::cout << std::endl;
    std::cout << "Enter the correct numbers to solve the puzzle to open the portal";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}