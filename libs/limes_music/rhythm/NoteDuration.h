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

namespace lemons::music
{

struct NoteDuration final
{
public:

	// TO DO: triplets

	// special: double whole note

	constexpr explicit NoteDuration (int kind);

	constexpr NoteDuration (const NoteDuration& other) noexcept;

	constexpr NoteDuration& operator= (const NoteDuration& other) noexcept;

	[[nodiscard]] constexpr bool operator== (const NoteDuration& other) const noexcept;

	[[nodiscard]] constexpr bool operator!= (const NoteDuration& other) const noexcept;

	[[nodiscard]] constexpr bool operator> (const NoteDuration& other) const noexcept;

	[[nodiscard]] constexpr bool operator< (const NoteDuration& other) const noexcept;

	constexpr NoteDuration& operator++() noexcept;

	constexpr NoteDuration& operator--() noexcept;

	[[nodiscard]] constexpr bool hasStem() const noexcept;

	[[nodiscard]] constexpr bool noteHeadIsFilled() const noexcept;

	[[nodiscard]] constexpr int getDuration() const noexcept;

	[[nodiscard]] constexpr double getRatioToOtherDuration (const NoteDuration& other) const noexcept;

private:

	int duration { 4 };
};

}  // namespace lemons::music


#include "NoteDuration_impl.h"
