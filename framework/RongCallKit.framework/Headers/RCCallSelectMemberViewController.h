//
//  RCCallSelectMemberViewController.h
//  RongVoIPKit
//
//  Created by 岑裕 on 16/3/12.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RongIMLib/RongIMLib.h>
#import <RongCallLib/RongCallLib.h>

/*!
 选择通话成员的ViewController
 */
@interface RCCallSelectMemberViewController : UIViewController

/*!
 会话类型
 */
@property (nonatomic, assign) RCConversationType conversationType;

/*!
 目标会话ID
 */
@property (nonatomic, strong) NSString *targetId;

/*!
 媒体类型
 */
@property (nonatomic, assign) RCCallMediaType mediaType;

/*!
 列表中所有的用户ID列表
 */
@property (nonatomic, strong) NSArray *listingUserIdList;

/*!
 通话中已经存在的用户ID列表
 */
@property (nonatomic, strong) NSArray *existUserIdList;

/*!
 初始化选择通话成员的ViewController
 
 @param conversationType 会话类型
 @param targetId         目标会话ID
 @param mediaType        媒体类型
 @param existUserIdList     通话中已经存在的用户ID列表
 @param successBlock     列表中所有的用户ID列表
 
 @return 选择通话成员的ViewController
 */
- (instancetype)initWithConversationType:(RCConversationType)conversationType
                                targetId:(NSString *)targetId
                               mediaType:(RCCallMediaType)mediaType
                                   exist:(NSArray *)existUserIdList
                                 success:(void (^)(NSArray *addUserIdList))successBlock;

@end