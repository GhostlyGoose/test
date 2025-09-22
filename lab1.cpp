#include <iostream>
#include <vector>
bool search(const std::vector<int> numbers, int k){
    int kCubed = k * k * k;
    bool found = false;
    for (int number : numbers){
        if (number % kCubed == 0){
            found = true;
            break;
        }
    }
    return found;
}

int main(){
    std::vector<int> numbers = {7, 24, 33, 81, 97};
    int k = 3;
    if (search(numbers, k)){
        std::cout << "В таблице есть кратное число" << std::endl;
    } else {
        std::cout << "В таблице нет кратных чисел" << std::endl;
    }
    return 0;
}
