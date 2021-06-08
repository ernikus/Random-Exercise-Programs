//Program:      Cat80Times
//Soln Author:  ernikus

#include <iostream>

void printWord(std::string word)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << word << " ";
		}

		std::cout << std::endl;
	}
}

int main()
{
	printWord("cat");
}