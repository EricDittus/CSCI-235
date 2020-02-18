/** @file Animal.cpp */
#include <string>
//Allows access to the animal.hpp file
#include "Animal.hpp"

//constructs the animal
Animal::Animal()
{
  name_ = "";
  domestic_ = false;
  predator_ = false;
}

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
  if(domestic_ == false){
    return false;
  }
  else
  {
    return true;
  }
}

//Gives the boolean value of the predator_ private variable.
bool Animal::isPredator() const
{
  if(predator_ == false){
    return false;
  }
  else
  {
    return true;
  }
}

//Sets, or resets, the name of the animal by changing the value of name_
void Animal::setName(std::string name)
{
  name_ = name;
}

//Sets the isDomestic function to return true by making the animal domestic
void Animal::setDomestic()
{
  if(domestic_==false)
  {
    domestic_=true;
  }
  else{
    domestic_ = false;
  }

}

//Sets the isPredator function to return true by making the animal a predator
void Animal::setPredator()
{
  if(predator_==false){
    predator_=true;
  }
  else{
    predator_ = false;
  }

}
