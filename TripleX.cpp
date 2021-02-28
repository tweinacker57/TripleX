#include <iostream>
int main()
{
    //Create the start of a game that asks an adventurer to solve the puzzle based on the sum and products of the variables provided
    std::cout << "You are an adventurer who needs to solve the puzzle to open the mystical portal";
    std::cout << std::endl;
    std::cout << "Enter the correct numbers to solve the puzzle to open the portal";

    const int PuzzleA = 4;
    const int PuzzleB = 3;
    const int PuzzleC = 2;

    const int PuzzleSum = PuzzleA + PuzzleB + PuzzleC;
    const int PuzzleProduct = PuzzleA * PuzzleB * PuzzleC;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers needed to solve the puzzle" << std::endl;
    std::cout << "The numbers in the puzzle add up to: " << PuzzleSum << std::endl;
    std::cout << "The numbers in the puzzle multiply to give: " << PuzzleProduct << std::endl;


    int PlayerGuess;
        std::cin >> PlayerGuess;
        std::cout << std::endl;
        std::cout << "You entered: " << PlayerGuess;

    return 0;
}