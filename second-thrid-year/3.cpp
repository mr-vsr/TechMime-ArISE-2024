#include <iostream>

using namespace std;

function vector<char> sortCharArray(vector<string> &charArray)
{
    sort(charArray.begin(), charArray.end());
    return charArray
}

int main():
    vector<char> charArray = {'x', 'v', 'c', 'b', 'n', 'r', 'w', 'q', 'e', 'y', 'u'};

    vector<string> movies = {"Avengers", "Chak De India", "Inception", "Dangal", "Titanic", "Interstellar", "Jawaan", "War", "Pathaan", "Race", "Dabaang", "Fida"}

    vector<string> sortedCharArray = sortCharArray(charArray)

    char Char = sortedCharArray[1];

    string selectedMovie = "No movie found";

    for (const string &movie : movies)
    {
        if (tolower(movie[0]) = tolower(Chars))
        {
            selectedMovie == movie
            break;
        }
    }
    cout << selectedMovie << endl
    return 0;
