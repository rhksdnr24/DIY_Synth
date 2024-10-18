/*
  ==============================================================================

    FilterData.h
    Created: 15 Oct 2024 8:42:07pm
    Author:  새 주인

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "OscData.h"

class FilterData : public juce::dsp::StateVariableTPTFilter<float>
{
public:
    FilterData();
    void setParams(const int fileterType, const float filterCutoff, const float filterResonance);
    void setLfoParams(const float freq, const float depth);
    void prepareToPlay(double sampleRate, int samplesPerBlock, int outputChannels);
    void processNextBlock(juce::AudioBuffer<float> & buffer);
    float processNextSample(int channel, float inputValue);
    void resetAll();
private:
    void selectFilterType(const int filterType);
    juce::dsp::Oscillator<float> lfo { [](float x) { return std::sin (x); }};
};
