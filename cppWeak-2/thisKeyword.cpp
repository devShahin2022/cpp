#include<bits/stdc++.h>
using namespace std;
class Person{
    public :
        string name;
        int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void print(){
        cout<<"Name : " << name << "Age "<<age;
    }

};
int main(){
    
    Person rakib("Shahin", 22);
    rakib.print();
    return 0;
}