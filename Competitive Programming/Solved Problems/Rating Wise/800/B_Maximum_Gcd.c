#include <stdio.h>
#include <stdlib.h>

long long main() {
    long long n,k;
    scanf("%lld %lld", &n,&k);

    long long a[1000];
    for (long long i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }
    long long maxElement = a[0];
    for (long long i=1; i<n; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }
    long long freq[10001];
    for (long long i=0; i<= maxElement; i++) {
        freq[i] = 0;
    }
    for (long long i=0; i<n; i++) {
        freq[a[i]]++;
    }

    for (long long g=maxElement; g>=1; g--) {
        long long count = 0;
        for (long long multiple = g; multiple <= maxElement; multiple = multiple + g) {
            count = count + freq[multiple];
        }
        if (count>=k) {
            printf("%lld\n", g);
            return 0;
        }
    }

    return 0;
}