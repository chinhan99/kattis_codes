#include <iostream>
#include <string>
#include <vector>

int main(){
    int array [5];
    for(int i = 0 ; i < 5 ; i += 1){
        std:: cin >> array [i];
    } 
    bool not_sorted = false;
    do{
         not_sorted = false; 
        for(int j = 0 ; j < 4; j += 1){
            if( array[j] > array[j + 1]){
                not_sorted = true;
      
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                for(int l = 0; l < 5; l += 1){
                    std:: cout << array[l] << " ";
                }  
                std::cout << "\n";
            }
        }
        
    } while( not_sorted);
}


        //____ JUNK CODE
    /*
    for(int j = 0 ; j < 4; j += 1){
        for(int k = j; k < 5; k += 1 ){
            if(array [j] > array[k]){
                int temp = array[j];
                array[j] = array[k];
                array[k] = temp;

                for(int l = 0; l < 5; l += 1){
                    std:: cout << array[l] << " ";
                }  
                std::cout << "\n";

            }
        }
    }*/

