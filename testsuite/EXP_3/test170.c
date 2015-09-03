#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x19 = -1;
int32_t x31 = -1;
static int8_t x41 = INT8_MIN;
volatile uint32_t x42 = 0U;
int8_t x43 = INT8_MIN;
volatile uint32_t t6 = 7075U;
uint8_t x47 = 5U;
static int32_t t7 = 1;
uint32_t x59 = 0U;
volatile uint64_t x60 = 24LLU;
uint8_t x69 = 69U;
int16_t x74 = -1;
uint8_t x83 = 87U;
volatile uint8_t x90 = 25U;
int8_t x115 = -1;
volatile uint32_t t19 = 165827U;
int8_t x125 = INT8_MAX;
static int8_t x137 = INT8_MAX;
uint16_t x138 = 2U;
static volatile uint32_t x139 = 50466691U;
uint16_t x140 = 3503U;
uint32_t t23 = 116223265U;
int16_t x149 = -1;
uint8_t x152 = 2U;
int32_t x155 = INT32_MIN;
volatile int64_t t25 = 1LL;
volatile int16_t x158 = INT16_MIN;
int64_t x178 = -8548625LL;
uint16_t x182 = UINT16_MAX;
volatile uint64_t t31 = 8710488601613551278LLU;
uint32_t x197 = UINT32_MAX;
uint32_t x199 = UINT32_MAX;
volatile uint32_t t34 = 208062U;
uint16_t x208 = 119U;
uint64_t t36 = 113841109768715LLU;
volatile int64_t t37 = 4LL;
int32_t x227 = -1;
int32_t x237 = INT32_MAX;
int8_t x238 = -1;
int16_t x240 = INT16_MAX;
volatile int8_t x248 = INT8_MIN;
volatile uint32_t t44 = 586875U;
volatile uint8_t x254 = 2U;
static uint16_t x262 = UINT16_MAX;
uint32_t x263 = UINT32_MAX;
volatile uint64_t t47 = 310286053635445540LLU;
uint16_t x282 = UINT16_MAX;
volatile uint32_t x294 = 104U;
volatile uint16_t x298 = 55U;
int32_t t51 = -4782023;
static int8_t x303 = INT8_MIN;
int8_t x306 = INT8_MAX;
uint64_t t54 = 26730844694380LLU;
int8_t x313 = INT8_MIN;
uint8_t x321 = 0U;
int16_t x324 = -4;
int16_t x326 = INT16_MAX;
static volatile uint16_t x333 = UINT16_MAX;
uint32_t x337 = UINT32_MAX;
static int8_t x339 = -12;
volatile uint8_t x345 = UINT8_MAX;
int16_t x346 = INT16_MIN;
int8_t x353 = -23;
uint32_t x365 = 3U;
int8_t x378 = -15;
static int16_t x386 = -75;
static int8_t x387 = INT8_MIN;
uint64_t t70 = 810949488186161LLU;
static volatile int8_t x391 = INT8_MAX;
volatile int64_t t73 = 39775LL;
static uint64_t x402 = 8639939952029616LLU;
int64_t x418 = INT64_MAX;
static uint8_t x423 = 2U;
static int32_t x447 = INT32_MAX;
int32_t x451 = INT32_MAX;
int8_t x455 = INT8_MIN;
volatile uint64_t t83 = 5LLU;
uint8_t x467 = 6U;
static volatile int8_t x480 = -5;
uint32_t t88 = 31U;
int16_t x485 = INT16_MIN;
int32_t x487 = -1;
static uint16_t x489 = UINT16_MAX;
uint16_t x492 = UINT16_MAX;
static int8_t x493 = -1;
static volatile int32_t x494 = 54;
volatile int32_t t92 = 107907;
volatile uint16_t x511 = 8U;
volatile uint64_t t94 = 49032LLU;
uint64_t x533 = 2805866926697LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int64_t x2 = INT64_MIN;
	static int16_t x3 = INT16_MIN;
	uint16_t x4 = 183U;
	static int64_t t0 = -167LL;

	t0 = ((x1+x2)+(x3-x4));

	if (t0 != -9223372036854743224LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 3U;
	static volatile int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	uint16_t x12 = 2U;
	int32_t t1 = -77;

	t1 = ((x9+x10)+(x11-x12));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x17+x18)+(x19-x20));

	if (t2 != -385) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x21 = 33204681676LLU;
	int8_t x22 = -1;
	int16_t x23 = -1;
	volatile int32_t x24 = -45;
	uint64_t t3 = 504008826801LLU;

	t3 = ((x21+x22)+(x23-x24));

	if (t3 != 33204681719LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = 206LL;
	volatile int64_t x30 = -2790LL;
	uint16_t x32 = 295U;
	int64_t t4 = -7124949LL;

	t4 = ((x29+x30)+(x31-x32));

	if (t4 != -2880LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	int8_t x34 = -20;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile uint32_t t5 = 43533738U;

	t5 = ((x33+x34)+(x35-x36));

	if (t5 != 32619U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x44 = INT32_MIN;

	t6 = ((x41+x42)+(x43-x44));

	if (t6 != 2147483392U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = INT8_MAX;
	static uint16_t x46 = 25529U;
	int16_t x48 = INT16_MIN;

	t7 = ((x45+x46)+(x47-x48));

	if (t7 != 58429) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	static int8_t x51 = INT8_MIN;
	uint16_t x52 = 1545U;
	volatile uint32_t t8 = 638U;

	t8 = ((x49+x50)+(x51-x52));

	if (t8 != 2147481974U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x57 = -28754400LL;
	static int8_t x58 = INT8_MAX;
	volatile uint64_t t9 = 31064LLU;

	t9 = ((x57+x58)+(x59-x60));

	if (t9 != 18446744073680797319LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = INT32_MIN;
	static uint64_t x62 = 1328670749488LLU;
	int16_t x63 = -1;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t10 = 57678LLU;

	t10 = ((x61+x62)+(x63-x64));

	if (t10 != 1326523298607LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = 460U;
	volatile uint32_t t11 = 2028854U;

	t11 = ((x69+x70)+(x71-x72));

	if (t11 != 4294934136U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	int8_t x75 = INT8_MIN;
	int32_t x76 = 11101;
	volatile int32_t t12 = -122622417;

	t12 = ((x73+x74)+(x75-x76));

	if (t12 != -11231) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MAX;
	static int64_t x78 = -1LL;
	uint8_t x79 = 3U;
	volatile int16_t x80 = INT16_MIN;
	volatile int64_t t13 = -4429LL;

	t13 = ((x77+x78)+(x79-x80));

	if (t13 != 65537LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = 1;
	int16_t x82 = INT16_MIN;
	volatile int64_t x84 = -40954881379LL;
	volatile int64_t t14 = 86752376096517429LL;

	t14 = ((x81+x82)+(x83-x84));

	if (t14 != 40954848699LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 1178175815LLU;
	int16_t x91 = -1;
	uint64_t x92 = 1LLU;
	volatile uint64_t t15 = 135794599820LLU;

	t15 = ((x89+x90)+(x91-x92));

	if (t15 != 1178175838LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 60U;
	static int64_t x94 = -1LL;
	int32_t x95 = INT32_MAX;
	int16_t x96 = INT16_MAX;
	int64_t t16 = -255860235285472116LL;

	t16 = ((x93+x94)+(x95-x96));

	if (t16 != 2147450939LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x101 = 2104U;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 6;
	uint8_t x104 = 69U;
	volatile uint32_t t17 = 14U;

	t17 = ((x101+x102)+(x103-x104));

	if (t17 != 2040U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -15;
	int8_t x106 = 0;
	volatile uint64_t x107 = UINT64_MAX;
	uint64_t x108 = 6620278504516LLU;
	volatile uint64_t t18 = 1035237955019076LLU;

	t18 = ((x105+x106)+(x107-x108));

	if (t18 != 18446737453431047084LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x113 = 116449288U;
	int16_t x114 = 3041;
	int32_t x116 = 176;

	t19 = ((x113+x114)+(x115-x116));

	if (t19 != 116452152U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = 57;
	volatile int32_t t20 = 1;

	t20 = ((x125+x126)+(x127-x128));

	if (t20 != 197) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x133 = -15;
	int64_t x134 = 1186526771071LL;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -1;
	int64_t t21 = -10149LL;

	t21 = ((x133+x134)+(x135-x136));

	if (t21 != 1186526771312LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t t22 = 10U;

	t22 = ((x137+x138)+(x139-x140));

	if (t22 != 50463317U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x145 = INT16_MIN;
	uint16_t x146 = 250U;
	uint32_t x147 = 45711577U;
	int8_t x148 = INT8_MIN;

	t23 = ((x145+x146)+(x147-x148));

	if (t23 != 45679187U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	int32_t t24 = 1515;

	t24 = ((x149+x150)+(x151-x152));

	if (t24 != -259) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = -1LL;
	int8_t x156 = INT8_MIN;

	t25 = ((x153+x154)+(x155-x156));

	if (t25 != -2147417986LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x157 = INT8_MIN;
	uint64_t x159 = 49726795LLU;
	static int8_t x160 = -3;
	static volatile uint64_t t26 = 25992LLU;

	t26 = ((x157+x158)+(x159-x160));

	if (t26 != 49693902LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = 0;
	uint16_t x167 = 5020U;
	static int32_t x168 = -752220;
	volatile int64_t t27 = 20031LL;

	t27 = ((x165+x166)+(x167-x168));

	if (t27 != -9223372036854018568LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = UINT16_MAX;
	uint16_t x172 = 25447U;
	volatile int64_t t28 = 139LL;

	t28 = ((x169+x170)+(x171-x172));

	if (t28 != -9223372032559768425LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x173 = 36U;
	uint32_t x174 = 210310U;
	volatile int8_t x175 = -1;
	volatile int32_t x176 = -1;
	uint32_t t29 = 22947018U;

	t29 = ((x173+x174)+(x175-x176));

	if (t29 != 210346U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x177 = INT32_MAX;
	uint64_t x179 = 526769828LLU;
	int16_t x180 = -1;
	volatile uint64_t t30 = 65173696350635369LLU;

	t30 = ((x177+x178)+(x179-x180));

	if (t30 != 2665704851LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x181 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 2103U;

	t31 = ((x181+x182)+(x183-x184));

	if (t31 != 30663LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x189 = -11;
	int16_t x190 = INT16_MIN;
	static int8_t x191 = INT8_MAX;
	static volatile int64_t x192 = -1005337852226752866LL;
	volatile int64_t t32 = -4022025043LL;

	t32 = ((x189+x190)+(x191-x192));

	if (t32 != 1005337852226720214LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = -19;
	int8_t x194 = -5;
	static uint8_t x195 = 4U;
	volatile uint8_t x196 = UINT8_MAX;
	int32_t t33 = 254639762;

	t33 = ((x193+x194)+(x195-x196));

	if (t33 != -275) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x198 = 4U;
	static int32_t x200 = INT32_MIN;

	t34 = ((x197+x198)+(x199-x200));

	if (t34 != 2147483650U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x201 = -1;
	int64_t x202 = 99427244505528008LL;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 1953666103U;
	volatile int64_t t35 = -8392078163901665LL;

	t35 = ((x201+x202)+(x203-x204));

	if (t35 != 99427246846796432LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x205 = 91501LLU;
	int32_t x206 = -1;
	int32_t x207 = INT32_MAX;

	t36 = ((x205+x206)+(x207-x208));

	if (t36 != 2147575028LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x221 = -2262785LL;
	int8_t x222 = 18;
	uint32_t x223 = 160410U;
	static uint32_t x224 = 14681488U;

	t37 = ((x221+x222)+(x223-x224));

	if (t37 != 4278183451LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = -1;
	int16_t x226 = -1;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t38 = 9312LL;

	t38 = ((x225+x226)+(x227-x228));

	if (t38 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x229 = 50081;
	volatile int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	int8_t x232 = 50;
	volatile int32_t t39 = 3944;

	t39 = ((x229+x230)+(x231-x232));

	if (t39 != 17135) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x233 = -31;
	int8_t x234 = INT8_MIN;
	static int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t40 = 2242968710805553778LLU;

	t40 = ((x233+x234)+(x235-x236));

	if (t40 != 18446744073709518690LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x239 = -1;
	int32_t t41 = -163011265;

	t41 = ((x237+x238)+(x239-x240));

	if (t41 != 2147450878) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = 1170700LLU;
	static int8_t x242 = 1;
	int16_t x243 = INT16_MAX;
	int8_t x244 = INT8_MIN;
	uint64_t t42 = 1019318982LLU;

	t42 = ((x241+x242)+(x243-x244));

	if (t42 != 1203596LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x245 = -4164253290172LL;
	int64_t x246 = INT64_MAX;
	static uint32_t x247 = 1018961U;
	static volatile int64_t t43 = 23LL;

	t43 = ((x245+x246)+(x247-x248));

	if (t43 != 9223367872602504724LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	volatile int8_t x252 = 7;

	t44 = ((x249+x250)+(x251-x252));

	if (t44 != 118U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x253 = INT16_MIN;
	uint64_t x255 = 7026954914166LLU;
	int8_t x256 = 0;
	static uint64_t t45 = 5LLU;

	t45 = ((x253+x254)+(x255-x256));

	if (t45 != 7026954881400LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = -1LL;
	uint8_t x264 = 0U;
	volatile int64_t t46 = 3638237764LL;

	t46 = ((x261+x262)+(x263-x264));

	if (t46 != 4295032829LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x265 = 8186LLU;
	int32_t x266 = 3792;
	int8_t x267 = INT8_MIN;
	volatile uint16_t x268 = UINT16_MAX;

	t47 = ((x265+x266)+(x267-x268));

	if (t47 != 18446744073709497931LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = 8;
	int32_t x275 = 22490;
	uint8_t x276 = 15U;
	uint64_t t48 = 26580703303LLU;

	t48 = ((x273+x274)+(x275-x276));

	if (t48 != 22482LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x281 = -60;
	int16_t x283 = -1;
	uint16_t x284 = 3U;
	int32_t t49 = 3;

	t49 = ((x281+x282)+(x283-x284));

	if (t49 != 65471) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = -1798866;
	int8_t x295 = 2;
	int64_t x296 = INT64_MAX;
	volatile int64_t t50 = 299633209LL;

	t50 = ((x293+x294)+(x295-x296));

	if (t50 != -9223372032561607271LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = -1;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -500;

	t51 = ((x297+x298)+(x299-x300));

	if (t51 != -32214) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x301 = INT64_MAX;
	int8_t x302 = INT8_MIN;
	volatile uint64_t x304 = UINT64_MAX;
	uint64_t t52 = 1499LLU;

	t52 = ((x301+x302)+(x303-x304));

	if (t52 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x305 = 2716377487393LLU;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 1U;
	uint64_t t53 = 227LLU;

	t53 = ((x305+x306)+(x307-x308));

	if (t53 != 2716377454751LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x309 = 100;
	uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MAX;

	t54 = ((x309+x310)+(x311-x312));

	if (t54 != 99LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x314 = INT16_MAX;
	uint32_t x315 = 29013U;
	int32_t x316 = -1;
	volatile uint32_t t55 = 5898501U;

	t55 = ((x313+x314)+(x315-x316));

	if (t55 != 61653U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = UINT32_MAX;
	static int64_t x319 = 4592022795567341LL;
	volatile int64_t x320 = INT64_MAX;
	int64_t t56 = 30482198122LL;

	t56 = ((x317+x318)+(x319-x320));

	if (t56 != -9218780009764241172LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x322 = 6966U;
	int32_t x323 = INT32_MIN;
	uint32_t t57 = 13541U;

	t57 = ((x321+x322)+(x323-x324));

	if (t57 != 2147490618U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x325 = 3502;
	int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t58 = 595;

	t58 = ((x325+x326)+(x327-x328));

	if (t58 != 3246) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = 1;
	volatile int16_t x330 = -1;
	static volatile int8_t x331 = 1;
	static int8_t x332 = 9;
	static int32_t t59 = 7069;

	t59 = ((x329+x330)+(x331-x332));

	if (t59 != -8) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x334 = 31029U;
	static uint64_t x335 = 9768259LLU;
	volatile int16_t x336 = 17;
	volatile uint64_t t60 = 116LLU;

	t60 = ((x333+x334)+(x335-x336));

	if (t60 != 9864806LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x338 = UINT16_MAX;
	volatile int32_t x340 = -1;
	volatile uint32_t t61 = 15U;

	t61 = ((x337+x338)+(x339-x340));

	if (t61 != 65523U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MAX;
	uint16_t x343 = UINT16_MAX;
	volatile int32_t x344 = -1;
	volatile int32_t t62 = -2225936;

	t62 = ((x341+x342)+(x343-x344));

	if (t62 != 98430) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x347 = -1;
	uint64_t x348 = 62LLU;
	static uint64_t t63 = 31730185379224LLU;

	t63 = ((x345+x346)+(x347-x348));

	if (t63 != 18446744073709519040LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = 1;
	volatile uint32_t x350 = 42499U;
	volatile int64_t x351 = -1LL;
	int64_t x352 = -1LL;
	int64_t t64 = 6812492913LL;

	t64 = ((x349+x350)+(x351-x352));

	if (t64 != 42500LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 325548U;
	static int16_t x356 = INT16_MIN;
	uint64_t t65 = 7047LLU;

	t65 = ((x353+x354)+(x355-x356));

	if (t65 != 358292LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -2379;
	volatile uint64_t t66 = 63704920067LLU;

	t66 = ((x365+x366)+(x367-x368));

	if (t66 != 2380LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = -7632877LL;
	volatile uint8_t x374 = 3U;
	int64_t x375 = -840359LL;
	static volatile int32_t x376 = -276;
	int64_t t67 = 89LL;

	t67 = ((x373+x374)+(x375-x376));

	if (t67 != -8472957LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x377 = -1;
	int8_t x379 = -1;
	static int32_t x380 = INT32_MIN;
	static int32_t t68 = 5;

	t68 = ((x377+x378)+(x379-x380));

	if (t68 != 2147483631) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = 3436U;
	int16_t x383 = -1;
	int8_t x384 = -16;
	int64_t t69 = -3861481275285208256LL;

	t69 = ((x381+x382)+(x383-x384));

	if (t69 != -9223372036854772357LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x385 = UINT64_MAX;
	static volatile uint32_t x388 = 193U;

	t70 = ((x385+x386)+(x387-x388));

	if (t70 != 4294966899LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x389 = 1;
	uint64_t x390 = 26374355LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t71 = 23112LLU;

	t71 = ((x389+x390)+(x391-x392));

	if (t71 != 26407251LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MAX;
	int16_t x396 = 44;
	volatile uint64_t t72 = 32614462LLU;

	t72 = ((x393+x394)+(x395-x396));

	if (t72 != 2147450834LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x397 = 104U;
	int8_t x398 = 24;
	int8_t x399 = -1;
	static volatile int64_t x400 = 9LL;

	t73 = ((x397+x398)+(x399-x400));

	if (t73 != 118LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t74 = 2585737821287723LLU;

	t74 = ((x401+x402)+(x403-x404));

	if (t74 != 8639939952095151LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x405 = INT8_MIN;
	uint16_t x406 = UINT16_MAX;
	static int64_t x407 = INT64_MAX;
	volatile uint32_t x408 = 71406230U;
	volatile int64_t t75 = 15LL;

	t75 = ((x405+x406)+(x407-x408));

	if (t75 != 9223372036783434984LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x409 = 29;
	volatile uint64_t x410 = UINT64_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint8_t x412 = 2U;
	volatile uint64_t t76 = 3LLU;

	t76 = ((x409+x410)+(x411-x412));

	if (t76 != 18446744073709518874LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x417 = UINT64_MAX;
	uint8_t x419 = 1U;
	uint8_t x420 = 121U;
	volatile uint64_t t77 = 46698LLU;

	t77 = ((x417+x418)+(x419-x420));

	if (t77 != 9223372036854775686LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x421 = UINT16_MAX;
	uint8_t x422 = UINT8_MAX;
	int32_t x424 = INT32_MAX;
	int32_t t78 = -878;

	t78 = ((x421+x422)+(x423-x424));

	if (t78 != -2147417855) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x433 = UINT8_MAX;
	uint32_t x434 = 95U;
	int16_t x435 = 94;
	volatile int8_t x436 = INT8_MIN;
	uint32_t t79 = 182U;

	t79 = ((x433+x434)+(x435-x436));

	if (t79 != 572U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MIN;
	static uint16_t x439 = UINT16_MAX;
	volatile int16_t x440 = -1;
	volatile int64_t t80 = -1547875793703LL;

	t80 = ((x437+x438)+(x439-x440));

	if (t80 != -9223372036854644737LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x445 = 1048934126433LLU;
	int32_t x446 = INT32_MAX;
	uint8_t x448 = 42U;
	volatile uint64_t t81 = 1234LLU;

	t81 = ((x445+x446)+(x447-x448));

	if (t81 != 1053229093685LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = UINT32_MAX;
	uint32_t x450 = 118U;
	uint32_t x452 = 1221774167U;
	uint32_t t82 = 14675U;

	t82 = ((x449+x450)+(x451-x452));

	if (t82 != 925709597U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x453 = UINT64_MAX;
	uint8_t x454 = UINT8_MAX;
	int8_t x456 = -1;

	t83 = ((x453+x454)+(x455-x456));

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x457 = 198386960208867608LLU;
	int32_t x458 = INT32_MIN;
	int16_t x459 = -1;
	volatile int8_t x460 = 1;
	volatile uint64_t t84 = 2888531291869LLU;

	t84 = ((x457+x458)+(x459-x460));

	if (t84 != 198386958061383958LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = -12;
	int32_t x462 = INT32_MAX;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 8001092043LLU;
	uint64_t t85 = 1464528005801LLU;

	t85 = ((x461+x462)+(x463-x464));

	if (t85 != 18446744067855943080LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x465 = 28662168U;
	static int64_t x466 = -1901252181947449LL;
	uint16_t x468 = UINT16_MAX;
	static volatile int64_t t86 = -26044100LL;

	t86 = ((x465+x466)+(x467-x468));

	if (t86 != -1901252153350810LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x477 = INT16_MIN;
	uint32_t x478 = 105U;
	int16_t x479 = INT16_MIN;
	uint32_t t87 = 1751119029U;

	t87 = ((x477+x478)+(x479-x480));

	if (t87 != 4294901870U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x481 = -1;
	static uint32_t x482 = 309116U;
	uint8_t x483 = 0U;
	int8_t x484 = INT8_MIN;

	t88 = ((x481+x482)+(x483-x484));

	if (t88 != 309243U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x486 = 1043U;
	static int64_t x488 = 7773LL;
	int64_t t89 = -1034912412028271LL;

	t89 = ((x485+x486)+(x487-x488));

	if (t89 != 4294927797LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x490 = UINT64_MAX;
	int16_t x491 = INT16_MIN;
	uint64_t t90 = 546685819510253LLU;

	t90 = ((x489+x490)+(x491-x492));

	if (t90 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x495 = 51U;
	uint32_t x496 = UINT32_MAX;
	static uint32_t t91 = 399064177U;

	t91 = ((x493+x494)+(x495-x496));

	if (t91 != 105U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x501 = 207031;
	int32_t x502 = 1;
	int16_t x503 = INT16_MAX;
	int8_t x504 = 1;

	t92 = ((x501+x502)+(x503-x504));

	if (t92 != 239798) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = INT64_MIN;
	static uint32_t x506 = 2535U;
	static volatile int8_t x507 = 6;
	int8_t x508 = -1;
	int64_t t93 = 235639328610355729LL;

	t93 = ((x505+x506)+(x507-x508));

	if (t93 != -9223372036854773266LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x509 = INT32_MAX;
	uint64_t x510 = 51552LLU;
	int64_t x512 = -238733065LL;

	t94 = ((x509+x510)+(x511-x512));

	if (t94 != 2386268272LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = 14;
	int8_t x522 = 6;
	volatile int32_t x523 = INT32_MIN;
	uint64_t x524 = 303876696289706LLU;
	volatile uint64_t t95 = 1806975514LLU;

	t95 = ((x521+x522)+(x523-x524));

	if (t95 != 18446440194865778282LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x525 = 33U;
	int32_t x526 = 95;
	volatile int16_t x527 = -962;
	uint16_t x528 = 53U;
	int32_t t96 = -3;

	t96 = ((x525+x526)+(x527-x528));

	if (t96 != -887) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x534 = INT8_MIN;
	int32_t x535 = INT32_MIN;
	int64_t x536 = INT64_MIN;
	static uint64_t t97 = 4987668LLU;

	t97 = ((x533+x534)+(x535-x536));

	if (t97 != 9223374840574218729LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x541 = -728239;
	int8_t x542 = -31;
	static int16_t x543 = INT16_MIN;
	volatile int64_t x544 = INT64_MIN;
	int64_t t98 = 2086253LL;

	t98 = ((x541+x542)+(x543-x544));

	if (t98 != 9223372036854014770LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x545 = 2;
	static int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MAX;
	volatile uint16_t x548 = 71U;
	static volatile int32_t t99 = -9786334;

	t99 = ((x545+x546)+(x547-x548));

	if (t99 != 65465) { NG(); } else { ; }
	
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

