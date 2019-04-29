#ifndef Zoo_hpp
#define Zoo_hpp

#include <iostream>
#include <string>
#include <iterator>
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"

class Zoo
{
private:
    double money;
    int currDay;
    double foodCost;
    double revenue;
    int tigerPop;
    int penguinPop;
    int turtlePop;
    int animalPop;
    int tigerCap;
    int penguinCap;
    int turtleCap;
    Tiger *tiger;
    Penguin *penguin;
    Turtle *turtle;
    bool bankrupt;
    
public:
    Zoo();
    double getRevenue();
    void setRevenue(double);
    int getCurrDay();
    void setCurrDay(int);
    double getMoney();
    bool getBankrupt();
    void setBankrupt(bool);
    int getTigerPop();
    int getPenguinPop();
    int getTurtlePop();
    Tiger getTiger(int);
    Penguin getPenguin(int);
    Turtle getTurtles(int);
    void buyTiger();
    void buyPenguin();
    void buyTurtle();
    void babyTiger(); //Tiger Birth, no money spent
    void babyPenguin(); //Penguin birth, no money spent
    void babyTurtle(); //Turtle Birth, no money spent
    void removeTiger(); //Death of Tiger
    void removePenguin(); //Death of Penguin
    void removeTurtle(); //Death of Turtle
    void sickAnimal(); //End of day Function
    void haveBabies(); //End of day Function
    void tigerBonus(); //End of day Function
    void feed();//End of Day Function
    void dailyRevenue(); //End of day Function
    void endDay(); //Ages Animals
    void financials(); //End of day Function
    void incTigerCap();
    void incPenguinCap();
    void incTurtleCap();
    void bankruptcy();
    ~Zoo();
};

#endif /* Zoo_hpp */
