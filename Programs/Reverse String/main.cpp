#include <iostream>

std::string reverse(std::string input)
{
    std::string x{};
    
    for (int loop_i = input.size()-1; loop_i >= 0; loop_i--)
    {
        x += input[loop_i];
    }
    
    return x;
}

int main()
{
    std::string str = "Testowy";

    std::string rev_str = reverse(str);

    std::cout << rev_str << std::endl;

    return 0;
}