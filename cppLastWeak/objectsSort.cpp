#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
        string name;
        int roll;
        int mark;
};
bool cmp(Student a, Student b){
    if(a.mark > b.mark) return true;
    else return false;
}
int main(){
    
    Student students[3];
    for(int i=0; i<3; i++){
         getline(cin,students[i].name);
        cin>>students[i].roll>>students[i].mark;
        cin.ignore();
    }

    sort(students, students+3, cmp);

    for(int i=0; i<3; i++){
        cout<<students[i].name<<" "<<students[i].mark<<endl;
    }

    return 0;
}