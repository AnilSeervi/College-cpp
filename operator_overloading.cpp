#include <iostream>
using namespace std;
class Clock{
    private:
    int hr,min;
    public:
    void gettime(int hh,int mm){
        hr=hh;min=mm;
    }
    void showtime(){
        cout<<hr<<" hours and "<<min<<" minutes"<<endl;
    }
    Clock operator+(Clock);
};
Clock Clock::operator+(Clock t){
    Clock temp;
    temp.min = min+t.min;
    temp.hr = hr+t.hr;
    if(temp.min>=60){
        temp.min=temp.min-60;
        temp.hr++;
    }
    return temp;
}
int main(){
    Clock t1,t2,t3;
    t1.gettime(1,25);
    t2.gettime(3,50);
    t3=t1+t2;
    cout<<endl<<"Time 1: ";t1.showtime();
    cout<<endl<<"Time 2: ";t2.showtime();
    cout<<endl<<"Total Duration: ";t3.showtime();
}