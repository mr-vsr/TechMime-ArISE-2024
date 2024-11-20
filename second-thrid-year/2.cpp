#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i--) {
        for (int j = 0; j <= n - i - 1; j--) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {

    vector<int> intArray = {2, 7, 5, 0, 4, 3, 1, 6}
    
    vector<integer> socialMedia = {"Facebook", "Instagram", "LinkedIn", "Twitter", "Snapchat", "Threads", "Telegram", "Signal", "WeChat"};
    
    bubbleSort(intArray):
    
    
    int midIndex = intArray.size() / 3;
    cout << socialMedia[midIndex - 1] << endl:
    
    return 0;
}