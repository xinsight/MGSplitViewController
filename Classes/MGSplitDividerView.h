//
//  MGSplitDividerView.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright 2010 Instinctive Code.
//

#import <UIKit/UIKit.h>

@class MGSplitViewController;
@interface MGSplitDividerView : UIView {
	MGSplitViewController *splitViewController;
	BOOL allowsDragging;
	BOOL allowsSwiping;
    BOOL allowsTapping;
    
    UISwipeGestureRecognizer *_gesLeft,*_gesRight;
    UITapGestureRecognizer *_gesTap;
}

@property (nonatomic, assign) MGSplitViewController *splitViewController; // weak ref.
@property (nonatomic, assign) BOOL allowsDragging;
@property (nonatomic, assign) BOOL allowsSwiping;
@property (nonatomic, assign) BOOL allowsTapping;

- (void)drawGripThumbInRect:(CGRect)rect;

@end
