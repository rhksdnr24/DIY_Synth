/*
  ==============================================================================

    SynthSounds.h
    Created: 6 Oct 2024 3:41:08pm
    Author:  새 주인

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override {return true;}
    bool appliesToChannel (int midiChannel) override {return true;}
    
};

