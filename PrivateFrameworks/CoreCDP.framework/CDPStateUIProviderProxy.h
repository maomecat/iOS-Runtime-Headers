/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal> {
    <CDPStateUIProvider> *_uiProvider;
}

- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 promptForAccountPasswordWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(id /* block */)arg2;
- (id)initWithUIProvider:(id)arg1;

@end
