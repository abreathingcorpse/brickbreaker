#include "game.h"

enum ScreenState {
    MAIN_MENU,
    EXIT_GAME,
    STAGE_SELECTOR,
    MODS_SELECTOR,
    GAME_LOOP,
    GAME_PAUSED,
    GAME_OVER
};

int main() {

    ScreenState screenState = GAME_LOOP;

    switch (screenState) {
        case MAIN_MENU: {
            break;
        }
        case EXIT_GAME: {
            break;
        }
        case STAGE_SELECTOR: {
            break;
        }
        case MODS_SELECTOR: {
            break;
        }
        case GAME_LOOP: {
            Game game;
            game.run();
            break;
        }
        case GAME_PAUSED: {
            break;
        }
        case GAME_OVER: {
            break;
        }
    }

    return 0;
}