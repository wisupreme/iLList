//
//  ILLiLListModel.h
//  iLList
//
//  Created by Jake Choi on 3/3/14.
//  Copyright (c) 2014 iLList. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Firebase/Firebase.h>
#import <FirebaseSimpleLogin/FirebaseSimpleLogin.h>

@interface ILLiLListModel : NSObject

@property(weak,nonatomic) NSString* userID;
@property(nonatomic) BOOL flagLogin;

+(instancetype) sharedModel;

// Creating Firebase user on a singleton to check if user is logged in throughout the application

-(void)createUserWithEmail:(NSString*)email password:(NSString*)pass   andCompletionBlock:(void (^)(NSError* error, FAUser* user))block;

-(void) checkAuthStatusWithBlock:(void (^)(NSError *, FAUser *))block;

-(void) logInToFacebookWithAppWithID: (NSString *)appId permissions:(NSString *)email audience:ACFacebookAudienceOnlyMe withCompletionBlock:(void (^)(NSError *, FAUser *))block;

-(void) logout;



@end
