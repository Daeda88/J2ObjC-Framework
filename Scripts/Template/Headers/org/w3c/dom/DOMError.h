//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMError.java
//

#ifndef _OrgW3cDomDOMError_H_
#define _OrgW3cDomDOMError_H_

#include <j2objc/J2ObjC_header.h>

@protocol OrgW3cDomDOMLocator;

#define OrgW3cDomDOMError_SEVERITY_WARNING 1
#define OrgW3cDomDOMError_SEVERITY_ERROR 2
#define OrgW3cDomDOMError_SEVERITY_FATAL_ERROR 3

/*!
 @brief <code>DOMError</code> is an interface that describes an error.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMError < NSObject, JavaObject >

/*!
 @brief The severity of the error, either <code>SEVERITY_WARNING</code>,
 <code>SEVERITY_ERROR</code>, or <code>SEVERITY_FATAL_ERROR</code>.
 */
- (jshort)getSeverity;

/*!
 @brief An implementation specific string describing the error that occurred.
 */
- (NSString *)getMessage;

/*!
 @brief A <code>DOMString</code> indicating which related data is expected in
 <code>relatedData</code>.
 Users should refer to the specification of
 the error in order to find its <code>DOMString</code> type and
 <code>relatedData</code> definitions if any.
 <p ><b>Note:</b>  As an example,
 <code>Document.normalizeDocument()</code> does generate warnings when
 the "split-cdata-sections" parameter is in use. Therefore, the method
 generates a <code>SEVERITY_WARNING</code> with <code>type</code>
 <code>"cdata-sections-splitted"</code> and the first
 <code>CDATASection</code> node in document order resulting from the
 split is returned by the <code>relatedData</code> attribute.
 */
- (NSString *)getType;

/*!
 @brief The related platform dependent exception if any.
 */
- (id)getRelatedException;

/*!
 @brief The related <code>DOMError.type</code> dependent data if any.
 */
- (id)getRelatedData;

/*!
 @brief The location of the error.
 */
- (id<OrgW3cDomDOMLocator>)getLocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMError)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_WARNING, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_ERROR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMError, SEVERITY_FATAL_ERROR, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMError)

#endif // _OrgW3cDomDOMError_H_