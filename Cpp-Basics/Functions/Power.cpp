#include <iostream>

using namespace std;

void Power(float baseNum, float expNum){
    float c = 1;
    for (float i = 0; i < expNum; i++)
    {
        c *= baseNum;
    }
    cout << c << endl;
}

int main() {

    for (float i = 0; i < 5; i++)
    {
        Power(2, i);
    }

    Power(2, 10);

    return 0;
}