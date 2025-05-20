#include <iostream>
#include <typeinfo>
using namespace std;

template <class T, class S>
auto test(T value1, S value2) -> decltype(value1 + value2)
{
    return value1 + value2;
}

int get()
{
    return 999;
}

auto test2() -> decltype(get())
{
    return get();
}

int main()
{
    auto value = 7;
    auto text = "Hello";

    cout << value << "   " << typeid(value).name() << endl;
    cout << text << "   " << typeid(text).name() << endl;

    cout << test(5, 6) << endl;
    cout << test(string("Ahoj "), string("Svete")) << endl;
    cout << test2() << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}