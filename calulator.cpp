#include <iostream>
using namespace std;

int main(){

    // loop until user enters q or Q to quit
    char input, sign;
    float num1, num2, res;
    std::cout<<"Enter any value to continue or Q/q to quit"<<std::endl;
    std::cin>>input;

    while((input != 'Q') && (input != 'q')){
        res = 0.0;
        
        //enters a number
        std::cout<<"Please enter a number, operator and another number"<<std::endl;
        std::cin>>num1;
        std::cin>>sign;
        std::cin>>num2;
        if(!std::cin){
            std::cout<<"Please try again: invalid number"<<std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            continue;
        }
        switch(sign){
            case '+':
                res = num1 + num2;
                break;
            case '-':
                res = num1 - num2;
                break;

            case '/':
                res = num1 / num2;
                break;

            case '*':
                res = num1 * num2;
                break; 

            default:
                std::cout<<"please try again: invalid operator"<<std::endl;

        }
        std::cin.clear();
        printf("Result: %.2f\n", res);

        std::cout<<"Enter any value to continue or Q/q to quit"<<std::endl;
        std::cin>>input;
      
    }
    
    return 0;
}