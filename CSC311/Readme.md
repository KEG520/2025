# Kadden Grant
# CSC 311 - Misconception : singles and doubles in C can be compared for equality

## Goal
This program demonstrates why comparing `float` or `double` values for exact equality can be misleading.
float values f1 and f2

double values d1 and d2 It then compares them using == to test if they are exactly equal and prints their actual stored values.

## Output Example

Float: 0.1f * 3 == 0.3f ? true
Values: f1 = 0.3000000119, f1 = 0.3000000119
Double Comparison: 0.1 * 3 == 0.3 ? false
Double values: d1 = 0.30000000000000004441, d2 = 0.29999999999999998890

## Interpretation

Notice:

The float comparison incorrectly says true, but the printed values show small errors.

The double comparison correctly says false, because even finer precision exposes the mismatch more clearly.

Small rounding errors show in both types, but doubles can show even smaller differences that floats hide.

## Why This Happens
Computers store floating point numbers using the IEEE 754 standard system, which do not represent many decimal values exactly in binary properly.  
That includes simple numbers like 0.1 or 0.3 as shown in the example file.

When multiplying or adding them, the smallest rounding become bigger and using `==` doesn't work because they're not bit for bit.

## Correct Way to Compare
#include <cmath>

if (std::fabs(d1 - d2) < 1e-9) {
    // d1 and d2 are similar enough to be considered equal
}

## Understanding

Floating point errors occur in almost every program that does scientific calculations, physics simulations, financial applications, and computer graphics.
Failing to handle floating point comparisons correctly can cause:
 - unexpected infinite loops
 - failures
 - bugs

