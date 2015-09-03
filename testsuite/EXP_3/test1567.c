#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
static int32_t t0 = -925423;
static int64_t x16 = -85LL;
uint32_t t2 = 17U;
int32_t x17 = 787;
static uint64_t x19 = 26325314985831558LLU;
static volatile int64_t t3 = -5832759251430LL;
volatile int8_t x21 = INT8_MIN;
uint8_t x23 = UINT8_MAX;
volatile int32_t x24 = INT32_MIN;
static int16_t x26 = -1;
int16_t x27 = INT16_MIN;
volatile int16_t x32 = -1;
volatile int64_t t6 = -21LL;
int8_t x35 = -1;
volatile uint64_t t8 = 28937794479776009LLU;
int64_t x47 = INT64_MIN;
static int16_t x49 = INT16_MIN;
int8_t x53 = 1;
uint32_t x55 = 988956702U;
int64_t x56 = -1LL;
static uint64_t x58 = 34359360593920LLU;
uint16_t x60 = 5914U;
int16_t x61 = 0;
uint32_t x65 = 9773919U;
int8_t x67 = -31;
volatile int8_t x77 = INT8_MAX;
static int32_t t17 = -1;
static uint16_t x81 = UINT16_MAX;
int64_t x92 = INT64_MIN;
uint64_t x95 = UINT64_MAX;
int64_t x100 = INT64_MIN;
int32_t x103 = INT32_MIN;
int32_t x104 = -385468770;
uint16_t x105 = 1360U;
static volatile uint8_t x109 = 0U;
int16_t x111 = INT16_MIN;
uint64_t t25 = 82135552031293LLU;
int16_t x117 = INT16_MAX;
int8_t x119 = -1;
int64_t t26 = 13LL;
int64_t x127 = 7LL;
uint16_t x131 = 4864U;
int16_t x137 = INT16_MIN;
uint16_t x141 = UINT16_MAX;
uint16_t x145 = 112U;
int32_t x148 = INT32_MIN;
static volatile int32_t x154 = 2805;
int8_t x158 = INT8_MIN;
static int32_t x160 = -1;
static int16_t x161 = INT16_MIN;
volatile int64_t t42 = 3925543559LL;
static uint64_t t43 = 1001511377LLU;
int64_t x197 = -1LL;
int32_t x199 = INT32_MIN;
static int32_t t46 = -44196996;
volatile uint64_t x213 = 4780509LLU;
static int16_t x218 = INT16_MAX;
static int16_t x221 = 9284;
static volatile uint64_t x222 = 9053847917264LLU;
int64_t x230 = INT64_MIN;
int64_t x232 = 2022LL;
int32_t x234 = INT32_MAX;
static uint8_t x239 = 3U;
uint64_t x245 = 2729983722406LLU;
volatile int64_t x247 = -1LL;
uint16_t x249 = 13545U;
volatile int32_t t56 = 569;
volatile uint16_t x257 = 1976U;
uint64_t t58 = 3973132683205LLU;
static int64_t x277 = -1LL;
int64_t x281 = -1LL;
uint8_t x285 = UINT8_MAX;
int64_t x297 = 9625LL;
int16_t x311 = INT16_MIN;
uint16_t x313 = 212U;
int8_t x323 = -1;
int64_t t69 = 2412724415LL;
int32_t x329 = -1;
volatile int16_t x338 = INT16_MAX;
uint64_t x342 = 6928173LLU;
int32_t x344 = INT32_MAX;
static volatile int16_t x349 = 0;
static int8_t x353 = 0;
uint16_t x356 = UINT16_MAX;
int32_t x366 = INT32_MIN;
static volatile int32_t t79 = -85;
int64_t t80 = 169022849450797471LL;
int64_t x381 = -1LL;
volatile int16_t x382 = INT16_MIN;
int64_t x390 = INT64_MIN;
int64_t t83 = 119938848299838LL;
uint16_t x395 = 5450U;
uint16_t x396 = UINT16_MAX;
int8_t x404 = INT8_MIN;
uint32_t x417 = 3U;
int8_t x422 = 2;
static volatile int8_t x441 = INT8_MIN;
static uint8_t x444 = 109U;
int16_t x447 = INT16_MIN;
static int16_t x460 = INT16_MIN;
uint64_t t98 = 64517835192934823LLU;
uint64_t x470 = UINT64_MAX;
volatile uint64_t t99 = 90LLU;


void f0(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int64_t x8 = -13879840249LL;

	t0 = ((x5/x6)>>(x7<=x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 10U;
	static int64_t x10 = -3969137334144103LL;
	uint64_t x11 = 754563LLU;
	uint16_t x12 = 824U;
	int64_t t1 = -374LL;

	t1 = ((x9/x10)>>(x11<=x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 35U;
	static uint8_t x14 = UINT8_MAX;
	volatile uint16_t x15 = 1U;

	t2 = ((x13/x14)>>(x15<=x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	int32_t x20 = -1;

	t3 = ((x17/x18)>>(x19<=x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	int64_t t4 = -14LL;

	t4 = ((x21/x22)>>(x23<=x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MIN;
	uint64_t x28 = 55214450435LLU;
	volatile int32_t t5 = -16;

	t5 = ((x25/x26)>>(x27<=x28));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	volatile uint32_t x30 = 124595162U;
	static int32_t x31 = -1;

	t6 = ((x29/x30)>>(x31<=x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 0U;
	int16_t x34 = -1;
	int64_t x36 = INT64_MIN;
	volatile int32_t t7 = 2;

	t7 = ((x33/x34)>>(x35<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = -1;
	uint64_t x42 = 491950749995706LLU;
	volatile int64_t x43 = -1LL;
	uint16_t x44 = 14U;

	t8 = ((x41/x42)>>(x43<=x44));

	if (t8 != 18748LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 28813385374412LLU;
	static int16_t x46 = -1;
	static int64_t x48 = 14196LL;
	static uint64_t t9 = 27914LLU;

	t9 = ((x45/x46)>>(x47<=x48));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x50 = 11762958413802LL;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 1031644893;
	int64_t t10 = 53953395965LL;

	t10 = ((x49/x50)>>(x51<=x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x54 = UINT16_MAX;
	int32_t t11 = 51;

	t11 = ((x53/x54)>>(x55<=x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = 2;
	int64_t x59 = -1LL;
	volatile uint64_t t12 = 487832594451758LLU;

	t12 = ((x57/x58)>>(x59<=x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x62 = 27U;
	uint64_t x63 = UINT64_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t13 = -7;

	t13 = ((x61/x62)>>(x63<=x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 60U;
	static int32_t x68 = INT32_MAX;
	volatile uint32_t t14 = 233U;

	t14 = ((x65/x66)>>(x67<=x68));

	if (t14 != 81449U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 14U;
	int16_t x70 = -429;
	uint32_t x71 = 243407609U;
	static int64_t x72 = INT64_MAX;
	static volatile int32_t t15 = -19666;

	t15 = ((x69/x70)>>(x71<=x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x73 = 1;
	volatile uint64_t x74 = 244237997LLU;
	static int64_t x75 = -1LL;
	uint32_t x76 = UINT32_MAX;
	uint64_t t16 = 1LLU;

	t16 = ((x73/x74)>>(x75<=x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MIN;
	static int8_t x79 = -1;
	uint32_t x80 = 930061U;

	t17 = ((x77/x78)>>(x79<=x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x82 = INT8_MAX;
	int8_t x83 = -2;
	static volatile int8_t x84 = INT8_MIN;
	static int32_t t18 = -1;

	t18 = ((x81/x82)>>(x83<=x84));

	if (t18 != 516) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = 1740646823LL;
	int8_t x91 = INT8_MAX;
	volatile int64_t t19 = 11557693099861879LL;

	t19 = ((x89/x90)>>(x91<=x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = INT16_MIN;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t20 = 230;

	t20 = ((x93/x94)>>(x95<=x96));

	if (t20 != 65536) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = INT32_MAX;
	int64_t x98 = -44727125731768122LL;
	volatile int16_t x99 = INT16_MAX;
	volatile int64_t t21 = -7682779293486487LL;

	t21 = ((x97/x98)>>(x99<=x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	static int64_t t22 = -692025906918764591LL;

	t22 = ((x101/x102)>>(x103<=x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	static int32_t x108 = INT32_MAX;
	int64_t t23 = 81428675LL;

	t23 = ((x105/x106)>>(x107<=x108));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x110 = 23668U;
	int64_t x112 = -1LL;
	static uint32_t t24 = 150107U;

	t24 = ((x109/x110)>>(x111<=x112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	int16_t x115 = 1;
	int32_t x116 = 506857186;

	t25 = ((x113/x114)>>(x115<=x116));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x118 = INT64_MIN;
	volatile int64_t x120 = INT64_MAX;

	t26 = ((x117/x118)>>(x119<=x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 5U;
	volatile int16_t x122 = INT16_MAX;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;
	static int32_t t27 = -139;

	t27 = ((x121/x122)>>(x123<=x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = 372996040U;
	int32_t x126 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile uint32_t t28 = 975013328U;

	t28 = ((x125/x126)>>(x127<=x128));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -12;
	static uint64_t x130 = UINT64_MAX;
	int8_t x132 = INT8_MIN;
	uint64_t t29 = 1537LLU;

	t29 = ((x129/x130)>>(x131<=x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = INT8_MIN;
	uint32_t x140 = 872U;
	int64_t t30 = -631LL;

	t30 = ((x137/x138)>>(x139<=x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x142 = INT32_MAX;
	int32_t x143 = -1;
	uint16_t x144 = 20815U;
	static volatile int32_t t31 = 0;

	t31 = ((x141/x142)>>(x143<=x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x146 = 209722LLU;
	uint32_t x147 = 1591713U;
	volatile uint64_t t32 = 11055407135002076LLU;

	t32 = ((x145/x146)>>(x147<=x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MAX;
	static uint32_t x151 = UINT32_MAX;
	uint64_t x152 = 69027821611400LLU;
	int64_t t33 = 1266709660524768LL;

	t33 = ((x149/x150)>>(x151<=x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 249855833U;
	uint64_t x155 = 10919194365216000LLU;
	int16_t x156 = -1;
	uint32_t t34 = 1701561U;

	t34 = ((x153/x154)>>(x155<=x156));

	if (t34 != 44537U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = 3;
	uint16_t x159 = 6271U;
	int32_t t35 = 0;

	t35 = ((x157/x158)>>(x159<=x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = 1U;
	volatile int32_t t36 = 1;

	t36 = ((x161/x162)>>(x163<=x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x165 = INT32_MIN;
	static int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	int8_t x168 = 1;
	int32_t t37 = 5853;

	t37 = ((x165/x166)>>(x167<=x168));

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	uint8_t x170 = 52U;
	uint8_t x171 = 15U;
	static volatile int32_t x172 = INT32_MAX;
	static int64_t t38 = -1190LL;

	t38 = ((x169/x170)>>(x171<=x172));

	if (t38 != 88686269585142075LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MAX;
	static volatile uint64_t t39 = 3165990200036323951LLU;

	t39 = ((x173/x174)>>(x175<=x176));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x177 = UINT64_MAX;
	int64_t x178 = 594LL;
	int64_t x179 = -1LL;
	uint16_t x180 = 2U;
	volatile uint64_t t40 = 301025406600427LLU;

	t40 = ((x177/x178)>>(x179<=x180));

	if (t40 != 15527562351607366LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = -1;
	int32_t x186 = 956;
	uint16_t x187 = 14U;
	int8_t x188 = INT8_MAX;
	int32_t t41 = 1729;

	t41 = ((x185/x186)>>(x187<=x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -125592487LL;
	uint32_t x190 = 2046377157U;
	static volatile int16_t x191 = INT16_MIN;
	int8_t x192 = 1;

	t42 = ((x189/x190)>>(x191<=x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x193 = 7307024131101438LLU;
	static volatile uint64_t x194 = 3054919306045LLU;
	volatile int32_t x195 = -1;
	uint64_t x196 = UINT64_MAX;

	t43 = ((x193/x194)>>(x195<=x196));

	if (t43 != 1195LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = INT64_MIN;
	int8_t x200 = INT8_MAX;
	int64_t t44 = -264705715883LL;

	t44 = ((x197/x198)>>(x199<=x200));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = 1;
	volatile uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 99U;
	int64_t x204 = -3923301583270735467LL;
	uint64_t t45 = 1391023064LLU;

	t45 = ((x201/x202)>>(x203<=x204));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = UINT64_MAX;
	uint32_t x212 = 1U;

	t46 = ((x209/x210)>>(x211<=x212));

	if (t46 != 257) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x214 = -1LL;
	volatile uint16_t x215 = 1036U;
	static uint64_t x216 = UINT64_MAX;
	volatile uint64_t t47 = 244550284162003LLU;

	t47 = ((x213/x214)>>(x215<=x216));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = 839354921;
	static uint8_t x219 = 31U;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t48 = 1972563;

	t48 = ((x217/x218)>>(x219<=x220));

	if (t48 != 25615) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x223 = 1676309300U;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t49 = 348LLU;

	t49 = ((x221/x222)>>(x223<=x224));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int64_t x226 = -1LL;
	volatile int32_t x227 = 268;
	volatile int64_t x228 = INT64_MIN;
	int64_t t50 = 31548803LL;

	t50 = ((x225/x226)>>(x227<=x228));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x229 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	int64_t t51 = -1LL;

	t51 = ((x229/x230)>>(x231<=x232));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = INT32_MAX;
	int16_t x235 = -1;
	int32_t x236 = INT32_MAX;
	static int32_t t52 = 0;

	t52 = ((x233/x234)>>(x235<=x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t53 = -3111;

	t53 = ((x237/x238)>>(x239<=x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = INT8_MIN;
	int16_t x242 = -748;
	static volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = 216;
	volatile int32_t t54 = 20706;

	t54 = ((x241/x242)>>(x243<=x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x246 = 94;
	int16_t x248 = -31;
	volatile uint64_t t55 = 958168LLU;

	t55 = ((x245/x246)>>(x247<=x248));

	if (t55 != 29042380025LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	int64_t x252 = 73LL;

	t56 = ((x249/x250)>>(x251<=x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -22;
	static volatile int16_t x254 = -12;
	uint32_t x255 = 13989504U;
	uint16_t x256 = 38U;
	volatile int32_t t57 = -7068770;

	t57 = ((x253/x254)>>(x255<=x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x258 = UINT64_MAX;
	int16_t x259 = INT16_MAX;
	static int32_t x260 = INT32_MAX;

	t58 = ((x257/x258)>>(x259<=x260));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x269 = 120U;
	uint16_t x270 = 13U;
	static uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t59 = -327324;

	t59 = ((x269/x270)>>(x271<=x272));

	if (t59 != 9) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = -7;
	volatile int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	static int32_t x276 = 14241;
	static int64_t t60 = 5LL;

	t60 = ((x273/x274)>>(x275<=x276));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = 3;
	int8_t x279 = -1;
	int64_t x280 = 9614LL;
	volatile int64_t t61 = -1002236109356676740LL;

	t61 = ((x277/x278)>>(x279<=x280));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x282 = INT8_MIN;
	static int64_t x283 = 1550301377746577LL;
	int32_t x284 = -5479204;
	int64_t t62 = -396169LL;

	t62 = ((x281/x282)>>(x283<=x284));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x286 = 506326804230490945LLU;
	uint32_t x287 = 35934U;
	int32_t x288 = -1;
	volatile uint64_t t63 = 200179879LLU;

	t63 = ((x285/x286)>>(x287<=x288));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 2835951041783740LLU;
	int16_t x294 = INT16_MIN;
	int64_t x295 = 15970110863870187LL;
	int8_t x296 = -1;
	static uint64_t t64 = 947100547042715LLU;

	t64 = ((x293/x294)>>(x295<=x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x298 = -843629;
	int16_t x299 = INT16_MIN;
	static volatile int32_t x300 = INT32_MIN;
	int64_t t65 = -6460LL;

	t65 = ((x297/x298)>>(x299<=x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x309 = 49639495LLU;
	int32_t x310 = INT32_MIN;
	uint32_t x312 = 6U;
	static uint64_t t66 = 31616222LLU;

	t66 = ((x309/x310)>>(x311<=x312));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x314 = 42139998U;
	static int8_t x315 = INT8_MIN;
	volatile int8_t x316 = -1;
	uint32_t t67 = 3613U;

	t67 = ((x313/x314)>>(x315<=x316));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x317 = 29U;
	int16_t x318 = -1;
	static volatile uint64_t x319 = UINT64_MAX;
	static int32_t x320 = -1;
	static volatile uint32_t t68 = 8429U;

	t68 = ((x317/x318)>>(x319<=x320));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = -47730194637209332LL;
	static int64_t x322 = INT64_MIN;
	int16_t x324 = INT16_MIN;

	t69 = ((x321/x322)>>(x323<=x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = 10510561U;
	int64_t t70 = 7LL;

	t70 = ((x329/x330)>>(x331<=x332));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x333 = 28964709303571LLU;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = 1U;
	volatile uint64_t t71 = 2748253514986285942LLU;

	t71 = ((x333/x334)>>(x335<=x336));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x337 = -431;
	int8_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t72 = 424893265;

	t72 = ((x337/x338)>>(x339<=x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x341 = -95;
	int32_t x343 = -1;
	uint64_t t73 = 1437645LLU;

	t73 = ((x341/x342)>>(x343<=x344));

	if (t73 != 1331284890959LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	static uint8_t x347 = UINT8_MAX;
	uint64_t x348 = UINT64_MAX;
	volatile int64_t t74 = 9879LL;

	t74 = ((x345/x346)>>(x347<=x348));

	if (t74 != 16384LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x350 = 3U;
	volatile int16_t x351 = 0;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t75 = 511;

	t75 = ((x349/x350)>>(x351<=x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x354 = INT8_MAX;
	int16_t x355 = -6402;
	int32_t t76 = -5;

	t76 = ((x353/x354)>>(x355<=x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 924U;
	int16_t x359 = INT16_MAX;
	static int8_t x360 = INT8_MIN;
	static int32_t t77 = 348061796;

	t77 = ((x357/x358)>>(x359<=x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x365 = 1;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = -2031665LL;
	static volatile int32_t t78 = -189401099;

	t78 = ((x365/x366)>>(x367<=x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x369 = 1U;
	int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MIN;
	int32_t x372 = -24899996;

	t79 = ((x369/x370)>>(x371<=x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -1;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	volatile uint64_t x380 = UINT64_MAX;

	t80 = ((x377/x378)>>(x379<=x380));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x383 = INT32_MIN;
	int16_t x384 = -3;
	int64_t t81 = -1684273847185LL;

	t81 = ((x381/x382)>>(x383<=x384));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = -1133;
	int32_t x386 = -15;
	volatile int32_t x387 = -1;
	static uint64_t x388 = 2LLU;
	volatile int32_t t82 = -59113;

	t82 = ((x385/x386)>>(x387<=x388));

	if (t82 != 75) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x389 = 37U;
	uint16_t x391 = 1490U;
	uint64_t x392 = 9775170LLU;

	t83 = ((x389/x390)>>(x391<=x392));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = 0;
	volatile uint16_t x394 = 1U;
	volatile int32_t t84 = 9850952;

	t84 = ((x393/x394)>>(x395<=x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = -1662;
	static int32_t x402 = -13193;
	uint32_t x403 = 555782U;
	static volatile int32_t t85 = -169971;

	t85 = ((x401/x402)>>(x403<=x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x405 = -1LL;
	static volatile int64_t x406 = -1LL;
	static uint64_t x407 = 19577796381780254LLU;
	uint64_t x408 = 497LLU;
	static volatile int64_t t86 = -26659763236734LL;

	t86 = ((x405/x406)>>(x407<=x408));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x410 = 269U;
	uint16_t x411 = 135U;
	uint32_t x412 = 970609U;
	int32_t t87 = 56;

	t87 = ((x409/x410)>>(x411<=x412));

	if (t87 != 3991605) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -1LL;
	int8_t x414 = INT8_MIN;
	int8_t x415 = 8;
	static volatile int8_t x416 = INT8_MAX;
	volatile int64_t t88 = -15581849425LL;

	t88 = ((x413/x414)>>(x415<=x416));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x418 = 1LLU;
	uint32_t x419 = 117U;
	uint32_t x420 = UINT32_MAX;
	uint64_t t89 = 7501LLU;

	t89 = ((x417/x418)>>(x419<=x420));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MIN;
	static int32_t t90 = -20793;

	t90 = ((x421/x422)>>(x423<=x424));

	if (t90 != 16383) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x425 = 443311451;
	uint16_t x426 = 23863U;
	static int8_t x427 = 0;
	int16_t x428 = 4084;
	int32_t t91 = -3;

	t91 = ((x425/x426)>>(x427<=x428));

	if (t91 != 9288) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x429 = 1U;
	static volatile int16_t x430 = 1660;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = INT32_MIN;
	int32_t t92 = -1154;

	t92 = ((x429/x430)>>(x431<=x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x442 = INT8_MIN;
	uint64_t x443 = 2803222702566720LLU;
	int32_t t93 = -14577363;

	t93 = ((x441/x442)>>(x443<=x444));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x445 = 122485LLU;
	int64_t x446 = -1LL;
	volatile int64_t x448 = -1LL;
	volatile uint64_t t94 = 21LLU;

	t94 = ((x445/x446)>>(x447<=x448));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MAX;
	static int8_t x451 = INT8_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t95 = -27148;

	t95 = ((x449/x450)>>(x451<=x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = UINT8_MAX;
	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MIN;
	volatile int64_t t96 = -12823210087786688LL;

	t96 = ((x453/x454)>>(x455<=x456));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x457 = 3393780404696LLU;
	int32_t x458 = INT32_MAX;
	uint16_t x459 = 3U;
	volatile uint64_t t97 = 10970230731947LLU;

	t97 = ((x457/x458)>>(x459<=x460));

	if (t97 != 1580LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x465 = UINT64_MAX;
	static uint32_t x466 = UINT32_MAX;
	static volatile uint16_t x467 = 0U;
	int64_t x468 = INT64_MAX;

	t98 = ((x465/x466)>>(x467<=x468));

	if (t98 != 2147483648LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x469 = INT16_MIN;
	uint8_t x471 = 115U;
	uint64_t x472 = 451LLU;

	t99 = ((x469/x470)>>(x471<=x472));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

