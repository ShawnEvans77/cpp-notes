#include <string>
#include <iostream>

class Cat {
    private:
        std::string name;
        std::string color;
        int age;

    public:
        Cat(std::string name, std::string color, int age) {
            this->name = name;
            this->color = color;
            this->age = age;
        }

        int get_age() {
            return age;
        }
};

int main() {
    Cat x{"Amber", "Black", 22};

    std::cout << x.get_age() << std::endl;

    return 0;
}