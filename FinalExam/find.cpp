#include<bits/stdc++.h>
using namespace std;
int main(){
    string text; getline(cin, text);
    bool isFound = false;
    stringstream words(text);
    string word;
    while (words>>word){
        if(word == "Ratul"){
            isFound = true;
            break;
        }
    }
    if(isFound){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}