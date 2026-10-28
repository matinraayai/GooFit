#pragma once

// GooFit is written against the CUDA runtime API. For the HIP backend, map the
// subset of CUDA runtime names GooFit uses onto their HIP equivalents, so the
// same source builds for both GPU vendors. Only included when
// THRUST_DEVICE_SYSTEM == THRUST_DEVICE_SYSTEM_HIP.

#include <hip/hip_runtime_api.h>

using cudaError_t    = hipError_t;
using cudaError      = hipError_t;
using cudaDeviceProp = hipDeviceProp_t;

#define cudaSuccess hipSuccess
#define cudaErrorMemoryAllocation hipErrorOutOfMemory
#define cudaGetErrorString hipGetErrorString

#define cudaMemcpy hipMemcpy
#define cudaMemcpyToSymbol hipMemcpyToSymbol
#define cudaMemcpyFromSymbol hipMemcpyFromSymbol
#define cudaMemcpyHostToDevice hipMemcpyHostToDevice
#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost

#define cudaMalloc hipMalloc
#define cudaFree hipFree
#define cudaDeviceSynchronize hipDeviceSynchronize

#define cudaDeviceSetLimit hipDeviceSetLimit
#define cudaDeviceGetLimit hipDeviceGetLimit
#define cudaLimitStackSize hipLimitStackSize

#define cudaGetDeviceCount hipGetDeviceCount
#define cudaGetDeviceProperties hipGetDeviceProperties
#define cudaSetDevice hipSetDevice
