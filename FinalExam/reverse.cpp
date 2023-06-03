#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char sec;
        int math_marks;
        int eng_marks ;
        int serial;
};
bool cmp(Student a, Student b){
    if(a.serial > b.serial) return true;
    else return false;
}
int main(){
    int n;cin>>n;
    Student stdData[n];
    for(int i=0; i<n; i++){
        cin>>stdData[i].nm>>stdData[i].cls>>stdData[i].sec>>
        stdData[i].math_marks>>stdData[i].eng_marks;
        stdData[i].serial = i;
    }
    sort(stdData, stdData+n, cmp);
    for(int i=0; i<n; i++){
        cout<<stdData[i].nm <<" "<<stdData[i].cls<<" "<<stdData[i].sec<<
        " "<<stdData[i].math_marks<<" "<<stdData[i].eng_marks<<endl;
    }
    return 0;
}