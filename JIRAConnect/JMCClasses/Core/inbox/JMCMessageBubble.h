/**
   Copyright 2011 Atlassian Software

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**/
//
//  Created by nick on 7/05/11.
//
//  To change this template use File | Settings | File Templates.
//


#import <Foundation/Foundation.h>

@class JMCComment;

@interface JMCMessageBubble : UITableViewCell

+ (CGSize)detailLabelSizeForComment:(JMCComment *)comment withWidthConstraint:(CGFloat)widthConstraint;
+ (CGSize)bubbleSizeForComment:(JMCComment *)comment withWidthConstraint:(CGFloat)widthConstraint;
+ (CGSize)cellSizeForComment:(JMCComment *)comment widthConstraint:(CGFloat)widthConstraint;

- (id)initWithReuseIdentifier:(NSString *)cellIdentifierComment;

- (void)setComment:(JMCComment *)comment leftAligned:(BOOL)leftAligned;

@end