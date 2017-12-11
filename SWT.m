//
//  SWT.m
//  frameWORKD
//
//  Created by user on 2017/12/11.
//  Copyright © 2017年 iwall. All rights reserved.
//

#import "SWT.h"

@implementation SWT

+ (void)outPutInfo
{
    printf("\nabc\n");
    
    
//    NSBundle *bundle = [NSBundle bundleWithURL:[[NSBundle mainBundle] URLForResource:@"IWall" withExtension:@"bundle"]];
    UIImage *iv1 = [UIImage imageNamed:@"capital_on"];
    UIImage *iv2 = [UIImage imageNamed:@"IWall.bundle/capital_on"];

    NSLog(@"image is %@",iv1);
    
    NSLog(@"image 2 is %@",iv2);
    
    NSLog(@"image data is %@",UIImagePNGRepresentation(iv1));

}

@end
