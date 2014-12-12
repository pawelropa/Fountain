//
//  FTSectionDataSource.h
//  Fountain
//
//  Created by Tobias Kräntzer on 10.12.14.
//  Copyright (c) 2014 Tobias Kräntzer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FTDataSource.h"

typedef id<NSCopying>(^FTSectionDataSourceSectionIdentifier)(id);

@interface FTSectionDataSource : NSObject <FTDataSource>

#pragma mark Life-cycle
- (instancetype)initWithComerator:(NSComparator)comperator
                       identifier:(FTSectionDataSourceSectionIdentifier)identifier;

#pragma mark Relaod
- (void)reloadWithInitialSectionItems:(NSArray *)sectionItems
                    completionHandler:(void(^)(BOOL success, NSError *error))completionHandler;

#pragma mark Updating
- (void)updateWithDeletions:(NSArray *)deletions insertions:(NSArray *)insertions updates:(NSArray *)updates;
- (void)deleteSectionItems:(NSArray *)sectionItems;
- (void)insertSectionItems:(NSArray *)sectionItems;
- (void)updateSectionItems:(NSArray *)sectionItems;

@end
