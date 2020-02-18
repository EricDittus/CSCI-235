/** @file Bird.cpp */
#include <string>
//Must include the Class Bird definition to create the cunstructors and accessors
#include "Bird.hpp"

//constructs the animal
Bird::Bird()
{
  name_="";
  domestic_=false;
  predator_=false;
  airborne_=false;
  aquatic_=false;
}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Bird::Bird(std::string name, bool domestic, bool predator)
{
  name_=name;
  domestic_=domestic;
  predator_=predator;
  airborne_=false;
  aquatic_=false;
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
  if(airborne_)
	{
		airborne_ = false;
	}
	else
	{
		airborne_ = true;
	}
}

//sets the bird as one that is aquatic
void Bird::setAquatic()
{
  if(aquatic_)
	{
		aquatic_ = false;
	}
	else
	{
		aquatic = true;
	}
}
