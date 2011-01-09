/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageCache, NSLock, <PLImageLoadingQueueDelegate>;



@interface PLImageLoadingQueue : NSObject 
{
    <PLImageLoadingQueueDelegate> *_delegate;
    PLImageCache *_cache;
    NSLock *_lock;
}

@property <PLImageLoadingQueueDelegate> *delegate;


- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forObject:(id)arg3;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forObject:(id)arg3 loadIfNeeded:(BOOL)arg4;
- (void)imageIsAvailable:(id)arg1 forObject:(id)arg2 fromSource:(id)arg3;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forObject:(id)arg3 priority:(NSInteger)arg4;
- (void)resumeLoading;
- (void)pauseLoading;
- (void)cancelLoadFromSource:(id)arg1 forObject:(id)arg2;
- (void)invalidateImageFromSource:(id)arg1 forObject:(id)arg2;
- (id)initWithImageCache:(id)arg1;
- (void)stopLoading;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end