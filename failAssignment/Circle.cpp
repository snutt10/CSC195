#include "Circle.h"
#include  <vector>
class Circle : public Shapes {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float Area() override {
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) const { radius = m_radius; }
    float GetRadius() { return m_radius; }

private:
    float m_radius;
};
