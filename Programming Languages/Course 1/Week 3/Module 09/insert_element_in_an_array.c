#include <stdio.h>

/// Array operation
/// Insert at position
/// you've to insert an user input data 'd' into a user input position 'k'
/// [1, 2, 3, 4, 5, 6]
/// After input d = 100 into position k = 3 (0 based index) the array would look
/// something like: [1, 2, 3, 100, 4, 5, 6]

/// by taking extra variable space
void insertElementAtPosition(int n, int d, int k)
{
    n = n + 1;
    int arr[n];

    printf("Enter array elements\n");
    for (int i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    int reserveElement = arr[k];
    arr[k] = d;

    for (int i = k + 1; i < n; i++)
    {
        int x;
        x = arr[i];
        arr[i] = reserveElement;
        reserveElement = x;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/// way 02
void insertElementAtPosition_w2(int n, int d, int k)
{
    ++n;
    int arr[n];

    printf("Enter array elements\n");
    for (int i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    /// placing the array elements from backward
    for (int i = n - 1; i >= k; i--)
    {
        if (i == k)
            arr[i] = d;
        else
            arr[i] = arr[i - 1];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int d = 100;
    // insertElementAtPosition(n, d, 3);
    insertElementAtPosition_w2(n, d, 3);

    return 0;
}