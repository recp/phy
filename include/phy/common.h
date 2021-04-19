/*
 * This file is part of the phy project (https://github.com/recp/phy)
 * Copyright (c) Recep Aslantas.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef phy_common_h
#define phy_common_h

#ifndef _USE_MATH_DEFINES
#  define _USE_MATH_DEFINES       /* for windows */
#endif

#ifndef _CRT_SECURE_NO_WARNINGS
#  define _CRT_SECURE_NO_WARNINGS /* for windows */
#endif

#include <stdint.h>
#include <stddef.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

#if defined(_MSC_VER)
#  ifdef PHY_STATIC
#    define PHY_EXPORT
#  elif defined(PHY_EXPORTS)
#    define PHY_EXPORT __declspec(dllexport)
#  else
#    define PHY_EXPORT __declspec(dllimport)
#  endif
#  define PHY_INLINE __forceinline
#else
#  define PHY_EXPORT __attribute__((visibility("default")))
#  define PHY_INLINE static inline __attribute((always_inline))
#endif

#endif /* phy_common_h */
