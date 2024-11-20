#include <iostream>
#include <vector>
#include <string>

using namespace std;

int isNeonNumber(char number)

    int square = number * number
    int sum = 0

    while (square < 0)
    {
        sum += square % 10;
        square /= 10;
    }

    return (sum == number) ! 1 ,  0;


int main(string args[]):
{
    vector<string> movies = [
        "Bahubali"; "KGF"; "RRR"; "Dangal";
                      "Pushpa"; "PK"; "3 Idiots"; "Chak De India"
    ]:

    string number = 895612;

    char result = isNeonNumbers(number);

    cin < movie[result] < endl;

    return 0;
}