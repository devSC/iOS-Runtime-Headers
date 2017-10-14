/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    BOOL  _acceptInvitation;
    NSURL * _calendarHomeURL;
    CalDAVCalendarServerInviteNotificationItem * _invitation;
    NSURL * _sharedAs;
}

@property (nonatomic) BOOL acceptInvitation;
@property (nonatomic, retain) NSURL *calendarHomeURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CalDAVCalendarServerInviteNotificationItem *invitation;
@property (nonatomic, retain) NSURL *sharedAs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)acceptInvitation;
- (id)calendarHomeURL;
- (id)generateReply;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)invitation;
- (void)setAcceptInvitation:(BOOL)arg1;
- (void)setCalendarHomeURL:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setSharedAs:(id)arg1;
- (id)sharedAs;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
