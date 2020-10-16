#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    public:
    void setlength(int len){
        this->length=len;
    }
    int getlength(){
        return this->length;
    }
    void setwidth(int w){
        width=w;
    }
    int getwidth(){
        return width;
    }
};
int main(){
    Rectangle rect;
    rect.setlength(20);
    rect.setwidth(10);
    cout<<"Rectangle = "<<rect.getlength()<<" feet long";
    cout<<" and "<<rect.getwidth()<<" feet wide."<<endl;
}