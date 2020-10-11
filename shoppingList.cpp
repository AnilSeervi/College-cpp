#include <iostream>

using namespace std;
class item{ 
    private:
    int code;
    char name[25];
    float rate;
    public:
    void getdata()
    {
        cout<<"Enter item name: ";
        cin>>name;
        cout<<"Enter item code: ";
        cin>>code;
        cout<<"Enter item rate: ";
        cin>>rate;
        cout<<"\n_______________\n";
    }
    void printdata()
    {
        cout<<endl<<"item code "<<code;
        cout<<endl<<"item name "<<name;
        cout<<endl<<"item rate "<<rate;

    }
};
const int  size=3;
int main(){
    item pc[size];
    for(int i=0;i<size;i++)
    pc[i].getdata();
    cout<<"\nDetails of PCs\n";
    for(int i=0;i<size;i++)
    pc[i].printdata();
}