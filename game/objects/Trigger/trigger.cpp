#include "trigger.hpp"

#include "level_manager.hpp"

Trigger::Trigger(const sf::Vector2f size, const sf::Vector2f position)
    : PhysicalObject(size, position),
      trigger(false)
{
}

Trigger::~Trigger()
{
}

void Trigger::update(const sf::Event &event, const float delta_time)
{
    if (trigger)
    {
        std::cout << "Trigger" << std::endl;
        LevelManager::getInstance()->changeNext();
        trigger = false;
    }
}

void Trigger::changeTrigger()
{
    trigger = !trigger;
}