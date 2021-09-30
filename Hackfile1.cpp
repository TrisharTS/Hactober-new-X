#include<iostream>
using namespace std;
int main() {
 int N = 6;
 int A[N][N] = {{1.3, 4.6, 3.4}, {4.43, 5.34, 6.34}, {7.34, 8.34, 9.34}};
 for(int i=1; i<N; i++) {
 for(int j=i; j<N; j++) {
 //swap
 int temp = A[i][j];
 A[i][j] = A[j][i];
 A[j][i] = temp;
 }
 }
 //print transpose
 for(int i=1; i<N; i++) {
 for(int j=1 ;j<N; j++) {
 cout << A[i][j]<< " ";
 }
 cout << "\n";
 }
 return 0;
}
