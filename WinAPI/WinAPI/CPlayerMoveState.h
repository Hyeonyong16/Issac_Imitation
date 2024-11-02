#pragma once
#include "CState.h"

class CPlayerMoveState :
    public CState
{
private:

public:
    virtual void Enter() override;
    virtual void FinalTick() override;
    virtual void Exit() override;

public:
    CPlayerMoveState();
    ~CPlayerMoveState();
};

