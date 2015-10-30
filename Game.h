/*=============================================================================

	Library: Silver

	Copyright (c) Azriel Hoh

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

=============================================================================*/

#ifndef __SL_AX_GAME__GAME_H
#define __SL_AX_GAME__GAME_H

#include <set>
#include <memory>

#include <azriel/sl_ax_game_object/Object.h>

namespace sl {
namespace ax {
namespace game {

struct ObjectZComparator {
	bool operator() (std::shared_ptr<object::Object> o1, std::shared_ptr<object::Object> o2) const;
};

/**
 * An game instance representing a match / stage / play through.
 */
class Game {
private:
	std::set<std::shared_ptr<object::Object>, ObjectZComparator> objects;
public:
	Game();
	Game(const Game& other);
	Game(Game&& other);
	Game& operator=(const Game& other);
	Game& operator=(Game&& other);
	virtual ~Game();
	std::set<std::shared_ptr<object::Object>, ObjectZComparator> getObjects() const;
};

} /* namespace game */
} /* namespace ax */
} /* namespace sl */

#endif /* __SL_AX_GAME__GAME_H */
