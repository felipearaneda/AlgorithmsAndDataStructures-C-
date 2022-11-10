#include <iostream>

int main(){


    int* p_number{};
    double* p_fractional_number{};

    int* p_number1{nullptr};
    double* p_fractional_number1{nullptr};

    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl;


    int* p_number5{}, other_int_var{}; //other_int_var its a normal int
    int* p_number6{}, other_int_var6{}; //other_int_var6 its a normal int

    std::cout << "sizeof(p_number5): " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var): " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6): " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6): " << sizeof(other_int_var6) << std::endl;

    int int_var{43};
    int* p_int{&int_var};

    std::cout << "int var: " << int_var << std::endl;
    std::cout << "p_int (address in memory)" << p_int << std::endl;


    int* p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl; 


    char* p_char_var {nullptr};
    char char_var{'A'};

    p_char_var = &char_var;

    std::cout << "The value stored in p_char_var is: " << *p_char_var << std::endl;


    int y{25};
    int* x = &y;
    y = {100};
    std::cout << "X = " << *x << std::endl;

    int z = 5;
    int g = z;
    z = 10;
    std::cout << "G = " << g << std::endl;


    int valor1 {234};
    int& ref_valor1 = {valor1};
    int* p_valor1 = {&valor1};

    std::cout << "&ref_valor1: " << ref_valor1 << std::endl;
    std::cout << "*p_valor1: " << *p_valor1 << std::endl;


    return 0;
}