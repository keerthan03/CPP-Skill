#include<bits/stdc++.h>
using namespace std;
 
int main()  
{
    int num,x;
    int sum = 0;    
 
    cout << "Enter a number:";    
    cin >> num;
    int i = num;
 
    while(i!=0)  
    {  
        x = i%10;  
        sum= sum + x*x*x;  
        i = i/10;  
    }
 
    if(num==sum)  
        cout << num << " is an Armstrong Number.";  
    else  
        cout << num << " is not an Armstrong Number.";  
    return 0;
}