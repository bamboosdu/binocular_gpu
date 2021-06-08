/*
 * @Author: Qiang Zhou
 * @Date: 2021-06-08 11:51:42
 * @LastEditTime: 2021-06-08 11:52:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /binocular_gpu/sgm_types.h
 */

#pragma once

#include <cstdint>
#include <limits>

/** \brief float无效值 */
constexpr auto Invalid_Float = std::numeric_limits<float>::infinity();

/** \brief 基础类型别名 */
typedef int8_t			sint8;		// 有符号8位整数
typedef uint8_t			uint8;		// 无符号8位整数
typedef int16_t			sint16;		// 有符号16位整数
typedef uint16_t		uint16;		// 无符号16位整数
typedef int32_t			sint32;		// 有符号32位整数
typedef uint32_t		uint32;		// 无符号32位整数
typedef int64_t			sint64;		// 有符号64位整数
typedef uint64_t		uint64;		// 无符号64位整数
typedef float			float32;	// 单精度浮点
typedef double			float64;	// 双精度浮点
