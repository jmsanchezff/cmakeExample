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
    explicit JumpDuckDecorator(std::unique_ptr<Ducks::Duck> duck);
    ~JumpDuckDecorator() = default;
    void makeCuack() const override;
    void jump() const;
private:
    std::unique_ptr<Ducks::Duck> m_duck;
};

}
