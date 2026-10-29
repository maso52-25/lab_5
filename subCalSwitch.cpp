#include <iostream>
#include <cstdlib>
using namespace std;

double SquareArea(double Squarelength);
double RectangleArea(double Rectanglelength, double width);
double TriangleArea(double base, double height);

double SquareArea(double Squarelength)
{
    double area = Squarelength * Squarelength;
    return area;
}

double RectangleArea(double Rectanglelength, double rectanglewidth)
{
    double area = Rectanglelength * rectanglewidth;
    return area;
}

double TriangleArea(double base, double height)
{
    double area = (1.0/2.0) * (base * height);
    return area;
}

int main()
{
    int selection = 0;
   
    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square" << endl
         << "2. Rectangle" << endl
         << "3. Triangle" << endl
         << "4. Quit Program" << endl;
    cout << endl << "Enter Selection: ";

    cin >> selection;

    if(selection == 1)
    {
        double length = 0;
        cout << "Enter your Length: ";
        cin >> length;
        cout << SquareArea(length);
    }
    else if(selection == 2)
    {
        double length = 0;
        double width = 0;
        cout << "Enter your Length and Width: ";
        cin >> length >> width;
        cout << RectangleArea(length, width);
    }
    else if(selection == 3)
    {
        double base = 0;
        double height = 0;
        cout << "Enter your base and height: ";
        cin >> base >> height;
        cout << TriangleArea(base, height);
    }
    else if(selection)
    {
        exit(0);
    }
    else
    {
        cout << "invalid input";
    }

    return 0;

}
