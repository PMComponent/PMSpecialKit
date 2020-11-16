//
//  Target_Special.h
//  PMSpecialKit
//
//  Created by Luminous on 2020/11/16.
//

#import <Foundation/Foundation.h>
#import"FFSpecialKit.h"


NS_ASSUME_NONNULL_BEGIN

@interface Target_Special : NSObject
- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;

- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;

- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;


@end

NS_ASSUME_NONNULL_END
