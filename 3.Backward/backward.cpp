#include <iostream>
using namespace std;
void backward(int);
int main(){
    int n;
    cout<<"输入整数"<<endl;
    cin>>n;
    cout<<"反向数：";
    backward(n);
    cout<<endl;
}

void backward(int n){
    cout<<n%10;
    if(n<10){
        return;
    }else{
        backward(n/10);
    }
}