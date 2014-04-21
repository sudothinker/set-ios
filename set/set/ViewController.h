//
//  ViewController.h
//  set
//
//  Created by Michael Murray on 4/21/14.
//  Copyright (c) 2014 Michael Murray. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>
using namespace cv;


@interface ViewController : UIViewController<CvVideoCameraDelegate>
{
    CvVideoCamera* videoCamera;
}


- (IBAction)actionStart:(id)sender;
@property (nonatomic, retain) CvVideoCamera* videoCamera;


@end