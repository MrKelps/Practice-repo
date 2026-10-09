#include<iostream>
using namespace std;

int fibb(int n){
        
        int a=0,b=1,sum=0;
        for(int m=1;m<n;a=b,b=sum,m++,sum=a+b){
            cout<<sum<<" "; 
        }
        return sum;
}

int main(){

    int n;
    cout << "Enter the number of terms: ";
    cin>>n;
    if(n==0){
        cout<<endl;
    }
    else if(n<0){
        cout<<"Invalid input";
    }
    else{cout<<fibb(n)<<endl;}
    

}