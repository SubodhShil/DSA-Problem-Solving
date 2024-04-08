/// Write a number that will count the vowel in your name.

#include <bits/stdc++.h>
using namespace std;

void countVowel(string str)
{
    //* uppercase the string
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);

    int count = 0;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == 'a' | str[i] == 'e' | str[i] == 'i' | str[i] == 'o' | str[i] == 'u')
            count++;

    cout << "Vowel count: " << count << endl;
}

int main()
{
    string name = " ";
    cout << "Enter your name: ";
    getline(cin, name);
    countVowel(&name[0]);

    return 0;
}