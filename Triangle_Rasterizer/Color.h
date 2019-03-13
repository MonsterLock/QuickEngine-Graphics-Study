#pragma once
#include "DirectXMath.h"

using namespace DirectX;

static XMVECTORF32 Color(float _r, float _g, float _b, float _a) {
	XMVECTORF32 COLOR = {_r / 255.0f, _g / 255.0f, _b / 255.0f, _a / 255.0f};
	return COLOR;
}