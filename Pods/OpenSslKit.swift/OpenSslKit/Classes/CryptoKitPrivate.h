#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface _Hash : NSObject

+ (NSData *)sha256:(NSData *)data;
+ (NSData *)concatKDF:(NSData *)data;
+ (NSData *)ripemd160:(NSData *)data;
+ (NSData *)hmacsha512:(NSData *)data key:(NSData *)key;
+ (NSData *)hmacsha256:(NSData *)data key:(NSData *)key iv:(NSData *)iv macData:(NSData *)macData;
+ (NSData *)scrypt:(NSData *)data;

@end

@interface _ECKey : NSObject

@property (nonatomic, readonly) NSData *privateKey;
@property (nonatomic, readonly) NSData *publicKey;

+ (_ECKey *)random;

@end

@interface _AES : NSObject

+ (NSData *)encrypt:(NSData *)data withKey:(NSData *)key keySize:(NSInteger)keySize iv:(NSData *)iv;
+ (NSData *)encrypt:(NSData *)data withKey:(NSData *)key keySize:(NSInteger)keySize;

@end

@interface _ECDH : NSObject

+ (unsigned char *)agree:(NSData *)privateKey withPublicKey:(NSData *)publicKey;

@end

@interface _Key : NSObject

+ (NSData *)computePublicKeyFromPrivateKey:(NSData *)privateKey compression:(BOOL)compression;
+ (NSData *)deriveKey:(NSData *)password salt:(NSData *)salt iterations:(NSInteger)iterations keyLength:(NSInteger)keyLength;

@end

@interface _HDKey : NSObject

@property (nonatomic, readonly, nullable) NSData *privateKey;
@property (nonatomic, readonly, nullable) NSData *publicKey;
@property (nonatomic, readonly) NSData *chainCode;
@property (nonatomic, readonly) uint8_t depth;
@property (nonatomic, readonly) uint32_t fingerprint;
@property (nonatomic, readonly) uint32_t childIndex;

- (instancetype)initWithPrivateKey:(nullable NSData *)privateKey publicKey:(nullable NSData *)publicKey chainCode:(NSData *)chainCode depth:(uint8_t)depth fingerprint:(uint32_t)fingerprint childIndex:(uint32_t)childIndex;
- (nullable _HDKey *)derivedAtIndex:(uint32_t)childIndex hardened:(BOOL)hardened;

@end
NS_ASSUME_NONNULL_END
