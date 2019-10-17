//
// Created by Josema on 17/10/2019.
//
#pragma once

#include <memory>
#include "Duck.h"

namespace DuckDecorators
{

class JumpDuckDecorator: public Ducks::Duck
{
    JumpDuckDecorator() = delete;
    JumpDuckDecorator(const JumpDuckDecorator&) = delete;
    JumpDuckDecorator(JumpDuckDecorator&&) = delete;
    JumpDuckDecorator& operator=(const JumpDuckDecorator&) = delete;
    JumpDuckDecorator& operator=(JumpDuckDecorator&&) = delete;

public:
    ~JumpDuckDecorator() = default;
    explicit JumpDuckDecorator(std::unique_ptr<Duck> duck);
    void makeCuack() const override;
    void jump() const;
private:
    std::unique_ptr<Duck> m_duck;
};

}
