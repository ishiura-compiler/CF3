#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = UINT64_MAX;
int16_t x11 = INT16_MAX;
volatile int32_t t2 = 4544508;
int32_t x30 = INT32_MIN;
uint32_t x31 = 13U;
int64_t x35 = INT64_MIN;
int64_t x37 = INT64_MIN;
uint32_t x43 = 146053U;
volatile uint32_t t9 = 1U;
volatile uint64_t t10 = 172130324598194LLU;
int8_t x51 = 1;
int64_t t13 = -794771706801434915LL;
uint16_t x66 = 19U;
int32_t x70 = -730208;
static uint32_t x88 = 0U;
static uint32_t x92 = UINT32_MAX;
volatile int8_t x94 = INT8_MAX;
uint64_t x95 = 166646865915LLU;
volatile int32_t t21 = 997613681;
volatile int32_t x107 = INT32_MIN;
static uint64_t x108 = 2178LLU;
int32_t x112 = INT32_MIN;
int32_t x114 = INT32_MIN;
uint64_t x116 = UINT64_MAX;
int16_t x117 = -23;
uint8_t x120 = UINT8_MAX;
int64_t t27 = 34354LL;
static uint16_t x134 = UINT16_MAX;
int32_t t30 = 7567012;
static int16_t x141 = INT16_MIN;
uint8_t x155 = UINT8_MAX;
static volatile int64_t t35 = 342665LL;
int16_t x182 = INT16_MIN;
int64_t x185 = -134621059LL;
uint64_t t40 = 32121337944LLU;
static uint16_t x189 = UINT16_MAX;
int32_t x194 = 1809492;
int64_t x195 = INT64_MAX;
volatile uint8_t x196 = UINT8_MAX;
int16_t x199 = -39;
int64_t x212 = 3LL;
uint16_t x213 = 2931U;
int16_t x216 = -1;
uint64_t t46 = UINT64_MAX;
int64_t x217 = INT64_MAX;
volatile int64_t t47 = 165551959LL;
int32_t x221 = INT32_MAX;
uint64_t x229 = 2011616718675113076LLU;
volatile uint64_t t49 = 22979734153LLU;
static uint8_t x243 = UINT8_MAX;
static uint32_t t52 = 22U;
volatile int32_t x245 = INT32_MAX;
static uint16_t x247 = 20372U;
uint16_t x261 = UINT16_MAX;
uint32_t x262 = 58385U;
static uint32_t x269 = 3952U;
int64_t x270 = 1LL;
static int32_t x271 = 2206354;
uint64_t x273 = 0LLU;
volatile uint64_t t59 = 124LLU;
int64_t x281 = 10078184817LL;
int8_t x282 = 8;
static int64_t t64 = 965863844713324LL;
static volatile int16_t x305 = INT16_MIN;
uint64_t x307 = 88801479LLU;
volatile uint64_t t66 = 313261LLU;
uint8_t x314 = UINT8_MAX;
uint64_t x316 = UINT64_MAX;
static int16_t x319 = 7067;
static int64_t t69 = 52473890LL;
int16_t x326 = INT16_MIN;
static uint64_t x327 = 349928LLU;
volatile uint8_t x335 = UINT8_MAX;
int64_t x338 = -1LL;
uint32_t x339 = 2904U;
int16_t x351 = 25;
uint32_t x352 = 3U;
volatile int8_t x354 = -1;
volatile int8_t x357 = INT8_MIN;
uint16_t x360 = 77U;
int32_t x362 = INT32_MIN;
int16_t x363 = INT16_MIN;
static uint8_t x371 = 1U;
int8_t x374 = -2;
uint16_t x375 = 11U;
static int32_t t83 = -93;
int8_t x379 = INT8_MIN;
uint8_t x382 = UINT8_MAX;
static int32_t t87 = 509;
int8_t x400 = INT8_MIN;
uint64_t t89 = 34495666603LLU;
static volatile uint64_t t90 = 57693LLU;
int64_t x413 = 0LL;
static int16_t x414 = 1888;
int8_t x417 = INT8_MAX;
static volatile uint32_t x418 = UINT32_MAX;
static volatile uint8_t x421 = 25U;
static uint8_t x426 = UINT8_MAX;
int16_t x429 = -1;
volatile int64_t x430 = 6688LL;
int64_t x432 = INT64_MAX;
uint64_t x433 = UINT64_MAX;
int16_t x446 = INT16_MIN;
int64_t t99 = -507679453LL;


void f0(void) {
	static uint32_t x1 = 181718U;
	int64_t x2 = -1LL;
	volatile int32_t x3 = -125691476;
	static int64_t x4 = 1979328LL;
	volatile int64_t t0 = 10126495493LL;

	t0 = (x1|(x2^(x3-x4)));

	if (t0 != 127852503LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile uint8_t x6 = 2U;
	static volatile int32_t x7 = -1;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5|(x6^(x7-x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	uint16_t x10 = UINT16_MAX;
	volatile uint8_t x12 = UINT8_MAX;

	t2 = (x9|(x10^(x11-x12)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int64_t x14 = -1LL;
	int32_t x15 = 236;
	static int8_t x16 = INT8_MIN;
	volatile int64_t t3 = -24042551186394484LL;

	t3 = (x13|(x14^(x15-x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	static int16_t x22 = INT16_MAX;
	int32_t x23 = 341795775;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 3LL;

	t4 = (x21|(x22^(x23-x24)));

	if (t4 != 341777535LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	int8_t x26 = 63;
	int8_t x27 = INT8_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -766785888;

	t5 = (x25|(x26^(x27-x28)));

	if (t5 != -65281) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 14U;
	uint16_t x32 = 4U;
	volatile uint32_t t6 = 451U;

	t6 = (x29|(x30^(x31-x32)));

	if (t6 != 2147483663U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	int32_t x34 = -1;
	int64_t x36 = -1LL;
	volatile int64_t t7 = 9684951884LL;

	t7 = (x33|(x34^(x35-x36)));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x38 = 19U;
	int16_t x39 = INT16_MIN;
	volatile uint32_t x40 = 3959512U;
	int64_t t8 = 179574LL;

	t8 = (x37|(x38^(x39-x40)));

	if (t8 != -9223372032563800773LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	static uint8_t x42 = 115U;
	static int16_t x44 = INT16_MAX;

	t9 = (x41|(x42^(x43-x44)));

	if (t9 != 4294949621U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 28360746LL;
	uint64_t x46 = 6LLU;
	static int8_t x47 = -9;
	uint64_t x48 = 5LLU;

	t10 = (x45|(x46^(x47-x48)));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 2682U;
	static uint64_t x50 = UINT64_MAX;
	volatile int32_t x52 = INT32_MAX;
	static uint64_t t11 = 8734039219742814LLU;

	t11 = (x49|(x50^(x51-x52)));

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 124LL;
	uint8_t x58 = 1U;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = 0;
	volatile uint64_t t12 = 16746688LLU;

	t12 = (x57|(x58^(x59-x60)));

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = -1LL;
	int64_t x62 = INT64_MIN;
	int16_t x63 = -863;
	int32_t x64 = 2019;

	t13 = (x61|(x62^(x63-x64)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = 1;
	int8_t x67 = 2;
	int64_t x68 = INT64_MAX;
	static int64_t t14 = 2137344LL;

	t14 = (x65|(x66^(x67-x68)));

	if (t14 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int64_t x71 = -555020202977488LL;
	static int64_t x72 = -1LL;
	static volatile int64_t t15 = -50920744820981317LL;

	t15 = (x69|(x70^(x71-x72)));

	if (t15 != -9222817016652395375LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = -1;
	static uint32_t x74 = 26458U;
	int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;
	volatile int64_t t16 = -7094LL;

	t16 = (x73|(x74^(x75-x76)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 3U;
	int8_t x82 = INT8_MIN;
	volatile uint32_t x83 = UINT32_MAX;
	static uint8_t x84 = 1U;
	volatile uint32_t t17 = 1683464U;

	t17 = (x81|(x82^(x83-x84)));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -8;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	static volatile uint32_t t18 = 9552008U;

	t18 = (x85|(x86^(x87-x88)));

	if (t18 != 4294967288U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 17U;
	static int64_t x90 = INT64_MAX;
	uint8_t x91 = 3U;
	static int64_t t19 = 4577LL;

	t19 = (x89|(x90^(x91-x92)));

	if (t19 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 699;
	static uint32_t x96 = 0U;
	static volatile uint64_t t20 = 1821348075150770668LLU;

	t20 = (x93|(x94^(x95-x96)));

	if (t20 != 166646865855LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = -1;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;

	t21 = (x97|(x98^(x99-x100)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = 32082625U;
	uint32_t x102 = 834972U;
	int8_t x103 = 15;
	uint64_t x104 = 40886444323LLU;
	uint64_t t22 = 108LLU;

	t22 = (x101|(x102^(x103-x104)));

	if (t22 != 18446744032840248305LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MAX;
	int64_t x106 = INT64_MAX;
	uint64_t t23 = 37857545LLU;

	t23 = (x105|(x106^(x107-x108)));

	if (t23 != 9223372039002261759LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	int64_t t24 = 275984209865434LL;

	t24 = (x109|(x110^(x111-x112)));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 35912513718431969LLU;
	int32_t x115 = -1;
	uint64_t t25 = 89340492LLU;

	t25 = (x113|(x114^(x115-x116)));

	if (t25 != 18446744072353591521LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = -1;
	int16_t x119 = -2;
	int32_t t26 = 244501;

	t26 = (x117|(x118^(x119-x120)));

	if (t26 != -23) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -1LL;
	int64_t x123 = -29LL;
	static int32_t x124 = INT32_MAX;

	t27 = (x121|(x122^(x123-x124)));

	if (t27 != 2147483775LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	int8_t x128 = 1;
	static int32_t t28 = INT32_MAX;

	t28 = (x125|(x126^(x127-x128)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x129 = 68;
	int8_t x130 = INT8_MIN;
	static int16_t x131 = -3;
	int8_t x132 = INT8_MIN;
	int32_t t29 = -33766857;

	t29 = (x129|(x130^(x131-x132)));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;

	t30 = (x133|(x134^(x135-x136)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MIN;
	static volatile int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = 30864;

	t31 = (x141|(x142^(x143-x144)));

	if (t31 != -32641) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 29522;
	static int32_t x146 = INT32_MIN;
	volatile uint8_t x147 = 40U;
	int16_t x148 = INT16_MAX;
	volatile int32_t t32 = -254;

	t32 = (x145|(x146^(x147-x148)));

	if (t32 != 2147480443) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = 3;
	uint32_t x151 = 484U;
	static int64_t x152 = -1013LL;
	static int64_t t33 = 20712LL;

	t33 = (x149|(x150^(x151-x152)));

	if (t33 != -38LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x153 = -1LL;
	int64_t x154 = -2678024176343728LL;
	static volatile int8_t x156 = INT8_MAX;
	volatile int64_t t34 = 36985096483LL;

	t34 = (x153|(x154^(x155-x156)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;

	t35 = (x157|(x158^(x159-x160)));

	if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 2771533123726LL;
	int64_t x162 = 16427758037444LL;
	uint32_t x163 = 34U;
	volatile int8_t x164 = -1;
	volatile int64_t t36 = -3LL;

	t36 = (x161|(x162^(x163-x164)));

	if (t36 != 16449435335151LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x169 = INT8_MIN;
	uint32_t x170 = UINT32_MAX;
	static uint32_t x171 = 28713133U;
	uint16_t x172 = UINT16_MAX;
	static volatile uint32_t t37 = 468U;

	t37 = (x169|(x170^(x171-x172)));

	if (t37 != 4294967249U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x173 = 24LLU;
	uint64_t x174 = 157LLU;
	int16_t x175 = 5;
	static uint64_t x176 = 3061867LLU;
	uint64_t t38 = 1076212262565621770LLU;

	t38 = (x173|(x174^(x175-x176)));

	if (t38 != 18446744073706489631LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = INT64_MAX;
	int8_t x183 = 1;
	int8_t x184 = -1;
	int64_t t39 = -8991185499939LL;

	t39 = (x181|(x182^(x183-x184)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x186 = 13U;
	uint64_t x187 = 16448389LLU;
	static int32_t x188 = INT32_MIN;

	t40 = (x185|(x186^(x187-x188)));

	if (t40 != 18446744073575070717LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MIN;
	uint32_t x192 = 0U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x189|(x190^(x191-x192)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 24U;
	volatile int64_t t42 = 44917037988LL;

	t42 = (x193|(x194^(x195-x196)));

	if (t42 != 9223372036852966236LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 15U;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t43 = 160266343LLU;

	t43 = (x197|(x198^(x199-x200)));

	if (t43 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MIN;
	static int32_t x206 = INT32_MIN;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 15U;
	int32_t t44 = -723;

	t44 = (x205|(x206^(x207-x208)));

	if (t44 != -2147418128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	volatile int64_t t45 = 5424153447LL;

	t45 = (x209|(x210^(x211-x212)));

	if (t45 != -32638LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x214 = -1;
	volatile uint64_t x215 = UINT64_MAX;

	t46 = (x213|(x214^(x215-x216)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x218 = -1;
	int8_t x219 = INT8_MAX;
	int16_t x220 = -3;

	t47 = (x217|(x218^(x219-x220)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x222 = -24631;
	volatile uint32_t x223 = 964354U;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x221|(x222^(x223-x224)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x230 = 7U;
	int16_t x231 = 1562;
	volatile uint32_t x232 = 208940187U;

	t49 = (x229|(x230^(x231-x232)));

	if (t49 != 2011616721141497212LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -1LL;
	volatile uint16_t x234 = 0U;
	volatile int32_t x235 = INT32_MIN;
	uint32_t x236 = 100259U;
	volatile int64_t t50 = -2LL;

	t50 = (x233|(x234^(x235-x236)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -1;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x237|(x238^(x239-x240)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MAX;
	static uint32_t x242 = 3606U;
	volatile int16_t x244 = INT16_MIN;

	t52 = (x241|(x242^(x243-x244)));

	if (t52 != 36607U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x246 = 641125620U;
	static volatile uint8_t x248 = 0U;
	volatile uint32_t t53 = 1182626U;

	t53 = (x245|(x246^(x247-x248)));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x249 = 11912U;
	volatile uint32_t x250 = 42449284U;
	int16_t x251 = INT16_MAX;
	int8_t x252 = 60;
	volatile uint32_t t54 = 0U;

	t54 = (x249|(x250^(x251-x252)));

	if (t54 != 42462927U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x253 = -4;
	uint8_t x254 = UINT8_MAX;
	static uint16_t x255 = 9240U;
	int32_t x256 = 397;
	static int32_t t55 = 169988;

	t55 = (x253|(x254^(x255-x256)));

	if (t55 != -4) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 28U;
	static volatile uint32_t x259 = 13341464U;
	uint32_t x260 = UINT32_MAX;
	uint32_t t56 = 3971249U;

	t56 = (x257|(x258^(x259-x260)));

	if (t56 != 4294967173U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x263 = 4335698514996557LLU;
	uint16_t x264 = 8089U;
	static uint64_t t57 = 26175391LLU;

	t57 = (x261|(x262^(x263-x264)));

	if (t57 != 4335698515001343LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x272 = 197342U;
	volatile int64_t t58 = 230944601924LL;

	t58 = (x269|(x270^(x271-x272)));

	if (t58 != 2011125LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 731038LLU;
	static volatile int8_t x276 = INT8_MIN;

	t59 = (x273|(x274^(x275-x276)));

	if (t59 != 18446744073708820449LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x283 = 2664636918178LL;
	int16_t x284 = INT16_MIN;
	int64_t t60 = 98LL;

	t60 = (x281|(x282^(x283-x284)));

	if (t60 != 2673495371259LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = UINT32_MAX;
	int64_t x286 = 1828752LL;
	int64_t x287 = -1LL;
	uint8_t x288 = 54U;
	int64_t t61 = -146913507112594LL;

	t61 = (x285|(x286^(x287-x288)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -1;
	static int64_t x290 = 12373341321058496LL;
	static int16_t x291 = INT16_MAX;
	int8_t x292 = -1;
	volatile int64_t t62 = 49748305310LL;

	t62 = (x289|(x290^(x291-x292)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x293 = -18757078027LL;
	volatile int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x293|(x294^(x295-x296)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x297 = INT8_MAX;
	static int64_t x298 = INT64_MIN;
	volatile int16_t x299 = INT16_MAX;
	int64_t x300 = INT64_MAX;

	t64 = (x297|(x298^(x299-x300)));

	if (t64 != 32895LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x301 = 813U;
	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MAX;
	static volatile int16_t x304 = INT16_MAX;
	uint32_t t65 = 46769198U;

	t65 = (x301|(x302^(x303-x304)));

	if (t65 != 32767U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = 0LLU;
	volatile int8_t x308 = INT8_MAX;

	t66 = (x305|(x306^(x307-x308)));

	if (t66 != 18446744073709518920LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x309 = INT8_MAX;
	uint8_t x310 = 48U;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -1;
	int32_t t67 = -2;

	t67 = (x309|(x310^(x311-x312)));

	if (t67 != -32641) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = 16712239440LL;
	static uint64_t x315 = 50150LLU;
	volatile uint64_t t68 = 2LLU;

	t68 = (x313|(x314^(x315-x316)));

	if (t68 != 16712256344LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = 1;
	int64_t x318 = INT64_MIN;
	static int8_t x320 = INT8_MIN;

	t69 = (x317|(x318^(x319-x320)));

	if (t69 != -9223372036854768613LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint32_t x322 = 797U;
	int64_t x323 = 64LL;
	uint16_t x324 = 19311U;
	int64_t t70 = -6526280711008752LL;

	t70 = (x321|(x322^(x323-x324)));

	if (t70 != -18484LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -3642439658123187986LL;
	volatile int16_t x328 = -25;
	uint64_t t71 = 6764625LLU;

	t71 = (x325|(x326^(x327-x328)));

	if (t71 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x329 = 4;
	volatile int16_t x330 = INT16_MIN;
	volatile uint64_t x331 = 131565140LLU;
	uint32_t x332 = 9235294U;
	static volatile uint64_t t72 = 52594312LLU;

	t72 = (x329|(x330^(x331-x332)));

	if (t72 != 18446744073587202806LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = 6;
	static volatile int16_t x336 = -1;
	static volatile int32_t t73 = 930125;

	t73 = (x333|(x334^(x335-x336)));

	if (t73 != -122) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = 381;
	uint8_t x340 = UINT8_MAX;
	int64_t t74 = 2288342490290LL;

	t74 = (x337|(x338^(x339-x340)));

	if (t74 != -2561LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = -14753782;
	uint64_t x342 = 2357728621048LLU;
	uint16_t x343 = 3862U;
	int64_t x344 = INT64_MAX;
	volatile uint64_t t75 = 111109829123LLU;

	t75 = (x341|(x342^(x343-x344)));

	if (t75 != 18446744073703259887LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	uint8_t x346 = 72U;
	volatile int32_t x347 = -1;
	int64_t x348 = -172840869LL;
	volatile int64_t t76 = 1317018531852993199LL;

	t76 = (x345|(x346^(x347-x348)));

	if (t76 != 172840959LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x349 = -5850348123LL;
	static int64_t x350 = INT64_MIN;
	volatile int64_t t77 = 13065LL;

	t77 = (x349|(x350^(x351-x352)));

	if (t77 != -5850348105LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x353 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x353|(x354^(x355-x356)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x358 = INT16_MAX;
	static int8_t x359 = -21;
	int32_t t79 = 877;

	t79 = (x357|(x358^(x359-x360)));

	if (t79 != -31) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x361 = 3059U;
	volatile int16_t x364 = -1;
	volatile int32_t t80 = -503564;

	t80 = (x361|(x362^(x363-x364)));

	if (t80 != 2147453939) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -1;
	volatile uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 3U;
	int16_t x368 = -1;
	volatile int32_t t81 = 2138987;

	t81 = (x365|(x366^(x367-x368)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = 2490;
	uint8_t x370 = 2U;
	int8_t x372 = INT8_MIN;
	int32_t t82 = 1;

	t82 = (x369|(x370^(x371-x372)));

	if (t82 != 2491) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = 0;
	uint16_t x376 = 24252U;

	t83 = (x373|(x374^(x375-x376)));

	if (t83 != 24241) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x377 = -1;
	uint64_t x378 = 398LLU;
	int32_t x380 = -1;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x377|(x378^(x379-x380)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x381 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile uint64_t x384 = 322837427LLU;
	uint64_t t85 = 10423LLU;

	t85 = (x381|(x382^(x383-x384)));

	if (t85 != 18446744073386714367LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	int64_t t86 = 6754337910899LL;

	t86 = (x389|(x390^(x391-x392)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x394 = 17591U;
	static int32_t x395 = -445;
	int32_t x396 = 923;

	t87 = (x393|(x394^(x395-x396)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x397 = 843621778;
	volatile uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	uint64_t t88 = 32803529231LLU;

	t88 = (x397|(x398^(x399-x400)));

	if (t88 != 18446744073709485970LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MIN;
	uint64_t x402 = 2LLU;
	int64_t x403 = -1LL;
	uint64_t x404 = 528975607603014148LLU;

	t89 = (x401|(x402^(x403-x404)));

	if (t89 != 17917768466106537465LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = -373;
	static uint64_t x410 = UINT64_MAX;
	uint32_t x411 = 114266655U;
	int8_t x412 = INT8_MIN;

	t90 = (x409|(x410^(x411-x412)));

	if (t90 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x415 = 30U;
	int16_t x416 = INT16_MIN;
	static volatile int64_t t91 = 4924658257478LL;

	t91 = (x413|(x414^(x415-x416)));

	if (t91 != 34686LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x419 = 28;
	volatile int16_t x420 = INT16_MIN;
	volatile uint32_t t92 = 11801U;

	t92 = (x417|(x418^(x419-x420)));

	if (t92 != 4294934527U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x422 = INT32_MIN;
	static int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	static volatile uint32_t t93 = 1734596891U;

	t93 = (x421|(x422^(x423-x424)));

	if (t93 != 2147483545U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x425 = 1U;
	volatile int8_t x427 = INT8_MIN;
	int8_t x428 = 9;
	int32_t t94 = -42770076;

	t94 = (x425|(x426^(x427-x428)));

	if (t94 != -119) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x431 = 1U;
	static volatile int64_t t95 = 27156228LL;

	t95 = (x429|(x430^(x431-x432)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x434 = 3661U;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x433|(x434^(x435-x436)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 1U;
	int32_t x438 = INT32_MIN;
	static int16_t x439 = -1;
	volatile int8_t x440 = INT8_MIN;
	int32_t t97 = -1928;

	t97 = (x437|(x438^(x439-x440)));

	if (t97 != -2147483521) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x441 = 27006U;
	int8_t x442 = -58;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = UINT16_MAX;
	static uint64_t t98 = 1076LLU;

	t98 = (x441|(x442^(x443-x444)));

	if (t98 != 65534LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x445 = -1;
	int64_t x447 = 1572629LL;
	static int8_t x448 = -1;

	t99 = (x445|(x446^(x447-x448)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

