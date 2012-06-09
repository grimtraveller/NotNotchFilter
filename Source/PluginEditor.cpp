#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
HangingValleyAudioProcessorEditor::HangingValleyAudioProcessorEditor(HangingValleyAudioProcessor *ownerFilter)
: AudioProcessorEditor (ownerFilter) {
  // This is where our plugin's editor size is set.
  setSize(400, 300);
}

HangingValleyAudioProcessorEditor::~HangingValleyAudioProcessorEditor() {
}

//==============================================================================
void HangingValleyAudioProcessorEditor::paint(Graphics& g) {
  g.fillAll(Colours::white);
  g.setColour(Colours::black);
  g.setFont(15.0f);
  g.drawFittedText("Hello World!",
    0, 0, getWidth(), getHeight(),
    Justification::centred, 1);
}
