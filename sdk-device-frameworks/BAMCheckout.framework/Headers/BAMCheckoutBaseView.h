//
//  BAMCheckoutBaseView.h
//
//  Copyright © 2016 Jumio Corporation All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BAMCheckoutViewController.h"

@interface BAMCheckoutBaseView : UIView <BAMCheckoutAppearance>

@property (nonatomic, strong) NSNumber *disableBlur UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *foregroundColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) NSString *customLightFontName UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) NSString *customRegularFontName UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) NSString *customMediumFontName UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) NSString *customBoldFontName UI_APPEARANCE_SELECTOR;

@end
