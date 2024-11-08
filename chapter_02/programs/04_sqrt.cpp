#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet of the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}

// Enter the floor area, in square feet, of your home: 1536
// That's the equivalent of a square 39.1918 feet of the side.
// How fascinating!
