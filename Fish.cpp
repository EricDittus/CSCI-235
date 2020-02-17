/** @file Fish.cpp*/
#include <string>
//Must include the Class Fish definition to create the cunstructors and accessors
#include "Fish.hpp"

//constructs the animal
Fish::Fish()
{
}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Fish::Fish(std::string name, bool domestic, bool predator)
{
  setName(name);
  if(domestic == true) {setDomestic();}
  if(predator == true) {setPredator();}
}

//Returns if the fish is venomous or not
bool Fish::isVenomous() const
{
  return venomous_;
}

//Sets the fish defined as being venomous
void Fish::setVenomous()
{
  venomous_ = true;
}
