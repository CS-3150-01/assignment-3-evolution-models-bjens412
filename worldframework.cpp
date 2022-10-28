#include <iostream>
#include <stdio.h>
using namespace std;

class World{
   public:
        int capacity;
        float chanceOfSpawning;

        Creature createCreature(float chanceOfSpawning){
        }

        Food createFood(float chanceOfSpawning){
    }

};

class Creature: public World, public Actions{
    float fertility;
    int hunger;

    void move (int index){

    }

    void eat (){

    }

    Creature reproduce(float fertility, Creature c2){

    }

    void die (){

    }

    int getHunger(){

    }

    int getFertility(){
        
    }
};

class Actions{
    public:
    void move();
    void eat();
    void reproduce();
    void die();
};

class Food{
    public:
    int nutrition;
    float toxicity;

    int getNutrition(){

    }

    float getToxicity(){

    }
};

