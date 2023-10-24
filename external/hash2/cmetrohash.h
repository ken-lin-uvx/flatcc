// metrohash.h
//
// The MIT License (MIT)
//
// Copyright (c) 2015 J. Andrew Rogers
//
// Updated Nov. 2015 to use safe unaligned reads and platform neutral
// hash. This WILL change hashes on big endian platfors. / mikkelfj
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

#ifndef CMETROHASH_H
#define CMETROHASH_H

#if defined (__cplusplus)
extern "C" {
#endif

#include <stdint.h>

void cmetrohash64_1(const uint8_t * key, uint64_t len, uint32_t seed, uint8_t * out);
void cmetrohash64_2(const uint8_t * key, uint64_t len, uint32_t seed, uint8_t * out);

#if defined (__cplusplus)
}
#endif

#endif /* CMETROHASH_H */