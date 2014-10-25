//
//  LSConversationDetailViewController.h
//  Pods
//
//  Created by Kevin Coleman on 10/2/14.
//
//

#import <UIKit/UIKit.h>
#import <LayerKit/LayerKit.h>
#import "LYRUIParticipant.h"
#import "LSApplicationController.h"
#import <CoreLocation/CoreLocation.h>

@class LSConversationDetailViewController;

@protocol LSConversationDetailViewControllerDelegate <NSObject>

- (id<LYRUIParticipant>)conversationDetailViewController:(LSConversationDetailViewController *)conversationDetailViewController participantForIdentifier:(NSString *)participantIdentifier;

- (void)conversationDetailViewController:(LSConversationDetailViewController *)conversationDetailViewController didShareLocation:(CLLocation *)location;

@end

@interface LSConversationDetailViewController : UITableViewController

+(instancetype)conversationDetailViewControllerLayerClient:(LYRClient *)layerClient conversation:(LYRConversation *)conversation;

@property (nonatomic) id<LSConversationDetailViewControllerDelegate>detailDelegate;
@property (nonatomic) LSApplicationController *applicationController;

@end
