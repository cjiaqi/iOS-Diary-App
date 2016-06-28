//
//  JQEntryCell.h
//  Diary
//
//  Created by JiaQi Chen on 6/15/16.
//

#import <UIKit/UIKit.h>

@class JQDiaryEntry;

@interface JQEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(JQDiaryEntry *)entry;

- (void)configureCellForEntry:(JQDiaryEntry *)entry;

@end
