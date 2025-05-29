#pragma once
#include "Shapes.h"
class Rectangle : public Shapes {
public:
	Rectangle(float w, float h);

	float Area() override;

	void setWidth(float width) const;
	float getWidth();

	void setHeight(float height) const;
	float getHeight();

private:
	float m_width;
	float m_height;

};

