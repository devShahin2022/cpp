#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int age;
        int roll;
        int cls;
    Student(char* setName, int setAge, int setRoll, int setCls){
        strcpy(name, setName);
        age = setAge;
        roll = setRoll;
        cls = setCls;
    }
};
int main(){
    Student shahin = Student("Shahin", 20, 22, 5);
    cout<<shahin.name;
    return 0;
}