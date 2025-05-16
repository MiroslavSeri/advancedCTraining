#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0)
    {
        cout << "Default constructor running" << endl;
    }

    Person(const Person &other)
    {
        cout << "Copy constructor running" << endl;
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) : name(name), age(age)
    {
        cout << "Parametrized constructor running" << endl;
    }

    void print() const
    {
        cout << name << ": " << age << endl;
    }
};

int main()
{
    map<int, Person> people;

    people[50] = Person("Mike", 40);
    people[21] = Person("Vicky", 30);
    people[50] = Person("Raj", 20);

    people.insert(make_pair(55, Person("Bob", 45)));

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << flush;
        it->second.print();
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}