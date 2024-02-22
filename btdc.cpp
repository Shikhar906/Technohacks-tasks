#include <iostream>
#include <cmath>
using namespace std;
void decimalsebinary()
{
    int bn,dn=0,i=0,r;;
    cout<<"Enter a binary number"<<endl;
    cin>>bn;
    while(bn!=0) 
    {
        r=bn%10;
        bn=bn/10;
        dn=dn+r*pow(2,i);
        ++i;
    }
    cout<<"Decimal number "<<dn<<endl;
}
int main()
{
    int c=1;
    while(c==1)
    {
        decimalsebinary();
        cout<<"Press 1 to continue or 0 to exit"<<endl;
        cin>>c;
    }
    return 0;
}
