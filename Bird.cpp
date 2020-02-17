/** @file Bird.cpp */
#include <string>
//Must include the Class Bird definition to create the cunstructors and accessors
#include "Bird.hpp"

//constructs the animal
Bird::Bird()
{

}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Bird::Bird(std::string name, bool domestic = 0, bool predator = 0)
{
  setName(name);
  if(domestic == true) {setDomestic();}
  if(predator == true) {setPredator();}
}

//returns if the animal is airborne
bool Bird::isAirborne() const
{
  return airborne_;
}

//returns if the animal is aquatic
bool Bird::isAquatic() const
{
  return aquatic_;
}

//sets the bird as one that is airborne
void Bird::setAirborne()
{
  airborne_ = true;
}

//sets the bird as one that is aquatic
void Bird::setAquatic()
{
  aquatic_ = true;
}
