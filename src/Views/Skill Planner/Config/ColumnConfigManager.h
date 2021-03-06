/*
 This file is part of Mac Eve Tools.
 
 Mac Eve Tools is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 Mac Eve Tools is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Mac Eve Tools.  If not, see <http://www.gnu.org/licenses/>.
 
 Copyright Matt Tyson, 2009.
 */


#import <Cocoa/Cocoa.h>

#import "PlannerColumn.h"

@interface ColumnConfigManager : NSObject {
	NSArray *columnList;
}

-(void) readConfig;
-(void) writeConfig;
-(void) eraseConfig;
-(void) resetConfig;

-(BOOL) setWidth:(CGFloat)width forColumn:(NSString*)columnId;
-(BOOL) setOrder:(NSInteger)position forColumn:(NSString*)columnId;
-(BOOL) moveColumn:(NSInteger)from toPosition:(NSInteger)to;
-(BOOL) setActive:(BOOL)active forColumn:(NSString *)columnId;

-(NSArray*) columns;

+(ColumnConfigManager*) manager;

@end
