#include <iostream>
#include <string>

int main() {
    int age = 21;                  // Whole numbers (typically 4 bytes)
    double price = 19.99;          // 64-bit floating-point
    char grade = 'A';              // Single character (single quotes)
    bool is_active = true;         // Boolean (true/false)
    std::string name = "Alex";     // Requires <string>

    std::cout << name << " got grade " << grade << '\n';
    return 0;
} 