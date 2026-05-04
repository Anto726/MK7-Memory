#pragma once

#include "BaseMenuPage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    template <typename T>
    class MenuMulti_SyncBase: public: BaseMenuPage {
    public:
        virtual void onPagePreStep();
        virtual void onPageEnter();
        virtual void onPageComplete();
        virtual bool canFinishFadeout();
        virtual void onPagePreStepCore();
        virtual void onPageCompleteCore();
    };
}