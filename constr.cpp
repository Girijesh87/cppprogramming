#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // first constructors
    Rectangle() // default constructors
    {
        length = 1;
        breadth = 1;
    }

    // end of first constructor

    // second constructor(parameterized)
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    // end of second

    // COPY CONSTRUCTORS
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    // END OF COPY CONSTRUCTORS

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) // MUTATORS
    {
        // length = l;

        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b) // MUTATORS
    {
        // breadth = b;

        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength() // ACCESSORS
    {
        return length;
    }
    int getBreadth() // ACCESSORS
    {
        return breadth;
    }
};
int main()
{
    Rectangle r1;        // OBJECT CREATION (FOR DEFAULT)
    Rectangle r2(10, 5); // OBJECT CREATION(FOR PARAMETERIZED)
    Rectangle r3(r2);    // OBJECT CREATION(FOR COPY CONSTRUTOR)

    cout << r1.area()
         << endl;
    cout << r2.area()
         << endl;
    cout << r3.area() << endl;
}