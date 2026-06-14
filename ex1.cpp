#include <iostream>
using namespace std;

class Integral
{
public:
    virtual void Calculate()
    {
        cout << "Integral calculation" << endl;
    }
};

class DefiniteIntegral : public Integral
{
public:
    void Calculate() override
    {
        cout << "Definite integral calculation" << endl;
    }
};

class IndefiniteIntegral : public Integral
{
public:
    void Calculate() override
    {
        cout << "Indefinite integral calculation" << endl;
    }
};

// Task 2
void ShowResult(Integral* obj)
{
    obj->Calculate();
}

// Task 3
class Calculator
{
public:
    void Solve(Integral& obj)
    {
        obj.Calculate();
    }
};

int main()
{
    cout << "Task 1:" << endl;

    Integral* ptr;
    DefiniteIntegral d;

    ptr = &d;
    ptr->Calculate();

    cout << endl;

    cout << "Task 2:" << endl;

    DefiniteIntegral d2;
    IndefiniteIntegral i2;

    ShowResult(&d2);
    ShowResult(&i2);

    cout << endl;

    cout << "Task 3:" << endl;

    Calculator calc;

    calc.Solve(d2);
    calc.Solve(i2);

    return 0;
}