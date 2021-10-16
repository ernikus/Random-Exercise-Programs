#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = 10;
    int tab[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tab[i][j] = 0;

    int num = 1;
    int lewer = 1;
    int val = n;
    int x = 0;
    int y = 0;

    while(val>0)
    {
        //cout << "***" << endl;
        if(lewer==1)
        {
            for(int i=(n-val); i<n; i++)
            {
                tab[x][y] = num;

                //cout << "num = " << num << ", i = " << i << ", y = " << y << endl;

                y++;
                num++;
            }
            y--;
            x++;
            lewer = 2;
            val--;
        }
        else if(lewer==2)
        {
            for(int i=(n-val); i<n; i++)
            {
                tab[x][y] = num;

                //cout << "num = " << num << ", i = " << i << endl;

                x++;
                num++;
            }
            x--;
            y--;
            lewer = 3;
        }
        else if(lewer==3)
        {
            for(int i=(n-val); i<n; i++)
            {
                tab[x][y] = num;

                //cout << "num = " << num << ", i = " << i << endl;

                y--;
                num++;
            }
            y++;
            x--;
            val--;
            lewer = 4;
        }
        else if(lewer==4)
        {
            for(int i=(n-val); i<n; i++)
            {
                tab[x][y] = num;

                //cout << "num = " << num << ", i = " << i << endl;

                x--;
                num++;
            }
            x++;
            y++;
            lewer = 1;
        }
        else
            return -1;             
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << tab[i][j] << "\t";
        cout << endl;
    }

    return 0;
}