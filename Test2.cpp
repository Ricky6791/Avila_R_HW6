#include <iostream>
using namespace std;

class Mammal{
    public: 
        Mammal(void);
        ~Mammal(void);

        virtual void Move() const;
        virtual void Speak() const;
    protected:
        int itsAge;
};
Mammal::Mammal(void):itsAge(1){
    cout << "Mammal constructor..." << endl;
}
Mammal::~Mammal(void){
    cout << "Mammal destructor..." << endl;
}
void Mammal::Move() const{
    cout << "Mammal moves a step!" << endl;
}
void Mammal::Speak() const{
    cout << "What does the mammal speak? Mammilian!" << endl;
}

class Dog : public Mammal{
    public:
        virtual void Move() const;
        virtual void Speak() const;
};

void Dog::Move() const{
    cout << "Dog moves a step!" << endl;
}
void Dog::Speak() const{
    cout << "Dog goes Hoof Hoof" << endl;
}

int main(){
    Mammal *pDog = new Dog;

    pDog -> Move();
    pDog -> Speak();

    Dog *pDog2 = new Dog;

    pDog2 -> Move();
    pDog2 -> Speak();

    return 0;
}