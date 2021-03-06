/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKDOMNode, NSArray, NSString;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {
    NSArray *_nodes;
    int _type;
}

@property(readonly) BOOL booleanValue;
@property(readonly) BOOL invalidIteratorState;
@property(copy) NSArray * nodes;
@property(readonly) int numberValue;
@property(readonly) int resultType;
@property(readonly) IKDOMNode * singleNodeValue;
@property(readonly) int snapshotLength;
@property(readonly) NSString * stringValue;
@property int type;

- (void).cxx_destruct;
- (BOOL)booleanValue;
- (id)initWithAppContext:(id)arg1 type:(int)arg2 nodes:(id)arg3;
- (BOOL)invalidIteratorState;
- (id)iterateNext;
- (id)nodes;
- (int)numberValue;
- (int)resultType;
- (void)setNodes:(id)arg1;
- (void)setType:(int)arg1;
- (id)singleNodeValue;
- (id)snapshotItem:(int)arg1;
- (int)snapshotLength;
- (id)stringValue;
- (int)type;

@end
