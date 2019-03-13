#include <iostream>
#include <string.h>

using namespace std;

const int MAX_CHAR = 50;

void AlphabetSoup(string);

int main()
{
    string strB;
    cout << "Input : ";
    cin >> strB;
    cout << "Output : ";
    AlphabetSoup(strB);
    return 0;
}
void AlphabetSoup(string &str)
{

    int charCount[MAX_CHAR] = {0};
    for (int i=0; i<str.length(); i++)
        charCount[str[i]-'a']++;

    for (int i=0;i<MAX_CHAR;i++)
        for (int j=0;j<charCount[i];j++)
            cout << (char)('a'+i);
}
