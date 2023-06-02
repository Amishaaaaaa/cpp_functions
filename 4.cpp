#include<iostream>
using namespace std;

int odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
    return 0;
}