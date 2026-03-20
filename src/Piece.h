#pragma once

struct Piece
{
    enum class Type { NONE, PAWN, ROOK, BISHOP, KNIGHT, QUEEN, KING };
    enum class Color { NONE, WHITE, BLACK };

    Type type = Type::NONE;
    Color color = Color::NONE;
};
