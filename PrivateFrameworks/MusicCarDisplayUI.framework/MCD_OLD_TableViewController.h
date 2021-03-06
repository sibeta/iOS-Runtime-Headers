/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MCDCarDisplayServiceProvider>, MCDNowPlayingButton, MPAVController, MPMediaQuery, NSIndexPath;

@interface MCD_OLD_TableViewController : UITableViewController {
    BOOL _alwaysShowNavBar;
    MCDNowPlayingButton *_nowPlayingButton;
    MPAVController *_player;
    NSIndexPath *_previouslySelectedIndexPath;
    MPMediaQuery *_query;
    <MCDCarDisplayServiceProvider> *_serviceProvider;
    BOOL _viewHasAppeared;
}

@property BOOL alwaysShowNavBar;
@property(readonly) MPAVController * player;
@property(readonly) MPMediaQuery * query;
@property(readonly) <MCDCarDisplayServiceProvider> * serviceProvider;
@property BOOL viewHasAppeared;

+ (id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;
+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;

- (void).cxx_destruct;
- (void)_itemChanged:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_presentNowPlayingViewController;
- (void)_updateNowPlayingVisibility;
- (BOOL)alwaysShowNavBar;
- (void)dealloc;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2;
- (BOOL)hasRowsToDisplay;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)player;
- (id)query;
- (id)serviceProvider;
- (void)setAlwaysShowNavBar:(BOOL)arg1;
- (void)setViewHasAppeared:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)viewHasAppeared;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
