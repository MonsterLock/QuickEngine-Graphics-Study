# [Sprites and Textures](https://github.com/Microsoft/DirectXTK/wiki/Sprites-and-textures)
**Loading a Texture**
- Create Direct3D Win32 Game
- Add directxtk_desktop_2015 NuGet package
- Create a ComPtr variable of a texture in Game.h private declarations
- Create Windows Imaging Component(WIC) in `CreateDevice` of Game.cpp to load a bitmap
- Add a texture reset in `OnDeviceLost` of Game.cpp

**Drawing a Sprite**
- Added private delcarations to Game.h
- Modified `CreateDevice` in Game.cpp
- Set values in `CreateResources` in Game.cpp
- Add a sprite batch reset in `OnDeviceLost` in Game.cpp
- Draw sprite in `Render` of Game.cpp
 
**Alpha Mode**
- Added a private delcaration to Game.h
- Set value in `CreateDevice` of Game.cpp
- Add a state reset in `OnDeviceLost` of Game.cpp
- Modified `Render` of Game.cpp
  
**Using DDS Files for Textures**
- Converted .png to .dds (DirectDraw Surface)
- Changed "CreateWICTextureFromFile" to "CreateDDSTextureFromFile" in `CreateDevice` of Game.cpp
- Modified "m_spriteBatch->Begin()" to default in `Render` of Game.cpp

**Rotating, Scaling, Tinting, and Tiling**
- Changed the fifth parameter of "m_spriteBatch->Draw()" in `Render` of Game.cpp
- Added a seventh parameter to "m_spriteBatch->Draw()" in `Render` of Game.cpp
- Changed the fourth parameter of "m_spriteBatch->Draw()" in `Render` of Game.cpp
- Added a rect to private declarations inside Game.h
- Assigned rect values in `CreateDevice` of Game.cpp
- Added argument to "m_spriteBatch->Begin()" in `Render` of Game.cpp
- Changed third paramenter of "m_spriteBatch->Draw()" in `Render` of Game.cpp