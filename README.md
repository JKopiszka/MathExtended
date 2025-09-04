# MathExtended DLL

Author: Jakub Kopiszka  
Version: 1.0.0  
License: Apache License 2.0
Platform: Windows (x86 / x64)  
Language: C++ (MSVC)

---

## Overview

MathExtended is a Windows dynamic-link library (DLL) providing math and physics utilities beyond the C++ standard library. It is designed for dynamic loading at runtime using `LoadLibrary` and `GetProcAddress`. Internally, code is organized with C++ classes; externally, a flat C API is exported for compatibility and ABI stability.

---

## Features

- **Mathematics**
  - Factorial (iterative and recursive)
  - Greatest Common Divisor (GCD)
  - Least Common Multiple (LCM)
  - Mathematical constants via getters (PI, E, PHI, SQRT2, SQRT3, SQRT5)
- **Dynamic API**
  - No headers or `.lib` required for runtime consumption
  - Stable C ABI suitable for cross-language interop

---

## Requirements

- Windows 10 or later
- MSVC (Visual Studio 2019 or newer recommended)
- Matching architecture between consumer app and DLL (x86 with x86, x64 with x64)

---

## Function names

Following names of the functions are used. You should use them to import appropirate function.

- `factorial`
- `lcm`
- `gcd`
- `quick_gcd`
- `randomDouble`
- `randomInt`
- `get_e`
- `get_pi`
- `get_SQRT2`
- `get_SQRT3`
- `get_SQRT5`
- `get_PHI`
