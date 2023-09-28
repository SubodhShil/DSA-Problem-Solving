/* Subodh Chandra Shil */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Congruence
{
public:
    ll quotient, mod;
    Congruence(ll quotient, ll mod)
    {
        this->quotient = quotient;
        this->mod = mod;
    }
};

ll CRT(vector<Congruence> &congruences)
{
    ll limit = 1;

    for (auto congruence : congruences)
    {
        limit *= congruence.mod;
    }
}

int main()
{
    vector<Congruence> congruences;

    return 0;
}