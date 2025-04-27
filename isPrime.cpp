#include <iostream>
using namespace std;
#include <cmath>

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    
    for (int i=2; i<=sqrt(n); i++){
   if(n%i==0){
       return false;
   }
        
    }
    
    return true;
    
}


void all_prime(int n){
    
        cout<<"\n\nFollowings are Prime numbers from 1 to"<<n<<endl;
    for(int i=1; i<=n; i++){
        
    if(isPrime(i)){
        cout<< i<<" ";
        
    }
        
        
    }
    
    
}







int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    
    isPrime(num);
    all_prime(num);
    
    
    
    return 0;
}