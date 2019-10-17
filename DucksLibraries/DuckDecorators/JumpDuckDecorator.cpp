//
// Created by Josema on 17/10/2019.
//

#include <iostream>
#include "JumpDuckDecorator.h"

DuckDecorators::JumpDuckDecorator::JumpDuckDecorator(std::unique_ptr<Duck> duck)
    : m_duck(std::move(duck))
{
}

void DuckDecorators::JumpDuckDecorator::jump() const
{
    std::cout << "Boeing!!!";
}
void DuckDecorators::JumpDuckDecorator::makeCuack() const
{
    m_duck->makeCuack();
}

