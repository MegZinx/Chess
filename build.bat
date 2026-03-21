@echo off
g++ src/main.cpp src/Board.cpp src/Renderer.cpp -I external/SFML/include -L external/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system -o build/chess.exe && build\chess.exe