//
// Created by Alexander Winter on 2022-02-13.
//

#ifndef GAMETEMPLATE_GAMEASSETS_H
#define GAMETEMPLATE_GAMEASSETS_H

#include "WIZ/asset/MusicAsset.h"
#include "WIZ/asset/SoundAsset.h"
#include "WIZ/asset/FontAsset.h"
#include "WIZ/asset/TextureAsset.h"
#include "ShaderAsset.h"
#include "TextAsset.h"

#ifndef ASSET
#define ASSET(TYPE, NAME, CONSTRUCTOR) extern const TYPE NAME;
#endif

namespace GameAssets {
	extern std::vector<const wiz::AssetBase*> ALL;

	ASSET(wiz::MusicAsset, GREENLIFE, ("music/greenlife.ogg"))
	ASSET(wiz::SoundAsset, COLLISION, ("sfx/collision.ogg"))
	ASSET(wiz::SoundAsset, INTERACT, ("sfx/interact.ogg"))
	ASSET(wiz::SoundAsset, NOINTERACT, ("sfx/nointeract.ogg"))

	ASSET(wiz::FontAsset, SANS_TTF, ("font/sans.ttf"))
	ASSET(wiz::FontAsset, VT323_TTF, ("font/VT323-Regular.ttf"))

	ASSET(wiz::TextureAsset, PLAYER, ("gfx/player.png"))
	ASSET(wiz::TextureAsset, BACKGROUND, ("gfx/background.jpg"))
	ASSET(wiz::TextureAsset, WHITE_PIXEL, ("gfx/white_pixel.png"))
	ASSET(wiz::TextureAsset, LOGO, ("gfx/logo.png"))

	// Eyes
	ASSET(wiz::TextureAsset, SPOOKY_EYES, ("gfx/spooky_face.png"))
    ASSET(wiz::TextureAsset, PACIFIC_EYES, ("gfx/pacific_eyes.png"))

	ASSET(wiz::TextureAsset, HEART, ("gfx/heart.png"))
    ASSET(wiz::TextureAsset, ITEM_TEDDY, ("gfx/teddy_bear.png"))

    ASSET(wiz::TextureAsset, DIALOG_BOX, ("gfx/dialog_box.png"))

	ASSET(ShaderAsset, SPOOKY_SHADER, ("shaders/spooky.vs", "shaders/spooky.fs"))
	ASSET(ShaderAsset, EYES_SHADER, ("shaders/eyes.vs", "shaders/eyes.fs"))

	ASSET(TextAsset, CONTROLLER_DB, ("gamecontrollerdb.txt"))

    // Terrain
	ASSET(wiz::TextureAsset, GRASS_TERRAIN, ("gfx/terrain/grass.png"))
	ASSET(wiz::TextureAsset, WATER_TERRAIN, ("gfx/terrain/water.png"))
	ASSET(wiz::TextureAsset, SAND_TERRAIN, ("gfx/terrain/sand.png"))

    // Hiding Spots
    ASSET(wiz::TextureAsset, HIDING_SPOT, ("gfx/bush.png"))

	// Tree
    ASSET(wiz::TextureAsset, ALIVE_TREE, ("gfx/tree/alive.png"))
	ASSET(wiz::TextureAsset, DEAD_TREE, ("gfx/tree/dead.png"))
	ASSET(wiz::TextureAsset, THICK_DEAD_TREE, ("gfx/tree/thick_dead.png"))

    // Monsters
    ASSET(wiz::TextureAsset, BAT, ("gfx/bat2.png"))
    ASSET(wiz::TextureAsset, GROUND_HOG, ("gfx/marmotte.png"))
    ASSET(wiz::TextureAsset, WRAITH, ("gfx/wraith.png"))

    // Misc
    ASSET(wiz::TextureAsset, INVISIBLE, ("gfx/invisible.png"))

    // Player
	ASSET(wiz::TextureAsset, PLAYER_BACK, ("gfx/player/back.png"))
	ASSET(wiz::TextureAsset, PLAYER_FRONT, ("gfx/player/front.png"))
	ASSET(wiz::TextureAsset, PLAYER_LEFT, ("gfx/player/left.png"))
	ASSET(wiz::TextureAsset, PLAYER_RIGHT, ("gfx/player/right.png"))

	// Teddy kid
	ASSET(wiz::TextureAsset, TEDDY_KID_BACK, ("gfx/npcs/teddy_kid/back.png"))
	ASSET(wiz::TextureAsset, TEDDY_KID_FRONT, ("gfx/npcs/teddy_kid/front.png"))
	ASSET(wiz::TextureAsset, TEDDY_KID_LEFT, ("gfx/npcs/teddy_kid/left.png"))
	ASSET(wiz::TextureAsset, TEDDY_KID_RIGHT, ("gfx/npcs/teddy_kid/right.png"))

    // EndGoal
    ASSET(wiz::TextureAsset, END_GOAL, ("gfx/end_goal.png"))
}


#endif //GAMETEMPLATE_GAMEASSETS_H
