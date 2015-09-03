#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int16_t x6 = INT16_MIN;
int16_t x8 = INT16_MIN;
volatile int32_t t1 = -6;
uint16_t x11 = UINT16_MAX;
int64_t x13 = -31584320156LL;
uint8_t x18 = 4U;
int16_t x20 = INT16_MIN;
int16_t x22 = -27;
int32_t x34 = INT32_MIN;
int8_t x39 = -16;
static int8_t x41 = 2;
int32_t x49 = INT32_MIN;
int16_t x62 = 91;
uint8_t x65 = 37U;
static int32_t t16 = 0;
static int8_t x70 = INT8_MAX;
volatile uint8_t x71 = 0U;
int8_t x76 = INT8_MIN;
static int8_t x81 = -58;
int8_t x82 = -19;
int64_t x83 = INT64_MIN;
static int32_t t20 = -7;
int64_t x90 = INT64_MIN;
uint32_t x91 = UINT32_MAX;
int32_t x95 = 76;
static uint8_t x102 = 6U;
int8_t x108 = INT8_MIN;
uint64_t x112 = 963020921293076775LLU;
int64_t x122 = INT64_MIN;
static volatile uint16_t x125 = UINT16_MAX;
static uint8_t x126 = UINT8_MAX;
uint32_t x127 = 2000322U;
uint32_t x153 = UINT32_MAX;
uint32_t x159 = UINT32_MAX;
int16_t x160 = -1;
uint32_t x163 = UINT32_MAX;
int64_t x164 = -120LL;
uint32_t x177 = 38098U;
volatile int32_t t44 = -103;
int8_t x187 = INT8_MAX;
uint8_t x191 = 1U;
volatile int32_t t47 = 1351;
static int8_t x201 = INT8_MIN;
uint16_t x213 = UINT16_MAX;
int64_t x215 = 2971LL;
int8_t x219 = INT8_MAX;
uint16_t x220 = 28359U;
static uint64_t x221 = 15LLU;
static volatile int32_t x223 = INT32_MIN;
static int64_t x224 = INT64_MIN;
static uint32_t x225 = 45017U;
volatile uint8_t x228 = 24U;
int32_t t56 = 254631;
int32_t t57 = -9189;
static int16_t x235 = -1;
int64_t x240 = -1LL;
static volatile int32_t x245 = -1;
volatile int8_t x254 = INT8_MIN;
int32_t t66 = -28;
int64_t x272 = INT64_MAX;
uint64_t x276 = UINT64_MAX;
int32_t t68 = 104859323;
volatile int32_t x280 = 12342;
volatile uint32_t x286 = 34U;
static volatile int32_t t71 = -123;
int8_t x294 = INT8_MIN;
int16_t x297 = -1;
uint16_t x312 = 971U;
volatile uint16_t x315 = UINT16_MAX;
static int16_t x318 = INT16_MIN;
int64_t x321 = -3250758LL;
int32_t t81 = 3804625;
volatile int32_t x330 = 2595;
volatile int64_t x337 = INT64_MAX;
volatile int8_t x339 = INT8_MAX;
int32_t t87 = 26473880;
uint16_t x355 = 7U;
volatile int32_t t89 = -165764714;
int32_t t90 = 8606697;
uint32_t x371 = 43042U;
static uint16_t x374 = 136U;
int32_t t93 = 1;
int16_t x377 = INT16_MIN;
int64_t x386 = 217238838278LL;
int8_t x389 = 0;
volatile int16_t x396 = INT16_MIN;
volatile uint32_t x399 = 11654556U;
int32_t t99 = -218984;


void f0(void) {
	int16_t x1 = -45;
	int32_t x2 = -1;
	int8_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = 52269;

	t0 = (x1<((x2&x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 1763300215195LL;

	t1 = (x5<((x6&x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -61;
	static int8_t x10 = -1;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 808726368;

	t2 = (x9<((x10&x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 10U;
	uint8_t x15 = 1U;
	uint32_t x16 = UINT32_MAX;
	static int32_t t3 = -39;

	t3 = (x13<((x14&x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int64_t x19 = -3983679494531455LL;
	int32_t t4 = -5630;

	t4 = (x17<((x18&x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 295887U;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -1;

	t5 = (x21<((x22&x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -25238219;

	t6 = (x25<((x26&x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	int8_t x30 = -1;
	volatile int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 9819610;

	t7 = (x29<((x30&x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	uint64_t x35 = 1506348220888LLU;
	uint64_t x36 = 3338345809828LLU;
	volatile int32_t t8 = 112;

	t8 = (x33<((x34&x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static uint8_t x38 = UINT8_MAX;
	static volatile int32_t x40 = INT32_MIN;
	static int32_t t9 = 1;

	t9 = (x37<((x38&x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x42 = UINT8_MAX;
	volatile int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = 31384U;
	int32_t t10 = -3552506;

	t10 = (x41<((x42&x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = 3LL;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	static volatile int32_t t11 = 88402847;

	t11 = (x45<((x46&x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -65178;

	t12 = (x49<((x50&x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MIN;
	volatile int16_t x55 = 1;
	uint16_t x56 = 7U;
	volatile int32_t t13 = -8394312;

	t13 = (x53<((x54&x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static uint32_t x58 = 38773U;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	static int32_t t14 = 1318;

	t14 = (x57<((x58&x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 97032U;
	uint32_t x63 = 1142U;
	int32_t x64 = -1549462;
	int32_t t15 = 257581;

	t15 = (x61<((x62&x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	static uint16_t x68 = 7U;

	t16 = (x65<((x66&x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile uint16_t x72 = 1U;
	volatile int32_t t17 = 90;

	t17 = (x69<((x70&x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int32_t x75 = 10684547;
	static volatile int32_t t18 = -28;

	t18 = (x73<((x74&x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 32415731U;
	int32_t x78 = INT32_MIN;
	static uint8_t x79 = 30U;
	static uint8_t x80 = UINT8_MAX;
	static int32_t t19 = -233;

	t19 = (x77<((x78&x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x84 = 16U;

	t20 = (x81<((x82&x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	int32_t x86 = 107329417;
	int64_t x87 = 96783199801LL;
	volatile int8_t x88 = INT8_MIN;
	int32_t t21 = -62;

	t21 = (x85<((x86&x87)^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	volatile int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -2852594;

	t22 = (x89<((x90&x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 2U;
	int64_t x94 = -2053843LL;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -779598;

	t23 = (x93<((x94&x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 78616037LL;
	static int16_t x98 = INT16_MIN;
	int8_t x99 = 4;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t24 = -24874812;

	t24 = (x97<((x98&x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = -1181110LL;
	volatile int32_t t25 = 52849;

	t25 = (x101<((x102&x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 1LL;
	int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	int32_t t26 = -1944801;

	t26 = (x105<((x106&x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = 59;
	static int8_t x110 = INT8_MIN;
	volatile int16_t x111 = INT16_MIN;
	static volatile int32_t t27 = 17;

	t27 = (x109<((x110&x111)^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int32_t x114 = -1;
	uint64_t x115 = 3556331130724386979LLU;
	int16_t x116 = -3997;
	int32_t t28 = 19656695;

	t28 = (x113<((x114&x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = UINT32_MAX;
	int32_t t29 = -1;

	t29 = (x117<((x118&x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x123 = 288LLU;
	int16_t x124 = 0;
	int32_t t30 = 117190373;

	t30 = (x121<((x122&x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 237;

	t31 = (x125<((x126&x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -168;
	volatile int32_t x130 = INT32_MIN;
	int64_t x131 = 7602994973LL;
	uint64_t x132 = 12025366904070037LLU;
	int32_t t32 = 15816318;

	t32 = (x129<((x130&x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = 62374841357LLU;
	volatile int32_t x136 = INT32_MAX;
	int32_t t33 = -61406421;

	t33 = (x133<((x134&x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	static int64_t x138 = -1LL;
	uint16_t x139 = 24U;
	static volatile int32_t x140 = INT32_MAX;
	int32_t t34 = -5156;

	t34 = (x137<((x138&x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	int8_t x143 = 62;
	volatile int16_t x144 = INT16_MIN;
	int32_t t35 = 22158723;

	t35 = (x141<((x142&x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 5U;
	static int16_t x146 = 3;
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -155874;

	t36 = (x145<((x146&x147)^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 18U;
	static int64_t x150 = INT64_MIN;
	static int64_t x151 = -1LL;
	static int64_t x152 = -31366492925237LL;
	int32_t t37 = -322;

	t37 = (x149<((x150&x151)^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = INT16_MAX;
	int64_t x155 = 1LL;
	int8_t x156 = INT8_MIN;
	int32_t t38 = -2629;

	t38 = (x153<((x154&x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	int32_t t39 = -900026242;

	t39 = (x157<((x158&x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 59U;
	int32_t t40 = 7266;

	t40 = (x161<((x162&x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 633288131;

	t41 = (x165<((x166&x167)^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = INT32_MAX;
	volatile uint8_t x171 = 1U;
	static int64_t x172 = INT64_MIN;
	int32_t t42 = 1206911;

	t42 = (x169<((x170&x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	static uint8_t x174 = UINT8_MAX;
	static int8_t x175 = INT8_MIN;
	uint64_t x176 = 16002469LLU;
	volatile int32_t t43 = 7544;

	t43 = (x173<((x174&x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	int64_t x180 = -1174907803LL;

	t44 = (x177<((x178&x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 107LLU;
	volatile int16_t x182 = INT16_MIN;
	static int64_t x183 = 14374050742576LL;
	volatile int8_t x184 = 50;
	static volatile int32_t t45 = -499;

	t45 = (x181<((x182&x183)^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -1LL;
	static int32_t x186 = INT32_MIN;
	int32_t x188 = -49;
	static volatile int32_t t46 = 601355;

	t46 = (x185<((x186&x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 0;
	static uint16_t x190 = 7U;
	int32_t x192 = -15760185;

	t47 = (x189<((x190&x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 2U;
	int64_t x194 = 1091865310229671504LL;
	int32_t x195 = INT32_MAX;
	int8_t x196 = -44;
	static int32_t t48 = -142785942;

	t48 = (x193<((x194&x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 323U;
	uint16_t x198 = UINT16_MAX;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = -1LL;
	static volatile int32_t t49 = 33490169;

	t49 = (x197<((x198&x199)^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	static int64_t x203 = -171323809LL;
	uint8_t x204 = 89U;
	int32_t t50 = 26126;

	t50 = (x201<((x202&x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -503748236;
	static int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MIN;
	int16_t x208 = 0;
	volatile int32_t t51 = -407103678;

	t51 = (x205<((x206&x207)^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MAX;
	static uint8_t x211 = 7U;
	static uint32_t x212 = 13203963U;
	volatile int32_t t52 = 388059;

	t52 = (x209<((x210&x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x214 = 136U;
	static uint64_t x216 = UINT64_MAX;
	int32_t t53 = -302109945;

	t53 = (x213<((x214&x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 25961221LLU;
	uint16_t x218 = 95U;
	int32_t t54 = -7;

	t54 = (x217<((x218&x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x222 = 36441LLU;
	static int32_t t55 = -22595833;

	t55 = (x221<((x222&x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x226 = UINT8_MAX;
	static int8_t x227 = INT8_MIN;

	t56 = (x225<((x226&x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	int64_t x231 = 3106193864393185LL;
	volatile int8_t x232 = -28;

	t57 = (x229<((x230&x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1504077;
	uint16_t x234 = UINT16_MAX;
	int16_t x236 = -1;
	int32_t t58 = 70846;

	t58 = (x233<((x234&x235)^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -242;
	volatile int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t t59 = 1236;

	t59 = (x237<((x238&x239)^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 1617U;
	static volatile int32_t t60 = 0;

	t60 = (x241<((x242&x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 19U;
	volatile int16_t x247 = -1;
	int8_t x248 = 4;
	int32_t t61 = 20743;

	t61 = (x245<((x246&x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	static uint64_t x250 = 1106871688LLU;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = INT8_MAX;
	int32_t t62 = -3087;

	t62 = (x249<((x250&x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	uint64_t x255 = 102020567556LLU;
	volatile int8_t x256 = INT8_MIN;
	int32_t t63 = -40;

	t63 = (x253<((x254&x255)^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -4LL;
	uint16_t x258 = 1U;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = 55691649U;
	volatile int32_t t64 = 1171;

	t64 = (x257<((x258&x259)^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	uint8_t x262 = 1U;
	int32_t x263 = INT32_MAX;
	volatile int8_t x264 = INT8_MIN;
	int32_t t65 = -17868394;

	t65 = (x261<((x262&x263)^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 2U;
	uint16_t x266 = UINT16_MAX;
	volatile uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = 1;

	t66 = (x265<((x266&x267)^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MAX;
	volatile int32_t t67 = -4841654;

	t67 = (x269<((x270&x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 53414;
	static volatile int8_t x274 = INT8_MAX;
	int8_t x275 = 29;

	t68 = (x273<((x274&x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static int8_t x278 = 3;
	uint32_t x279 = UINT32_MAX;
	int32_t t69 = -85540;

	t69 = (x277<((x278&x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MIN;
	volatile int16_t x282 = 2944;
	static int8_t x283 = 34;
	uint16_t x284 = 3U;
	int32_t t70 = 9;

	t70 = (x281<((x282&x283)^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -914;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 1;

	t71 = (x285<((x286&x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = 417248LL;
	volatile int8_t x291 = -12;
	int64_t x292 = -139940708296883645LL;
	int32_t t72 = 4869643;

	t72 = (x289<((x290&x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = -1;

	t73 = (x293<((x294&x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = 920862936029097LL;
	int16_t x299 = -4921;
	int32_t x300 = 344;
	volatile int32_t t74 = -120648046;

	t74 = (x297<((x298&x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	static volatile uint64_t x302 = 17LLU;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 2U;
	volatile int32_t t75 = -1;

	t75 = (x301<((x302&x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 13;
	static int8_t x306 = INT8_MAX;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 2045962;

	t76 = (x305<((x306&x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -1LL;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MAX;
	static int32_t t77 = 350509316;

	t77 = (x309<((x310&x311)^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	uint16_t x314 = 134U;
	uint16_t x316 = 2U;
	int32_t t78 = 6597932;

	t78 = (x313<((x314&x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int32_t x320 = 1;
	static volatile int32_t t79 = 377216551;

	t79 = (x317<((x318&x319)^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 7803U;
	int32_t t80 = 14629;

	t80 = (x321<((x322&x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1378;
	int8_t x326 = INT8_MAX;
	static int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MAX;

	t81 = (x325<((x326&x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile int64_t x331 = -1LL;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = 54;

	t82 = (x329<((x330&x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = -1LL;
	uint8_t x335 = 0U;
	int8_t x336 = INT8_MAX;
	static int32_t t83 = -31;

	t83 = (x333<((x334&x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x338 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = -90;

	t84 = (x337<((x338&x339)^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = 1;
	volatile int8_t x342 = 0;
	uint8_t x343 = 43U;
	int8_t x344 = 28;
	static int32_t t85 = 4261203;

	t85 = (x341<((x342&x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 511U;
	uint64_t x346 = UINT64_MAX;
	static int64_t x347 = 34523208004102909LL;
	static volatile int16_t x348 = -1;
	int32_t t86 = -236058;

	t86 = (x345<((x346&x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int64_t x350 = INT64_MAX;
	volatile int8_t x351 = 4;
	volatile uint64_t x352 = UINT64_MAX;

	t87 = (x349<((x350&x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 6;
	static int32_t x354 = INT32_MIN;
	static int64_t x356 = INT64_MIN;
	int32_t t88 = -871;

	t88 = (x353<((x354&x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	static uint64_t x358 = UINT64_MAX;
	uint64_t x359 = 14LLU;
	uint32_t x360 = UINT32_MAX;

	t89 = (x357<((x358&x359)^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -3;
	int32_t x362 = -66665598;
	int64_t x363 = INT64_MAX;
	static int32_t x364 = -126;

	t90 = (x361<((x362&x363)^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	volatile uint8_t x366 = 105U;
	int64_t x367 = 15085301LL;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = -53518;

	t91 = (x365<((x366&x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -34998;
	static int8_t x370 = INT8_MIN;
	int16_t x372 = 2040;
	volatile int32_t t92 = 13269972;

	t92 = (x369<((x370&x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 79936806;
	uint16_t x375 = 4U;
	uint8_t x376 = UINT8_MAX;

	t93 = (x373<((x374&x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x378 = 0LL;
	int16_t x379 = -108;
	static volatile uint8_t x380 = UINT8_MAX;
	int32_t t94 = -582912;

	t94 = (x377<((x378&x379)^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 3U;
	int64_t x382 = -1LL;
	static int16_t x383 = 101;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = -1704;

	t95 = (x381<((x382&x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	static int16_t x387 = -1;
	volatile uint64_t x388 = UINT64_MAX;
	static int32_t t96 = 96;

	t96 = (x385<((x386&x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 173580U;
	volatile uint8_t x391 = 10U;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t97 = -16314;

	t97 = (x389<((x390&x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = 108349369;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	volatile int32_t t98 = -25941758;

	t98 = (x393<((x394&x395)^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 30107U;
	static uint32_t x398 = UINT32_MAX;
	int64_t x400 = INT64_MIN;

	t99 = (x397<((x398&x399)^x400));

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

