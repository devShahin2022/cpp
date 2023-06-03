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
    
    Person *shahin = new Person("Shahin",22);
    Person *rasel = new Person("Rasel",25);

    *shahin = *rasel; // copy object
    return 0;
}