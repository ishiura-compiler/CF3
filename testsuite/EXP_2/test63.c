#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = UINT32_MAX;
int64_t x29 = INT64_MIN;
int32_t x50 = INT32_MAX;
volatile int16_t x57 = -1;
uint16_t x60 = UINT16_MAX;
int64_t t11 = 42782LL;
static uint8_t x62 = 48U;
int32_t x63 = INT32_MIN;
int32_t t14 = -51;
uint32_t x75 = 55U;
int8_t x78 = INT8_MIN;
int32_t x82 = 21;
volatile int32_t x84 = INT32_MAX;
static uint16_t x86 = UINT16_MAX;
static uint64_t x88 = 4971746289LLU;
volatile uint32_t x93 = 673U;
int32_t x97 = INT32_MIN;
volatile int32_t x100 = -1;
volatile int32_t t20 = 700710;
uint16_t x107 = 7U;
volatile int16_t x110 = INT16_MIN;
uint64_t x112 = 1113162699583744LLU;
volatile uint16_t x122 = 733U;
int32_t x124 = INT32_MIN;
volatile uint64_t t25 = 43LLU;
int16_t x129 = INT16_MIN;
static volatile int64_t x131 = -1LL;
static int64_t x133 = INT64_MIN;
int8_t x135 = INT8_MAX;
int8_t x147 = INT8_MIN;
int32_t t30 = -219;
int64_t x149 = INT64_MAX;
int64_t x150 = INT64_MIN;
volatile int64_t t31 = 37882403LL;
static int16_t x153 = 6899;
static uint16_t x155 = UINT16_MAX;
int16_t x156 = INT16_MAX;
static uint64_t t33 = 8407961129LLU;
volatile uint64_t x172 = 30539346983636LLU;
uint32_t x176 = 679U;
int64_t x180 = INT64_MAX;
int32_t x203 = INT32_MAX;
volatile int64_t x204 = 38817375755LL;
uint64_t x208 = 913697LLU;
volatile uint64_t t44 = 16045445048LLU;
volatile int32_t t49 = 701382316;
volatile uint64_t x238 = UINT64_MAX;
uint64_t t50 = 129857075005LLU;
static volatile uint64_t t51 = 7282310788LLU;
static uint16_t x248 = UINT16_MAX;
volatile uint8_t x253 = UINT8_MAX;
int32_t x255 = -124074242;
int8_t x259 = -1;
int16_t x261 = INT16_MIN;
int32_t x263 = INT32_MAX;
volatile uint64_t t57 = 12LLU;
volatile int16_t x278 = -4413;
int16_t x283 = INT16_MAX;
static volatile int64_t t59 = 2LL;
static uint32_t x285 = 115384U;
int32_t x286 = -19713;
uint8_t x306 = 2U;
int64_t t64 = -315403584552639LL;
static int32_t x310 = 176;
volatile int32_t t65 = -61443;
int8_t x319 = INT8_MIN;
int32_t x323 = INT32_MIN;
int64_t t67 = -1859280497683LL;
static int16_t x325 = -190;
uint16_t x334 = 12829U;
uint16_t x342 = 8U;
static int8_t x344 = -1;
uint32_t x348 = 6U;
int32_t t72 = -13421;
volatile int32_t x355 = -518108;
uint64_t x364 = 3561LLU;
static int64_t x369 = INT64_MIN;
int16_t x387 = INT16_MIN;
int8_t x392 = INT8_MIN;
static int64_t x395 = -1LL;
static uint8_t x397 = 60U;
int8_t x398 = INT8_MAX;
volatile int32_t x403 = -1;
uint64_t t82 = 3230919110797010LLU;
uint32_t x407 = 345975215U;
uint8_t x416 = 7U;
volatile uint64_t t85 = 11509727969LLU;
int64_t x421 = -387337566431026LL;
int16_t x422 = INT16_MIN;
uint32_t x423 = UINT32_MAX;
uint64_t x446 = UINT64_MAX;
uint64_t x452 = UINT64_MAX;
int16_t x456 = 112;
static int16_t x459 = INT16_MIN;
uint8_t x468 = 9U;
int64_t x477 = -1LL;
static uint16_t x478 = UINT16_MAX;


void f0(void) {
	static uint16_t x5 = 1050U;
	static volatile int8_t x6 = -63;
	static int16_t x7 = -6410;
	static volatile uint16_t x8 = 1829U;
	int32_t t0 = -194;

	t0 = ((x5%(x6+x7))&x8);

	if (t0 != 1024) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 1;
	int8_t x10 = INT8_MIN;
	int8_t x11 = 1;
	int16_t x12 = -215;
	int32_t t1 = -12015;

	t1 = ((x9%(x10+x11))&x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 14914LLU;
	int16_t x15 = INT16_MIN;
	int32_t x16 = -1499201;
	uint64_t t2 = 483LLU;

	t2 = ((x13%(x14+x15))&x16);

	if (t2 != 6658LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint8_t x18 = 6U;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 2U;
	uint64_t t3 = 2425172LLU;

	t3 = ((x17%(x18+x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -209826;
	uint64_t x22 = UINT64_MAX;
	static int8_t x23 = INT8_MIN;
	uint8_t x24 = UINT8_MAX;
	volatile uint64_t t4 = 1635672505LLU;

	t4 = ((x21%(x22+x23))&x24);

	if (t4 != 94LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	static volatile uint64_t x26 = 1LLU;
	static uint32_t x27 = 2031133U;
	uint8_t x28 = 3U;
	static volatile uint64_t t5 = 3LLU;

	t5 = ((x25%(x26+x27))&x28);

	if (t5 != 3LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = -6;
	uint32_t x31 = 1704034982U;
	int32_t x32 = INT32_MAX;
	volatile int64_t t6 = 32095830373LL;

	t6 = ((x29%(x30+x31))&x32);

	if (t6 != 1263820832LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -94;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 115U;
	int64_t x36 = INT64_MAX;
	int64_t t7 = 17276913355578LL;

	t7 = ((x33%(x34+x35))&x36);

	if (t7 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = 18U;
	volatile int16_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -422;

	t8 = ((x37%(x38+x39))&x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = INT32_MIN;
	static uint64_t x51 = 4165669442LLU;
	static volatile int8_t x52 = -1;
	uint64_t t9 = 237658360LLU;

	t9 = ((x49%(x50+x51))&x52);

	if (t9 != 1552299770LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	volatile int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MIN;
	static volatile int64_t t10 = 1LL;

	t10 = ((x53%(x54+x55))&x56);

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;

	t11 = ((x57%(x58+x59))&x60);

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t12 = 260521054;

	t12 = ((x61%(x62+x63))&x64);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	static volatile int64_t t13 = -33722231579301LL;

	t13 = ((x65%(x66+x67))&x68);

	if (t13 != 4294934528LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x69 = -10;
	uint16_t x70 = 239U;
	int16_t x71 = 102;
	uint16_t x72 = UINT16_MAX;

	t14 = ((x69%(x70+x71))&x72);

	if (t14 != 65526) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 323U;
	volatile int64_t x74 = 324012244LL;
	static int64_t x76 = 68LL;
	int64_t t15 = -256641055LL;

	t15 = ((x73%(x74+x75))&x76);

	if (t15 != 64LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 3U;
	int32_t x79 = -898;
	int8_t x80 = -8;
	int32_t t16 = -10174;

	t16 = ((x77%(x78+x79))&x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x83 = 45228046U;
	uint32_t t17 = 4262132U;

	t17 = ((x81%(x82+x83))&x84);

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = 1755;
	int16_t x87 = 0;
	uint64_t t18 = 9356414586972884LLU;

	t18 = ((x85%(x86+x87))&x88);

	if (t18 != 721LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x94 = -1LL;
	uint16_t x95 = 45U;
	int64_t x96 = -43165LL;
	volatile int64_t t19 = 75895271460LL;

	t19 = ((x93%(x94+x95))&x96);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x98 = 3U;
	int16_t x99 = INT16_MAX;

	t20 = ((x97%(x98+x99))&x100);

	if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = 966564723732247LL;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = 1;
	volatile uint16_t x104 = UINT16_MAX;
	int64_t t21 = 28195311419LL;

	t21 = ((x101%(x102+x103))&x104);

	if (t21 != 44823LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 49U;
	static uint64_t x106 = 10190561919LLU;
	uint8_t x108 = UINT8_MAX;
	static uint64_t t22 = 101902598LLU;

	t22 = ((x105%(x106+x107))&x108);

	if (t22 != 49LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x109 = -1;
	int8_t x111 = INT8_MAX;
	uint64_t t23 = 1452909558305623048LLU;

	t23 = ((x109%(x110+x111))&x112);

	if (t23 != 1113162699583744LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 6U;
	int64_t x115 = INT64_MIN;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t24 = 52946422LL;

	t24 = ((x113%(x114+x115))&x116);

	if (t24 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;

	t25 = ((x121%(x122+x123))&x124);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = 1;
	volatile int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	int16_t x128 = 4516;
	int64_t t26 = 37811581LL;

	t26 = ((x125%(x126+x127))&x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x130 = UINT8_MAX;
	int64_t x132 = 442069979688834557LL;
	volatile int64_t t27 = 36LL;

	t27 = ((x129%(x130+x131))&x132);

	if (t27 != 442069979688834556LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x134 = INT64_MIN;
	volatile int64_t x136 = -1LL;
	volatile int64_t t28 = 246564523191177585LL;

	t28 = ((x133%(x134+x135))&x136);

	if (t28 != -127LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = -21;
	uint32_t x142 = 3408651U;
	uint8_t x143 = 0U;
	uint32_t x144 = 127876U;
	uint32_t t29 = 3U;

	t29 = ((x141%(x142+x143))&x144);

	if (t29 != 65924U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x145 = UINT8_MAX;
	int8_t x146 = -3;
	int8_t x148 = 0;

	t30 = ((x145%(x146+x147))&x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x151 = 20120957105LL;
	volatile uint32_t x152 = 820955705U;

	t31 = ((x149%(x150+x151))&x152);

	if (t31 != 541868080LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x154 = INT8_MIN;
	int32_t t32 = -406;

	t32 = ((x153%(x154+x155))&x156);

	if (t32 != 6899) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = -26;
	uint16_t x158 = UINT16_MAX;
	volatile uint32_t x159 = 790035U;
	volatile uint64_t x160 = UINT64_MAX;

	t33 = ((x157%(x158+x159))&x160);

	if (t33 != 5870LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x165 = 21;
	uint16_t x166 = 5U;
	int8_t x167 = -1;
	volatile int64_t x168 = INT64_MAX;
	volatile int64_t t34 = 793LL;

	t34 = ((x165%(x166+x167))&x168);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	static volatile int64_t x170 = INT64_MIN;
	volatile int64_t x171 = INT64_MAX;
	volatile uint64_t t35 = 30613646048LLU;

	t35 = ((x169%(x170+x171))&x172);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x173 = INT8_MAX;
	int16_t x174 = 0;
	uint8_t x175 = UINT8_MAX;
	uint32_t t36 = 90U;

	t36 = ((x173%(x174+x175))&x176);

	if (t36 != 39U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -75725;
	static int8_t x178 = INT8_MAX;
	uint16_t x179 = UINT16_MAX;
	static volatile int64_t t37 = 653207964LL;

	t37 = ((x177%(x178+x179))&x180);

	if (t37 != 9223372036854765745LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = 1;
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	static int32_t t38 = -1;

	t38 = ((x181%(x182+x183))&x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	static uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 9U;
	volatile uint64_t x188 = 3209644830583896278LLU;
	uint64_t t39 = 1950843319LLU;

	t39 = ((x185%(x186+x187))&x188);

	if (t39 != 3209644830583896256LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -1;
	volatile uint8_t x190 = 1U;
	volatile uint16_t x191 = 1U;
	static uint32_t x192 = 2544U;
	uint32_t t40 = 2146782374U;

	t40 = ((x189%(x190+x191))&x192);

	if (t40 != 2544U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -63;
	int64_t t41 = -140126083LL;

	t41 = ((x201%(x202+x203))&x204);

	if (t41 != 38817375744LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 225U;
	static int8_t x206 = -55;
	uint8_t x207 = 5U;
	static volatile uint64_t t42 = 703376187LLU;

	t42 = ((x205%(x206+x207))&x208);

	if (t42 != 33LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = -57;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t43 = 244916560;

	t43 = ((x209%(x210+x211))&x212);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x213 = -1;
	volatile uint64_t x214 = UINT64_MAX;
	static uint64_t x215 = 114051625305746597LLU;
	int32_t x216 = INT32_MIN;

	t44 = ((x213%(x214+x215))&x216);

	if (t44 != 84432397692567552LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x217 = -1LL;
	uint8_t x218 = 46U;
	static int64_t x219 = INT64_MIN;
	volatile int16_t x220 = INT16_MIN;
	int64_t t45 = 1667LL;

	t45 = ((x217%(x218+x219))&x220);

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x221 = 1844161LL;
	int16_t x222 = INT16_MIN;
	int64_t x223 = 31LL;
	int8_t x224 = INT8_MIN;
	int64_t t46 = 1726057451991178LL;

	t46 = ((x221%(x222+x223))&x224);

	if (t46 != 10880LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x225 = 1U;
	int64_t x226 = -7048839284092548LL;
	volatile int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;
	int64_t t47 = 884904151890LL;

	t47 = ((x225%(x226+x227))&x228);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = 2U;
	int32_t x230 = -8125;
	static int64_t x231 = -159853945274084LL;
	static uint32_t x232 = 83716U;
	int64_t t48 = -1948768011LL;

	t48 = ((x229%(x230+x231))&x232);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x233 = 251U;
	static int32_t x234 = INT32_MIN;
	static int16_t x235 = 2;
	static volatile int32_t x236 = INT32_MIN;

	t49 = ((x233%(x234+x235))&x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x237 = 1;
	volatile int8_t x239 = INT8_MIN;
	int16_t x240 = -3944;

	t50 = ((x237%(x238+x239))&x240);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int8_t x242 = -1;
	int64_t x243 = 150242595974LL;
	uint64_t x244 = 209970601292608763LLU;

	t51 = ((x241%(x242+x243))&x244);

	if (t51 != 251LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x245 = -21;
	uint16_t x246 = 3691U;
	static int8_t x247 = -1;
	static volatile int32_t t52 = -49975763;

	t52 = ((x245%(x246+x247))&x248);

	if (t52 != 65515) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x249 = 1U;
	volatile int32_t x250 = INT32_MAX;
	int32_t x251 = -1164962;
	int32_t x252 = -10;
	static uint32_t t53 = 73437U;

	t53 = ((x249%(x250+x251))&x252);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x254 = 63U;
	volatile int64_t x256 = 1197241122LL;
	volatile int64_t t54 = -434LL;

	t54 = ((x253%(x254+x255))&x256);

	if (t54 != 34LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = UINT16_MAX;
	static uint32_t x258 = 240593U;
	volatile uint16_t x260 = 34U;
	uint32_t t55 = 1058316782U;

	t55 = ((x257%(x258+x259))&x260);

	if (t55 != 34U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x262 = UINT32_MAX;
	int16_t x264 = INT16_MIN;
	uint32_t t56 = 53U;

	t56 = ((x261%(x262+x263))&x264);

	if (t56 != 2147450880U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = 0U;
	volatile int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = UINT64_MAX;

	t57 = ((x273%(x274+x275))&x276);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x277 = INT8_MIN;
	volatile int16_t x279 = INT16_MIN;
	int32_t x280 = -12;
	volatile int32_t t58 = 1678401;

	t58 = ((x277%(x278+x279))&x280);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	volatile int64_t x284 = -1LL;

	t59 = ((x281%(x282+x283))&x284);

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x287 = 3U;
	int8_t x288 = -49;
	volatile uint32_t t60 = 148U;

	t60 = ((x285%(x286+x287))&x288);

	if (t60 != 115336U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x293 = 190624180;
	static int64_t x294 = 390737LL;
	int64_t x295 = 0LL;
	int32_t x296 = INT32_MIN;
	volatile int64_t t61 = 213723499LL;

	t61 = ((x293%(x294+x295))&x296);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x297 = -1;
	int8_t x298 = -1;
	int16_t x299 = 204;
	static uint8_t x300 = UINT8_MAX;
	static int32_t t62 = 2;

	t62 = ((x297%(x298+x299))&x300);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -446;
	uint8_t x302 = 22U;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	static int64_t t63 = 26061650577656856LL;

	t63 = ((x301%(x302+x303))&x304);

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x305 = 17LL;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = -1LL;

	t64 = ((x305%(x306+x307))&x308);

	if (t64 != 17LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -2;
	uint8_t x311 = 4U;
	int16_t x312 = 427;

	t65 = ((x309%(x310+x311))&x312);

	if (t65 != 426) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x317 = 1;
	int16_t x318 = 500;
	int32_t x320 = INT32_MIN;
	volatile int32_t t66 = 3;

	t66 = ((x317%(x318+x319))&x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = 15205773120LL;
	volatile int64_t x322 = INT64_MAX;
	uint8_t x324 = 15U;

	t67 = ((x321%(x322+x323))&x324);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x326 = 21U;
	volatile int8_t x327 = -1;
	int64_t x328 = -2727269394392812478LL;
	int64_t t68 = -8189498942696LL;

	t68 = ((x325%(x326+x327))&x328);

	if (t68 != -2727269394392812478LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = INT16_MIN;
	static int32_t x335 = -1;
	int32_t x336 = INT32_MAX;
	volatile int32_t t69 = -7500;

	t69 = ((x333%(x334+x335))&x336);

	if (t69 != 2147476536) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x341 = -1;
	uint8_t x343 = 74U;
	volatile int32_t t70 = -304605738;

	t70 = ((x341%(x342+x343))&x344);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x345 = 2942U;
	uint8_t x346 = 48U;
	int64_t x347 = 6LL;
	int64_t t71 = 195LL;

	t71 = ((x345%(x346+x347))&x348);

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x349 = -16;
	uint8_t x350 = 13U;
	uint16_t x351 = 1605U;
	uint8_t x352 = UINT8_MAX;

	t72 = ((x349%(x350+x351))&x352);

	if (t72 != 240) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x353 = 18424U;
	int32_t x354 = -1;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t73 = 326068229582LLU;

	t73 = ((x353%(x354+x355))&x356);

	if (t73 != 18424LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x357 = 2899495909649LLU;
	uint32_t x358 = 7U;
	int16_t x359 = -481;
	int8_t x360 = -1;
	uint64_t t74 = 13165799201806731LLU;

	t74 = ((x357%(x358+x359))&x360);

	if (t74 != 393304799LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = INT32_MIN;
	volatile int8_t x362 = -1;
	uint32_t x363 = 799717933U;
	uint64_t t75 = 3915LLU;

	t75 = ((x361%(x362+x363))&x364);

	if (t75 != 2472LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x370 = -1;
	int16_t x371 = 16010;
	int8_t x372 = INT8_MIN;
	volatile int64_t t76 = 12LL;

	t76 = ((x369%(x370+x371))&x372);

	if (t76 != -12416LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x373 = 7;
	uint64_t x374 = 57LLU;
	uint64_t x375 = 4298977012334LLU;
	volatile int64_t x376 = -756808811410465656LL;
	static uint64_t t77 = 6LLU;

	t77 = ((x373%(x374+x375))&x376);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x385 = -1;
	int16_t x386 = 342;
	uint8_t x388 = UINT8_MAX;
	int32_t t78 = 11;

	t78 = ((x385%(x386+x387))&x388);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = 0;
	int32_t x390 = -502380354;
	int64_t x391 = 5LL;
	static volatile int64_t t79 = 46000LL;

	t79 = ((x389%(x390+x391))&x392);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 0U;
	static volatile int16_t x394 = -1003;
	volatile int32_t x396 = INT32_MIN;
	static volatile int64_t t80 = -96372771762450LL;

	t80 = ((x393%(x394+x395))&x396);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x399 = -7LL;
	int64_t x400 = INT64_MIN;
	volatile int64_t t81 = 612LL;

	t81 = ((x397%(x398+x399))&x400);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 13243749852689LLU;
	static int16_t x402 = -1;
	uint64_t x404 = UINT64_MAX;

	t82 = ((x401%(x402+x403))&x404);

	if (t82 != 13243749852689LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x405 = INT64_MIN;
	volatile int16_t x406 = INT16_MIN;
	int16_t x408 = -920;
	int64_t t83 = -3630966LL;

	t83 = ((x405%(x406+x407))&x408);

	if (t83 != -344977408LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x413 = UINT32_MAX;
	volatile uint16_t x414 = 219U;
	int8_t x415 = 2;
	static volatile uint32_t t84 = 529U;

	t84 = ((x413%(x414+x415))&x416);

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x417 = 5U;
	int64_t x418 = INT64_MAX;
	uint64_t x419 = 59278064996713809LLU;
	volatile uint32_t x420 = 665918475U;

	t85 = ((x417%(x418+x419))&x420);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x424 = 2U;
	volatile int64_t t86 = -1336091175299LL;

	t86 = ((x421%(x422+x423))&x424);

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x425 = -117522969;
	static uint32_t x426 = 1U;
	uint64_t x427 = 5180257060595093LLU;
	int64_t x428 = -1LL;
	volatile uint64_t t87 = 428919578090LLU;

	t87 = ((x425%(x426+x427))&x428);

	if (t87 != 5028937873494007LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = 31830U;
	int8_t x430 = -5;
	int64_t x431 = -1LL;
	uint16_t x432 = 5U;
	static volatile int64_t t88 = 6543866594LL;

	t88 = ((x429%(x430+x431))&x432);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = INT32_MAX;
	volatile uint32_t x434 = UINT32_MAX;
	static int8_t x435 = -31;
	uint64_t x436 = UINT64_MAX;
	uint64_t t89 = 1161641566927LLU;

	t89 = ((x433%(x434+x435))&x436);

	if (t89 != 2147483647LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x437 = INT32_MAX;
	static volatile int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MAX;
	uint16_t x440 = 124U;
	volatile int64_t t90 = -1690900290LL;

	t90 = ((x437%(x438+x439))&x440);

	if (t90 != 124LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = -833LL;
	volatile int8_t x442 = INT8_MAX;
	uint32_t x443 = 471687U;
	int8_t x444 = -58;
	volatile int64_t t91 = -537591854403836456LL;

	t91 = ((x441%(x442+x443))&x444);

	if (t91 != -890LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x445 = 853U;
	int8_t x447 = INT8_MIN;
	volatile int64_t x448 = INT64_MAX;
	volatile uint64_t t92 = 91549588LLU;

	t92 = ((x445%(x446+x447))&x448);

	if (t92 != 853LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = INT64_MIN;
	static int8_t x450 = INT8_MIN;
	int16_t x451 = 4;
	volatile uint64_t t93 = 6159632076571LLU;

	t93 = ((x449%(x450+x451))&x452);

	if (t93 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x453 = INT16_MIN;
	static uint32_t x454 = 1251998U;
	int32_t x455 = -1;
	volatile uint32_t t94 = 21746U;

	t94 = ((x453%(x454+x455))&x456);

	if (t94 != 112U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = -727;
	int64_t x458 = 419430542208769LL;
	int16_t x460 = -827;
	int64_t t95 = 17128018LL;

	t95 = ((x457%(x458+x459))&x460);

	if (t95 != -1023LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = -4289;
	uint16_t x466 = 128U;
	int16_t x467 = -636;
	int32_t t96 = 21236733;

	t96 = ((x465%(x466+x467))&x468);

	if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x469 = 0U;
	uint16_t x470 = 110U;
	uint64_t x471 = 2847043937613775477LLU;
	static int64_t x472 = -1LL;
	volatile uint64_t t97 = 1995927552414082LLU;

	t97 = ((x469%(x470+x471))&x472);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MIN;
	static uint32_t x476 = 28U;
	volatile uint32_t t98 = 26U;

	t98 = ((x473%(x474+x475))&x476);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x479 = INT64_MIN;
	static volatile int32_t x480 = -27113813;
	static volatile int64_t t99 = -711910666LL;

	t99 = ((x477%(x478+x479))&x480);

	if (t99 != -27113813LL) { NG(); } else { ; }
	
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

