#include <iostream>
using namespace std;

int main(){
    int max_capacity, num_groups;
    int sum = 0;
    int count = 0;
    cin >> max_capacity >> num_groups;  
    
    int *array = new int[num_groups]();
    
    for(int i = 0; i < num_groups; i += 1){
        cin >> array[i];
    }

    for(int i = 0 ; i < num_groups; i += 1){
        sum += array[i];
        if(sum <= max_capacity){
            count += 1;
        }
        else{
            break;
        }
    }

    cout << (num_groups - count );

}



//_______WRONG CODE !! Dont need swap!
/*void swap( int* larger_num , int* smaller_num){
    int temp = *larger_num;
    *larger_num = *smaller_num;
    *smaller_num = temp;
}*/
/*
int main(){
    int max_capacity, num_groups;
    cin >> max_capacity >> num_groups;

    int *array = new int[num_groups]();
    
    for(int i = 0; i < num_groups; i += 1){ // read in the array
      cin >> array[i];  
    }

    int min_index;
    for(int i = 0; i < num_groups - 1; i += 1){ //use selection sort to sort the array 
        min_index = i;

        for(int j = i + 1; j < num_groups; j += 1){  
            if( array[j] < array[min_index]){ // swap places
                min_index = j;
             //   swap (&array[min_index], &array[i]);
            }    
            swap (&array[min_index], &array[i]);
        }
    }

    int count = 0;
    int total_sum = 0;
    
    for(int i = 0; i < num_groups; i += 1){  
        total_sum += array[i];
        if( total_sum <= max_capacity){
            count += 1;
        }    
        else{
            break;
        }
    }

    cout << (num_groups - count) ;

   return 0;
}
*/