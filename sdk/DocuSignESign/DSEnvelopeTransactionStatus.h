#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSErrorDetails.h"


@protocol DSEnvelopeTransactionStatus
@end

@interface DSEnvelopeTransactionStatus : DSObject

/* Used to identify an envelope. The id is a sender-generated value and is valid in the DocuSign system for 7 days. It is recommended that a transaction ID is used for offline signing to ensure that an envelope is not sent multiple times. The `transactionId` property can be used determine an envelope's status (i.e. was it created or not) in cases where the internet connection was lost before the envelope status was returned. [optional]
 */
@property(nonatomic) NSString* transactionId;
/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) DSErrorDetails* errorDetails;

@end
