#include <iostream>

int main()
{
    
    double bacteriasNum{ 1 };

    for (int i = 1;; i++)
    {
        bacteriasNum *= 2;

        std::cout << i << ". " << bacteriasNum << std::endl;

        if (bacteriasNum >= 1000000)
            break;
    }

    std::cout << std::endl << std::endl;
    bacteriasNum = 1;

    for (int i = 1;; i++)
    {
        bacteriasNum *= 2;

        std::cout << i << ". " << bacteriasNum << std::endl;

        if (bacteriasNum >= 100000000000)
            break;
    }
}