#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 237U;
static volatile int32_t t0 = -14;
int64_t x18 = INT64_MAX;
int32_t x21 = 1643328;
int16_t x23 = -1;
uint32_t x24 = 297953507U;
int8_t x32 = INT8_MAX;
int64_t t5 = 1LL;
uint64_t t6 = 14809783304440LLU;
int64_t t7 = 472LL;
int8_t x54 = -25;
int8_t x62 = INT8_MIN;
int64_t x78 = 3060632411LL;
static int16_t x80 = -1;
volatile int64_t t13 = 4195882094694258LL;
int64_t x83 = INT64_MIN;
int16_t x84 = 2;
static int32_t x85 = -1;
static int8_t x96 = -1;
int8_t x108 = -1;
int64_t x115 = INT64_MIN;
uint32_t x116 = UINT32_MAX;
int64_t x122 = INT64_MIN;
int16_t x124 = -1;
int64_t x128 = INT64_MIN;
volatile uint8_t x129 = 3U;
int32_t x132 = INT32_MIN;
volatile int64_t x133 = -6357518011691LL;
volatile uint64_t x140 = 198936603LLU;
int8_t x142 = -1;
int64_t t29 = -37812412195800LL;
int32_t x146 = INT32_MIN;
volatile uint64_t x147 = 12985289LLU;
int64_t x148 = INT64_MAX;
uint64_t t30 = 13LLU;
uint64_t x150 = 35911713738947LLU;
int32_t x153 = INT32_MIN;
uint64_t x155 = UINT64_MAX;
int8_t x159 = INT8_MIN;
uint64_t x167 = 15236LLU;
uint64_t x169 = 8282797545540564LLU;
int32_t x179 = INT32_MIN;
int8_t x182 = 2;
volatile int64_t t37 = 80652LL;
uint32_t x185 = 2938U;
uint32_t t38 = 25994284U;
int8_t x189 = -12;
static volatile int32_t x190 = -1;
int8_t x206 = -14;
volatile int64_t t41 = INT64_MAX;
int16_t x212 = INT16_MAX;
int64_t t45 = 0LL;
volatile int64_t t48 = 3LL;
uint64_t x237 = UINT64_MAX;
static volatile int32_t x254 = -5;
static uint16_t x268 = UINT16_MAX;
int32_t x275 = -1;
uint32_t t57 = 59592U;
int32_t x297 = INT32_MIN;
static int32_t x301 = INT32_MIN;
uint32_t t61 = 1023660358U;
uint16_t x314 = UINT16_MAX;
volatile uint32_t x322 = 1054367306U;
int16_t x329 = 0;
int32_t x332 = -4;
volatile int32_t x338 = 1564;
volatile int32_t x340 = 6265;
volatile int16_t x342 = INT16_MAX;
static int16_t x343 = -106;
int16_t x344 = INT16_MIN;
volatile int64_t t71 = 31040LL;
int64_t x346 = INT64_MIN;
volatile int64_t t72 = 67946411162126769LL;
static int64_t x350 = -1LL;
static volatile int32_t x351 = INT32_MIN;
int16_t x364 = INT16_MIN;
volatile int8_t x368 = INT8_MAX;
static int64_t x370 = -1060337014594014LL;
static volatile uint8_t x376 = UINT8_MAX;
int16_t x377 = INT16_MAX;
static uint32_t x378 = UINT32_MAX;
int64_t x379 = INT64_MAX;
volatile uint32_t x381 = 2769U;
int8_t x384 = INT8_MIN;
volatile int32_t x388 = INT32_MAX;
uint64_t x389 = 155426726170339646LLU;
int64_t t84 = 36LL;
static uint8_t x397 = 1U;
static uint16_t x404 = UINT16_MAX;
volatile uint32_t t86 = 150685U;
uint8_t x405 = 0U;
int8_t x406 = -1;
uint64_t x413 = UINT64_MAX;
volatile int16_t x416 = 8;
volatile uint32_t x421 = UINT32_MAX;
int32_t x426 = INT32_MIN;
int8_t x432 = INT8_MIN;
int16_t x436 = -1;
int32_t x438 = INT32_MAX;
int8_t x445 = INT8_MIN;
int16_t x448 = 883;
volatile int8_t x458 = 17;
int8_t x460 = INT8_MIN;
static int16_t x464 = -29;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	volatile int16_t x3 = -3968;
	int16_t x4 = INT16_MIN;

	t0 = (((x1&x2)/x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	static int16_t x6 = INT16_MAX;
	int32_t x7 = -1;
	uint8_t x8 = 22U;
	volatile int32_t t1 = 18521;

	t1 = (((x5&x6)/x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	uint8_t x10 = 12U;
	int32_t x11 = INT32_MIN;
	static uint16_t x12 = 6972U;
	int32_t t2 = 9491;

	t2 = (((x9&x10)/x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = INT16_MAX;
	uint32_t x19 = 11807U;
	static uint8_t x20 = 53U;
	volatile int64_t t3 = 4LL;

	t3 = (((x17&x18)/x19)*x20);

	if (t3 != 106LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 1U;
	uint32_t t4 = 641U;

	t4 = (((x21&x22)/x23)*x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	int32_t x30 = -1;
	int64_t x31 = -1LL;

	t5 = (((x29&x30)/x31)*x32);

	if (t5 != -272730423169LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	volatile int16_t x35 = 7;
	uint64_t x36 = 4269337496612626LLU;

	t6 = (((x33&x34)/x35)*x36);

	if (t6 != 1538024747934150690LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x38 = 2018820U;
	int64_t x39 = 42695318LL;
	static volatile int32_t x40 = INT32_MAX;

	t7 = (((x37&x38)/x39)*x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x45 = 25U;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MIN;
	uint64_t x48 = 134011196823LLU;
	volatile uint64_t t8 = 69LLU;

	t8 = (((x45&x46)/x47)*x48);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x55 = 513117U;
	int64_t x56 = -459172330918LL;
	uint64_t t9 = 194724LLU;

	t9 = (((x53&x54)/x55)*x56);

	if (t9 != 5958953076880844648LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x61 = 11782581LLU;
	static int64_t x63 = INT64_MAX;
	uint32_t x64 = 477143U;
	static volatile uint64_t t10 = 768LLU;

	t10 = (((x61&x62)/x63)*x64);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 611076609LLU;
	uint8_t x66 = UINT8_MAX;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	uint64_t t11 = 2109967162LLU;

	t11 = (((x65&x66)/x67)*x68);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = -1;
	int8_t x71 = INT8_MAX;
	uint64_t x72 = 32118988LLU;
	volatile uint64_t t12 = 49LLU;

	t12 = (((x69&x70)/x71)*x72);

	if (t12 != 1086220492336320LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 323665U;
	int64_t x79 = -23121704LL;

	t13 = (((x77&x78)/x79)*x80);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MIN;
	static uint8_t x82 = UINT8_MAX;
	static int64_t t14 = 2882668012158844LL;

	t14 = (((x81&x82)/x83)*x84);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x86 = 16LLU;
	int32_t x87 = 948;
	int64_t x88 = INT64_MAX;
	static volatile uint64_t t15 = 225LLU;

	t15 = (((x85&x86)/x87)*x88);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = -3039959;
	int32_t x91 = INT32_MIN;
	int64_t x92 = 2462802LL;
	int64_t t16 = -1LL;

	t16 = (((x89&x90)/x91)*x92);

	if (t16 != 2462802LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = -8008;
	volatile int32_t t17 = -1;

	t17 = (((x93&x94)/x95)*x96);

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 335589352982676LL;
	static int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = 112907LLU;
	int64_t x100 = INT64_MIN;
	uint64_t t18 = 6301571754557704490LLU;

	t18 = (((x97&x98)/x99)*x100);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	static volatile int64_t t19 = 4657548912LL;

	t19 = (((x101&x102)/x103)*x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	static int64_t t20 = 117387485927632396LL;

	t20 = (((x105&x106)/x107)*x108);

	if (t20 != -281474976710656LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x110 = UINT8_MAX;
	static int64_t x111 = INT64_MIN;
	volatile uint64_t x112 = 1316572664LLU;
	static volatile uint64_t t21 = 18LLU;

	t21 = (((x109&x110)/x111)*x112);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -143;
	int64_t x114 = -262383734LL;
	volatile int64_t t22 = 32847892LL;

	t22 = (((x113&x114)/x115)*x116);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = 504U;
	int8_t x118 = -47;
	volatile int64_t x119 = -1LL;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t23 = -406125LL;

	t23 = (((x117&x118)/x119)*x120);

	if (t23 != -118320LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x121 = 1294310308554503LLU;
	static int16_t x123 = INT16_MIN;
	uint64_t t24 = 10438LLU;

	t24 = (((x121&x122)/x123)*x124);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = 1;
	static volatile int16_t x126 = -392;
	static int16_t x127 = INT16_MIN;
	volatile int64_t t25 = 116398LL;

	t25 = (((x125&x126)/x127)*x128);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x130 = 17543859627482097LL;
	uint8_t x131 = 9U;
	volatile int64_t t26 = 693967089687LL;

	t26 = (((x129&x130)/x131)*x132);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x134 = 18U;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MAX;
	int64_t t27 = 340LL;

	t27 = (((x133&x134)/x135)*x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = INT16_MAX;
	volatile int64_t x138 = 2381625428533LL;
	volatile int64_t x139 = INT64_MAX;
	volatile uint64_t t28 = 2544LLU;

	t28 = (((x137&x138)/x139)*x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x141 = UINT32_MAX;
	volatile int32_t x143 = -1;
	int64_t x144 = -1LL;

	t29 = (((x141&x142)/x143)*x144);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;

	t30 = (((x145&x146)/x147)*x148);

	if (t30 != 18446742653121679328LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x149 = INT32_MIN;
	static int32_t x151 = -5213740;
	int8_t x152 = INT8_MIN;
	uint64_t t31 = 1014LLU;

	t31 = (((x149&x150)/x151)*x152);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	static int8_t x156 = INT8_MIN;
	uint64_t t32 = 238769321342323LLU;

	t32 = (((x153&x154)/x155)*x156);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	volatile uint32_t x160 = 488564U;
	volatile uint32_t t33 = 166156681U;

	t33 = (((x157&x158)/x159)*x160);

	if (t33 != 488564U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 2897135LLU;
	int32_t x166 = INT32_MIN;
	uint8_t x168 = 4U;
	static volatile uint64_t t34 = 7629613LLU;

	t34 = (((x165&x166)/x167)*x168);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = -460;
	int64_t x171 = 85499086021069LL;
	uint16_t x172 = 114U;
	volatile uint64_t t35 = 1168132778LLU;

	t35 = (((x169&x170)/x171)*x172);

	if (t35 != 10944LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MAX;
	static int64_t x178 = -26807951LL;
	int16_t x180 = -1;
	int64_t t36 = 528247882015428LL;

	t36 = (((x177&x178)/x179)*x180);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = -1;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;

	t37 = (((x181&x182)/x183)*x184);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MIN;
	volatile uint32_t x188 = 1U;

	t38 = (((x185&x186)/x187)*x188);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x191 = INT8_MIN;
	uint32_t x192 = UINT32_MAX;
	static uint32_t t39 = 520402U;

	t39 = (((x189&x190)/x191)*x192);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = -1;
	uint32_t x198 = 8291034U;
	int32_t x199 = 15593562;
	volatile int16_t x200 = -2782;
	uint32_t t40 = 6174U;

	t40 = (((x197&x198)/x199)*x200);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	volatile int64_t x208 = INT64_MAX;

	t41 = (((x205&x206)/x207)*x208);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x209 = -1LL;
	static volatile int32_t x210 = INT32_MIN;
	static int16_t x211 = -1;
	volatile int64_t t42 = 8819170811826748LL;

	t42 = (((x209&x210)/x211)*x212);

	if (t42 != 70366596694016LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x213 = 8287LLU;
	volatile uint64_t x214 = UINT64_MAX;
	int32_t x215 = -1;
	int8_t x216 = INT8_MIN;
	static uint64_t t43 = 1467140LLU;

	t43 = (((x213&x214)/x215)*x216);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = INT32_MIN;
	static uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MAX;
	static int16_t x220 = 3;
	int32_t t44 = -8;

	t44 = (((x217&x218)/x219)*x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	int64_t x223 = -1377LL;
	static uint16_t x224 = UINT16_MAX;

	t45 = (((x221&x222)/x223)*x224);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x225 = INT64_MIN;
	static uint64_t x226 = 137375743907592LLU;
	int64_t x227 = -1396350637564224LL;
	volatile uint8_t x228 = UINT8_MAX;
	static volatile uint64_t t46 = 283361949420431781LLU;

	t46 = (((x225&x226)/x227)*x228);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x229 = 2121250;
	volatile uint16_t x230 = 136U;
	uint64_t x231 = 116LLU;
	volatile int64_t x232 = INT64_MIN;
	static volatile uint64_t t47 = 29221133756478134LLU;

	t47 = (((x229&x230)/x231)*x232);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int64_t x235 = 106204734447095LL;
	uint8_t x236 = 0U;

	t48 = (((x233&x234)/x235)*x236);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MIN;
	static int32_t x240 = -1;
	uint64_t t49 = 160784270140086LLU;

	t49 = (((x237&x238)/x239)*x240);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = 2;
	int8_t x246 = -1;
	uint16_t x247 = 119U;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t50 = -298886;

	t50 = (((x245&x246)/x247)*x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x253 = -1LL;
	static volatile int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MAX;
	int64_t t51 = -3669665205694LL;

	t51 = (((x253&x254)/x255)*x256);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x265 = 4301U;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = -1;
	volatile uint64_t t52 = 19LLU;

	t52 = (((x265&x266)/x267)*x268);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = -1LL;
	static int8_t x270 = INT8_MAX;
	volatile int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	int64_t t53 = -2293LL;

	t53 = (((x269&x270)/x271)*x272);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = 0;
	int32_t x276 = INT32_MIN;
	int64_t t54 = -170LL;

	t54 = (((x273&x274)/x275)*x276);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = 60;
	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MIN;
	static int64_t t55 = -72990541594046998LL;

	t55 = (((x277&x278)/x279)*x280);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x281 = 10818;
	volatile int8_t x282 = INT8_MIN;
	static int32_t x283 = INT32_MAX;
	static uint8_t x284 = 3U;
	int32_t t56 = 32176;

	t56 = (((x281&x282)/x283)*x284);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = 128;
	static int32_t x286 = -1;
	uint8_t x287 = 3U;
	uint32_t x288 = UINT32_MAX;

	t57 = (((x285&x286)/x287)*x288);

	if (t57 != 4294967254U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int8_t x290 = 3;
	int64_t x291 = INT64_MIN;
	static uint16_t x292 = 0U;
	volatile int64_t t58 = 124LL;

	t58 = (((x289&x290)/x291)*x292);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x293 = 1LLU;
	volatile int16_t x294 = -11;
	static int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;
	uint64_t t59 = 3710852434026693578LLU;

	t59 = (((x293&x294)/x295)*x296);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x298 = 95772U;
	uint32_t x299 = UINT32_MAX;
	volatile int16_t x300 = 92;
	uint32_t t60 = 49056542U;

	t60 = (((x297&x298)/x299)*x300);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x302 = 10843417U;
	static uint8_t x303 = 7U;
	int16_t x304 = 7;

	t61 = (((x301&x302)/x303)*x304);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = 99U;
	int8_t x306 = INT8_MIN;
	volatile int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	static int32_t t62 = 813667;

	t62 = (((x305&x306)/x307)*x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = INT32_MAX;
	int32_t x310 = -957;
	uint8_t x311 = 6U;
	int8_t x312 = 6;
	volatile int32_t t63 = -9;

	t63 = (((x309&x310)/x311)*x312);

	if (t63 != 2147482686) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = -351;
	static uint64_t x315 = 50558886606323045LLU;
	volatile uint64_t x316 = 1392123256890LLU;
	volatile uint64_t t64 = 5336542396990204313LLU;

	t64 = (((x313&x314)/x315)*x316);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x317 = -27;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = 897U;
	volatile int32_t x320 = 1;
	int32_t t65 = -761855216;

	t65 = (((x317&x318)/x319)*x320);

	if (t65 != -2394073) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = 5378497966452975LL;
	int64_t x323 = -1LL;
	int32_t x324 = INT32_MIN;
	int64_t t66 = -29921466075060LL;

	t66 = (((x321&x322)/x323)*x324);

	if (t66 != 1317311846012682240LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int64_t x326 = -1LL;
	uint64_t x327 = UINT64_MAX;
	static uint16_t x328 = 7543U;
	uint64_t t67 = 258741LLU;

	t67 = (((x325&x326)/x327)*x328);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x330 = 2U;
	uint16_t x331 = 127U;
	static volatile int32_t t68 = -502;

	t68 = (((x329&x330)/x331)*x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -1;
	static int8_t x334 = INT8_MAX;
	uint64_t x335 = UINT64_MAX;
	static int32_t x336 = -1;
	volatile uint64_t t69 = 1197LLU;

	t69 = (((x333&x334)/x335)*x336);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MAX;
	static int64_t x339 = -62142LL;
	static int64_t t70 = 10895LL;

	t70 = (((x337&x338)/x339)*x340);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = 89LL;

	t71 = (((x341&x342)/x343)*x344);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x345 = INT8_MAX;
	uint8_t x347 = 1U;
	static int16_t x348 = -1;

	t72 = (((x345&x346)/x347)*x348);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = -1;
	int64_t x352 = 1876853321500337LL;
	volatile int64_t t73 = -168623804396755929LL;

	t73 = (((x349&x350)/x351)*x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x353 = 282;
	int32_t x354 = INT32_MIN;
	int8_t x355 = -18;
	int16_t x356 = 936;
	volatile int32_t t74 = -476732231;

	t74 = (((x353&x354)/x355)*x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x357 = INT64_MAX;
	static uint8_t x358 = UINT8_MAX;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t75 = -5765319378113110LL;

	t75 = (((x357&x358)/x359)*x360);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x361 = 5613U;
	int8_t x362 = 12;
	int8_t x363 = INT8_MIN;
	uint32_t t76 = 7506U;

	t76 = (((x361&x362)/x363)*x364);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 19706699LLU;
	uint16_t x366 = 115U;
	static uint32_t x367 = 653449U;
	uint64_t t77 = 7869150177235LLU;

	t77 = (((x365&x366)/x367)*x368);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	int64_t t78 = 3LL;

	t78 = (((x369&x370)/x371)*x372);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 35752U;
	static uint64_t x375 = 37682646847LLU;
	volatile uint64_t t79 = 28311247750348023LLU;

	t79 = (((x373&x374)/x375)*x376);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x380 = -56852;
	volatile int64_t t80 = 22LL;

	t80 = (((x377&x378)/x379)*x380);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x382 = 96U;
	int64_t x383 = -53578045011LL;
	static int64_t t81 = -2477033302191812LL;

	t81 = (((x381&x382)/x383)*x384);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x385 = 4885U;
	volatile uint64_t x386 = UINT64_MAX;
	uint16_t x387 = 3U;
	uint64_t t82 = 141396395098LLU;

	t82 = (((x385&x386)/x387)*x388);

	if (t82 != 3496103377316LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x390 = 106516954LLU;
	int8_t x391 = -26;
	static volatile int8_t x392 = INT8_MIN;
	volatile uint64_t t83 = 6LLU;

	t83 = (((x389&x390)/x391)*x392);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = -79;
	static int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MAX;

	t84 = (((x393&x394)/x395)*x396);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	volatile int16_t x400 = INT16_MAX;
	int64_t t85 = -853363LL;

	t85 = (((x397&x398)/x399)*x400);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x401 = -52;
	int16_t x402 = -1;
	static uint32_t x403 = 25657947U;

	t86 = (((x401&x402)/x403)*x404);

	if (t86 != 10944345U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x407 = UINT32_MAX;
	static uint64_t x408 = 908200748993LLU;
	volatile uint64_t t87 = 440793LLU;

	t87 = (((x405&x406)/x407)*x408);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 88157U;
	uint32_t x410 = 2043068U;
	static int64_t x411 = 27173LL;
	int16_t x412 = INT16_MAX;
	volatile int64_t t88 = -29921964219782LL;

	t88 = (((x409&x410)/x411)*x412);

	if (t88 != 65534LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x414 = 50;
	uint8_t x415 = 17U;
	static uint64_t t89 = 319933793830630110LLU;

	t89 = (((x413&x414)/x415)*x416);

	if (t89 != 16LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 7610U;
	static int64_t x418 = INT64_MAX;
	static int32_t x419 = -31706;
	int32_t x420 = INT32_MIN;
	int64_t t90 = 94LL;

	t90 = (((x417&x418)/x419)*x420);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x422 = -1;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	int64_t t91 = 215028672668661LL;

	t91 = (((x421&x422)/x423)*x424);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = INT16_MAX;
	uint8_t x427 = UINT8_MAX;
	uint64_t x428 = 7952593842205517LLU;
	uint64_t t92 = 31LLU;

	t92 = (((x425&x426)/x427)*x428);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x429 = INT32_MIN;
	uint32_t x430 = 153U;
	int8_t x431 = 7;
	volatile uint32_t t93 = 956601U;

	t93 = (((x429&x430)/x431)*x432);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = UINT32_MAX;
	static int32_t x434 = -8;
	static int8_t x435 = INT8_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x433&x434)/x435)*x436);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = 190782446874081619LL;
	static uint16_t x439 = 539U;
	uint8_t x440 = 3U;
	int64_t t95 = -853344040859887983LL;

	t95 = (((x437&x438)/x439)*x440);

	if (t95 != 9647004LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x446 = INT16_MAX;
	volatile uint8_t x447 = 2U;
	static volatile int32_t t96 = -421;

	t96 = (((x445&x446)/x447)*x448);

	if (t96 != 14410560) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x449 = INT16_MIN;
	int32_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	int64_t x452 = INT64_MIN;
	int64_t t97 = 236LL;

	t97 = (((x449&x450)/x451)*x452);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = 5903462253862LL;
	volatile int64_t x459 = INT64_MIN;
	int64_t t98 = 9363639669799741LL;

	t98 = (((x457&x458)/x459)*x460);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = INT64_MIN;
	uint16_t x462 = UINT16_MAX;
	volatile int64_t x463 = -2025276LL;
	volatile int64_t t99 = 82384726LL;

	t99 = (((x461&x462)/x463)*x464);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

