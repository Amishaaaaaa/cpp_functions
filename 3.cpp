#include<iostream>
using namespace std;

void vote(int age){
    if(age<18){
        cout<<"Inelligible";
    }
    else{
        cout<<"Elligible";
    }
}
int main(){
    int age;
    cin>>age;
    vote(age);
    return 0;
}