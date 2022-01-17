#include <bits/stdc++.h>
using namespace std;

void recurse_and_print(int num){
    if(num > 1){
        recurse_and_print(num -1);
    }
    cout << num << " ";
}


int main(){

    int num = 10;
    recurse_and_print(num);

}