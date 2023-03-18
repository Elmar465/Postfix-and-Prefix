#include <iostream>
#include <string>
int main()
{
    int value {5};

    //Increment by one
    value = value + 1;
    std::cout<< "The value is : " << value << std::endl;

    value = 5;

    //Decrement by one
    value = value - 1;
    std::cout<< "The value is : " << value << std::endl;

    //Postfix Increment/Decrement
    value = 5;
    std::cout << "The value is (incrementing) : " << value++ <<std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 6 

    std::cout<<std::endl;
    std::cout<<"****************************************************************" <<std::endl;
    // Decrement with Postfix
    value = 5;
    std::cout << "The value is (decrementing) : " << value-- <<std::endl; //5
    std::cout << "The value is : " << value << std::endl; //4

    //Postfix increament/decrement
    value = 5;
    ++value;
    std::cout<<"The value is (prefix++) : " << value <<std::endl;
    //Rester value to 5
    value = 5;
    std::cout<<"The value is (prrefix++ in place) : " << ++value <<std::endl;
    std::cout<<std::endl;

    //Prefix Decrementing

    //Reset value to 5 
    value = 5;
    --value;
    std::cout<<"The value is (prefix--) : " << value << std::endl;

    // Reset value to 5
    value = 5;
    return 0;
}