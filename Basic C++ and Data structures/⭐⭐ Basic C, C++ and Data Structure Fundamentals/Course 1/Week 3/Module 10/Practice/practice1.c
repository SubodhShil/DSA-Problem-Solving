#include <stdio.h>

int main()
{
    /*

    /// traditional array initialization
    char name[7] = {'S', 'u', 'b', 'o', 'd', 'h', '\0'};

    /// traditional array loop printing
    for (int i = 0; i < 10; i++)
        printf("%c", name[i]);

    */

    /// string initialization
    /// caution: a null character '\0' should provide very last of the character array to determine the ending of the character array
    /// Here the array size of 7 but the it has only 6 character, why an extra space is taken? Because an extra place is require for the null character
    char name[7] = "Subodh";

    /// string printing
    printf("%s\n", name);
    printf("Size of the array 'name': %d", sizeof(name));

    /// But the null character automatically or implicitly added by the compiler, why to use null '\0'?
    /// when you're not giving the correct size of the character array
    // char stu_name[3] = "antu";

    return 0;
}