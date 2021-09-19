#include <iostream>
#include <string>
#include <ctime>

void PrintIntoduction(int Difficulty)
{
    // Print introduction
    std::cout << "\n\nYoung Dababy needs your help in math with question " << std::to_string(Difficulty) << std::endl;
    std::cout << "Solve his primary school question to get kremowka." << std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintIntoduction(Difficulty);

    // Const instructs the compiler, to never allow the values of variables to change.
    const int a = rand() % Difficulty + Difficulty;
    const int b = rand() % Difficulty + Difficulty;
    const int c = rand() % Difficulty + Difficulty;

    // ERROR: c = 5;

    const int CodeSum = a + b + c;
    const int CodeProduct = a * b * c;

    std::cout << "+ Dababy has 3 numbers\n";
    std::cout << "+ The numbers add-up to: " << CodeSum << "\n";
    std::cout << "+ The numbers multiply to give: " << CodeProduct << "\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if player's guess is correct
    if ((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
        std::cout << "Thats correct, Less go!";
        return true;
    }
    else
    {
        std::cout << "Incorrect, Dababy won't go!";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of the day

    int LevelOfDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelOfDifficulty <= MaxDifficulty) // Game Loop
    {
        bool bLevelComplete = PlayGame(LevelOfDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            // Increse Level Difficulty
            ++LevelOfDifficulty;
        }
    }
    std::cout << "\n*** Great work! You got all the answers right! Dababy can go, less go!! ***\n";
    return 0;
}
