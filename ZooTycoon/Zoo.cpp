#include "Zoo.hpp"

Zoo::Zoo()
{
    money = 100000;
    currDay = 0;
    foodCost = 50;
    revenue = 0;
    tigerPop = 0;
    penguinPop = 0;
    turtlePop = 0;
    tigerCap = 10;
    turtleCap = 10;
    penguinCap = 10;
    tiger = new Tiger[tigerCap]();
    penguin = new Penguin[penguinCap]();
    turtle = new Turtle[turtleCap]();
    bankrupt = false;
    animalPop = tigerPop + penguinPop + turtlePop;
}

double Zoo::getRevenue()
{
    return revenue;
}

void Zoo::setRevenue(double gross)
{
    revenue = gross;
}

int Zoo::getCurrDay()
{
    return currDay;
}

void Zoo::setCurrDay(int day)
{
    currDay = day;
}

double Zoo::getMoney()
{
    return money;
}

bool Zoo::getBankrupt()
{
    return bankrupt;
}

void Zoo::setBankrupt(bool bankruptcy)
{
    bankrupt = bankruptcy;
}

int Zoo::getTigerPop()
{
    return tigerPop;
}

int Zoo::getPenguinPop()
{
    return penguinPop;
}

int Zoo::getTurtlePop()
{
    return turtlePop;
}

Tiger Zoo::getTiger(int userIn)
{
    return tiger[userIn];
}

Penguin Zoo::getPenguin(int userIn)
{
    return penguin[userIn];
}

Turtle Zoo::getTurtles(int userIn)
{
    return turtle[userIn];
}

void Zoo::buyTiger()
{
    incTigerCap();

    if (currDay == 0)
    {
        for(int i = tigerPop; i < tigerPop + 1; i++)
        {
            tiger->setAge(1);
            tiger[i].getAge();
            tiger[i].getCost();
            tiger[i].getBabies();
            tiger[i].getFoodCost();
            tiger[i].getRevenue();
        }
    }
    
    else
    {
        for(int j = tigerPop; j < tigerPop + 1; j++)
        {
            tiger->setAge(3);
            tiger[j].getAge();
            tiger[j].getCost();
            tiger[j].getBabies();
            tiger[j].getFoodCost();
            tiger[j].getRevenue();
        }
    }
    
    tigerPop++;
    
    money -= 10000;
}

void Zoo::removeTiger()
{
    int randTiger = rand() % tigerPop;
    
    Tiger *tempArray = new Tiger[tigerCap];
    
    for(int i = 0; i < randTiger; i++)
    {
        tempArray[i] = tiger[i];
    }
    
    for(int j = randTiger + 1; j < tigerPop; j++)
    {
        tempArray[j - 1] = tiger[j];
    }
    
    delete [] tiger;
    
    tiger = new Tiger[tigerCap]();
    
    for(int k = 0; k < tigerPop; k++)
    {
        tiger[k].setAge(tempArray[k].getAge());
        tiger[k].setCost(tempArray[k].getCost());
        tiger[k].setBabies(tempArray[k].getBabies());
        tiger[k].setFoodCost(tempArray[k].getFoodCost());
        tiger[k].setRevenue(tempArray[k].getRevenue());
    }
    
    delete [] tempArray;
    
    tigerPop--;
 
}

void Zoo::buyPenguin()
{
    incPenguinCap();

    if (currDay == 0)
    {
        for(int i = penguinPop; i < penguinPop; i++)
        {
            penguin->setAge(1);
            penguin[i].getAge();
            penguin[i].getCost();
            penguin[i].getBabies();
            penguin[i].getFoodCost();
            penguin[i].getRevenue();
        }
    }
    
    else
    {
        for(int j = penguinPop; j < penguinPop; j++)
        {
            penguin->setAge(3);
            penguin[j].getAge();
            penguin[j].getCost();
            penguin[j].getBabies();
            penguin[j].getFoodCost();
            penguin[j].getRevenue();
        }
    }
    
    penguinPop++;
    money -= 1000;
    

}

void Zoo::removePenguin()
{
    int randPenguin = rand() % penguinPop;
    
    Penguin *tempArray = new Penguin[penguinCap];

    for(int i = 0; i < randPenguin; i++)
    {
        tempArray[i] = penguin[i];
    }
    
    for(int j = randPenguin + 1; j < penguinPop; j++)
    {
        tempArray[j - 1] = penguin[j];
    }
    
    delete [] penguin;
    
    penguin = new Penguin[penguinCap]();
    
    for(int k = 0; k < penguinPop; k++)
    {
        penguin[k].setAge(tempArray[k].getAge());
        penguin[k].setCost(tempArray[k].getCost());
        penguin[k].setBabies(tempArray[k].getBabies());
        penguin[k].setFoodCost(tempArray[k].getFoodCost());
        penguin[k].setRevenue(tempArray[k].getRevenue());
    }
    
    penguinPop--;
    
}

void Zoo::buyTurtle()
{
    incTurtleCap();

    if (currDay == 0)
    {
        for(int i = turtlePop; i < turtlePop; i++)
        {
            turtle->setAge(1);
            turtle[i].getAge();
            turtle[i].getCost();
            turtle[i].getBabies();
            turtle[i].getFoodCost();
            turtle[i].getRevenue();
        }
    }
    
    else
    {
        for(int j = turtlePop; j < turtlePop; j++)
        {
            turtle->setAge(3);
            turtle[j].getAge();
            turtle[j].getCost();
            turtle[j].getBabies();
            turtle[j].getFoodCost();
            turtle[j].getRevenue();
        }
    }
    
    turtlePop++;
    money -= 100;
    
}

void Zoo::removeTurtle()
{
    int randTurtle = rand() % turtlePop;
    
    Turtle *tempArray = new Turtle[turtleCap];

    for(int i = 0; i < randTurtle; i++)
    {
        tempArray[i] = turtle[i];
    }
    
    for(int j = randTurtle + 1; j < turtlePop; j++)
    {
        tempArray[j - 1] = turtle[j];
    }
    
    delete [] turtle;
    
    turtle = new Turtle[turtleCap]();
    
    for(int k = 0; k < turtlePop; k++)
    {
        turtle[k].setAge(tempArray[k].getAge());
        turtle[k].setCost(tempArray[k].getCost());
        turtle[k].setBabies(tempArray[k].getBabies());
        turtle[k].setFoodCost(tempArray[k].getFoodCost());
        turtle[k].setRevenue(tempArray[k].getRevenue());
    }
    
    delete [] tempArray;
    
    turtlePop--;
}

void Zoo::feed()
{
    double tigerFood;
    double penguinFood;
    double turtleFood;
    double totalFood;
    
    tigerFood = foodCost * (tiger->getFoodCost()) * tigerPop;
    penguinFood = foodCost * (penguin->getFoodCost()) * penguinPop;
    turtleFood = foodCost * (turtle->getFoodCost()) * turtlePop;
    totalFood = tigerFood + penguinFood + turtleFood;
    
    std::cout << "The total food cost for the day is: " << totalFood << std::endl;
    
    money -= totalFood;
}

void Zoo::dailyRevenue()
{
    double tigerRevenue;
    double penguinRevenue;
    double turtleRevenue;
    double totalRevenue;
    
    tigerRevenue = (tiger->getRevenue()) * tigerPop * (tiger->getCost());
    penguinRevenue = (penguin->getRevenue()) * penguinPop * (penguin->getCost());
    turtleRevenue = (turtle->getRevenue()) * turtlePop * (turtle->getCost());
    
    totalRevenue = tigerRevenue + penguinRevenue + turtleRevenue;
    
    money += totalRevenue;
    
    std::cout << "The total revenue for today is: " << totalRevenue << std::endl;
}

void Zoo::sickAnimal()
{
    int animal;
    
    animal = (rand() % 9) + 1;
    
    if(animal == 1 && tigerPop > 0)
    {
        std::cout << "A tiger has become sick and died." << std::endl;
        removeTiger();
    }
    
    else if(animal == 2 && penguinPop > 0)
    {
        std::cout << "A penguin has become sick and died." << std::endl;
        removePenguin();
    }
    
    else if(animal == 3 && turtlePop > 0)
    {
        std::cout << "A turtle has become sick and died." << std::endl;
        removeTurtle();
    }
    
    else
    {
        std::cout << "All of your animals in the Zoo are healthy today." << std::endl;
    }
}

void Zoo::haveBabies()
{
    incTigerCap();
    incTurtleCap();
    incTurtleCap();
    
    int animal;
    int arrayElement;
    
    animal = (rand() % 15) + 1;
    
    if(animal == 1 && tigerPop > 0)
    {
        arrayElement = rand() % tigerPop;
        
        if((getTiger(arrayElement).getAge()) >= 3)
        {
            std::cout << "One of your tigers had a baby!" << std::endl;
            babyTiger();
        }
    }
    
    else if(animal == 2 && penguinPop > 0)
    {
        arrayElement = rand() % penguinPop;
        
        if((getPenguin(arrayElement).getAge()) >= 3)
        {
            std::cout << "One of your Penguins had 5 babies!" << std::endl;
            babyPenguin();
        }
    }
    
    else if(animal == 3 && turtlePop > 0)
    {
        arrayElement = rand() % turtlePop;
        
        if((getTurtles(arrayElement).getAge()) >= 3)
        {
            std::cout << "One of your Turtles had 10 babies!" << std::endl;
            babyTurtle();
        }
    }
    
    else
    {
        std::cout << "No babies have been born at the Zoo today." << std::endl;
    }
    
    incTigerCap();
    incTurtleCap();
    incTurtleCap();

}

void Zoo::incTigerCap()
{
    if(tigerCap <= tigerPop)
    {
        int oldCap = tigerCap;
        tigerCap *= 2;
        //Tiger tempArray[tigerCap];
        
        Tiger *tempArray = new Tiger[tigerCap]();
        
        for(int i = 0; i < oldCap; i++)
        {
            tempArray[i] = tiger[i];
        }
        
        delete [] tiger;
        
        tiger = new Tiger[tigerCap];
        
        for(int j = 0; j < tigerCap; j++)
        {
            tiger[j].setAge(tempArray[j].getAge());
            tiger[j].setCost(tempArray[j].getCost());
            tiger[j].setBabies(tempArray[j].getBabies());
            tiger[j].setFoodCost(tempArray[j].getFoodCost());
            tiger[j].setRevenue(tempArray[j].getRevenue());
        }
        
        delete [] tempArray;
    }

}

void Zoo::incPenguinCap()
{
    if(penguinCap <= penguinPop)
    {
        int oldCap = penguinCap;
        penguinCap *= 2;
        Penguin *tempArray = new Penguin[penguinCap]();

        for(int i = 0; i < oldCap; i++)
        {
            tempArray[i] = penguin[i];
        }
        
        delete [] penguin;
        
        penguin = new Penguin[penguinCap];
        
        for(int j = 0; j < penguinCap; j++)
        {
            penguin[j].setAge(tempArray[j].getAge());
            penguin[j].setCost(tempArray[j].getCost());
            penguin[j].setBabies(tempArray[j].getBabies());
            penguin[j].setFoodCost(tempArray[j].getFoodCost());
            penguin[j].setRevenue(tempArray[j].getRevenue());
        }
        delete [] tempArray;

    }

}

void Zoo::incTurtleCap()
{
    if(turtleCap <= turtlePop)
    {
        int oldCap = turtleCap;
        
        turtleCap *= 2;
        Turtle *tempArray = new Turtle[turtleCap]();

        for(int i = 0; i < oldCap; i++)
        {
            tempArray[i] = turtle[i];
        }
        
        delete [] turtle;
        
        turtle = new Turtle[turtleCap];
        
        for(int j = 0; j < turtleCap; j++)
        {
            turtle[j].setAge(tempArray[j].getAge());
            turtle[j].setCost(tempArray[j].getCost());
            turtle[j].setBabies(tempArray[j].getBabies());
            turtle[j].setFoodCost(tempArray[j].getFoodCost());
            turtle[j].setRevenue(tempArray[j].getRevenue());
        }
        
        delete [] tempArray;
    }

}

void Zoo::financials()
{
    std::cout << "Day: " << this->getCurrDay() << std::endl;
    std::cout << "Money: " << this->getMoney() << std::endl;
    std::cout << "Tiger Population: " << this->getTigerPop() << std::endl;
    std::cout << "Penguin Population: " << this->getPenguinPop() << std::endl;
    std::cout << "Turtle Population: " << this->getTurtlePop() << std::endl;
}

void Zoo::endDay()
{
    currDay++;
    
    for(int i = 0; i < tigerPop; i++)
    {
        tiger[i].setAge(tiger[i].getAge() + 1);
    }
    
    for(int j = 0; j < penguinPop; j++)
    {
        penguin[j].setAge(penguin[j].getAge() + 1);
    }
    
    for(int k = 0; k < turtlePop; k++)
    {
        turtle[k].setAge(turtle[k].getAge() + 1);
    }
    
    dailyRevenue();
    feed();
    haveBabies();
    sickAnimal();
    tigerBonus();
    financials();
    bankruptcy();
}

Zoo::~Zoo()
{
    delete [] tiger;
    delete [] penguin;
    delete [] turtle;
}

void Zoo::babyTiger()
{
    for(int i = tigerPop; i < tigerPop + 1; i++)
    {
        tiger->setAge(1);
        tiger[i].getAge();
        tiger[i].getCost();
        tiger[i].getBabies();
        tiger[i].getFoodCost();
        tiger[i].getRevenue();
    }
    
    tigerPop++;
    incTigerCap();
}


void Zoo::babyPenguin()
{
    for(int i = penguinPop; i < penguinPop; i++)
    {
        penguin->setAge(1);
        penguin[i].getAge();
        penguin[i].getCost();
        penguin[i].getBabies();
        penguin[i].getFoodCost();
        penguin[i].getRevenue();
    }

    penguinPop += 5;
    incPenguinCap();
    
}

void Zoo::babyTurtle()
{
    for(int i = turtlePop; i < turtlePop; i++)
    {
        turtle->setAge(1);
        turtle[i].getAge();
        turtle[i].getCost();
        turtle[i].getBabies();
        turtle[i].getFoodCost();
        turtle[i].getRevenue();
    }

    
    turtlePop += 10;
    incTurtleCap();
}

void Zoo::tigerBonus()
{
    double tigerRevenue;
    int randBonus;
    int randEvent;
    
    randEvent = rand() % 10;
    
    if(randEvent == 0 && tigerPop > 0)
    {
        randBonus = (rand() % 501) + 250;
        
        tigerRevenue = tigerPop * randBonus;
        
        money += tigerRevenue;
        std::cout << "It is national Tiger Day! You have increased Tiger revenue for the day!" << std::endl;
        std::cout << "You earned " << randBonus << " per Tiger in your Zoo!" << std::endl;
        std::cout << "The total  Bonus revenue for today is: " << tigerRevenue << std::endl;
    }

}

void Zoo::bankruptcy()
{
    if(getMoney() < 0)
    {
        std::cout << "You have no money left. You have gone bankrupt." << std::endl;
        setBankrupt(true);
    }

}
