//
//  WWObjTools.h
//  WWTools
//
//  Created by WeiWei on 2017/5/26.
//  Copyright © 2017年 WeiWei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^GetLocationSuccessBlock)(NSString *cityName);

typedef NS_ENUM(NSInteger , WWFormatTimeStyle) {
    WWFormatTimeStyleBackSlash = 1,      //反斜线格式 0000/00/00 00:00
    WWFormatTimeStyleCharSeg = 2,        //年月日格式 0000年00月00日 00:00
    WWFormatTimeStyleHyphen = 3          //连接符格式 0000-00-00
};

@interface WWObjTools : NSObject

+ (WWObjTools *)sharedInstance;

/// 检测包含字符串是否包含 emoji
+ (BOOL)stringContainsEmoji:(NSString *)string;

/// 时间戳 -> 字符串
- (NSString *)formatTimeWithTimeStamp:(NSTimeInterval)timeStamp Style:(WWFormatTimeStyle)style;

/// 获取网络图片大小
- (CGSize)getImageSizeWithURL:(id)imageURL;

/// 获得当前显示控制器
+ (UIViewController *)getCurrentVC;

/// 定位
- (void)getCurrentLocationSuccess:(GetLocationSuccessBlock)successBlock;

@end
