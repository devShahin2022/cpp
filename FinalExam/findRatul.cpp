#include<bits/stdc++.h>
using namespace std;
int main(){
    string text; getline(cin, text);
    string findRootText = "Ratul";
    bool isFound = false;
    for(int i=0; i<text.length(); i++){
        int isFind = text.find(findRootText);
        if(isFind != -1){
            int isFindCase1 = text.find(" Ratul ");
            if(isFindCase1 !=-1){
                isFound = true;
                break;
            }else if(text[text.find(findRootText) + 5] == '\0' && text[text.find(findRootText) -1] == ' '){
                isFound = true;
                break;
            }else if(text[text.find(findRootText) +5] == ' ' && text.find(findRootText)==0 ){
                isFound = true;
                break;
            }
        }else{
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