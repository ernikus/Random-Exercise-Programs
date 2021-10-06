//Soln Author:	ernikus

#pragma once

#include <iostream>

bool verifier(const int n)
{
	if (n < 3)
		return false;

	else if (n % 3 == 0)
		return true;
	else if (n % 7 == 0)
		return true;

	int numb{ n };

	while (numb >= 7)
	{
		if (numb % 3 == 0)
			return true;
		else
			numb -= 7;
	}

	numb = n;

	while (numb >= 7)
	{
		if (numb % 7 == 0)
			return true;
		else
			numb -= 3;
	}

	return false;
}