#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int d1,m1,y1,d2,m2,y2,total;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    total=0;
    if(y1!=y2)
    {
        if(y1>y2)
          total+=10000;
    }
    else
        if(m1!=m2)
        {
              if(m1>m2)
              total+=(m1-m2)*500;
    }
    else
        if(d1!=d2)
        {
                    if(d1>d2)
                    total+=(d1-d2)*15;
    }
    cout<<total<<endl;
    
    
    
    
    return 0;
}
