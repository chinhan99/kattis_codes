#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){ 
    int number_of_strings;
    cin >> number_of_strings;
    vector <string> arr;

    for(int i = 0 ;i < number_of_strings; i += 1){
            string word;
            cin >> word;
            arr.push_back(word);
        
    }
    for(int j = 0 ; j < number_of_strings; j += 2){
        cout << arr[j] << "\n";
    }

return 0;

}