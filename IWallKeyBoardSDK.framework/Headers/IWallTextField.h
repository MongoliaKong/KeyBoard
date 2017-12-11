//
//  IWallTextField.h
//  IWallKeyBoard
//
//  Created by user on 2017/10/18.
//  Copyright © 2017年 iwall. All rights reserved.
//

#import <UIKit/UIKit.h>
@class IWallTextField;

/**
 设置TextField的键盘类型

 - IWallKeyBoardNumberType: 数字键盘
 - IWallKeyBoardLetterType: 字母键盘
 */
typedef NS_ENUM (NSUInteger, IWallKeyBoardType) {
    IWallKeyBoardNumberType,
    IWallKeyBoardLetterType,
}NS_ENUM_AVAILABLE_IOS(8_0);


/**
 设置TextField键盘乱序方式

 - IWallKeyBoardSortNormal: 不乱序
 - IWallKeyBoardSortDisorder: 键盘全部乱序
 - IWallKeyBoardClickDisorder: 键盘点击乱序
 - IWallKeyBoardSortDigitDisorder: 键盘部分乱序 (主要针对数字字母数字键盘，数字乱序但在同一行)
 - IWallKeyBoardSortDigitClickDisorder: 键盘部分乱序 (点击乱序主要针对数字字母数字键盘，数字乱序但在同一行)
 */
typedef NS_ENUM(NSUInteger, IWallKeyBoardSortType){
    IWallKeyBoardSortNormal = 1 << 0,
    IWallKeyBoardSortDisorder = 1 << 1,
    IWallKeyBoardSortClickDisorder = 1 << 2,
    IWallKeyBoardSortDigitDisorder = 1 << 3,
    IWallKeyBoardSortDigitClickDisorder = 1 << 4,
}NS_ENUM_AVAILABLE_IOS(8_0);


/**
 键盘内存中加密方式：默认Base64

 - IWallKeyBoardMemoryEncryModeBASE64: Base64 加密方法
 - IWallKeyBoardMemoryEncryModeAES: AES 加密方法
 - IWallKeyBoardMemoryEncryModeSM4: SM4 加密方法
 */
typedef NS_ENUM(NSUInteger, IWallKeyBoardMemoryEncryMode){
    IWallKeyBoardMemoryEncryModeBASE64,
    IWallKeyBoardMemoryEncryModeAES,
    IWallKeyBoardMemoryEncryModeSM4,
}NS_ENUM_AVAILABLE_IOS(8_0);


/**
 IWallKeyBoardEncryMode 输出数据加密算法选择

 - IWallKeyBoardEncryModeBASE64: Base64 加密方法
 - IWallKeyBoardEncryModeAES: AES 加密
 - IWallKeyBoardEncryModeRSA: RSA 加密
 - IWallKeyBoardEncryModeSM2: SM2 加密
 - IWallKeyBoardEncryModeSM3: SM3 加密
 - IWallKeyBoardEncryModeSM4: SM4 加密
 - IWallKeyBoardEncryModeMD5: MD5 加密
 - IWallKeyBoardEncryModeAESRSA: AES + RSA 加密
 - IWallKeyBoardEncryModeMD5RSA: MD5 + RSA 加密
 - IWallKeyBoardEncryModeMD5AES: MD5 + AES 加密
 - IWallKeyBoardEncryModeSM2SM4: SM2 + SM4 加密
 - IWallKeyBoardEncryModeSM3SM2: SM3 + SM2 加密
 - IWallKeyBoardEncryModeSM3SM4: SM3 + SM4 加密
 - IWallKeyBoardEncryModeMD5AESRSA: MD5 + AES + RSA 加密
 - IWallKeyBoardEncryModeSM2SM3SM4: SM2 + SM3 + SM4 加密
 */
typedef NS_ENUM(NSUInteger, IWallKeyBoardEncryMode){
    IWallKeyBoardEncryModeBASE64,
    IWallKeyBoardEncryModeAES,
    IWallKeyBoardEncryModeRSA,
    IWallKeyBoardEncryModeSM2,
    IWallKeyBoardEncryModeSM3,
    IWallKeyBoardEncryModeSM4,
    IWallKeyBoardEncryModeMD5,
    IWallKeyBoardEncryModeAESRSA,
    IWallKeyBoardEncryModeMD5RSA,
    IWallKeyBoardEncryModeMD5AES,
    IWallKeyBoardEncryModeSM2SM4,
    IWallKeyBoardEncryModeSM3SM2,
    IWallKeyBoardEncryModeSM3SM4,
    IWallKeyBoardEncryModeMD5AESRSA,
    IWallKeyBoardEncryModeSM2SM3SM4
}NS_ENUM_AVAILABLE_IOS(8_0);


/**
 获取输入字符种类

 - IWallKeyBoardCharLowercase: 小写字母
 - IWallKeyBoardCharCapital: 大写字母
 - IWallKeyBoardCharNumber: 数字
 - IWallKeyBoardCharSymbol: 符号
 - IWallKeyBoardCharLowercaseCapital: 小写字母、大写字母
 - IWallKeyBoardCharLowercaseNumber: 小写字母、数字
 - IWallKeyBoardCharLowercaseSymbol: 小写字母、符号
 - IWallKeyBoardCapitalNumber: 大写字母、数字
 - IWallKeyBoardCapitalSymbol: 大写字母、符号
 - IWallKeyBoardNumberSymbol: 数字、符号
 - IWallKeyBoardLowercaseCapitalNumber: 小写字母、大写字母、数字
 - IWallKeyBoardLowercaseCapitalSymbol: 小写字母、大写字母、符号
 - IWallKeyBoardLowercaseNumberSymbol: 小写字母、数字、符号
 - IWallKeyBoardCapitalNumberSymbol: 大写字母、数字、符号
 - IWallKeyBoardLowercaseCapitalNumberSymbol: 小写字母、大写字母、数字、符号
 */
typedef NS_ENUM(NSUInteger, IWallKeyBoardCharType){
    IWallKeyBoardCharLowercase,
    IWallKeyBoardCharCapital,
    IWallKeyBoardCharNumber,
    IWallKeyBoardCharSymbol,
    IWallKeyBoardCharLowercaseCapital,
    IWallKeyBoardCharLowercaseNumber,
    IWallKeyBoardCharLowercaseSymbol,
    IWallKeyBoardCapitalNumber,
    IWallKeyBoardCapitalSymbol,
    IWallKeyBoardNumberSymbol,
    IWallKeyBoardLowercaseCapitalNumber,
    IWallKeyBoardLowercaseCapitalSymbol,
    IWallKeyBoardLowercaseNumberSymbol,
    IWallKeyBoardCapitalNumberSymbol,
    IWallKeyBoardLowercaseCapitalNumberSymbol,
}NS_ENUM_AVAILABLE_IOS(8_0);


/**
 密码强度

 - IWallKeyBoardTextWeak: 密码强度低
 - IWallKeyBoardTextMedium: 密码强度中
 - IWallKeyBoardTextStrong: 密码强度高
 */
typedef NS_ENUM(NSUInteger, IWallKeyBoardTextStrength){
    IWallKeyBoardTextWeak,
    IWallKeyBoardTextMedium,
    IWallKeyBoardTextStrong,
}NS_ENUM_AVAILABLE_IOS(8_0);

@protocol IWallDelegate <NSObject>

@optional
- (void)iwallTextFieldValueChanged:(IWallTextField *)textField;

- (void)iwallTextFieldCallBack;

- (void)iwallTextFieldShouldReturn;

@end

@interface IWallTextField : UITextField

#pragma mark - 属性功能
/**
 设置键盘种类
 默认数字键盘
 */
@property (nonatomic, assign) IWallKeyBoardType iwallKeyBoardType;


/**
 设置键盘排序方式
 默认正常顺序
 */
@property (nonatomic, assign) IWallKeyBoardSortType iwallKeyBoardSortType;


/**
 设置键盘内存中加密方式
 默认是Base64
 如需使用AES, SM4, 则需要配置对称加密密钥
 */
@property (nonatomic, assign) IWallKeyBoardMemoryEncryMode iwallKeyBoardMemoryEncryMode;  //内存中信息加密方式
@property (nonatomic, copy)   NSString *memoryEncryKey;     //内存中信息加密的Key


/**
 设置键盘输出加密方式，
 使用了 对称加密 AES ,SM4 则需设置    encryKey
 使用了 非对称加密 RSA, SM2 则需要设置 encPubKey
 */
@property (nonatomic, assign) IWallKeyBoardEncryMode  iwallKeyBoardEncryMode;   //输出密钥加密方式
@property (nonatomic, copy)   NSString *encryKey;        //对称加密密钥
@property (nonatomic, copy)   NSString *encPubKey;       //非对称加密公钥


/**
 设置允许输入的最大文字长度
 默认最大值
 */
@property (nonatomic, assign) NSUInteger maximumTextLength;


/**
 输入框是否加密显示
 默认不加密
 */
@property (nonatomic, assign) BOOL showEncKey;


/**
 设置键盘输入的正则规则，用来匹配字符框中已经输入字符
 */
@property (nonatomic, copy) NSString *input_R1; //设置正则表达式，供isMatch()函数使用


/**
 设置键盘输入的过滤规则，用来过滤输入的字符
 */
@property (nonatomic, copy) NSString *input_R2;

/**
 数字键盘是否显示点
 默认不显示
 */
@property (nonatomic, assign) BOOL showPoint;

/**
 设置是否允许按键状态
 默认显示按键状态
 */
@property (nonatomic, assign) BOOL enableClickState;

/**
 设置是否允许按键声音
 默认播放按键声音
 */
@property (nonatomic, assign) BOOL enableClickVoice;

/**
 设置是否允许复制粘贴
 */
@property (nonatomic, assign) BOOL enablePerformAction;


/**
 设置点击颜色
 默认灰色
 */
@property (nonatomic, strong) UIColor *textHightLightColor;


/**
 设置点击背景色
 默认无色
 */
@property (nonatomic, strong) UIColor *backgroudHightLightColor;


/**
 输入的字符长度
 */
@property (nonatomic, assign, readonly) NSInteger inputLen;


/**
 输入的字符类型
 */
@property (nonatomic, assign, readonly) IWallKeyBoardCharType *keyBoardCarType;


/**
 设置 return 键的显示字符
 */
@property (nonatomic, copy) NSString *returnStr;


/**
 iwall Key Board 代理
 */
@property (nonatomic, weak) id <IWallDelegate>iwallDelegate;

#pragma mark - 方法
/**
 初始化控件
 */
- (void)initIWallTextField;


/**
 清空输入框内容，清空相应的缓存
 */
- (void)clearText;


/**
 用户判断输入的正则表达是是否匹配

 @return 是否匹配
 */
- (bool)isMatch;


/**
 获取键盘高度

 @return 键盘高度
 */
- (float)keyBoardHeight;

/**
 获取加密后的数据

 @return 返回加密后的数据
 */
- (NSString *)encStr;


/**
 获取解密后的数据
 
 @return 获取解密后的数据
 */
- (NSString *)decStr;


/**
 获取输入字符种类

 @return 字符种类
 */
- (IWallKeyBoardCharType )inputType;


/**
 输入数据的强度

 @return 数据输入的强度
 */
- (IWallKeyBoardTextStrength )inputStrength;


/**
 获取当前版本信息

 @return 返回当前版本信息
 */
- (NSString *)getVersion;




@end
