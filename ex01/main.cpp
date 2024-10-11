#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal* animalArr[20];

	for	(int i = 0; i < 10; i++) {
		animalArr[i] = new Cat();
	}
	for (int i = 10; i < 20; i++) {
		animalArr[i] = new Dog();
	}
	for (int i = 0; i < 20; i++) {
		animalArr[i]->makeSound();
	}
	for (int i = 0; i < 20; i++) {
		delete animalArr[i];
	}
	return 0;
}