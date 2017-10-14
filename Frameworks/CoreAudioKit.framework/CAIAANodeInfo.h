/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAIAANodeInfo : NSObject {
    UIColor * labelColor;
    NSMutableArray * nodeList;
}

@property (retain) UIColor *labelColor;
@property (readonly) unsigned int numNodes;

- (void)createNodeList;
- (id)init;
- (id)labelColor;
- (id)nodeAtIndex:(unsigned int)arg1;
- (id)nodeWithNodeInfo:(id)arg1;
- (unsigned int)numNodes;
- (void)refresh;
- (void)setLabelColor:(id)arg1;

@end
