#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim;
    rahim.roll=29;
    rahim.cls=11;
    rahim.section='B';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    cout<<rahim.cls ;
    return 0;
}
