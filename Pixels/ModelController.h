//
//  ModelController.h
//  Pixels
//
//  Created by Joshua Pekera on 6/28/14.
//  Copyright (c) 2014 Joshua Pekera. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

