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


inline std::ostream& operator<<(std::ostream& os, Color color) {
    return os << ColorToString(color);
}

class Person {
private:
    int age;
    double height;
    double weight;
    std::string name;
    std::string rank;
    std::string unitAssigned;
    Color eye_color;
    Color hair_color;

public:
    // Default constructor
    Person()
        : age(0), height(0.0), weight(0.0),
          name(""), rank(""), unitAssigned(""),
          eye_color(Color::Brown), hair_color(Color::Black) {}

    // Parameterized constructor
    Person(int a, double h, double w, const std::string& n,
           const std::string& r, const std::string& unit,
           Color eye, Color hair)
        : age(a), height(h), weight(w), name(n), rank(r),
          unitAssigned(unit), eye_color(eye), hair_color(hair) {}

    // Accessors (getters)
    int getAge() const { return age; }
    double getHeight() const { return height; }
    double getWeight() const { return weight; }
    std::string getName() const { return name; }
    std::string getRank() const { return rank; }
    std::string getUnitAssigned() const { return unitAssigned; }
    Color getEyeColor() const { return eye_color; }
    Color getHairColor() const { return hair_color; }

    // Mutators (setters)
    void setAge(int a) { age = a; }
    void setHeight(double h) { height = h; }
    void setWeight(double w) { weight = w; }
    void setName(const std::string& n) { name = n; }
    void setRank(const std::string& r) { rank = r; }
    void setUnitAssigned(const std::string& u) { unitAssigned = u; }
    void setEyeColor(Color c) { eye_color = c; }
    void setHairColor(Color c) { hair_color = c; }

    // Utility function to display person information
    void print() const {
        std::cout << "Name: " << name << "\n"
                  << "Rank: " << rank << "\n"
                  << "Unit: " << unitAssigned << "\n"
                  << "Age: " << age << "\n"
                  << "Height: " << height << "\n"
                  << "Weight: " << weight << "\n"
                  << "Eye Color: " << ColorToString(eye_color) << "\n"
                  << "Hair Color: " << ColorToString(hair_color) << "\n";
    }
};

inline std::ostream& operator<<(std::ostream& os, const Person& p) {
    os << "Name: " << p.getName() << "\n"
       << "Rank: " << p.getRank() << "\n"
       << "Unit: " << p.getUnitAssigned() << "\n"
       << "Age: " << p.getAge() << "\n"
       << "Height: " << p.getHeight() << "\n"
       << "Weight: " << p.getWeight() << "\n"
       << "Eye Color: " << p.getEyeColor() << "\n"
       << "Hair Color: " << p.getHairColor();
    return os;
}
