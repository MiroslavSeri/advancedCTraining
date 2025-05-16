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

    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }
        else
        {
            return name < other.name;
        }
    }
};

int main()
{
    map<Person, int> people;

    string t1 = "Mike";
    string t2 = "Bob";

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 444)] = 123;
    people[Person("Vicky", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->second << ": " << flush;
        it->first.print();
        // cout << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}