#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    
    float divisao;
    if (num2 != 0) {
        divisao = num1 / num2;
    }

    cout << fixed << setprecision(2); 
    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl;

    return 0;
}