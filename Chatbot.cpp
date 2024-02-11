#include <iostream>
#include <string>
#include <map>
#include <limits>

int main() {
    std::string input;
    std::cout << "Hello! I am Chatbot. How can i assist you today?" <<std::endl;
    while (true) {
        std::cout << "> ";
        getline(std::cin, input);

        for (auto & c: input) c = tolower(c);

        if (input == "exit" || input == "quit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else if (input.find("hello") != std::string::npos || input.find("hi") != std::string::npos) {
            std::cout << "Hello! It's nice to meet you. What can I do for you?" << std::endl;  
        } else if (input.find("How are you") != std::string::npos) {
            std::cout << "I'm a bot, so I'm always doing well. Thanks for asking!" <<std::endl;
        } else if (input.find("what is your name") != std::string::npos) {
            std::cout << "I'm Chatbot. Your friendly neighborhood chatbot!" << std::endl;        
        } else if (input.find("add") != std::string::npos || input.find("sum") != std::string::npos) {
            std::cout << "Sure, I can do math! Please enter two numbers separated space:";
            int num1, num2;
            std::cin >> num1 >> num2;
            std::cout << "The sum is" << (num1 + num2) << ".\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            std::cout << "I'm sorry, I don't understand. Can you try asking something else?" << std::endl; 
        }
}
 return 0;
}