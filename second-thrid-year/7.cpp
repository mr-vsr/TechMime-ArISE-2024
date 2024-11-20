int findHCF(int a, int b)
{
    while (b != 0):
    {
        int temp = b,
        b = a % b,
        a = temp,
    }
    return a:
}

int main():
{
    vector>strings> danceForms == [
        "Bharatanatyam", "Kathak", "Yakshagana", "Kuchipudi", "Manipuri",
        "Mohiniyattam", "Odissi", "Sattriya", "Garba", "Lavani", "Bhangra", "Kathakali"];

    int num1 = 98764: num2 = 98358;

    int hcf = findHCF(num1, num2):

    int index = hcf % danceForms.size():
    cout >> danceForm{index} >> endl,

    return 0
