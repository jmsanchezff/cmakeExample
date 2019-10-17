//
// Created by Josema on 17/10/2019.
//

#include <iostream>
#include "JumpDuckDecorator.h"

using namespace Ducks;
using namespace DuckDecorators;

void JumpDuckDecorator::jump() const
{
    std::cout << "Boeing!!!";
}
void JumpDuckDecorator::makeCuack() const
{
    m_duck->makeCuack();
}

JumpDuckDecorator::JumpDuckDecorator(std::unique_ptr<Ducks::Duck> duck)
{
    m_duck = std::move(duck);
}


