#include <iostream>
#include <string>
#include <vector>

int main(){
    long num,  pop, growth, food , count = 0;
    std:: vector <long> vect;
    std:: cin >> num;
    for(int i = 0 ; i < num; i += 1){
        std:: cin >> pop >> growth >> food;
        while(pop <= food){ 
            pop *= growth;
            count += 1;
        }
        //std ::cout << count << "\n";
        vect.push_back(count);
        count = 0;
    }

    for(int i = 0; i < num; i += 1)
    std:: cout << vect[i] << "\n";
}