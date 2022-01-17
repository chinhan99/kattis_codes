#include <iostream>
#include <string>
//#include <cstring>
using namespace std;

int main(){

string str;
cin >> str;
//cout << str;

int string_len = str.length();
//cout << string_len;

for(int i = 0 ; i < string_len - 1; i += 1){
    if( str[i] == ':' || str[i] == ';'){
        if( str[i + 1] == ')'){
            cout << i << "\n"; 
        }
        else if (str[i + 1] == '-'){
            if ( ((i+2) < string_len) && (str[i+2] == ')') ){
                cout <<i << "\n";
            }
        }
    }
}

return 0;
}