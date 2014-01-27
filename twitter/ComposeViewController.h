//
//  ComposeViewController.h
//  twitter
//
//  Created by Thanawat Kaewka on 1/26/14.
//  Copyright (c) 2014 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ComposeViewController : UIViewController<UITextViewDelegate>

@property (nonatomic, strong) NSString *replyTo;

@end
