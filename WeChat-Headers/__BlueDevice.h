//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface __BlueDevice : NSObject
{
    unsigned int _m_deviceMode;
    NSMutableDictionary *m_channels;
    NSMutableDictionary *m_stopingChannels;
    long long _m_deviceId;
}

@property(nonatomic) long long m_deviceId; // @synthesize m_deviceId=_m_deviceId;
@property(nonatomic) unsigned int m_deviceMode; // @synthesize m_deviceMode=_m_deviceMode;
@property(retain, nonatomic) NSMutableDictionary *m_stopingChannels; // @synthesize m_stopingChannels;
@property(retain, nonatomic) NSMutableDictionary *m_channels; // @synthesize m_channels;
- (void).cxx_destruct;
- (id)getOneChannel;
- (void)dealloc;
- (id)init;

@end
