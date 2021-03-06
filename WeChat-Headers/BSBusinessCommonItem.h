//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BusinessActionInfo, BusinessDetailInfo, BusinessExtendInfo, NSString;

@interface BSBusinessCommonItem : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_thumbUrl;
    BusinessDetailInfo *_detailInfo;
    BusinessExtendInfo *_extendInfo;
    BusinessActionInfo *_actionInfo;
}

+ (id)fromServerObj:(id)arg1;
@property(retain, nonatomic) BusinessActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) BusinessExtendInfo *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;

@end

