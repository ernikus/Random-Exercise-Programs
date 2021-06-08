//Program:      DivideBy5
//Soln Author:  ernikus

#include <iostream>

void print5(int number)
{
	for (int i = number; i > 0; i -= 5)
	{
		std::cout << i << " ";
	}
}

int main()
{
	print5(555);
}