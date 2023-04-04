#include <bits/stdc++.h>
using namespace std;

class Practice
{
public:
    /* Find max or min element from a vector */
    void practice1()
    {
        vector<int> v{2, 3, 1, 6, 5, -5};
        int min = *min_element(v.begin(), v.end());
        cout << min << endl;
        int max = *max_element(v.begin(), v.end());
        cout << max << endl;
    }

    void practice2()
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
    // op.practice1();
    // op.practice2();

    return 0;
}