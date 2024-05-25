/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/time-based-key-value-store/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

class TimeMap1
{
public:
    unordered_map<string, vector<pair<int, string>>> key_value_store;

    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        key_value_store[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp)
    {

        // if 'key'not present
        if (!key_value_store.count(key))
            return "";

        // if all other timestamp value are greater than key value
        if (key_value_store[key][0].first > timestamp)
            return "";

        int n = key_value_store[key].size();
        int l = 0, r = n - 1;
        string res = "";
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (key_value_store[key][mid].first == timestamp)
                return key_value_store[key][mid].second;
            else if (key_value_store[key][mid].first < timestamp)
            {
                res = key_value_store[key][mid].second;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        return res;
    }
};

class TimeMap
{
public:
    unordered_map<string, map<int, string, greater<int>>> key_value_store;
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        key_value_store[key][timestamp] = value;
    }

    string get(string key, int timestamp)
    {
        if (!key_value_store.count(key))
            return "";

        auto it = key_value_store[key].lower_bound(timestamp);

        return it == key_value_store[key].end() ? "" : it->second;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}