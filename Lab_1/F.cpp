#include <iostream>
#include <cstring>
using namespace std;


int NthPrime(int n){
     
     bool IsPrime[1000005]; memset(IsPrime, 1, sizeof(IsPrime));
     IsPrime[0] = IsPrime[1] = false;
     int counter = 0;

     for (int i = 2; i < 1000005; i++){
          if(IsPrime[i]){
              
               for (int j = i*i; j < 1000005; j += i){
                    IsPrime[j] = false;
               }
               counter++;
          }
          if(counter == n){
               return i;
          }          

     }
     
     return 0;

}
int main(){
     int n;
     cin >> n;
     
     cout << NthPrime(n);
     



     return 0;
}