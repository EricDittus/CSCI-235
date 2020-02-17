/** @file Animal.cpp */
#include <string>
//Allows access to the animal.hpp file
#include "Animal.hpp"

//constructs the animal
Animal::Animal(){}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Animal::Animal(std::string name, bool domestic , bool predator )
{
  name_ = name;
  domestic_ = domestic;
  predator_ = predator;

}

//Gives the name of the animal to the user
std::string Animal::getName() const
{
  return name_;
}

//Gives the boolean value of the domestic_ private variable.
bool Animal::isDomestic() const
{
  return domestic_;
}

//Gives the boolean value of the predator_ private variable.
bool Animal::isPredator() const
{
  return predator_;
}

//Sets, or resets, the name of the animal by changing the value of name_
void Animal::setName(std::string name)
{
  name_ = name;
}

//Sets the isDomestic function to return true by making the animal domestic
void Animal::setDomestic()
{
  domestic_ = true;
}

//Sets the isPredator function to return true by making the animal a predator
void Animal::setPredator()
{
  predator_ = true;
}
