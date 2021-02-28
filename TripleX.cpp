#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n\nYou are an adventurer who needs to solve the puzzle to open the mystical portal\n";
    std::cout << "Enter the correct numbers to solve the puzzle to open the portal\n\n";
}
void PlayGame()
{
     //Create the start of a game that asks an adventurer to solve the puzzle based on the sum and products of the variables provided
    PrintIntroduction();

    const int PuzzleA = 4;
    const int PuzzleB = 3;
    const int PuzzleC = 2;

    const int PuzzleSum = PuzzleA + PuzzleB + PuzzleC;
    const int PuzzleProduct = PuzzleA * PuzzleB * PuzzleC;

    // Print sum and product to the terminal
    std::cout << "There are 3 numbers needed to solve the puzzle" << std::endl;
    std::cout << "\n+The numbers in the puzzle add up to: " << PuzzleSum << std::endl;
    std::cout << "\n+The numbers in the puzzle multiply to give: " << PuzzleProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Use if else statement to let player know if they're correct or incorrect
    if (GuessSum == PuzzleSum && GuessProduct == PuzzleProduct)
    {
        std::cout << "\nYou solved the puzzle!";
    }
    else
    {
        std::cout << "\nYou solved incorrectly...";
    }
}
int main()
{
    while(true)
    {
        PlayGame();
        std::cin.clear(); //Clears errors
        std::cin.ignore(); 
    }

    return 0;
}