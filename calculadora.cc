#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string comprobar(string numero){
    int entero = 1;
    
    if(numero.find(',') != string::npos ){
        numero.replace(numero.find(','), 1, ".");
    } else if(numero.find('\'') != string::npos){
        numero.replace(numero.find('\''), 1, ".");
    }
    return numero;
}

float potencia(float base, int exponente) {
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    string x, y;
    double resultao, x1, x2;
    char op;
    int valido = 1;
    int entero = 1;

    cout << "Ingrese operacion (+, -, *, /, ^, r): ";
    cin >> op;

    if(op != '+' && op != '-' && op != '*' && op != 'x' && op != '/' && op != '^' && op != 'r'){
        valido = 0;
    } else if(op == 'r'){
        cout << "Ingrese un número para obtener su raiz cuadrada: ";
        cin >> x;
        y = "0";
    } else {
        cout << "Ingrese 1er valor: ";
        cin >> x;
        cout << "Ingrese 2º valor: ";
        cin >> y;
    }
    x = comprobar(x);
    y = comprobar(y);
    x1 = atof(x.c_str());
    x2 = atof(y.c_str());
    switch (op) {
        case '+':
            resultado = x1 + x2;
            break;
        case '-':
            resultado = x1 - x2;
            break;
        case '*':
        case 'x':
            resultado = x1 * x2;
            break;
        case '/':
            resultado = x1 / x2;
            break;
        case '^':
            resultado = potencia(x1, (int) x2);
            break;
        case 'r':
            resultado = sqrt(x1);
            break;
        default:
            valido = 0;
    }
    if (valido)
        cout << "El resultado es: " << resultado << endl;
    else
        cout << "La operación no es válida" << endl;
    return 0;
}