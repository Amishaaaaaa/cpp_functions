#include<iostream>
using namespace std;

float area,circumference;
void circle(int r){
    area=3.14*r*r;
    circumference=2*3.14*r;
    cout<<area<<endl;
    cout<<circumference<<endl;    
}
int main(){
    int rad;
    cin>>rad;
    circle(rad);
    return 0;
}