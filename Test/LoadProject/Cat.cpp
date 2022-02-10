#include "Cat.h"

Cat::Cat()
	:Animal("Cat")
{
}

void Cat::Bark()
{
	std::cout << "Cat Bark" << std::endl;
}

void Cat::CatOrigFunc()
{
	std::cout << "Cat Orignal Func" << std::endl;
}