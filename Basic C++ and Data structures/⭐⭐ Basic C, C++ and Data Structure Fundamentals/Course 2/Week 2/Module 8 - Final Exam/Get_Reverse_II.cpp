#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student allStudents[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> allStudents[i].nm;
        cin >> allStudents[i].cls;
        cin >> allStudents[i].s;
        cin >> allStudents[i].id;
    }

    int start = 0, last = n - 1;
    while (start < last)
    {
        swap(allStudents[start].id, allStudents[last].id);

        ++start, --last;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << allStudents[i].nm << ' ';
        cout << allStudents[i].cls << ' ';
        cout << allStudents[i].s << ' ';
        cout << allStudents[i].id << ' ' << endl;
    }

    return 0;
}