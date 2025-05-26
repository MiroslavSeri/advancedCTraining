#include <iostream>

// CRTP základní třída
template <typename d>
class Counter
{
public:
    static int count;

    Counter()
    {
        ++count;
    }

    ~Counter()
    {
        --count;
    }

    static void printCount()
    {
        std::cout << d::name() << " count: " << count << "\n";
    }
};

// Statická proměnná musí být definovaná mimo třídu
template <typename Derived>
int Counter<Derived>::count = 0;

// Třída Widget
class Widget : public Counter<Widget>
{
public:
    static const char *name()
    {
        return "Widget";
    }
};

// Třída Gadget
class Gadget : public Counter<Gadget>
{
public:
    static const char *name()
    {
        return "Gadget";
    }
};

int main()
{
    Widget w1;
    Widget w2;
    Gadget g1;

    Widget::printCount(); // Widget count: 2
    Gadget::printCount(); // Gadget count: 1

    {
        Widget w3;
        Widget::printCount(); // Widget count: 3
    } // w3 končí životnost

    Widget::printCount(); // Widget count: 2

    return 0;
}
