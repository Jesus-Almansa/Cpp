#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken fried" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

// The italianchef class is inhereting from the chef class
class ItalianChef: public Chef{
    public:
        void makePasta()
        {
            cout << "The italian chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The italian chef makes pipsa con su mapsa" << endl;
        }
};

int main() {

    Chef chef;
    chef.makeChicken();

    ItalianChef italianchef;
    italianchef.makePasta();

    chef.makeSpecialDish();
    italianchef.makeSpecialDish();

    return 0;
}