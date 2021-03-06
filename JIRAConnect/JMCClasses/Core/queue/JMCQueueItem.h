//
//  Created by nick on 20/09/11.
//
//  To change this template use File | Settings | File Templates.
//


#import <Foundation/Foundation.h>

#define kTypeCreate @"CREATE"
#define kTypeReply @"REPLY"

@interface JMCQueueItem : NSObject <NSCoding> {
    NSString* _uuid; // globally unique id for this item.
    NSString* _type; // is this a reply, or new feedback ?
    NSArray* _attachments;
    NSString* _originalIssueKey;
}

@property (strong, nonatomic) NSString* uuid;
@property (strong, nonatomic) NSArray* attachments;
@property (strong, nonatomic) NSString* type;
@property (strong, nonatomic) NSString* originalIssueKey;

+(NSString*) generateUniqueId;

-(id)initWith:(NSString*)uuid type:(NSString*)type attachments:(NSArray*)attachments issueKey:(NSString *)originalIssueKey;

+ (JMCQueueItem *)queueItemFromFile:(NSString*)filepath;

-(void)writeToFile:(NSString *)filepath;


@end