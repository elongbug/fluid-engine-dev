// Copyright (c) 2017 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#ifdef JET_USE_CUDA

#ifndef INCLUDE_JET_CUDA_UTILS_H_
#define INCLUDE_JET_CUDA_UTILS_H_

#include <jet/macros.h>

#include <cuda_runtime.h>

namespace jet {

namespace experimental {

inline JET_CUDA_HOST_DEVICE float4 operator+(float4 a, float4 b) {
    return make_float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

inline JET_CUDA_HOST_DEVICE float4 operator-(float4 a, float4 b) {
    return make_float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

inline JET_CUDA_HOST_DEVICE float4 operator*(float a, float4 b) {
    return make_float4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline JET_CUDA_HOST_DEVICE float4 operator*(float4 a, float b) {
    return make_float4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline JET_CUDA_HOST_DEVICE float4 operator*(float4 a, float4 b) {
    return make_float4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

inline JET_CUDA_HOST_DEVICE float4 operator/(float a, float4 b) {
    return make_float4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline JET_CUDA_HOST_DEVICE float4 operator/(float4 a, float b) {
    return make_float4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline JET_CUDA_HOST_DEVICE float4 operator/(float4 a, float4 b) {
    return make_float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline JET_CUDA_HOST_DEVICE void operator/=(float4& a, float b) {
    a.x /= b;
    a.y /= b;
    a.z /= b;
    a.w /= b;
}

inline JET_CUDA_HOST_DEVICE void operator/=(float4& a, float4 b) {
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
}

inline JET_CUDA_HOST_DEVICE bool operator==(float4 a, float4 b) {
    return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

inline JET_CUDA_HOST_DEVICE float dot(float2 a, float2 b) {
    return a.x * b.x + a.y * b.y;
}

inline JET_CUDA_HOST_DEVICE float dot(float3 a, float3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

inline JET_CUDA_HOST_DEVICE float dot(float4 a, float4 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

inline JET_CUDA_HOST_DEVICE float lengthSquared(float2 v) { return dot(v, v); }

inline JET_CUDA_HOST_DEVICE float lengthSquared(float3 v) { return dot(v, v); }

inline JET_CUDA_HOST_DEVICE float lengthSquared(float4 v) { return dot(v, v); }

inline JET_CUDA_HOST_DEVICE float length(float2 v) {
    return sqrtf(lengthSquared(v));
}

inline JET_CUDA_HOST_DEVICE float length(float3 v) {
    return sqrtf(lengthSquared(v));
}

inline JET_CUDA_HOST_DEVICE float length(float4 v) {
    return sqrtf(lengthSquared(v));
}

}  // namespace experimental
}  // namespace jet

#endif  // INCLUDE_JET_CUDA_UTILS_H_

#endif  // JET_USE_CUDA
