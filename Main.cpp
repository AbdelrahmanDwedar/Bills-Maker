#include <iostream>
#include<map>
using std::endl;

std::map<std::string, int> taxs; // Makes the map that we'll use.
int main() {
    std::string Obj_name;
    int Times, quantity, price;
    std::cout << "How many objects you got: ";
    std::cin >> Times;
    if(Times <= 1) {
        std::cout << "This amount of objects doesn't work!";
    } 
    else {
        for(int i=1; i<=Times;i++){
            std::cout << "Enter your object: ";
            std::cin >> Obj_name ;
            std::cout << "Enter the quantity: ";
            std::cin >> quantity;
            std::cout << "Its price: ";
            std::cin >> price;
            taxs[Obj_name] = quantity * price;
        } 
        int a=0;
        std::cout << endl << endl;
        for(const auto& [key, value] : taxs){
            std::cout << key << ": " << value << '$' << endl;
            a+=taxs[key];
        }
        std::cout << "The total price: " << a << '$'; 
    }
    return 0;
}