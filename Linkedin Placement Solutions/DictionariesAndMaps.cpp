#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int N,Q;
    string name,num;
    std::map<string,string>::iterator it;
    
    cin>>N;
    std::map<string,string> mymap;
    while(N--)
    {
        cin>>name>>num;
        mymap.insert(std::pair<string,string>(name,num));
        
    }

         
          while( cin>>name)
          {
                 it = mymap.find(name);
                 if(it!=mymap.end())
                 {
                      cout<<name<<"="<<mymap[name]<<endl;
                 }
                 else
                 cout<<"Not found"<<endl;
              
          }

    return 0;
}
