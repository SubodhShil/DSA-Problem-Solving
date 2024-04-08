#include <bits/stdc++.h>
using namespace std;

void ans() {
    unsigned int n, k; 
    cin >> n >> k;
    n = n | (1u << k);
    cout << n << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) ans();

    return 0;
}