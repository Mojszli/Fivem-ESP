#include <cstdint.h>

namespace FiveM {
	namespace offset {
		uintptr_t world, replay, viewport;
		uintptr_t boneList, boneMatrix = 0x60;
		uintptr_t PlayerInfo, PlayerHealth = 0x280, PlayerPosition 0x90;
		
	}

}