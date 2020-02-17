/** @file Mammal.hpp */
#include <string>
#ifndef MAMMAL
#define MAMMAL
#include "Animal.hpp"
// Declaration for the class Mammal
class Mammal : public Animal
{
//private variables that are unique to mammal class
private:
  bool hair_ = 0;
  bool airborne_ = 0;
  bool aquatic_ = 0;
  bool toothed_ = 0;
  bool fins_ = 0;
  bool tail_ = 0;
  int legs_ ;

  // public member functions that help construct the animal
public:
  //constructs animal
  Mammal();
  //creates name and if domestic/predator
  Mammal(std::string name, bool domestic = false, bool predator = false);
  //returns if has hair or not
  bool hasHair() const;
  //returns if airborne or not
  bool isAirborne() const;
  //returns if aquatic or not
  bool isAquatic() const;
  //returns if toothed or not
  bool isToothed() const;
  //returns if has fins or not
  bool hasFins() const;
  //returns if has tail or not
  bool hasTail() const;
  //returns length of legs
  int legs() const;
  //gives the animal hair
  void setHair();
  //makes the animal airborne
  void setAirborne();
  //makes animal aquatic
  void setAquatic();
  //makes animal toothed
  void setToothed();
  //gives animal fins
  void setFins();
  //gives animal tail
  void setTail();
  //sets length of legs
  void setLegs(int legs);

};

#endif
