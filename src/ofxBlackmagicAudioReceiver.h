//
//  ofxBlackmagicAudioReceiver.h
//  emptyExample
//
//  Created by Will Gallia on 03/08/2012.
//
//

#pragma once

class ofxBlackmagicAudioReceiver {
  
public:
  virtual void audioReceived(void *data, int nSamples) = 0;
};


