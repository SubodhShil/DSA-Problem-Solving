#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
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
        cin >> allStudents[i].section;
        cin >> allStudents[i].math_marks;
        cin >> allStudents[i].eng_marks;
    }

    /// print reverse
    for (int i = n - 1; i >= 0; --i)
    {
        cout << allStudents[i].nm << " " << allStudents[i].cls << " " << allStudents[i].section << " " << allStudents[i].math_marks << " " << allStudents[i].eng_marks << endl;
    }

    return 0;
}