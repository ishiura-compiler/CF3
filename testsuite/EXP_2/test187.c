#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = INT64_MIN;
int8_t x14 = -1;
uint64_t x16 = UINT64_MAX;
volatile uint64_t t3 = 68472LLU;
volatile int8_t x17 = INT8_MAX;
int8_t x20 = INT8_MIN;
static uint8_t x21 = 3U;
int64_t x24 = -1LL;
static int8_t x28 = 1;
int32_t x36 = INT32_MIN;
int16_t x39 = -1008;
int16_t x42 = -1;
uint64_t x52 = 1810194856LLU;
volatile int64_t t15 = 14837533772778481LL;
int32_t t19 = 105;
uint64_t x83 = 3877LLU;
uint64_t t20 = 7350923755LLU;
int32_t x86 = 889;
static volatile uint64_t x89 = UINT64_MAX;
int32_t x97 = 6592983;
int8_t x98 = 1;
uint64_t x99 = 45541982786LLU;
static int8_t x113 = 5;
static int16_t x116 = 1506;
int64_t t25 = -336849846928LL;
int16_t x142 = -1;
static int64_t x144 = INT64_MAX;
volatile int64_t t31 = 15101LL;
int16_t x150 = INT16_MAX;
volatile uint64_t x160 = 1152898216LLU;
static uint64_t t33 = 663576440756454LLU;
static int64_t t34 = 15515LL;
volatile uint8_t x165 = 4U;
int16_t x166 = INT16_MIN;
int8_t x171 = 2;
uint8_t x188 = 3U;
static volatile uint64_t t41 = 1880652LLU;
uint8_t x201 = 0U;
volatile uint64_t t43 = 1LLU;
int8_t x211 = INT8_MIN;
int32_t t44 = 308;
volatile uint16_t x219 = 4656U;
int64_t x224 = INT64_MIN;
uint64_t t47 = 16084890786370LLU;
volatile int32_t t49 = -11970;
static volatile int32_t x238 = INT32_MIN;
uint64_t t50 = 9418095790327264LLU;
int32_t x242 = 35999299;
volatile int64_t t51 = -1480LL;
volatile int32_t x255 = INT32_MIN;
uint64_t x259 = 180LLU;
volatile uint64_t t54 = 1854291964904829841LLU;
int64_t x269 = -1LL;
volatile uint64_t x272 = 1616540089010456776LLU;
int16_t x282 = INT16_MAX;
uint8_t x283 = 14U;
volatile uint64_t t59 = 530478LLU;
static int32_t x287 = -1;
int8_t x289 = -1;
uint8_t x290 = UINT8_MAX;
uint32_t x292 = UINT32_MAX;
uint32_t x293 = 2633971U;
volatile uint32_t t62 = 10U;
static volatile int32_t t64 = 215713513;
volatile uint16_t x314 = 1U;
static volatile int32_t t68 = 808356220;
static int8_t x332 = -1;
static int64_t t71 = 0LL;
int64_t t73 = 3384518644LL;
static uint32_t x347 = 133239385U;
int64_t x349 = INT64_MAX;
static int16_t x350 = INT16_MAX;
uint64_t x352 = UINT64_MAX;
int16_t x355 = -1;
int16_t x382 = 0;
uint8_t x383 = 19U;
volatile int64_t x386 = -1LL;
static uint32_t x393 = 226U;
uint16_t x394 = UINT16_MAX;
int8_t x396 = INT8_MIN;
static int64_t x401 = -1LL;
int64_t t87 = 13190522LL;
volatile int16_t x407 = INT16_MAX;
int16_t x410 = -10;
volatile int16_t x424 = 24;
int64_t t92 = 3008846LL;
static int64_t x438 = INT64_MIN;
volatile uint32_t x462 = UINT32_MAX;


void f0(void) {
	volatile int64_t x1 = -1813696LL;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MAX;
	int64_t t0 = -774753456104LL;

	t0 = ((x1-(x2-x3))%x4);

	if (t0 != 21130LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 556707027156636416LL;

	t1 = ((x5-(x6-x7))%x8);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 236043801;
	int16_t x10 = 55;
	volatile uint64_t x11 = UINT64_MAX;
	int64_t x12 = 4032110114297193920LL;
	uint64_t t2 = 961494099LLU;

	t2 = ((x9-(x10-x11))%x12);

	if (t2 != 236043745LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 849521U;
	volatile int8_t x15 = INT8_MAX;

	t3 = ((x13-(x14-x15))%x16);

	if (t3 != 849649LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	uint16_t x19 = 2008U;
	volatile int64_t t4 = 1522210569336848269LL;

	t4 = ((x17-(x18-x19))%x20);

	if (t4 != 88LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 62477U;
	int8_t x23 = INT8_MIN;
	int64_t t5 = -107LL;

	t5 = ((x21-(x22-x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 0U;
	uint32_t x27 = 134067540U;
	static uint32_t t6 = 124666U;

	t6 = ((x25-(x26-x27))%x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 22552787LL;
	volatile int64_t x30 = 25119019364LL;
	int16_t x31 = 6003;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -406LL;

	t7 = ((x29-(x30-x31))%x32);

	if (t7 != -25096460574LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -7;
	volatile int16_t x34 = INT16_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 159LLU;

	t8 = ((x33-(x34-x35))%x36);

	if (t8 != 32760LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int64_t x38 = -1LL;
	static uint64_t x40 = 320389018822208951LLU;
	static volatile uint64_t t9 = 3850504483LLU;

	t9 = ((x37-(x38-x39))%x40);

	if (t9 != 184570000843640401LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	int8_t x43 = 3;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -4191384;

	t10 = ((x41-(x42-x43))%x44);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 1351299U;
	int8_t x46 = INT8_MAX;
	static int16_t x47 = INT16_MAX;
	uint32_t x48 = 6308U;
	uint32_t t11 = 4U;

	t11 = ((x45-(x46-x47))%x48);

	if (t11 != 2487U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	uint16_t x50 = 12393U;
	volatile int32_t x51 = INT32_MAX;
	volatile uint64_t t12 = 74LLU;

	t12 = ((x49-(x50-x51))%x52);

	if (t12 != 337276399LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 15445866735645LL;
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = INT64_MIN;
	static int32_t x56 = 9530;
	uint64_t t13 = 6577059615533826503LLU;

	t13 = ((x53-(x54-x55))%x56);

	if (t13 != 7454LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	uint32_t x58 = 60476U;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	static uint32_t t14 = 48301218U;

	t14 = ((x57-(x58-x59))%x60);

	if (t14 != 4294906819U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile uint32_t x62 = 881U;
	volatile int8_t x63 = INT8_MIN;
	volatile int64_t x64 = -556LL;

	t15 = ((x61-(x62-x63))%x64);

	if (t15 != 282LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 118U;
	int16_t x66 = INT16_MIN;
	int16_t x67 = 0;
	int64_t x68 = INT64_MIN;
	static int64_t t16 = 6395424438LL;

	t16 = ((x65-(x66-x67))%x68);

	if (t16 != 32886LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;
	volatile int64_t t17 = -33518725287512067LL;

	t17 = ((x69-(x70-x71))%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = -1;
	volatile uint16_t x74 = 14U;
	int16_t x75 = 2;
	volatile uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 1078840650U;

	t18 = ((x73-(x74-x75))%x76);

	if (t18 != 4294967283U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int8_t x78 = 22;
	uint16_t x79 = 53U;
	uint8_t x80 = 1U;

	t19 = ((x77-(x78-x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int8_t x82 = INT8_MAX;
	volatile int32_t x84 = INT32_MAX;

	t20 = ((x81-(x82-x83))%x84);

	if (t20 != 3752LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 1454801124U;
	volatile uint64_t t21 = 32LLU;

	t21 = ((x85-(x86-x87))%x88);

	if (t21 != 606786726LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = UINT8_MAX;
	static uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = -2324845;
	volatile uint64_t t22 = 439LLU;

	t22 = ((x89-(x90-x91))%x92);

	if (t22 != 2324588LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = -393140;
	int64_t x95 = INT64_MIN;
	static uint16_t x96 = 9336U;
	volatile int64_t t23 = -5269070LL;

	t23 = ((x93-(x94-x95))%x96);

	if (t23 != -4436LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x100 = UINT8_MAX;
	volatile uint64_t t24 = 3610796482LLU;

	t24 = ((x97-(x98-x99))%x100);

	if (t24 != 193LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x114 = -34490391684LL;
	volatile uint32_t x115 = 7870153U;

	t25 = ((x113-(x114-x115))%x116);

	if (t25 != 570LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = -1;
	uint8_t x118 = 23U;
	int8_t x119 = -1;
	static volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t26 = -134;

	t26 = ((x117-(x118-x119))%x120);

	if (t26 != -25) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 260;
	static int32_t x122 = -5178189;
	uint32_t x123 = 338287U;
	uint16_t x124 = 49U;
	static volatile uint32_t t27 = 26983007U;

	t27 = ((x121-(x122-x123))%x124);

	if (t27 != 22U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = UINT32_MAX;
	int16_t x134 = -1;
	uint32_t x135 = 3604U;
	static int8_t x136 = -1;
	volatile uint32_t t28 = 24U;

	t28 = ((x133-(x134-x135))%x136);

	if (t28 != 3604U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int8_t x138 = -1;
	int64_t x139 = 247506LL;
	uint32_t x140 = 483U;
	volatile int64_t t29 = 961LL;

	t29 = ((x137-(x138-x139))%x140);

	if (t29 != 466LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	int64_t x143 = INT64_MIN;
	int64_t t30 = -25994LL;

	t30 = ((x141-(x142-x143))%x144);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = INT8_MAX;
	volatile uint16_t x147 = 528U;
	static int16_t x148 = -1001;

	t31 = ((x145-(x146-x147))%x148);

	if (t31 != -608LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = -1;
	uint16_t x151 = 2025U;
	uint16_t x152 = 3531U;
	int32_t t32 = -490459;

	t32 = ((x149-(x150-x151))%x152);

	if (t32 != -2495) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = INT16_MIN;
	int32_t x158 = 1;
	int8_t x159 = -1;

	t33 = ((x157-(x158-x159))%x160);

	if (t33 != 1006107646LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MAX;

	t34 = ((x161-(x162-x163))%x164);

	if (t34 != 2147450752LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 48130515U;
	volatile uint32_t t35 = 59679U;

	t35 = ((x165-(x166-x167))%x168);

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	uint16_t x172 = 15U;
	volatile int32_t t36 = 190;

	t36 = ((x169-(x170-x171))%x172);

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = 4008442923LL;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile uint16_t x176 = UINT16_MAX;
	uint64_t t37 = 34032LLU;

	t37 = ((x173-(x174-x175))%x176);

	if (t37 != 27415LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = 10588;
	volatile int64_t x178 = 1534278693077920061LL;
	volatile uint16_t x179 = 6024U;
	static volatile int32_t x180 = INT32_MAX;
	static int64_t t38 = -849321054LL;

	t38 = ((x177-(x178-x179))%x180);

	if (t38 != -1374788872LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = 104659879283LLU;
	int64_t x186 = -6841636LL;
	int32_t x187 = INT32_MAX;
	static uint64_t t39 = 34144325457144LLU;

	t39 = ((x185-(x186-x187))%x188);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	static int8_t x191 = 1;
	int8_t x192 = -1;
	volatile int64_t t40 = 61LL;

	t40 = ((x189-(x190-x191))%x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MIN;
	int16_t x195 = -11988;
	int8_t x196 = INT8_MIN;

	t41 = ((x193-(x194-x195))%x196);

	if (t41 != 2147471659LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x202 = -485;
	int16_t x203 = 0;
	static int8_t x204 = -3;
	static volatile int32_t t42 = 111044;

	t42 = ((x201-(x202-x203))%x204);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x205 = 9;
	static uint64_t x206 = UINT64_MAX;
	int32_t x207 = -52562;
	volatile uint32_t x208 = 57U;

	t43 = ((x205-(x206-x207))%x208);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = 78351396;
	volatile int8_t x212 = -1;

	t44 = ((x209-(x210-x211))%x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x217 = 3U;
	int64_t x218 = -1LL;
	int8_t x220 = INT8_MIN;
	int64_t t45 = -162948389LL;

	t45 = ((x217-(x218-x219))%x220);

	if (t45 != 52LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 2U;
	int8_t x222 = -1;
	volatile uint8_t x223 = UINT8_MAX;
	int64_t t46 = -2374773960557LL;

	t46 = ((x221-(x222-x223))%x224);

	if (t46 != 258LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x225 = INT16_MIN;
	static uint64_t x226 = 306LLU;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;

	t47 = ((x225-(x226-x227))%x228);

	if (t47 != 18446744071562034894LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile int8_t x230 = INT8_MIN;
	uint8_t x231 = 0U;
	int64_t x232 = INT64_MIN;
	int64_t t48 = -289104164LL;

	t48 = ((x229-(x230-x231))%x232);

	if (t48 != -2147483520LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = 1U;
	uint8_t x234 = 6U;
	volatile int16_t x235 = 1453;
	int32_t x236 = -1;

	t49 = ((x233-(x234-x235))%x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x237 = UINT64_MAX;
	int64_t x239 = 770905467510LL;
	int8_t x240 = INT8_MAX;

	t50 = ((x237-(x238-x239))%x240);

	if (t50 != 60LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MIN;
	int8_t x243 = -1;
	volatile int64_t x244 = INT64_MAX;

	t51 = ((x241-(x242-x243))%x244);

	if (t51 != -35999428LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 104615424LLU;
	uint64_t x250 = 29481003LLU;
	int32_t x251 = INT32_MAX;
	volatile int8_t x252 = 2;
	uint64_t t52 = 418925033215794117LLU;

	t52 = ((x249-(x250-x251))%x252);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -24;
	uint64_t x254 = UINT64_MAX;
	static int32_t x256 = INT32_MIN;
	uint64_t t53 = 545609886016066LLU;

	t53 = ((x253-(x254-x255))%x256);

	if (t53 != 18446744071562067945LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x257 = 4U;
	volatile int16_t x258 = INT16_MIN;
	uint32_t x260 = 9U;

	t54 = ((x257-(x258-x259))%x260);

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = INT64_MIN;
	int64_t x263 = -1LL;
	static volatile int32_t x264 = INT32_MAX;
	uint64_t t55 = 1184613836434122251LLU;

	t55 = ((x261-(x262-x263))%x264);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = INT32_MIN;
	int64_t x266 = -1LL;
	static int8_t x267 = -1;
	volatile int64_t x268 = INT64_MIN;
	volatile int64_t t56 = 1142158357LL;

	t56 = ((x265-(x266-x267))%x268);

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x270 = 38596LLU;
	volatile int16_t x271 = -1;
	uint64_t t57 = 760LLU;

	t57 = ((x269-(x270-x271))%x272);

	if (t57 != 664803094594488482LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = 12034950746221138LL;
	static int16_t x280 = INT16_MIN;
	static volatile int64_t t58 = -16247402857617LL;

	t58 = ((x277-(x278-x279))%x280);

	if (t58 != 10961LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x284 = 27277984LLU;

	t59 = ((x281-(x282-x283))%x284);

	if (t59 != 12291054LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = UINT64_MAX;
	static int64_t x288 = 393210310714493LL;
	uint64_t t60 = 1645572760626103153LLU;

	t60 = ((x285-(x286-x287))%x288);

	if (t60 != 230988735628000LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x291 = 48;
	uint32_t t61 = 6930U;

	t61 = ((x289-(x290-x291))%x292);

	if (t61 != 4294967088U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x294 = 64U;
	volatile uint16_t x295 = 2U;
	int32_t x296 = -246993;

	t62 = ((x293-(x294-x295))%x296);

	if (t62 != 2633909U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int32_t x298 = -26287202;
	uint8_t x299 = 32U;
	int64_t x300 = -8421394475798LL;
	volatile int64_t t63 = 228075519675072510LL;

	t63 = ((x297-(x298-x299))%x300);

	if (t63 != 26352769LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = 672;
	int16_t x302 = 3;
	int32_t x303 = 968332971;
	uint8_t x304 = 15U;

	t64 = ((x301-(x302-x303))%x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 960492LLU;
	int16_t x306 = -1;
	volatile uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 12823U;
	volatile uint64_t t65 = 20305183LLU;

	t65 = ((x305-(x306-x307))%x308);

	if (t65 != 11590LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t66 = -3;

	t66 = ((x309-(x310-x311))%x312);

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = -3;
	uint32_t x315 = UINT32_MAX;
	static int16_t x316 = INT16_MIN;
	uint32_t t67 = 12105547U;

	t67 = ((x313-(x314-x315))%x316);

	if (t67 != 32763U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x321 = 28;
	uint16_t x322 = 1013U;
	int8_t x323 = INT8_MIN;
	volatile int8_t x324 = -1;

	t68 = ((x321-(x322-x323))%x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = -1;
	int8_t x327 = 6;
	int16_t x328 = 14;
	volatile int32_t t69 = -89609;

	t69 = ((x325-(x326-x327))%x328);

	if (t69 != -9) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = INT64_MAX;
	uint32_t x330 = 468741471U;
	int16_t x331 = INT16_MAX;
	int64_t t70 = 4358935LL;

	t70 = ((x329-(x330-x331))%x332);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = 0;
	volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = 28LL;
	int16_t x336 = INT16_MIN;

	t71 = ((x333-(x334-x335))%x336);

	if (t71 != -32739LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x337 = 114U;
	int64_t x338 = -1LL;
	uint16_t x339 = 30U;
	int16_t x340 = INT16_MIN;
	static volatile int64_t t72 = 125LL;

	t72 = ((x337-(x338-x339))%x340);

	if (t72 != 145LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = -147;
	int32_t x342 = -1;
	int64_t x343 = 10035979LL;
	volatile int32_t x344 = -478884667;

	t73 = ((x341-(x342-x343))%x344);

	if (t73 != 10035833LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	volatile int64_t x348 = INT64_MAX;
	static int64_t t74 = -3691389LL;

	t74 = ((x345-(x346-x347))%x348);

	if (t74 != 2280723032LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x351 = INT8_MIN;
	uint64_t t75 = 4508827814333769074LLU;

	t75 = ((x349-(x350-x351))%x352);

	if (t75 != 9223372036854742912LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = UINT64_MAX;
	volatile int16_t x356 = INT16_MAX;
	static uint64_t t76 = 1005193665120LLU;

	t76 = ((x353-(x354-x355))%x356);

	if (t76 != 8LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = -1;
	int16_t x358 = -1;
	int64_t x359 = 12188LL;
	int16_t x360 = -1;
	volatile int64_t t77 = 1045418905LL;

	t77 = ((x357-(x358-x359))%x360);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x361 = INT16_MIN;
	static volatile uint16_t x362 = UINT16_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = -1LL;
	volatile int64_t t78 = -465949LL;

	t78 = ((x361-(x362-x363))%x364);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x366 = 10384508341353146LLU;
	int32_t x367 = -1;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t79 = 943492475392528LLU;

	t79 = ((x365-(x366-x367))%x368);

	if (t79 != 18436359563220714821LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x369 = 25U;
	static volatile int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	volatile uint16_t x372 = 5277U;
	int64_t t80 = -106798LL;

	t80 = ((x369-(x370-x371))%x372);

	if (t80 != -4664LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 9LLU;
	int16_t x374 = INT16_MIN;
	static int64_t x375 = -1LL;
	int8_t x376 = -1;
	uint64_t t81 = 269171669123977LLU;

	t81 = ((x373-(x374-x375))%x376);

	if (t81 != 32776LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = 85;
	int16_t x378 = 8;
	static int16_t x379 = INT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	int32_t t82 = -39;

	t82 = ((x377-(x378-x379))%x380);

	if (t82 != 32844) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 30867399U;
	static uint32_t x384 = 3U;
	static volatile uint32_t t83 = 104U;

	t83 = ((x381-(x382-x383))%x384);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -9336670338805LL;
	uint64_t x387 = 727343LLU;
	volatile int16_t x388 = -131;
	volatile uint64_t t84 = 51236981LLU;

	t84 = ((x385-(x386-x387))%x388);

	if (t84 != 18446734737039940155LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = 1469U;
	int16_t x390 = -71;
	int32_t x391 = -1;
	volatile int16_t x392 = -1;
	volatile int32_t t85 = -2564036;

	t85 = ((x389-(x390-x391))%x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x395 = -576;
	uint32_t t86 = 226451U;

	t86 = ((x393-(x394-x395))%x396);

	if (t86 != 4294901411U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x402 = -11661;
	int64_t x403 = -200158003LL;
	static int8_t x404 = INT8_MIN;

	t87 = ((x401-(x402-x403))%x404);

	if (t87 != -39LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x405 = INT8_MIN;
	uint32_t x406 = 1787600U;
	static int8_t x408 = -1;
	static uint32_t t88 = 2U;

	t88 = ((x405-(x406-x407))%x408);

	if (t88 != 4293212335U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -1;
	int16_t x411 = INT16_MAX;
	volatile int32_t x412 = -1;
	int32_t t89 = -3985239;

	t89 = ((x409-(x410-x411))%x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MAX;
	static int8_t x414 = 0;
	static uint32_t x415 = 16189U;
	uint64_t x416 = 15422165827574331LLU;
	static volatile uint64_t t90 = 321134918241LLU;

	t90 = ((x413-(x414-x415))%x416);

	if (t90 != 16316LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -331828;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -3;
	volatile int32_t t91 = -2566730;

	t91 = ((x421-(x422-x423))%x424);

	if (t91 != -23) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = UINT32_MAX;
	int16_t x426 = INT16_MAX;
	int64_t x427 = -7227458941432LL;
	int64_t x428 = -1552005257511193LL;

	t92 = ((x425-(x426-x427))%x428);

	if (t92 != -7223164006904LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = 8387;
	static uint64_t x434 = UINT64_MAX;
	int32_t x435 = INT32_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile uint64_t t93 = 2730859LLU;

	t93 = ((x433-(x434-x435))%x436);

	if (t93 != 18446744071562076356LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MIN;
	static int64_t x439 = -520417108347474492LL;
	uint64_t x440 = 94413710549LLU;
	static uint64_t t94 = 8126922442LLU;

	t94 = ((x437-(x438-x439))%x440);

	if (t94 != 18357025429LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = UINT8_MAX;
	volatile int8_t x442 = 18;
	volatile uint64_t x443 = 4578358885634211LLU;
	int8_t x444 = -12;
	volatile uint64_t t95 = 105LLU;

	t95 = ((x441-(x442-x443))%x444);

	if (t95 != 4578358885634448LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x449 = UINT64_MAX;
	volatile int8_t x450 = -8;
	int64_t x451 = -1LL;
	int8_t x452 = -25;
	uint64_t t96 = 12004LLU;

	t96 = ((x449-(x450-x451))%x452);

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x453 = 6608U;
	volatile uint64_t x454 = 5731028LLU;
	volatile int32_t x455 = -3;
	uint16_t x456 = 1445U;
	uint64_t t97 = 1644790998885789257LLU;

	t97 = ((x453-(x454-x455))%x456);

	if (t97 != 1263LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x457 = 24LLU;
	static volatile int64_t x458 = INT64_MIN;
	volatile int16_t x459 = INT16_MIN;
	uint32_t x460 = 623132U;
	volatile uint64_t t98 = 174309LLU;

	t98 = ((x457-(x458-x459))%x460);

	if (t98 != 580748LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MIN;
	volatile int8_t x463 = INT8_MIN;
	static int64_t x464 = 204560084037LL;
	int64_t t99 = -2573516183900694579LL;

	t99 = ((x461-(x462-x463))%x464);

	if (t99 != 4294967041LL) { NG(); } else { ; }
	
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

