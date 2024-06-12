//
// Created by Nora on 11/06/2024.
//

#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    int x, y;

    constexpr Vector2(const int x, const int y) : x(x), y(y) {
    }

    constexpr Vector2() : x(0), y(0) {
    }

    ~Vector2() = default;

    static constexpr Vector2 Zero() {
        return {};
    }

    friend std::ostream &operator <<(std::ostream &os, const Vector2 &v) {
        return os << "{ x=" << v.x << ", y=" << v.y << " }" << std::endl;
    }
};

#endif //VECTOR2_H
