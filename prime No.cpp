#include <iostream>
#include<cmath>

using namespace std;

int main()
{ 
    int n,i;
    bool flag = 0;
    cout<<"enter the no to check whether it is prime or not ";
    std::cin >>n ;
    for(i=2; i<sqrt(n);i++)
    {
        if(n%i==0){
            cout<<"NO is non prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<"is prime";
    }

    return 0;
}
