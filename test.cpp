#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main()
{ string str1 , str2;
    cin >> str1 >> str2;
    int size1 =  str1.length();  
    int size2 = str2.length();
    
    
    if(size2> size1) {
        cout << "no";
    }
    else{
        cout << "go";
    }
    return 0;
}
