#include <iostream>

class Animal {
public:
    virtual void showTalent() = 0; //Pure VFunction
};

class Bird : public Animal {
public:
    void showTalent() {
        std::cout << "The bird gracefully flies in the air." << std::endl;
    }
};

class Lion : public Animal {
public:
    void showTalent() {
        std::cout << "The lion lets out a mighty roar." << std::endl;
    }
};

class Fish : public Animal {
public:
    void showTalent() {
        std::cout << "The fish swims gracefully in the water." << std::endl;
    }
};

int main() {
    Bird tweety;
    Lion simba;
    Fish nemo;

    Animal* animalPtr;

    // Tweety, the Bird, shows its talent
    animalPtr = &tweety;
    animalPtr->showTalent();

    // Simba, the Lion, shows its talent
    animalPtr = &simba;
    animalPtr->showTalent();

    // Nemo, the Fish, shows its talent
    animalPtr = &nemo;
    animalPtr->showTalent();

    return 0;
}
