#include <stdio.h>
#include <string.h>

int main()
{
    char name1[50], name2[50];
    scanf("%s %s", &name1, &name2);
    printf("The strings are: %s, %s\n", name1, name2);

    /// empty the first string first
    memset(name1, 0, 50);

    for (int i = 0; i < strlen(name2); ++i)
        name1[i] = name2[i];

    /// using built in functions
    // strcpy(name1, name2);

    printf("%s, %s\n", name1, name2);

    return 0;
}