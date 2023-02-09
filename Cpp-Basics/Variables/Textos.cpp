#include <iostream>


using namespace std;

int main() {

    string phrase = "giraffe academy";

    cout << phrase << endl;
    cout << phrase.length() << endl; // It shows the length of the string
    phrase[0] = 'G';    // It changes de first character to the one selected
    cout << phrase[0] << endl;
    cout << phrase << endl;

    cout << phrase.find("academy", 0) << endl; // academy starts at index 8

    cout << phrase.substr(8, 3) << endl;

    return 0;
}