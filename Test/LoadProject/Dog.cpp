#include "Dog.h"

Dog::Dog()
	:Animal("Dog")
{
}

void Dog::Bark()
{
	std::cout << "Dog Bark" << std::endl;
}

void Dog::DogOrigFunc()
{
	std::cout << "Dog Orignal Func" << std::endl;
}