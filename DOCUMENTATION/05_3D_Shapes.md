# [3D Shapes](https://github.com/Microsoft/DirectXTK/wiki/3D-shapes)
**Drawing a Sphere**
- Add private delcarations to Game.h
- Create a geometric primitive of type sphere in `CreateDevice` of Game.cpp
- Set world matrix to the identity matrix
- Assign view matrix to CreateLookAt in `CreateResources` of Game.cpp
- Assign projection matrix in `CreateResources` of Game.cpp
- Add a reset to the shape in `OnDeviceLost` of Game.cpp
- Render the shape in `Render` of Game.cpp
- Update world matrix to rotate in `Update` of Game.cpp