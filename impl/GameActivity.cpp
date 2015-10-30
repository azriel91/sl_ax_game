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

#include <cstdio>

#include <azriel/sl_math/Point3D.hpp>

#include "GameActivity.h"

namespace sl {
namespace ax {
namespace game {

GameActivity::GameActivity(std::shared_ptr<Game> game) : game(game) {
}

GameActivity::~GameActivity() {
}

GameActivity::ExitCode GameActivity::run() {
	printf("Running Game Activity\n");
	printf("=====================\n");

	auto objects = this->game->getObjects();
	for (int i = 0; i < 5; ++i) {
		std::shared_ptr<object::Object> myObject(new object::Object(i));
		objects.insert(myObject);
		Point3D<double> coordinates = myObject->getCoordinates();
		coordinates += i * 10;
		myObject->setCoordinates(coordinates);

		printf("Reading from stdin:\n");
		char str[80];
		scanf("%79s",str);

		printf("size: %lu\n", objects.size());
	}
	return ExitCode::SUCCESS;
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */
