#pragma once

#include "Tab.h"

class Display : public Tab {
public:
    virtual void SaveSettings();

private:
    virtual DLGPROC Command(unsigned short nCode, unsigned short ctrlId);
    virtual DLGPROC Notification(NMHDR *nHdr);

    virtual void Initialize();
    virtual void LoadSettings();

    void OnPositionChanged();
    void OnCustomCheckChanged();
    void OnAnimationChanged();

private:
    const int MIN_EDGE = -65535;
    const int MAX_EDGE = 65535;
    const int MIN_MS = USER_TIMER_MINIMUM;
    const int MAX_MS = 60000;
};