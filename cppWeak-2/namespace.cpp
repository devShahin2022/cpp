#include<bits/stdc++.h>
using namespace std;
namespace Rakib{
    int age = 24;
    void hello(){
        cout<<"Hello world"<<endl;
    }
}
namespace Sakib{
    int age2 = 22;
    // class function etc..
}
int main(){
    cout<<Sakib::age2;
    return 0;
}