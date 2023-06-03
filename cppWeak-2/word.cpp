// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
//     while(ss>>word){
//         cout<<word<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss){
    string word;
    if(ss>>word){
        cout<<word<<endl;
    }
    print(ss);
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    print(ss);
    return 0;
}