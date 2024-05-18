#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool compFn(Student a, Student b)
{
    if (a.total_marks != b.total_marks)
    {
        return a.total_marks > b.total_marks;
    }
    else
    {
        return a.id < b.id;
    }
}

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
        cin >> allStudents[i].math_marks;
        cin >> allStudents[i].eng_marks;

        allStudents[i].total_marks = allStudents[i].math_marks + allStudents[i].eng_marks;
    }

    sort(allStudents, allStudents + n, compFn);

    for (int i = 0; i < n; ++i)
    {
        cout << allStudents[i].nm << ' ';
        cout << allStudents[i].cls << ' ';
        cout << allStudents[i].s << ' ';
        cout << allStudents[i].id << ' ';
        cout << allStudents[i].math_marks << ' ';
        cout << allStudents[i].eng_marks << endl;
    }

    return 0;
}