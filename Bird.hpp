/** @file Bird.hpp */
#include <string>
#ifndef BIRD
#define BIRD
#include "Animal.hpp"

// Declaration for the class Bird
class Bird : public Animal
{

//private variables that are solely unique to the Bird class
private:
  //both are boolean
  bool airborne_ = 0;
  bool aquatic_ = 0;

//public member functions that will construct a potential bird
public:
  //contructs bird
  Bird();
  //sets name, and if domestic/ppredator
  Bird(std::string name, bool domestic = false, bool predator = false);
  //returns whether or not it is airborne
  bool isAirborne() const;
  //returns whether or not it is aquatic
  bool isAquatic() const;
  //sets it to an airborne Bird
  void setAirborne();
  //sets it to an aquatic bird
  void setAquatic();
};

#endifv
