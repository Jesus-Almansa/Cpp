#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hola " << name << " tienes "<< age << " denucias!" << endl;
}

int main() {

    sayHi("Naruto", 16);
    sayHi("Sasuke", 15);
    sayHi("Sakura", 17);
    sayHi("MegaPuto", 17);

    return 0;
}