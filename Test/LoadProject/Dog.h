#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog() = default;

	void Bark() override;
	void DogOrigFunc();
};

