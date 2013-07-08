//
//  ViewController.h
//  WebSiteView
//
//  Created by alex ryzhanskiy on 5/9/13.
//  Copyright (c) 2013 alex ryzhanskiy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIWebViewDelegate>

@property IBOutlet UITextField * address;

@property IBOutlet UIWebView * webView;

@property IBOutlet UIActivityIndicatorView * indic;

- (IBAction)pressRefresh:(id)sender;


@end
