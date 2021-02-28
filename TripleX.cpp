#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are an adventurer who needs to solve the puzzle to open the mystical portal\n";
    std::cout << "You're at level " << Difficulty;
    std::cout << "\nEnter the correct numbers to solve each level to open the portal\n\n";
}
bool PlayGame(int Difficulty)
{
     //Create the start of a game that asks an adventurer to solve the puzzle based on the sum and products of the variables provided
    PrintIntroduction(Difficulty);

    const int PuzzleA = 4;
    const int PuzzleB = 3;
    const int PuzzleC = 2;

    const int PuzzleSum = PuzzleA + PuzzleB + PuzzleC;
    const int PuzzleProduct = PuzzleA * PuzzleB * PuzzleC;

    // Print sum and product to the terminal
    std::cout << "There are 3 numbers needed to solve the puzzle";
    std::cout << "\n+ The numbers in the puzzle add up to: " << PuzzleSum;
    std::cout << "\n+ The numbers in the puzzle multiply to give: " << PuzzleProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Use if else statement to let player know if they're correct or incorrect
    if (GuessSum == PuzzleSum && GuessProduct == PuzzleProduct)
    {
        std::cout << "\n*** You solved the first level! Keep going ***";
        return true;
    }
    else
    {
        std::cout << "\n*** You solved incorrectly... But don't give up! Try again! ***";
        return false;
    }
}
int main()
{
    int LevelDifficulty = 1;
    int const MaxLevel = 10;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears errors
        std::cin.ignore();

        if (bLevelComplete) 
        {
            ++LevelDifficulty;
        } 
    }
    std::cout << "\n*** Great work adventurer! You have successfully completed all levels and opened the portal! ***\n";
    return 0;
}