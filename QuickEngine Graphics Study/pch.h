/*******************************************************************************************
*	QuickEngine Graphics Study															   *
*	pch.h																			       *
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

#include <WinSDKVer.h>
#define _WIN32_WINNT 0x0601
#include <SDKDDKVer.h>

// Use the C++ standard templated min/max
#define NOMINMAX

// DirectX apps don't need GDI
#define NODRAWTEXT
#define NOGDI
#define NOBITMAP

// Include <mcx.h> if you need this
#define NOMCX

// Include <winsvc.h> if you need this
#define NOSERVICE

// WinHelp is deprecated
#define NOHELP

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <wrl/client.h>

#include <d3d11_1.h>
#include <dxgi1_2.h>
#include <DirectXMath.h>
#include <DirectXColors.h>

#include <algorithm>
#include <exception>
#include <memory>
#include <stdexcept>


// directxtk_desktop_2015 header files
#include "CommonStates.h"
#include "DDSTextureLoader.h"
#include "DirectXHelpers.h"
#include "Effects.h"
#include "GamePad.h"
#include "GeometricPrimitive.h"
#include "GraphicsMemory.h"
#include "Keyboard.h"
#include "Model.h"
#include "Mouse.h"
#include "PostProcess.h"
#include "PrimitiveBatch.h"
#include "ScreenGrab.h"
#include "SimpleMath.h"
#include "SpriteBatch.h"
#include "SpriteFont.h"
#include "VertexTypes.h"
#include "WICTextureLoader.h"
#include <locale>
#include <codecvt>

namespace DX
{
    inline void ThrowIfFailed(HRESULT hr)
    {
        if (FAILED(hr))
        {
            // Set a breakpoint on this line to catch DirectX API errors
            throw std::exception();
        }
    }
}