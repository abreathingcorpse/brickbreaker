#pragma once
#include "mainmenuScreen.h"

class ScreenManager {
    public:
        MainMenuScreen& getMainMenuScreen();
        void setMainMenuScreen(MainMenuScreen mainmenu);

    private:
        MainMenuScreen mMainMenuScreen;
};