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

#include <azriel/sl_math/Point3D.hpp>

#include "Game.h"

namespace sl {
namespace ax {
namespace game {

Game::Game() :
		objects(std::set<std::shared_ptr<object::Object>, ObjectZComparator>(
			[](std::shared_ptr<object::Object> obj1, std::shared_ptr<object::Object> obj2) {
				return object::Object::isBehind(obj1.get(), obj2.get());
			})) {
}

Game::~Game() {
}

std::set<std::shared_ptr<object::Object>, ObjectZComparator> Game::getObjects() const {
	return this->objects;
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */
