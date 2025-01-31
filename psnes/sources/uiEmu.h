//
// Created by cpasjuste on 01/06/18.
//

#ifndef PSNES_UIEMU_H
#define PSNES_UIEMU_H

#include <string>

class PSNESUiEmu : public c2dui::UiEmu {

public:

    explicit PSNESUiEmu(c2dui::UiMain *ui);

    int load(const ss_api::Game &game) override;

    void stop();

    void pause() override;

    void resume() override;

    bool onInput(c2d::Input::Player *players) override;

    void onUpdate() override;
};

#endif //PSNES_UIEMU_H
