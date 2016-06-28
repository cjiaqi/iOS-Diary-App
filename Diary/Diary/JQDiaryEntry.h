//
//  JQDiaryEntry.h
//  Diary
//
//  Created by JiaQi Chen on 6/15/16.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ENUM(int16_t, JQDiaryEntryMood) {
    JQDiaryEntryMoodGood = 0,
    JQDiaryEntryMoodAverage = 1,
    JQDiaryEntryMoodBad = 2
};

@interface JQDiaryEntry : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic) int16_t mood;
@property (nonatomic, retain) NSString * location;

@property (nonatomic, readonly) NSString *sectionName;

@end
