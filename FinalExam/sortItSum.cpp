#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;
};
bool cmp(Student a, Student b){
    int sumA = a.eng_marks + a.math_marks;
    int sumB = b.eng_marks + b.math_marks;
    if(sumA > sumB) return true;
    else if (sumA == sumB){
        if(a.id < b.id) return true;
        else return false;
    }
    else return false;
}
int main(){
    int n;cin>>n;
    Student stdData[n];
    for(int i=0; i<n; i++){
        cin>>stdData[i].nm>>stdData[i].cls>>stdData[i].sec>>stdData[i].id>>
        stdData[i].math_marks>>stdData[i].eng_marks;
    }
    sort(stdData, stdData+n, cmp);
    for(int i=0; i<n; i++){
        cout<<stdData[i].nm <<" "<<stdData[i].cls<<" "<<stdData[i].sec<<" "<<stdData[i].id<<
        " "<<stdData[i].math_marks<<" "<<stdData[i].eng_marks<<endl;
    }
    return 0;
}