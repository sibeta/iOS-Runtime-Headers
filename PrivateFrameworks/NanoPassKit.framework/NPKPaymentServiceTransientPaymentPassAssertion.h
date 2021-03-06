/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NPKPaymentService, NPKPaymentServiceCard, NSString;

@interface NPKPaymentServiceTransientPaymentPassAssertion : NSObject {
    NPKPaymentServiceCard *_paymentCard;
    NPKPaymentService *_paymentService;
}

@property(retain) NPKPaymentServiceCard * paymentCard;
@property NPKPaymentService * paymentService;
@property(readonly) NSString * uniqueID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPassDescription:(id)arg1 paymentService:(id)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentService:(id)arg2;
- (id)paymentCard;
- (id)paymentService;
- (void)setPaymentCard:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (id)uniqueID;

@end
