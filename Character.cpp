//Title: Project 1 - Character Class .cpp file
//Author: Allison Lee
//Brief description: Implementation of Character.hpp
//Date: September 5, 2023

#include "Character.hpp"
#include <iostream>
using namespace std;

/**
    Default constructor.
    Default-initializes all private members. 
    Default character name: "NAMELESS". 
    Booleans are default-initialized to False. 
    Default enum value: NONE. 
    Default Vitality, Max Armor, and Level: 0.
*/
Character::Character(){
    this->name_ = "NAMELESS";
    this->race_ = NONE; 
    this->vitality_ = 0; 
    this->armor_ = 0; 
    this->level_ = 0; 
    this->enemy_ = false;
}
/**
    Parameterized constructor.
    @param      : The name of the character (a string in UPPERCASE)
    @param      : The race of the character (a string)
    @param      : The character's vitality (a non-negative integer) , with default  
            value 0
    @param      : The character's max armor level (a non-negative integer), with 
            default value 0
    @param      : The character's level (non-negative integer), with default value 0
    @param      : A flag indicating whether the character is an enemy, with default 
            value false
    @post       : The private members are set to the values of the corresponding 
            parameters.
*/
Character::Character(std::string name, std::string race, int vitality, 
    int armor, int level, bool enemy){
    setName(name);
    setRace(race);
    if (vitality >= 0){
        this->vitality_ = vitality;
    }
    else {
        this->vitality_ = 0;
    }
    if (armor >= 0){
        this->armor_ = armor;
    }
    else {
        this->armor_ = 0;
    }
    if (level >= 0){
        this->level_ = level;
    }
    else {
        this->level_ = 0;
    }
    this->enemy_ = enemy;
}
/**
    @param  : the name of the Character
    @post   : sets the Character's title to the value of the parameter, 
                in UPPERCASE. Only alphabetical characters are allowed. 
                For example, attempting to create a character named 
                "TW3EDLEDUM2" should create a character named "TWEDLEDUM".
            : If the given parameter does not have any valid alphabetical
                characters, the character's name should be set to "NAMELESS".
*/
void Character::setName(const std::string& name){
    std::string characterName = "";
    for (int i = 0; i < name.length(); i++){
        if (isalpha(name[i])){
            characterName += toupper(name[i]);
        }
    }
    if (characterName == ""){
        this->name_ = "NAMELESS";
    }
    else {
        this->name_ = characterName;
    }
}
/**
    @return : the name of the Character
*/
std::string Character::getName() const {
    return name_;
}
/**
    @param  : the race of the Character (a string)
    @post   : sets the Character's race to the value of the parameter.
                If the given race was invalid, set race_ to NONE.
*/
void Character::setRace(const std::string& race){
    if (race == "HUMAN"){
        this->race_ = HUMAN;
    }
    else if (race == "ELF"){
        this->race_ = ELF;
    }
    else if (race == "DWARF"){
        this->race_ = DWARF;
    }
    else if (race == "LIZARD"){
        this->race_ = LIZARD;
    }
    else if (race == "UNDEAD"){
        this->race_ = UNDEAD;
    }
    else {
        this->race_ = NONE;
    }
}
/**
    @return : the race of the Character (a string)
*/
std::string Character::getRace() const{
    std::string r;
    if (this->race_ == NONE){
        r = "NONE";
    }
    else if (this->race_ == HUMAN){
        r = "HUMAN";
    }
    else if (this->race_ == ELF){
        r = "ELF";
    }
    else if (this->race_ == DWARF){
        r = "DWARF";
    }
    else if (this->race_ == LIZARD){
        r = "LIZARD";
    }
    else if (this->race_ == UNDEAD){
        r = "UNDEAD";
    }
    return r;
}
/**
    @param  : an integer vitality
    @pre    : vitality >= 0 : Characters cannot have negative health
    @post   : sets the vitality private member to the value of the parameter
*/
void Character::setVitality(const int& vitality){
    if (vitality >= 0){
        this->vitality_ = vitality;
    }
}
/**
    @return : the value stored in vitality_
*/
int Character::getVitality() const{
    return vitality_;
}
/**
    @param  : an integer armor level
    @pre    : armor >= 0 : Characters cannot have negative armor
    @post   : sets the armor private member to the value of the parameter
*/
void Character::setArmor(const int& armor){
    if (armor >= 0){
        this->armor_ = armor;
    }
}
/**
    @return : the value stored in armor_
*/
int Character::getArmor() const{
    return armor_;
}
/**
    @param  : an integer level
    @pre    : level >= 0 : Characters cannot have a negative
    @post   : sets the level private member to the value of the parameter
*/
void Character::setLevel(const int& level){
    if (level >= 0){
        this->level_ = level;
    }
}
/**
    @return : the value stored in level_
*/
int Character::getLevel() const{
    return level_;
}
/**
    @post   : sets the enemy flag to true
*/
void Character::setEnemy(){
    this->enemy_ = true;
}
/**
    @return true if the character is an enemy, false otherwise
    Note: this is an accessor function and must follow the same convention as all accessor  
        functions even if it is not called getEnemy
*/
bool Character::isEnemy() const{
    if (enemy_ == true){
        return true;
    }
    else {
        return false;
    }
}
