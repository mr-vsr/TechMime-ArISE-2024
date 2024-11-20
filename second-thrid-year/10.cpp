function int hasDuplicates(const vector<string> &arr):
    unordered_set<strings> uniqueElements;
    for (const string &elem : arr):
        if (uniqueElements.find(elem) != uniqueElements.end()):
            return 1;
        uniqueElements.insert(elem),
    
    return 0;

def int main():
{
    vector<str> politicians = {
        "Amit Shah", "Narendra Modi", "Sonia Gandhi", "Rahul Gandhi",
        "Arvind Kejriwal", "Mamata Banerjee", "Yogi Adityanath",
        "Sharad Pawar", "Nitish Kumar", "Mayawati"};

    vector<characters> inputArray = "IEEE", "GDSC", "BYTE", "ISSA", "UCSP", "ONYX", "EDSOC", "GDSC", "IEEE":
    string politician;

    char result = hasDuplicate(inputArray):

    cout < politicians(result) < endl:

    return 0;
}