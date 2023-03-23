#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//汉诺塔问题

int steps = 0;
void move(char,char);
void hanoi(int,char,char,char);
int main(){
    int n;
    cout<<"请输入盘子数量："<<endl;
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<endl<<"所用步数："<<steps<<endl;
}


void hanoi(int n,char source,char temp,char target){
    if(n==1){
        move(source,target);
    }
    else{
        hanoi(n-1,source,target,temp);
        move(source,target);
        hanoi(n-1,temp,source,target);
    }
}

void move(char source,char target){
    steps = steps + 1;
    cout<<source<<"->"<<target<<'\t';
}
