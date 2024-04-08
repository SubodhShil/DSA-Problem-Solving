#include <stdio.h>
#include <string.h>

int main()
{

    /// count length of a string
    char str[100];
    scanf("%s", &str);
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
        count++;

    /// built in function strlen()
    int length = strlen(str);

    return 0;
}