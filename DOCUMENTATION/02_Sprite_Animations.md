# [Sprites Animation](https://github.com/Microsoft/DirectXTK/wiki/More-tricks-with-sprites)
**Animating Sprites**
- Added "AnimatedTexture.h" to Game.h
- Added private declarations to Game.h
- make_unique SpriteBatch in `CreateDevice` of Game.cpp
- Create WIC (Windows Imaging Component) from file in `CreateDevice` of Game.cpp
- make_unique AnimatedTexture in `CreateDevice` of Game.cpp
- Load m_ship in `CreateDevice` of Game.cpp
- Assign values to sprite image in `CreateResources` of Game.cpp
- Add reset functions to the sprite, spritebatch, and texture in `OnDeviceLost` of Game.cpp
- Begin sprite batch in `Render` of Game.cpp
- Draw sprite in `Render` of Game.cpp
- End sprite batch in `Render` of Game.cpp
- Update sprite in `Update` of Game.cpp

**Scrolling Background**
- Added "ScrollingBackground.h" to Game.h
- Added private declarations to Game.h
- Create WIC (Windows Imagaing Component) from file in `CreateDevice` of Game.cpp
- make_unique ScrollingBackground in `CreateDevice` of Game.cpp
- Load m_stars in `CreateDevice` of Game.cpp
- Assign values to image in `CreateResources` of Game.cpp
- Add reset functions to image and background texture in `OnDeviceLost` of Game.cpp
- Draw image in `Render` of Game.cpp
- Update image in `Update` of Game.cpp