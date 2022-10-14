#include<iostream>
using namespace std;
void swapreference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swapvalue(int a,int b){
    int temp;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    swapreference(&a,&b);
    cout<<a<<endl<<b<<endl;
    swapvalue(a,b);
    cout<<a<<endl<<b;
    return 0;
}