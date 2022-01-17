#include <iostream>
using namespace std;


int main(){
    int input,multiplier, layer;
    int count = 0;
    layer = 1; // first layer
    multiplier = 1; 

    cin >> input;
    while ( input >= layer){
        multiplier += 2;    
        count += 1;
        layer += ( multiplier * multiplier);
    } 
    cout << count;


    return 0;
}