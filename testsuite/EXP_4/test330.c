#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 9U;
int16_t x5 = INT16_MIN;
volatile int32_t t1 = -1486118;
static int8_t x11 = -3;
uint8_t x12 = 0U;
uint32_t x13 = UINT32_MAX;
uint64_t x21 = 100020340682LLU;
volatile uint8_t x22 = UINT8_MAX;
int8_t x34 = -1;
int32_t x36 = INT32_MAX;
int16_t x39 = INT16_MAX;
int32_t x55 = INT32_MIN;
static uint64_t x56 = 449196519660608585LLU;
volatile int16_t x57 = -1;
volatile uint16_t x63 = 6U;
int32_t t14 = -331984;
int64_t x73 = 48891294LL;
uint8_t x78 = 1U;
uint64_t x79 = 248197635648353LLU;
static volatile int8_t x91 = -14;
volatile int64_t t19 = 49082460900LL;
volatile uint32_t t20 = 79U;
int16_t x107 = 1053;
uint32_t x113 = 1891U;
volatile uint64_t t23 = 3060448LLU;
int16_t x120 = 6;
static volatile int64_t t24 = -139988513018481369LL;
volatile uint16_t x123 = UINT16_MAX;
volatile uint32_t x127 = UINT32_MAX;
static volatile uint64_t t28 = 5399LLU;
static int16_t x141 = 12;
int8_t x144 = 1;
static uint64_t x149 = 5LLU;
int8_t x153 = -1;
int32_t x154 = -1;
int64_t x157 = INT64_MIN;
int64_t t35 = 399256438811LL;
volatile uint64_t t36 = 2043421876887LLU;
volatile int64_t t37 = 429877082746LL;
volatile int64_t t38 = -10650528LL;
static uint32_t x183 = 61648U;
volatile uint32_t t40 = 1172788010U;
volatile int32_t x190 = 1;
static uint16_t x193 = 99U;
int32_t x196 = -1;
volatile int64_t t43 = -139826710150503531LL;
static volatile int32_t x217 = 5;
volatile uint64_t x230 = 0LLU;
int8_t x233 = 7;
int32_t x244 = -1;
volatile int32_t t51 = -701170679;
int16_t x255 = 0;
int8_t x256 = 1;
volatile int64_t t53 = 135797529649916LL;
int16_t x261 = -1;
uint64_t x262 = 33408LLU;
int64_t x265 = 1LL;
static int16_t x267 = 784;
int16_t x268 = 16045;
int64_t t55 = -3159663LL;
static int32_t x281 = 170084;
uint32_t t58 = 1032U;
volatile uint32_t x289 = 385U;
volatile int16_t x291 = -1;
static int64_t x292 = INT64_MIN;
int32_t x293 = INT32_MIN;
uint8_t x296 = 10U;
int64_t x299 = -1LL;
static uint8_t x303 = 10U;
static uint32_t x304 = 28207U;
uint32_t t63 = 65233925U;
int32_t x306 = -1;
uint16_t x307 = 315U;
volatile int32_t x308 = -1;
uint64_t t65 = 265023LLU;
static volatile int8_t x313 = INT8_MIN;
uint16_t x315 = 6266U;
uint32_t x319 = 202224408U;
int64_t x320 = INT64_MAX;
volatile uint64_t t68 = 1690902718659045280LLU;
int16_t x334 = -1;
int8_t x336 = -1;
int64_t x348 = -1LL;
static uint16_t x361 = 1U;
volatile int32_t t74 = -7426484;
int8_t x367 = INT8_MIN;
volatile int32_t x368 = -1;
uint8_t x372 = 67U;
int64_t t77 = 232883LL;
int64_t x382 = 900839433LL;
int8_t x383 = INT8_MAX;
uint32_t x384 = 2655U;
static uint64_t t79 = 9497LLU;
uint64_t x389 = UINT64_MAX;
int8_t x396 = -1;
int8_t x397 = -1;
static int16_t x398 = -378;
int8_t x403 = 21;
static volatile uint32_t t83 = 724U;
static volatile int64_t t84 = -142067637LL;
volatile int16_t x413 = INT16_MAX;
int32_t x415 = INT32_MAX;
static int64_t x416 = INT64_MAX;
int64_t x418 = -1LL;
uint8_t x424 = UINT8_MAX;
uint32_t x428 = 31474U;
static volatile int8_t x443 = INT8_MAX;
int16_t x446 = -1;
uint64_t t92 = 1LLU;
int16_t x452 = INT16_MIN;
static volatile int16_t x454 = INT16_MAX;
uint64_t x457 = 7857338341765981040LLU;
uint64_t x458 = 56LLU;
int32_t t96 = 2468;


void f0(void) {
	static volatile int8_t x2 = INT8_MAX;
	int32_t x3 = -525365220;
	int16_t x4 = -32;
	static int32_t t0 = -6;

	t0 = (x1%(x2^(x3-x4)));

	if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 210;

	t1 = (x5%(x6^(x7-x8)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 13U;
	volatile uint64_t x10 = UINT64_MAX;
	static volatile uint64_t t2 = 4862840520798568LLU;

	t2 = (x9%(x10^(x11-x12)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -247;
	uint64_t x15 = 50210LLU;
	static int64_t x16 = 3LL;
	uint64_t t3 = 29296192118LLU;

	t3 = (x13%(x14^(x15-x16)));

	if (t3 != 4294967295LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	static uint8_t x20 = 9U;
	static volatile uint64_t t4 = 17LLU;

	t4 = (x17%(x18^(x19-x20)));

	if (t4 != 14484LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x23 = UINT8_MAX;
	int32_t x24 = -1;
	volatile uint64_t t5 = 22480422438149260LLU;

	t5 = (x21%(x22^(x23-x24)));

	if (t5 != 451LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = 248208173U;
	volatile int16_t x27 = -12;
	static int64_t x28 = 873050176LL;
	int64_t t6 = -3328410765277160LL;

	t6 = (x25%(x26^(x27-x28)));

	if (t6 != -175778098LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7800U;
	int8_t x30 = 2;
	int32_t x31 = -1;
	volatile int8_t x32 = INT8_MIN;
	uint32_t t7 = 14U;

	t7 = (x29%(x30^(x31-x32)));

	if (t7 != 50U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1688U;
	static int8_t x35 = -1;
	volatile int32_t t8 = 21689706;

	t8 = (x33%(x34^(x35-x36)));

	if (t8 != 1688) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 0U;
	volatile int8_t x38 = INT8_MIN;
	int64_t x40 = 4LL;
	int64_t t9 = -31354227141691158LL;

	t9 = (x37%(x38^(x39-x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 25LLU;
	volatile int16_t x42 = -2415;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = 0;
	uint64_t t10 = 7529401673789280684LLU;

	t10 = (x41%(x42^(x43-x44)));

	if (t10 != 25LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 86504U;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	uint32_t t11 = 38668U;

	t11 = (x49%(x50^(x51-x52)));

	if (t11 != 77207U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MIN;
	static uint64_t t12 = 1099588304LLU;

	t12 = (x53%(x54^(x55-x56)));

	if (t12 != 29686679578331057LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -60;

	t13 = (x57%(x58^(x59-x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 41U;
	static int32_t x62 = 3;
	int8_t x64 = -24;

	t14 = (x61%(x62^(x63-x64)));

	if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -130917193885935LL;
	uint8_t x70 = 0U;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 967U;
	volatile int64_t t15 = 88128727LL;

	t15 = (x69%(x70^(x71-x72)));

	if (t15 != -33360LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x74 = UINT32_MAX;
	static uint64_t x75 = 339179651842LLU;
	int64_t x76 = -1LL;
	volatile uint64_t t16 = 1934139860207000845LLU;

	t16 = (x73%(x74^(x75-x76)));

	if (t16 != 48891294LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	static volatile int16_t x80 = INT16_MIN;
	uint64_t t17 = 1413LLU;

	t17 = (x77%(x78^(x79-x80)));

	if (t17 != 99697308675488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	volatile int8_t x82 = INT8_MAX;
	volatile int16_t x83 = INT16_MAX;
	uint32_t x84 = 3364U;
	uint32_t t18 = 22U;

	t18 = (x81%(x82^(x83-x84)));

	if (t18 != 4760U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MIN;

	t19 = (x89%(x90^(x91-x92)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 14964638U;
	static int32_t x94 = INT32_MIN;
	static uint32_t x95 = 119534U;
	volatile int16_t x96 = INT16_MIN;

	t20 = (x93%(x94^(x95-x96)));

	if (t20 != 14964638U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 478LLU;
	static uint32_t x104 = 225241U;
	uint64_t t21 = 2383435316383LLU;

	t21 = (x101%(x102^(x103-x104)));

	if (t21 != 9223372036854518278LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile int32_t x106 = 193511968;
	int8_t x108 = -1;
	volatile uint32_t t22 = 123225489U;

	t22 = (x105%(x106^(x107-x108)));

	if (t22 != 37680811U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = 2502863503117100762LL;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;

	t23 = (x113%(x114^(x115-x116)));

	if (t23 != 1891LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = 465LL;

	t24 = (x117%(x118^(x119-x120)));

	if (t24 != 65535LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t25 = 525;

	t25 = (x121%(x122^(x123-x124)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 266618374010936LL;
	int64_t x126 = 133680LL;
	uint16_t x128 = 8U;
	int64_t t26 = -1129904LL;

	t26 = (x125%(x126^(x127-x128)));

	if (t26 != 3693355590LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = -130275LL;
	volatile uint16_t x130 = 5543U;
	volatile int8_t x131 = 48;
	static int8_t x132 = INT8_MIN;
	volatile int64_t t27 = -1670030290LL;

	t27 = (x129%(x130^(x131-x132)));

	if (t27 != -699LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = -1;
	static uint64_t x134 = 116897787771LLU;
	static uint16_t x135 = 27361U;
	uint64_t x136 = UINT64_MAX;

	t28 = (x133%(x134^(x135-x136)));

	if (t28 != 15021246158LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 7U;
	static int8_t x138 = -1;
	int32_t x139 = INT32_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t29 = 3460325U;

	t29 = (x137%(x138^(x139-x140)));

	if (t29 != 7U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = 6073628;
	volatile uint64_t t30 = 241LLU;

	t30 = (x141%(x142^(x143-x144)));

	if (t30 != 12LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = -194639042LL;
	uint8_t x146 = 10U;
	int64_t x147 = -790014588063LL;
	uint8_t x148 = 3U;
	int64_t t31 = 127393582834LL;

	t31 = (x145%(x146^(x147-x148)));

	if (t31 != -194639042LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = INT32_MIN;
	static int16_t x151 = 979;
	int32_t x152 = 1710;
	uint64_t t32 = 7022631983645740672LLU;

	t32 = (x149%(x150^(x151-x152)));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x155 = -1;
	static int64_t x156 = -766298237123LL;
	volatile int64_t t33 = -1871LL;

	t33 = (x153%(x154^(x155-x156)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 447U;
	uint8_t x160 = UINT8_MAX;
	volatile int64_t t34 = 34428112156275427LL;

	t34 = (x157%(x158^(x159-x160)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x161 = 12939U;
	int16_t x162 = INT16_MAX;
	int64_t x163 = -1LL;
	int16_t x164 = -251;

	t35 = (x161%(x162^(x163-x164)));

	if (t35 != 12939LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	uint8_t x166 = 1U;
	uint64_t x167 = 288006241544871114LLU;
	volatile int16_t x168 = INT16_MIN;

	t36 = (x165%(x166^(x167-x168)));

	if (t36 != 14344614835703103LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	int16_t x170 = -2414;
	int16_t x171 = INT16_MAX;
	int64_t x172 = 2893LL;

	t37 = (x169%(x170^(x171-x172)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 8U;
	volatile int32_t x176 = -1;

	t38 = (x173%(x174^(x175-x176)));

	if (t38 != -43LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x181 = 1100U;
	int8_t x182 = INT8_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t39 = 26930144LLU;

	t39 = (x181%(x182^(x183-x184)));

	if (t39 != 1100LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = -1;
	int16_t x186 = INT16_MIN;
	uint32_t x187 = 14U;
	volatile uint8_t x188 = 11U;

	t40 = (x185%(x186^(x187-x188)));

	if (t40 != 32764U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = INT8_MIN;
	static volatile int64_t t41 = 418LL;

	t41 = (x189%(x190^(x191-x192)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	static int64_t t42 = 117LL;

	t42 = (x193%(x194^(x195-x196)));

	if (t42 != 99LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = -1LL;
	int64_t x202 = -1LL;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;

	t43 = (x201%(x202^(x203-x204)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x218 = INT64_MAX;
	int8_t x219 = -1;
	int32_t x220 = -7415988;
	volatile int64_t t44 = 61704LL;

	t44 = (x217%(x218^(x219-x220)));

	if (t44 != 5LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MAX;
	static volatile int8_t x223 = -1;
	static volatile int8_t x224 = -9;
	int64_t t45 = -12407149LL;

	t45 = (x221%(x222^(x223-x224)));

	if (t45 != -19729LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t46 = 7753;

	t46 = (x225%(x226^(x227-x228)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x229 = INT64_MAX;
	int8_t x231 = -11;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t47 = 31411470094172333LLU;

	t47 = (x229%(x230^(x231-x232)));

	if (t47 != 18856LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x234 = -1;
	int32_t x235 = 1;
	uint64_t x236 = 3415888779379226702LLU;
	volatile uint64_t t48 = 105447568331613034LLU;

	t48 = (x233%(x234^(x235-x236)));

	if (t48 != 7LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 2;
	static int16_t x238 = 28;
	uint16_t x239 = 8425U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t49 = -113;

	t49 = (x237%(x238^(x239-x240)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = -1;
	uint32_t x243 = 166067834U;
	uint32_t t50 = 7U;

	t50 = (x241%(x242^(x243-x244)));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = INT16_MIN;
	volatile uint16_t x246 = 4052U;
	int16_t x247 = INT16_MAX;
	int8_t x248 = INT8_MIN;

	t51 = (x245%(x246^(x247-x248)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -1;
	static volatile int32_t x252 = INT32_MIN;
	int32_t t52 = 5964;

	t52 = (x249%(x250^(x251-x252)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = -1;
	static int64_t x254 = INT64_MAX;

	t53 = (x253%(x254^(x255-x256)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x263 = 451U;
	int8_t x264 = -29;
	volatile uint64_t t54 = 5472LLU;

	t54 = (x261%(x262^(x263-x264)));

	if (t54 != 30719LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x266 = UINT16_MAX;

	t55 = (x265%(x266^(x267-x268)));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	static volatile uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MAX;
	int64_t t56 = 3324331812443LL;

	t56 = (x269%(x270^(x271-x272)));

	if (t56 != -33849856LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = INT32_MIN;
	static uint8_t x278 = 59U;
	int32_t x279 = INT32_MAX;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t57 = 492143362;

	t57 = (x277%(x278^(x279-x280)));

	if (t57 != -197) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x282 = 744633U;
	uint32_t x283 = 414781U;
	int16_t x284 = 3;

	t58 = (x281%(x282^(x283-x284)));

	if (t58 != 170084U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x285 = 466523050505044LL;
	volatile uint8_t x286 = 3U;
	static int32_t x287 = -480187903;
	int16_t x288 = INT16_MIN;
	volatile int64_t t59 = 1736244535275483741LL;

	t59 = (x285%(x286^(x287-x288)));

	if (t59 != 914438LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x290 = 121931777013LL;
	static volatile int64_t t60 = 1009974638LL;

	t60 = (x289%(x290^(x291-x292)));

	if (t60 != 385LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x294 = INT16_MIN;
	volatile int16_t x295 = INT16_MIN;
	volatile int32_t t61 = 64553;

	t61 = (x293%(x294^(x295-x296)));

	if (t61 != -50) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = UINT64_MAX;
	static int16_t x298 = 3;
	int16_t x300 = INT16_MIN;
	static uint64_t t62 = 45543147625858LLU;

	t62 = (x297%(x298^(x299-x300)));

	if (t62 != 4095LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = UINT16_MAX;
	static int8_t x302 = 0;

	t63 = (x301%(x302^(x303-x304)));

	if (t63 != 65535U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = INT8_MIN;
	int32_t t64 = 218;

	t64 = (x305%(x306^(x307-x308)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = -1;
	static uint8_t x310 = 40U;
	uint64_t x311 = UINT64_MAX;
	static int16_t x312 = 0;

	t65 = (x309%(x310^(x311-x312)));

	if (t65 != 40LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x314 = 0LLU;
	volatile uint16_t x316 = 17575U;
	static volatile uint64_t t66 = 4073099311LLU;

	t66 = (x313%(x314^(x315-x316)));

	if (t66 != 11181LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	static uint64_t t67 = 384855113LLU;

	t67 = (x317%(x318^(x319-x320)));

	if (t67 != 404448819LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x325 = 3031217145560LLU;
	static int32_t x326 = -182290954;
	int32_t x327 = INT32_MIN;
	static int64_t x328 = 631313795118925LL;

	t68 = (x325%(x326^(x327-x328)));

	if (t68 != 3031217145560LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = UINT64_MAX;
	static int64_t x330 = INT64_MAX;
	int32_t x331 = 7;
	int64_t x332 = INT64_MAX;
	volatile uint64_t t69 = 5LLU;

	t69 = (x329%(x330^(x331-x332)));

	if (t69 != 8LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = -1;
	int32_t x335 = INT32_MIN;
	int32_t t70 = 134991;

	t70 = (x333%(x334^(x335-x336)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x337 = 108U;
	volatile int16_t x338 = -1;
	volatile int64_t x339 = -1LL;
	volatile uint32_t x340 = 8U;
	static volatile int64_t t71 = -1LL;

	t71 = (x337%(x338^(x339-x340)));

	if (t71 != 4LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x345 = INT16_MAX;
	int8_t x346 = 2;
	static int16_t x347 = INT16_MAX;
	int64_t t72 = -10078991011LL;

	t72 = (x345%(x346^(x347-x348)));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = 24;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t73 = 935570843139LLU;

	t73 = (x353%(x354^(x355-x356)));

	if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x362 = 1;
	int8_t x363 = INT8_MAX;
	int16_t x364 = -1;

	t74 = (x361%(x362^(x363-x364)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x365 = -10;
	int32_t x366 = -1;
	static int32_t t75 = -110;

	t75 = (x365%(x366^(x367-x368)));

	if (t75 != -10) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x369 = 5;
	int8_t x370 = INT8_MAX;
	uint8_t x371 = 13U;
	int32_t t76 = 90803189;

	t76 = (x369%(x370^(x371-x372)));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x373 = -1;
	volatile uint8_t x374 = 1U;
	static uint16_t x375 = 5U;
	static volatile int64_t x376 = INT64_MAX;

	t77 = (x373%(x374^(x375-x376)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x381 = 306U;
	volatile int64_t t78 = -2755LL;

	t78 = (x381%(x382^(x383-x384)));

	if (t78 != 306LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x385 = 176488811020LLU;
	volatile int32_t x386 = -6731;
	int64_t x387 = 14522234500LL;
	int16_t x388 = -3;

	t79 = (x385%(x386^(x387-x388)));

	if (t79 != 176488811020LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x390 = INT8_MIN;
	static int64_t x391 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t80 = 15768247191LLU;

	t80 = (x389%(x390^(x391-x392)));

	if (t80 != 253LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 3U;
	volatile int32_t t81 = 753;

	t81 = (x393%(x394^(x395-x396)));

	if (t81 != -32) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x399 = -6;
	uint8_t x400 = 1U;
	volatile int32_t t82 = -225;

	t82 = (x397%(x398^(x399-x400)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	int16_t x404 = INT16_MIN;

	t83 = (x401%(x402^(x403-x404)));

	if (t83 != 22U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MAX;
	int64_t x406 = INT64_MAX;
	static int8_t x407 = INT8_MIN;
	int32_t x408 = -1;

	t84 = (x405%(x406^(x407-x408)));

	if (t84 != 125LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x414 = INT8_MAX;
	volatile int64_t t85 = -1912730653466197LL;

	t85 = (x413%(x414^(x415-x416)));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x417 = 104U;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = -1;
	int64_t t86 = 7828731126337LL;

	t86 = (x417%(x418^(x419-x420)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x421 = UINT32_MAX;
	static int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile uint32_t t87 = 4069135U;

	t87 = (x421%(x422^(x423-x424)));

	if (t87 != 769U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = INT64_MIN;
	static int8_t x426 = -1;
	int16_t x427 = 91;
	static volatile int64_t t88 = 1LL;

	t88 = (x425%(x426^(x427-x428)));

	if (t88 != -502LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = INT16_MIN;
	volatile uint32_t x430 = 44279451U;
	uint16_t x431 = 6298U;
	int16_t x432 = INT16_MAX;
	volatile uint32_t t89 = 336408012U;

	t89 = (x429%(x430^(x431-x432)));

	if (t89 != 44253696U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x433 = UINT16_MAX;
	static int16_t x434 = -2;
	volatile int8_t x435 = INT8_MAX;
	uint32_t x436 = 421845U;
	volatile uint32_t t90 = 457U;

	t90 = (x433%(x434^(x435-x436)));

	if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x441 = -1LL;
	static int8_t x442 = -53;
	static int16_t x444 = -1;
	volatile int64_t t91 = 222LL;

	t91 = (x441%(x442^(x443-x444)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = 66154987822732LLU;
	int8_t x447 = INT8_MIN;
	volatile uint8_t x448 = 11U;

	t92 = (x445%(x446^(x447-x448)));

	if (t92 != 130LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x449 = INT32_MIN;
	volatile int32_t x450 = -1;
	uint64_t x451 = 49300829LLU;
	uint64_t t93 = 2LLU;

	t93 = (x449%(x450^(x451-x452)));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x453 = INT64_MIN;
	uint8_t x455 = 2U;
	volatile uint8_t x456 = 2U;
	volatile int64_t t94 = -5888356246239512LL;

	t94 = (x453%(x454^(x455-x456)));

	if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x459 = 17607024;
	static int8_t x460 = INT8_MAX;
	uint64_t t95 = 381522LLU;

	t95 = (x457%(x458^(x459-x460)));

	if (t95 != 12406802LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x461 = 14U;
	volatile uint16_t x462 = 16U;
	uint8_t x463 = 1U;
	uint8_t x464 = UINT8_MAX;

	t96 = (x461%(x462^(x463-x464)));

	if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x465 = 1333U;
	int32_t x466 = -788509;
	static uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MAX;
	static volatile int32_t t97 = -35;

	t97 = (x465%(x466^(x467-x468)));

	if (t97 != 1333) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MIN;
	int16_t x471 = -6031;
	int32_t x472 = -5136481;
	int32_t t98 = -1;

	t98 = (x469%(x470^(x471-x472)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = -24;
	int16_t x474 = -6394;
	volatile int8_t x475 = -11;
	int8_t x476 = INT8_MIN;
	volatile int32_t t99 = 5528652;

	t99 = (x473%(x474^(x475-x476)));

	if (t99 != -24) { NG(); } else { ; }
	
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

