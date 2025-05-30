#pragma once
#include <vector>
class Shapes{
public:
	virtual float Area();
	
	enum class eType {
		CIRCLE = 0,
		RECTANGLE
	};

	virtual eType GetType() = 0;
};

