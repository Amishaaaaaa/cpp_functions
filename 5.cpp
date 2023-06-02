#include<iostream>
using namespace std;

int flag=0;
int prime(int a,int b){
    for(int i=a;i<=b;i++){
        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}