#include <memory>
#include "SimpleDuck.h"
#include "JumpDuckDecorator.h"

using namespace Ducks;

int main()
{
    DuckDecorators::JumpDuckDecorator jumperDuck(std::make_unique<SimpleDuck>());
    jumperDuck.makeCuack();
    jumperDuck.jump();
    return 0;
}