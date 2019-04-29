/*********************************************************************
 ** Program name:Zoo Tycoon
 ** Author: Richard Joseph
 ** Date: 4/28/19
 ** Description: Virtual Zoo. That allows you to buy animals. Also  prints
                 out daily stats for eavh day.
 *********************************************************************/

#include <iostream>
#include "Zoo.hpp"
#include "Menu.hpp"

int main()
{
    int user = menu();
    int animal = 0;
    int buyNum = 0;
    int animalChoice = 0;
    
    srand(time(0));
    
    Zoo start;
    
    std::cout << "Welcome to Zoo Tycoon!" << std::endl;
    while(user != 2 && start.getBankrupt() == false)
    {
        std::cout << "Day: " << start.getCurrDay() << std::endl;
        std::cout << "Money: " << start.getMoney() << std::endl;
        std::cout << "What animals would you like to buy? The day will automatically end after selection." << std::endl;
        std::cout << "Starter Animals start at 1 day old. So when this Day ends they will automatcially be 2 Days old" << std::endl;
        animalChoice = animalMenu();
        buyNum = startBuyMenu();
        
        for(int i = 0; i < buyNum; i++)
        {
            if(animalChoice == 1)
            {
                start.buyTiger();
            }
            
            else if(animalChoice == 2)
            {
                start.buyPenguin();
            }
            
            else if(animalChoice == 3)
            {
                start.buyTurtle();
            }
        }
        
        
        start.endDay();
        
        int runMenu = runTimeScreen();
        
        while(runMenu != 4 && start.getBankrupt() == false)
        {
            if(runMenu == 1)
            {
                start.financials();
            }
            
            else if(runMenu == 2)
            {
                std::cout << "What animals would you like to buy?" << std::endl;
                animalChoice = animalMenu();
                buyNum = runBuyMenu();
                
                for(int i = 0; i < buyNum; i++)
                {
                    if(animalChoice == 1)
                    {
                        start.buyTiger();
                    }
                    
                    else if(animalChoice == 2)
                    {
                        start.buyPenguin();
                    }
                    
                    else if(animalChoice == 3)
                    {
                        start.buyTurtle();
                    }
                }
            }
            
            else if(runMenu == 3)
            {
                start.endDay();
            }
            
            if(start.getBankrupt() == true)
            {
                return 0;
            }
            
            runMenu = runTimeScreen();
        }
        
        user = menu();
    }
    
    return 0;
}
