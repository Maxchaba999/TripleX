#include <iostream>
#include <ctime>


void PrintMainTitle()
{
    std::cout << "  /###           /                          ###                   ###          ##    \n";
    std::cout << " /  ############/            #               ###                 /####       ####  /  \n";
    std::cout << "/     #########             ###               ##                /   ###      /####/   \n";
    std::cout << "#     /  #                   #                ##                     ###    /   ##    \n";
    std::cout << " ##  /  ##                                    ##                      ###  /          \n";
    std::cout << "    /  ###     ###  /###   ###        /###    ##      /##              ###/           \n";
    std::cout << "   ##   ##      ###/ #### / ###      / ###  / ##     / ###              ###           \n";
    std::cout << "   ##   ##       ##   ###/   ##     /   ###/  ##    /   ###             /###          \n";
    std::cout << "   ##   ##       ##          ##    ##    ##   ##   ##    ###           /  ###         \n";
    std::cout << "   ##   ##       ##          ##    ##    ##   ##   ########           /    ###        \n";
    std::cout << "    ##  ##       ##          ##    ##    ##   ##   #######           /      ###       \n";
    std::cout << "     ## #      / ##          ##    ##    ##   ##   ##               /        ###      \n";
    std::cout << "      ###     /  ##          ##    ##    ##   ##   ####    /       /          ###   / \n";
    std::cout << "       ######/   ###         ### / #######    ### / ######/       /            ####/  \n";
    std::cout << "         ###      ###         ##/  ######      ##/   #####       /              ###   \n";
    std::cout << "                                   ##                                                 \n";
    std::cout << "                                   ##                                                 \n";
    std::cout << "                                   ##                                                 \n";
    std::cout << "                                    ##                                                \n\n";

}
void PrintYouLoseGame()
{   
    std::cout <<   "======================================================================\n\n";
    std::cout <<   "|                                                                    |\n";          
    std::cout <<   "|    ___    ___   _   _   ___      ___          ___   ___               |\n";  
    std::cout <<   "|   | __   |___| | \\/ | |___     |   | \\  / |___  |___|              |\n";
    std::cout <<   "|   |___|  |   | |     | |___     |___|  \\/  |___  |   \\              |\n";
    std::cout <<   "======================================================================\n\n";
}




void PrintIntroduction(int Difficulty)
{
    std::cout <<"\n\nAre you secret agent breaking into a level " << Difficulty;
    std::cout <<" secure server room..\nEnter the correct code to coninue..\n\n";
   
}





bool PlayGame(int Difficulty)

    {
       
      PrintIntroduction(Difficulty);

    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal
    
    std::cout << "+ There are 3 number in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multyply to give: " << CodeProduct << std::endl;



    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct =  GuessA * GuessB * GuessC;


    //Check if the player is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** You win!\nLevel completed!!!Keep going ***";
        return true;
    }
    else
    {
        std::cout << "\n*** You entered the wrong code! Careful agent..\nTry again!! ***";
        return false;
    }

}



int main()
{   
    srand(time(NULL)); // Create new random srquence based on time of day
    
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

   while (LevelDifficulty <= MaxDifficulty) //Loop game until all levels completed
   {    
       
      bool bLevelComplete = PlayGame(LevelDifficulty);
       std::cin.clear(); // Clears any errors
       std::cin.ignore(); // Discards the buffer
       if (bLevelComplete)
      {
          ++LevelDifficulty;
      }
   }
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there!! ***";

    return 0;   
}