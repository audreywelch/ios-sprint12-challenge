//
//  ALWPokemon.h
//  Pokedex ObjC Sprint Challenge
//
//  Created by Audrey Welch on 3/15/19.
//  Copyright © 2019 Audrey Welch. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ALWPokemon : NSObject

// Everything is one level deep in a dictionary

// Abilities are inside an array

// { abilities : [] }
// An array of dictionaries [{ ability : { : } }, { ability : { : } }]

// {}
//   name
//   id
//   [] abilities
//      {}
//          {} ability
//              name

// Sprites are inside a dictionary

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger pokemonID;
@property (nonatomic, copy, readonly) NSString *abilities;
@property (nonatomic, copy, readonly) NSString *sprite;

- (instancetype)initWithName:(NSString *)name pokemonID:(NSInteger)pokemonID abilities:(NSString *)abilities sprite:(NSString *)sprite;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
