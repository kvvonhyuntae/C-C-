#include <stdlib.h>
#include <iostream>

class ArrayTestC
{
public:
	double* test_array_;
	int array_len_;

public:
	ArrayTestC()
	{
		array_len_ = 5;
		test_array_ = new double[5];
		for (int count = 0; count < 5; count++)
		{
			test_array_[count] = 1.0;
		}
	}
	ArrayTestC(int array_len)
	{
		array_len_ = array_len;
		test_array_ = new double[array_len];
		for (int count = 0; count < array_len; count++)
		{
			test_array_[count] = 1.0;
		}
	}

	void UpdateInputArray(double* target_array)
	{
		for (int count = 0; count < array_len_; count++)
		{
			target_array[count] = test_array_[count];
		}
	}
};

void UpdateArrayTestC(ArrayTestC* atc)
{
	for (int count = 0; count < atc->array_len_; count++)
	{
		double input;
		std::cout << "Input item: ";
		std::cin >> input;
		atc->test_array_[count] = input;
	}
}

void PrintArray(double* target_array, int arr_len)
{
	for (int count = 0; count < arr_len; count++)
	{
		std::cout << target_array[count] << std::endl;
	}
}


int main()
{
	const int len = 10;
	double arr[len];

	ArrayTestC* atc = new ArrayTestC(len);
	UpdateArrayTestC(atc);

	atc->UpdateInputArray(arr);

	PrintArray(arr, len);

	PrintArray(atc->test_array_, atc->array_len_);

	/*
	ArrayTestC atc(len);
	UpdateArrayTestC(atc);

	atc.UpdateInputArray(arr);

	PrintArray(arr, len);

	PrintArray(atc.test_array_, atc.array_len_);
	*/
}