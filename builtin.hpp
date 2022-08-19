#pragma once

#include <cstddef>

template <template <char...> class, typename, unsigned>
struct __builtin__reflect_field;

template <template <class T, T> class, typename, typename>
struct __builtin__reflect_fields_count;


template <template <class T, T> class C, typename V, typename I>
struct __builtin__reflect_methods_count {};

template <template <char...> class N, typename I, unsigned Idx>
struct __builtin__reflect_method_name;

template <template <char... s> class N, auto P>
struct __builtin__reflect_method_ptr_name;

template <template <char... s> class N, typename I, unsigned Idx>
struct __builtin__reflect_return_name;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_func_id;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_internal;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_answer_id;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_external;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_getter;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_noaccept;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_implicit_func_id;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_dyn_chain_parse;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_no_read_persistent;

template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_deploy;


template <template <class T, T v> class C, typename V, typename I, unsigned Idx>
struct __builtin__reflect_method_no_write_persistent;

template <typename I, unsigned Idx>
struct __builtin__reflect_method_rv;

template <auto P>
struct __builtin__reflect_method_ptr_rv;

template <class I, auto P>
struct __builtin__reflect_method_arg_struct;

template <auto P>
struct __builtin__reflect_method_ptr_arg_struct;

template <template <class T, T v> class C, typename V, auto P>
struct __builtin__reflect_method_ptr_internal;

template <template <class T, T v> class C, typename V, auto P>
struct __builtin__reflect_method_ptr_answer_id;

template <template <class T, T v> class C, typename V, class I>
struct __builtin__reflect_interface_has_pubkey;
template <template <class T, T> class C, class I>
struct __builtin__reflect_interface_has_pubkey<C, bool, I> : std::bool_constant<true> {};

template <template <class T, T v> class C, typename V, class I>
struct __builtin__reflect_interface_has_timestamp;
template <template <class T, T> class C, class I>
struct __builtin__reflect_interface_has_timestamp<C, bool, I> : std::bool_constant<true> {};

template <template <class T, T v> class C, typename V, class I>
struct __builtin__reflect_interface_has_expire;
template <template <class T, T> class C, class I>
struct __builtin__reflect_interface_has_expire<C, bool, I> : std::bool_constant<true> {};


template <template <class T, T v> class C, typename V, const char* S>
struct __builtin__reflect_signature_func_id;


template <template <class Fmt> class P, template <class Fmt> class B, typename I>
struct __builtin__reflect_smart_interface {};

template <template <auto MethodPtr> class M, class C, class I, unsigned Idx>
struct __builtin__reflect_method_ptr {};

struct __builtin__tvm_builder {};
struct __builtin__tvm_slice {};
struct __builtin__tvm_cell {};
struct __builtin__tvm_tuple {};
