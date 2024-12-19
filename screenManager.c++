#include "screenManager.h"

MainMenuScreen& ScreenManager::getMainMenuScreen() {
    return mMainMenuScreen;
}
void ScreenManager::setMainMenuScreen(MainMenuScreen mainmenu) {
    mMainMenuScreen = mainmenu;
}