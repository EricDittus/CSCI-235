/** @file Mammal.cpp*/
#include <string>
//Must include the Class Mammal definition to create the cunstructors and accessors
#include "Mammal.hpp"

//constructs the animal
Mammal::Mammal()
{
  hair_ = false;
  airborne_ = false;
  aquatic_ = false;
  toothed_ = false;
  fins_ = false;
  tail_ = false;
  legs_ = 0;
}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Mammal::Mammal(std::string name, bool domestic, bool predator)
{
  setName(name);
  if(domestic == true) {setDomestic();}
  if(predator == true) {setPredator();}
}

//Tells the user if the animal has hair
bool Mammal::hasHair() const
{
  if(hair_ == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Tells the user if the animal is airborne
bool Mammal::isAirborne() const
{
  if(airborne_ == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Tells the user if the animal is Aquatic
bool Mammal::isAquatic() const
{
  if(aquatic_ == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Tells the user if the animal is toothed
bool Mammal::isToothed() const
{
  if(toothed_ == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Tells the user if the animal has fins
bool Mammal::hasFins() const
{
  if(fins_ == true)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Tells the user if the animal has a tail
bool Mammal::hasTail() const
{
  if(venomous_ == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Sets the length of the animal's legs
void Mammal::setLegs(int legs)
{
  legs_ = legs;
}

//Returns the length of the legs
int Mammal::legs() const
{
  return legs_;
}

//Makes the animal be defined as having hair
void Mammal::setHair()
{
  hair_ = true;
}

//Makes the animal be defined as being airborne
void Mammal::setAirborne()
{
  airborne_ = true;
}

//Makes the animal defines as being aquatic
void Mammal::setAquatic()
{
  aquatic_ = true;
}

//Makes the animal defined as being toothed
void Mammal::setToothed()
{
  toothed_ = true;
}

//Makes the animal defined as having fins
void Mammal::setFins()
{
  fins_ = true;
}

//Makes the animal defined as having a tail
void Mammal::setTail()
{
  tail_ = true;
}
