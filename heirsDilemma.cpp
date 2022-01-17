#include <iostream>
#include <string>
#include <vector>

bool all_digits_different(int num)
{  // std :: cout << "all_dig_diff func : "; 
    bool arr[10];
    for (int i = 0; i < 10; i += 1)
    {
        arr[i] = false;
    }

    while (num > 0)
    {
        if (arr[num % 10] == false)
        {
            arr[num % 10] = true;
            num /= 10;
            if(num == 0){
                break;
            }
            //std :: cout << num << " ";
        }
        else
        {   //std:: cout << "false return";
            return false;
        }
    }
    return true;
}

bool no_digits_zero(int num)
{
    //std ::cout << "no_digits func: ";
    while (num > 0)
    {
        if ((num % 10) == 0)
        { //  std:: cout << "false return";
            return false;
        }
        else
        {
            num /= 10;
            //std ::cout << num << " ";
        }
        if(num == 0){
            break;
        }

    }
    return true;
}

bool divisible_own_digits(int num)
{
    int compare = num;
    //std ::cout << " divisible func ";
    while (compare > 0)
    {
        if (num % (compare % 10) > 0)
        {
            return false;
        }
        compare /= 10;
        if(compare == 0){
            break;
        }
        //std ::cout << compare << " ";
    }
    return true;
}

int main()
{
    int low, high, count = 0;

    std::cin >> low >> high;

    for (int i = low; i <= high; i += 1)
    {
        if ((all_digits_different(i) && (no_digits_zero(i))) && divisible_own_digits(i))
        {
            count += 1;
        }
    }

    std ::cout << count;
}