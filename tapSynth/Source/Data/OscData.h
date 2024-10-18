/*
  ==============================================================================

    OscData.h
    Created: 15 Oct 2024 7:56:05pm
    Author:  새 주인

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class OscData : public juce::dsp::Oscillator<float>
{
public:
    void prepareToPlay(double sampleRate, int samplesPerBlock, int outputChannels);
    void setType(const int oscSelection);
    void setGain(const float levelInDecibels);
    void setOscPitch(const int pitch);
    void setFreq(const int midiNoteNumber);
    void setFmOsc(const float freq, const float depth);
    void renderNextBlock(juce::dsp::AudioBlock<float> & audioBlock);
    float processNextSample(float input);
    void setParams(const int oscChoice, const float oscGain, const int oscPitch, const float fmFreq, const float fmDepth);
    void resetAll();
private:
    juce::dsp::Gain<float> gain;
    juce::dsp::Oscillator<float> fmOsc { [](float x) { return std::sin (x); }};
    
    int lastPitch { 0 };
    int lastMidiNote { 0 };
    float fmDepth { 0.0f };
    float fmModulator { 0.0f };
};
