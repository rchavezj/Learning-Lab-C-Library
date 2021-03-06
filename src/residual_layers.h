/*
MIT License

Copyright (c) 2018 Viviano Riccardo

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files ((the "LICENSE")), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef __RESIDUAL_LAYERS_H__
#define __RESIDUAL_LAYERS_H__

rl* residual(int channels, int input_rows, int input_cols, int n_cl, cl** cls);
void free_residual(rl* r);
void save_rl(rl* f, int n);
rl* load_rl(FILE* fr);
rl* copy_rl(rl* f);
void paste_rl(rl* f, rl* copy);
rl* reset_rl(rl* f);
unsigned long long int size_of_rls(rl* f);
void slow_paste_rl(rl* f, rl* copy,float tau);
int get_array_size_params_rl(rl* f);
void memcopy_vector_to_params_rl(rl* f, float* vector);
void memcopy_params_to_vector_rl(rl* f, float* vector);
void memcopy_vector_to_derivative_params_rl(rl* f, float* vector);
void memcopy_derivative_params_to_vector_rl(rl* f, float* vector);
void set_residual_biases_to_zero(rl* r);

#endif
