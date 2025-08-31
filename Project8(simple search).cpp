#include <iostream>
#include <iostream>
#include <string>

int main() {
    
    std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int length = sizeof(names) / sizeof(names[0]);

    
       std::string searchTerm = "Sam";
       bool found = false;

    
      for (int i = 0; i < length; ++i) {
        if (names[i] == searchTerm) {
            std::cout << searchTerm << " found at index " << i << std::endl;
            found = true;
            break;
    }
    }

    
    if (!found) {
        std::cout << searchTerm << " not found in the array." << std::endl;
    }

      return 0;
     }

