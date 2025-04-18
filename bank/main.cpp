// log in
// registration
// delete customer

// display customers -> optional

// exit

#include <iostream>
#include <cstdlib>

#include "./include/customer.hpp"

void main_menu(void){
      int choice;

            std::cout << "WELCOME TO ABC BANK" << std::endl;
            std::cout << "1. LOG IN" << std::endl;
            std::cout << "2. NEW REGISTRATION" << std::endl;
            std::cout << "3. DELETE ID" << std::endl;
            std::cout << "4. EXIT" << std::endl;
      
            std::cout << "Enter your choice : ";
            std::cin >> choice;

            switch(choice){
                  case 1:
                        customer_login();
                        break;

                  case 2:
                        customer_registration();
                        break;

                  case 3:
                        delete_customer();
                        break;

                  case 4:
                        exit(0);

                  default:
                        std::cout << "Invalid Input !" << std::endl;
                        main_menu();
                        return;
            }
}

int main(){
      main_menu();

      return 0;
}