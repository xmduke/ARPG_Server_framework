#pragma once

enum EventTypes
{
	EVENT_UNK = 0,
	
	EVENT_CREATURE_UPDATE,
	EVENT_GAMEOBJECT_REMOVE,
	EVENT_CREATURE_REMOVE_CORPSE,
	EVENT_CREATURE_RESPAWN,
	EVENT_CREATURE_SAFE_DELETE,

	EVENT_CAST_NORMAL_SKILL,

	EVENT_COUNT
};