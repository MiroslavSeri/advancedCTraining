#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "new Animal" << endl;
    };
    virtual void run() = 0;
    virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "new Dog" << endl;
    };
    virtual void speak()
    {
        cout << "woof!" << endl;
    }
};

class Labrador : public Dog
{
public:
    Labrador()
    {
        cout << "new labrador" << endl;
    }
    virtual void run()
    {
        cout << "Labrador running" << endl;
    }
};

void test(Animal &a)
{
    a.run();
}
int main()
{
    Labrador lab;
    lab.speak();
    lab.run();

    Labrador labs[5];
    Animal *animals[5];
    animals[0] = &lab;
    animals[0]->speak();

    test(lab);
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}