#pragma once
#include "mainmenuScreen.h"

class ScreenManager {
    public:
        const MainMenuScreen& getMainMenuScreen() const;
        void setMainMenuScreen(MainMenuScreen mainmenu);

    private:
        MainMenuScreen mMainMenuScreen;
};