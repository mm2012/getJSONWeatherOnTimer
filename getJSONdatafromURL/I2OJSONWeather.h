//
//  I2OJSONWeather.h
//  getJSONdatafromURL
//
//  Copyright (c) 2013 Mikki Man,, Idea2Objects. All rights reserved.
//
/*
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
 */


#import <Foundation/Foundation.h>
#define OPENWEATHER_URL_GLASGOW     @"http://api.openweathermap.org/data/2.5/weather?id=2648579"
#define JSONKEY_MAIN                [jsonObject objectForKey:@"main"]
#define JSONKEY_WEATHER             [jsonObject objectForKey:@"weather"]
#define OWM_APPID                   @"947944907b1e16c5dfdab3d3fed741a5"
#define OWM_APIKEY_GLASGOW          @"http://api.openweathermap.org/data/2.5/forecast/city?id=2648579&APPID=947944907b1e16c5dfdab3d3fed741a5"

@interface I2OJSONWeather : NSObject

@property (weak, nonatomic) UILabel* currentCondition;
@property (weak, nonatomic) UILabel* currTemp;
@property (weak, nonatomic) UILabel* maxTemp;
@property (weak, nonatomic) UILabel* minTemp;
@property (weak, nonatomic) UILabel* humidity;
@property (weak, nonatomic) UILabel* lastUpdateTime;

-(id)init;
-(id)initWithWeatherCondition:(UILabel*)currCondition
                     currTemp:(UILabel*)curr
                      maxTemp:(UILabel*)max
                      minTemp:(UILabel*)min
                     humidity:(UILabel*)humid
               lastUpdateTime:(UILabel*)lastUpd;


-(void)fetchWeatherAndUpdateUI;
-(void)fetchWeatherAndUpdateUI:(float)updateSeconds;

@end
