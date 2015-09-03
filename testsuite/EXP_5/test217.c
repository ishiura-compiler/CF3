#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = -1LL;
int64_t x7 = -419LL;
static uint8_t x21 = 16U;
int16_t x25 = INT16_MAX;
int16_t x31 = INT16_MIN;
static int32_t t8 = -8629;
static int64_t x41 = INT64_MIN;
static uint16_t x45 = UINT16_MAX;
int8_t x52 = INT8_MIN;
int32_t x59 = INT32_MIN;
uint64_t x65 = 1509133LLU;
uint16_t x66 = 1U;
int64_t x75 = 262959243707615531LL;
volatile int32_t t15 = 69;
uint32_t x85 = 134620070U;
int8_t x86 = INT8_MIN;
int32_t x87 = INT32_MIN;
int8_t x90 = INT8_MAX;
uint32_t x91 = 4U;
int64_t x97 = INT64_MIN;
volatile int16_t x98 = INT16_MAX;
volatile int32_t t21 = 0;
uint32_t x105 = 13U;
uint8_t x107 = 95U;
volatile int32_t t22 = -154764541;
static int32_t x113 = -1;
int64_t x115 = INT64_MAX;
volatile uint8_t x117 = UINT8_MAX;
int8_t x119 = INT8_MAX;
int32_t t25 = 15410771;
int32_t x126 = -4615259;
volatile int64_t x132 = INT64_MIN;
static volatile int64_t x144 = -1LL;
int8_t x178 = 1;
uint8_t x179 = UINT8_MAX;
volatile int32_t t36 = -5195;
int32_t x188 = INT32_MIN;
static uint32_t x189 = UINT32_MAX;
uint32_t x191 = 6302440U;
volatile int32_t t39 = -3;
int16_t x199 = -7;
static volatile int64_t x205 = INT64_MIN;
int8_t x206 = -1;
volatile uint8_t x228 = 4U;
int32_t t48 = -1;
volatile int32_t t49 = -198364882;
static volatile int32_t x250 = INT32_MIN;
int16_t x263 = INT16_MIN;
int64_t x269 = INT64_MAX;
static volatile int16_t x272 = INT16_MIN;
static int32_t t56 = 1;
int16_t x282 = 47;
uint16_t x284 = UINT16_MAX;
int16_t x288 = INT16_MIN;
uint16_t x296 = UINT16_MAX;
volatile int16_t x297 = 15;
volatile int32_t t63 = -1003;
uint8_t x303 = 12U;
volatile int32_t t65 = 91318810;
uint16_t x321 = UINT16_MAX;
uint8_t x323 = 106U;
static int16_t x324 = INT16_MAX;
int32_t t69 = -545559;
uint32_t x333 = UINT32_MAX;
uint16_t x334 = UINT16_MAX;
uint8_t x344 = 7U;
static volatile int32_t x356 = -15155098;
static int32_t t76 = -367047220;
static uint32_t x363 = 1U;
static volatile int16_t x370 = -15;
static int32_t x372 = INT32_MAX;
int32_t t78 = 33;
uint8_t x373 = UINT8_MAX;
int32_t x375 = INT32_MAX;
int8_t x379 = -1;
int32_t x387 = 89555325;
static int32_t x388 = INT32_MIN;
int16_t x392 = -1;
uint32_t x397 = 26144606U;
int32_t x406 = -1;
int16_t x420 = INT16_MAX;
volatile int8_t x423 = INT8_MAX;
static int8_t x424 = INT8_MIN;
int32_t t89 = -307917;
int16_t x427 = -7925;
volatile int32_t t90 = -63917447;
int16_t x432 = INT16_MAX;
volatile int64_t x440 = 936LL;
int8_t x442 = 16;
int64_t x450 = 3770743985260322LL;
static uint64_t x453 = 3098LLU;
static int8_t x464 = -1;
static volatile int32_t t99 = -222286334;


void f0(void) {
	volatile int64_t x1 = -129366LL;
	int8_t x2 = -2;
	int16_t x4 = 4782;
	static int32_t t0 = -499003769;

	t0 = (x1<((x2-x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint64_t x6 = 2046690LLU;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 17533;

	t1 = (x5<((x6-x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = 49LL;
	int64_t x11 = 42162269362LL;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -474;

	t2 = (x9<((x10-x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile int64_t x14 = 1791118190990022LL;
	volatile int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = -162745;

	t3 = (x13<((x14-x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 3LLU;
	volatile int16_t x19 = -87;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -51;

	t4 = (x17<((x18-x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 0U;
	int32_t x23 = -1;
	uint8_t x24 = 29U;
	static int32_t t5 = 404831;

	t5 = (x21<((x22-x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	static int16_t x27 = INT16_MAX;
	int64_t x28 = -102573LL;
	volatile int32_t t6 = 14;

	t6 = (x25<((x26-x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint8_t x30 = 44U;
	int8_t x32 = 6;
	int32_t t7 = 123749;

	t7 = (x29<((x30-x31)/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 0;
	int8_t x38 = -1;
	static volatile int16_t x39 = 0;
	int64_t x40 = -615742428636732LL;

	t8 = (x37<((x38-x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 12U;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = UINT32_MAX;
	int32_t t9 = 51;

	t9 = (x41<((x42-x43)/x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = -172294382;
	int8_t x47 = INT8_MIN;
	int16_t x48 = 48;
	int32_t t10 = -1;

	t10 = (x45<((x46-x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static volatile int64_t x50 = -1LL;
	volatile uint32_t x51 = 1895987896U;
	int32_t t11 = -12;

	t11 = (x49<((x50-x51)/x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static uint32_t x58 = UINT32_MAX;
	uint64_t x60 = 2759781452634LLU;
	int32_t t12 = -4156214;

	t12 = (x57<((x58-x59)/x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x61 = 13477;
	int16_t x62 = INT16_MIN;
	volatile uint64_t x63 = 6576446LLU;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t13 = -4;

	t13 = (x61<((x62-x63)/x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x67 = INT8_MAX;
	int8_t x68 = -1;
	volatile int32_t t14 = -2648;

	t14 = (x65<((x66-x67)/x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	volatile int16_t x76 = 19;

	t15 = (x73<((x74-x75)/x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 25715145532LLU;
	static int32_t x80 = -3;
	volatile int32_t t16 = -3048569;

	t16 = (x77<((x78-x79)/x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x88 = INT8_MAX;
	static int32_t t17 = -999969;

	t17 = (x85<((x86-x87)/x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -88;
	volatile int8_t x92 = -1;
	int32_t t18 = 918;

	t18 = (x89<((x90-x91)/x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	static int32_t x94 = -1;
	volatile int8_t x95 = -1;
	static int32_t x96 = INT32_MIN;
	int32_t t19 = -43578725;

	t19 = (x93<((x94-x95)/x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x99 = 46U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t20 = -2994942;

	t20 = (x97<((x98-x99)/x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 2U;
	static volatile int8_t x103 = -1;
	uint8_t x104 = UINT8_MAX;

	t21 = (x101<((x102-x103)/x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x106 = -6578578LL;
	int8_t x108 = INT8_MIN;

	t22 = (x105<((x106-x107)/x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = UINT64_MAX;
	uint32_t x110 = 44U;
	int16_t x111 = INT16_MAX;
	static int8_t x112 = -1;
	int32_t t23 = 693534788;

	t23 = (x109<((x110-x111)/x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x114 = 3658U;
	int8_t x116 = -4;
	static int32_t t24 = 463626;

	t24 = (x113<((x114-x115)/x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = 1284;
	uint32_t x120 = 45420407U;

	t25 = (x117<((x118-x119)/x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MAX;
	uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MAX;
	uint64_t x124 = UINT64_MAX;
	int32_t t26 = 64844;

	t26 = (x121<((x122-x123)/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	static int16_t x127 = 1;
	uint8_t x128 = 5U;
	int32_t t27 = 9;

	t27 = (x125<((x126-x127)/x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x129 = -1;
	int16_t x130 = -1;
	int64_t x131 = INT64_MAX;
	int32_t t28 = -41975;

	t28 = (x129<((x130-x131)/x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -47796959;
	static uint32_t x134 = 12773820U;
	static volatile int8_t x135 = 25;
	int64_t x136 = -5923052LL;
	static volatile int32_t t29 = 445673143;

	t29 = (x133<((x134-x135)/x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x141 = UINT64_MAX;
	volatile uint64_t x142 = 164607886195417LLU;
	int64_t x143 = 22742LL;
	int32_t t30 = 27362;

	t30 = (x141<((x142-x143)/x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	static int8_t x147 = -55;
	uint64_t x148 = 9LLU;
	int32_t t31 = -13234492;

	t31 = (x145<((x146-x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x157 = INT16_MIN;
	uint16_t x158 = 369U;
	int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	int32_t t32 = -132378247;

	t32 = (x157<((x158-x159)/x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = 298604U;
	int16_t x166 = INT16_MIN;
	volatile int64_t x167 = -1LL;
	int8_t x168 = -42;
	int32_t t33 = 3;

	t33 = (x165<((x166-x167)/x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x169 = 1LLU;
	volatile int32_t x170 = -1639632;
	int32_t x171 = 1594;
	int64_t x172 = -4LL;
	int32_t t34 = -48073;

	t34 = (x169<((x170-x171)/x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = -1;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	static int32_t x176 = 3;
	static int32_t t35 = -1513482;

	t35 = (x173<((x174-x175)/x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 429367U;
	int8_t x180 = 4;

	t36 = (x177<((x178-x179)/x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x181 = INT16_MIN;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = 8;
	volatile uint8_t x184 = 5U;
	int32_t t37 = -1;

	t37 = (x181<((x182-x183)/x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = 31939LLU;
	volatile int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	volatile int32_t t38 = 10286;

	t38 = (x185<((x186-x187)/x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x190 = 51949455U;
	int16_t x192 = INT16_MIN;

	t39 = (x189<((x190-x191)/x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MAX;
	uint16_t x194 = 332U;
	int16_t x195 = INT16_MAX;
	int64_t x196 = INT64_MIN;
	static int32_t t40 = 225083548;

	t40 = (x193<((x194-x195)/x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x198 = INT8_MAX;
	volatile int32_t x200 = -188;
	int32_t t41 = 36128;

	t41 = (x197<((x198-x199)/x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x207 = 14280719926051LLU;
	uint64_t x208 = 1208702559814LLU;
	volatile int32_t t42 = 2342023;

	t42 = (x205<((x206-x207)/x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = 3092U;
	int16_t x214 = -11116;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t43 = 19;

	t43 = (x213<((x214-x215)/x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	volatile int16_t x219 = -1;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t44 = -4806556;

	t44 = (x217<((x218-x219)/x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -1;
	volatile int32_t t45 = -109;

	t45 = (x221<((x222-x223)/x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x225 = 4U;
	int8_t x226 = -48;
	volatile int16_t x227 = INT16_MIN;
	volatile int32_t t46 = 19;

	t46 = (x225<((x226-x227)/x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 3U;
	volatile int16_t x230 = 6113;
	int16_t x231 = INT16_MIN;
	static uint16_t x232 = 311U;
	static volatile int32_t t47 = -2741;

	t47 = (x229<((x230-x231)/x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	int16_t x240 = -1;

	t48 = (x237<((x238-x239)/x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x241 = 1;
	static volatile uint32_t x242 = 98U;
	int64_t x243 = 63720987363005LL;
	int32_t x244 = -20730580;

	t49 = (x241<((x242-x243)/x244));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = -1;
	int16_t x246 = INT16_MIN;
	static uint16_t x247 = 365U;
	int16_t x248 = INT16_MAX;
	int32_t t50 = 23153445;

	t50 = (x245<((x246-x247)/x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x249 = -5517;
	volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = 3768472U;
	static int32_t t51 = -1;

	t51 = (x249<((x250-x251)/x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x253 = 873U;
	volatile uint32_t x254 = 8U;
	volatile int8_t x255 = 0;
	volatile int32_t x256 = INT32_MAX;
	volatile int32_t t52 = 474227;

	t52 = (x253<((x254-x255)/x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x257 = 353U;
	int64_t x258 = -1LL;
	volatile int32_t x259 = -3962;
	uint32_t x260 = 3213458U;
	int32_t t53 = 3;

	t53 = (x257<((x258-x259)/x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = 9U;
	int16_t x264 = INT16_MIN;
	int32_t t54 = -10;

	t54 = (x261<((x262-x263)/x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = -1;
	uint64_t x266 = 1316769600499757753LLU;
	int64_t x267 = 22873672793LL;
	int16_t x268 = INT16_MAX;
	int32_t t55 = 162031718;

	t55 = (x265<((x266-x267)/x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x270 = UINT8_MAX;
	volatile int16_t x271 = INT16_MIN;

	t56 = (x269<((x270-x271)/x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -14474LL;
	int32_t x274 = INT32_MAX;
	int8_t x275 = 16;
	int32_t x276 = -1;
	volatile int32_t t57 = 879;

	t57 = (x273<((x274-x275)/x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MAX;
	uint32_t x278 = 286735U;
	uint64_t x279 = 321547053675099324LLU;
	int64_t x280 = 1319249LL;
	int32_t t58 = -39602452;

	t58 = (x277<((x278-x279)/x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x281 = INT32_MIN;
	uint8_t x283 = 118U;
	static int32_t t59 = 39;

	t59 = (x281<((x282-x283)/x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = INT64_MIN;
	static int8_t x286 = -1;
	uint8_t x287 = 63U;
	int32_t t60 = 0;

	t60 = (x285<((x286-x287)/x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x289 = 2725058744015264LLU;
	uint64_t x290 = UINT64_MAX;
	static int8_t x291 = -1;
	uint64_t x292 = 105691698LLU;
	static volatile int32_t t61 = -7;

	t61 = (x289<((x290-x291)/x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x293 = 2629006328LL;
	volatile int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	int32_t t62 = 80149;

	t62 = (x293<((x294-x295)/x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x298 = -1LL;
	int16_t x299 = -3283;
	int64_t x300 = 32901060LL;

	t63 = (x297<((x298-x299)/x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint8_t x302 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t64 = -5;

	t64 = (x301<((x302-x303)/x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x305 = INT64_MIN;
	static uint32_t x306 = 11U;
	volatile int8_t x307 = -4;
	uint64_t x308 = 1530882LLU;

	t65 = (x305<((x306-x307)/x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x309 = -5259449;
	volatile int64_t x310 = -1LL;
	uint32_t x311 = 19935U;
	int16_t x312 = 7;
	int32_t t66 = -6;

	t66 = (x309<((x310-x311)/x312));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x313 = -63748241132895382LL;
	uint8_t x314 = 55U;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -396555956722LL;
	volatile int32_t t67 = 18;

	t67 = (x313<((x314-x315)/x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = UINT16_MAX;
	volatile uint8_t x318 = 59U;
	static int32_t x319 = -1;
	static int8_t x320 = -1;
	static volatile int32_t t68 = 1411999;

	t68 = (x317<((x318-x319)/x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x322 = 3295735LL;

	t69 = (x321<((x322-x323)/x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 301810U;
	uint16_t x330 = 14540U;
	static int32_t x331 = -52158954;
	static int32_t x332 = INT32_MIN;
	volatile int32_t t70 = -294;

	t70 = (x329<((x330-x331)/x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x335 = INT8_MIN;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t71 = 482751;

	t71 = (x333<((x334-x335)/x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x337 = INT64_MAX;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	int32_t x340 = INT32_MAX;
	int32_t t72 = 269331631;

	t72 = (x337<((x338-x339)/x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x341 = 74U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	int32_t t73 = 5652093;

	t73 = (x341<((x342-x343)/x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = INT16_MIN;
	volatile int64_t x350 = 898272858681551010LL;
	static int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = 15905U;
	int32_t t74 = -57;

	t74 = (x349<((x350-x351)/x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = -1LL;
	uint8_t x355 = 1U;
	volatile int32_t t75 = 1279;

	t75 = (x353<((x354-x355)/x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = -1;
	int16_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;

	t76 = (x357<((x358-x359)/x360));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = -256;
	int64_t x362 = -1LL;
	int8_t x364 = 59;
	volatile int32_t t77 = 51;

	t77 = (x361<((x362-x363)/x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x369 = 27834084343LLU;
	uint32_t x371 = UINT32_MAX;

	t78 = (x369<((x370-x371)/x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x374 = 1U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t79 = 3;

	t79 = (x373<((x374-x375)/x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = -62;
	int64_t x380 = -80992874854LL;
	volatile int32_t t80 = 85752;

	t80 = (x377<((x378-x379)/x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x381 = 3;
	static volatile int8_t x382 = -2;
	static uint32_t x383 = 466U;
	uint64_t x384 = 42858843222LLU;
	static int32_t t81 = 656832169;

	t81 = (x381<((x382-x383)/x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -32;
	uint8_t x386 = 103U;
	int32_t t82 = -30950445;

	t82 = (x385<((x386-x387)/x388));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x389 = 0;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -371;
	volatile int32_t t83 = 835420;

	t83 = (x389<((x390-x391)/x392));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = INT32_MAX;
	static int8_t x394 = -27;
	int16_t x395 = 2027;
	int64_t x396 = INT64_MAX;
	static int32_t t84 = -94;

	t84 = (x393<((x394-x395)/x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x398 = 0;
	int8_t x399 = -1;
	int8_t x400 = 21;
	volatile int32_t t85 = 94553730;

	t85 = (x397<((x398-x399)/x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 8U;
	uint64_t x402 = 2007LLU;
	uint32_t x403 = 283U;
	int8_t x404 = -1;
	static int32_t t86 = 63;

	t86 = (x401<((x402-x403)/x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -1;
	static int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	int32_t t87 = -1;

	t87 = (x405<((x406-x407)/x408));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MAX;
	uint16_t x418 = 3U;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t t88 = 9160817;

	t88 = (x417<((x418-x419)/x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = -516592416826165LL;
	static uint8_t x422 = 14U;

	t89 = (x421<((x422-x423)/x424));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = -9;
	int64_t x426 = 59611184LL;
	uint64_t x428 = UINT64_MAX;

	t90 = (x425<((x426-x427)/x428));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x429 = INT32_MIN;
	static volatile uint32_t x430 = 168816661U;
	int8_t x431 = -1;
	int32_t t91 = -97684;

	t91 = (x429<((x430-x431)/x432));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = 1;
	int8_t x434 = 0;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = -1LL;
	static volatile int32_t t92 = 50683;

	t92 = (x433<((x434-x435)/x436));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -1LL;
	volatile int16_t x438 = -35;
	static int16_t x439 = INT16_MAX;
	volatile int32_t t93 = 0;

	t93 = (x437<((x438-x439)/x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = INT16_MIN;
	int16_t x443 = -1;
	int16_t x444 = INT16_MAX;
	volatile int32_t t94 = -244828096;

	t94 = (x441<((x442-x443)/x444));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x445 = INT64_MAX;
	uint64_t x446 = 826LLU;
	static uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 2U;
	static volatile int32_t t95 = -124301;

	t95 = (x445<((x446-x447)/x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x449 = 22U;
	static uint64_t x451 = 531023513888308169LLU;
	static int64_t x452 = -52497013LL;
	int32_t t96 = -36719;

	t96 = (x449<((x450-x451)/x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x454 = 64;
	uint16_t x455 = 1103U;
	int32_t x456 = 57;
	static int32_t t97 = -3;

	t97 = (x453<((x454-x455)/x456));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x457 = UINT64_MAX;
	uint64_t x458 = UINT64_MAX;
	static int8_t x459 = INT8_MAX;
	int32_t x460 = INT32_MAX;
	volatile int32_t t98 = -2;

	t98 = (x457<((x458-x459)/x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x461 = 0;
	uint32_t x462 = UINT32_MAX;
	int32_t x463 = INT32_MAX;

	t99 = (x461<((x462-x463)/x464));

	if (t99 != 0) { NG(); } else { ; }
	
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

