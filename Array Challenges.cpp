
#include <iostream>
#include <string>
using namespace std;

int ArrayChallenge(int arr[], int arrLength){
    int count = 0;
    int previousElement = arr[0];
    for(int i = 0; i <= arrLength - 1; i++){
        if(arr[i] == previousElement){
            count = count + 1;
        }
        if(arr[i] != previousElement){
            previousElement = arr[i];
        }
    }
    return count;
}
