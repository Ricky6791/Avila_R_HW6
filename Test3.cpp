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
class Cat : public Mammal{
    public:
        virtual void Move() const;
        virtual void Speak() const;
};

void Cat::Move() const{
    cout << "Cat moves a step!" << endl;
}
void Cat::Speak() const{
    cout << "Cag goes Meow" << endl;
}
class Horse : public Mammal{
    public:
        virtual void Move() const;
        virtual void Speak() const;
};

void Horse::Move() const{
    cout << "Horse moves a step!" << endl;
}
void Horse::Speak() const{
    cout << "Horse goes Neighhh" << endl;
}
class GuineaPig : public Mammal{
    public:
        virtual void Move() const;
        virtual void Speak() const;
};

void GuineaPig::Move() const{
    cout << "Guinea moves a step!" << endl;
}
void GuineaPig::Speak() const{
    cout << "Guinea goes weep weep" << endl;
}

int main(){
    Mammal* theArray[5];
    Mammal* ptr;
    int choice, i;

    for(i = 0; i < 5; i++){
        cout << "(1)dog (2)cat (3)horse (4)guinea pig: ";
        cin >> choice;
        switch (choice){
            case 1: ptr = new Dog; break;
            case 2: ptr = new Cat; break;
            case 3: ptr = new Horse; break;
            case 4: ptr = new GuineaPig; break;
            default: ptr = new Mammal; break;
        }
        theArray[i] = ptr;
    }
    for(i = 0; i < 5; i++)
        theArray[i] -> Speak();
    //always free dynamically allocated objects
    for(i = 0; i < 5; i++)
        delete theArray[i];
    return 0;
}