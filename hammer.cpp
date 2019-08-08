#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
void printNTimes(char c, int n) 
{ 
    cout << string(n, c) << endl; 
} 


int main()
{
    int m;
    char c='*',p=' ';
    cin>>m;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=(3*m);j++)
            cout<<"*";
            cout<<"\n";
    }
    for(int i=1;i<=(2*m);i++)
    {
                for(int sp=1;sp<=m;sp++)
                    cout<<p;
        printNTimes(c,m);
    }
    return 0;
}

