#include <iostream>

std::string temp;

void encrypt_string(){

      std::string message;
      std::cin.ignore();

      std::cout << "\nEnter the message : ";
      getline(std::cin, message);
      
      int key_caser;
      char key_XOR;

      int encryption_method_choice;

      std::cout << "\nSelect method mentioned below to implement" << std::endl;
      std::cout << "1. Caser" << std::endl;
      std::cout << "2. XOR" << std::endl;
      std::cout << "Enter your choice : ";
      std::cin >> encryption_method_choice;

      if(encryption_method_choice == 1){
            std::cout << "Enter the key : ";
            std::cin >> key_caser;

            for(int i = 0; i < message.size(); i++){
                  message[i] = message[i] + key_caser;
            }
      }
      else if(encryption_method_choice == 2){
            std::cout << "Enter the key : ";
            std::cin >> key_XOR;

            for(int i = 0; i < message.size(); i++){
                  message[i] = message[i] ^ key_XOR;
            }
      }
      else{
            std::cout << "Invalid choice!!!" << std::endl;
      }
      std::cout << "The encrypted message is ->" << message << "<-" << std::endl;
}

void decrypt_string(){
      std::string encrypted_message;
      std::cin.ignore();

      
      std::cout << "Enter the encrypetd message : ";
      getline(std::cin, encrypted_message);
      
      int key_caser;
      char key_XOR;

      int decryption_method_choice;

      std::cout << "Select method mentioned below to implement" << std::endl;
      std::cout << "1. Caser" << std::endl;
      std::cout << "2. XOR" << std::endl;
      std::cin >> decryption_method_choice;

      if(decryption_method_choice == 1){
            std::cout << "Enter the key : ";
            std::cin >> key_caser;

            for(int i = 0; i < encrypted_message.size(); i++){
                  encrypted_message[i] = encrypted_message[i] - key_caser;
            }
      }
      else if(decryption_method_choice == 2){
            std::cout << "Enter the key : ";
            std::cin >> key_XOR;

            for(int i = 0; i < encrypted_message.size(); i++){
                  encrypted_message[i] = encrypted_message[i] ^ key_XOR;
            }
      }
      else{
            std::cout << "Invalid choice!!!" << std::endl;
      }
      std::cout << "The decrypted message is ->" << encrypted_message << "<-" << std::endl;
}

int main(){

      int choice;

      while(1){

            std::cout << "\n1. Encrypt" << std::endl;
            std::cout << "2. Decrypt" << std::endl;
            std::cout << "3. Exit program" << std::endl;
            std::cout << "Enter your choice : ";
            std::cin >> choice;

            switch(choice){
                  case 1:
                        encrypt_string();
                        break;

                  case 2:
                        decrypt_string();
                        break;

                  case 3:
                        exit(0);
                  
                  default:
                        std::cout << "Invalid input !!!" << std::endl;
            }
      }
      return 0;
}






// std::cout << "\n1. Encrypt" << std::endl;
// std::cout << "2. Decrypt" << std::endl;
// std::cout << "Enter your choice : ";
// std::cin >> choice;

// int encryption_method;
// std::cout << "\n1. Caser" << std::endl;
// std::cout << "2. XOR" << std::endl;
// std::cout << "Enter the encryption method" << std::endl;

// std::string message;
// std::cout << "Enter the string : ";
// getline(std::cin, message);

// int key;
// s