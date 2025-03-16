#include <iostream>

using namespace std;

int main()
{
    float pe, desconto, acrescimo;
    int cp, menu;

    cout << " informe o preço da etiqueta: ";
    cin >> pe;

    cout << "---------------------------------------------------------" << endl;

    cout << "informe a condição de pagamento: \n";
    cout << "[1] - a vista em dinheiro ou cheque, com 10% de desconto;" << endl;
    cout << "[2] -  a vista com cartao de credito, com 5% de desconto" << endl;
    cout << "[3] - em 2 vezes, preco normal de etiqueta sem juros" << endl;
    cout << "[4] - em 3 vezes, preco de etiqueta com acrescimo de 10% " << endl;
    cout << "[0] - sair" << endl;
    cout << "------------------------------------------------------------" << endl;

    cin >> menu;

    while (menu != 0){
        switch(menu){
        case 1:
            desconto = (pe * 10) / 100;
            cout << " desconto de 10% ====================== " << desconto << endl;
            menu = 0;
            break;

        case 2:
            desconto = (pe * 5) / 100;
            cout << " desconto de 5% ========================" << desconto << endl;
            menu = 0;
            break;

        case 3:
            cout << " em duas vezes, preco norma de etiqueta sem juros ======" << pe << endl;
            cout << " valor das parcelas ====================================" << pe / 2 << endl;
            menu = 0;
            break;

        case 4:
            acrescimo = (pe * 10) /100;
            cout << " em 3 vezes, preco da etiqueta com acrescimo de 10% =====" << pe + acrescimo << endl;
            cout << "valor das parcelas ======================================" << (pe + acrescimo ) / 3 << endl;
            menu = 0;
            break;

        default:
            cout << "codigo invalido";
            menu = 0;
            break;
        }
        return 0;
    }





}
