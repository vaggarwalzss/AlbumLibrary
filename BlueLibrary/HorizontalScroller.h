//
//  HorizontalScroller.h
//  BlueLibrary
//
//  Created by Vishal Aggarwal on 17/10/14.
//  Copyright (c) 2014 Eli Ganem. All rights reserved.
//

#import <UIKit/UIKit.h>

//This will inform compiler that a protocol with name 'HorizontalScrollerDelegate' is available
@protocol HorizontalScrollerDelegate;

@interface HorizontalScroller : UIView
@property (weak) id<HorizontalScrollerDelegate> delegate;

- (void)reload;
@end

@protocol HorizontalScrollerDelegate <NSObject>
@required
// ask the delegate how many views he wants to present inside the horizontal scroller
- (NSInteger)numberOfViewsForHorizontalScroller:(HorizontalScroller*)scroller;

// ask the delegate to return the view that should appear at <index>
- (UIView*)horizontalScroller:(HorizontalScroller*)scroller viewAtIndex:(int)index;

// inform the delegate what the view at <index> has been clicked
- (void)horizontalScroller:(HorizontalScroller*)scroller clickedViewAtIndex:(int)index;

@optional
// ask the delegate for the index of the initial view to display. this method is optional
// and defaults to 0 if it's not implemented by the delegate
- (NSInteger)initialViewIndexForHorizontalScroller:(HorizontalScroller*)scroller;
@end