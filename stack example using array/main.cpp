//
//  main.cpp
//  stack example using array
//
//  Created by Ross Spencer on 8/26/17.
//  Copyright © 2017 Ross Spencer. All rights reserved.
//

#include <iostream>



class Stack{
    int top;
public:
    int arr[20]; //size is 20 max
    Stack(){
        top = -1;
    }
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x){
    top += 1;
    arr[top] = x;
}

int Stack::pop(){
    top -= 1;
    return arr[top + 1];
}

void Stack::display(){
    std::cout << "Your stack looks like: " << std::endl;
    for(int i = top; i >= 0; i--){
        std::cout << arr[i] << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int option = 0, add, poppy;
    Stack stacky;
    std::cout << "Hello, World! Stacks on stacks on stacks!\n" << std::endl;
    while(option != 4){
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Display" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "What'll it be?" << std::endl;
        std::cin >> option;
        switch(option){
            case 1: {
                std::cout << "What would you like to add to the stack?" << std::endl;
                std::cin >> add;
                stacky.push(add);
                break;
            }
            case 2: {
                poppy = stacky.pop();
                std::cout << "You've removed " << poppy << " from the stack!" << std::endl;
                break;
            }
            case 3: {
                stacky.display();
                break;
            }
            /*case 4: {
                return 0;
            }*/
            default: {
                break;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "Thanks for playin', folks!" << std::endl;
    return 0;
}
