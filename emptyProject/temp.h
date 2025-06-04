#pragma once

template<typename T = int>
class temp{
private:
	int x, y;
public:
	temp() : x{0}, y{0} {}
	temp(T x, T y) : x{x}, y{y} {}
};

template<typename T, int size>
class TempArray {
private:
	T m_elements[size];
public:
	T operator[] (int index) { return m_elements[index]; }
};

