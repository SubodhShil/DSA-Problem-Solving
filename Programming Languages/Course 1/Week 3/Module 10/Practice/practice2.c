#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    /// gets() is not recommended
    // gets(str);

    /// fgets(array_name, array_size, stdin);
    /// fgets takes space and new line (enter) as character
    fgets(str, 50, stdin);
    printf("%s", str);

    return 0;
}