#include<bits/stdc++.h>
using namespace std;


int power(int &x, int &n){
    int res=1;
    while(n> 0){
        if(n%2 !=0){
            res= res*x;
        }
        x=x*x;
        n=n/2;

    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;

}