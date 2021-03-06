//-- void Adafruit_NeoPixel::setPin(p)
// Our constructor namespace should be: awgrover__adafruit_neopixel_ll__adafruitneopixel
struct State {
  // not used
  };

{{ GENERATED_CODE }}

void evaluate(Context ctx) {

  // only act on trigger, inputs not relevant for this
  if ( !isInputDirty<input_trigger>(ctx) ) return;

  // var names are valid c++ because we got them from the arglist of the c++ method
  auto p = getValue<input_p>(ctx); // 
  

  auto object  = getValue<input_adafruitneopixel>(ctx); // Adafruit_NeoPixel

  object->setPin( p ); // void
  
  emitValue<output_dev>(ctx, object); // for chaining

  
  emitValue<output_done>(ctx, 1); // pulse
}
