//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/InvalidParameterSpecException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException")
#ifdef RESTRICT_JavaSecuritySpecInvalidParameterSpecException
#define INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException 0
#else
#define INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException 1
#endif
#undef RESTRICT_JavaSecuritySpecInvalidParameterSpecException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecInvalidParameterSpecException_) && (INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException || defined(INCLUDE_JavaSecuritySpecInvalidParameterSpecException))
#define JavaSecuritySpecInvalidParameterSpecException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../../java/security/GeneralSecurityException.h"

/*!
 @brief The exception that is thrown when an invalid parameter specification is
 encountered.
 */
@interface JavaSecuritySpecInvalidParameterSpecException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>InvalidParameterSpecException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>InvalidParameterSpecException</code> with the specified
 message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecInvalidParameterSpecException)

FOUNDATION_EXPORT void JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(JavaSecuritySpecInvalidParameterSpecException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *new_JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *create_JavaSecuritySpecInvalidParameterSpecException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecuritySpecInvalidParameterSpecException_init(JavaSecuritySpecInvalidParameterSpecException *self);

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *new_JavaSecuritySpecInvalidParameterSpecException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidParameterSpecException *create_JavaSecuritySpecInvalidParameterSpecException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecInvalidParameterSpecException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecInvalidParameterSpecException")
