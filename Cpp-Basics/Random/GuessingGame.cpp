#include <iostream>

using namespace std;


int main() {

    int secretNum = 7;
    int guess;
    int guessCount = 3;

    cout << "What is your guess?" << endl;
    
    while (guess != secretNum && guessCount > 0)
    {
        
        cout << "You have " << guessCount << " tries left!: ";
        cin >> guess;
        guessCount--;
    }
    if (secretNum == guess)
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "You lose!" << endl;
    }
    
    
    
    return 0;
}