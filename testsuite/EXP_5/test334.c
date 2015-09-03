#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 159633U;
uint8_t x3 = 2U;
int64_t x4 = -18LL;
uint8_t x12 = 127U;
static int8_t x16 = INT8_MAX;
volatile int32_t x17 = 2;
uint8_t x19 = 6U;
volatile int64_t x20 = INT64_MAX;
int8_t x29 = 0;
uint64_t x32 = UINT64_MAX;
static uint32_t x34 = UINT32_MAX;
volatile uint16_t x41 = 1666U;
uint16_t x42 = 31387U;
uint32_t x46 = UINT32_MAX;
uint32_t x50 = 0U;
uint16_t x52 = 14908U;
volatile int32_t t12 = -324;
int8_t x55 = INT8_MAX;
volatile int32_t t13 = -123011830;
uint64_t x59 = UINT64_MAX;
int32_t x61 = -57139542;
int32_t t15 = 148624093;
static int16_t x70 = -600;
int16_t x77 = INT16_MAX;
int16_t x90 = -3215;
int64_t x92 = INT64_MIN;
int32_t t23 = 72;
int8_t x97 = 2;
int32_t x99 = -1996;
int16_t x100 = INT16_MIN;
int64_t x116 = -31LL;
volatile int8_t x118 = INT8_MIN;
volatile int16_t x119 = -1;
static uint64_t x122 = UINT64_MAX;
int8_t x125 = INT8_MIN;
int16_t x126 = -1;
volatile int32_t t32 = -2217;
uint64_t x141 = 2233272563137LLU;
int32_t x144 = INT32_MIN;
uint32_t x147 = 38U;
volatile int16_t x157 = -8;
int8_t x160 = 1;
volatile int32_t t37 = 2;
int16_t x168 = INT16_MIN;
volatile int32_t t38 = -43705122;
int16_t x169 = INT16_MIN;
int32_t t39 = 10480697;
int64_t x173 = 15882315577990506LL;
int16_t x175 = INT16_MIN;
static uint64_t x180 = UINT64_MAX;
static uint16_t x184 = UINT16_MAX;
volatile int16_t x185 = 7;
volatile uint32_t x187 = UINT32_MAX;
uint16_t x196 = 26U;
static volatile int32_t t45 = -65;
int64_t x197 = -241933LL;
uint32_t x204 = UINT32_MAX;
static int32_t t47 = -39516;
int8_t x205 = 0;
volatile int16_t x206 = 196;
int8_t x214 = INT8_MAX;
int64_t x216 = INT64_MIN;
int8_t x229 = -38;
int8_t x232 = 1;
int32_t t53 = -7266;
int8_t x235 = -4;
int32_t x236 = INT32_MAX;
uint16_t x246 = 132U;
int32_t x251 = 384264;
int32_t t58 = -20142;
int16_t x257 = -2165;
static int16_t x259 = INT16_MIN;
static volatile int32_t t60 = 758704;
volatile uint32_t x268 = UINT32_MAX;
static uint16_t x271 = 817U;
static volatile int16_t x275 = -1;
volatile int8_t x277 = -33;
int32_t x281 = INT32_MAX;
int64_t x288 = INT64_MAX;
int16_t x294 = INT16_MAX;
volatile uint8_t x295 = UINT8_MAX;
uint8_t x298 = 122U;
volatile int64_t x300 = INT64_MAX;
int64_t x306 = -1LL;
static int32_t x316 = INT32_MAX;
int8_t x318 = INT8_MIN;
uint16_t x335 = 458U;
static volatile uint8_t x342 = 0U;
volatile int32_t t78 = -2749153;
volatile int32_t t80 = 12663;
static uint64_t x355 = UINT64_MAX;
static uint32_t x363 = 111142696U;
volatile int32_t x365 = -1;
volatile int64_t x367 = -23590247682650LL;
static int32_t x373 = INT32_MAX;
int16_t x381 = -1707;
int8_t x382 = INT8_MAX;
volatile int16_t x384 = INT16_MAX;
static int64_t x387 = INT64_MAX;
int8_t x392 = -1;
volatile int32_t x399 = INT32_MIN;
volatile int64_t x400 = 25169732LL;
volatile int32_t t90 = -7;
int16_t x404 = INT16_MAX;
int64_t x407 = -1LL;
uint32_t x409 = 106971657U;
int32_t x412 = -1;
static int8_t x416 = -1;
uint32_t x429 = 894060794U;
int16_t x432 = 4;
volatile int32_t t96 = 11037;


void f0(void) {
	static volatile int32_t x1 = INT32_MIN;
	volatile int32_t t0 = -744;

	t0 = (x1<((x2-x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 0U;
	int16_t x6 = -1;
	static int16_t x7 = INT16_MIN;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -14548440;

	t1 = (x5<((x6-x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint16_t x10 = 3U;
	static int8_t x11 = -3;
	volatile int32_t t2 = -127720009;

	t2 = (x9<((x10-x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2688U;
	static volatile int64_t x14 = -1LL;
	uint32_t x15 = 7906U;
	static volatile int32_t t3 = 67;

	t3 = (x13<((x14-x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -460644712717LL;
	volatile int32_t t4 = 2;

	t4 = (x17<((x18-x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int32_t x22 = INT32_MAX;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 2570861;

	t5 = (x21<((x22-x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 89504258U;
	uint32_t x27 = 3714181U;
	static int8_t x28 = INT8_MAX;
	int32_t t6 = -47982291;

	t6 = (x25<((x26-x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	volatile int32_t t7 = -401526191;

	t7 = (x29<((x30-x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 1596;
	volatile int64_t x35 = INT64_MAX;
	volatile int64_t x36 = -2850612807LL;
	static int32_t t8 = -491943;

	t8 = (x33<((x34-x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1453LL;
	int8_t x38 = 0;
	volatile int16_t x39 = INT16_MIN;
	volatile int8_t x40 = -3;
	static volatile int32_t t9 = 153;

	t9 = (x37<((x38-x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x43 = 1U;
	uint16_t x44 = 62U;
	static int32_t t10 = -9290;

	t10 = (x41<((x42-x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = 39;
	volatile int64_t x47 = -2457LL;
	uint8_t x48 = 2U;
	volatile int32_t t11 = 245181;

	t11 = (x45<((x46-x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x51 = -1;

	t12 = (x49<((x50-x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 54;
	static int8_t x54 = INT8_MIN;
	static int64_t x56 = 68982961081LL;

	t13 = (x53<((x54-x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 2442;
	int64_t x58 = INT64_MAX;
	int16_t x60 = -1;
	static int32_t t14 = -17;

	t14 = (x57<((x58-x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	volatile int16_t x63 = -1;
	volatile uint8_t x64 = 2U;

	t15 = (x61<((x62-x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	volatile int16_t x66 = -741;
	volatile uint64_t x67 = 5699873952883646LLU;
	uint64_t x68 = UINT64_MAX;
	static int32_t t16 = -40097005;

	t16 = (x65<((x66-x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 13033498144LLU;
	uint32_t x71 = 1935U;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 394364;

	t17 = (x69<((x70-x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = -1LL;
	static uint8_t x75 = 0U;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = 59312;

	t18 = (x73<((x74-x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = -15;
	int32_t x79 = -1;
	static int64_t x80 = INT64_MIN;
	int32_t t19 = -6;

	t19 = (x77<((x78-x79)^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -338;
	uint8_t x83 = UINT8_MAX;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t20 = 3;

	t20 = (x81<((x82-x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -61;
	uint64_t x86 = 1979891LLU;
	static volatile int16_t x87 = -1;
	volatile int16_t x88 = 6;
	volatile int32_t t21 = 76972328;

	t21 = (x85<((x86-x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1;
	int64_t x91 = 15LL;
	int32_t t22 = -1197;

	t22 = (x89<((x90-x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int32_t x94 = -19;
	int32_t x95 = 276900;
	int32_t x96 = INT32_MAX;

	t23 = (x93<((x94-x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 372365887355842427LLU;
	volatile int32_t t24 = 454759;

	t24 = (x97<((x98-x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = INT64_MAX;
	int16_t x107 = 135;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -232455;

	t25 = (x105<((x106-x107)^x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 2U;
	static uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = 0;
	uint64_t x112 = 16170075376LLU;
	int32_t t26 = -1065;

	t26 = (x109<((x110-x111)^x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = 678;
	uint32_t x114 = 13U;
	int64_t x115 = -248740037LL;
	volatile int32_t t27 = 8587;

	t27 = (x113<((x114-x115)^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int64_t x120 = INT64_MIN;
	int32_t t28 = -27016;

	t28 = (x117<((x118-x119)^x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 110U;
	uint8_t x123 = 23U;
	int16_t x124 = -6;
	int32_t t29 = -394381;

	t29 = (x121<((x122-x123)^x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x127 = 27U;
	int32_t x128 = INT32_MIN;
	static int32_t t30 = -465380620;

	t30 = (x125<((x126-x127)^x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MAX;
	volatile uint8_t x131 = UINT8_MAX;
	uint64_t x132 = UINT64_MAX;
	static int32_t t31 = 17;

	t31 = (x129<((x130-x131)^x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x133 = INT16_MIN;
	uint8_t x134 = 10U;
	int64_t x135 = -88LL;
	uint64_t x136 = 714090448763839LLU;

	t32 = (x133<((x134-x135)^x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = 127364961U;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t33 = 27;

	t33 = (x137<((x138-x139)^x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x142 = 111U;
	int16_t x143 = -485;
	int32_t t34 = -216794;

	t34 = (x141<((x142-x143)^x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = 7;
	int32_t x146 = -1;
	uint32_t x148 = 492668U;
	int32_t t35 = 55;

	t35 = (x145<((x146-x147)^x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x158 = 30U;
	static volatile int64_t x159 = INT64_MAX;
	int32_t t36 = -108;

	t36 = (x157<((x158-x159)^x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 26U;
	uint8_t x163 = UINT8_MAX;
	static uint32_t x164 = 1578494U;

	t37 = (x161<((x162-x163)^x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 205LLU;
	int8_t x166 = -1;
	uint32_t x167 = UINT32_MAX;

	t38 = (x165<((x166-x167)^x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x170 = -1;
	int64_t x171 = 26LL;
	static int8_t x172 = INT8_MIN;

	t39 = (x169<((x170-x171)^x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x174 = -1;
	int32_t x176 = INT32_MAX;
	volatile int32_t t40 = 3017;

	t40 = (x173<((x174-x175)^x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = INT64_MAX;
	static int32_t x178 = INT32_MAX;
	uint64_t x179 = 1LLU;
	int32_t t41 = -10;

	t41 = (x177<((x178-x179)^x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 1;
	int64_t x182 = -1LL;
	volatile uint32_t x183 = 13299U;
	int32_t t42 = 39730627;

	t42 = (x181<((x182-x183)^x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x186 = -1;
	volatile uint64_t x188 = 1512964099LLU;
	static volatile int32_t t43 = 16329;

	t43 = (x185<((x186-x187)^x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = 13800;
	uint64_t x190 = 2105LLU;
	int64_t x191 = INT64_MAX;
	volatile uint8_t x192 = 25U;
	int32_t t44 = -214392;

	t44 = (x189<((x190-x191)^x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 8;
	volatile int8_t x194 = INT8_MIN;
	uint16_t x195 = 3U;

	t45 = (x193<((x194-x195)^x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x198 = INT8_MIN;
	static int8_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	int32_t t46 = 10;

	t46 = (x197<((x198-x199)^x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = 10U;

	t47 = (x201<((x202-x203)^x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x207 = 21U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t48 = 14;

	t48 = (x205<((x206-x207)^x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = -1;
	uint8_t x211 = 0U;
	int8_t x212 = -1;
	int32_t t49 = 9477;

	t49 = (x209<((x210-x211)^x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 4010167LLU;
	uint16_t x215 = 30546U;
	static int32_t t50 = -2180098;

	t50 = (x213<((x214-x215)^x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -1;
	volatile int64_t x218 = INT64_MIN;
	static int16_t x219 = INT16_MIN;
	uint32_t x220 = 3906U;
	static int32_t t51 = 2768;

	t51 = (x217<((x218-x219)^x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	int64_t x226 = 164230700622280936LL;
	uint64_t x227 = 721213176616471943LLU;
	uint8_t x228 = 4U;
	static volatile int32_t t52 = 5;

	t52 = (x225<((x226-x227)^x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x230 = INT8_MIN;
	uint32_t x231 = 68U;

	t53 = (x229<((x230-x231)^x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 194120U;
	static int32_t t54 = -59045465;

	t54 = (x233<((x234-x235)^x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MIN;
	int16_t x239 = 4;
	static int32_t x240 = INT32_MIN;
	static int32_t t55 = 679355272;

	t55 = (x237<((x238-x239)^x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 980392LLU;
	int64_t x242 = 10586238LL;
	int8_t x243 = 16;
	static volatile int16_t x244 = -1;
	int32_t t56 = 60492480;

	t56 = (x241<((x242-x243)^x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t57 = -135;

	t57 = (x245<((x246-x247)^x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	uint16_t x250 = 2U;
	int32_t x252 = 10805;

	t58 = (x249<((x250-x251)^x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 2U;
	int8_t x254 = -1;
	static int64_t x255 = -2LL;
	uint32_t x256 = 784742287U;
	int32_t t59 = -1;

	t59 = (x253<((x254-x255)^x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x258 = 0U;
	uint64_t x260 = 229959129657LLU;

	t60 = (x257<((x258-x259)^x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = -1LL;
	uint64_t x262 = 91724218145490833LLU;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t61 = -12937616;

	t61 = (x261<((x262-x263)^x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 21U;
	volatile int32_t t62 = 85237229;

	t62 = (x265<((x266-x267)^x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 3U;
	static int32_t x270 = INT32_MAX;
	volatile int32_t x272 = INT32_MIN;
	int32_t t63 = 14;

	t63 = (x269<((x270-x271)^x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = 3276LL;
	int16_t x274 = 764;
	int64_t x276 = 527538148135425LL;
	int32_t t64 = -9;

	t64 = (x273<((x274-x275)^x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x278 = 7U;
	uint8_t x279 = 0U;
	volatile int32_t x280 = INT32_MIN;
	int32_t t65 = -19693;

	t65 = (x277<((x278-x279)^x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MAX;
	static volatile int32_t t66 = -7602;

	t66 = (x281<((x282-x283)^x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	uint16_t x286 = 13311U;
	int8_t x287 = INT8_MAX;
	volatile int32_t t67 = -1625;

	t67 = (x285<((x286-x287)^x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = -22991;
	int16_t x290 = 3;
	int8_t x291 = INT8_MIN;
	static int8_t x292 = INT8_MIN;
	int32_t t68 = -6570;

	t68 = (x289<((x290-x291)^x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	int64_t x296 = 6LL;
	static volatile int32_t t69 = 1;

	t69 = (x293<((x294-x295)^x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x297 = INT16_MAX;
	uint8_t x299 = UINT8_MAX;
	int32_t t70 = 7;

	t70 = (x297<((x298-x299)^x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	static int8_t x304 = -2;
	volatile int32_t t71 = 188;

	t71 = (x301<((x302-x303)^x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 213358882337171LLU;
	static volatile int16_t x307 = INT16_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t72 = 67;

	t72 = (x305<((x306-x307)^x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x313 = -41;
	volatile uint8_t x314 = 1U;
	int8_t x315 = 6;
	int32_t t73 = -104208;

	t73 = (x313<((x314-x315)^x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 243U;
	static volatile int32_t t74 = -3;

	t74 = (x317<((x318-x319)^x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = INT32_MIN;
	uint16_t x322 = 62U;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;
	int32_t t75 = 3350;

	t75 = (x321<((x322-x323)^x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 14803892599778548LL;
	uint32_t x327 = 75U;
	int32_t x328 = INT32_MAX;
	static volatile int32_t t76 = 28281163;

	t76 = (x325<((x326-x327)^x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 9U;
	int64_t x334 = 24LL;
	int8_t x336 = INT8_MIN;
	volatile int32_t t77 = 1052114255;

	t77 = (x333<((x334-x335)^x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x341 = INT32_MAX;
	static int32_t x343 = -1;
	static volatile int32_t x344 = -1;

	t78 = (x341<((x342-x343)^x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = 0;
	int64_t x346 = -11173144872749LL;
	int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t79 = -694;

	t79 = (x345<((x346-x347)^x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = -1;
	static volatile int64_t x350 = -135539020LL;
	int8_t x351 = -2;
	int16_t x352 = INT16_MAX;

	t80 = (x349<((x350-x351)^x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -51208;
	volatile uint8_t x354 = 24U;
	volatile uint8_t x356 = 2U;
	volatile int32_t t81 = 50;

	t81 = (x353<((x354-x355)^x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = 106U;
	int32_t t82 = 36549972;

	t82 = (x357<((x358-x359)^x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x361 = -1;
	int32_t x362 = INT32_MAX;
	volatile uint64_t x364 = UINT64_MAX;
	static int32_t t83 = 0;

	t83 = (x361<((x362-x363)^x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x366 = INT8_MIN;
	int8_t x368 = 48;
	volatile int32_t t84 = -3490;

	t84 = (x365<((x366-x367)^x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = -1;
	static int16_t x375 = INT16_MIN;
	volatile uint8_t x376 = UINT8_MAX;
	static volatile int32_t t85 = 1059;

	t85 = (x373<((x374-x375)^x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x383 = -2;
	volatile int32_t t86 = -840;

	t86 = (x381<((x382-x383)^x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x386 = 123197693176LL;
	static int16_t x388 = -1;
	static volatile int32_t t87 = -176547409;

	t87 = (x385<((x386-x387)^x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	volatile uint16_t x391 = UINT16_MAX;
	int32_t t88 = 304;

	t88 = (x389<((x390-x391)^x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = -111;
	volatile int8_t x395 = INT8_MIN;
	static int8_t x396 = -3;
	int32_t t89 = -7;

	t89 = (x393<((x394-x395)^x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = -654232596;
	int64_t x398 = 7180LL;

	t90 = (x397<((x398-x399)^x400));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x401 = INT32_MIN;
	uint8_t x402 = 0U;
	int8_t x403 = INT8_MAX;
	int32_t t91 = -112525;

	t91 = (x401<((x402-x403)^x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x405 = 0;
	int8_t x406 = -4;
	int64_t x408 = INT64_MIN;
	int32_t t92 = 84283801;

	t92 = (x405<((x406-x407)^x408));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x410 = INT32_MAX;
	int16_t x411 = INT16_MAX;
	static int32_t t93 = -1;

	t93 = (x409<((x410-x411)^x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x413 = -35813681616681LL;
	static uint8_t x414 = 44U;
	static int16_t x415 = -6;
	static int32_t t94 = 13568273;

	t94 = (x413<((x414-x415)^x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x425 = -89693698619LL;
	static int16_t x426 = -3638;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MAX;
	static volatile int32_t t95 = 331;

	t95 = (x425<((x426-x427)^x428));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x430 = INT16_MIN;
	static uint16_t x431 = UINT16_MAX;

	t96 = (x429<((x430-x431)^x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = INT16_MIN;
	int8_t x434 = -1;
	uint16_t x435 = UINT16_MAX;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t97 = 449461775;

	t97 = (x433<((x434-x435)^x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x438 = 84U;
	static int32_t x439 = 45268;
	volatile int16_t x440 = 108;
	int32_t t98 = -1;

	t98 = (x437<((x438-x439)^x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = INT8_MIN;
	uint16_t x442 = 1U;
	static uint32_t x443 = 315U;
	uint8_t x444 = 27U;
	volatile int32_t t99 = -421687;

	t99 = (x441<((x442-x443)^x444));

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

