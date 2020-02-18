/** @file Mammal.cpp*/
#include <string>
//Must include the Class Mammal definition to create the cunstructors and accessors
#include "Mammal.hpp"

//constructs the animal
Mammal::Mammal()
{
  name_ ="";
  domestic_ = false;
  predator_ = false;
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
  name_=name;
  domestic_=domestic;
  predator_=predator;
  hair_ = false;
  airborne_= false;
  aquatic_= false;
  toothed_= false;
  fins_= false;
  tail_= false;
  legs_= 0;

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
  if(hair_)
  {
    hair_=false;
  }
  else
  {
    hair_=true;
  }
}

//Makes the animal be defined as being airborne
void Mammal::setAirborne()
{
  if(airborne_)
  {
    airborne_=false;
  }
  else
  {
    airborne_=true;
  }
}

//Makes the animal defines as being aquatic
void Mammal::setAquatic()
{
  if(aquatic_)
  {
    aquatic_=false;
  }
  else
  {
    aquatic_=true;
  }
}

//Makes the animal defined as being toothed
void Mammal::setToothed()
{
  if(toothed_)
  {
    toothed_=false;
  }
  else
  {
    toothed_=true;
  }
}

//Makes the animal defined as having fins
void Mammal::setFins()
{
  if(fins_)
  {
    fins_=false;
  }
  else
  {
    fins_=true;
  }
}

//Makes the animal defined as having a tail
void Mammal::setTail()
{
  if(tail_)
  {
    tail_=false;
  }
  else
  {
    tail_=true;
  }
}
