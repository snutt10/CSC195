#include "Rectangle.h"=

Rectangle::Rectangle(float w, float h) {
    m_width = w;
    m_height = h;
}

float Rectangle::Area() {
    return m_width * m_height;
}

void Rectangle::setWidth(float width) const { width = m_width; }
float Rectangle::getWidth() { return m_width; }

void Rectangle::setHeight(float height) const { height = m_height; }
float Rectangle::getHeight() { return m_height; }