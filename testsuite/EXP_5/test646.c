#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint16_t x6 = UINT16_MAX;
int64_t x9 = INT64_MAX;
static uint8_t x14 = UINT8_MAX;
int32_t t3 = -190237;
uint32_t x19 = UINT32_MAX;
uint16_t x25 = 724U;
static int16_t x35 = 44;
static int32_t x39 = -5731010;
uint8_t x44 = 111U;
int32_t t10 = -926765974;
int64_t x46 = 29787801076LL;
int8_t x49 = INT8_MIN;
volatile int64_t x60 = INT64_MIN;
int16_t x61 = INT16_MIN;
int8_t x63 = INT8_MIN;
static uint8_t x66 = 2U;
static volatile int8_t x67 = INT8_MIN;
int32_t t16 = 232;
int16_t x85 = INT16_MAX;
uint64_t x90 = 220376881191872018LLU;
int64_t x91 = INT64_MIN;
int8_t x94 = -1;
volatile int16_t x102 = INT16_MAX;
int8_t x104 = INT8_MIN;
static int8_t x111 = -2;
int32_t x112 = INT32_MAX;
uint8_t x119 = 25U;
int16_t x129 = -1;
int32_t t30 = 1;
int64_t x134 = -1LL;
int8_t x135 = -14;
int64_t x140 = INT64_MIN;
int32_t x144 = INT32_MIN;
int16_t x147 = -236;
int32_t t34 = -6079319;
uint8_t x158 = 5U;
int64_t x160 = -969LL;
int32_t x161 = 235;
int8_t x162 = 0;
uint8_t x170 = 6U;
volatile uint16_t x175 = 354U;
static volatile uint8_t x176 = 5U;
int64_t x177 = INT64_MIN;
volatile int16_t x178 = INT16_MIN;
int32_t x183 = -1;
int32_t t43 = -246;
volatile int32_t t44 = -2983;
int16_t x193 = -1;
uint32_t x195 = UINT32_MAX;
int64_t x198 = -2233309754181948LL;
static volatile int32_t t46 = 4;
int64_t x202 = INT64_MIN;
static uint64_t x207 = 1448906333472LLU;
volatile int32_t t49 = 23741117;
uint8_t x217 = UINT8_MAX;
uint8_t x220 = 0U;
int8_t x231 = INT8_MIN;
int16_t x232 = INT16_MIN;
int32_t t54 = 15546;
int8_t x238 = INT8_MIN;
static volatile uint64_t x239 = 16666LLU;
int32_t t55 = -17;
uint32_t x245 = 3U;
int8_t x248 = 1;
int16_t x251 = INT16_MAX;
static uint32_t x254 = 214980856U;
uint32_t x255 = UINT32_MAX;
int8_t x256 = -1;
volatile int32_t t59 = -784542;
int32_t x258 = INT32_MIN;
static int32_t t60 = 6415893;
int8_t x261 = -1;
int8_t x263 = INT8_MIN;
int32_t t61 = 4867850;
int16_t x270 = -1;
uint8_t x271 = UINT8_MAX;
int32_t t65 = -96;
int8_t x283 = INT8_MIN;
int32_t x290 = INT32_MIN;
int64_t x291 = -1896640833923755910LL;
int32_t x292 = -1;
int8_t x297 = INT8_MIN;
static uint8_t x312 = 1U;
uint16_t x313 = 51U;
uint64_t x315 = 6656391LLU;
volatile int32_t t73 = -1066;
static volatile int8_t x317 = INT8_MIN;
int16_t x318 = INT16_MIN;
int64_t x323 = -149099948129578LL;
volatile uint64_t x326 = 11LLU;
uint16_t x343 = UINT16_MAX;
int32_t t79 = -53436020;
int32_t x356 = 9205;
static volatile int32_t t81 = 343;
int8_t x359 = INT8_MAX;
uint8_t x360 = 4U;
uint16_t x361 = UINT16_MAX;
static uint32_t x365 = UINT32_MAX;
static volatile int64_t x374 = INT64_MIN;
static uint8_t x377 = 6U;
volatile int16_t x382 = 1498;
int32_t t89 = 194803;
static int32_t x392 = INT32_MIN;
int32_t t90 = 44014968;
int16_t x397 = -1;
int64_t x398 = INT64_MIN;
volatile int16_t x407 = -1;
int32_t t94 = 231412;
uint16_t x413 = 64U;
int8_t x415 = INT8_MIN;
volatile int32_t t96 = 3151228;
volatile int32_t x417 = 228102102;
int32_t x420 = -1590;
int32_t t97 = 105801262;
volatile int16_t x422 = 7982;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	static int16_t x3 = -1;
	int8_t x4 = -1;
	int32_t t0 = -1;

	t0 = (x1<((x2/x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int16_t x7 = 5506;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -87534;

	t1 = (x5<((x6/x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	static int8_t x11 = 11;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 166281;

	t2 = (x9<((x10/x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2072133115U;
	uint8_t x15 = UINT8_MAX;
	static uint32_t x16 = 127742558U;

	t3 = (x13<((x14/x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	static uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 1470;

	t4 = (x17<((x18/x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MAX;
	static int32_t x23 = -1182;
	static int64_t x24 = -5520753LL;
	int32_t t5 = 50269429;

	t5 = (x21<((x22/x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -14877460724055LL;
	static uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = 6453;

	t6 = (x25<((x26/x27)&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 6U;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -988696;
	int32_t t7 = 361;

	t7 = (x29<((x30/x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	static int32_t x36 = INT32_MIN;
	static int32_t t8 = 84;

	t8 = (x33<((x34/x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 5993892788860964LL;
	volatile int32_t x38 = INT32_MIN;
	static uint64_t x40 = UINT64_MAX;
	int32_t t9 = -36;

	t9 = (x37<((x38/x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	static int32_t x42 = -610116;
	uint32_t x43 = 10122U;

	t10 = (x41<((x42/x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint8_t x47 = 1U;
	int32_t x48 = 13517;
	int32_t t11 = 5197843;

	t11 = (x45<((x46/x47)&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = 5361;
	volatile int32_t t12 = -1177570;

	t12 = (x49<((x50/x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MAX;
	volatile int32_t t13 = -982576;

	t13 = (x57<((x58/x59)&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -1;
	static int64_t x64 = -1LL;
	static int32_t t14 = 87999;

	t14 = (x61<((x62/x63)&x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 248LLU;
	int32_t x68 = INT32_MAX;
	int32_t t15 = -20648;

	t15 = (x65<((x66/x67)&x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MAX;
	static int16_t x75 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;

	t16 = (x73<((x74/x75)&x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = 10;
	static int16_t x79 = 1929;
	volatile uint16_t x80 = 31U;
	volatile int32_t t17 = 10;

	t17 = (x77<((x78/x79)&x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 1430U;
	volatile int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 2987326798436015LLU;
	int32_t t18 = 15;

	t18 = (x81<((x82/x83)&x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -1;
	static uint8_t x87 = 1U;
	static uint64_t x88 = 3337181082618367LLU;
	static int32_t t19 = 1056390239;

	t19 = (x85<((x86/x87)&x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 1;
	uint16_t x92 = 13708U;
	int32_t t20 = 112;

	t20 = (x89<((x90/x91)&x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = -1;
	int8_t x95 = INT8_MAX;
	int8_t x96 = -1;
	int32_t t21 = -9836;

	t21 = (x93<((x94/x95)&x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -825276;
	int32_t x98 = -1;
	int16_t x99 = INT16_MIN;
	static uint16_t x100 = UINT16_MAX;
	static int32_t t22 = 24;

	t22 = (x97<((x98/x99)&x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint64_t x103 = 13LLU;
	int32_t t23 = -4269568;

	t23 = (x101<((x102/x103)&x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x105 = -57174;
	uint8_t x106 = 7U;
	volatile uint64_t x107 = 83981LLU;
	int16_t x108 = INT16_MIN;
	int32_t t24 = -663;

	t24 = (x105<((x106/x107)&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = -43597997LL;
	int32_t t25 = 14661;

	t25 = (x109<((x110/x111)&x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MAX;
	int8_t x114 = 0;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -13LL;
	volatile int32_t t26 = 4485166;

	t26 = (x113<((x114/x115)&x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 0;
	uint64_t x118 = UINT64_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	int32_t t27 = 352;

	t27 = (x117<((x118/x119)&x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MIN;
	static uint8_t x122 = 6U;
	uint64_t x123 = 1783031LLU;
	uint16_t x124 = 14036U;
	int32_t t28 = -16653386;

	t28 = (x121<((x122/x123)&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -3181;
	static int16_t x126 = INT16_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile uint8_t x128 = 17U;
	volatile int32_t t29 = 9537;

	t29 = (x125<((x126/x127)&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 0U;

	t30 = (x129<((x130/x131)&x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 94U;
	uint16_t x136 = 45U;
	static volatile int32_t t31 = -11;

	t31 = (x133<((x134/x135)&x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 1964535695011252LLU;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	volatile int32_t t32 = 1572;

	t32 = (x137<((x138/x139)&x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x141 = -1;
	int16_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	static int32_t t33 = 16002251;

	t33 = (x141<((x142/x143)&x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 5028U;
	static int8_t x148 = INT8_MIN;

	t34 = (x145<((x146/x147)&x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	static int16_t x150 = -24;
	int64_t x151 = 191349LL;
	uint16_t x152 = 12990U;
	volatile int32_t t35 = 181286;

	t35 = (x149<((x150/x151)&x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = INT32_MAX;
	volatile int32_t x154 = INT32_MIN;
	volatile int64_t x155 = -1LL;
	volatile uint8_t x156 = UINT8_MAX;
	static int32_t t36 = -7727042;

	t36 = (x153<((x154/x155)&x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	int32_t x159 = -1;
	volatile int32_t t37 = -7508848;

	t37 = (x157<((x158/x159)&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x163 = 46U;
	volatile int16_t x164 = 461;
	static volatile int32_t t38 = 2;

	t38 = (x161<((x162/x163)&x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	static int32_t x172 = -1;
	int32_t t39 = 0;

	t39 = (x169<((x170/x171)&x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 0U;
	int32_t x174 = INT32_MIN;
	static volatile int32_t t40 = 72;

	t40 = (x173<((x174/x175)&x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x179 = -2;
	static int8_t x180 = -5;
	volatile int32_t t41 = 118;

	t41 = (x177<((x178/x179)&x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x181 = 6U;
	int16_t x182 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t42 = 136379;

	t42 = (x181<((x182/x183)&x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	static uint16_t x186 = UINT16_MAX;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;

	t43 = (x185<((x186/x187)&x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MIN;
	volatile uint8_t x190 = 54U;
	uint8_t x191 = 117U;
	int16_t x192 = -701;

	t44 = (x189<((x190/x191)&x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x194 = INT64_MIN;
	static volatile int64_t x196 = INT64_MIN;
	int32_t t45 = 25;

	t45 = (x193<((x194/x195)&x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = -1LL;

	t46 = (x197<((x198/x199)&x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1492960582916604LL;
	uint16_t x203 = 53U;
	volatile int16_t x204 = -6450;
	volatile int32_t t47 = -950771989;

	t47 = (x201<((x202/x203)&x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MIN;
	static int32_t x208 = -48589706;
	static int32_t t48 = 99830241;

	t48 = (x205<((x206/x207)&x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -26547055;
	volatile int64_t x212 = INT64_MAX;

	t49 = (x209<((x210/x211)&x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	static int64_t x215 = -63185LL;
	int32_t x216 = -1;
	int32_t t50 = 4361583;

	t50 = (x213<((x214/x215)&x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x218 = 456U;
	int16_t x219 = INT16_MAX;
	int32_t t51 = -89;

	t51 = (x217<((x218/x219)&x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = 52304;
	volatile uint8_t x226 = 2U;
	int16_t x227 = -1;
	volatile int8_t x228 = INT8_MAX;
	static int32_t t52 = 83863263;

	t52 = (x225<((x226/x227)&x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 116553U;
	uint8_t x230 = 6U;
	int32_t t53 = 897647;

	t53 = (x229<((x230/x231)&x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = UINT8_MAX;

	t54 = (x233<((x234/x235)&x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	int64_t x240 = INT64_MAX;

	t55 = (x237<((x238/x239)&x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = -10925;
	volatile uint64_t x242 = 1794333967163459308LLU;
	uint64_t x243 = 15LLU;
	int32_t x244 = INT32_MIN;
	int32_t t56 = 27112591;

	t56 = (x241<((x242/x243)&x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x246 = 4;
	int64_t x247 = INT64_MAX;
	volatile int32_t t57 = -251380597;

	t57 = (x245<((x246/x247)&x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 82593U;
	uint16_t x250 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t58 = -1305472;

	t58 = (x249<((x250/x251)&x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x253 = 1214198U;

	t59 = (x253<((x254/x255)&x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x257 = INT64_MAX;
	int64_t x259 = 177LL;
	uint8_t x260 = UINT8_MAX;

	t60 = (x257<((x258/x259)&x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x262 = UINT64_MAX;
	uint64_t x264 = 63LLU;

	t61 = (x261<((x262/x263)&x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x266 = 2538U;
	volatile int8_t x267 = INT8_MAX;
	int16_t x268 = -1;
	int32_t t62 = 340;

	t62 = (x265<((x266/x267)&x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MIN;
	static int8_t x272 = INT8_MAX;
	volatile int32_t t63 = 27637095;

	t63 = (x269<((x270/x271)&x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MAX;
	volatile int16_t x274 = INT16_MIN;
	uint64_t x275 = 50491LLU;
	static volatile int32_t x276 = 1;
	int32_t t64 = -3222453;

	t64 = (x273<((x274/x275)&x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 263U;
	volatile int16_t x278 = INT16_MAX;
	int32_t x279 = -1;
	int8_t x280 = 0;

	t65 = (x277<((x278/x279)&x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x281 = 1720865226LL;
	volatile int32_t x282 = -5;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t66 = -3229916;

	t66 = (x281<((x282/x283)&x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MAX;
	volatile int32_t t67 = 1298087;

	t67 = (x289<((x290/x291)&x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	static uint64_t x294 = 661047LLU;
	static uint32_t x295 = 110764U;
	volatile int8_t x296 = INT8_MIN;
	static volatile int32_t t68 = 251;

	t68 = (x293<((x294/x295)&x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x298 = UINT32_MAX;
	volatile uint32_t x299 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t69 = 2404;

	t69 = (x297<((x298/x299)&x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MIN;
	volatile uint8_t x302 = 4U;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = -122482;
	int32_t t70 = -19450;

	t70 = (x301<((x302/x303)&x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x305 = -1;
	static volatile uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 296701828928LLU;
	uint8_t x308 = 93U;
	volatile int32_t t71 = -1;

	t71 = (x305<((x306/x307)&x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x309 = -1;
	int8_t x310 = INT8_MAX;
	uint32_t x311 = 240656577U;
	volatile int32_t t72 = 3578;

	t72 = (x309<((x310/x311)&x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x314 = 18;
	uint16_t x316 = UINT16_MAX;

	t73 = (x313<((x314/x315)&x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x319 = INT8_MAX;
	uint64_t x320 = 110300LLU;
	static int32_t t74 = -34022;

	t74 = (x317<((x318/x319)&x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = -1;
	int64_t x324 = -25694862361085LL;
	volatile int32_t t75 = -59061;

	t75 = (x321<((x322/x323)&x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MAX;
	int64_t x327 = -1LL;
	int16_t x328 = -1;
	int32_t t76 = -45;

	t76 = (x325<((x326/x327)&x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	static int16_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t77 = 31170615;

	t77 = (x329<((x330/x331)&x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x337 = 1747712LL;
	int8_t x338 = -28;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = -4679798050525960LL;
	volatile int32_t t78 = -399;

	t78 = (x337<((x338/x339)&x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MIN;
	static volatile int16_t x344 = INT16_MIN;

	t79 = (x341<((x342/x343)&x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = 543LL;
	static volatile int8_t x350 = INT8_MAX;
	uint32_t x351 = 3630U;
	uint64_t x352 = UINT64_MAX;
	int32_t t80 = 12950448;

	t80 = (x349<((x350/x351)&x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = -1;
	int64_t x355 = INT64_MIN;

	t81 = (x353<((x354/x355)&x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = -1;
	static uint16_t x358 = 27205U;
	int32_t t82 = -9;

	t82 = (x357<((x358/x359)&x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x362 = 54U;
	uint16_t x363 = 1050U;
	int8_t x364 = 1;
	volatile int32_t t83 = 11;

	t83 = (x361<((x362/x363)&x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x366 = 9U;
	volatile int8_t x367 = INT8_MIN;
	static volatile int64_t x368 = INT64_MIN;
	int32_t t84 = 100702919;

	t84 = (x365<((x366/x367)&x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x369 = 11336490LL;
	volatile uint64_t x370 = 128303074215289LLU;
	static uint32_t x371 = UINT32_MAX;
	int16_t x372 = -56;
	static int32_t t85 = 5;

	t85 = (x369<((x370/x371)&x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int64_t x375 = INT64_MAX;
	volatile uint8_t x376 = UINT8_MAX;
	volatile int32_t t86 = 1387165;

	t86 = (x373<((x374/x375)&x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x378 = 172622LL;
	int8_t x379 = INT8_MIN;
	volatile int16_t x380 = INT16_MAX;
	int32_t t87 = 8;

	t87 = (x377<((x378/x379)&x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -1117;
	uint16_t x383 = 3771U;
	int32_t x384 = INT32_MIN;
	int32_t t88 = 94898743;

	t88 = (x381<((x382/x383)&x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 7866993033590LLU;
	uint32_t x386 = 1U;
	volatile uint8_t x387 = 2U;
	static uint16_t x388 = UINT16_MAX;

	t89 = (x385<((x386/x387)&x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x389 = INT16_MAX;
	volatile int16_t x390 = -1;
	static uint8_t x391 = UINT8_MAX;

	t90 = (x389<((x390/x391)&x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x393 = 2243929979096690684LLU;
	volatile int32_t x394 = INT32_MAX;
	int64_t x395 = 3086487465448474LL;
	static int8_t x396 = INT8_MIN;
	static volatile int32_t t91 = 115;

	t91 = (x393<((x394/x395)&x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 43635397471251LLU;
	int32_t t92 = 1654100;

	t92 = (x397<((x398/x399)&x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 808U;
	volatile int32_t x403 = 27;
	static uint64_t x404 = 9LLU;
	volatile int32_t t93 = -3979;

	t93 = (x401<((x402/x403)&x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x405 = 485933110U;
	int8_t x406 = -1;
	volatile int32_t x408 = INT32_MIN;

	t94 = (x405<((x406/x407)&x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = UINT64_MAX;
	volatile uint64_t x410 = 14756992665331LLU;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	int32_t t95 = -11;

	t95 = (x409<((x410/x411)&x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x414 = INT32_MIN;
	uint32_t x416 = 178130461U;

	t96 = (x413<((x414/x415)&x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x418 = INT16_MAX;
	volatile int8_t x419 = -29;

	t97 = (x417<((x418/x419)&x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = 58U;
	uint8_t x423 = UINT8_MAX;
	static int8_t x424 = -1;
	int32_t t98 = -2816;

	t98 = (x421<((x422/x423)&x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = 31259869888980094LL;
	int32_t x426 = -7858;
	static int32_t x427 = INT32_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t99 = -3366822;

	t99 = (x425<((x426/x427)&x428));

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

