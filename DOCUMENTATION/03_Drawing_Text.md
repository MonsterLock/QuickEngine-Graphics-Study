# [Drawing Text](https://github.com/Microsoft/DirectXTK/wiki/Drawing-text)
**Create font**
- Download MakeSpriteFont.exe
- Run the command-prompt to capture a system TrueType
- Add the sprite font to the project.

**Loading a Bitmap Font**
- Add a private declaration to Game.h
- make_unique sprite font in `CreateDevice` of Game.cpp
- Add reset to the font in `OnDeviceLost` of Game.cpp