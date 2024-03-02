#include <stdio.h>

int main()
{
    printf("Enter size of two arrays: ");
    int n, m;

    int arr1[] = {10, 30, 60, 80};
    int arr2[] = {20, 40, 50};

    int ans[n + m];

    int i = 0, j = 0, x = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
            ans[x] = arr2[j++];
        else if (arr1[i] < arr2[j])
            ans[x] = arr1[i++];
        x++;
    }

    while (i < n)
        ans[x++] = arr1[i++];

    while (j < m)
        ans[x++] = arr2[j++];

    for (int i = 0; i < n + m; i++)
        printf("%d ", ans[i]);

    return 0;
}