//
//  BNRMapPoint.h
//  Whereami
//
//  Created by Jesus Morales on 5/13/13.
//  Copyright (c) 2013 Jesus Morales. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface BNRMapPoint : NSObject <MKAnnotation>
{
}
//A new designated initializer for instances for instances of BNRMapPoint
-(id)initWithCoordinate:(CLLocationCoordinate2D)c title:(NSString *)t;

//This is a required property from MKAnnotation
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

//This is an optional property from MKAnnotation
@property (nonatomic, copy) NSString *title;

@end
