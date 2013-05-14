//
//  BNRMapPoint.m
//  Whereami
//
//  Created by Jesus Morales on 5/13/13.
//  Copyright (c) 2013 Jesus Morales. All rights reserved.
//

#import "BNRMapPoint.h"

@implementation BNRMapPoint

@synthesize coordinate;
@synthesize title;

-(id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t
{
    self = [super init];
    if (self)
    {
        coordinate = c;
        [self setTitle:t];
    }
    return self;
}

-(id)init
{
    return [self initWithCoordinate:CLLocationCoordinate2DMake(43.07,  -89.32) title:@"Hometown"];
}

@end
