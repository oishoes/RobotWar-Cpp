//
//  SimpleRobotCpp.h
//  RobotWar
//
//  Created by Daniel Haaser on 7/6/15.
//  Copyright (c) 2015 MakeGamesWithUs. All rights reserved.
//

#ifndef __RobotWar__SimpleRobotCpp__
#define __RobotWar__SimpleRobotCpp__

#include "RobotCpp.h"

namespace SimpleRobotCppAction {
    
enum SimpleRobotCppAction
{
    DEFAULT,
    TURN_AROUND
};
    
}

class SimpleRobotCpp : public RobotCpp
{
public:
    SimpleRobotCpp();
    
    void run() override;
    void gotHit() override;
    void hitWallWithSideAndAngle(RobotWallHitSide::RobotWallHitSide side, float hitAngle) override;
    
private:
    SimpleRobotCppAction::SimpleRobotCppAction currentAction;
};

#endif /* defined(__RobotWar__SimpleRobotCpp__) */