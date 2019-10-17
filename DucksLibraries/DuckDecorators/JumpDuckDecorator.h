//
// Created by Josema on 17/10/2019.
//

#pragma once
namespace DuckDecorators
{

class JumpDuckDecorator: public Duck
{
public:
    JumpDuckDecorator(Duck &&duck);
    void makeCuak() const;
    void jump() const;
private:
    std::unique_ptr<Duck> m_duck;
};

}
