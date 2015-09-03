#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
static volatile int64_t x4 = INT64_MIN;
int64_t x5 = -85706270159368476LL;
int16_t x18 = INT16_MIN;
int64_t x19 = -118838LL;
static uint32_t t5 = 5115864U;
int16_t x28 = INT16_MIN;
int16_t x29 = -836;
static uint8_t x35 = 34U;
int64_t x52 = -1LL;
int8_t x54 = INT8_MAX;
int64_t x55 = INT64_MAX;
int16_t x57 = -24;
volatile int32_t t13 = -5627;
volatile int64_t x66 = INT64_MIN;
volatile int64_t t14 = -2564877435721LL;
int64_t x72 = -36075931204859213LL;
uint32_t x75 = 252U;
static volatile int32_t t16 = 42;
int64_t x77 = INT64_MIN;
volatile int32_t x80 = INT32_MAX;
int32_t x82 = -1;
int8_t x87 = 51;
int32_t x91 = INT32_MIN;
static uint64_t t20 = 44021493453379LLU;
int32_t x93 = INT32_MIN;
uint64_t x96 = 786812326899211LLU;
volatile uint16_t x98 = 33U;
uint32_t t23 = 378355583U;
volatile int64_t x106 = 54LL;
static int16_t x108 = INT16_MIN;
volatile int64_t t24 = -117810673891691568LL;
static int8_t x112 = -2;
int64_t x118 = INT64_MIN;
volatile int64_t t26 = -13113823654LL;
int8_t x121 = 14;
int16_t x125 = -1;
static uint8_t x126 = 25U;
int8_t x127 = INT8_MIN;
int8_t x129 = INT8_MAX;
static uint8_t x130 = 3U;
int16_t x132 = INT16_MIN;
int8_t x136 = -1;
int8_t x139 = 13;
uint32_t x148 = 2U;
int8_t x149 = INT8_MIN;
uint16_t x153 = 516U;
static int64_t x158 = 245510LL;
int32_t x159 = INT32_MIN;
volatile int64_t t36 = -59851193455112640LL;
int64_t x172 = INT64_MIN;
volatile int32_t t38 = 1;
int8_t x178 = 2;
int64_t x192 = INT64_MIN;
int64_t x193 = INT64_MIN;
int64_t x194 = -783266881841340LL;
uint32_t x197 = 6347807U;
uint8_t x201 = UINT8_MAX;
uint64_t x215 = 1836639208501738787LLU;
int64_t x216 = INT64_MIN;
int64_t t51 = 362421139095928357LL;
volatile uint64_t x234 = UINT64_MAX;
int64_t x235 = INT64_MAX;
int8_t x243 = 1;
volatile uint32_t x253 = UINT32_MAX;
int32_t x270 = INT32_MIN;
int32_t x272 = INT32_MAX;
int64_t x273 = 4061431108860LL;
uint16_t x275 = 578U;
uint64_t x276 = 6LLU;
int64_t x281 = -1LL;
int16_t x288 = -92;
volatile int32_t t67 = 353249;
uint16_t x296 = 186U;
static int64_t x298 = INT64_MIN;
volatile int64_t x301 = 3734721885839LL;
uint8_t x303 = 1U;
volatile int64_t t70 = -1833427793LL;
volatile int8_t x306 = INT8_MIN;
uint16_t x313 = 12U;
volatile int64_t x316 = -1LL;
volatile int32_t x323 = INT32_MIN;
volatile uint16_t x325 = 26U;
int32_t x326 = INT32_MIN;
volatile uint64_t x330 = 6934886531777872682LLU;
uint8_t x341 = 8U;
uint32_t x348 = 43U;
int64_t x349 = -1LL;
int64_t t82 = 52267413413326529LL;
volatile int8_t x360 = -1;
static int32_t t85 = 5346629;
volatile uint16_t x367 = 7U;
int16_t x375 = -18;
int64_t x377 = -1LL;
static volatile int8_t x379 = -1;
int16_t x382 = 1350;
volatile uint16_t x384 = 1947U;
volatile int32_t t91 = -1;
int8_t x406 = -25;
int32_t x416 = INT32_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	volatile int32_t x2 = 11665;
	volatile uint32_t t0 = 16064U;

	t0 = ((x1/x2)&(x3<=x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	static int64_t x7 = 56055LL;
	int64_t x8 = -1LL;
	int64_t t1 = -266LL;

	t1 = ((x5/x6)&(x7<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 40LL;
	int32_t x10 = -41519;
	int8_t x11 = -1;
	int16_t x12 = 2814;
	int64_t t2 = -1627LL;

	t2 = ((x9/x10)&(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -56;
	static int64_t x14 = INT64_MAX;
	volatile int8_t x15 = -1;
	uint32_t x16 = 1U;
	int64_t t3 = 4173623897732403LL;

	t3 = ((x13/x14)&(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x20 = 0;
	static int64_t t4 = -4319670862911382LL;

	t4 = ((x17/x18)&(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 436U;
	volatile uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 0U;

	t5 = ((x21/x22)&(x23<=x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 184U;
	volatile int32_t x26 = INT32_MAX;
	volatile int16_t x27 = -1;
	volatile int32_t t6 = 0;

	t6 = ((x25/x26)&(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -234396478;

	t7 = ((x29/x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint64_t x34 = 2174738914476LLU;
	volatile int8_t x36 = INT8_MIN;
	volatile uint64_t t8 = 452127512LLU;

	t8 = ((x33/x34)&(x35<=x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MIN;
	int64_t t9 = -16622204315082LL;

	t9 = ((x45/x46)&(x47<=x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = -7111;
	volatile int64_t x51 = INT64_MAX;
	static uint64_t t10 = 15653318743725LLU;

	t10 = ((x49/x50)&(x51<=x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	volatile int32_t x56 = INT32_MAX;
	static volatile int32_t t11 = 317;

	t11 = ((x53/x54)&(x55<=x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = INT8_MIN;
	int16_t x59 = 162;
	int32_t x60 = -901331;
	int32_t t12 = 16673921;

	t12 = ((x57/x58)&(x59<=x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x61 = 25643U;
	uint16_t x62 = 7U;
	int16_t x63 = 486;
	int32_t x64 = INT32_MIN;

	t13 = ((x61/x62)&(x63<=x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int16_t x67 = -238;
	int16_t x68 = INT16_MIN;

	t14 = ((x65/x66)&(x67<=x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = INT16_MIN;
	uint64_t x70 = 446415LLU;
	int64_t x71 = INT64_MAX;
	static uint64_t t15 = 578206779861LLU;

	t15 = ((x69/x70)&(x71<=x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -1;
	volatile int32_t x74 = INT32_MIN;
	int64_t x76 = -1055459327441370401LL;

	t16 = ((x73/x74)&(x75<=x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = INT16_MIN;
	static int64_t t17 = -11008684LL;

	t17 = ((x77/x78)&(x79<=x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	int32_t x83 = INT32_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t18 = 0;

	t18 = ((x81/x82)&(x83<=x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 216U;
	uint32_t x86 = 291805606U;
	static volatile uint64_t x88 = 255LLU;
	volatile uint32_t t19 = 247445596U;

	t19 = ((x85/x86)&(x87<=x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = -1LL;
	static uint64_t x90 = 173068LLU;
	int8_t x92 = -1;

	t20 = ((x89/x90)&(x91<=x92));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 5U;
	uint32_t x95 = 14248U;
	static volatile int32_t t21 = 3569;

	t21 = ((x93/x94)&(x95<=x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = 1255165119U;
	int16_t x99 = 6200;
	int8_t x100 = -8;
	static uint32_t t22 = 6005U;

	t22 = ((x97/x98)&(x99<=x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 19164509U;
	volatile int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MIN;
	int64_t x104 = -66035958869LL;

	t23 = ((x101/x102)&(x103<=x104));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x107 = 2285U;

	t24 = ((x105/x106)&(x107<=x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 979902224LLU;
	int16_t x110 = 9575;
	volatile int16_t x111 = INT16_MIN;
	volatile uint64_t t25 = 1563LLU;

	t25 = ((x109/x110)&(x111<=x112));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = -27;
	static volatile int8_t x119 = INT8_MAX;
	volatile uint64_t x120 = UINT64_MAX;

	t26 = ((x117/x118)&(x119<=x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = -1231LL;
	volatile int8_t x123 = -1;
	static int32_t x124 = INT32_MIN;
	volatile int64_t t27 = -514924677LL;

	t27 = ((x121/x122)&(x123<=x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x128 = INT16_MIN;
	int32_t t28 = 852;

	t28 = ((x125/x126)&(x127<=x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x131 = INT16_MIN;
	volatile int32_t t29 = 247;

	t29 = ((x129/x130)&(x131<=x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -29;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 544U;
	int32_t t30 = 241;

	t30 = ((x133/x134)&(x135<=x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 2U;
	volatile int64_t x140 = INT64_MIN;
	int32_t t31 = -886641;

	t31 = ((x137/x138)&(x139<=x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = -1;
	static int32_t x146 = -1;
	int32_t x147 = -1;
	int32_t t32 = 130849;

	t32 = ((x145/x146)&(x147<=x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x150 = INT32_MIN;
	uint64_t x151 = UINT64_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t33 = 228724;

	t33 = ((x149/x150)&(x151<=x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x154 = 684679730;
	static int8_t x155 = -30;
	int64_t x156 = INT64_MAX;
	volatile int32_t t34 = -1;

	t34 = ((x153/x154)&(x155<=x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 670252U;
	int32_t x160 = INT32_MAX;
	volatile int64_t t35 = -25962360162683LL;

	t35 = ((x157/x158)&(x159<=x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = 1304442;

	t36 = ((x161/x162)&(x163<=x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -497;
	uint8_t x166 = 15U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -433;
	volatile int32_t t37 = 1188251;

	t37 = ((x165/x166)&(x167<=x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	static uint8_t x170 = 2U;
	int16_t x171 = -1;

	t38 = ((x169/x170)&(x171<=x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	int64_t t39 = -546935461479LL;

	t39 = ((x173/x174)&(x175<=x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x177 = -1LL;
	static volatile int16_t x179 = INT16_MAX;
	volatile int16_t x180 = -1;
	volatile int64_t t40 = 35666LL;

	t40 = ((x177/x178)&(x179<=x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = 7191LLU;
	static volatile uint64_t t41 = 15199157467531LLU;

	t41 = ((x181/x182)&(x183<=x184));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 1;
	static int8_t x186 = INT8_MIN;
	uint64_t x187 = 200676370065793427LLU;
	int8_t x188 = 19;
	volatile int32_t t42 = -5305610;

	t42 = ((x185/x186)&(x187<=x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = 0;
	uint64_t x190 = 2511499489786852508LLU;
	static int8_t x191 = INT8_MIN;
	static uint64_t t43 = 457405LLU;

	t43 = ((x189/x190)&(x191<=x192));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MAX;
	int64_t t44 = 70LL;

	t44 = ((x193/x194)&(x195<=x196));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x198 = 419592755943644LL;
	int64_t x199 = INT64_MIN;
	static uint32_t x200 = 49394U;
	int64_t t45 = 234504828311606421LL;

	t45 = ((x197/x198)&(x199<=x200));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = -1LL;
	uint16_t x203 = UINT16_MAX;
	static volatile uint64_t x204 = 41LLU;
	static int64_t t46 = 5223LL;

	t46 = ((x201/x202)&(x203<=x204));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = -1;
	int64_t x206 = -1LL;
	int64_t x207 = 55LL;
	int64_t x208 = 26432887772646LL;
	volatile int64_t t47 = 20262110474597LL;

	t47 = ((x205/x206)&(x207<=x208));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	int8_t x211 = INT8_MAX;
	static int16_t x212 = 824;
	uint32_t t48 = 794830528U;

	t48 = ((x209/x210)&(x211<=x212));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = 9;
	int16_t x214 = INT16_MAX;
	volatile int32_t t49 = 51176;

	t49 = ((x213/x214)&(x215<=x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint8_t x218 = UINT8_MAX;
	static uint64_t x219 = 1408706LLU;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint64_t t50 = 292304158LLU;

	t50 = ((x217/x218)&(x219<=x220));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = -17398199853246874LL;
	int64_t x223 = -363265194171471LL;
	int8_t x224 = INT8_MAX;

	t51 = ((x221/x222)&(x223<=x224));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 179212U;
	uint64_t x226 = 2917500725LLU;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t52 = 127LLU;

	t52 = ((x225/x226)&(x227<=x228));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MAX;
	static int32_t x236 = INT32_MIN;
	volatile uint64_t t53 = 907408653696250180LLU;

	t53 = ((x233/x234)&(x235<=x236));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 3U;
	int8_t x238 = INT8_MIN;
	volatile uint32_t x239 = 1056U;
	int8_t x240 = 13;
	volatile int32_t t54 = -13857;

	t54 = ((x237/x238)&(x239<=x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x241 = 138067353435306LLU;
	int64_t x242 = 5LL;
	static int8_t x244 = INT8_MIN;
	static volatile uint64_t t55 = 8258899349040LLU;

	t55 = ((x241/x242)&(x243<=x244));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = INT32_MIN;
	int64_t x246 = 79462228640015099LL;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t x248 = 1LL;
	int64_t t56 = 58068332546LL;

	t56 = ((x245/x246)&(x247<=x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 1;
	volatile int64_t t57 = -792329507LL;

	t57 = ((x249/x250)&(x251<=x252));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = -59814213315800LL;
	static int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MIN;
	int64_t t58 = 3287147849LL;

	t58 = ((x253/x254)&(x255<=x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = INT64_MIN;
	static int8_t x260 = -4;
	volatile int32_t t59 = 1;

	t59 = ((x257/x258)&(x259<=x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MIN;
	volatile uint64_t x264 = 6501061LLU;
	int64_t t60 = 227363LL;

	t60 = ((x261/x262)&(x263<=x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MAX;
	static int32_t x266 = INT32_MIN;
	static int16_t x267 = INT16_MIN;
	static int64_t x268 = -454399LL;
	static int64_t t61 = 1598921089LL;

	t61 = ((x265/x266)&(x267<=x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -24978678LL;
	volatile uint16_t x271 = UINT16_MAX;
	int64_t t62 = 1453113204168347497LL;

	t62 = ((x269/x270)&(x271<=x272));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x274 = INT32_MIN;
	static volatile int64_t t63 = -17752302591LL;

	t63 = ((x273/x274)&(x275<=x276));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = 61;
	uint8_t x278 = 16U;
	int64_t x279 = 2961LL;
	int32_t x280 = INT32_MIN;
	volatile int32_t t64 = -75;

	t64 = ((x277/x278)&(x279<=x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x282 = 1594120;
	int64_t x283 = -8LL;
	volatile int32_t x284 = -1;
	volatile int64_t t65 = 3296973541100738LL;

	t65 = ((x281/x282)&(x283<=x284));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MAX;
	uint64_t t66 = 148LLU;

	t66 = ((x285/x286)&(x287<=x288));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = 1;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;

	t67 = ((x289/x290)&(x291<=x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = -1;
	uint16_t x294 = 11U;
	uint16_t x295 = UINT16_MAX;
	int32_t t68 = -130482;

	t68 = ((x293/x294)&(x295<=x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -1;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = -1LL;
	volatile int64_t t69 = 2LL;

	t69 = ((x297/x298)&(x299<=x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = INT32_MAX;
	volatile int32_t x304 = INT32_MIN;

	t70 = ((x301/x302)&(x303<=x304));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = 488965U;
	static int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MAX;
	volatile uint32_t t71 = 130U;

	t71 = ((x305/x306)&(x307<=x308));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 10507;
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t72 = -3335278;

	t72 = ((x309/x310)&(x311<=x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int32_t t73 = 37496;

	t73 = ((x313/x314)&(x315<=x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = UINT8_MAX;
	uint32_t t74 = 1U;

	t74 = ((x317/x318)&(x319<=x320));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	volatile int8_t x322 = -18;
	static int32_t x324 = 267833160;
	int64_t t75 = -10212442085659LL;

	t75 = ((x321/x322)&(x323<=x324));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x327 = INT32_MAX;
	volatile uint16_t x328 = UINT16_MAX;
	int32_t t76 = 7306085;

	t76 = ((x325/x326)&(x327<=x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MAX;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t77 = 55215314LLU;

	t77 = ((x329/x330)&(x331<=x332));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x334 = -31;
	uint32_t x335 = 509782U;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t78 = -452889053;

	t78 = ((x333/x334)&(x335<=x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint32_t x338 = UINT32_MAX;
	static int16_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	uint32_t t79 = 11107907U;

	t79 = ((x337/x338)&(x339<=x340));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x342 = INT64_MAX;
	int64_t x343 = -1LL;
	static int32_t x344 = -1;
	volatile int64_t t80 = 1387LL;

	t80 = ((x341/x342)&(x343<=x344));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x345 = 4010731167366LL;
	volatile int64_t x346 = -127497LL;
	int32_t x347 = -1;
	volatile int64_t t81 = 4846096410273806LL;

	t81 = ((x345/x346)&(x347<=x348));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x350 = INT8_MAX;
	int8_t x351 = -1;
	volatile int64_t x352 = INT64_MAX;

	t82 = ((x349/x350)&(x351<=x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	int16_t x355 = INT16_MAX;
	static int32_t x356 = INT32_MIN;
	volatile uint64_t t83 = 16398079665658LLU;

	t83 = ((x353/x354)&(x355<=x356));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x357 = 12427820260925LL;
	int64_t x358 = -189629435185897LL;
	volatile int8_t x359 = INT8_MIN;
	int64_t t84 = 192358447147771743LL;

	t84 = ((x357/x358)&(x359<=x360));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = 8;
	uint8_t x363 = 1U;
	int64_t x364 = INT64_MIN;

	t85 = ((x361/x362)&(x363<=x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -1LL;
	int16_t x366 = -22;
	uint16_t x368 = 864U;
	int64_t t86 = -46591LL;

	t86 = ((x365/x366)&(x367<=x368));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = -5;
	static uint8_t x371 = UINT8_MAX;
	uint64_t x372 = UINT64_MAX;
	static int32_t t87 = 0;

	t87 = ((x369/x370)&(x371<=x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x373 = 2U;
	static int32_t x374 = INT32_MIN;
	static uint64_t x376 = 56292219LLU;
	static int32_t t88 = 1683;

	t88 = ((x373/x374)&(x375<=x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x378 = INT8_MIN;
	static uint8_t x380 = 0U;
	volatile int64_t t89 = -14388073392LL;

	t89 = ((x377/x378)&(x379<=x380));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x381 = INT16_MIN;
	volatile int8_t x383 = -1;
	static volatile int32_t t90 = 14603265;

	t90 = ((x381/x382)&(x383<=x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x385 = INT32_MIN;
	int32_t x386 = 6042611;
	static volatile int8_t x387 = 62;
	static int32_t x388 = -14;

	t91 = ((x385/x386)&(x387<=x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x389 = 4U;
	int32_t x390 = INT32_MAX;
	uint64_t x391 = 2494LLU;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t92 = -15392385;

	t92 = ((x389/x390)&(x391<=x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 1U;
	static int8_t x394 = -1;
	static int64_t x395 = 2854924957941191LL;
	int16_t x396 = 12;
	static volatile uint32_t t93 = 0U;

	t93 = ((x393/x394)&(x395<=x396));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x397 = 24674666888407367LLU;
	int32_t x398 = 190500;
	int64_t x399 = 82LL;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t94 = 13LLU;

	t94 = ((x397/x398)&(x399<=x400));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = UINT8_MAX;
	static uint8_t x402 = 1U;
	uint64_t x403 = 1LLU;
	uint8_t x404 = 7U;
	volatile int32_t t95 = -62461;

	t95 = ((x401/x402)&(x403<=x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x407 = INT64_MAX;
	int32_t x408 = INT32_MIN;
	uint32_t t96 = 3U;

	t96 = ((x405/x406)&(x407<=x408));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = 689U;
	int64_t x410 = -1LL;
	volatile int64_t x411 = INT64_MIN;
	uint8_t x412 = 124U;
	static int64_t t97 = 0LL;

	t97 = ((x409/x410)&(x411<=x412));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 1484933017U;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	volatile uint32_t t98 = 1397680U;

	t98 = ((x413/x414)&(x415<=x416));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x417 = 4LLU;
	volatile uint8_t x418 = UINT8_MAX;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = -1LL;
	volatile uint64_t t99 = 1033243LLU;

	t99 = ((x417/x418)&(x419<=x420));

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

