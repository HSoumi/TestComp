#include "pch.h"
#include "Test.h"
#include "Test.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.

namespace winrt::TestComp::implementation
{
    double Test::add(double firstNumber, double secondNumber)
    {
        return firstNumber + secondNumber;
    }
}
