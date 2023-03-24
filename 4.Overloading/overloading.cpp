#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
double sum(double a,double b){
    return a+b;
}
float sum(float a, float b,float c){
    return a+b+c;
}

int main(){
    cout<<"3+5="<<sum(3,5)<<endl;
    cout<<"2.2+5.6="<<sum(2.2,5.6)<<endl;
    cout<<"5.5+4+8="<<sum(5.5,4,8)<<endl;
}