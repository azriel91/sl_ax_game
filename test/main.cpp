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

#include <memory>
#include <string>
#include <google/gtest/gtest.h>
#include <google/gmock/gmock.h>

#include "TestConfig.h"

#ifdef US_BUILD_SHARED_LIBS
	#include <azriel/usbundleloader/BundleLoader.h>
#else
	#include <azriel/cppmicroservices/core/include/usModuleImport.h>
	US_IMPORT_MODULE(CppMicroServices)
	US_IMPORT_MODULE(sl_ax_game)
#endif

#include "../impl/GameActivityRegistration.h"
#include "../impl/GameActivity.h"

#ifdef US_PLATFORM_WINDOWS
	static const std::string LIB_PATH = US_RUNTIME_OUTPUT_DIRECTORY;
#else
	static const std::string LIB_PATH = US_LIBRARY_OUTPUT_DIRECTORY;
#endif

using ::testing::Return;
using ::testing::InSequence;

namespace sl {
namespace ax {
namespace game {

class GameActivityRegistrationTest : public testing::Test {
protected:
	std::shared_ptr<GameActivityRegistration> activityRegistration;

	virtual void SetUp() {
		this->activityRegistration.reset(new GameActivityRegistration());
	}

	virtual void TearDown() {
	}
};

TEST_F(GameActivityRegistrationTest, returnsCorrectIdForGameActivity) {
	EXPECT_EQ("sl::ax::game::GameActivity", this->activityRegistration->getName());
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */

int main(int argc, char **argv) {
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
