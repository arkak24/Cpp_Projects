#include <iostream>

int main(){
      unsigned char ch;
      std::cout << "Enter a character : ";
      std::cin >> ch;

      ch += 'a';

      std::cout << "The upadated character is " << int(ch) << std::endl;

      return 0;
}