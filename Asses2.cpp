#include <iostream>
#include <string.h>

using namespace std;

void FirstReverse(string);

int main()
{
    string strA;
    cout << "Input : ";
    cin >> strA;
    FirstReverse(strA);
    cout << "Output : "<<strA;
    return 0;
}
void FirstReverse (string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2 ; i++)
        swap(str[i], str[n - i - 1]);
}
