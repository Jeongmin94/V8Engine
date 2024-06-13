#pragma once

// C++
#include <iostream>
#include <string>
#include <memory>
#include <algorithm>

using namespace std;

// Windows
#include <Windows.h>

// DirectX
// TODO: DX11, DX12 호환 가능하도록 설정
#include <d3d11.h>
#include <d3dcompiler.h>
#include <wrl/client.h>		// ComPtr

// imgui
// TODO: DX11, DX12 호환 가능하도록 설정
#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
