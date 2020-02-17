#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Bird.hpp"
#include "Fish.hpp"
#include "Mammal.hpp"


int main(){

  std::cout << "TESTING ANIMAL.HPP AND ANIMAL.CPP:\n" << std::endl;
  Animal dog = Animal("Rex the Dog",true,true);
  std::cout << "Animal() test :\nname=" << dog.getName() <<"\ndomestic_="<< dog.isDomestic() <<"\npredator_="<<dog.isPredator()<<std::endl;
  std::cout << "\ngetName() test:\n" << dog.getName() << std::endl;
  std::cout << "\nisDomestic() test:\n" << dog.isDomestic() << std::endl;
  std::cout << "\nisPredator() test:\n" << dog.isPredator() << std::endl;
  std::cout << "\nsetName() test:\n";
  dog.setName("Max the Dog");
  std::cout << dog.getName() << std::endl;
  std::cout << "\nsetDomestic() test:\n";
  dog.setDomestic();
  std::cout << dog.isDomestic() << std::endl;
  std::cout << "\nsetPredator() test:\n";
  dog.setPredator();
  std::cout << dog.isPredator() << std::endl;



  std::cout << "\nTESTING MAMMAL.HPP AND MAMMAL.CPP:\n" << std::endl;
  Mammal Bear = Mammal("Bear",false,true);
  std::cout << "Mammal() test :\nname=" << Bear.getName() <<"\ndomestic_="<< Bear.isDomestic() <<"\npredator_="<<Bear.isPredator()<<std::endl;
  std::cout << "\nhasHair() and setHair() test:\n";
  Bear.setHair();
  std::cout << "hasHair() -- > " << Bear.hasHair() << std::endl;
  std::cout << "\nisAirborne() and setAirborne test:\n";
  Bear.setAirborne();
  std::cout << "isAirborne() is NOT -- > " << Bear.isAirborne() << std::endl;
  std::cout << "\nisAquatic() and setAquatic test:\n";
  Bear.setAquatic();
  std::cout << "isAquatic() is NOT -- > " << Bear.isAquatic() << std::endl;
  std::cout << "\nisToothed() and setToothed() test:\n";
  Bear.setToothed();
  std::cout << "isToothed() is -- > " << Bear.isToothed() << std::endl;
  std::cout << "\nhasFins() and setFins() test:\n";
  Bear.setFins();
  std::cout << "hasFins() is NOT -- > " << Bear.hasFins() << std::endl;
  std::cout << "\nhasTail() and setTail() test:\n";
  Bear.setTail();
  std::cout << "hasTail() is -- > " << Bear.hasTail() << std::endl;
  std::cout << "\nlegs() and setLegs(int legs) test:\n";
  Bear.setLegs(4);
  std::cout << "Bear's legs are -- > " << Bear.legs() << " ft" << std::endl;



  std::cout << "\nTESTING FISH.HPP AND FISH.CPP:\n" << std::endl;
  Fish Tuna = Fish("Tuna",true,true);
  std::cout << "Fish() test :\nname=" << Tuna.getName() <<"\ndomestic_="<< Tuna.isDomestic()<<"\npredator_="<<Tuna.isPredator()<<std::endl;
  std::cout << "\nisVenomous() and setVenomous() test:\n";
  Tuna.setVenomous();
  std::cout << "isVenomous() is NOT -- > " << Tuna.isVenomous() << std::endl;



  std::cout << "\nTESING BIRD.HPP AND BIRD.CPP TEST:\n" << std::endl;
  Bird Eagle = Bird("Eagle",false,true);
  std::cout << "Bird() test :\nname=" << Eagle.getName() <<"\ndomestic_="<< Eagle.isDomestic()<<"\npredator_="<<Eagle.isPredator()<<std::endl;
  std::cout << "\nisAirbone() and setAirborne() test:\n";
  Eagle.setAirborne();
  std::cout << "isAirborne() is -- > " << Eagle.isAirborne()<< std::endl;
  std::cout << "\nisAquatic() and setAquatic() test:\n";
  Eagle.setAquatic();
  std::cout << "isAquatic() is -- > " << Eagle.isAquatic()<< std::endl;

  return 0;
}
