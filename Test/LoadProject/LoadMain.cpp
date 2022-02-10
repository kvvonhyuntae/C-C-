#include "Dog.h"
#include "Cat.h"
#include <vector>

void main()
{
	Animal* animal = new Animal();
	Dog* dog = new Dog();
	Cat* cat = new Cat();

	animal->WhatSpecies();
	animal->Eat();
	animal->Run();
	animal->Bark();
	
	dog->WhatSpecies();
	dog->Eat();
	dog->Run();
	dog->Bark();
	dog->DogOrigFunc();

	cat->WhatSpecies();
	cat->Eat();
	cat->Run();
	cat->Bark();
	cat->CatOrigFunc();

	std::cout << "\n\n다형성 테스트" << std::endl;

	Animal* animal_dog = new Dog();
	animal_dog->WhatSpecies();
	animal_dog->Eat();
	animal_dog->Run();
	animal_dog->Bark();
	//animal_dog->DogOrigFunc();
	
	Animal* animal_cat = new Cat();
	animal_cat->WhatSpecies();
	animal_cat->Eat();
	animal_cat->Run();
	animal_cat->Bark();
	//animal_cat->CatOrigFunc();

	std::cout << "\n\n다형성을 이용한 서로 다른 객체의 한개 Vector 사용" << std::endl;

	std::vector<Dog*> dog_vec;
	dog_vec.push_back(dog);
	//dog_vec.push_back(animal_dog);
	//dog_vec.push_back(cat);

	std::vector<Cat*> cat_vec;
	cat_vec.push_back(cat);
	//cat_vec.push_back(animal_cat);
	//cat_vec.push_back(dog);


	std::vector<Animal*> animal_vec;
	animal_vec.push_back(animal_dog);
	animal_vec.push_back(animal_cat);
	animal_vec.push_back(dog);
	animal_vec.push_back(cat);

	for (auto a : animal_vec)
	{
		a->Bark();
		if (a->species_ == "Cat")
		{
			((Cat*)a)->CatOrigFunc();
		}
		else
		{
			((Dog*)a)->DogOrigFunc();
		}
	}
}