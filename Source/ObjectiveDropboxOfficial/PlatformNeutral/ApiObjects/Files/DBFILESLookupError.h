///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLookupError;

#pragma mark - API Object

///
/// The `LookupError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESLookupError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBFILESLookupErrorTag` enum type represents the possible tag states
/// with which the `DBFILESLookupError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESLookupErrorTag) {
  /// (no description).
  DBFILESLookupErrorMalformedPath,

  /// There is nothing at the given path.
  DBFILESLookupErrorNotFound,

  /// We were expecting a file, but the given path refers to something that
  /// isn't a file.
  DBFILESLookupErrorNotFile,

  /// We were expecting a folder, but the given path refers to something that
  /// isn't a folder.
  DBFILESLookupErrorNotFolder,

  /// The file cannot be transferred because the content is restricted.  For
  /// example, sometimes there are legal restrictions due to copyright claims.
  DBFILESLookupErrorRestrictedContent,

  /// (no description).
  DBFILESLookupErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESLookupErrorTag tag;

/// (no description). @note Ensure the `isMalformedPath` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) NSString * _Nullable malformedPath;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "malformed_path".
///
/// @param malformedPath (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMalformedPath:(NSString * _Nullable)malformedPath;

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: There is nothing at the given
/// path.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "not_file".
///
/// Description of the "not_file" tag state: We were expecting a file, but the
/// given path refers to something that isn't a file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotFile;

///
/// Initializes union class with tag state of "not_folder".
///
/// Description of the "not_folder" tag state: We were expecting a folder, but
/// the given path refers to something that isn't a folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotFolder;

///
/// Initializes union class with tag state of "restricted_content".
///
/// Description of the "restricted_content" tag state: The file cannot be
/// transferred because the content is restricted.  For example, sometimes there
/// are legal restrictions due to copyright claims.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRestrictedContent;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "malformed_path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `malformedPath` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "malformed_path".
///
- (BOOL)isMalformedPath;

///
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

///
/// Retrieves whether the union's current tag state has value "not_file".
///
/// @return Whether the union's current tag state has value "not_file".
///
- (BOOL)isNotFile;

///
/// Retrieves whether the union's current tag state has value "not_folder".
///
/// @return Whether the union's current tag state has value "not_folder".
///
- (BOOL)isNotFolder;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_content".
///
/// @return Whether the union's current tag state has value
/// "restricted_content".
///
- (BOOL)isRestrictedContent;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESLookupError` union.
///
@interface DBFILESLookupErrorSerializer : NSObject

///
/// Serializes `DBFILESLookupError` instances.
///
/// @param instance An instance of the `DBFILESLookupError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESLookupError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESLookupError * _Nonnull)instance;

///
/// Deserializes `DBFILESLookupError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESLookupError` API object.
///
/// @return An instantiation of the `DBFILESLookupError` object.
///
+ (DBFILESLookupError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
