#include<bits/stdc++.h>
using namespace std;
class Student{
    public :
        string name;
        int roll;
        int marks;
        int cls;
};
int main(){
    Student students[3];
    for(int i=0; i<3; i++){
        getline(cin,students[i].name);
        cin>>students[i].roll>>students[i].cls>>students[i].marks;
        cin.ignore();
    }
    for(int i=0; i<3; i++){
        cout<<students[i].name <<" "<<students[i].roll<<endl;
    }
    return 0;
}