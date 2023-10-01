// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
   //cout << "Hello world!";
   int n = 5,m=4;
   vector<vector<int>> matrix(n,vector<int>(m));
   //matrix is 2-d array
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout << matrix[i][j] << " ";
       }
   }
   

    return 0;
}