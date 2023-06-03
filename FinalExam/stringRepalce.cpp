#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string text[n], findText[n];
    for(int i=0; i<n; i++){
        cin>>text[i]>>findText[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<text[i].length(); j++){
            int isFindIndex = text[i].find(findText[i]);
            if(isFindIndex == -1){
                break;
            }else{
                text[i].replace(isFindIndex, findText[i].length(),"$");
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<text[i]<<endl;
    }
    return 0;
}