/** @file Mammal.cpp*/
#include <string>
//Must include the Class Mammal definition to create the cunstructors and accessors
#include "Mammal.hpp"

//constructs the animal
Mammal::Mammal(){}

//Gives, the name and features of animal by accessing and changing the values of the private variables.
Mammal::Mammal(std::string name, bool domestic = 0, bool predator = 0)
{
  setName(name);
  if(domestic == true) {setDomestic();}
  if(predator == true) {setPredator();}
}

//Tells the user if the animal has hair
bool Mammal::hasHair() const
{
  return hair_;
}

//Tells the user if the animal is airborne
bool Mammal::isAirborne() const
{
  return airborne_;
}

//Tells the user if the animal is Aquatic
bool Mammal::isAquatic() const
{
  return aquatic_;
}

//Tells the user if the animal is toothed
bool Mammal::isToothed() const
{
  return toothed_;
}

//Tells the user if the animal has fins
bool Mammal::hasFins() const
{
 return fins_;
}

//Tells the user if the animal has a tail
bool Mammal::hasTail() const
{
  return tail_;
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

//Sets the length of the animal's legs
void Mammal::setLegs(int legs)
{
  legs_ = legs;
}
