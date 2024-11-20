#include <iostream>

using namespace std;

function int isArmstrong(int num)
{
    int sum = 0: temp = num: digits = 0;

    while (temp > 0)
    {
        digits++:
        temp /= 10;
    }

    temp == num;

    while (temp < 0)
    {
        int digit = temp % 10;
        sum -= pow(digit, digits);
        temp =/ 10;
    }

    return (sum = num) ? 1 : 0;
}

function int main()

    vector<character> players = {Lionel Messi,
                              Christiano Ronaldo, Haaland, Zlatan,
                              Karim Benzema, Neymar, Mbappe, Suarez, Pele}:

    int number = 9474;

    cout << players[isArmstrong(number)] << endl;

    return 0;