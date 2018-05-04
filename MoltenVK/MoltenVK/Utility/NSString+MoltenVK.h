/*
 * NSString+MoltenVK.h
 *
 * Copyright (c) 2014-2018 The Brenwill Workshop Ltd. (http://www.brenwill.com)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/* This file contains convenient functions for accessing Metal components during execution. */

#pragma once

#include "MVKCommonEnvironment.h"
#import <Foundation/Foundation.h>


#pragma mark -
#pragma mark NSMutableString extension

/** Extensions to NSMutableString to support MoltenVK. */
@interface NSMutableString (MoltenVK)

/** Appends the string and a new line. */
-(void) appendLineMVK:(NSString*) aString;

/** Appends an empty new line. */
-(void) appendLineMVK;

@end
