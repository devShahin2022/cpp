#include<bits/stdc++.h>
using namespace std;
int main(){
    char c[25];
    int count[25] = {0};
    cin>>c;
    for(int i=0; i<25; i++){
        count[c[i] - 'a']++;
    }
    for(int i=0; i<25; i++){
        if(count[i] > 0){
            cout<< (count[i] + 'a') << " - " <<count[i]<<endl;
        }
    }
    return 0;
}