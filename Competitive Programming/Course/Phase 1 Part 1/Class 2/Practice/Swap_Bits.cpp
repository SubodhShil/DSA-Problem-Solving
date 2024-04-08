#include <bits/stdc++.h>
using namespace std;

#define isOddEven(x) (x & 1)
#define clrBit(x, i) (x & (~(1 << i)))
#define kth_bit(x, k) (x >> k) & 1
#define on_kth_bit(x, k) (x | (1 << k))
#define off_kth_bit(x, k) (x & (~(1 << k)))
#define countSetBit(n) __builtin_popcount(i);
#define toggle_kth_bit(x, k) (x ^ (1 << k))
#define is_power_of_two(x) 

void solve()
{
    unsigned int num; cin >> num;
    for(int i = 0; i < 32; i += 2) {
        int a = kth_bit(num, i), b = kth_bit(num, i + 1);
        if(!a and b) {
            num = on_kth_bit(num, i);
            num = off_kth_bit(num, i + 1);
        }
        else if(a and !b){
            num = off_kth_bit(num, i);
            num = on_kth_bit(num, i + 1);
        }
    }

    cout << num << "\n";
}

/* void solve() {
    int num; cin >> num;
    unsigned int ans = 0; 
    
    for(int i = 0; i<32; i += 2) {
        int a = (num >> i) & 1, b = (num >> (i + 1)) & 1;
        swap(a, b);
        if(a) ans += (1 << i);
        if(b) ans += 1 << (i + 1);
    }
    cout << ans << endl;
} */

int32_t main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
