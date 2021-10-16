#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl; int nr = __LINE__;

    cout << "1. Nazwa Programu: " << __FILE__ << endl;
    cout << "2. Numer linijki wypisania \"Hello World!\": " << nr << endl;
    cout << "3. Data Kompilacji: " << __DATE__ << endl;
    cout << "4. Czas Kompilacji: " << __TIME__ << endl;
    cout << "5. Czy uzyto kompilatora C++? " << __STDC__ << endl;
}