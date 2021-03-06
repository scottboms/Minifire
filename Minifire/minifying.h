//
//  minifying.h
//  Minifire
//
//  Created by @vanyamikhailov on 3/15/11.
//

#import <Cocoa/Cocoa.h>


@interface minifying : NSView {
    
    IBOutlet NSWindow *window;
    IBOutlet NSPanel *settingsPanel;
    IBOutlet NSTextField *status;
    IBOutlet NSProgressIndicator *spinner;
    
    //settings outlets
    IBOutlet NSTextField *fileEnding;
    IBOutlet NSPopUpButton *outputDir;
    IBOutlet NSButton *combineFiles;
    
    NSTask *YUICompressor;
    NSTask *shell;
    bool highlight;
    
}

-(IBAction)showSettings:(id)sender;
-(void)loadSettings;
-(void)saveSettings;
-(NSString *)getOutputFilename:(NSString *) origin;
-(void)minifyFiles:(NSArray *)arr showSuccess:(bool)showSheet;


@end
