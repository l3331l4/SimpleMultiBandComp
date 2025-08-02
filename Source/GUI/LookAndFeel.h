/*
  ==============================================================================

    LookAndFeel.h
    Created: 30 Oct 2021 12:57:21am
    Author:  matkatmusic

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#define USE_LIVE_CONSTANT false

#if USE_LIVE_CONSTANT
#define colorHelper(c) JUCE_LIVE_CONSTANT(c);
#else
#define colorHelper(c) c;
#endif

namespace ColorScheme
{
inline juce::Colour getGainReductionColor() { return colorHelper(juce::Colour(0xff38c19b)); }
inline juce::Colour getInputSignalColor() { return colorHelper(juce::Colour(0xff00e7ff)); }
inline juce::Colour getOutputSignalColor() { return colorHelper(juce::Colour(0xff0cff00)); }
inline juce::Colour getSliderFillColor() { return colorHelper(juce::Colour(189, 189, 184)); }
inline juce::Colour getOrangeBorderColor() { return colorHelper(juce::Colour(255u, 154u, 1u)); }
//inline juce::Colour getSliderRangeTextColor() { return colorHelper(juce::Colour(0u, 172u, 1u)); } // bypass button, range text, etc.
inline juce::Colour getSliderRangeTextColor() { return colorHelper(juce::Colour(30, 30, 28)); } // bypass button, range text, etc.
inline juce::Colour getSliderBorderColor() { return colorHelper(juce::Colour(71, 74, 68));}
inline juce::Colour getThresholdColor() { return colorHelper(juce::Colour(0xffe0760c)); }
inline juce::Colour getModuleBorderColor() { return colorHelper(juce::Colour(0xff475d9d)); }
inline juce::Colour getTitleColor() { return colorHelper(juce::Colour(71, 74, 68)); }
inline juce::Colour getAnalyzerGridColor() { return colorHelper(juce::Colour(0xff262626)); }
inline juce::Colour getTickColor() { return colorHelper(juce::Colour(0xff313131)); }
inline juce::Colour getMeterLineColor() { return colorHelper(juce::Colour(0xff3c3c3c)); }
inline juce::Colour getScaleTextColor() { return juce::Colours::lightgrey; }

inline juce::Colour getBackgroundColor() { return juce::Colour(231, 230, 229); } 
inline juce::Colour getActiveTabColor() { return juce::Colour(242, 242, 240); }
inline juce::Colour getInactiveTabColor() { return juce::Colour(209, 208, 207); }
inline juce::Colour getIndustrialRed() { return juce::Colour(181, 66, 66); }


}


struct LookAndFeel : juce::LookAndFeel_V4
{
    void drawRotarySlider (juce::Graphics&,
                           int x, int y, int width, int height,
                           float sliderPosProportional,
                           float rotaryStartAngle,
                           float rotaryEndAngle,
                           juce::Slider&) override;
    
    void drawToggleButton (juce::Graphics &g,
                           juce::ToggleButton & toggleButton,
                           bool shouldDrawButtonAsHighlighted,
                           bool shouldDrawButtonAsDown) override;
};
