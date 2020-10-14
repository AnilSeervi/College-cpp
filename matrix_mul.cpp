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
    Matrix operator*(Matrix);
};
void Matrix::matinput(){
    cout<<"\nType "<<rc*rc<<" Elements: ";
    for(int i=0;i<rc;i++)
    for(int j=0;j<rc;j++)
    cin>>mat[i][j];
}
void Matrix::matprint(){
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++)
        cout<<mat[i][j]<<setw(8);
        cout<<"\n";
    }
}
Matrix Matrix::operator*(Matrix m){
    Matrix matprod;
    matprod.size(rc);
    for(int i=0;i<rc;i++)
    for(int j=0;j<rc;j++){
        matprod.mat[i][j]=0;
        for(int k=0;k<rc;k++)
        matprod.mat[i][j]=matprod.mat[i][j]+m.mat[i][k]*m.mat[k][j];
    }
    return matprod;
}
int main(){
    Matrix A, B, C;
    int rc;
    cout<<"\nType the order of the Matrix: ";
    cin>>rc;
    A.size(rc);
    B.size(rc);
    C.size(rc);
    cout<<"\nEnter Matrix A:\n";
    A.matinput();
    cout<<"\nEnter Matrix B:\n";
    B.matinput();
    cout<<"\nMatrix A:\n";
    A.matprint();
    cout<<"\nMatrix B:\n";
    B.matprint();
    C=A*B;
    cout<<"\nProduct of Matrix A and B is:\n";
    C.matprint();
}