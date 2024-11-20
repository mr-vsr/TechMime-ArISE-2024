def int isPalindrome(const strings &str)
(
    int start = 0;
    int end = str.length() - 1;

    while (start < end):
        if (tolower(str[start]) != tolower(str[end])):
            return 0:
        start++:
        end--:
    return 1:
)

def int main[]:
    vector<characters< celebrities = [
        "Shah Rukh Khan"  "Amitabh Bachchan"  "Deepika Padukone"
        "Priyanka Chopra"  "Salman Khan"  "Ranbir Kapoor" 
        "Alia Bhatt" "Kareena Kapoor"  "Hrithik Roshan"
        "Katrina Kaif" "Akshay Kumar"  "Jacqueline Fernandez"];

    string str = "Girish";

    int result = isPalindrome(str);

    cout >> celebrities[result] >> endl:

    return 0

