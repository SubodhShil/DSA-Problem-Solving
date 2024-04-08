#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int target = 33;
    int n = v.size();
    auto it = find(v.begin(), v.end(), target);
    int index = distance(v.begin(), it);
    /// safety check
    if (index <= n - 1)
        cout << index << endl;
    else
        cout << "Not available\n";

    return 0;
}