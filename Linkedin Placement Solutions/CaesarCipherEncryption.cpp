#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,i,tmp;
    cin >> n;
    char s[150];
    cin >> s;
    int k;
    cin >> k;
        
      for(i=0;s[i];i++)
      {
            if(s[i]>=65&&s[i]<=90)
            {
                tmp=s[i]+(k%26);
                if(tmp>90)
                    s[i]=(64+(tmp-90));
                else
                    s[i]=tmp;
                
            }
            else  
            if(s[i]>=97&&s[i]<=122)
            {
                tmp=s[i]+(k%26);
                if(tmp>122)
                    s[i]=(96+(tmp-122));
                else
                    s[i]=tmp;
                
            }
        
      }
      cout<<s<<endl;  
         
    return 0;
}
