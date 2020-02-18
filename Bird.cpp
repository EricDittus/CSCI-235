/** @file Bird.cpp */
#include <string>
//Must include the Class Bird definition to create the cunstructors and accessors
#include "Bird.hpp"

//constructs the animal
Bird::Bird()
{
  airborne_ == false;
  aquatic_ == false;
}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Bird::Bird(std::string name, bool domestic, bool predator)
{
  setName(name);
  if(domestic == true) {setDomestic();}
  if(predator == true) {setPredator();}
}

//returns if the animal is airborne
bool Bird::isAirborne() const
{
  if(airborne_ == false)
	{
		return false;
	}
	else
	{
		return true;
	}
}

//returns if the animal is aquatic
bool Bird::isAquatic() const
{
  if(aquatic_ == false)
	{
		return false;
	}
	else
	{
		return true;
	}
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
