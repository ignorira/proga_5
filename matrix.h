#pragma once
#include <iostream>
#include <iostream>
#include <string>
#include <vector>

class MyException : public std::exception
{
public:
    MyException(std::string msg) : msg(std::move(msg)) {}

    const std::string& getError() const
    {
        return msg;
    }

private:
    std::string msg;
};

template <typename T, int N, int M>
class Matrix
{
private:
    T mat[N][M];

public:
    T Get(int i, int j) const;
    void Set(int i, int j, T value);
    void Print(const char* ObjName) const;
    void Check(int i, int j) const;
};

#include "matrix.icc"