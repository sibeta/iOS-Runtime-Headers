/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class NSString;

@interface RMSBeginPairingMessage : PBCodable <NSCopying> {
    NSString *_appName;
    NSString *_deviceModel;
    NSString *_deviceName;
    NSString *_passcode;
}

@property(retain) NSString * appName;
@property(retain) NSString * deviceModel;
@property(retain) NSString * deviceName;
@property(readonly) BOOL hasAppName;
@property(readonly) BOOL hasDeviceModel;
@property(readonly) BOOL hasDeviceName;
@property(readonly) BOOL hasPasscode;
@property(retain) NSString * passcode;

- (void).cxx_destruct;
- (id)appName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceModel;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (BOOL)hasAppName;
- (BOOL)hasDeviceModel;
- (BOOL)hasDeviceName;
- (BOOL)hasPasscode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passcode;
- (BOOL)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
