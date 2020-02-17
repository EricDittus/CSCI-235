/** @file Fish.hpp */
#include <string>
#ifndef FISH
#define FISH
#include "Animal.hpp"
#include "Mammal.hpp"
// Declaration for the class Fish
class Fish : public Animal
{

//private variables that are unique to this Class
//i guess because there are poisonous fish?
private:
  bool venomous_;

//Public member functions to be used by .hpp
public:
  //Constructs the fish
  Fish();
  //creates name of fish, and is domestic/predator
  Fish(std::string name, bool domestic = false, bool predator = false);
  //returns whether or not the fish is venomous
  bool isVenomous() const;
  //sets fish to be venomous
  void setVenomous();

};

#endif
