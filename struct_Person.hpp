#include <iostream>
#include <string>

enum class Color {
    Blue,
    Hazel,
    Green,
    Gray,
    Black,
    Brown,
    Red  // Newly added
};

inline std::string ColorToString(Color color) {
    switch (color) {
        case Color::Blue:  return "Blue";
        case Color::Hazel: return "Hazel";
        case Color::Green: return "Green";
        case Color::Gray:  return "Gray";
        case Color::Black: return "Black";
        case Color::Brown: return "Brown";
        case Color::Red:   return "Red";
        default:           return "Unknown";
    }
}

struct Person {
    int age;                   // Age in years
    double height;             // Height in centimeters or inches
    double weight;             // Weight in kilograms or pounds
    std::string name;          // Full name
    std::string rank;          // Military or organizational rank
    std::string unitAssigned;  // Unit or department the person is assigned to
    Color eye_color;           // Eye color
    Color hair_color;          // Hair color

    Person()
        : age(0), height(0.0), weight(0.0),
          eye_color(Color::Brown), hair_color(Color::Black) {}
};
