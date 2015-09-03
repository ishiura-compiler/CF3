#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
uint16_t x12 = 976U;
volatile int32_t t4 = -57;
volatile uint64_t x23 = 124555LLU;
int16_t x30 = INT16_MIN;
volatile uint8_t x33 = UINT8_MAX;
int8_t x37 = INT8_MAX;
static int32_t t8 = -1;
static int8_t x43 = INT8_MAX;
int16_t x45 = INT16_MAX;
uint64_t x52 = 51892253175LLU;
static int64_t x62 = INT64_MIN;
int32_t t13 = 262539967;
int64_t x69 = 83307744LL;
uint64_t x71 = 1715851269LLU;
int16_t x72 = INT16_MIN;
int64_t x76 = INT64_MIN;
volatile int16_t x82 = -484;
volatile int16_t x86 = 0;
int8_t x88 = INT8_MAX;
int8_t x96 = INT8_MIN;
static int32_t t21 = 1;
uint32_t x108 = 295U;
volatile int64_t t25 = 20860862108LL;
int64_t x124 = INT64_MAX;
int32_t t29 = -21878576;
static int64_t x139 = -1LL;
static uint64_t x143 = 31632601570040LLU;
int64_t t33 = 3LL;
uint64_t x171 = 828714043LLU;
int16_t x176 = INT16_MIN;
int32_t t39 = INT32_MAX;
uint32_t x180 = 1073513833U;
volatile int32_t x181 = INT32_MIN;
static int32_t x183 = -910689;
volatile int16_t x184 = 702;
int8_t x197 = INT8_MIN;
int64_t t45 = -1750LL;
int16_t x205 = -1;
static volatile int16_t x217 = INT16_MIN;
uint16_t x218 = 13301U;
int64_t t50 = -3071650402382LL;
uint8_t x223 = 6U;
int64_t x224 = -1LL;
int32_t x227 = -1;
uint64_t x234 = 51084143LLU;
int64_t x247 = INT64_MIN;
volatile int32_t t57 = -1;
volatile int8_t x252 = INT8_MIN;
int64_t x254 = -1LL;
uint64_t x260 = 205LLU;
static int32_t x267 = -1;
int32_t x268 = 98084;
uint16_t x270 = 6421U;
uint16_t x271 = 1U;
uint32_t x279 = 31708621U;
int16_t x280 = INT16_MIN;
volatile int32_t t65 = 6;
uint16_t x281 = UINT16_MAX;
uint32_t x284 = UINT32_MAX;
int8_t x290 = -1;
int32_t x292 = 648308500;
volatile int16_t x293 = INT16_MIN;
volatile uint64_t x305 = UINT64_MAX;
uint8_t x307 = 15U;
int8_t x311 = INT8_MAX;
int32_t x315 = 1;
static int64_t t74 = 53327609675533LL;
volatile int8_t x317 = INT8_MIN;
static int32_t x318 = INT32_MIN;
uint16_t x326 = 2U;
int64_t x332 = -3634LL;
volatile uint32_t x340 = 1312U;
int8_t x343 = 0;
int64_t x346 = INT64_MIN;
volatile int8_t x347 = INT8_MIN;
volatile uint64_t t83 = UINT64_MAX;
uint16_t x360 = 1U;
uint64_t t85 = 1LLU;
int8_t x365 = -13;
int16_t x366 = INT16_MIN;
int16_t x368 = INT16_MIN;
int64_t x371 = 5514LL;
static volatile int32_t x372 = -1;
uint16_t x376 = 5U;
uint64_t t89 = 733438000LLU;
uint32_t x381 = 13766324U;
int64_t x386 = -1LL;
volatile uint8_t x387 = 0U;
int64_t x389 = -9091349274LL;
uint16_t x394 = 31U;
volatile int32_t t94 = 44764;
int64_t x408 = -1LL;
volatile int64_t x409 = 32462522668LL;
int64_t t99 = -74003LL;


void f0(void) {
	volatile int8_t x1 = -17;
	volatile uint16_t x2 = UINT16_MAX;
	int8_t x4 = 7;
	int32_t t0 = -30;

	t0 = (x1+((x2<x3)%x4));

	if (t0 != -17) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	volatile int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 2052880881LLU;
	volatile uint64_t t1 = 333LLU;

	t1 = (x5+((x6<x7)%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -85;
	int64_t x10 = INT64_MIN;
	int16_t x11 = -196;
	volatile int32_t t2 = -47;

	t2 = (x9+((x10<x11)%x12));

	if (t2 != -84) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x14 = 24566LLU;
	volatile int32_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 13077;

	t3 = (x13+((x14<x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile uint64_t x18 = 1538356497040590951LLU;
	volatile uint8_t x19 = UINT8_MAX;
	int8_t x20 = INT8_MIN;

	t4 = (x17+((x18<x19)%x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = -1LL;
	uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = INT64_MAX;

	t5 = (x21+((x22<x23)%x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int64_t x31 = -4825LL;
	static uint16_t x32 = UINT16_MAX;
	int32_t t6 = -509563;

	t6 = (x29+((x30<x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -1LL;
	int64_t t7 = 2111728183930LL;

	t7 = (x33+((x34<x35)%x36));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = UINT16_MAX;
	uint8_t x39 = 99U;
	uint16_t x40 = 14U;

	t8 = (x37+((x38<x39)%x40));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 66LL;
	int8_t x42 = INT8_MIN;
	int64_t x44 = -90556083246LL;
	volatile int64_t t9 = -1831310150LL;

	t9 = (x41+((x42<x43)%x44));

	if (t9 != 67LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	volatile uint32_t x48 = 3415250U;
	uint32_t t10 = 63U;

	t10 = (x45+((x46<x47)%x48));

	if (t10 != 32768U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	static int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile uint64_t t11 = 62LLU;

	t11 = (x49+((x50<x51)%x52));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	int64_t x63 = INT64_MIN;
	static volatile uint32_t x64 = 116435860U;
	static uint32_t t12 = 1U;

	t12 = (x61+((x62<x63)%x64));

	if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 4;
	uint16_t x66 = 24885U;
	volatile int16_t x67 = INT16_MAX;
	uint16_t x68 = UINT16_MAX;

	t13 = (x65+((x66<x67)%x68));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x70 = 2;
	volatile int64_t t14 = 120LL;

	t14 = (x69+((x70<x71)%x72));

	if (t14 != 83307745LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MAX;
	static uint64_t x74 = UINT64_MAX;
	volatile uint8_t x75 = 3U;
	int64_t t15 = INT64_MAX;

	t15 = (x73+((x74<x75)%x76));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = 0;
	int32_t x78 = INT32_MAX;
	uint16_t x79 = UINT16_MAX;
	int64_t x80 = -304LL;
	static int64_t t16 = -28673132LL;

	t16 = (x77+((x78<x79)%x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int32_t x83 = 56;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 40410996LLU;

	t17 = (x81+((x82<x83)%x84));

	if (t17 != 65536LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x85 = -2148834592923291LL;
	uint8_t x87 = 0U;
	volatile int64_t t18 = 0LL;

	t18 = (x85+((x86<x87)%x88));

	if (t18 != -2148834592923291LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = 27;
	static int32_t x90 = -13;
	static int16_t x91 = 0;
	static volatile uint64_t x92 = 313662811082191LLU;
	volatile uint64_t t19 = 1344968713843687LLU;

	t19 = (x89+((x90<x91)%x92));

	if (t19 != 28LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x93 = -1;
	static volatile int32_t x94 = -461707682;
	int16_t x95 = INT16_MAX;
	static volatile int32_t t20 = 1;

	t20 = (x93+((x94<x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	int16_t x98 = INT16_MAX;
	volatile uint8_t x99 = 110U;
	uint16_t x100 = UINT16_MAX;

	t21 = (x97+((x98<x99)%x100));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 578U;
	static uint16_t x106 = 95U;
	int64_t x107 = -1816739LL;
	volatile uint32_t t22 = 53360309U;

	t22 = (x105+((x106<x107)%x108));

	if (t22 != 578U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = 549522520;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MAX;
	int64_t x112 = -1LL;
	int64_t t23 = -187LL;

	t23 = (x109+((x110<x111)%x112));

	if (t23 != 549522520LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	static int16_t x114 = -1;
	int8_t x115 = -2;
	volatile int8_t x116 = -33;
	int64_t t24 = INT64_MAX;

	t24 = (x113+((x114<x115)%x116));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1LL;
	static volatile int8_t x118 = INT8_MAX;
	uint64_t x119 = 7021202079LLU;
	int64_t x120 = 747238514317LL;

	t25 = (x117+((x118<x119)%x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 33685159U;
	static int16_t x122 = INT16_MIN;
	uint64_t x123 = 3834662642845LLU;
	volatile int64_t t26 = 134LL;

	t26 = (x121+((x122<x123)%x124));

	if (t26 != 33685159LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = INT16_MAX;
	volatile uint16_t x126 = UINT16_MAX;
	int8_t x127 = -1;
	static uint8_t x128 = 3U;
	volatile int32_t t27 = 3;

	t27 = (x125+((x126<x127)%x128));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t28 = -916936LL;

	t28 = (x129+((x130<x131)%x132));

	if (t28 != 65536LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MIN;

	t29 = (x133+((x134<x135)%x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	static volatile uint32_t x140 = 85196U;
	volatile uint32_t t30 = 6960U;

	t30 = (x137+((x138<x139)%x140));

	if (t30 != 4294967168U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 135470212015023708LLU;
	volatile int8_t x142 = INT8_MIN;
	uint16_t x144 = 169U;
	uint64_t t31 = 1LLU;

	t31 = (x141+((x142<x143)%x144));

	if (t31 != 135470212015023708LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 1446U;
	volatile int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MAX;
	static volatile uint8_t x148 = 41U;
	volatile int32_t t32 = -10495;

	t32 = (x145+((x146<x147)%x148));

	if (t32 != 1447) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x149 = 5U;
	static volatile uint32_t x150 = 10148U;
	uint8_t x151 = 6U;
	int64_t x152 = INT64_MAX;

	t33 = (x149+((x150<x151)%x152));

	if (t33 != 5LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = -1LL;
	int64_t x154 = INT64_MAX;
	int8_t x155 = 1;
	int64_t x156 = 55LL;
	int64_t t34 = 3453401106698609LL;

	t34 = (x153+((x154<x155)%x156));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 11U;
	volatile int8_t x158 = INT8_MIN;
	volatile uint32_t x159 = 108686U;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = 1;

	t35 = (x157+((x158<x159)%x160));

	if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = 998804LL;
	static int64_t x162 = -18410986743778344LL;
	int8_t x163 = -1;
	int8_t x164 = INT8_MAX;
	static volatile int64_t t36 = 1415931LL;

	t36 = (x161+((x162<x163)%x164));

	if (t36 != 998805LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = -340;
	int8_t x166 = 0;
	volatile int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MIN;
	int32_t t37 = -2265;

	t37 = (x165+((x166<x167)%x168));

	if (t37 != -340) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = UINT16_MAX;
	static int32_t x170 = INT32_MIN;
	static uint64_t x172 = 641196798684393837LLU;
	uint64_t t38 = 258017LLU;

	t38 = (x169+((x170<x171)%x172));

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MAX;
	volatile int32_t x174 = -1;
	uint64_t x175 = 1044579819777757LLU;

	t39 = (x173+((x174<x175)%x176));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1;
	static int8_t x178 = 13;
	volatile int16_t x179 = INT16_MAX;
	volatile uint32_t t40 = 493120U;

	t40 = (x177+((x178<x179)%x180));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x182 = UINT16_MAX;
	volatile int32_t t41 = INT32_MIN;

	t41 = (x181+((x182<x183)%x184));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = -156;
	uint64_t x187 = 29307LLU;
	int8_t x188 = -1;
	uint32_t t42 = UINT32_MAX;

	t42 = (x185+((x186<x187)%x188));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x189 = 209642798475LLU;
	int16_t x190 = -87;
	int32_t x191 = 171;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t43 = 774179204115602LLU;

	t43 = (x189+((x190<x191)%x192));

	if (t43 != 209642798476LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x193 = INT8_MIN;
	uint32_t x194 = 14417U;
	uint8_t x195 = 37U;
	uint8_t x196 = 5U;
	volatile int32_t t44 = 782074200;

	t44 = (x193+((x194<x195)%x196));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x198 = -1;
	volatile int32_t x199 = 799947;
	int64_t x200 = -318736221LL;

	t45 = (x197+((x198<x199)%x200));

	if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MIN;
	static int16_t x203 = INT16_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t46 = 0;

	t46 = (x201+((x202<x203)%x204));

	if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x206 = 3304816U;
	int8_t x207 = INT8_MIN;
	int8_t x208 = -1;
	volatile int32_t t47 = -1;

	t47 = (x205+((x206<x207)%x208));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	static int32_t x212 = INT32_MIN;
	static uint64_t t48 = 1509698622LLU;

	t48 = (x209+((x210<x211)%x212));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = 7258;
	volatile uint8_t x215 = 0U;
	static int16_t x216 = INT16_MAX;
	int64_t t49 = INT64_MIN;

	t49 = (x213+((x214<x215)%x216));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x219 = 1634;
	int64_t x220 = 418803892601LL;

	t50 = (x217+((x218<x219)%x220));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	static volatile int8_t x222 = 6;
	int64_t t51 = INT64_MAX;

	t51 = (x221+((x222<x223)%x224));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 1LLU;
	static uint16_t x226 = UINT16_MAX;
	volatile uint8_t x228 = 29U;
	volatile uint64_t t52 = 15281LLU;

	t52 = (x225+((x226<x227)%x228));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	static int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	int32_t x232 = -2063243;
	volatile int32_t t53 = -3;

	t53 = (x229+((x230<x231)%x232));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 19U;
	uint32_t x235 = 18U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t54 = -1;

	t54 = (x233+((x234<x235)%x236));

	if (t54 != 19) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -7944;
	static int8_t x238 = INT8_MAX;
	int16_t x239 = -2;
	int32_t x240 = -239866;
	int32_t t55 = 17925441;

	t55 = (x237+((x238<x239)%x240));

	if (t55 != -7944) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 105528U;
	static uint8_t x242 = 3U;
	uint64_t x243 = 30561001778LLU;
	static int64_t x244 = INT64_MIN;
	int64_t t56 = -181LL;

	t56 = (x241+((x242<x243)%x244));

	if (t56 != 105529LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 1683U;
	int64_t x246 = INT64_MIN;
	uint16_t x248 = 26271U;

	t57 = (x245+((x246<x247)%x248));

	if (t57 != 1683) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 1393728936LLU;
	volatile int8_t x250 = 0;
	int8_t x251 = INT8_MIN;
	uint64_t t58 = 965093572243101504LLU;

	t58 = (x249+((x250<x251)%x252));

	if (t58 != 1393728936LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = 88217249050000LL;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = 3U;
	volatile int64_t t59 = -52LL;

	t59 = (x253+((x254<x255)%x256));

	if (t59 != 88217249050000LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 79U;
	int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	static volatile uint64_t t60 = 8846059992839LLU;

	t60 = (x257+((x258<x259)%x260));

	if (t60 != 80LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	volatile uint8_t x263 = 12U;
	static volatile int32_t x264 = -190057561;
	volatile int32_t t61 = 4;

	t61 = (x261+((x262<x263)%x264));

	if (t61 != 65536) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -1;
	static volatile uint32_t x266 = 284566380U;
	volatile int32_t t62 = 239368;

	t62 = (x265+((x266<x267)%x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x269 = -1LL;
	int32_t x272 = -1;
	int64_t t63 = 641530253362100620LL;

	t63 = (x269+((x270<x271)%x272));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = 5147539013403511LLU;
	uint8_t x274 = 51U;
	int64_t x275 = 723LL;
	int16_t x276 = 1648;
	uint64_t t64 = 1847446464429645173LLU;

	t64 = (x273+((x274<x275)%x276));

	if (t64 != 5147539013403512LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 0;
	uint32_t x278 = UINT32_MAX;

	t65 = (x277+((x278<x279)%x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 3U;
	uint32_t t66 = 36510U;

	t66 = (x281+((x282<x283)%x284));

	if (t66 != 65536U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = -1;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = -150;
	int8_t x288 = -1;
	volatile int32_t t67 = 149146590;

	t67 = (x285+((x286<x287)%x288));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x289 = 7U;
	uint32_t x291 = UINT32_MAX;
	int32_t t68 = 4198878;

	t68 = (x289+((x290<x291)%x292));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x294 = -1;
	int32_t x295 = 16300;
	volatile int16_t x296 = -1;
	int32_t t69 = -109;

	t69 = (x293+((x294<x295)%x296));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -1;
	volatile int8_t x298 = 0;
	int32_t x299 = INT32_MIN;
	static volatile int16_t x300 = -14;
	volatile int32_t t70 = 37;

	t70 = (x297+((x298<x299)%x300));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MAX;
	int16_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x301+((x302<x303)%x304));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = -1;
	static uint64_t x308 = 728034335675977894LLU;
	volatile uint64_t t72 = 938099LLU;

	t72 = (x305+((x306<x307)%x308));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 318U;
	static volatile int32_t x312 = INT32_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x309+((x310<x311)%x312));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = 171514081420130020LL;
	int64_t x316 = INT64_MIN;

	t74 = (x313+((x314<x315)%x316));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x319 = -1;
	int16_t x320 = -1;
	int32_t t75 = -856;

	t75 = (x317+((x318<x319)%x320));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 8952;
	volatile uint64_t x324 = 2476LLU;
	volatile uint64_t t76 = 101LLU;

	t76 = (x321+((x322<x323)%x324));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x325 = 61U;
	static uint64_t x327 = 27LLU;
	int64_t x328 = INT64_MAX;
	int64_t t77 = -2789873581LL;

	t77 = (x325+((x326<x327)%x328));

	if (t77 != 62LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 28U;
	int8_t x330 = 50;
	uint64_t x331 = 8590536644797273176LLU;
	int64_t t78 = -24222LL;

	t78 = (x329+((x330<x331)%x332));

	if (t78 != 29LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x333 = UINT64_MAX;
	static int64_t x334 = -1LL;
	int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t79 = 6950359884LLU;

	t79 = (x333+((x334<x335)%x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -1;
	int16_t x338 = 10477;
	uint8_t x339 = UINT8_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x337+((x338<x339)%x340));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = 1U;
	int32_t x342 = INT32_MAX;
	uint64_t x344 = 198348624625343LLU;
	static uint64_t t81 = 3951825461548LLU;

	t81 = (x341+((x342<x343)%x344));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 436638605U;
	int64_t x348 = INT64_MIN;
	int64_t t82 = 384513976068LL;

	t82 = (x345+((x346<x347)%x348));

	if (t82 != 436638606LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = 1266U;
	int64_t x355 = -1LL;
	int8_t x356 = -1;

	t83 = (x353+((x354<x355)%x356));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	volatile int32_t t84 = -225;

	t84 = (x357+((x358<x359)%x360));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x361 = 8U;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	static uint64_t x364 = UINT64_MAX;

	t85 = (x361+((x362<x363)%x364));

	if (t85 != 8LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x367 = INT32_MIN;
	volatile int32_t t86 = 71;

	t86 = (x365+((x366<x367)%x368));

	if (t86 != -13) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = -1;
	static volatile int16_t x370 = 120;
	int32_t t87 = 3;

	t87 = (x369+((x370<x371)%x372));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = 3LLU;
	volatile uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	uint64_t t88 = 38862082850868689LLU;

	t88 = (x373+((x374<x375)%x376));

	if (t88 != 3LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 7LLU;
	volatile int64_t x378 = -10331780102456790LL;
	int16_t x379 = 7;
	volatile int64_t x380 = -1LL;

	t89 = (x377+((x378<x379)%x380));

	if (t89 != 7LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = 27;
	volatile uint32_t t90 = 6U;

	t90 = (x381+((x382<x383)%x384));

	if (t90 != 13766324U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x385 = -1;
	volatile int64_t x388 = INT64_MIN;
	int64_t t91 = 2550585841602LL;

	t91 = (x385+((x386<x387)%x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x390 = 119946769016LLU;
	volatile int64_t x391 = INT64_MIN;
	int64_t x392 = -1LL;
	int64_t t92 = -62793743547LL;

	t92 = (x389+((x390<x391)%x392));

	if (t92 != -9091349274LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = 7823U;
	volatile int8_t x395 = 9;
	int32_t x396 = 15164;
	int32_t t93 = 35129160;

	t93 = (x393+((x394<x395)%x396));

	if (t93 != 7823) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x401 = INT8_MAX;
	static uint32_t x402 = 12115604U;
	volatile int16_t x403 = INT16_MIN;
	static volatile uint16_t x404 = 112U;

	t94 = (x401+((x402<x403)%x404));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 34976432U;
	int16_t x406 = -1;
	static uint8_t x407 = UINT8_MAX;
	volatile int64_t t95 = 129509605LL;

	t95 = (x405+((x406<x407)%x408));

	if (t95 != 34976432LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x410 = INT32_MIN;
	static volatile int8_t x411 = -7;
	int16_t x412 = -1;
	int64_t t96 = 6086404LL;

	t96 = (x409+((x410<x411)%x412));

	if (t96 != 32462522668LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = 396361801LLU;
	static uint8_t x414 = UINT8_MAX;
	int64_t x415 = 0LL;
	static uint8_t x416 = 85U;
	uint64_t t97 = 5586LLU;

	t97 = (x413+((x414<x415)%x416));

	if (t97 != 396361801LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x417 = 155046U;
	static int8_t x418 = INT8_MIN;
	int32_t x419 = -1;
	int8_t x420 = INT8_MAX;
	volatile uint32_t t98 = 262444891U;

	t98 = (x417+((x418<x419)%x420));

	if (t98 != 155047U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = -6108LL;
	static uint16_t x422 = UINT16_MAX;
	volatile int64_t x423 = 16LL;
	uint32_t x424 = UINT32_MAX;

	t99 = (x421+((x422<x423)%x424));

	if (t99 != -6108LL) { NG(); } else { ; }
	
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

