#include <iostream>
using namespace std;
struct Movie{
    string title;
    int releaseYear;
};

int main(){

    Movie movie;
    movie.title = "Terminator";
    movie.releaseYear = 1997;
    cout << "Title:" << movie.title << endl
    << "Release year:" << movie.releaseYear;


//EXERCISE ..



    return 0;

}