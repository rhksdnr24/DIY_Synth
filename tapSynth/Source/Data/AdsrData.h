/*
  ==============================================================================

    AdsrData.h
    Created: 15 Oct 2024 6:16:10pm
    Author:  새 주인

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class AdsrData : public juce::ADSR

{
public:
    void update (const float attack, const float decay, const float sustain, const float release);
    
private:
    juce::ADSR::Parameters adsrParams;
};
