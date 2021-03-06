//
// Copyright (c) 2017 Dmitry Krutskikh
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//
/*!
  \file   backend_config.hpp
  \brief  additional backend header
*/

#ifndef SRC_BACKENDS_OSX_BACKEND_CONFIG_HPP_
#define SRC_BACKENDS_OSX_BACKEND_CONFIG_HPP_

//------------------------------------------------------------------------------

#if TARGET_OS_MAC

#define TARGET_OS OS_MAC_OSX

#if defined(__LP64__)
#define TARGET_CPU CPU_INTEL_x64
#else
#define TARGET_CPU CPU_INTEL_x86
#endif

#endif

//------------------------------------------------------------------------------

#if defined(__llvm__) && (__clang__)
#include "../coreconfig_clang.hpp"
#else
#include "../coreconfig_gcc.hpp"
#endif

//------------------------------------------------------------------------------

#endif  // SRC_BACKENDS_OSX_BACKEND_CONFIG_HPP_
