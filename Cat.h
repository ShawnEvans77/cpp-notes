#include <string>

class Cat {
    private:
        std::string name;
        int age;

    public:
        Cat(std::string name, int age) : name(name), age(age) {}

        int get_age() { return age; }

        std::string get_name() { return name; }
};