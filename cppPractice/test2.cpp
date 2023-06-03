#include<bits/stdc++.h>
using namespace std;
class Product{
    public:
        char name[100];
        int price;
        int size;
        char desc[100];
    Product(char* setName, int setPrice, int setSize, char* setDesc){
        strcpy(name, setName);
        strcpy(desc, setDesc);
        size = setSize;
        price = setPrice;
    }
};
int main(){

    char name[100] = "Head phone";
    char desc[100] = "This is a authentic product";

    Product* mobile = new Product(name, 300, 2, desc);

    cout<< mobile->desc<<endl;
    cout<< mobile->price<<endl;

    delete mobile;

    cout<<" After delete "<< mobile->price<<endl;

    return 0;
}