
#include "Animal.hpp"

Animal::Animal()
{
    age = 1;
    cost = 0;
    numOfBabies = 0;
    foodCost = 0;
    revenue = 0;
}

int Animal::getAge()
{
    return age;
}

void Animal::setAge(int input)
{
    age = input;
}

int Animal::getCost()
{
    return cost;
}

void Animal::setCost(int input)
{
    cost = input;
}

int Animal::getBabies()
{
    return numOfBabies;
}

void Animal::setBabies(int input)
{
    numOfBabies = input;
}

int Animal::getFoodCost()
{
    return foodCost;
}

void Animal::setFoodCost(int input)
{
    foodCost = input;
}

double Animal::getRevenue()
{
    return revenue;
}

void Animal::setRevenue(double input)
{
    revenue = input;
}

void Animal::addBaby(int x)
{
    numOfBabies += x;
}
