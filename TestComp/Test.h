#pragma once
#include "Test.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly

namespace winrt::TestComp::implementation
{
    struct Test : TestT<Test>
    {
        Test() = default;

        double add(double firstNumber, double secondNumber);
    };
}
namespace winrt::TestComp::factory_implementation
{
    struct Test : TestT<Test, implementation::Test>
    {
    };
}
