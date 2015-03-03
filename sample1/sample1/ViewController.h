//
//  ViewController.h
//  sample1
//
//  Created by KwonKyounghwan on 2015. 3. 3..
//  Copyright (c) 2015년 mobilehunter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)buttonTouch:(id)sender;
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UITextField *textField;


@end

