//Dog Years Project
#include <iostream>

int main(){

    float dog_age;
    float human_age;

    std::cout << "How old is your dog?\n";
    std::cin >> dog_age;
    
    if(dog_age < 2){
        human_age = dog_age * 10.5;
    } else {
        human_age = 21 + ((dog_age-2) * 4);
    }

    std::cout << dog_age << " years old in dog years would be " << human_age << " years old in human years.";

    return 0;
}