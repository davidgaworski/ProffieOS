#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 64;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NEW_FONT_OVERRIDE
#define ENABLE_SCROLL_MENU
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "SmthJedi", "voiceovers/darthvader/characters/lukeskywalker.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
	{ "SmthGrey", "voiceovers/darthvader/characters/darthvader.wav",
	StylePtr<InOutSparkTip<EASYBLADE(RED, WHITE), 300, 800> >(), "red"},
   { "TeensySF", "voiceovers/darthvader/characters/macewindu.wav",
	StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "purple"},
   { "RgueCmdr", "voiceovers/darthvader/characters/owk.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
   { "TthCrstl", "voiceovers/darthvader/characters/yoda.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "TeensySF", "voiceovers/darthvader/characters/asokatano.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<64, bladePin, Color8::GRB, PowerPINS<bladePowerPin2> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
