#include <iostream>


char board[9] = {'-','-','-','-','-','-','-','-','-',}; 
    
    int get_move()
    {

        std::cout << "Move options: \n";
        std::cout << "-7-|-8-|-9-" << std::endl;
        std::cout << "-4-|-5-|-6-" << std::endl;
        std::cout << "-1-|-2-|-3-" << std::endl;
        std::cout << "\n\n";

         std::cout << "GAME BOARD: \n";
        std::cout << "-"<<board[6]<<"-|-"<<board[7]<<"-|-"<<board[8]<<"-\n";
        std::cout << "-"<<board[3]<<"-|-"<<board[4]<<"-|-"<<board[5]<<"-\n";
        std::cout << "-"<<board[0]<<"-|-"<<board[1]<<"-|-"<<board[2]<<"-\n";
        std::cout << "\nYour move: ";

        int move;
        std::cin >> move;
        while(move > 9 || move < 1){
            std::cout << "Please enter a legal move (1-9): \n";
            std::cin >> move;

        }
        return move;
    }


    int main()
    {
    for(int i = 0; i<3; i++){

    int move = get_move();
    std::cout << "The move you entered is : " << move << std::endl;

    }
       
        return 0;
           }