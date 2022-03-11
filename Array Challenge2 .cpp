#include <iostream>
#include <climits>
using namespace std;


int ArrayChallenge(int arr[], int i, int n, int prev)
{
    if (i == n) {
        return 0;
    }
    int excl = ArrayChallenge(arr, i + 1, n, prev);
    int incl = 0;
    if (arr[i] > prev) {
        incl = 1 + ArrayChallenge(arr, i + 1, n, arr[i]);
    }
    return max(incl, excl);
}



int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int n = sizeof(A) / sizeof(*A);
  cout<<ArrayChallenge(A,0, n, INT_MIN);
  return 0;
    
}
