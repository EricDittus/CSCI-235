/** @file Fish.cpp*/
#include <string>
//Must include the Class Fish definition to create the cunstructors and accessors
#include "Fish.hpp"

//constructs the animal
Fish::Fish()
{
  name_="";
  domestic_=false;
  predator_=false;
  venomous_=false;
}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Fish::Fish(std::string name, bool domestic, bool predator)
{
  name_=name;
  domestic_=domestic;
  predator_=predator;
  venomous_=false;
}

//Returns if the fish is venomous or not
bool Fish::isVenomous() const
{
  return venomous_;
}

//Sets the fish defined as being venomous
void Fish::setVenomous()
{
  if(venomous_)
	{
		venomous_ = false;
	}
	else
	{
		venomous_ = true;
	}
}
