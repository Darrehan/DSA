/*recursion sum of natural numbers*/
#include <iostream>
using namespace std;
int fun(int n)
{ 
    if (n > 0)
    {  
        return fun(n - 1) + n;
    }
    return 0;
}
int main()
{ int x;
    cout<<"enter the number buddy \n";
    cin>>x;
   cout<<fun(x)<<"\n";
    return 0;
}