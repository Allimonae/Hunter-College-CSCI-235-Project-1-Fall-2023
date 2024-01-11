//Title: Project 1 - Character main function
//Author: Allison Lee
//Brief description: Used for testing Character.hpp and Character.cpp
//Date: September 5, 2023

#include "Character.hpp"
#include <iostream>
using namespace std;

int main(){
    Character new_character;
    std::string name = new_character.getName();
    std::string race = new_character.getRace();
    int vitality = new_character.getVitality();
    int armor = new_character.getArmor();
    int level = new_character.getLevel();
    bool enemy = new_character.isEnemy();
    std::cout << name << endl << race << endl << vitality << endl << 
       armor << endl << level << endl << enemy << endl;
    new_character.setName("daniel");
    new_character.setRace("HUMAN");
    new_character.setVitality(3000);
    new_character.setArmor(300);
    new_character.setLevel(30);
    new_character.setEnemy();
    name = new_character.getName();
    race = new_character.getRace();
    vitality = new_character.getVitality();
    armor = new_character.getArmor();
    level = new_character.getLevel();
    enemy = new_character.isEnemy();
    std::cout << name << endl << race << endl << vitality << endl << 
        armor << endl << level << endl << enemy << endl;
}