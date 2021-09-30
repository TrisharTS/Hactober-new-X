#include <iostream>
using namespace std;

int fact(int n) {
    
    return n*fact(n-1);
}

int main()
{
    int row;
    cout<<"Enter the no of rows";
    cin>>r;
    for(int i=0;i<row;i++) {
        for(int j=0;j<=i;j++) {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
