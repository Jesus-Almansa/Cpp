#include <iostream>

using namespace std;

int main() {

    int luckyNums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int NotLuckyNums[2] = {13, 69}; // De esta manera este array solo admite dos valores

    luckyNums[0] = 111;
    cout << luckyNums[0] << endl;

    return 0;
}