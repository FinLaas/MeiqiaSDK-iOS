//
//  MQDefinition.h
//  MeiQiaSDK
//
//  Created by dingnan on 15/10/27.
//  Copyright © 2015年 MeiQia Inc. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 *  美洽客服系统当前有新消息，开发者可实现该协议方法，通过此方法显示小红点未读标识
 */
#define MQ_RECEIVED_NEW_MESSAGES_NOTIFICATION @"MQ_RECEIVED_NEW_MESSAGES_NOTIFICATION"

/**
 *  美洽的错误码
 */
static NSString * const MQRequesetErrorDomain = @"com.meiqia.error.resquest.error";

/**
 美洽Error的code对应码
 */
typedef enum : NSInteger {
    MQErrorCodeParameterUnKown              = -2000,    //未知错误
    MQErrorCodeParameterError               = -2001,    //参数错误
    MQErrorCodeResultNoCurrentClient        = -2003,    //当前没有顾客，请新建一个顾客后再上线
    MQErrorCodeResultNoExistedClient        = -2004,    //美洽服务端没有找到对应的client
    MQErrorCodePlistConfigurationError      = -2005     //开发者App的info.plist没有增加NSExceptionDomains，请参考https://github.com/Meiqia/Meiqia-SDK-iOS-Demo#info.plist设置
} MQErrorCode;

/**
 顾客上线的结果枚举类型
 */
typedef enum : NSUInteger {
    MQClientOnlineResultSuccess = 0,        //上线成功
    MQClientOnlineResultParameterError,     //上线参数错误
    MQClientOnlineResultNotScheduledAgent   //没有可接待的客服
} MQClientOnlineResult;
