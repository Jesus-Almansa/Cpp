#include <iostream>

using namespace std;


int main() {

    int age = 19;
    int *pAge = &age;
    
    double gpa = 4.5;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    cout << "Punteros" << endl;
    cout << "Age: " << &age << endl; // We can access the memory address or pointers
    cout <<"GPA: " << &gpa << endl;
    cout <<"Name: " << &name << endl;

    cout << "Valores para los punteros" << endl;
    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName << endl;

    return 0;
}