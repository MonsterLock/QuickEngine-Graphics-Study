# [Sprites and Textures](https://github.com/Microsoft/DirectXTK/wiki/Sprites-and-textures)
**Loading a Texture**
- Create Direct3D Win32 Game
- Add directxtk_desktop_2015 NuGet package
- Create a ComPtr variable of a texture in Game.h private declarations
- Create Windows Imaging Component(WIC) in `CreateDevice` of Game.cpp to load a bitmap
- Add a texture reset in `OnDeviceLost` of Game.cpp

