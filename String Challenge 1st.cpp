#include <iostream>
#include <string>
using namespace std;

string UserValidation(string str){
    
    //code goes here
    if((str.length()>=4 && str.length()<=25) && (str[0]>='a' && str[0]<='z' || str[0]>='A' && str[0]<='Z') && (str[str.length()-1] != '_')){
        return "true";
    }
    else
    {
        return "false";
    }
}

int main(void){
    ....
}
