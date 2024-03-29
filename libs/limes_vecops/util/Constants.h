/*
 * ======================================================================================
 *  __    ____  __  __  ____  ___
 * (  )  (_  _)(  \/  )( ___)/ __)
 *  )(__  _)(_  )    (  )__) \__ \
 * (____)(____)(_/\/\_)(____)(___/
 *
 *  This file is part of the Limes open source library and is licensed under the terms of the GNU Public License.
 *
 * ======================================================================================
 */

#pragma once

#include <type_traits>

namespace lemons
{

template <typename T>
concept Scalar = std::is_scalar_v<T>;

}

#if __has_include(<numbers>)
#	include <numbers>

namespace lemons::constants
{

template <Scalar T>
static constexpr T pi = std::numbers::pi_v<T>;

}

#else

namespace lemons::constants
{

template <Scalar T>
static constexpr T pi = static_cast<T> (3.1415916);

}

#endif

namespace lemons::constants
{

template <Scalar T>
static constexpr T two_pi = pi<T>* T (2.);

template <Scalar T>
static constexpr T blackman_alpha = T (0.16);

}  // namespace lemons::constants
