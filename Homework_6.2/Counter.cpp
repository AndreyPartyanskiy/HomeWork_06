#include "Counter.h"
#include <iostream>

	Counter :: Counter(int abc)
	{
		this->abc = abc;
	};

	void Counter :: increase()
	{
		abc++;
	};

	void Counter :: decrease()
	{
		abc--;
	};

	void Counter :: print()
	{
		std::cout << abc << std::endl;
	};