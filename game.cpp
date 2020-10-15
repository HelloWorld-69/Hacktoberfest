#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game(int n)
{
	int random;
	if(n==1)
    	random = rand() % 500;
    else if(n==2)
    	random = rand() % 1000;
    else
    	random = rand() % 10000;
    int try1 = 10;
    std::cout<<random;
    if(n==1)
    	std::cout << "\n(◕ᴗ◕✿): Hi, I'm Lilly and I'll assist you throughout the game. To beat this game you have to clear all three levels.\n\n\n"<< "\n***** LEVEL 1 *****\n\nಠ‿ಠ: I'M THE LEVEL 1 BOSS. THERE IS A RANDOM NUMBER BETWEEN 1 AND 500 THAT YOU HAVE TO GUESS TO BEAT ME.\nEnter your guess: ";
    else if(n==2)
    	std::cout << "\n***** LEVEL 2 *****\n\nᕦ⊙෴⊙ᕤ: HOW DARE YOU BEAT MY SON?! THERE IS A RANDOM NUMBER BETWEEN 1 AND 1000 THAT YOU HAVE TO BEAT ME.\nEnter your guess: " ;
    else
    	std::cout << "\n***** LEVEL 3 *****\n\nᕙ[･۝･]ᕗ: THERE IS A RANDOM NUMBER BETWEEN 1 AND 10000 THAT YOU HAVE TO GUESS TO BEAT THE GAME. I'M THE GAME.\n Enter your guess: ";

    while (true)
    {
        int guess;
        std::cin >> guess;
        if(guess==random)
        {
        	if(n==1)
        	{
            	std::cout << "\nಠ︵ಠ: HOW DARE YOU BEAT ME!! MY DAD WILL SEE YOU IN THE NEXT ROUND..\n";
            	play_game(2);
            }
            else if(n==2)
            {
            	std::cout << "\n༎ຶ ෴ ༎ຶ: AND I'LL BE GONE, GONE TONIGHT. THE GROUND BENEATH MY FEET IS OPEN WIDE. THE WAY THAT I BEEN HOLDIN' ON TOO TIGHT, WITH NOTHING IN BETWEEN... THE FINAL BOSS WILL SEE YOU SOON\n";
                play_game(3);
            }
            else
            {
            	std::cout << "\n༼;´༎ຶ ۝ ༎ຶ༽: CONGRATULATIONS! I MEAN WHAT ELSE CAN I SAY? YOU BEAT THE GAME.\n" << "\n(ʘᴗʘ✿): NOICE\n";
            }
            break;
        }
        else if (guess<random)
        {
            if(guess>random-5)
                std::cout << "(◕ᴗ◕✿): VERY CLOSE - Your Guess Is A Little Low\n";
            else
            std::cout << "(◕ᴗ◕✿): Your Guess Is Too Low\n";
            std::cout << "tries left = " << try1--;
            if(try1 < 0)
            {
                std::cout << "\n\nಠ‿ಠ: HAHA YOU LOST THE GAME\n";
                break;
            }
            else
                std::cout << "\n\nTry again: ";
        }
        else
        {
            if(guess<random+5)
                std::cout << "(◕ᴗ◕✿): VERY CLOSE - Your Guess Is A Little High\n";
            else
            std::cout << "(◕ᴗ◕✿): Your Guess Is Too High\n";
            std::cout << "tries left = " << try1--;
            if(try1 < 0)
            {
                std::cout << "\n\nಠ‿ಠ: HAHA YOU LOST THE GAME";
                break;
            }
            else
                std::cout << "\n\nTry again: ";
        }
        
    }
}

int main()
{
    srand( (unsigned int) time(NULL) );
    int choice;
    std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< GUESS THE NUMBER GAME >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    do
    {
        std::cout << "\n0. Quit" << std::endl << "1. start" << std::endl << "enter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "(◕ᴗ◕✿): Thanks for playing\n";
            break;
        case 1:
            play_game(1);
            break;
        default:
            std::cout << "\nwrong choice\n";
            break;
        }
    }
    while(choice!=0);
}
