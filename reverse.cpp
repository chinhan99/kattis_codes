#include <iostream>
using namespace std;

int main(){
int num;
cin >> num;

int *arr = new int[num]();
for(int i = num - 1; i >= 0; i -= 1){
    cin >> arr[i];
}

for(int j = 0 ; j < num ; j += 1){
    cout << arr[j] << "\n";
}

}