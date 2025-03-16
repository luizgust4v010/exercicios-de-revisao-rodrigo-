#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;

    cout << " digite seu peso em KG ";
    cin >> peso;

    cout << " digite sua altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << " imc: " << imc << endl;

    if (imc < 20)
    {
        cout << " abaixo do peso. " << endl;
    }
    else if ( imc >= 20 && imc < 25 )
    {
        cout << " peso ideal. ";
    }
    else
    {
        " acima do peso. ";
    }

    return 0;

}

