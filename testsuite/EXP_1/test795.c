#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
static uint64_t x8 = 4619529409018917LLU;
volatile int32_t x13 = INT32_MIN;
int8_t x15 = INT8_MIN;
uint64_t x22 = 872625LLU;
uint16_t x23 = UINT16_MAX;
int32_t x26 = INT32_MIN;
uint16_t x33 = 30831U;
int64_t x35 = -302341691026299LL;
static int32_t x43 = -1;
int64_t x44 = -1LL;
int8_t x49 = INT8_MIN;
uint32_t x53 = 31222193U;
int64_t x55 = INT64_MAX;
int16_t x63 = INT16_MAX;
int8_t x69 = 0;
volatile int64_t x75 = INT64_MAX;
uint32_t x91 = 1926059U;
static volatile int8_t x97 = 2;
int32_t x104 = -1;
static volatile int32_t t21 = 40117295;
static uint16_t x108 = 5859U;
volatile uint32_t t24 = 68940U;
static volatile int16_t x117 = -1;
static int32_t x130 = INT32_MIN;
int64_t t27 = -6940311993LL;
static int64_t t29 = -437355375670661LL;
int32_t x145 = 211353479;
static int16_t x146 = INT16_MIN;
int16_t x150 = INT16_MIN;
uint32_t x161 = UINT32_MAX;
uint8_t x164 = 1U;
int64_t x177 = 13259LL;
uint64_t x187 = 895616376806LLU;
int16_t x191 = 0;
static int32_t x193 = -4857359;
int16_t x194 = INT16_MAX;
static volatile int32_t x197 = 26189352;
int8_t x205 = 3;
int16_t x223 = -1;
uint16_t x242 = 1021U;
volatile int64_t x247 = INT64_MIN;
static int32_t x253 = INT32_MIN;
static int32_t x254 = INT32_MIN;
int32_t t55 = -1;
uint8_t x267 = UINT8_MAX;
static int64_t t57 = 6571603LL;
int32_t x273 = 1927;
int8_t x278 = INT8_MIN;
volatile int32_t x288 = INT32_MAX;
uint16_t x291 = 96U;
volatile int64_t x295 = -1LL;
int32_t x312 = INT32_MAX;
uint16_t x316 = 26373U;
static volatile int8_t x335 = INT8_MIN;
uint16_t x338 = UINT16_MAX;
uint64_t x341 = UINT64_MAX;
uint8_t x344 = UINT8_MAX;
uint16_t x354 = UINT16_MAX;
int16_t x363 = -1;
volatile int8_t x364 = -1;
int16_t x365 = INT16_MAX;
static uint16_t x372 = 9U;
static int16_t x379 = 378;
static volatile uint8_t x380 = UINT8_MAX;
uint64_t x382 = 5524LLU;
int64_t x383 = -1518573802145LL;
int8_t x388 = INT8_MIN;
int64_t x389 = -244958061LL;
uint16_t x390 = 25548U;
int16_t x396 = INT16_MIN;
volatile uint16_t x400 = UINT16_MAX;
uint16_t x418 = 2915U;
int16_t x430 = -1;
int32_t x433 = INT32_MAX;
static int16_t x440 = 487;
uint8_t x446 = 7U;
int64_t t93 = 70699828LL;
uint8_t x460 = 15U;
uint64_t x461 = 31LLU;
static int8_t x463 = INT8_MIN;
static int32_t t97 = 0;
uint64_t x467 = UINT64_MAX;
int32_t x469 = 1;
uint8_t x471 = 21U;
int8_t x472 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = -11117780;

	t0 = (((x1%x2)<=x3)-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 137808701795LLU;

	t1 = (((x5%x6)<=x7)-x8);

	if (t1 != 18442124544300532699LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int8_t x10 = INT8_MAX;
	static int64_t x11 = 410628227091339LL;
	int16_t x12 = 61;
	int32_t t2 = 1402;

	t2 = (((x9%x10)<=x11)-x12);

	if (t2 != -60) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -1;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 192991453607LLU;

	t3 = (((x13%x14)<=x15)-x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int8_t x18 = -1;
	uint64_t x19 = 2LLU;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 37LLU;

	t4 = (((x17%x18)<=x19)-x20);

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1056217LLU;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 25783504LLU;

	t5 = (((x21%x22)<=x23)-x24);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	uint64_t x27 = 31868223LLU;
	static int64_t x28 = INT64_MAX;
	static int64_t t6 = -90628594117724312LL;

	t6 = (((x25%x26)<=x27)-x28);

	if (t6 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 245LLU;
	uint32_t x36 = 9865770U;
	static uint32_t t7 = 37252U;

	t7 = (((x33%x34)<=x35)-x36);

	if (t7 != 4285101527U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 289671391095LLU;
	uint8_t x42 = UINT8_MAX;
	int64_t t8 = -63959LL;

	t8 = (((x41%x42)<=x43)-x44);

	if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1LL;
	int64_t t9 = 1318992437LL;

	t9 = (((x49%x50)<=x51)-x52);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = INT32_MAX;
	int8_t x56 = -4;
	static int32_t t10 = 950197;

	t10 = (((x53%x54)<=x55)-x56);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = 663621349;
	int16_t x59 = INT16_MIN;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t11 = 14943;

	t11 = (((x57%x58)<=x59)-x60);

	if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = 166423126648499LLU;
	static volatile uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 29LLU;

	t12 = (((x61%x62)<=x63)-x64);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MIN;
	uint32_t x66 = 105069025U;
	int64_t x67 = 27801617881219100LL;
	volatile uint32_t x68 = UINT32_MAX;
	volatile uint32_t t13 = 2U;

	t13 = (((x65%x66)<=x67)-x68);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MIN;
	int64_t x71 = 1901823900150254LL;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t14 = -55;

	t14 = (((x69%x70)<=x71)-x72);

	if (t14 != -254) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 1U;
	uint32_t x74 = UINT32_MAX;
	int32_t x76 = -5;
	volatile int32_t t15 = 178;

	t15 = (((x73%x74)<=x75)-x76);

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	volatile uint8_t x78 = 7U;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -4862496305LL;
	int64_t t16 = 1LL;

	t16 = (((x77%x78)<=x79)-x80);

	if (t16 != 4862496305LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = -20;
	uint8_t x82 = UINT8_MAX;
	volatile int32_t x83 = -1;
	int64_t x84 = 62276LL;
	int64_t t17 = 3972555128LL;

	t17 = (((x81%x82)<=x83)-x84);

	if (t17 != -62275LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = INT16_MIN;
	volatile uint32_t x87 = UINT32_MAX;
	static volatile int16_t x88 = -2;
	int32_t t18 = 3934755;

	t18 = (((x85%x86)<=x87)-x88);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MAX;
	uint8_t x90 = UINT8_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t19 = 14590591;

	t19 = (((x89%x90)<=x91)-x92);

	if (t19 != -32766) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x98 = INT16_MIN;
	int16_t x99 = 6;
	int64_t x100 = 3946593676878334LL;
	volatile int64_t t20 = 50746127520LL;

	t20 = (((x97%x98)<=x99)-x100);

	if (t20 != -3946593676878333LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	uint8_t x102 = 1U;
	int64_t x103 = INT64_MIN;

	t21 = (((x101%x102)<=x103)-x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MIN;
	static volatile uint32_t x106 = 6016672U;
	int16_t x107 = -6;
	static volatile int32_t t22 = 29352030;

	t22 = (((x105%x106)<=x107)-x108);

	if (t22 != -5858) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = 55;
	int8_t x111 = INT8_MAX;
	uint8_t x112 = UINT8_MAX;
	int32_t t23 = 19;

	t23 = (((x109%x110)<=x111)-x112);

	if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 1599;
	uint16_t x114 = 20U;
	int16_t x115 = 10357;
	volatile uint32_t x116 = UINT32_MAX;

	t24 = (((x113%x114)<=x115)-x116);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = -5750;
	static uint32_t x119 = 0U;
	static uint32_t x120 = 142364U;
	static uint32_t t25 = 602155956U;

	t25 = (((x117%x118)<=x119)-x120);

	if (t25 != 4294824932U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	uint8_t x126 = 17U;
	uint8_t x127 = 3U;
	int32_t x128 = -1;
	static volatile int32_t t26 = 8116;

	t26 = (((x125%x126)<=x127)-x128);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 2891U;
	int32_t x131 = -1;
	int64_t x132 = INT64_MAX;

	t27 = (((x129%x130)<=x131)-x132);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 1813196089LLU;
	int16_t x134 = 13799;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MAX;
	static volatile int32_t t28 = -187;

	t28 = (((x133%x134)<=x135)-x136);

	if (t28 != -32766) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = UINT32_MAX;
	volatile int16_t x139 = -616;
	int64_t x140 = 161324LL;

	t29 = (((x137%x138)<=x139)-x140);

	if (t29 != -161323LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x147 = 5;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t30 = 916023783141509695LLU;

	t30 = (((x145%x146)<=x147)-x148);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 25U;
	int8_t x151 = INT8_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t31 = 45846483U;

	t31 = (((x149%x150)<=x151)-x152);

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 111652969395575308LLU;
	static int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MAX;
	static volatile uint8_t x156 = 54U;
	volatile int32_t t32 = 2;

	t32 = (((x153%x154)<=x155)-x156);

	if (t32 != -53) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x162 = 49071632255LLU;
	int64_t x163 = INT64_MIN;
	int32_t t33 = -1549396;

	t33 = (((x161%x162)<=x163)-x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -1;
	int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int8_t x176 = 17;
	volatile int32_t t34 = 1545075;

	t34 = (((x173%x174)<=x175)-x176);

	if (t34 != -17) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x178 = 480U;
	volatile int16_t x179 = INT16_MAX;
	int64_t x180 = -2385LL;
	int64_t t35 = -1963234312439513LL;

	t35 = (((x177%x178)<=x179)-x180);

	if (t35 != 2386LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = -1;
	int8_t x182 = 57;
	uint8_t x183 = 12U;
	int32_t x184 = INT32_MAX;
	volatile int32_t t36 = 7399126;

	t36 = (((x181%x182)<=x183)-x184);

	if (t36 != -2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t37 = 1188;

	t37 = (((x185%x186)<=x187)-x188);

	if (t37 != 32769) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t38 = 82241;

	t38 = (((x189%x190)<=x191)-x192);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x195 = INT32_MIN;
	static int32_t x196 = -2024808;
	static volatile int32_t t39 = 42;

	t39 = (((x193%x194)<=x195)-x196);

	if (t39 != 2024808) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 218U;
	static int32_t t40 = -18;

	t40 = (((x197%x198)<=x199)-x200);

	if (t40 != -217) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	int32_t x204 = -138576;
	int32_t t41 = 18385653;

	t41 = (((x201%x202)<=x203)-x204);

	if (t41 != 138576) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = UINT64_MAX;
	static uint64_t x208 = 47LLU;
	uint64_t t42 = 1014LLU;

	t42 = (((x205%x206)<=x207)-x208);

	if (t42 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = 2046;
	int64_t x212 = INT64_MAX;
	int64_t t43 = 8118032753436LL;

	t43 = (((x209%x210)<=x211)-x212);

	if (t43 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	volatile int32_t t44 = -391;

	t44 = (((x213%x214)<=x215)-x216);

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = 64148170927367LLU;
	static uint8_t x220 = 8U;
	volatile int32_t t45 = 66266591;

	t45 = (((x217%x218)<=x219)-x220);

	if (t45 != -8) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = 13U;
	static int8_t x222 = INT8_MIN;
	volatile int32_t x224 = -1;
	volatile int32_t t46 = -17996;

	t46 = (((x221%x222)<=x223)-x224);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x225 = UINT16_MAX;
	volatile uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 2779682884543LLU;
	int16_t x228 = INT16_MIN;
	static int32_t t47 = 1;

	t47 = (((x225%x226)<=x227)-x228);

	if (t47 != 32769) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 2865U;
	static int16_t x231 = INT16_MAX;
	uint16_t x232 = 2727U;
	int32_t t48 = 1;

	t48 = (((x229%x230)<=x231)-x232);

	if (t48 != -2726) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = UINT64_MAX;
	static volatile int8_t x238 = -1;
	uint32_t x239 = 3063471U;
	int64_t x240 = 448734LL;
	int64_t t49 = -246911117115383787LL;

	t49 = (((x237%x238)<=x239)-x240);

	if (t49 != -448733LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = 5;
	volatile int8_t x243 = INT8_MIN;
	static int32_t x244 = -14;
	static volatile int32_t t50 = -127657;

	t50 = (((x241%x242)<=x243)-x244);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x245 = 577LL;
	static uint64_t x246 = 1LLU;
	static int64_t x248 = -1LL;
	int64_t t51 = 203426712LL;

	t51 = (((x245%x246)<=x247)-x248);

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x249 = 584U;
	static int32_t x250 = -1;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t52 = 27164238LL;

	t52 = (((x249%x250)<=x251)-x252);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x255 = 13999061851025LLU;
	static int8_t x256 = -1;
	static int32_t t53 = 69;

	t53 = (((x253%x254)<=x255)-x256);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = 1;
	static int8_t x258 = 1;
	volatile int32_t x259 = -1;
	volatile int8_t x260 = INT8_MAX;
	volatile int32_t t54 = 78;

	t54 = (((x257%x258)<=x259)-x260);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = 23;
	uint64_t x262 = UINT64_MAX;
	static int32_t x263 = -1;
	static int16_t x264 = INT16_MIN;

	t55 = (((x261%x262)<=x263)-x264);

	if (t55 != 32769) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x265 = INT8_MAX;
	volatile uint16_t x266 = 16328U;
	int64_t x268 = 3489922075495LL;
	volatile int64_t t56 = 1546965699511519LL;

	t56 = (((x265%x266)<=x267)-x268);

	if (t56 != -3489922075494LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x269 = 1754;
	static uint8_t x270 = 3U;
	int8_t x271 = 24;
	volatile int64_t x272 = -1LL;

	t57 = (((x269%x270)<=x271)-x272);

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = 2;
	static volatile int16_t x275 = 6;
	int64_t x276 = INT64_MAX;
	volatile int64_t t58 = 223769988152935305LL;

	t58 = (((x273%x274)<=x275)-x276);

	if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	int64_t x280 = -14956951807881LL;
	static volatile int64_t t59 = 5543LL;

	t59 = (((x277%x278)<=x279)-x280);

	if (t59 != 14956951807881LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = 2U;
	int64_t x287 = INT64_MIN;
	volatile int32_t t60 = -4755;

	t60 = (((x285%x286)<=x287)-x288);

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -8229168181449LL;
	volatile int64_t x290 = INT64_MIN;
	volatile uint16_t x292 = 1U;
	volatile int32_t t61 = 1940357;

	t61 = (((x289%x290)<=x291)-x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = -1LL;
	uint64_t x294 = 54884LLU;
	static int32_t x296 = -84011559;
	int32_t t62 = 12884877;

	t62 = (((x293%x294)<=x295)-x296);

	if (t62 != 84011560) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x297 = -3;
	int64_t x298 = -1LL;
	static uint8_t x299 = UINT8_MAX;
	uint64_t x300 = 14986LLU;
	uint64_t t63 = 45277321460LLU;

	t63 = (((x297%x298)<=x299)-x300);

	if (t63 != 18446744073709536631LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -207;
	uint64_t x302 = 223535305260599LLU;
	uint16_t x303 = 7959U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t64 = -1774;

	t64 = (((x301%x302)<=x303)-x304);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -4123836784216450LL;
	uint64_t x306 = 2737LLU;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t65 = 936LLU;

	t65 = (((x305%x306)<=x307)-x308);

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = 10703U;
	uint32_t x310 = 21469824U;
	static int16_t x311 = 3;
	int32_t t66 = 882;

	t66 = (((x309%x310)<=x311)-x312);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -1766;
	volatile int32_t t67 = 0;

	t67 = (((x313%x314)<=x315)-x316);

	if (t67 != -26373) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MAX;
	uint8_t x322 = 21U;
	int32_t x323 = INT32_MIN;
	volatile uint64_t x324 = 644167LLU;
	uint64_t t68 = 22768968265216LLU;

	t68 = (((x321%x322)<=x323)-x324);

	if (t68 != 18446744073708907449LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x329 = INT32_MAX;
	int32_t x330 = -3562574;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = 2U;
	static int32_t t69 = -62;

	t69 = (((x329%x330)<=x331)-x332);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x333 = 310727383965951LLU;
	int32_t x334 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t70 = 1;

	t70 = (((x333%x334)<=x335)-x336);

	if (t70 != 32769) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = 60;
	volatile int64_t x339 = INT64_MIN;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t71 = 7225853;

	t71 = (((x337%x338)<=x339)-x340);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MAX;
	volatile int32_t t72 = 1;

	t72 = (((x341%x342)<=x343)-x344);

	if (t72 != -254) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	static int32_t x347 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t73 = -80837363;

	t73 = (((x345%x346)<=x347)-x348);

	if (t73 != 129) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = -5;
	static uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t74 = -30940;

	t74 = (((x353%x354)<=x355)-x356);

	if (t74 != 32769) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x361 = 565157;
	static int16_t x362 = -1;
	static volatile int32_t t75 = 101670117;

	t75 = (((x361%x362)<=x363)-x364);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x366 = INT32_MIN;
	int8_t x367 = 1;
	int8_t x368 = INT8_MIN;
	volatile int32_t t76 = -1877306;

	t76 = (((x365%x366)<=x367)-x368);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = INT32_MAX;
	static int8_t x371 = INT8_MIN;
	int32_t t77 = 0;

	t77 = (((x369%x370)<=x371)-x372);

	if (t77 != -8) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x377 = 0U;
	uint64_t x378 = UINT64_MAX;
	int32_t t78 = -10148;

	t78 = (((x377%x378)<=x379)-x380);

	if (t78 != -254) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x381 = INT64_MIN;
	int8_t x384 = INT8_MAX;
	static volatile int32_t t79 = -474851;

	t79 = (((x381%x382)<=x383)-x384);

	if (t79 != -126) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 47LLU;
	int32_t x387 = -1;
	int32_t t80 = 1;

	t80 = (((x385%x386)<=x387)-x388);

	if (t80 != 129) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x391 = -57LL;
	volatile int16_t x392 = -1;
	volatile int32_t t81 = 1367;

	t81 = (((x389%x390)<=x391)-x392);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x393 = -1465706LL;
	int16_t x394 = INT16_MIN;
	uint32_t x395 = 0U;
	int32_t t82 = -13;

	t82 = (((x393%x394)<=x395)-x396);

	if (t82 != 32769) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = -1;
	uint16_t x398 = 1864U;
	static int32_t x399 = -1;
	int32_t t83 = -11674605;

	t83 = (((x397%x398)<=x399)-x400);

	if (t83 != -65534) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x405 = -2;
	static volatile int16_t x406 = INT16_MIN;
	uint16_t x407 = 18132U;
	volatile int8_t x408 = -1;
	volatile int32_t t84 = -886189;

	t84 = (((x405%x406)<=x407)-x408);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = 78796931453803226LL;
	static uint64_t x410 = 1021962363LLU;
	uint64_t x411 = 6778391217236392966LLU;
	uint16_t x412 = 239U;
	int32_t t85 = -1;

	t85 = (((x409%x410)<=x411)-x412);

	if (t85 != -238) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = INT8_MIN;
	volatile uint32_t x414 = 17391U;
	volatile uint8_t x415 = 46U;
	uint16_t x416 = UINT16_MAX;
	static int32_t t86 = 1130;

	t86 = (((x413%x414)<=x415)-x416);

	if (t86 != -65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = 563;
	volatile int64_t x419 = INT64_MIN;
	uint64_t x420 = 1701LLU;
	uint64_t t87 = 35731418882356733LLU;

	t87 = (((x417%x418)<=x419)-x420);

	if (t87 != 18446744073709549915LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MIN;
	uint32_t x423 = 1U;
	int16_t x424 = INT16_MAX;
	static int32_t t88 = -1;

	t88 = (((x421%x422)<=x423)-x424);

	if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	int16_t x432 = -1;
	int32_t t89 = 9206889;

	t89 = (((x429%x430)<=x431)-x432);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x434 = UINT32_MAX;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MAX;
	volatile int64_t t90 = 1LL;

	t90 = (((x433%x434)<=x435)-x436);

	if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x437 = 3368;
	static uint32_t x438 = 223829U;
	uint64_t x439 = 16263632419LLU;
	static int32_t t91 = 0;

	t91 = (((x437%x438)<=x439)-x440);

	if (t91 != -486) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	int8_t x444 = 1;
	volatile int32_t t92 = 6917;

	t92 = (((x441%x442)<=x443)-x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x445 = -25039155;
	int16_t x447 = INT16_MIN;
	int64_t x448 = 60180837473LL;

	t93 = (((x445%x446)<=x447)-x448);

	if (t93 != -60180837473LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x449 = INT64_MIN;
	uint16_t x450 = 276U;
	uint32_t x451 = 0U;
	uint16_t x452 = 61U;
	int32_t t94 = -91;

	t94 = (((x449%x450)<=x451)-x452);

	if (t94 != -60) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x453 = 95163LLU;
	static int16_t x454 = INT16_MIN;
	uint32_t x455 = 996570172U;
	int32_t x456 = INT32_MAX;
	static int32_t t95 = 10;

	t95 = (((x453%x454)<=x455)-x456);

	if (t95 != -2147483646) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	static int32_t x459 = INT32_MIN;
	int32_t t96 = 120978;

	t96 = (((x457%x458)<=x459)-x460);

	if (t96 != -15) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x462 = -4LL;
	static int16_t x464 = -1;

	t97 = (((x461%x462)<=x463)-x464);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = INT32_MIN;
	int64_t x466 = 33230236726LL;
	volatile int8_t x468 = -1;
	int32_t t98 = 26614;

	t98 = (((x465%x466)<=x467)-x468);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x470 = INT64_MIN;
	static volatile int32_t t99 = -83003;

	t99 = (((x469%x470)<=x471)-x472);

	if (t99 != 1) { NG(); } else { ; }
	
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

