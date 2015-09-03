#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 404908U;
int16_t x12 = -235;
static int64_t x13 = -126467881887483LL;
volatile int64_t t2 = -1LL;
int16_t x27 = -34;
static int32_t t4 = -898;
int32_t x29 = INT32_MIN;
int16_t x34 = -10;
int32_t t7 = 0;
static uint16_t x41 = 2890U;
static volatile uint32_t t8 = 499U;
int8_t x45 = -1;
int16_t x46 = INT16_MIN;
static volatile int32_t t9 = INT32_MIN;
uint32_t x59 = 34U;
uint8_t x65 = 15U;
int16_t x67 = 260;
volatile int64_t t14 = 732894LL;
uint8_t x69 = 7U;
volatile uint64_t t16 = 107290768567049LLU;
volatile int32_t x78 = -1;
volatile int64_t t17 = -12721912504576LL;
int8_t x84 = 2;
uint8_t x108 = UINT8_MAX;
static volatile uint64_t t21 = 15182444730388LLU;
uint64_t x109 = UINT64_MAX;
uint64_t x113 = 145458796490083LLU;
int32_t x117 = 256;
static int32_t x126 = INT32_MAX;
int64_t x127 = 1839LL;
uint16_t x128 = UINT16_MAX;
static int64_t t26 = 529LL;
int16_t x143 = INT16_MIN;
volatile uint64_t t30 = 241353925954LLU;
int16_t x152 = -12;
uint16_t x154 = 3341U;
int16_t x155 = INT16_MIN;
static int16_t x159 = -1;
volatile int8_t x168 = INT8_MAX;
uint32_t t34 = 68U;
int64_t x175 = INT64_MAX;
int32_t x176 = INT32_MIN;
volatile int32_t x184 = INT32_MAX;
volatile int32_t x190 = INT32_MIN;
uint32_t x191 = UINT32_MAX;
uint32_t t39 = 20U;
uint32_t x194 = 70401706U;
volatile int64_t t40 = -510384547010284116LL;
int16_t x197 = INT16_MIN;
int64_t x204 = INT64_MAX;
volatile uint16_t x205 = 985U;
static volatile uint64_t x210 = 395280LLU;
static volatile uint64_t t44 = 640651273203815LLU;
static int16_t x225 = INT16_MIN;
int8_t x227 = 1;
volatile int32_t t47 = 39;
static int8_t x233 = INT8_MIN;
uint16_t x235 = 34U;
volatile int32_t x240 = -47;
static int16_t x241 = INT16_MAX;
uint64_t x243 = 4850LLU;
uint8_t x244 = UINT8_MAX;
int32_t x251 = 847532;
uint16_t x259 = 6723U;
volatile uint64_t t54 = 6936113716449084LLU;
volatile uint8_t x269 = UINT8_MAX;
int32_t x274 = INT32_MIN;
volatile int16_t x276 = -4745;
static uint64_t x277 = UINT64_MAX;
int32_t x292 = INT32_MIN;
volatile int64_t t61 = -116762489459924889LL;
uint64_t t62 = 2LLU;
uint16_t x305 = UINT16_MAX;
uint64_t x307 = 15886257624LLU;
int64_t x309 = INT64_MAX;
static uint8_t x314 = UINT8_MAX;
volatile int16_t x321 = -1;
int8_t x323 = INT8_MAX;
volatile uint16_t x329 = 7U;
static volatile int64_t t70 = 73450308250569086LL;
static volatile int32_t x343 = INT32_MAX;
uint8_t x344 = 30U;
volatile uint8_t x346 = 111U;
volatile uint32_t t74 = 8U;
static uint64_t x356 = 51768598230608905LLU;
volatile uint64_t t76 = 1LLU;
uint16_t x358 = UINT16_MAX;
uint32_t x359 = 2251U;
uint16_t x360 = UINT16_MAX;
int64_t x376 = INT64_MIN;
static int8_t x381 = -31;
int16_t x384 = INT16_MAX;
volatile int64_t t81 = -313650LL;
int32_t x389 = INT32_MAX;
int16_t x391 = -1;
volatile uint32_t t82 = 6350U;
uint64_t x394 = 19408909603402924LLU;
static int16_t x404 = -1;
volatile int8_t x406 = INT8_MAX;
int16_t x416 = INT16_MIN;
uint16_t x425 = UINT16_MAX;
uint16_t x431 = 4360U;
uint64_t x435 = 672029214LLU;
int32_t x440 = INT32_MAX;
volatile uint16_t x441 = UINT16_MAX;
volatile uint64_t x444 = UINT64_MAX;
int8_t x450 = INT8_MIN;
uint16_t x454 = 36U;
uint8_t x455 = 7U;
int8_t x456 = 0;
volatile int16_t x462 = INT16_MIN;
int8_t x464 = 44;
int32_t x465 = 604;
int8_t x466 = INT8_MIN;
int64_t x470 = -1LL;


void f0(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = 9U;
	static int32_t x8 = INT32_MIN;
	uint32_t t0 = 1136U;

	t0 = (((x5&x6)*x7)&x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = 1;
	int64_t x10 = -1LL;
	int8_t x11 = -1;
	volatile int64_t t1 = -6LL;

	t1 = (((x9&x10)*x11)&x12);

	if (t1 != -235LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = UINT8_MAX;

	t2 = (((x13&x14)*x15)&x16);

	if (t2 != 251LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 651LL;
	int32_t x22 = INT32_MAX;
	static uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 98U;
	volatile int64_t t3 = -10LL;

	t3 = (((x21&x22)*x23)&x24);

	if (t3 != 96LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MIN;
	int32_t x26 = 10454284;
	int8_t x28 = -13;

	t4 = (((x25&x26)*x27)&x28);

	if (t4 != -355401728) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = 756409238U;
	int16_t x31 = 12;
	uint16_t x32 = 1618U;
	static uint32_t t5 = 6719780U;

	t5 = (((x29&x30)*x31)&x32);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 78019990787LLU;
	int8_t x35 = INT8_MIN;
	volatile uint8_t x36 = 1U;
	static uint64_t t6 = 5144391092736LLU;

	t6 = (((x33&x34)*x35)&x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	static volatile int32_t x39 = INT32_MIN;
	int32_t x40 = 35179;

	t7 = (((x37&x38)*x39)&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x42 = 1U;
	uint32_t x43 = 136858334U;
	int16_t x44 = INT16_MAX;

	t8 = (((x41&x42)*x43)&x44);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x47 = INT8_MAX;
	static volatile int32_t x48 = INT32_MIN;

	t9 = (((x45&x46)*x47)&x48);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = 9119965533862487399LLU;
	int16_t x50 = INT16_MAX;
	static volatile uint32_t x51 = 46761U;
	uint8_t x52 = 7U;
	volatile uint64_t t10 = 25151196LLU;

	t10 = (((x49&x50)*x51)&x52);

	if (t10 != 7LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	volatile int32_t x54 = INT32_MIN;
	volatile uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 4719U;
	volatile int32_t t11 = -126;

	t11 = (((x53&x54)*x55)&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MIN;
	uint32_t x60 = 0U;
	uint32_t t12 = 75U;

	t12 = (((x57&x58)*x59)&x60);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 2;
	static uint8_t x62 = 1U;
	static int8_t x63 = INT8_MAX;
	volatile uint32_t x64 = UINT32_MAX;
	uint32_t t13 = 2997U;

	t13 = (((x61&x62)*x63)&x64);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x66 = INT64_MIN;
	volatile int16_t x68 = -1;

	t14 = (((x65&x66)*x67)&x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = 0U;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int64_t t15 = 3213711899031LL;

	t15 = (((x69&x70)*x71)&x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 48704381558LLU;
	uint64_t x74 = 8277605LLU;
	int8_t x75 = 11;
	int16_t x76 = -1;

	t16 = (((x73&x74)*x75)&x76);

	if (t16 != 186956LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = 24LL;

	t17 = (((x77&x78)*x79)&x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x81 = -1;
	static int32_t x82 = INT32_MAX;
	uint64_t x83 = 824734LLU;
	uint64_t t18 = 28394509LLU;

	t18 = (((x81&x82)*x83)&x84);

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = 35;
	uint8_t x95 = 3U;
	volatile int8_t x96 = INT8_MIN;
	int32_t t19 = 1094101;

	t19 = (((x93&x94)*x95)&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = -1;
	int8_t x102 = 2;
	static uint32_t x103 = 410816U;
	uint8_t x104 = 19U;
	volatile uint32_t t20 = 735541701U;

	t20 = (((x101&x102)*x103)&x104);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x105 = 2199468LLU;
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MIN;

	t21 = (((x105&x106)*x107)&x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = 113;
	uint16_t x111 = 4717U;
	volatile uint32_t x112 = UINT32_MAX;
	volatile uint64_t t22 = 21668618192256LLU;

	t22 = (((x109&x110)*x111)&x112);

	if (t22 != 533021LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x114 = 0;
	int8_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	uint64_t t23 = 1714302304510387489LLU;

	t23 = (((x113&x114)*x115)&x116);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x118 = 9869937LLU;
	int32_t x119 = INT32_MAX;
	int16_t x120 = 1079;
	uint64_t t24 = 15117376163LLU;

	t24 = (((x117&x118)*x119)&x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = 137174137658LL;
	static int8_t x123 = -1;
	int16_t x124 = -1;
	volatile int64_t t25 = -2LL;

	t25 = (((x121&x122)*x123)&x124);

	if (t25 != -58LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -1LL;

	t26 = (((x125&x126)*x127)&x128);

	if (t26 != 63697LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x130 = 229010792U;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 169713U;
	static volatile uint32_t t27 = 1294U;

	t27 = (((x129&x130)*x131)&x132);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = 2;
	uint32_t x134 = 7332U;
	volatile int8_t x135 = INT8_MIN;
	int16_t x136 = -1;
	uint32_t t28 = 28820633U;

	t28 = (((x133&x134)*x135)&x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	volatile uint64_t x139 = 123185796055LLU;
	int32_t x140 = INT32_MAX;
	static uint64_t t29 = 26669044LLU;

	t29 = (((x137&x138)*x139)&x140);

	if (t29 != 1981054976LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 146LLU;
	uint32_t x142 = 15125549U;
	static int32_t x144 = INT32_MAX;

	t30 = (((x141&x142)*x143)&x144);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = 15591582698264LLU;
	uint32_t x151 = UINT32_MAX;
	uint64_t t31 = 5718774782159LLU;

	t31 = (((x149&x150)*x151)&x152);

	if (t31 != 3656778662981694720LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 952645423675924128LLU;
	int32_t x156 = -1;
	static volatile uint64_t t32 = 718LLU;

	t32 = (((x153&x154)*x155)&x156);

	if (t32 != 18446744073608888320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 6U;
	int32_t x160 = INT32_MIN;
	uint64_t t33 = 32382547133LLU;

	t33 = (((x157&x158)*x159)&x160);

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x165 = 2021U;
	static int16_t x166 = -1;
	volatile uint32_t x167 = UINT32_MAX;

	t34 = (((x165&x166)*x167)&x168);

	if (t34 != 27U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = -32604154LL;
	uint16_t x174 = 1U;
	int64_t t35 = -1LL;

	t35 = (((x173&x174)*x175)&x176);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = 63U;
	int16_t x178 = INT16_MAX;
	int32_t x179 = -1;
	int32_t x180 = -1;
	int32_t t36 = 276555;

	t36 = (((x177&x178)*x179)&x180);

	if (t36 != -63) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x181 = 5U;
	static int16_t x182 = INT16_MIN;
	uint16_t x183 = 95U;
	static volatile int32_t t37 = -350335;

	t37 = (((x181&x182)*x183)&x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = 3U;
	volatile uint32_t x186 = UINT32_MAX;
	static uint64_t x187 = 62763101265276870LLU;
	volatile int32_t x188 = 74878;
	volatile uint64_t t38 = 88LLU;

	t38 = (((x185&x186)*x187)&x188);

	if (t38 != 66642LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = INT8_MAX;
	int8_t x192 = INT8_MAX;

	t39 = (((x189&x190)*x191)&x192);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = -1;
	volatile int64_t x196 = 909640555802227LL;

	t40 = (((x193&x194)*x195)&x196);

	if (t40 != 838959104LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x198 = 25057005781LL;
	int16_t x199 = 1;
	uint8_t x200 = UINT8_MAX;
	volatile int64_t t41 = -18519635LL;

	t41 = (((x197&x198)*x199)&x200);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	static uint64_t x203 = 33977LLU;
	volatile uint64_t t42 = 34226LLU;

	t42 = (((x201&x202)*x203)&x204);

	if (t42 != 9223372036850426752LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x206 = -389;
	int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t43 = INT32_MIN;

	t43 = (((x205&x206)*x207)&x208);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = INT16_MIN;
	uint8_t x211 = 26U;
	int8_t x212 = INT8_MIN;

	t44 = (((x209&x210)*x211)&x212);

	if (t44 != 10223616LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = UINT8_MAX;
	volatile uint64_t x222 = 141LLU;
	static int64_t x223 = 21LL;
	static uint16_t x224 = 15U;
	volatile uint64_t t45 = 976880241LLU;

	t45 = (((x221&x222)*x223)&x224);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x226 = INT8_MAX;
	volatile uint64_t x228 = 114999459LLU;
	uint64_t t46 = 4055260774266LLU;

	t46 = (((x225&x226)*x227)&x228);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 3U;
	int16_t x230 = 6;
	uint8_t x231 = 0U;
	static int16_t x232 = 769;

	t47 = (((x229&x230)*x231)&x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x234 = 44;
	static int32_t x236 = INT32_MAX;
	static int32_t t48 = -27528887;

	t48 = (((x233&x234)*x235)&x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = 34;
	uint32_t x239 = UINT32_MAX;
	static uint32_t t49 = 783682828U;

	t49 = (((x237&x238)*x239)&x240);

	if (t49 != 4294967248U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x242 = 23992U;
	uint64_t t50 = 3989085614801934153LLU;

	t50 = (((x241&x242)*x243)&x244);

	if (t50 != 240LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = INT64_MAX;
	uint64_t x250 = 9459LLU;
	int32_t x252 = INT32_MIN;
	uint64_t t51 = 32086101LLU;

	t51 = (((x249&x250)*x251)&x252);

	if (t51 != 6442450944LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x253 = -219;
	uint32_t x254 = 18807U;
	static int32_t x255 = INT32_MAX;
	static uint32_t x256 = 2054621U;
	uint32_t t52 = 218767007U;

	t52 = (((x253&x254)*x255)&x256);

	if (t52 != 2035929U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = 262831905U;
	static int8_t x258 = -1;
	int64_t x260 = -2LL;
	int64_t t53 = 594540LL;

	t53 = (((x257&x258)*x259)&x260);

	if (t53 != 1787338658LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1637908700715LL;
	int8_t x262 = 5;
	int16_t x263 = 10;
	uint64_t x264 = 514880047007138045LLU;

	t54 = (((x261&x262)*x263)&x264);

	if (t54 != 48LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x265 = 1816U;
	volatile int64_t x266 = 87696LL;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	int64_t t55 = -1920283038147598LL;

	t55 = (((x265&x266)*x267)&x268);

	if (t55 != 6665789210624LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = 418262369158258375LL;
	int64_t t56 = 1461835188110721624LL;

	t56 = (((x269&x270)*x271)&x272);

	if (t56 != 418262369158234240LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x275 = -1LL;
	int64_t t57 = -1917301723534575LL;

	t57 = (((x273&x274)*x275)&x276);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t58 = 23LLU;

	t58 = (((x277&x278)*x279)&x280);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MIN;
	int8_t x283 = 3;
	static int32_t x284 = -1;
	uint32_t t59 = 32966084U;

	t59 = (((x281&x282)*x283)&x284);

	if (t59 != 4294966912U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 2;
	int16_t x286 = INT16_MIN;
	volatile int8_t x287 = 0;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t60 = 950596118033144LLU;

	t60 = (((x285&x286)*x287)&x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = 30;
	int64_t x290 = 4788962LL;
	volatile uint16_t x291 = 377U;

	t61 = (((x289&x290)*x291)&x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x293 = -1;
	uint64_t x294 = 574618218LLU;
	uint64_t x295 = 169LLU;
	uint16_t x296 = 2U;

	t62 = (((x293&x294)*x295)&x296);

	if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 6468615LLU;
	int16_t x299 = 976;
	static int64_t x300 = INT64_MIN;
	uint64_t t63 = 2LLU;

	t63 = (((x297&x298)*x299)&x300);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x306 = 3856576U;
	int64_t x308 = INT64_MAX;
	uint64_t t64 = 12251LLU;

	t64 = (((x305&x306)*x307)&x308);

	if (t64 != 881496663040512LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x310 = UINT8_MAX;
	static uint16_t x311 = UINT16_MAX;
	int32_t x312 = 1;
	static int64_t t65 = -8678868212962284LL;

	t65 = (((x309&x310)*x311)&x312);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t66 = -160719;

	t66 = (((x313&x314)*x315)&x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = 10086LL;
	volatile int64_t x318 = -456696LL;
	volatile int64_t x319 = INT64_MIN;
	static volatile uint8_t x320 = UINT8_MAX;
	volatile int64_t t67 = 15LL;

	t67 = (((x317&x318)*x319)&x320);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x322 = 10878LLU;
	int32_t x324 = INT32_MIN;
	uint64_t t68 = 42237540LLU;

	t68 = (((x321&x322)*x323)&x324);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x325 = 109707179183LLU;
	static volatile int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 1U;
	static uint64_t t69 = 9948877240724LLU;

	t69 = (((x325&x326)*x327)&x328);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x330 = INT16_MIN;
	static int64_t x331 = INT64_MAX;
	static uint32_t x332 = 675237886U;

	t70 = (((x329&x330)*x331)&x332);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x333 = INT16_MIN;
	uint16_t x334 = 0U;
	int32_t x335 = 0;
	uint16_t x336 = 37U;
	volatile int32_t t71 = -1;

	t71 = (((x333&x334)*x335)&x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 107U;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	int8_t x340 = -25;
	volatile int32_t t72 = -38260;

	t72 = (((x337&x338)*x339)&x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MAX;
	uint64_t x342 = 17170452458297LLU;
	static uint64_t t73 = 9079590326752749958LLU;

	t73 = (((x341&x342)*x343)&x344);

	if (t73 != 6LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x345 = 1U;
	int32_t x347 = -1;
	static int8_t x348 = INT8_MIN;

	t74 = (((x345&x346)*x347)&x348);

	if (t74 != 4294967168U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 24U;
	volatile int32_t x350 = -1;
	int8_t x351 = INT8_MAX;
	uint16_t x352 = 0U;
	volatile int32_t t75 = 0;

	t75 = (((x349&x350)*x351)&x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;

	t76 = (((x353&x354)*x355)&x356);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = UINT32_MAX;
	uint32_t t77 = 15545047U;

	t77 = (((x357&x358)*x359)&x360);

	if (t77 != 63285U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x361 = 108U;
	int64_t x362 = INT64_MAX;
	uint8_t x363 = 1U;
	volatile int8_t x364 = -3;
	volatile int64_t t78 = -32145348814729139LL;

	t78 = (((x361&x362)*x363)&x364);

	if (t78 != 108LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 662U;
	static uint32_t x374 = 209901113U;
	uint8_t x375 = UINT8_MAX;
	int64_t t79 = 663732LL;

	t79 = (((x373&x374)*x375)&x376);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = 5LL;
	static int16_t x378 = -1;
	int16_t x379 = INT16_MAX;
	static int64_t x380 = INT64_MIN;
	int64_t t80 = 7686902564LL;

	t80 = (((x377&x378)*x379)&x380);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x382 = 6595254U;
	int64_t x383 = 408549884LL;

	t81 = (((x381&x382)*x383)&x384);

	if (t81 != 13696LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x390 = 238843U;
	static uint8_t x392 = 7U;

	t82 = (((x389&x390)*x391)&x392);

	if (t82 != 5U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = INT8_MAX;
	static int16_t x395 = 179;
	uint32_t x396 = UINT32_MAX;
	uint64_t t83 = 10627LLU;

	t83 = (((x393&x394)*x395)&x396);

	if (t83 != 7876LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x397 = 2528611741957076893LL;
	uint16_t x398 = 7U;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t84 = 1270264657369104225LL;

	t84 = (((x397&x398)*x399)&x400);

	if (t84 != 2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 27159227700LLU;
	static int16_t x403 = INT16_MIN;
	volatile uint64_t t85 = 724082669413657339LLU;

	t85 = (((x401&x402)*x403)&x404);

	if (t85 != 18445854120136278016LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x405 = -1;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t86 = -941772;

	t86 = (((x405&x406)*x407)&x408);

	if (t86 != -4161536) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = 1;
	static int16_t x411 = -1;
	static volatile int32_t x412 = 9;
	int32_t t87 = -715408284;

	t87 = (((x409&x410)*x411)&x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 0U;
	volatile int64_t x415 = 118224LL;
	static volatile int64_t t88 = -16418883115LL;

	t88 = (((x413&x414)*x415)&x416);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x426 = INT32_MIN;
	int8_t x427 = 1;
	int32_t x428 = -1;
	volatile int32_t t89 = 3;

	t89 = (((x425&x426)*x427)&x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	static uint64_t x430 = UINT64_MAX;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t90 = 265056487920LLU;

	t90 = (((x429&x430)*x431)&x432);

	if (t90 != 31744LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = 23386U;
	uint8_t x434 = 40U;
	int64_t x436 = INT64_MIN;
	uint64_t t91 = 77959130435LLU;

	t91 = (((x433&x434)*x435)&x436);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = 17426137;
	static uint64_t t92 = 1208096830276LLU;

	t92 = (((x437&x438)*x439)&x440);

	if (t92 != 2130057511LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	uint64_t t93 = 123683097863LLU;

	t93 = (((x441&x442)*x443)&x444);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x449 = INT32_MIN;
	static uint64_t x451 = UINT64_MAX;
	uint8_t x452 = 0U;
	volatile uint64_t t94 = 9239719781687LLU;

	t94 = (((x449&x450)*x451)&x452);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x453 = -1;
	volatile int32_t t95 = 632281;

	t95 = (((x453&x454)*x455)&x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = -5;
	static int64_t x458 = 116228LL;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MAX;
	static volatile int64_t t96 = 1LL;

	t96 = (((x457&x458)*x459)&x460);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x461 = UINT64_MAX;
	int16_t x463 = 1;
	static volatile uint64_t t97 = 16087LLU;

	t97 = (((x461&x462)*x463)&x464);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x467 = -8;
	int32_t x468 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = (((x465&x466)*x467)&x468);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x469 = UINT8_MAX;
	static volatile int8_t x471 = 60;
	int16_t x472 = INT16_MAX;
	volatile int64_t t99 = -189876770547LL;

	t99 = (((x469&x470)*x471)&x472);

	if (t99 != 15300LL) { NG(); } else { ; }
	
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

