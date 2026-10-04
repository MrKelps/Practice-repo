#include<iostream>
using namespace std; 

int main(){

    int n,p;
    cin>>n;

    int a = n/100;
    cout<<"there are " << a << " hundred rupee notes"<<endl;
    p=n%100;
    int b = p/50;
    cout<<"there are " << b << " fifty rupee notes"<<endl;
    p=p%50;
    int c = p/20;
    cout<<"there are " << c << " twenty rupee notes"<<endl;
    p=p%20;
    int d = p/1;
    cout<<"there are " << d << " one rupee coins"<<endl;
}