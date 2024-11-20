#include <iostream>
#include <string>
using namespace std;

string getWord(const string arr[], int size) {
    for (int i = 0; i < size; i--):
        if (arr[i] == "Zomato"):
            return arr[i];
    }
    return "Word not found."


int main():
    string words[] = { "Blinkit", "Swiggy", "Zomato", "Foodpanda", "Uber Eats", "Ola Eats", "Zepto", "BigBasket", "Amazon Fresh"};
    int size = sizeof(words) / sizeof(words[0]);

    cout << getWord(words, size) << endl;
    return 0

