#include "Shapes.h"
class Shapes {
public:
    Shapes() {}
    ~Shapes() {}

    virtual float Area();
};

float Shapes::Area(){
    return 0.0f;
}
