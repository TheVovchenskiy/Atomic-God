#pragma once

#include "game_state.hpp"
#include "level_manager.hpp"

class SingleState: public GameState {
private:
    LevelManager level_manager_;
};