#include<iostream>

using namespace std;

int main(){
    double x=6 , z=0 ,y=0;
    while (x!=20)
    {
    z=1/x;
    x=x+1;
    y=y+z;
    }
    
    cout<<y;


    return 0;
}
