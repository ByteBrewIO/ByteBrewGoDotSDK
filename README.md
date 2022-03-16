# ByteBrewGoDotSDK
 ByteBrew is the free easy to integrate GoDot Android SDK that provides your game with Real-Time Analytic Tracking, Monetization Tracking, Attribution, Remote Configs and A/B Testing.

 ## Summary
 A product of ByteBrew’s all-in-one platform, the ByteBrew SDK gives you instant integration to the following key features and tools for your games on the ByteBrew Dashboard:

Real-Time Analytics:
 - Engagement Analytics: Automatically start tracking your game’s key performance indicators such as new user events, DAU, session length, playtime, and retention reporting
 - Custom Filtering: Breakdown and segment your players using custom filters such as; device type, geography, build version, and date ranges
 
 Push Notifications:
  - Send Cross-Platform Cloud Notifications to your players around the globe with ByteBrew's Push Notifications.

Player Progression:
 - Game level statistics tracking to breakdown level wins, fails, scores and more.
 - Progression funneling system: Monitor your user's progression and set up custom event funnels to visually track how your player's progression through your games. 
 -Locate key churn points in your games by tracking how long players take to advance through events.

Monetization:
 - Start tracking your game’s in-app purchases with real value using our Receipt Validation tool to turn your game into a business.  
 - Track and visualize your game's in-game advertising revenue from any ad networks you monetize. 

Attribution: 
 - ByteBrew attribution is integrated with the top mobile ad networks for basic attribution and SKAdnetwork with more added each week. Track every impression, click, and install across all your running advertising campaigns down to creative level detail.

Remote Configs: 
 - Make in-game edits to your game remotely without having to upload a new build to the app stores using the following types of configurations.
 - Single Remote Configs: Gives you the ability to change individual custom values in-game such as: boss enemy health, player statistics, or level difficulty
 - Grouped Configs: This advanced feature gives you the ability to change multiple in-game values on an interval period. This can be used for making a rotating shop item, or a daily reward special for your game

A/B Testing: 
 - This feature gives you the ability to change multiple in-game values by which test a user is attached to. This can be used to track multiple KPIs that can effect their performance based on the config set for each user.

 [ByteBrew Dashboard](https://dashboard.bytebrew.io): Setup your mobile games and view your real-time analytics.

 ## Installation
 You can download the GoDot package from this github to install straight into your project.

 Follow the [documentation](https://docs.bytebrew.io/sdk/godot) to continue integration.

 Create your ByteBrew account to access the [dashboard](https://dashboard.bytebrew.io/register), or if you do have an account login [here](https://dashboard.bytebrew.io/login).



 ## Community
 Join our Community of Developers on Discord [here](https://discord.gg/sAp4f3tJte)! 


 ## ChangeLog
 ### 0.0.6.1
 - Update to ByteBrew GoDot Android SDK
 - Changes:
    - SDK change for Android with Google Policy Compliance Update.
 - Notes:
    - To Properly update the SDK, make sure to remove the whole "ByteBrewSDK" and reimport the new SDK, and don't forget to re-input your SDK Keys.

 ### 0.0.6
 - Update to ByteBrew GoDot Android SDK
 - Additions:
    - Push Notifications: Launch of Push Notifications in ByteBrew with a one line of code integration in the SDK!
    - Custom User Data Attributes: Add Key-Value Pair attributes to your user for segmentation use.
    - Remote Config Read Check: New method to check whether remote configs have been retrieved without a callback, boolean will return.
    - Get User ID: Ability to retrieve the ByteBrew User ID for your reference, mostly to use for push notifications.
- Changes:
    -GoDot SDK - Future ByteBrew SDKs will remove the older version of "TrackAdEvent" where placementType is a String, this will soon change to a enum AdType value. To comply with future SDKs we recommend only using three different types of placementTypes ex. "Reward", "Interstitial", "Banner". Please update them to these types.
- Notes:
    - Checkout documentation for further use of Push Notifications and more.
 ### 0.0.4
 - First launch of ByteBrew SDK availible for GoDot Android Developers




## Footer
Copyright and Property of [ByteBrew](https://bytebrew.io). Use of ByteBrew SDK are subject to ByteBrew's [Terms of Service](https://docs.bytebrew.io/BBSettings/termsservice) and [Privacy Policy](https://docs.bytebrew.io/BBSettings/privacypolicy).

ByteBrew SDK is licensed under MIT
