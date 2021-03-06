/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBScalablePipeManagerDelegate>, CBXpcConnection, NSHashTable, NSMutableSet, NSSet, NSString;

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate> {
    CBXpcConnection *_connection;
    <CBScalablePipeManagerDelegate> *_delegate;
    NSMutableSet *_identifiers;
    NSHashTable *_pipes;
    int _state;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSSet * identifiers;
@property(readonly) int state;
@property(readonly) Class superclass;

- (void)dealloc;
- (void)handleDataAvailable:(id)arg1;
- (void)handleEndpointAdded:(id)arg1;
- (void)handleEndpointRemoved:(id)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handlePipeConnected:(id)arg1;
- (void)handlePipeDisconnected:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isMsgAllowedWhenOff:(int)arg1;
- (void)orphanPipes;
- (id)pipeForName:(id)arg1 identifier:(id)arg2;
- (void)registerEndpoint:(id)arg1 type:(int)arg2 priority:(int)arg3;
- (oneway void)release;
- (BOOL)sendMsg:(int)arg1 args:(id)arg2;
- (int)state;
- (void)unregisterAllEndpoints;
- (void)unregisterEndpoint:(id)arg1;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end
