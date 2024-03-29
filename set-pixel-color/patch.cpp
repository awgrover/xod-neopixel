//-- void Adafruit_NeoPixel::setPixelColor(n, r, g, b)
// Our constructor namespace should be: awgrover__adafruit_neopixel_ll__adafruitneopixel
struct State {
  // not used
  };

{{ GENERATED_CODE }}

void evaluate(Context ctx) {

  // only act on trigger, inputs not relevant for this
  if ( !isInputDirty<input_trigger>(ctx) ) return;

  // var names are valid c++ because we got them from the arglist of the c++ method
  auto n = getValue<input_n>(ctx); // 
  auto color = getValue<input_color>(ctx); // 

  auto r = color->red;
  auto g = color->green;
  auto b = color->blue;

  auto object  = getValue<input_adafruitneopixel>(ctx); // Adafruit_NeoPixel

  object->setPixelColor( n, r, g, b ); // void
  
  emitValue<output_dev>(ctx, object); // for chaining
  
  emitValue<output_done>(ctx, 1); // pulse
}
