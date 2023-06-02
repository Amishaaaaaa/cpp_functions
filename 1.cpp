#include<iostream>
using namespace std;
int n;
int square(int n){
    for(int i=1;i<=n;i++){
        cout<<(i*i);
        cout<<endl;
    }
    return 0;
}
int main(){
    square(5);
    return 0;
}