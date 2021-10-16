#include <iostream>
#include <iomanip>

int main()
{
    char sign_basic = 65;

    for(int i=0; i<26; i++)
    {
        char sign_mod = sign_basic + i;
        int n = sign_basic + 26 - sign_mod;

        std::cout << std::setw(n);
        
        for(int j=0; j<i+1; j++)
        {
            char sign_new = sign_mod - j;
            
            std::cout << sign_new;
        }

        std::cout << std::endl;
    }
}