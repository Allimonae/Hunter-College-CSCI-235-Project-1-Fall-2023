//Title: Project 1 - Character Class .hpp file
//Author: Allison Lee
//Brief description: Interface for Character.cpp
//Date: September 5, 2023

#ifndef PROJECT1_CHARACTER_CLASS_
#define PROJECT1_CHARACTER_CLASS_

#include <iostream>
using namespace std;

enum Race {NONE, HUMAN, ELF, DWARF, LIZARD, UNDEAD};
class Character {
private:
    // The name of the character (a string in UPPERCASE)
    std::string name_;
    // The race of the character (an enum)
    Race race_;
    // The character's vitality (a non-negative integer)
    int vitality_;
    // The character's max armor level (a non-negative integer)
    int armor_;
    // The character's level (a non-negative integer)
    int level_;
    // A flag indicating whether the character is an enemy
    bool enemy_;
public:
    /**
        Default constructor.
        Default-initializes all private members. 
        Default character name: "NAMELESS". 
        Booleans are default-initialized to False. 
        Default enum value: NONE. 
        Default Vitality, Max Armor, and Level: 0.
    */
    Character();
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
    Character(std::string name, std::string race, 
        int vitality = 0, int armor = 0, int level = 0, bool enemy = false);
    /**
        @param  : the name of the Character
        @post   : sets the Character's title to the value of the parameter, 
                    in UPPERCASE. Only alphabetical characters are allowed. 
                    For example, attempting to create a character named 
                    "TW3EDLEDUM2" should create a character named "TWEDLEDUM".
                : If the given parameter does not have any valid alphabetical
                    characters, the character's name should be set to "NAMELESS".
    */
    void setName(const std::string& name);
    /**
        @return : the name of the Character
    */
    std::string getName() const;
    /**
        @param  : the race of the Character (a string)
        @post   : sets the Character's race to the value of the parameter.
                    If the given race was invalid, set race_ to NONE.
    */
    void setRace(const std::string& race);
    /**
        @return : the race of the Character (a string)
    */
    std::string getRace() const;
    /**
        @param  : an integer vitality
        @pre    : vitality >= 0 : Characters cannot have negative health
        @post   : sets the vitality private member to the value of the parameter
    */
    void setVitality(const int& vitality);
    /**
        @return : the value stored in vitality_
    */
    int getVitality() const;
    /**
        @param  : an integer armor level
        @pre    : armor >= 0 : Characters cannot have negative armor
        @post   : sets the armor private member to the value of the parameter
    */
    void setArmor(const int& armor);
    /**
        @return : the value stored in armor_
    */
    int getArmor() const;
    /**
        @param  : an integer level
        @pre    : level >= 0 : Characters cannot have a negative
        @post   : sets the level private member to the value of the parameter
    */
    void setLevel(const int& level);
    /**
        @return : the value stored in level_
    */
    int getLevel() const;
    /**
        @post   : sets the enemy flag to true
    */
    void setEnemy();
    /**
        @return true if the character is an enemy, false otherwise
        Note: this is an accessor function and must follow the same convention as all accessor  
            functions even if it is not called getEnemy
    */
    bool isEnemy() const;
}; //end Class
#endif