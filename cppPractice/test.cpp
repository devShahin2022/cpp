#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a = new int[2];
    a[0] = 30;
    a[1] = 40;

    cout<< a[0] << " " << a[1] <<endl;

    delete[] a;

    cout<<"Again print" << a[0] << " " << a[1] <<endl;

    return 0;
}