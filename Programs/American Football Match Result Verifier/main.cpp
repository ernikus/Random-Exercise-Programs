//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input, const bool output, const bool answer)
{
	std::cout << "Input:\t" << input << std::endl;
	std::cout << "Output:\t" << output << std::endl;
	std::cout << "Answer:\t" << answer << std::endl;


	if (output == answer)
	{
		std::cout << "Correct Answer!" << std::endl << std::endl;
		return true;
	}
	else
	{
		std::cout << "Bad Answer!" << std::endl << std::endl;
		return false;
	}
}

int main()
{
	int correct{ 0 }, testNum{ 0 };

	correct += execute(18, verifier(18), true);
	testNum++;

	correct += execute(35, verifier(35), true);
	testNum++;

	correct += execute(20, verifier(20), true);
	testNum++;

	correct += execute(1, verifier(1), false);
	testNum++;

	correct += execute(4, verifier(4), false);
	testNum++;

	correct += execute(39, verifier(39), true);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
