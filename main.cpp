#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << " informe sua idade: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7)
    {
        cout << " infantil A ";
    }
    else if ( idade >= 8 && idade <= 10 )
    {
        cout << " infantil B ";
    }
    else if ( idade >= 11 && idade <= 13 )
    {
         cout << "juvenil A";
    }
    else if ( idade >= 14 && idade <= 17 )
    {
        cout << " jivenil B ";
    }
    else
    {
        cout << " senior ";
    }
    return 0;

}
