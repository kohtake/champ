#ifndef _IK_LEG_INSTNACE_H_
#define _IK_LEG_INSTNACE_H_

#include<quadruped_base.h>
#include<Geometry.h>

class IKLegInstance
{
    QuadrupedLeg *leg_;

    float joints_[3];

    float ik_alpha_;
    float ik_beta_;
    float ik_gamma_;

    public:
        IKLegInstance(QuadrupedLeg *leg);
        
        void solve(Transformation &foot_position, float &hip_joint, float &upper_leg_joint, float &lower_leg_joint);
        float *joints();
};

#endif