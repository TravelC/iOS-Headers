//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldSpring : PKPhysicsField
{
}

+ (id)fieldWithSpring:(struct CGPoint)arg1 strength:(float)arg2 minRadius:(float)arg3;
+ (id)fieldWithSpring:(struct CGPoint)arg1 strength:(float)arg2;
@property(nonatomic) float minRadius;
@property(nonatomic) struct CGPoint offset;
@property(nonatomic) BOOL isTangential;
- (id)initWithSpring:(struct CGPoint)arg1 strength:(float)arg2 minRadius:(float)arg3;

@end

