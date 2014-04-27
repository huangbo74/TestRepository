//
//  TSAppDelegate.h
//  TouchSurvey
//
//  Created by Bo Huang on 2014-04-27.
//  Copyright (c) 2014 BOBO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
