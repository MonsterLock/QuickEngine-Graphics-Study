# [Sprites Animation](https://github.com/Microsoft/DirectXTK/wiki/More-tricks-with-sprites)
**Animating Sprites**
- Added "AnimatedTexture.h"
- Added private declarations to Game.h
- make_unique SpriteBatch in `CreateDevice` of Game.cpp
- Create WIC (Windows Imaging Component) from file in `CreateDevice` of Game.cpp
- make_unique AnimatedTexture in `CreateDevice` of Game.cpp
- Load m_ship in `CreateDevice` of Game.cpp
- Assign valyes to sprite image in `CreateResources` of Game.cpp
- Add reset functions to the sprite, spritebatch, and texture in `OnDeviceLost` of Game.cpp
- Begin sprite batch in `Render` of Game.cpp
- Draw sprite in `Render` of Game.cpp
- End sprite batch in `Render` of Game.cpp
- Update sprite in `Update` of Game.cpp
