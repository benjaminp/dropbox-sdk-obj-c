///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESThumbnailSize;

#pragma mark - API Object

///
/// The `ThumbnailSize` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESThumbnailSize : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBFILESThumbnailSizeTag` enum type represents the possible tag states
/// with which the `DBFILESThumbnailSize` union can exist.
typedef NS_ENUM(NSInteger, DBFILESThumbnailSizeTag) {
  /// 32 by 32 px.
  DBFILESThumbnailSizeW32h32,

  /// 64 by 64 px.
  DBFILESThumbnailSizeW64h64,

  /// 128 by 128 px.
  DBFILESThumbnailSizeW128h128,

  /// 640 by 480 px.
  DBFILESThumbnailSizeW640h480,

  /// 1024 by 768
  DBFILESThumbnailSizeW1024h768,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESThumbnailSizeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "w32h32".
///
/// Description of the "w32h32" tag state: 32 by 32 px.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithW32h32;

///
/// Initializes union class with tag state of "w64h64".
///
/// Description of the "w64h64" tag state: 64 by 64 px.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithW64h64;

///
/// Initializes union class with tag state of "w128h128".
///
/// Description of the "w128h128" tag state: 128 by 128 px.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithW128h128;

///
/// Initializes union class with tag state of "w640h480".
///
/// Description of the "w640h480" tag state: 640 by 480 px.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithW640h480;

///
/// Initializes union class with tag state of "w1024h768".
///
/// Description of the "w1024h768" tag state: 1024 by 768
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithW1024h768;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "w32h32".
///
/// @return Whether the union's current tag state has value "w32h32".
///
- (BOOL)isW32h32;

///
/// Retrieves whether the union's current tag state has value "w64h64".
///
/// @return Whether the union's current tag state has value "w64h64".
///
- (BOOL)isW64h64;

///
/// Retrieves whether the union's current tag state has value "w128h128".
///
/// @return Whether the union's current tag state has value "w128h128".
///
- (BOOL)isW128h128;

///
/// Retrieves whether the union's current tag state has value "w640h480".
///
/// @return Whether the union's current tag state has value "w640h480".
///
- (BOOL)isW640h480;

///
/// Retrieves whether the union's current tag state has value "w1024h768".
///
/// @return Whether the union's current tag state has value "w1024h768".
///
- (BOOL)isW1024h768;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESThumbnailSize` union.
///
@interface DBFILESThumbnailSizeSerializer : NSObject

///
/// Serializes `DBFILESThumbnailSize` instances.
///
/// @param instance An instance of the `DBFILESThumbnailSize` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESThumbnailSize` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESThumbnailSize * _Nonnull)instance;

///
/// Deserializes `DBFILESThumbnailSize` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESThumbnailSize` API object.
///
/// @return An instantiation of the `DBFILESThumbnailSize` object.
///
+ (DBFILESThumbnailSize * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
