# [Drawing Text](https://github.com/Microsoft/DirectXTK/wiki/Drawing-text)
**Create font**
- Download MakeSpriteFont.exe
- Run the command-prompt to capture a system TrueType
- Add the sprite font to the project.

**Loading a Bitmap Font**
- Add a private declaration to Game.h
- make_unique sprite font in `CreateDevice` of Game.cpp
- Add reset to the font in `OnDeviceLost` of Game.cpp

**Drawing Text Using a Font**
- Add private declarations to Game.h
- Create a new sprite batch in `CreateDevice` of Game.cpp
- Assign valyes to font position in `CreateResources` of Game.cpp
- Add a reset to the sprite batch in `OnDeviceLost` of Game.cpp
- Render a draw string in `Render` of Game.cpp

**Using Wide String for Text**
- Modify wide char to wide string in `Render` of Game.cpp

**Using ASCII**
- Add <locale> and <codecvt> to pch.h
- Modify `Render` of Game.cpp by replacing previous text with a const char* converted to wide string.