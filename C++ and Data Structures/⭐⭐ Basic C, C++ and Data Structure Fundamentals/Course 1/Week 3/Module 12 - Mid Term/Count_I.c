#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    int evenElements = 0;
    int oddElements = 0;

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; ++i)
    {
        if (arr[i] % 2 == 0)
            evenElements++;
        else
            oddElements++;
    }

    printf("%d %d\n", evenElements, oddElements);

    return 0;
}