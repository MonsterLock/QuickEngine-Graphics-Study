# [Simple Rendering](https://github.com/Microsoft/DirectXTK/wiki/Simple-rendering)
**Drawing a Triangle**
- Add private delcarations to Game.h
- Create common states and basic effect in `CreateDevice` of Game.cpp
- Add reset functions for states, effect, batch, and input layout in `OnDeviceLost` of Game.cpp
- Set vertex positions and colors and then render triangle in `Render` of Game.cpp

**Pixel vs. Normalized Coordinates**
- Created a projection matrix in `CreateResources` of Game.cpp
- Changed the vertex positions based on pixel position in `Render` of Game.cpp