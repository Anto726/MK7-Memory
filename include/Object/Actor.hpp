#pragma once
#include "../fwddec.hpp"
#include "ArgumentObj.hpp"

namespace Object
{
	class Actor
	{
	public:
		virtual void *getDTIClassInfo() const; // 0
		virtual void *getDTIClass() const; // 1

		virtual ~Actor(); // 2 (_sub_object), 3 (_deallocating)

		virtual void create(const ArgumentObj *); // 4
		virtual void init() = 0; // 5
		virtual void calc() = 0; // 6

		virtual void render(); // 7
		virtual void renderMainL(); // 8
		virtual void renderMainR(); // 9
		virtual void renderSub(); // 10

		virtual void _0x2C() = 0; // 11

		virtual void accept(ActorVisitor *); // 12
		virtual void callbackInvokeEventID(int); // 13

		virtual void _0x38() = 0; // 14

		virtual void createOuter(const void *); // 15
		virtual void initOuter(); // 16

		virtual void _0x44() = 0; // 17
		
	public:
		Actor *m_parent;
	};
}