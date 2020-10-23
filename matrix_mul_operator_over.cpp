#include <iostream>
#include <iomanip>
using namespace std;
class Matrix{
    private:
    int mat[10][10];
    int rc;
    public:
    Matrix(){}
    void size(int n){
        rc=n;
    }
    void matinput();
    void matprint();
    Matrix operator+(Matrix);
};
void Matrix::matinput(){
    cout<<"\nType "<<rc*rc<<" elements: ";
    for(int i=0;i<rc;i++)
    for(int j=0;j<rc;j++)
    cin>>mat[i][j];
}
void Matrix::matprint(){
    for(int i=0;i<rc;i++){
    for(int j=0;j<rc;j++)
    cout<<mat[i][j]<<setw(6);
    cout<<"\n";
    }
}
Matrix Matrix::operator+(Matrix m){
    Matrix matsum;
    matsum.size(rc);
    for(int i=0;i<rc;i++)
    for(int j=0;j<rc;j++)
    matsum.mat[i][j]=mat[i][j]+m.mat[i][j];
    return matsum;
}
int main(){
    Matrix A, B, C;
    int rc;
    cout<<"\nType the order of matrix: ";
    cin>>rc;
    A.size(rc);B.size(rc);C.size(rc);
    cout<<"\nMatrix A:";A.matinput();
    cout<<"\nMatrix B:";B.matinput();
    cout<<"\nMatrix A: "<<endl;A.matprint();
    cout<<"\nMatrix B: "<<endl;B.matprint();
    C=A+B;
    cout<<"\nSum of A and B is:"<<endl;C.matprint();
    return 0;
}