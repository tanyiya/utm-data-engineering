//? EXERCISE 4: ASSOCIATION

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: TAN YI YA   Location: ____________ (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  27/5/2024    ___________   ___________    ________
//  _________    ___________   ___________    ________

// Video link:
//   _________


#include <iostream>
#include <cmath>
using namespace std;

#define MAXTERM 10

class Term
{
private:
    int coef;
    int exp;

public:
    Term(int c = 0, int e = 0);
    void set(int c, int e);
    int evaluate(int x) const;
    int exponent() const;
    int coefficient() const;
};

class Polynomial
{
private:
    int nTerm;
    Term terms[MAXTERM];

public:
    Polynomial();
    void input();
    int evaluate(int x) const;
    Term largestTerm() const;
    int degree() const;
};

//----------------------------------------------------------------------------
int main()
{
    Polynomial p;

    p.input();
    cout << endl;

    cout << " x  \t\tPolynomial value" << endl;
    cout << "----\t\t----------------" << endl;

    for (int x = 0; x <= 5; x++)
        cout << x << "  \t\t" << p.evaluate(x) << endl;

    cout << endl;

    system("pause");
    return 0;
}

//----------------------------------------------------------------------------
// class Term
  

// The constructor is given

Term::Term(int c, int e) : coef(c), exp(e) {}

// Implement the other methods
void Term::set(int c, int e) 
{
    coef = c;
    exp = e;
}
int Term::evaluate(int x) const 
{
    return coef*pow(x,exp);
}
int Term::exponent() const 
{
    return exp;
}
int Term::coefficient() const 
{
    return coef;
}
//----------------------------------------------------------------------------

Polynomial::Polynomial() : nTerm(0) {}

void Polynomial::input()
{
    cout << "Enter a polynomial:" << endl;
    cout << "\tHow many terms? => ";
    cin >> nTerm;

    for (int i = 0; i < nTerm; i++)
    {
        int c, e;
        cout << "\tEnter term #" << (i + 1) << " (coef and exp) => ";
        cin >> c >> e;
        terms[i].set(c, e);
    }
}

int Polynomial::evaluate(int x) const
{
    int sum = 0;
    for (int i = 0; i < nTerm; i++)
        sum += terms[i].evaluate(x);

    return sum;
}

// class Polynomial

// Implement the constructor and the other methods of the class Polynomial
