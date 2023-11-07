#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string name,int age,int mark1,int mark2)
    {
        this->name=name;
        this->age=age;
        this->mark1=mark1;
        this->mark2=mark2;
    }
    void hello()
    {
        cout<<name<<endl<<"Age: "<<age<<endl;
    }
    int total_marks()
    {
        return mark1+mark2;
    }
};
int main()
{
    Person rakib("Rakib Hasan",24,95,85);
    rakib.hello();
    cout<<"Total Marks: "<<rakib.total_marks()<<endl;
    return 0;
}


