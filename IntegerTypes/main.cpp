#include <iostream>

int main(){
    
/*     int elepant_count; //may contain random garbage value. WARNING

    int lion_count{}; //initializes to zero

    int dog_count{10}; //initializes to 10

    int cat_count{15}; //initializes to 15

    int domesticated_animals { dog_count + cat_count };

    std::cout << "Elephant count: " << elepant_count << std::endl;

    std::cout << "Lion count: " << lion_count << std::endl;

    std::cout << "Dog count: " << dog_count << std::endl;

    std::cout << "Cat count: " << cat_count << std::endl;

    std::cout << "Domesticated count: " << domesticated_animals << std::endl; */

    //Functional initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_conversion_functional << std::endl;

    return 0;
}
