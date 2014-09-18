/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SALocation;

@interface SAAnswerSearch : SADomainCommand {
}

@property(retain) SALocation * address;
@property(copy) NSString * attribute;
@property(copy) NSString * miscQuestion;
@property(copy) NSString * placeAttribute;
@property(copy) NSArray * product;
@property(copy) NSString * timeQuestion;
@property(copy) NSString * verbType;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)address;
- (id)attribute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)miscQuestion;
- (id)placeAttribute;
- (id)product;
- (bool)requiresResponse;
- (void)setAddress:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setMiscQuestion:(id)arg1;
- (void)setPlaceAttribute:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)setTimeQuestion:(id)arg1;
- (void)setVerbType:(id)arg1;
- (id)timeQuestion;
- (id)verbType;

@end