// Copyright (c) 2017-2022 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef ROCRAND_RNG_DEVICE_ENGINES_H_
#define ROCRAND_RNG_DEVICE_ENGINES_H_

#ifndef FQUALIFIERS
#define FQUALIFIERS __forceinline__ __device__ __host__
#endif

#define ROCRAND_DETAIL_PHILOX_BM_NOT_IN_STATE
#define ROCRAND_DETAIL_MRG31K3P_BM_NOT_IN_STATE
#define ROCRAND_DETAIL_MRG32K3A_BM_NOT_IN_STATE
#define ROCRAND_DETAIL_XORWOW_BM_NOT_IN_STATE

#include <rocrand/rocrand_kernel.h>

#endif // ROCRAND_RNG_DEVICE_ENGINES_H_
