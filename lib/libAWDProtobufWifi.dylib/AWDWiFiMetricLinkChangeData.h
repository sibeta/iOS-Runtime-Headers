/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricLinkChangeData : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int isInVol : 1; 
        unsigned int isLinkUp : 1; 
    unsigned int _channel;
    } _has;
    BOOL _isInVol;
    BOOL _isLinkUp;
    unsigned int _reason;
    } _rssiHistorys;
    unsigned int _subreason;
    unsigned long long _timestamp;
}

@property unsigned int channel;
@property BOOL hasChannel;
@property BOOL hasIsInVol;
@property BOOL hasIsLinkUp;
@property BOOL hasReason;
@property BOOL hasSubreason;
@property BOOL hasTimestamp;
@property BOOL isInVol;
@property BOOL isLinkUp;
@property unsigned int reason;
@property(readonly) int* rssiHistorys;
@property(readonly) unsigned int rssiHistorysCount;
@property unsigned int subreason;
@property unsigned long long timestamp;

- (void)addRssiHistory:(int)arg1;
- (unsigned int)channel;
- (void)clearRssiHistorys;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasChannel;
- (BOOL)hasIsInVol;
- (BOOL)hasIsLinkUp;
- (BOOL)hasReason;
- (BOOL)hasSubreason;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInVol;
- (BOOL)isLinkUp;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)reason;
- (int)rssiHistoryAtIndex:(unsigned int)arg1;
- (int*)rssiHistorys;
- (unsigned int)rssiHistorysCount;
- (void)setChannel:(unsigned int)arg1;
- (void)setHasChannel:(BOOL)arg1;
- (void)setHasIsInVol:(BOOL)arg1;
- (void)setHasIsLinkUp:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsInVol:(BOOL)arg1;
- (void)setIsLinkUp:(BOOL)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned int)arg2;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end