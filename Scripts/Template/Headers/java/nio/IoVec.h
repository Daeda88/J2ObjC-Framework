//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/IoVec.java
//

#ifndef _JavaNioIoVec_H_
#define _JavaNioIoVec_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Enum.h>

@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNioIoVec_DirectionEnum;

/*!
 @brief Used to implement java.nio read(ByteBuffer[])/write(ByteBuffer[]) operations as POSIX readv(2)
 and writev(2) calls.
 */
@interface JavaNioIoVec : NSObject

#pragma mark Package-Private

- (instancetype)initWithJavaNioByteBufferArray:(IOSObjectArray *)byteBuffers
                                       withInt:(jint)offset
                                       withInt:(jint)bufferCount
                withJavaNioIoVec_DirectionEnum:(JavaNioIoVec_DirectionEnum *)direction;

- (void)didTransferWithInt:(jint)byteCount;

- (jint)doTransferWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (jint)init__ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioIoVec)

FOUNDATION_EXPORT void JavaNioIoVec_initWithJavaNioByteBufferArray_withInt_withInt_withJavaNioIoVec_DirectionEnum_(JavaNioIoVec *self, IOSObjectArray *byteBuffers, jint offset, jint bufferCount, JavaNioIoVec_DirectionEnum *direction);

FOUNDATION_EXPORT JavaNioIoVec *new_JavaNioIoVec_initWithJavaNioByteBufferArray_withInt_withInt_withJavaNioIoVec_DirectionEnum_(IOSObjectArray *byteBuffers, jint offset, jint bufferCount, JavaNioIoVec_DirectionEnum *direction) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioIoVec)

typedef NS_ENUM(NSUInteger, JavaNioIoVec_Direction) {
  JavaNioIoVec_Direction_READV = 0,
  JavaNioIoVec_Direction_WRITEV = 1,
};

@interface JavaNioIoVec_DirectionEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaNioIoVec_DirectionEnum_values();

+ (JavaNioIoVec_DirectionEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaNioIoVec_DirectionEnum *JavaNioIoVec_DirectionEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaNioIoVec_DirectionEnum)

FOUNDATION_EXPORT JavaNioIoVec_DirectionEnum *JavaNioIoVec_DirectionEnum_values_[];

#define JavaNioIoVec_DirectionEnum_READV JavaNioIoVec_DirectionEnum_values_[JavaNioIoVec_Direction_READV]
J2OBJC_ENUM_CONSTANT_GETTER(JavaNioIoVec_DirectionEnum, READV)

#define JavaNioIoVec_DirectionEnum_WRITEV JavaNioIoVec_DirectionEnum_values_[JavaNioIoVec_Direction_WRITEV]
J2OBJC_ENUM_CONSTANT_GETTER(JavaNioIoVec_DirectionEnum, WRITEV)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioIoVec_DirectionEnum)

#endif // _JavaNioIoVec_H_