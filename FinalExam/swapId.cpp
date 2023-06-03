#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char sec;
        int id;
};
int main(){
    int n;cin>>n;
    Student stdData[n];
    for(int i=0; i<n; i++){
        cin>>stdData[i].nm>>stdData[i].cls>>stdData[i].sec>>
        stdData[i].id;
    }
    int lastIndex = n-1;
    for(int i=0; i<n; i++){
        if(i <= lastIndex){
            int tmp = stdData[i].id;
            stdData[i].id = stdData[lastIndex].id;
            stdData[lastIndex].id = tmp;
        }
        lastIndex--;
    }
    for(int i=0; i<n; i++){
        cout<<stdData[i].nm <<" "<<stdData[i].cls<<" "<<stdData[i].sec<<
        " "<<stdData[i].id<<endl;
    }
    return 0;
}