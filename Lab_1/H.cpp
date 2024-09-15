#include <iostream>
#include <cmath>

using namespace std;



bool IsPrime(int n){
     if (n == 1 || n == 0) 
          return false;
     else if(n ==2)
          return true;

     for (int i = 2; i <= ceil(sqrt(n)); i++)
     {
          if(n%i == 0){
               return false;
          }
     }
     
     return true;
}


int main(){
     int n;cin >> n;
     if(IsPrime(n))
          cout << "YES";
     else
          cout << "NO";
}