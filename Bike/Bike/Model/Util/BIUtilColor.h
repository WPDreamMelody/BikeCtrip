//
//  BIUtilColor.h
//  Bike
//
//  Created by Yuki on 4/11/15.
//  Copyright (c) 2015 kyu. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kCTHColorBackGround          CTColorHex(0xefefef)        // VC常用背景色 (239,239,239)
#define kCTHColorTableLine           CTColorHex(0xdddddd)        // table分隔线常用颜色 (200,200,200)
#define kCTHColorBlue                CTColorHex(0x099fde)        // 常用蓝色，表示选中状态、可点击、醒目等 9,159,222)
#define kCTHLineColor                CTColorHex(0xdddddd)       //统一分割线颜色
#define kCTHColorBackBlue            CTColorHex(0x6bc5eb)        // 常用于显示背景框框的蓝色
#define kCTHColorOrange              CTColorHex(0xff9914)        // 常用于显示价格的橙色 (255,153,19)
#define kCTHColoraBackOrange         CTColorHex(0xffc272)        // 常用于显示背景框框的橙色
#define kCTHColorRed                 CTColorHex(0xff4444)        // 常用红色，用于团购字体等
#define kCTHColorBackRed             CTColorHex(0xff8f8f)        // 常用于显示背景框框的红色
#define kCTHColorBlack               CTColorHexA(0x000000,0.8)   // 常用于标题的黑色
#define kCTHColorGray                CTColorHexA(0x000000,0.6)   // 常用于介绍性文字的灰色
#define kCTHColorLightGray           CTColorHexA(0x000000,0.4)   // 常用于介绍性文字的浅灰色
#define kCTHColorC8Gray              CTColorHex(0xc8c8c8)        // 用于订单详情加急按钮边框
#define kCTHRoomQuantityColor        CTColorHex(0xfc2125)        //剩余间数颜色
#define kCTHColorLightBlue           CTColorHex(0x52bce8)   //浅蓝色
#define kCTHColorBackGray            CTColorHex(0xf5f5f5)   // 常用于灰色背景
#define kCTHColorBackGroundBlue      CTColorHex(0xE6F0F7)   //背景浅蓝色
#define kCTHBtnNormalYellowColor          CTColorHex(0xff9a14)   //(黄色)按钮默认状态颜色
#define kCTHBtnHighLightYellowColor      CTColorHex(0xb26b0e) //(黄色)按钮高亮颜色
#define kCTHBtnNormalBlueColor             CTColorHex(0x52bce8)   //(蓝色)按钮默认状态颜色
#define kCTHBtnHighLightBlueColor         CTColorHex(0x3983a2)    //(蓝色)按钮高亮颜色
#define kCTHBtnNormalWhiteColor           CTColorHex(0xffffff)      //(白色)按钮默认状态颜色
#define kCTHBtnHighLightWhiteColor       CTColorHex(0xdddddd) //(白色)按钮高亮颜色
#define kCTHBtnDisableColor                   CTColorHex(0xc7c7c7)   //按钮不可用状态颜色
#define kCTHColorCouponRed                     CTColorHex(0xf8001d)  //红色，用于优惠券提示
#define kCTHBtnCornerSize                       4.0                               //按钮圆角度大小

@interface BIUtilColor : NSObject

/*******
 将十六进制的颜色数据准化成UIcolor 的方法
 @param hexColor 十六进制的颜色值 如:0xffffff 0Xffffff #FFFFFF
 */
+ (UIColor *)getColor:(NSString *)hexColor;

/*******
 将十六进制的颜色数据准化成UIcolor 的方法 主要是添加了透明度
 @param hexColor 十六进制的颜色值 如:0xffffff 0Xffffff #FFFFFF
 @param alpha 透明度
 */
+ (UIColor *)getColor:(NSString *)hexColor alpha:(CGFloat)alpha;

@end
