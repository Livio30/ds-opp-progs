#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}
inline int sub(int a, int b)
{
    return a - b;
}
inline int mul(int a, int b)
{
    return a * b;
}
inline float divide(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b, choice;
    while (1)
    {
        cout << "\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5.Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number\n";
            cin >> a >> b;
            cout << "Sum :" << add(a, b);
            break;
        case 2:
            cout << "Enter the number\n";
            cin >> a >> b;
            cout << "Difference :" << sub(a, b);
            break;
        case 3:
            cout << "Enter the number\n";
            cin >> a >> b;
            cout << "Product :" << mul(a, b);
            break;
        case 4:
            cout << "Enter the number\n";
            cin >> a >> b;
            cout << "Quentient :" << divide(a, b);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid Input";
        }
    }
}