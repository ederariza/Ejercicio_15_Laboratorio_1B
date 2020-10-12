
/*
Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20  7  8  9  10
19  6   1   2  11
18  5  4   3  12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.
Otra nota: se le dará una bonicación si imprime la espiral.
*/

#include <iostream>
using namespace std;

int main() {

    int numero = 5;
    int esquina_1 = 0;
    int esquina_2 = 0;
    int esquina_3 = 0;
    int esquina_4 = 0;
    int suma_diagonales = 0;

    int numero_disminuido = numero;
    for (int i = 1; i <= numero; i +=2){

        if (i != numero)
            esquina_1 = numero_disminuido * numero_disminuido,
            esquina_2 = esquina_1 - (numero_disminuido - 1),
            esquina_3 = esquina_2 - (numero_disminuido - 1),
            esquina_4 = esquina_3 - (numero_disminuido - 1),
            suma_diagonales += esquina_1 + esquina_2 + esquina_3 + esquina_4;

        else
            suma_diagonales += 1;

        numero_disminuido -= 2;

    }

    cout << "La suma de las diagonales de la matriz "<< numero << "x" <<  numero << " es  " << suma_diagonales << endl;

    return 0;
}
