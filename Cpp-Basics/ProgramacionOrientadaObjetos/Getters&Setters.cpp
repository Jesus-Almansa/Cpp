#include <iostream>

using namespace std;

class Movie {
    public:
        string title;
        string director;
        string rating;

        Movie(){
            title = "no title";
            director = "no director";
            rating = "no rating";
        }

        Movie(string aTitle, string adirector, string aRating){
            title = aTitle;
            director = adirector;
            rating = aRating;
        }
};

int main() {

    Movie Avengers("End Game", "Macorod", "Pegi 18");

    cout << Avengers.rating<< endl;

    return 0;
}