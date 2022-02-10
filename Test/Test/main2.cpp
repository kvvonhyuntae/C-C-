*#include <stdlib.h>
#include <iostream>
#include <vector>

class ArrayTestC
{
public:
	std::vector<double> test_array_;

public:
	ArrayTestC()
	{
		for (int count = 0; count < 5; count++)
		{
			test_array_.push_back(1.0);
		}
	}
	ArrayTestC(int array_len)
	{
		for (int count = 0; count < array_len; count++)
		{
			test_array_.push_back(1.0);
		}
	}

	void UpdateInputArray(std::vector<double>& target_array)
	{
		for (int count = 0; count < test_array_.size(); count++)
		{
			target_array.push_back(test_array_[count]);
		}
	}
};

void UpdateArrayTestC(ArrayTestC* atc)
{
	for (int count = 0; count < atc->test_array_.size(); count++)
	{
		double input;
		std::cout << "Input item: ";
		std::cin >> input;
		atc->test_array_[count] = input;
	}
}

void PrintArray(std::vector<double> target_array)
{
	for (int count = 0; count < target_array.size(); count++)
	{
		std::cout << target_array[count] << std::endl;
	}
}


int main()
{
	std::vector<double> arr;

	ArrayTestC* atc = new ArrayTestC(10);
	UpdateArrayTestC(atc);

	atc->UpdateInputArray(arr);

	PrintArray(arr);

	PrintArray(atc->test_array_);
}*