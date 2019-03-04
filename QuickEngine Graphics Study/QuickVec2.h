/*******************************************************************************************
*	QuickEngine Graphics Study															   *
*	QuickVec2.h																			   *
*	Copyright 2019 MonsterLock <https://github.com/MonsterLock>						       *
*																						   *
*	This file is part of the QuickEngine Graphics Study.								   *
*																						   *
*	The QuickEngine Graphics Study is free software: you can redistribute it and/or modify *
*	it under the terms of the GNU General Public License as published by				   *
*	the Free Software Foundation, either version 3 of the License, or					   *
*	(at your option) any later version.													   *
*																						   *
*	The QuickEngine Graphics Study is distributed in the hope that it will be useful,	   *
*	but WITHOUT ANY WARRANTY; without even the implied warranty of						   *
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						   *
*	GNU General Public License for more details.										   *
*																						   *
*	You should have received a copy of the GNU General Public License					   *
*	along with The QuickEngine Graphics Study.  If not, see <http://www.gnu.org/licenses/>.*
*******************************************************************************************/
#pragma once
#include "QuickMath.h"

template <typename T>
struct Vec2d {
	T x, y;

	Vec2d() {
		x = y = (T)0;
	}

	Vec2d(const T& _x) {
		x = _x;
	}

	Vec2d(T x, T y)
		:
		x(x),
		y(y)
	{}

	Vec2d& operator=(const Vec2d& a) {
		x = a.x; y = a.y;
		return *this;
	}

	Vec2d operator-() const {
		return Vec2d(-x, -y);
	}

	Vec2d operator-(const Vec2d& that) const {
		return Vec2d(x - that.x, y - that.y);
	}

	Vec2d operator+(const Vec2d& that) const {
		return Vec2d(x + that.x, y + that.y);
	}

	Vec2d operator*(const T& a) const {
		return Vec2d(x * a, y * a);
	}

	T operator*(const Vec2d& a) const {
		return x * a.x + y * a.y;
	}

	bool operator==(const Vec2d& that) const {
		if (x == that.x && y == that.y) return true;

		return false;
	}

	bool operator!=(const Vec2d& that) const {
		if (x == that.x && y == that.y) return false;

		return true;
	}

	static constexpr Vec2d ZERO() {
		return Vec2d((T)0, (T)0);
	}

	static T Det(const Vec2d<T>& a, const Vec2d<T>& b) {
		return a.x * b.y - a.y * b.x;
	}

	static T DetHalf(const Vec2d<T>& a, const Vec2d<T>& b) {
		return Det(a, b) / 2;
	}

	static T Orientation(const Vec2d<T>& a, const Vec2d<T>& b, const Vec2d<T>& c) {
		return Det(b - a, c - a);
	}

	static T OrientationHalf(const Vec2d<T>& a, const Vec2d<T>& b, const Vec2d<T>& c) {
		return DetHalf(b - a, c - a);
	}

	static T LengthSquared(const Vec2d<T>& a) {
		return Square(a.x) + Square(a.y);
	}

	static T Length(const Vec2d<T>& a) {
		return sqrt(LengthSquared(a));
	}

	static Vec2d Normalize(const Vec2d<T>& a) {
		T length = Length(a);
		return IsZero(LengthSquared(a)) ? a : Vec2d(a.x / length, a.y / length);
	}

	static Vec2d Average2d(const Vec2d<T>& a, const Vec2d<T>& b) {
		return Vec2d(Average(a.x, b.x), Average(a.y, b.y));
	}

	static T AngleRad(const Vec2d<T>& a, const Vec2d<T>& b) {
		return acos(a * b / (Length(a) * Length(b)));
	}

	static T AngleDeg(const Vec2d<T>& a, const Vec2d<T>& b) {
		return RadsToDeg(acos(a * b / (Length(a) * Length(b))));
	}

	static T Component(const Vec2d<T>& a, const Vec2d<T>& b) {
		return a * Normalize(b);
	}

	static Vec2d Projection(const Vec2d<T>& a, const Vec2d<T>& b) {
		return Normalize(b) * Component(a, b);
	}

	static Vec2d Reflection(const Vec2d<T>& a, const Vec2d<T>& b) {
		if (IsZero(Length(b))) return -a;

		return (Projection(a, b) * 2) - a;
	}

	static Vec2d Lerp2d(const Vec2d<T>& a, const Vec2d<T>& b, const T& t) {
		return Vec2d(Lerp(a.x, b.x, t), Lerp(a.y, b.y, t));
	}

	static bool CloseEnough(const Vec2d<T>& a, const Vec2d<T>& b) {
		if (IsEqual(x, that.x) && IsEqual(y, that.y)) return true;

		return false;
	}
};

typedef Vec2d<float> VEC2;
typedef Vec2d<double> VEC2D;
typedef Vec2d<int> VEC2I;