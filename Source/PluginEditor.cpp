/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NewProjectAudioProcessorEditor::NewProjectAudioProcessorEditor (NewProjectAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    audioProcessor.updateEditor = [this] { update(); };
    update();
    button.addListener(this);
    view.addListener(this);
    addAndMakeVisible(button);
    addAndMakeVisible(view);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (640, 400);
}

NewProjectAudioProcessorEditor::~NewProjectAudioProcessorEditor()
{
        button.removeListener(this);
        view.removeListener(this);
}

//==============================================================================
void NewProjectAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void NewProjectAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    auto bounds = getLocalBounds();
    auto buttonHeight = bounds.getHeight() / 12;
    button.setBounds(bounds.removeFromTop(buttonHeight));
    view.setBounds(bounds);
}

void NewProjectAudioProcessorEditor::buttonClicked(Button* buttonAddress)
{
        FileChooser fc(CharPointer_UTF8("Cargá la imagen"),
                       File::getSpecialLocation(File::userPicturesDirectory),
                       "*.jpg;*.jpeg;*.png;*.gif", false);
        ImagePreviewComponent preview;
        preview.setSize(200, 200);

        if (fc.browseForFileToOpen(&preview)) {
                File imageFile(fc.getResult());
                String path = imageFile.getFullPathName();

                button.setButtonText(path);
                Image image(ImageCache::getFromFile(imageFile));
                Colour overlay = Colours::white.withAlpha(0.1f);
                view.setImages(false, true, true, image, 1,
                                Colours::transparentWhite, image, 1, overlay,
                                image, 1, overlay);

                audioProcessor.imagePath = path;
        }
}

void NewProjectAudioProcessorEditor::update()
{
        String path = audioProcessor.imagePath;
        DBG("Update \"" + path + '"');
        Image image;

        if (audioProcessor.imagePath == "") {
            CharPointer_UTF8 defaultMessage("Pulsá para cargar una imagen");
            button.setButtonText(defaultMessage);
        } else {
            button.setButtonText(path);
            File imageFile(path);
            if (!imageFile.exists())
                button.setButtonText("NO EXISTE " + path);
            image = ImageCache::getFromFile(imageFile);
        }

        Colour overlay = Colours::white.withAlpha(0.1f);
        view.setImages(false, true, true, image, 1,
                        Colours::transparentWhite, image, 1, overlay,
                        image, 1, overlay);
}
