//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXGCrashReportExtensionHandler : NSObject
{
    NSString *m_lastScene;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)formateLog:(const char *)arg1 withLogInfo:(struct XLoggerInfo_t)arg2;
- (void)setDumpType:(unsigned long long)arg1;
- (void)setLastScene:(id)arg1;
- (void)setBlockTime:(unsigned long long)arg1;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (void)setUsrName;
- (void)addLogInfo:(struct XLoggerInfo_t)arg1 withMessage:(const char *)arg2;
- (void)onMemoryWarning;
- (void)resetLogCycleArray;
- (void)renewHeavyUserType;
- (void)dealloc;
- (id)init;

@end
