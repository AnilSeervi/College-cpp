#include <iostream>
#include <iomanip>
using namespace std;
class Student{
    protected:
    char name[20];
    int reg;
    public:
    void getdata(){
        cout<<"Type Register Number: ";
        cin>>reg;
        cout<<"Type Name: ";
        cin>>name;
    }
    void showdata(){
        cout<<setprecision(2);
        cout.setf(ios::left,ios::adjustfield);
        cout<<"Roll No: "<<setw(3)<<reg;
        cout<<"Name: "<<setw(10)<<name;
    }
};
class Marks:public Student{
    protected:
    int m1,m2,m3;
    float perc;
    public:
    void getmarks(){
        cout<<"\nMarks in C++, Maths, DBMS: ";
        cin>>m1>>m2>>m3;
        perc=(m1+m2+m3)/300.0*100;
    }
    void showmarks(){
        cout<<"C++ "<<setw(5)<<m1;
        cout<<"Maths "<<setw(5)<<m2;
        cout<<"DBMS "<<setw(5)<<m3;
        cout<<"Percentage "<<setw(5)<<perc;
    }
};
class Result:public Marks{
    private:
    char grade;
    public:
    void display(){
        showdata();
        showmarks();
        cout<<"Grade "<<setw(10)<<getgrade();
    }
    char getgrade(){
        if(m1<40||m2<40||m3<40)
        grade='F';
        else if(perc>=75)
        grade='A';
        else if(perc>=60)
        grade='B';
        else if(perc>=50)
        grade='C';
        else if(perc>=40)
        grade='D';
        else
        grade='F';
        return grade;
    }
};
int main(){
    Result std;
    cout<<"Grades:A->75% and above";
    cout<<"Grades:B->60%-74%"<<endl;
    cout<<"Grades:C->50%-59%"<<endl;
    cout<<"Grades:D->40%-49%"<<endl;
    cout<<"Grades:F->below 40%"<<endl;
    std.getdata();
    std.getmarks();
    std.display();

}