#include <iostream>
#include <list>


using namespace std;

int main() {

    float annualSalary[] = {25000, 26000, 27000, 28000, 29000, 30000};


    
    for (int i = 0; i < annualSalary.size(); i++)
    {
        float brutemonthlySalary = annualSalary[i] / 14;
        float netmonthlySalary = annualSalary[i] / 14 * 0.85;

        // cout << "Your brute monthly salary is: " << brutemonthlySalary << endl;
        cout << "Your net monthly salary is: " << netmonthlySalary << " with " << annualSalary[i] << endl;
    }
    
    return 0;
}