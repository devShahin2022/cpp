#include<bits/stdc++.h>
using namespace std;
class Products{
    public:
        char productName[100];
        char desc[100];
        int discount;
        int regularPrice = 0;
        int sellPrice = 0;
    Products(char* setProductName, int setPrice, int setDiscount, char* setDesc){
        strcpy(productName, setProductName);
        discount = setDiscount;
        strcpy(desc, setDesc);
        regularPrice = setPrice;
        sellPrice = regularPrice - (regularPrice*setDiscount/100);
    }
};
Products getProduct(char* productName, char* desc, int price, int discount){
    char proName[100];
    char description[100];
    strcpy(proName, productName);
    strcpy(description, desc);
    Products data = Products(proName, price, discount, description);
    return data;
}
int main(){
    char name1[100] = "Head phone";
    char desc1[100] = "This is authentic product";
    Products productData = getProduct(name1, desc1, 200, 30);
    cout<<"Product name : "<<productData.productName<<endl;
    cout<<"Product description : "<<productData.desc<<endl;
    cout<<"Regular price : "<<productData.regularPrice<<endl;
    cout<<"Sell price : "<<productData.sellPrice<<endl;
    cout<<"Discount price : "<<productData.discount<<"%"<<endl;
    return 0;
}