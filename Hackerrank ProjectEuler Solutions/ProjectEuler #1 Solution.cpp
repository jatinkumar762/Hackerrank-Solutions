#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int N,T,sum,divT,divF,divTF;
    cin>>T;
    while(T--)
    {
       cin>>N;
       sum=0;
       N=N-1;
       divT=N/3;
       divF=N/5;
       divTF=N/15;
        sum+=(( ((divT)*(divT+1))/2 )*3);
        sum+=(( ((divF)*(divF+1))/2 )*5);
        sum-=(( ((divTF)*(divTF+1))/2 )*15);
         cout<<sum<<endl;
    }
   
    return 0;
}

