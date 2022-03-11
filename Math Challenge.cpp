#include <iostream>
#include <string>
using namespace std;

void MathChallenge(int num) {
  string x=to_string(num);
  int n=x.size(); int a=1;int count=0;
while(x.size()!=1){
  for(int i=0;i<n;i++){
    a*=(x[i]-'0');

  }count++;
  x=to_string(a);
}

  cout<<count;
  // code goes here  


}

int main(void) { 
   
  // keep this function call here
  MathChallenge(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
