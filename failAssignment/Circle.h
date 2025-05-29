#pragma once
#include "Shapes.h"
class Circle : public Shapes{
public:
	Circle(float r);
	~Circle();

	float Area() override;

	void SetRadius(float radius) const;
	float GetRadius();

private:
	float m_radius;
};

