//
//  RewardAd.h
//  flutter_baiduad
//
//  Created by 郭维佳 on 2021/11/27.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface RewardAd : NSObject

+ (instancetype)sharedInstance;
- (void)initAd:(NSDictionary *)arguments;
- (void)showAd;

@end

NS_ASSUME_NONNULL_END
