#include "screenManager.h"

const MainMenuScreen& ScreenManager::getMainMenuScreen() const {
    return mMainMenuScreen;
}
void ScreenManager::setMainMenuScreen(MainMenuScreen mainmenu) {
    mMainMenuScreen = mainmenu;
}