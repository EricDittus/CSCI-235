/** @file Animal.hpp */
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

// Declaration for the class Animal
class Animal
{

//public functions that construct and create accessors for user that will be implemented in animal.cpp
public:
  //Default constructor
  Animal();
  //Giving animal a name, and declaring if it is domestic/predator
  Animal(std::string name, bool domestic = false, bool predator = false);
  //returns the name of the animal
  std::string getName() const;
  //returns whether or not the animal is domestic with a bool
  bool isDomestic() const;
  //returns  whether or not the animal is a predator with a bool
  bool isPredator() const;
  //allows the user to set the name of the animal
  void setName(std::string name);
  //allows the user to declare that the animal is domestic
  void setDomestic();
  //allows the user to declare that the animal is a predator
  void setPredator();

//private variables that cannot be directly accessed
private:
  std::string name_;
  bool domestic_;
  bool predator_;


};

#endif
