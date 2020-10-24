#include <iostream>
#include <string.h>
using namespace std;
class String{
    private:
    char str[80];
    public:
    void show(){
        cout<<str;
    }
    void getdata(){
        cin>>str;
    }
    friend String operator+(String,String);
};
String operator+(String s1,String s2){
    String temp;
    strcpy(temp.str,s1.str);
    strcat(temp.str,s2.str);
    return temp;
}
int main(){
    String s1,s2,s3;
    cout<<endl<<"Enter first string: ";
    s1.getdata();
    cout<<endl<<"Enter second string: ";
    s2.getdata();
    cout<<endl<<"String 1: ";s1.show();
    cout<<endl<<"String 2: ";s2.show();
    s3=s1+s2;
    cout<<endl<<"Concatenated String is: ";s3.show();
}