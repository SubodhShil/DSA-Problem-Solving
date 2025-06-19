#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxElement = *max_element(a.begin(), a.end());

    vector<int> freq(maxElement + 1, 0);
    for (int num : a) {
        freq[num]++;
    }

    for (int g = maxElement; g >= 1; g--) {
        int count = 0;
        for (int multiple = g; multiple <= maxElement; multiple += g) {
            count += freq[multiple];
        }
        if (count >= k) {
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}