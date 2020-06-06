#pragma once
template <typename T>
T pow(T&a, T&b) {
    T result = a;
    for (int i = 1; i < b; i++) {
        result *= a;
    }
    return result;
}