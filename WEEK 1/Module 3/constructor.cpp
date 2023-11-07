#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,char s,int c,char *n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
    }
};
int main()
{
    Student rahim(29,'A',11,"Rahim Uddin");
    Student karim(55,'B',11,"Karim Uddin");
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<karim.name<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;



    return 0;
}

