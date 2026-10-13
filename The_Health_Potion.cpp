#include <iostream>

using namespace std;

void applyPotion(int* target) {
    if (target != nullptr) {
        *target = *target + 25; // Semicolon added (and updated to +25)
    }
}

int main() {
    int player_health = 75;
    int* health_ptr = &player_health;

    cout << "The value of player_health is : " << player_health << endl; // 75
    cout << "The value of health_ptr is   : " << health_ptr << endl;
    cout << "The value of *health_ptr is  : " << *health_ptr << endl; // 75
    cout << "The value of &player_health is: " << &player_health << endl;

    // Call the function on its own line
    applyPotion(health_ptr);

    // Print player_health to verify the change
    cout << "Player health after potion   : " << player_health << endl; // 100

    return 0;
} // Closing brace added


