
struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto rgb = getValue<input_rgb>(ctx);
    // only emit changes
    if (rgb->red != getValue<output_red>(ctx)) emitValue<output_red>(ctx, rgb->red);
    if (rgb->green != getValue<output_green>(ctx))emitValue<output_green>(ctx, rgb->green);
    if (rgb->blue != getValue<output_blue>(ctx))emitValue<output_blue>(ctx, rgb->blue);
}
