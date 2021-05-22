#ifndef ASM_HPP
#define ASM_HPP

#define EXPAND(x) x
#define EXPAND_VA_ARGS(...) __VA_ARGS__

#define ARGUMENT(argument_type, argument_name, argument_expression) \
argument_type, argument_name, (__asm { mov argument_name, argument_expression };)

#define GET_ARG_COUNT(...)  INTERNAL_EXPAND_ARGS_PRIVATE(INTERNAL_ARGS_AUGMENTER(__VA_ARGS__))
#define INTERNAL_ARGS_AUGMENTER(...) unused, __VA_ARGS__
#define INTERNAL_EXPAND_ARGS_PRIVATE(...) EXPAND(INTERNAL_GET_ARG_COUNT_PRIVATE(__VA_ARGS__, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0))
#define INTERNAL_GET_ARG_COUNT_PRIVATE(_1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, count, ...) count

#define ARGUMENT_LIST_0()
#define ARGUMENT_LIST_1(argument_type, argument_name, argument_expression) \
argument_type argument_name
#define ARGUMENT_LIST_2(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_1(__VA_ARGS__))
#define ARGUMENT_LIST_3(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_2(__VA_ARGS__))
#define ARGUMENT_LIST_4(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_3(__VA_ARGS__))
#define ARGUMENT_LIST_5(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_4(__VA_ARGS__))
#define ARGUMENT_LIST_6(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_5(__VA_ARGS__))
#define ARGUMENT_LIST_7(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_6(__VA_ARGS__))
#define ARGUMENT_LIST_8(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_7(__VA_ARGS__))
#define ARGUMENT_LIST_9(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_8(__VA_ARGS__))
#define ARGUMENT_LIST_10(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_9(__VA_ARGS__))
#define ARGUMENT_LIST_11(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_10(__VA_ARGS__))
#define ARGUMENT_LIST_12(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_11(__VA_ARGS__))
#define ARGUMENT_LIST_13(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_12(__VA_ARGS__))
#define ARGUMENT_LIST_14(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_13(__VA_ARGS__))
#define ARGUMENT_LIST_15(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_14(__VA_ARGS__))
#define ARGUMENT_LIST_16(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LIST_1(argument_type, argument_name, argument_expression), EXPAND(ARGUMENT_LIST_15(__VA_ARGS__))

#define ARGUMENT_LIST_INTERNAL(count, ...) EXPAND(ARGUMENT_LIST_##count(__VA_ARGS__))
#define ARGUMENT_LIST_INTERNAL_OUTER(count, ...) ARGUMENT_LIST_INTERNAL(count, __VA_ARGS__)
#define ARGUMENT_LIST(...) ARGUMENT_LIST_INTERNAL_OUTER(EXPAND(GET_ARG_COUNT(__VA_ARGS__)), __VA_ARGS__)

#define ARGUMENT_LOAD_0()
#define ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) \
EXPAND_VA_ARGS##argument_expression
#define ARGUMENT_LOAD_2(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_1(__VA_ARGS__))
#define ARGUMENT_LOAD_3(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_2(__VA_ARGS__))
#define ARGUMENT_LOAD_4(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_3(__VA_ARGS__))
#define ARGUMENT_LOAD_5(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_4(__VA_ARGS__))
#define ARGUMENT_LOAD_6(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_5(__VA_ARGS__))
#define ARGUMENT_LOAD_7(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_6(__VA_ARGS__))
#define ARGUMENT_LOAD_8(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_7(__VA_ARGS__))
#define ARGUMENT_LOAD_9(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_8(__VA_ARGS__))
#define ARGUMENT_LOAD_10(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_9(__VA_ARGS__))
#define ARGUMENT_LOAD_11(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_10(__VA_ARGS__))
#define ARGUMENT_LOAD_12(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_11(__VA_ARGS__))
#define ARGUMENT_LOAD_13(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_12(__VA_ARGS__))
#define ARGUMENT_LOAD_14(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_13(__VA_ARGS__))
#define ARGUMENT_LOAD_15(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_14(__VA_ARGS__))
#define ARGUMENT_LOAD_16(argument_type, argument_name, argument_expression, ...) \
ARGUMENT_LOAD_1(argument_type, argument_name, argument_expression) EXPAND(ARGUMENT_LOAD_15(__VA_ARGS__))

#define ARGUMENT_LOAD_INTERNAL(count, ...) EXPAND(ARGUMENT_LOAD_##count(__VA_ARGS__))
#define ARGUMENT_LOAD_INTERNAL_OUTER(count, ...) ARGUMENT_LOAD_INTERNAL(count, __VA_ARGS__)
#define ARGUMENT_LOAD(...) ARGUMENT_LOAD_INTERNAL_OUTER(EXPAND(GET_ARG_COUNT(__VA_ARGS__)), __VA_ARGS__)

#define HASH() #
#define COMMENT /##/
#define NEW_LINE_INTERNAL() HASH()define DUMMY R"dummy(
/*)dummy"
#define NEW_LINE() COMMENT NEW_LINE_INTERNAL() */

#define DEF(a, b) \
NEW_LINE() \
HASH()define a b \
NEW_LINE()

#define UNDEF(a) \
NEW_LINE() \
HASH()undef a \
NEW_LINE()

#define BEGIN_FUNCTION(return_type, return_expression, function_name, ...) \
DEF(RETURN_LOCATION, return_expression) \
__declspec(naked) return_type function_name(ARGUMENT_LIST(__VA_ARGS__)) { \
ARGUMENT_LOAD(__VA_ARGS__) \
__asm { push EBP }; \
__asm { mov EBP, ESP }; \
__asm { sub ESP, __LOCAL_SIZE }; \
__asm { push EAX }; \
__asm { push EBX }; \
__asm { push ECX }; \
__asm { push EDI }; \
__asm { push EDX }; \
__asm { push ESI };

#define END_FUNCTION() \
} \
UNDEF(RETURN_LOCATION)

#define RETURN(return_expression) \
__asm { pop ESI }; \
__asm { pop EDX }; \
__asm { pop EDI }; \
__asm { pop ECX }; \
__asm { pop EBX }; \
__asm { pop EAX }; \
__asm { mov RETURN_LOCATION, return_expression }; \
__asm { mov ESP, EBP }; \
__asm { pop EBP }; \
__asm { ret }

#define RETURN_VOID() \
__asm { pop ESI }; \
__asm { pop EDX }; \
__asm { pop EDI }; \
__asm { pop ECX }; \
__asm { pop EBX }; \
__asm { pop EAX }; \
__asm { mov ESP, EBP }; \
__asm { pop EBP }; \
__asm { ret }

#define FUNCTION(return_type, return_expression, function_name, arguments, body) \
BEGIN_FUNCTION(return_type, return_expression, function_name, EXPAND_VA_ARGS##arguments) \
	body \
END_FUNCTION()

#define FUNCTION_VOID(return_type, function_name, arguments, body) \
BEGIN_FUNCTION(return_type,, function_name, EXPAND_VA_ARGS##arguments) \
	body \
END_FUNCTION()

#define PUSH(expression) __asm { push expression }
#define POP(expression) __asm { pop expression }

#define VALUE(variable, expression) \
,,(__asm { mov expression, variable };)

#define CALL(out, return_expression, function_name, values) \
ARGUMENT_LOAD(EXPAND_VA_ARGS##values) \
__asm { call function_name }; \
__asm { mov out, return_expression }

#define CALL_VOID(function_name, values) \
ARGUMENT_LOAD(EXPAND_VA_ARGS##values) \
__asm { call function_name };

#endif // ASM_HPP
