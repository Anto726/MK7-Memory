#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    struct EKeyID
		{
			u32
				KEY_A 					        : 1, // 0x1
				KEY_B 				        	: 1, // 0x2
			 	KEY_0x04 			        	: 1, // 0x4
			    KEY_X 				        	: 1, // 0x8
			    KEY_Y 		                	: 1, // 0x10
			    KEY_0x20 				    	: 1, // 0x20
			    _0x40 				        	: 1, // 0x40
			    KEY_0x80 				    	: 1, // 0x80
			    _0x100 				        	: 1, // 0x100
			    _0x200 			        		: 1, // 0x200
			    _0x400 				       		: 1, // 0x400
			    KEY_START 			            : 1, // 0x800
			    KEY_SELECT 			        	: 1, // 0x1000
			    KEY_L 					        : 1, // 0x2000
			    KEY_R 						    : 1, // 0x4000
			    _0x8000 						: 1, // 0x8000
			    KEY_DPAD_UP 					: 1, // 0x10000
			    KEY_DPAD_DOWN 					: 1, // 0x20000
			    KEY_DPAD_LEFT 					: 1, // 0x40000
			    KEY_DPAD_RIGHT 					: 1, // 0x80000
			    KEY_CPAD_UP 					: 1, // 0x100000
			    KEY_CPAD_DOWN 			    	: 1, // 0x200000
			    KEY_CPAD_LEFT 					: 1, // 0x400000
			    KEY_CPAD_RIGHT 					: 1, // 0x800000
			    _0x1000000 				    	: 1, // 0x1000000
			    _0x2000000 				    	: 1, // 0x2000000
			    _0x4000000 				    	: 1, // 0x4000000
			    _0x8000000 				    	: 1, // 0x8000000
			    _0x10000000 			    	: 1, // 0x10000000
			    _0x20000000 			    	: 1, // 0x20000000
			    _0x40000000 			    	: 1, // 0x40000000
			    _0x80000000 			    	: 1; // 0x80000000
		};
		static_assert(sizeof(EKeyID) == 0x4);
}