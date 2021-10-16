#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int input = 25;

    //065
    char letter = 65;

    for(int i=0; i<=input; i++)
    {
        for(int k=input; k>i; k--)
            cout << " ";
        
        cout << letter;

        for(int j=1; j<=i; j++)
            cout << char(letter+j);

        for(int j=i; j>=0; j--)
            cout << char(letter+j);
        
        cout << endl;
    }
    
    return 0;
}