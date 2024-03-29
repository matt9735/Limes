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

#include "SampleStream.h"

namespace lemons::dsp
{

template <Sample SampleType>
SampleStream<SampleType>::SampleStream (std::function<SampleType()>&& sampleFuncToUse)
	: sampleFunc (std::move (sampleFuncToUse))
{
}

template <Sample SampleType>
SampleType SampleStream<SampleType>::getSample() const
{
	return sampleFunc();
}

template <Sample SampleType>
void SampleStream<SampleType>::getSamples (SampleType* const output, int numSamples) const
{
	for (auto i = 0; i < numSamples; ++i)
		output[i] = sampleFunc();
}

template <Sample SampleType>
void SampleStream<SampleType>::skipSamples (int numToSkip) const
{
	for (auto i = 0; i < numToSkip; ++i)
		sampleFunc();
}

template struct SampleStream<float>;
template struct SampleStream<double>;

}  // namespace lemons::dsp
