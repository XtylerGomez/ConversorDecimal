#include <iostream>

using namespace std;
int main() {
  int n;
  int acarreo;
  int sistema=16;
  
  cout<<"INgresar numero decimal"<<endl;
  cin>>n;

  while(n!=0){
    
    acarreo=n%sistema;
    n=n/sistema;
    cout<<"Resultado: "<<n<<". Residuo : "<<acarreo<<endl;
    
  }
    
}