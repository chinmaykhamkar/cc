#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
  



int main()
{
    int a, b, c, d;
    a = 1;
    b = 2;
    c = 3;
    d = 6;
    while (c > a || d > b) {
        if (c > d) {
            c -= d;
            if (c < a) cout <<  "No" ;
        }
        else {
            d -= c;
            if (d < b) cout <<  "No" ;
 }
    }
    if (a == c && b == d) cout <<  "Yes" ;
    else  cout<<"No" ;
    

    return 0;
}

// Driver Code
int main()
{
//
string line;
string ans;
while(getline(cin,line)){
        if(line.empty()){
            break;
        }
        ans+=line;
}

Solution ob;
string f;
f=ob.check(ans);
cout<<f;   
return 0;
}
// steps to run c++ code
// 1.  g++ -o <name-you-want-to-give> test.cpp
//2. ./myprogram