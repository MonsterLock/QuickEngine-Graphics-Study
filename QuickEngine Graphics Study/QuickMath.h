/*******************************************************************************************
*	QuickEngine Graphics Study															   *
*	QuickMath.h																			   *
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
#include <cmath>

static constexpr float PI = 3.14159265f;
static constexpr float EPSILON = 0.00001f;

template <typename T>
constexpr auto Square(const T& a) {
	return a * a;
}

template <typename T>
constexpr auto Cube(const T& a) {
	return Square(a) * a;
}

template <typename T>
constexpr auto Average(const T& a, const T& b) {
	return (a + b) / 2;
}

template<typename T>
constexpr bool IsEqual(const T& a, const T& b) {
	return abs(a - b) < EPSILON;
}

const bool IsZero(const float a) {
	return (abs(a)) < EPSILON;
}

template <typename T>
constexpr auto Greater(const T& a, const T& b) {
	return (a > b) ? a : b;
}

template <typename T>
constexpr auto Lesser(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T>
constexpr T DegToRads(T Deg) {
	return (T)(Deg * PI / 180.0f);
}

template <typename T>
constexpr T RadsToDeg(T Rad) {
	return (T)(Rad * 180.0f / PI);
}

template <typename T>
constexpr T lerp(const T& from, const T& to, const T& t) {
	return from + t * (to - from);
}