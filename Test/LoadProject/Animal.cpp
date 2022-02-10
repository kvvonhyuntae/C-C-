#include "Animal.h"

Animal::Animal()
{
	species_ = "Not Defined";
}

Animal::Animal(std::string species)
{
	species_ = species;
}

void Animal::Eat()
{
	std::cout << "Eat food" << std::endl;
}

void Animal::Run()
{
	std::cout << "Run" << std::endl;
}

void Animal::WhatSpecies()
{
	std::cout << "This Animal is " << species_ << std::endl;
}

void Animal::Bark()
{
	std::cout << "Animal Bark" << std::endl;
}