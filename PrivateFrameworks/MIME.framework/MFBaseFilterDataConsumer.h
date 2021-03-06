/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, NSMutableArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray *_consumers;
    BOOL _serialAppend;
}

@property(readonly) NSArray * consumers;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isSerialAppend) BOOL serialAppend;
@property(readonly) Class superclass;

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;

- (int)appendData:(id)arg1;
- (id)consumers;
- (void)dealloc;
- (void)done;
- (id)initWithConsumer:(id)arg1;
- (id)initWithConsumers:(id)arg1;
- (BOOL)isSerialAppend;
- (void)setSerialAppend:(BOOL)arg1;

@end
