
struct State {
    float red;
    float green;
    float blue;
};

{{ GENERATED_CODE }}

using Type = *State;

void evaluate(Context ctx) {
    // if we are called, something is dirty, and we might as well write them all
    Type state = getState(ctx);
    
    state->red = getValue<input_red>(ctx);
    state->green = getValue<input_green>(ctx);
    state->blue = getValue<input_blue>(ctx);

    emitValue<output_color>(ctx, state);
}
