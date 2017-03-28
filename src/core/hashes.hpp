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
/*
  \file   hashes.hpp
  \brief  hash functions
*/

#ifndef SRC_CORE_HASHES_HPP_
#define SRC_CORE_HASHES_HPP_

#include <cstddef>
#include <cstdint>
#include "../../include/core.hpp"

namespace toygine {

std::uint8_t crc8(const byte *data, std::size_t size, std::uint8_t crc = 0);
std::uint16_t crc16(const byte *data, std::size_t size, std::uint16_t crc = 0);
std::uint32_t crc32(const byte *data, std::size_t size, std::uint32_t crc = 0);

}  // namespace toygine

#endif  // SRC_CORE_HASHES_HPP_
