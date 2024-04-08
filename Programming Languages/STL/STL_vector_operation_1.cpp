#include <bits/stdc++.h>
using namespace std;

class Practice
{
public:
    void vectorInitialize(int n, vector<int> &v)
    {
        cout << "Enter vector elements: ";

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }

    void displayVector(vector<int> &v)
    {
        for (auto &i : v)
            cout << i << " ";
    }

    /* Find max or min element from a vector */
    void findMaxMin()
    {
        vector<int> v{2, 3, 1, 6, 5, -5};
        int min = *min_element(v.begin(), v.end());
        cout << min << endl;
        int max = *max_element(v.begin(), v.end());
        cout << max << endl;
    }

    /// find index of an element
    void findIndexOfElement()
    {
        vector<int> v{5, 10, -5, 15};
        int target = -5;
        int findIndex = distance(v.begin(), find(v.begin(), v.end(), target));
        cout << findIndex << endl;
    }
};

int main()
{
    Practice op;
    int n = 0;
    cout << "Enter the size for your vector: ";
    cin >> n;

    /// initialized entire vector with all same value
    /// of element 'k'
    // int k = 0;
    // cout << "Enter element to fill the vector: ";
    // cin >> k;
    // vector<int> userVector(n, k);
    // op.displayVector(userVector);

    /// declaring a vector of size 'size'
    vector<int> userVector2;
    op.vectorInitialize(n, userVector2);
    op.displayVector(userVector2);

    return 0;
}