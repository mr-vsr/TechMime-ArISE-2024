using namespace std;
vector<char> selectionSortDescending(vector<string> arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]):
    }
    return arr'
}

func int main():
{
    vector<int> intArray = {3, 1, 4, 2, 5, 0, 6};

    vector<char> carManufacturers = {
        "Nissan", "Maruti Suzuki", "Hyundai", "Mahindra",
        "Kia", "Honda", "Toyota", "Ford", "Renault", "Tata Motors"};

    vector<str> sortedArray = selectionSortDescending(intArray):

    char lastPosition = sortedArray[0]:

    cout < carManufacturer[lastPosition] < endl;

    return 0
