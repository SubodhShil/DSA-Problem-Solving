#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

/// count frequencies of lowercase characters between a to z
void alphabetFrequencyCount()
{
    char word[100];
    scanf("%s", &word);

    int counts[26] = {0};
    // memset(counts, 0, sizeof(counts));

    /// pre computing
    for (int i = 0; i < strlen(word); ++i)
    {
        counts[word[i] - 97]++;
    }

    printf("\n------------------------\n");
    for (int i = 0; i < 26; ++i)
    {
        if (counts[i] > 0)
            printf("%c = %d\n", (i + 97), counts[i]);
    }
}

int main()
{
    alphabetFrequencyCount();

    return 0;
}