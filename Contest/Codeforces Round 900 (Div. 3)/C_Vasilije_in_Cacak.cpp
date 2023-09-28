#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

bool hasTargetSum(vector<int> sortedArray, int target, int& elementsUsed) {
    int left = 0;
    int right = sortedArray.size() - 1;
    elementsUsed = 0;

    while (left < right) {
        int currentSum = sortedArray[left] + sortedArray[right];

        if (currentSum == target) {
            elementsUsed = right - left + 1;
            return true;
        } else if (currentSum < target) {
            left++; 
        } else {
            right--;
        }
    }

    return false;
}

void ans()
{
    int n, k, target;
    cin >> n >> k >> target;
    int eleCnt = 0;
    int cnt = n - k;

    vector<int> arr(n);
    fori(n) arr[i] = i + 1;

    ll sum = n * (n + 1) / 2;
    if(hasTargetSum(arr, target, eleCnt) && eleCnt == cnt) yes
    else no
}

int main()
{
    superfast
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}