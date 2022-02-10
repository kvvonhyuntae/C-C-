#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat() = default;

	void Bark() override;
	void CatOrigFunc();
};

