
#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>

class Animal
{
protected:
    int age;
    int cost;
    int numOfBabies;
    int foodCost;
    double revenue;
    
public:
    Animal();
    int getAge();
    void setAge(int);
    int getCost();
    void setCost(int);
    int getBabies();
    void setBabies(int);
    int getFoodCost();
    void setFoodCost(int);
    double getRevenue();
    void setRevenue(double);
    void addBaby(int);
};

#endif /* Animal_hpp */
