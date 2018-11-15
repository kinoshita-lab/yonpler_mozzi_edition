#include <MozziGuts.h>
#include <Sample.h>

#include <EventDelay.h>
#define CONSTTABLE_STORAGE(type) const type PROGMEM


//#include "ab.h"
//#include "rz1ch.h"
//#include "pumpit.h"
//#include "tr909ride.h"
//#include "tr808crap.h"
//#include "tr808rimshot.h"
//#include "life.h"
#include "ho.h"

#define CONTROL_RATE 64
Sample <sample_NUM_CELLS, AUDIO_RATE> aSample(sample_DATA);


// constants
static const int BeatInputPin_2 = 0; // Pin 2 for interrupt 0
static const int MaxNumberOfSequence = 8;
int numberOfSequence = 8;
static const int SequencerInputPins[MaxNumberOfSequence] =
{
    3, 4, 5, 6, 7, 8, 10, 11
};

// vars
uint8_t currentStep = 0;
uint32_t currentSampleIndex = 0;
volatile bool samplePlaybackFinished = false;

void beat()
{
    if (HIGH == digitalRead(SequencerInputPins[currentStep]))  {
        currentSampleIndex = 0;
        samplePlaybackFinished = false;
        aSample.start();
    } 
  
    currentStep++;

    numberOfSequence = map(mozziAnalogRead(0), 0, 1023, 1, 8);
    if (numberOfSequence <= currentStep) {
        currentStep = 0;
    } 
}

void setup() {
    for (auto i = 0; i < MaxNumberOfSequence; ++i) {
        pinMode(SequencerInputPins[i], INPUT_PULLUP);
    }

    // configure beat interrpt
    attachInterrupt(BeatInputPin_2, beat, RISING);
  
    startMozzi(CONTROL_RATE);
    aSample.setFreq((float) 8192 / (float) sample_NUM_CELLS); // play at the speed it was recorded
    aSample.start();

}

void updateControl(){
    return ;
}

int updateAudio(){
    return (int) aSample.next();
}

void loop() {
    audioHook();
}
