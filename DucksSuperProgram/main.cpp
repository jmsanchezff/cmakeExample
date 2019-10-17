#include <memory>
#include "SimpleDuck.h"
#include "JumpDuckDecorator.h"

int main()
{
    auto duck = std::make_unique<Ducks::SimpleDuck>();
    auto jumperDuck = DuckDecorators::JumpDuckDecorator(duck);
    jumperDuck.makeCuack();
    jumperDuck.jump();
    return 0;
}