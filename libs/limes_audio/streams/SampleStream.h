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

#include <functional>
#include "../util/Misc.h"

namespace lemons::dsp
{

/** Base class for any object that can output a stream of audio samples, with no audio or MIDI input.
	The constructor takes a lambda that must produce the next sample value when called with no arguments.
 */
template <Sample SampleType>
struct SampleStream
{
public:

	/** Creates a sample stream with a specified lambda function for producing the next sample. */
	explicit SampleStream (std::function<SampleType()>&& sampleFuncToUse);

	/** Destructor. */
	virtual ~SampleStream() = default;

	/** Returns the next output sample from the stream. */
	[[nodiscard]] SampleType getSample() const;

	/** Returns a stream of samples. */
	void getSamples (SampleType* const output, int numSamples) const;

	/** Skips a number of samples in the stream. */
	void skipSamples (int numToSkip) const;

private:

	const std::function<SampleType()> sampleFunc;
};

}  // namespace lemons::dsp
