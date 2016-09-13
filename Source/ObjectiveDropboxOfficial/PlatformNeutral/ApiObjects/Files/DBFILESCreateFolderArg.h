///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCreateFolderArg;

#pragma mark - API Object

///
/// The `CreateFolderArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCreateFolderArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Path in the user's Dropbox to create.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Path in the user's Dropbox to create.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `CreateFolderArg` struct.
///
@interface DBFILESCreateFolderArgSerializer : NSObject

///
/// Serializes `DBFILESCreateFolderArg` instances.
///
/// @param instance An instance of the `DBFILESCreateFolderArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCreateFolderArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESCreateFolderArg * _Nonnull)instance;

///
/// Deserializes `DBFILESCreateFolderArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCreateFolderArg` API object.
///
/// @return An instantiation of the `DBFILESCreateFolderArg` object.
///
+ (DBFILESCreateFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
