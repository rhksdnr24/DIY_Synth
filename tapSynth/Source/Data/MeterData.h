/*
  ==============================================================================

    MetaData.h
    Created: 16 Oct 2024 3:52:18pm
    Author:  새 주인

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class MeterData
{
public:
    void processRMS (juce::AudioBuffer<float>& buffer);
    void processPeak (juce::AudioBuffer<float>& buffer);
    
    const std::atomic<float>& getRMS() { return rms; }
    const std::atomic<float>& getPeak() { return peak; }
    
private:
    std::atomic<float> rms { 0.0f };
    std::atomic<float> peak { 0.0f };
};
