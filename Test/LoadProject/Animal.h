#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
	std::string species_;

public:
	Animal();
	Animal(std::string species);
	~Animal() = default;

	void Eat();
	void Run();
	void WhatSpecies();
	virtual void Bark();
};

