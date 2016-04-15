#pragma once
#include <memory>
#include <functional>

namespace SL {
	namespace Remote_Access_Library {
		namespace Utilities {
			class Image;
		}
		namespace INTERNAL {
			struct ScreenImpl;
		}
		namespace Capturing {
			class Screen {
				std::unique_ptr<INTERNAL::ScreenImpl> _ScreenImpl;
				void _run();
			public:
				Screen(std::function<void(std::shared_ptr<Utilities::Image>)> func, int ms_dely=100);
				~Screen();
			};
		}		
	}
};
