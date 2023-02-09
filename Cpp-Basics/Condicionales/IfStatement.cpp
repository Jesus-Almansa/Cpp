#include <iostream>

using namespace std;

double cube(double num)
{
    return num * num * num;
}

double square(double num)
{
    return num * num;
}
float num;

int main()
{
    cout << "Choose a number to square & cube it: " << endl; 
    cin >> num;
    if (num != 0)
    {
        cout << square(num) << " is the square of "<< num << endl;
        cout << cube(num) << " is the cube of "<< num << endl;
    }else
    {
        cout << "It has to be different from cero" << endl;
    }
    
    
    
    return 0;
}