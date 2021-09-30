//Fibonacci Series upto n

#include <iostream>

using namespace std;

void fib(int n) {
    int t1=0,t2=1,next;
    for(int i=1;i<=n;i++) {
        cout<<t1<<" ";
        next = t1+t2;
        t1=t2;
        t2=next;
    }
}

int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<endl;
    fib(n);
    return 0;
}
