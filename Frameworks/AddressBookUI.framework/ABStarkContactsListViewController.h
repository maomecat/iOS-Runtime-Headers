/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStarkContactsListViewControllerDelegate>, ABMembersDataSource, ABModel, ABStarkNoContentBannerView, AVExternalDevice, NSString;

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate> {
    ABMembersDataSource *_dataSource;
    AVExternalDevice *_externalDevice;
    ABModel *_model;
    ABStarkNoContentBannerView *_overlayView;
    <ABStarkContactsListViewControllerDelegate> *_peoplePickerDelegate;
    bool_limitedUI;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) AVExternalDevice * externalDevice;
@property(readonly) unsigned long long hash;
@property bool limitedUI;
@property(retain) ABStarkNoContentBannerView * overlayView;
@property <ABStarkContactsListViewControllerDelegate> * peoplePickerDelegate;
@property(readonly) Class superclass;

- (bool)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(bool)arg5;
- (bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)dealloc;
- (id)externalDevice;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (bool)limitedUI;
- (void)limitedUINotification:(id)arg1;
- (id)overlayView;
- (id)peoplePickerDelegate;
- (void)postMessageOverlayIfNecessary;
- (void)setExternalDevice:(id)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end