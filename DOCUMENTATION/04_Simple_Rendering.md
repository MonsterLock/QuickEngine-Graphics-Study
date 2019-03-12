# [Simple Rendering](https://github.com/Microsoft/DirectXTK/wiki/Simple-rendering)
**Drawing a Triangle**
- Add private delcarations to Game.h
- Create common states and basic effect in `CreateDevice` of Game.cpp
- Add reset functions for states, effect, batch, and input layout in `OnDeviceLost` of Game.cpp
- Set vertex positions and colors and then render triangle in `Render` of Game.cpp

**Pixel vs. Normalized Coordinates**
- Created a projection matrix in `CreateResources` of Game.cpp
- Changed the vertex positions based on pixel position in `Render` of Game.cpp

**Drawing a Grid**
- Add private declarations to Game.h
- Assign the world matrix to the identity matrix in `CreateDevice` of Game.cpp;
- Assign the view and projection matrices in `CreateResources` of Game.cpp
- Draw the grid in `Render` of Game.cpp

**Anti-aliasing**
- Update grid to rotate in `Update` of Game.cpp
- Create a private declaration in Game.h
- Create a rasterizer description in `CreateDevice` of Game.cpp
- Create a reset for the raster in `OnDeviceLost` of Game.cpp
- Modify by setting the raster set from culling none to get() in `Render` of Game.cpp

**Multisampling**
- Modified the rasterizer description in `CreateDevice` of Game.cpp
- Change the sample count for both swap chains in `CreateResources` of Game.cpp
- Change the depth/stencil texture description in `CreateResources` of Game.cpp
- Change the depth/stencil texture view description in `CreateResources` of Game.cpp