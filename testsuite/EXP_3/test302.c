#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
uint64_t x4 = UINT64_MAX;
uint64_t t0 = 65077327562238LLU;
static uint64_t t2 = 313113411758411LLU;
int16_t x33 = -1;
static volatile uint64_t t5 = 2128849809668LLU;
static volatile int32_t x42 = -3;
volatile uint64_t t11 = 1453012730140813615LLU;
volatile uint64_t t12 = 274878600285304070LLU;
uint64_t x123 = 117399LLU;
volatile int8_t x129 = INT8_MAX;
volatile int32_t x167 = -1;
volatile int8_t x172 = INT8_MAX;
int64_t x175 = INT64_MIN;
volatile int64_t t28 = -1576236571LL;
int64_t x177 = -421095153297253786LL;
static int32_t x179 = -1;
static volatile int64_t t30 = 112864842149431168LL;
volatile int64_t x194 = INT64_MIN;
uint64_t x199 = 306421485101305LLU;
int8_t x201 = INT8_MIN;
volatile int64_t t33 = -16709403321897LL;
int8_t x208 = INT8_MIN;
int8_t x215 = INT8_MAX;
int32_t x231 = 6325;
int64_t t39 = -2234996700204LL;
int16_t x241 = -6;
int8_t x243 = INT8_MIN;
int64_t x244 = -1592216372872LL;
static int64_t t40 = -351159LL;
uint16_t x246 = 876U;
int8_t x247 = INT8_MIN;
int32_t x250 = 432240738;
uint8_t x259 = 52U;
static volatile uint16_t x269 = UINT16_MAX;
static uint64_t x276 = UINT64_MAX;
volatile int32_t x290 = INT32_MIN;
uint16_t x295 = 28U;
static uint64_t x298 = 3129242980LLU;
volatile uint64_t t52 = 3918248383LLU;
int64_t x301 = INT64_MAX;
uint32_t x304 = 20U;
volatile int8_t x307 = INT8_MIN;
int16_t x318 = 15226;
int16_t x322 = -3;
int16_t x323 = INT16_MIN;
int16_t x324 = -3;
uint64_t x330 = 168628906743LLU;
static uint16_t x338 = 588U;
int8_t x340 = 1;
int16_t x343 = 0;
uint64_t t61 = 149870155LLU;
int8_t x353 = 1;
volatile uint64_t t62 = 1798529514LLU;
int8_t x357 = -1;
int16_t x358 = -1;
volatile uint32_t x359 = UINT32_MAX;
int16_t x361 = 0;
volatile int32_t t64 = -24;
int16_t x369 = 6749;
int8_t x370 = INT8_MIN;
int32_t x374 = 23;
uint32_t t67 = 7925U;
int64_t x379 = 51LL;
uint8_t x387 = 0U;
uint8_t x391 = UINT8_MAX;
static int8_t x392 = INT8_MIN;
uint16_t x396 = 25U;
uint16_t x399 = UINT16_MAX;
uint8_t x406 = UINT8_MAX;
static int16_t x425 = INT16_MIN;
volatile int32_t t78 = -103579017;
int64_t x430 = INT64_MIN;
uint8_t x432 = 3U;
int16_t x436 = INT16_MIN;
volatile uint16_t x448 = 0U;
uint8_t x452 = UINT8_MAX;
volatile int64_t t83 = 3447765LL;
uint8_t x458 = 118U;
int16_t x460 = 0;
uint16_t x461 = 26719U;
volatile uint32_t t86 = 1292066953U;
static uint64_t x479 = 5229341507LLU;
uint64_t x485 = 8584336423182409LLU;
static uint8_t x492 = 15U;
volatile uint64_t t92 = 792LLU;
uint32_t x495 = 13U;
volatile int64_t t93 = -69672781747784301LL;
volatile int16_t x520 = INT16_MIN;
int32_t t96 = 37672;
int8_t x521 = INT8_MIN;
volatile uint16_t x522 = 52U;
int8_t x523 = INT8_MIN;
static volatile int64_t t98 = 18344LL;
static int64_t x535 = -1LL;
volatile int64_t t99 = 1172052782134429342LL;


void f0(void) {
	static int64_t x2 = 1822119052609LL;
	volatile int16_t x3 = -9761;

	t0 = ((x1&x2)*(x3-x4));

	if (t0 != 18428960191756087776LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 6773635;
	static int8_t x6 = 4;
	uint64_t x7 = 268LLU;
	volatile int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 60985759LLU;

	t1 = ((x5&x6)*(x7-x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = -1LL;

	t2 = ((x13&x14)*(x15-x16));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile uint32_t x18 = 0U;
	int32_t x19 = INT32_MAX;
	int64_t x20 = 1LL;
	int64_t t3 = -1LL;

	t3 = ((x17&x18)*(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	int64_t x26 = -1LL;
	static uint16_t x27 = 119U;
	int8_t x28 = 0;
	volatile int64_t t4 = 1520418580229972130LL;

	t4 = ((x25&x26)*(x27-x28));

	if (t4 != -119LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x34 = 125U;
	uint64_t x35 = 268421204040LLU;
	uint64_t x36 = UINT64_MAX;

	t5 = ((x33&x34)*(x35-x36));

	if (t5 != 33552650505125LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	volatile int16_t x39 = INT16_MAX;
	static volatile uint64_t x40 = UINT64_MAX;
	uint64_t t6 = 201180908793LLU;

	t6 = ((x37&x38)*(x39-x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = 1242LL;
	uint8_t x43 = 1U;
	static int32_t x44 = -1;
	volatile int64_t t7 = -9219783LL;

	t7 = ((x41&x42)*(x43-x44));

	if (t7 != 2480LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	static uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 3687U;
	volatile uint64_t x52 = 1529634LLU;
	uint64_t t8 = 534531296221096LLU;

	t8 = ((x49&x50)*(x51-x52));

	if (t8 != 18440190231251353600LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	static volatile int32_t x54 = -1;
	int8_t x55 = -1;
	int16_t x56 = 18;
	volatile int32_t t9 = 1;

	t9 = ((x53&x54)*(x55-x56));

	if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 5496U;
	int16_t x58 = INT16_MIN;
	int8_t x59 = 0;
	static uint32_t x60 = UINT32_MAX;
	volatile uint32_t t10 = 1538762572U;

	t10 = ((x57&x58)*(x59-x60));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = 1240U;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 121LLU;

	t11 = ((x73&x74)*(x75-x76));

	if (t11 != 18446744073709412224LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -1LL;
	static int8_t x78 = INT8_MIN;
	uint64_t x79 = 1LLU;
	static int32_t x80 = INT32_MIN;

	t12 = ((x77&x78)*(x79-x80));

	if (t12 != 18446743798831644544LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x85 = -1LL;
	static uint8_t x86 = 6U;
	volatile uint32_t x87 = 3816680U;
	uint8_t x88 = 1U;
	int64_t t13 = 15110808321914866LL;

	t13 = ((x85&x86)*(x87-x88));

	if (t13 != 22900074LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	volatile uint64_t x91 = 3065955513589132LLU;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t14 = 215LLU;

	t14 = ((x89&x90)*(x91-x92));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = 9701313U;
	int64_t x94 = INT64_MIN;
	volatile int8_t x95 = -1;
	volatile int16_t x96 = INT16_MIN;
	int64_t t15 = -1038516785310423201LL;

	t15 = ((x93&x94)*(x95-x96));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x105 = 133495464990150LLU;
	static uint8_t x106 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 10047U;
	volatile uint64_t t16 = 13560702377796LLU;

	t16 = ((x105&x106)*(x107-x108));

	if (t16 != 10986624LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x121 = 15051U;
	int64_t x122 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	uint64_t t17 = 426992345080LLU;

	t17 = ((x121&x122)*(x123-x124));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x125 = 3;
	volatile int8_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -1;
	volatile uint64_t t18 = 41100998907842LLU;

	t18 = ((x125&x126)*(x127-x128));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x130 = INT64_MAX;
	volatile uint32_t x131 = UINT32_MAX;
	static uint8_t x132 = UINT8_MAX;
	volatile int64_t t19 = 31366690LL;

	t19 = ((x129&x130)*(x131-x132));

	if (t19 != 545460814080LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x137 = INT32_MIN;
	volatile int16_t x138 = INT16_MIN;
	uint64_t x139 = 854741089322LLU;
	int32_t x140 = INT32_MIN;
	volatile uint64_t t20 = 10437901LLU;

	t20 = ((x137&x138)*(x139-x140));

	if (t20 != 4520208759825367040LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x141 = -1LL;
	volatile uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 1072884848LLU;
	int8_t x144 = -1;
	uint64_t t21 = 191887446956LLU;

	t21 = ((x141&x142)*(x143-x144));

	if (t21 != 4608005337756013455LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 65776195U;
	static volatile uint64_t x147 = UINT64_MAX;
	static volatile int16_t x148 = INT16_MIN;
	volatile uint64_t t22 = 2LLU;

	t22 = ((x145&x146)*(x147-x148));

	if (t22 != 2155286386176LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x149 = 5U;
	int32_t x150 = 4059;
	volatile int16_t x151 = -1;
	volatile uint64_t x152 = 29748160502LLU;
	volatile uint64_t t23 = 34LLU;

	t23 = ((x149&x150)*(x151-x152));

	if (t23 != 18446744043961391113LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = 15;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	int8_t x156 = 3;
	volatile int32_t t24 = -53;

	t24 = ((x153&x154)*(x155-x156));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = 0;
	volatile uint32_t x163 = 209020U;
	int64_t x164 = -1LL;
	volatile int64_t t25 = 63LL;

	t25 = ((x161&x162)*(x163-x164));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = -1LL;
	int8_t x166 = -1;
	int16_t x168 = INT16_MAX;
	volatile int64_t t26 = -35875LL;

	t26 = ((x165&x166)*(x167-x168));

	if (t26 != 32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = -15302;
	uint32_t x171 = 25U;
	volatile uint32_t t27 = 117065U;

	t27 = ((x169&x170)*(x171-x172));

	if (t27 != 1560804U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	volatile int64_t x176 = INT64_MIN;

	t28 = ((x173&x174)*(x175-x176));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x178 = UINT64_MAX;
	uint32_t x180 = UINT32_MAX;
	uint64_t t29 = 213519139549163LLU;

	t29 = ((x177&x178)*(x179-x180));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = -2182159;
	int64_t x186 = 3845855132164901LL;
	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = -1;

	t30 = ((x185&x186)*(x187-x188));

	if (t30 != -488423601784941919LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x193 = INT16_MAX;
	static uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 337280U;
	uint64_t t31 = 4333200163573504LLU;

	t31 = ((x193&x194)*(x195-x196));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x198 = 105U;
	uint64_t x200 = 43LLU;
	volatile uint64_t t32 = 3311593099094727LLU;

	t32 = ((x197&x198)*(x199-x200));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x202 = 25U;
	int16_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;

	t33 = ((x201&x202)*(x203-x204));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	uint32_t x207 = 1150U;
	volatile uint32_t t34 = 8572241U;

	t34 = ((x205&x206)*(x207-x208));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x213 = INT32_MIN;
	volatile uint64_t x214 = 27573827LLU;
	static int8_t x216 = -18;
	uint64_t t35 = 19252105373629LLU;

	t35 = ((x213&x214)*(x215-x216));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x217 = 320211U;
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = -9;
	volatile int32_t x220 = 95409;
	volatile uint32_t t36 = 21U;

	t36 = ((x217&x218)*(x219-x220));

	if (t36 != 1924857856U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = -29254604656504LL;
	volatile int64_t x227 = -1LL;
	uint16_t x228 = 1131U;
	int64_t t37 = -2253154872237LL;

	t37 = ((x225&x226)*(x227-x228));

	if (t37 != 33116212503773184LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x229 = 9;
	int32_t x230 = INT32_MAX;
	static int16_t x232 = -1;
	int32_t t38 = -22999;

	t38 = ((x229&x230)*(x231-x232));

	if (t38 != 56934) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MAX;
	int16_t x239 = INT16_MAX;
	static int64_t x240 = -1LL;

	t39 = ((x237&x238)*(x239-x240));

	if (t39 != 70368744144896LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x242 = -1;

	t40 = ((x241&x242)*(x243-x244));

	if (t40 != -9553298236464LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = 1194425228LL;
	int64_t x248 = -1LL;
	int64_t t41 = -82021368266026991LL;

	t41 = ((x245&x246)*(x247-x248));

	if (t41 != -99060LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = INT64_MAX;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = 154;
	volatile int64_t t42 = -362537323971888139LL;

	t42 = ((x249&x250)*(x251-x252));

	if (t42 != -14230229576436LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x257 = 85704822LLU;
	volatile int8_t x258 = INT8_MIN;
	static uint32_t x260 = UINT32_MAX;
	volatile uint64_t t43 = 2714LLU;

	t43 = ((x257&x258)*(x259-x260));

	if (t43 != 4542349312LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = INT64_MAX;
	int64_t x267 = 32LL;
	uint64_t x268 = 1114LLU;
	uint64_t t44 = 2853LLU;

	t44 = ((x265&x266)*(x267-x268));

	if (t44 != 138496LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x270 = 13190U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = -1;
	uint64_t t45 = 15312436655466LLU;

	t45 = ((x269&x270)*(x271-x272));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x273 = 1U;
	int32_t x274 = INT32_MIN;
	volatile uint16_t x275 = 10U;
	static volatile uint64_t t46 = 1LLU;

	t46 = ((x273&x274)*(x275-x276));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x277 = -1;
	volatile int64_t x278 = -1LL;
	static uint16_t x279 = 492U;
	int8_t x280 = INT8_MIN;
	int64_t t47 = 45209635738992988LL;

	t47 = ((x277&x278)*(x279-x280));

	if (t47 != -620LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x281 = 6;
	static int16_t x282 = INT16_MIN;
	static int16_t x283 = 0;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t48 = -25561061;

	t48 = ((x281&x282)*(x283-x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x285 = -16;
	int32_t x286 = 31;
	int32_t x287 = 3;
	volatile int64_t x288 = 4785546168710LL;
	volatile int64_t t49 = -239870324829510309LL;

	t49 = ((x285&x286)*(x287-x288));

	if (t49 != -76568738699312LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x289 = INT16_MIN;
	int8_t x291 = 15;
	uint32_t x292 = 1339118380U;
	volatile uint32_t t50 = 1642U;

	t50 = ((x289&x290)*(x291-x292));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x293 = UINT32_MAX;
	uint32_t x294 = UINT32_MAX;
	uint32_t x296 = 1U;
	uint32_t t51 = 1982U;

	t51 = ((x293&x294)*(x295-x296));

	if (t51 != 4294967269U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x297 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	static uint16_t x300 = 189U;

	t52 = ((x297&x298)*(x299-x300));

	if (t52 != 204483505236480LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x302 = 128618U;
	uint16_t x303 = 2988U;
	int64_t t53 = -55292616233463LL;

	t53 = ((x301&x302)*(x303-x304));

	if (t53 != 381738224LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = -3794615294LL;
	uint64_t x308 = 122541594414474311LLU;
	volatile uint64_t t54 = 1199LLU;

	t54 = ((x305&x306)*(x307-x308));

	if (t54 != 1494684084164090482LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = INT16_MAX;
	volatile int32_t x320 = -1;
	int32_t t55 = -1955844;

	t55 = ((x317&x318)*(x319-x320));

	if (t55 != 498925568) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x321 = 8935U;
	volatile uint32_t t56 = 1929843U;

	t56 = ((x321&x322)*(x323-x324));

	if (t56 != 4002277551U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x329 = 6229477U;
	uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	uint64_t t57 = 1407907800LLU;

	t57 = ((x329&x330)*(x331-x332));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = INT16_MAX;
	static int64_t x334 = -6831892LL;
	static volatile uint32_t x335 = 12230946U;
	uint8_t x336 = 15U;
	int64_t t58 = -856717671LL;

	t58 = ((x333&x334)*(x335-x336));

	if (t58 != 203278073220LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x337 = 15U;
	uint32_t x339 = UINT32_MAX;
	volatile uint32_t t59 = 1309935U;

	t59 = ((x337&x338)*(x339-x340));

	if (t59 != 4294967272U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	int16_t x342 = -27;
	int8_t x344 = -1;
	static volatile int32_t t60 = 93243;

	t60 = ((x341&x342)*(x343-x344));

	if (t60 != 229) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x349 = 17LLU;
	uint16_t x350 = UINT16_MAX;
	static uint64_t x351 = 680694896LLU;
	int64_t x352 = 590714LL;

	t61 = ((x349&x350)*(x351-x352));

	if (t61 != 11561771094LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x354 = 5797746049206932LLU;
	static uint8_t x355 = 17U;
	int8_t x356 = -1;

	t62 = ((x353&x354)*(x355-x356));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x360 = -237930507LL;
	volatile int64_t t63 = -57447809103960LL;

	t63 = ((x357&x358)*(x359-x360));

	if (t63 != -4532897802LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x362 = 9113;
	volatile uint16_t x363 = 2U;
	int32_t x364 = 40487687;

	t64 = ((x361&x362)*(x363-x364));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x365 = INT32_MIN;
	static uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	uint64_t t65 = 1169LLU;

	t65 = ((x365&x366)*(x367-x368));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x371 = 1U;
	volatile int16_t x372 = -1;
	static int32_t t66 = 1;

	t66 = ((x369&x370)*(x371-x372));

	if (t66 != 13312) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x373 = 12U;
	int32_t x375 = 0;
	volatile int16_t x376 = -1;

	t67 = ((x373&x374)*(x375-x376));

	if (t67 != 4U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x377 = INT64_MIN;
	uint8_t x378 = 4U;
	int64_t x380 = -1916958317891684017LL;
	volatile int64_t t68 = -250LL;

	t68 = ((x377&x378)*(x379-x380));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = -1;
	int64_t x384 = 3015LL;
	static volatile int64_t t69 = -32745LL;

	t69 = ((x381&x382)*(x383-x384));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	int16_t x388 = -154;
	int64_t t70 = 9927LL;

	t70 = ((x385&x386)*(x387-x388));

	if (t70 != -330712481792LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x389 = 420U;
	uint32_t x390 = UINT32_MAX;
	volatile uint32_t t71 = 2U;

	t71 = ((x389&x390)*(x391-x392));

	if (t71 != 160860U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = -1;
	static int8_t x394 = 1;
	int8_t x395 = -1;
	int32_t t72 = 728191;

	t72 = ((x393&x394)*(x395-x396));

	if (t72 != -26) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = INT8_MIN;
	static int16_t x398 = INT16_MIN;
	int16_t x400 = -1;
	int32_t t73 = INT32_MIN;

	t73 = ((x397&x398)*(x399-x400));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x401 = INT64_MAX;
	volatile uint32_t x402 = 13U;
	static volatile int64_t x403 = -176971166LL;
	int16_t x404 = INT16_MAX;
	volatile int64_t t74 = 1LL;

	t74 = ((x401&x402)*(x403-x404));

	if (t74 != -2301051129LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x405 = UINT16_MAX;
	uint64_t x407 = 2345957780718LLU;
	int8_t x408 = INT8_MAX;
	uint64_t t75 = 954914150078LLU;

	t75 = ((x405&x406)*(x407-x408));

	if (t75 != 598219234050705LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x413 = INT64_MIN;
	int64_t x414 = 1LL;
	int16_t x415 = -1;
	uint16_t x416 = 2U;
	volatile int64_t t76 = -18689507851120LL;

	t76 = ((x413&x414)*(x415-x416));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x417 = 1U;
	uint32_t x418 = 1U;
	static uint16_t x419 = 14936U;
	uint16_t x420 = 15U;
	volatile uint32_t t77 = 496615U;

	t77 = ((x417&x418)*(x419-x420));

	if (t77 != 14921U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x426 = INT8_MAX;
	uint8_t x427 = 0U;
	int8_t x428 = INT8_MAX;

	t78 = ((x425&x426)*(x427-x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = 12;
	int64_t x431 = -9566597LL;
	volatile int64_t t79 = 140LL;

	t79 = ((x429&x430)*(x431-x432));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	int64_t x435 = -1LL;
	static volatile int64_t t80 = 386945865912293LL;

	t80 = ((x433&x434)*(x435-x436));

	if (t80 != 140732119678976LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = 1571;
	int8_t x442 = -1;
	uint64_t x443 = 68684905802166LLU;
	volatile int64_t x444 = INT64_MIN;
	uint64_t t81 = 10915281630LLU;

	t81 = ((x441&x442)*(x443-x444));

	if (t81 != 9331276023869978594LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x445 = -743265013579159787LL;
	uint16_t x446 = 36U;
	int16_t x447 = INT16_MIN;
	int64_t t82 = 15418031LL;

	t82 = ((x445&x446)*(x447-x448));

	if (t82 != -131072LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x449 = 16282U;
	uint8_t x450 = 0U;
	int64_t x451 = -1LL;

	t83 = ((x449&x450)*(x451-x452));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x453 = INT16_MIN;
	uint8_t x454 = 1U;
	volatile uint32_t x455 = 217U;
	int16_t x456 = INT16_MIN;
	volatile uint32_t t84 = 440777686U;

	t84 = ((x453&x454)*(x455-x456));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x457 = INT32_MAX;
	uint32_t x459 = 3104949U;
	volatile uint32_t t85 = 1U;

	t85 = ((x457&x458)*(x459-x460));

	if (t85 != 366383982U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x462 = UINT32_MAX;
	uint16_t x463 = 7995U;
	int32_t x464 = -1;

	t86 = ((x461&x462)*(x463-x464));

	if (t86 != 213645124U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x465 = INT64_MAX;
	uint64_t x466 = 5636006914LLU;
	volatile int32_t x467 = INT32_MAX;
	volatile int8_t x468 = 12;
	static volatile uint64_t t87 = 480980636772616066LLU;

	t87 = ((x465&x466)*(x467-x468));

	if (t87 != 12103232614561852390LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x473 = INT8_MIN;
	static volatile uint8_t x474 = 2U;
	int16_t x475 = 0;
	volatile int8_t x476 = -1;
	static volatile int32_t t88 = -245551;

	t88 = ((x473&x474)*(x475-x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x477 = 246U;
	static int32_t x478 = -8260551;
	volatile int64_t x480 = 37924LL;
	volatile uint64_t t89 = 1556303008LLU;

	t89 = ((x477&x478)*(x479-x480));

	if (t89 != 251006571984LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x481 = INT16_MAX;
	static volatile int32_t x482 = -8;
	int32_t x483 = INT32_MIN;
	static uint32_t x484 = 1569U;
	static uint32_t t90 = 36330237U;

	t90 = ((x481&x482)*(x483-x484));

	if (t90 != 4243566856U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x486 = -13160210;
	static int32_t x487 = INT32_MIN;
	int32_t x488 = INT32_MIN;
	uint64_t t91 = 9069LLU;

	t91 = ((x485&x486)*(x487-x488));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x489 = -1;
	static uint64_t x490 = UINT64_MAX;
	uint64_t x491 = 25226515003235498LLU;

	t92 = ((x489&x490)*(x491-x492));

	if (t92 != 18421517558706316133LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x493 = -1;
	int64_t x494 = -172LL;
	static volatile int16_t x496 = INT16_MAX;

	t93 = ((x493&x494)*(x495-x496));

	if (t93 != -738728741224LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x509 = INT8_MIN;
	int64_t x510 = 6784784758495LL;
	static uint8_t x511 = 0U;
	int8_t x512 = -23;
	int64_t t94 = 33578818646LL;

	t94 = ((x509&x510)*(x511-x512));

	if (t94 != 156050049443200LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x513 = -74;
	int8_t x514 = -1;
	int32_t x515 = 9455983;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t95 = 14774;

	t95 = ((x513&x514)*(x515-x516));

	if (t95 != -699752214) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x517 = 991U;
	volatile int16_t x518 = -929;
	int8_t x519 = INT8_MIN;

	t96 = ((x517&x518)*(x519-x520));

	if (t96 != 3100800) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x524 = 4U;
	volatile int32_t t97 = 167001;

	t97 = ((x521&x522)*(x523-x524));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x525 = INT16_MIN;
	int64_t x526 = -1LL;
	uint16_t x527 = UINT16_MAX;
	int8_t x528 = -15;

	t98 = ((x525&x526)*(x527-x528));

	if (t98 != -2147942400LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x533 = UINT8_MAX;
	int64_t x534 = -1LL;
	int8_t x536 = 7;

	t99 = ((x533&x534)*(x535-x536));

	if (t99 != -2040LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

