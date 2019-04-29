#include "Menu.hpp"

//Switch case that returns 1 or 2 depending on the user input
int menu()
{
    int userInput = 0;
    
    std::cout << "1: Start Zoo Tycoon" << std::endl;
    std::cout << "2: Exit the program." << std::endl;
    
    userInput = inputValidationInt();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
                
        case 2:
            return 2;
    }
    
    return 0;
}

int animalMenu()
{
    int userInput = 0;
    
    std::cout << "1: Tiger" << std::endl;
    std::cout << "2: Penguin" << std::endl;
    std::cout << "3: Turtle" << std::endl;
    
    userInput = inputValidationThree();

    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
            
        case 3:
            return 3;
    }
    
    return 0;
}

int startBuyMenu()
{
    int userInput = 0;
    
    std::cout << "How many would you like to buy (1-2)" << std::endl;
    
    userInput = inputValidationInt();
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
    }
    
    return 0;
}

int runTimeScreen()
{
    int userInput = 0;
    
    std::cout << "1: Show Financials and Population" << std::endl;
    std::cout << "2: Buy more Animals" << std::endl;
    std::cout << "3: End the day" << std::endl;
    std::cout << "4: Quit the Game" << std::endl;
    
    userInput = inputValidationFour();
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
            
        case 3:
            return 3;
            
        case 4:
            return 4;
    }
    
    return 0;
}

int runBuyMenu()
{
    int userInput = 0;
    
    std::cout << "How many would you like to buy (1-10)" << std::endl;
    
    userInput = inputValidationTen();
    
    switch (userInput)
    {
        case 1:
            return 1;
            
        case 2:
            return 2;
            
        case 3:
            return 3;
            
        case 4:
            return 4;
            
        case 5:
            return 5;
            
        case 6:
            return 6;
            
        case 7:
            return 7;
            
        case 8:
            return 8;
            
        case 9:
            return 9;
            
        case 10:
            return 10;
    }
    
    return 0;
}
