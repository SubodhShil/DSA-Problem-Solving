#include <stdio.h>

int count_vowels(char s[], int i)
{
    /// base case
    if (s[i] == '\0')
        return 0;

    /// assigning the work to the recursion
    int res = count_vowels(s, i + 1);

    /// the work recursion will be doing by following
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        ++res;

    return res;
}

int main()
{
    char sentence[205];
    fgets(sentence, 205, stdin);

    int ans = count_vowels(sentence, 0);
    printf("%d", ans);

    return 0;
}