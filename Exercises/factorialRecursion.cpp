#include <iostream>
using namespace std;

int factorial(int n){
    cout<<n<<endl;
    if(n==0){
      return 1;  
    }else{
        return n*factorial(n-1);
    }
     
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial:"<< factorial(n)<<endl;
}