#include<bits/stdc++.h>
using namespace std;
class Person{
    public :
        string name;
        int age;
    Person(string nm, int ag){
        name = nm;
        age = ag;
    }
    void justName(){
        cout<<"Hello my  name is shahin alam"<<endl;
    }
};
int main(){
    Person rakib("Shahin alam",34);
    rakib.justName();
    return 0;
}