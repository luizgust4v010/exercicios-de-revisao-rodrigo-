#include <iostream>

using namespace std;

int main()
{
    float salM;
    float hrsT;

    float salB;
    float valorHr;
    float imposto;
    float salR;

    cout << " informe seu salario minimo: ";
    cin >> salM;

    cout << " informe suas horas trabalhadas: ";
    cin >> hrsT;


    valorHr = salM / 2;

    salB = hrsT * valorHr;

    imposto = (salB * 0.3)/ 100;

    salR = salB - imposto;

    cout << " valor da hora: " << valorHr << endl;
    cout << " salario bruto: " << salB << endl;
    cout << " imposto: " << imposto << endl;
    cout << " salario a receber: " << salR << endl;





}
