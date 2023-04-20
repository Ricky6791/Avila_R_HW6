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

class Puppy : public Dog{
    public:
        void Move() const;
        void Speak() const;
};
void Puppy::Move() const{
    cout << "Puppy moves a step!" << endl;
}
void Puppy::Speak() const{
    cout << "Puppy goes Hoof Hoof" << endl;
}

int main(){
    Mammal *pDog = new Dog;

    pDog -> Move();
    pDog -> Speak();

    //Dog *pDog2 = new Dog;

    //pDog2 -> Move();
    //pDog2 -> Speak();

    Mammal *pPuppy = new Puppy;

    pPuppy -> Move();
    pPuppy -> Speak();

    return 0;
}