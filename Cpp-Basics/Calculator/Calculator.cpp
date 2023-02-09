#include <iostream>
#include <math.h>

using namespace std;

void suma(float num1, float num2){
    cout << num1 + num2 << endl;
}
void resta(float num1, float num2){
    cout << num1 - num2 << endl;
}
void multiplicacion(float num1, float num2){
    cout << num1 * num2 << endl;
}
void division(float num1, float num2){
    cout << num1 / num2 << endl;
}


int main() {

    printf("Introduce two numbers to see all the calcs");
    printf("Suma\n");
    suma(1, 2);

    printf("Resta\n");
    resta(1, 2);
    
    printf("Multiplicacion\n");
    multiplicacion(1, 2);

    printf("Division\n");
    division(1, 2);

    return 0;
}