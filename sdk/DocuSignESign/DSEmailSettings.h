#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSBccEmailAddress.h"


@protocol DSEmailSettings
@end

@interface DSEmailSettings : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* replyEmailAddressOverride;
/*  [optional]
 */
@property(nonatomic) NSString* replyEmailNameOverride;
/*  [optional]
 */
@property(nonatomic) NSArray<DSBccEmailAddress>* bccEmailAddresses;

@end