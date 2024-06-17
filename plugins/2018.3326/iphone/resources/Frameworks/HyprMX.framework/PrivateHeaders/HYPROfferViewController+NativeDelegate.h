//
//  HYPROfferViewController+NativeDelegate.h
//  HyprMX-Framework
//
//  Created by Sean Reinhardt on 3/29/21.
//  Copyright © 2021 HyprMX Mobile LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HYPROfferViewController.h"
#import "HYPRFullscreenNativeDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface HYPROfferViewController(NativeDelegate) <HYPRFullscreenNativeDelegate, HYPRPresentationAdapterResultDelegate>
@end

NS_ASSUME_NONNULL_END
