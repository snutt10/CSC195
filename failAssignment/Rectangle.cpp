#include "Rectangle.h"

class Rectangle : public Shapes {
public:
    Rectangle(float w, float h) {
        m_width = w;
        m_height = h;
    }

    float Area() override {
        return m_width * m_height;
    }

    void setWidth(float width) const { width = m_width; }
    float getWidth() { return m_width; }

    void setHeight(float height) const { height = m_height; }
    float getHeight() { return m_height; }

private:
    float m_width;
    float m_height;
};
