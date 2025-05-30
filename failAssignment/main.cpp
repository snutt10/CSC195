#include <iostream>
#include <vector>
#include "Shapes.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    vector<Shapes*> shapes;

    Circle* circ = new Circle(1.0f);
    (*circ).SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(circ);
    shapes.push_back(r);

    for (int i = 0; i <= shapes.size(); i++) {
        cout << "Area: " << shapes[i]->Area() << endl;
        if (shapes[i]->GetType() == circ->GetType() ) {
            cout << "Radius: " << circ->GetRadius() << endl;
        }
    }

    for (Shapes* sp : shapes) {
        delete sp;
    }
    return 0;
}
