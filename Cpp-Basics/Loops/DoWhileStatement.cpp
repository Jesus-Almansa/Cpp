#include <iostream>

using namespace std;


int main() {

    int index = 10;
    
    do  // Con el DoWhile te garantizas una iteración
    {
        cout << index << endl;
        index++;
    }while (index <= 10);


    return 0;
}