/*
 * This project constitutes a work of the United States Government and is
 * not subject to domestic copyright protection under 17 USC § 105.
 * 
 * However, because the project utilizes code licensed from contributors
 * and other third parties, it therefore is licensed under the MIT
 * License.  http://opensource.org/licenses/mit-license.php.  Under that
 * license, permission is granted free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the conditions that any appropriate copyright notices and this
 * permission notice are included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

//
//  WHFeedCollection.h
//  WhiteHouseApp
//
//

#import <Foundation/Foundation.h>

#import "WHFeed.h"

/**
 * Represents a collection of feeds by URL.
 *
 * Classes that wish to use feeds should retrieve a feed controller using the shared
 * instance's feedControllerForURL: method, which will create a new feed controller
 * if one does not already exist for the given URL.
 */
@interface WHFeedCollection : NSObject

/**
 * Retrieve a feed controller for the given URL. Create the feed controller if it
 * does not already exist.
 *
 * The caller is responsible for setting the returned feed's properties, registering 
 * for notifications, etc.
 */
- (WHFeed *)feedForURL:(NSURL *)feedURL;

/**
 * Returns all of the feeds in the collection, in no particular order.
 */
- (NSArray *)allFeeds;

/**
 * A shared instance for convenience.
 */
+ (WHFeedCollection *)sharedFeedCollection;

@end
