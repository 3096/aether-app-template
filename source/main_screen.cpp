#include "main_screen.hpp"

#include "app.hpp"

MainScreen::MainScreen() {
    auto* controls = new Aether::Controls();
    controls->addItem(new Aether::ControlItem(Aether::Button::A, "OK"));
    controls->addItem(new Aether::ControlItem(Aether::Button::PLUS, "Exit"));
    onButtonPress(Aether::Button::PLUS, Application::exitApp);
    addElement(controls);
}

MainScreen::~MainScreen() {}
