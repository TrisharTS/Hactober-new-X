#include <iostream>
#include<math.h>
using namespace std;


int main()
{
   int i,n;
   cout<<"Enter the number";
   cin>>n;
   cout<<"Factors of "<<n<<" are :"<<endl;
   for(i=1;i<=(n/2);i++) {
       if(n%i == 0) {
           cout<<i<<" ";
       }
   }
   cout<<n;
    return 0;
}
