#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 5916U;
uint16_t x4 = UINT16_MAX;
int64_t t2 = 33912LL;
static volatile int64_t x17 = INT64_MAX;
volatile uint64_t t4 = 511200619819LLU;
uint64_t x21 = UINT64_MAX;
static uint8_t x26 = UINT8_MAX;
int32_t x27 = INT32_MIN;
static uint64_t x34 = 59432289057LLU;
int64_t x38 = 14941LL;
static int64_t t9 = -44750772181425LL;
static int32_t t10 = 240646;
int16_t x47 = -35;
static uint16_t x48 = 1500U;
int32_t t11 = 923;
volatile uint64_t x55 = 2307154433903LLU;
volatile int8_t x59 = 13;
uint64_t x60 = 230620289863709LLU;
static uint64_t t14 = 22841020712847LLU;
uint16_t x75 = 1461U;
int8_t x76 = -1;
int64_t t17 = -2163946886633631045LL;
volatile uint64_t x77 = 617780886033584210LLU;
uint64_t t19 = 14260269516437LLU;
int16_t x87 = INT16_MIN;
volatile uint64_t t20 = 60LLU;
static int8_t x100 = INT8_MIN;
uint32_t x104 = UINT32_MAX;
int8_t x106 = INT8_MIN;
volatile uint16_t x111 = 6542U;
static int64_t x112 = 23798411090889265LL;
static uint64_t x123 = UINT64_MAX;
static uint8_t x124 = 6U;
uint16_t x130 = 12008U;
int8_t x131 = -6;
int32_t x132 = INT32_MIN;
static volatile int16_t x135 = INT16_MIN;
uint16_t x137 = 974U;
int16_t x140 = 3256;
int64_t x144 = -170LL;
volatile int32_t x145 = INT32_MIN;
uint8_t x146 = 94U;
static int64_t x150 = -2057266566LL;
static int64_t x153 = -1LL;
static uint64_t x155 = 384LLU;
static int16_t x156 = -17;
volatile int8_t x163 = INT8_MAX;
volatile int16_t x168 = -3346;
int32_t x174 = INT32_MIN;
uint16_t x176 = UINT16_MAX;
int8_t x178 = 15;
static int8_t x185 = INT8_MIN;
volatile int32_t t42 = -314613;
int64_t x191 = INT64_MIN;
int16_t x195 = INT16_MIN;
volatile int64_t t47 = 8033586LL;
int64_t x209 = INT64_MIN;
int8_t x215 = 3;
volatile int32_t t49 = -525;
static volatile int8_t x221 = INT8_MAX;
uint32_t x229 = 506587U;
uint8_t x234 = UINT8_MAX;
int64_t x235 = INT64_MIN;
uint32_t x237 = 452427U;
volatile int64_t x238 = INT64_MIN;
uint16_t x243 = 50U;
int64_t x244 = -1LL;
int32_t x246 = -15;
int16_t x263 = 5;
int32_t x264 = 64194479;
int64_t x272 = -380676172410695410LL;
volatile uint16_t x278 = UINT16_MAX;
static int16_t x284 = INT16_MAX;
int64_t t65 = -241613405LL;
int64_t x294 = INT64_MAX;
volatile int32_t t69 = 37;
int32_t x301 = -211613;
int32_t x302 = -135643;
int32_t x304 = 3004412;
int32_t x305 = INT32_MAX;
volatile uint16_t x306 = 12U;
int8_t x307 = -1;
static int16_t x309 = INT16_MIN;
static uint32_t x310 = 216456U;
volatile uint32_t x313 = 0U;
static int64_t x316 = INT64_MAX;
int64_t t73 = 876852749244676LL;
volatile uint64_t t74 = 10969012615873LLU;
static int64_t x321 = -1LL;
uint32_t x328 = UINT32_MAX;
volatile uint32_t t76 = 106534554U;
int16_t x332 = INT16_MIN;
volatile uint64_t t77 = 4352911851044LLU;
int64_t x337 = INT64_MIN;
int32_t x338 = -217034429;
int32_t x342 = INT32_MAX;
static uint32_t x344 = 1U;
static int64_t x356 = -33892808399229LL;
int64_t t83 = -90520578946152064LL;
int16_t x367 = -1;
uint64_t x373 = UINT64_MAX;
static int8_t x375 = -42;
volatile uint64_t t87 = 577LLU;
uint64_t t88 = 284985004908LLU;
static int16_t x387 = INT16_MIN;
int16_t x395 = -1;
int16_t x396 = -1;
int32_t x400 = INT32_MAX;
int32_t t92 = 5;
static uint16_t x407 = 562U;
static int8_t x410 = INT8_MIN;
uint32_t t96 = 166U;
static int8_t x424 = INT8_MIN;
volatile uint32_t t98 = 38975U;


void f0(void) {
	uint16_t x1 = 2U;
	int8_t x2 = 4;
	volatile int32_t t0 = 39154632;

	t0 = (x1/(x2-(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x6 = -54;
	uint32_t x7 = UINT32_MAX;
	static uint32_t x8 = UINT32_MAX;
	static uint64_t t1 = 16317307469773644LLU;

	t1 = (x5/(x6-(x7/x8)));

	if (t1 != 4294967351LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = 18840267U;
	static int32_t x11 = -965;
	int8_t x12 = INT8_MAX;

	t2 = (x9/(x10-(x11/x12)));

	if (t2 != -489556151723LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -14971;
	int8_t x14 = -1;
	static uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = INT32_MIN;
	volatile uint32_t t3 = 1125143171U;

	t3 = (x13/(x14-(x15/x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x18 = UINT8_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile uint16_t x20 = 225U;

	t4 = (x17/(x18-(x19/x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int16_t x23 = INT16_MAX;
	volatile int64_t x24 = 33027393LL;
	uint64_t t5 = 5914LLU;

	t5 = (x21/(x22-(x23/x24)));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 0U;

	t6 = (x25/(x26-(x27/x28)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 57U;
	uint8_t x30 = 13U;
	uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 2657304LL;

	t7 = (x29/(x30-(x31/x32)));

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 391038654917961319LLU;

	t8 = (x33/(x34-(x35/x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = 7;

	t9 = (x37/(x38-(x39/x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 121U;
	int16_t x42 = INT16_MIN;
	int8_t x43 = -1;
	volatile int8_t x44 = -5;

	t10 = (x41/(x42-(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 14786U;
	volatile int8_t x46 = INT8_MAX;

	t11 = (x45/(x46-(x47/x48)));

	if (t11 != 116) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = 58165622771204525LLU;
	int64_t x51 = 110745034343273764LL;
	int64_t x52 = INT64_MAX;
	static uint64_t t12 = 24428998740LLU;

	t12 = (x49/(x50-(x51/x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -4318819135615768LL;
	static int32_t x54 = -353;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t13 = 126458788LLU;

	t13 = (x53/(x54-(x55/x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -82209520741556LL;
	int8_t x58 = 13;

	t14 = (x57/(x58-(x59/x60)));

	if (t14 != 1418973989552985389LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = -125197;
	uint64_t x67 = 655613508LLU;
	int32_t x68 = INT32_MIN;
	uint64_t t15 = 2713226LLU;

	t15 = (x65/(x66-(x67/x68)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -4324;
	volatile uint64_t x70 = 1468LLU;
	volatile uint16_t x71 = UINT16_MAX;
	static int8_t x72 = INT8_MIN;
	uint64_t t16 = 2295LLU;

	t16 = (x69/(x70-(x71/x72)));

	if (t16 != 9321245110515183LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -22;
	int64_t x74 = -23958LL;

	t17 = (x73/(x74-(x75/x76)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	volatile int32_t x80 = INT32_MIN;
	static volatile uint64_t t18 = 496273LLU;

	t18 = (x77/(x78-(x79/x80)));

	if (t18 != 143838325LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = 3;
	int8_t x84 = INT8_MIN;

	t19 = (x81/(x82-(x83/x84)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = 552372LLU;
	static int8_t x88 = -41;

	t20 = (x85/(x86-(x87/x88)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 2282148LL;
	volatile int64_t x90 = -1LL;
	uint16_t x91 = 3U;
	int64_t x92 = -1LL;
	int64_t t21 = 10611886685314356LL;

	t21 = (x89/(x90-(x91/x92)));

	if (t21 != 1141074LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 20U;
	int32_t x94 = 1069462103;
	volatile int32_t x95 = -1202;
	volatile uint8_t x96 = 1U;
	static volatile uint32_t t22 = 17043U;

	t22 = (x93/(x94-(x95/x96)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -2814;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 3U;
	uint32_t t23 = 17741842U;

	t23 = (x97/(x98-(x99/x100)));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 98U;
	int64_t x102 = INT64_MIN;
	static int16_t x103 = INT16_MIN;
	static int64_t t24 = -202924492548901068LL;

	t24 = (x101/(x102-(x103/x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	static int32_t x108 = INT32_MAX;
	int64_t t25 = 1746040713866018306LL;

	t25 = (x105/(x106-(x107/x108)));

	if (t25 != -2147483711LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x109 = 8U;
	volatile int64_t x110 = INT64_MIN;
	static int64_t t26 = 525844405LL;

	t26 = (x109/(x110-(x111/x112)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	static volatile int16_t x114 = INT16_MIN;
	static uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MAX;
	volatile int64_t t27 = 7086094487LL;

	t27 = (x113/(x114-(x115/x116)));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -1;
	int64_t x118 = -1LL;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -21;
	int64_t t28 = 5310LL;

	t28 = (x117/(x118-(x119/x120)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	static int16_t x122 = INT16_MIN;
	static volatile uint64_t t29 = 476551675499900193LLU;

	t29 = (x121/(x122-(x123/x124)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = INT8_MIN;
	int8_t x127 = 6;
	static int32_t x128 = -1;
	static volatile int32_t t30 = 114243565;

	t30 = (x125/(x126-(x127/x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 150U;
	uint32_t t31 = 6817U;

	t31 = (x129/(x130-(x131/x132)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int16_t x136 = 743;
	volatile int64_t t32 = 4464LL;

	t32 = (x133/(x134-(x135/x136)));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x138 = 1;
	int32_t x139 = INT32_MAX;
	int32_t t33 = 1;

	t33 = (x137/(x138-(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = -23392;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	uint64_t t34 = 1604278683806LLU;

	t34 = (x141/(x142-(x143/x144)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x147 = 3165U;
	int8_t x148 = INT8_MAX;
	uint32_t t35 = 25720299U;

	t35 = (x145/(x146-(x147/x148)));

	if (t35 != 30678337U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 73U;
	static uint32_t x151 = UINT32_MAX;
	volatile int32_t x152 = -45803;
	volatile int64_t t36 = -33354432819855893LL;

	t36 = (x149/(x150-(x151/x152)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x154 = 3068U;
	static uint64_t t37 = 22371255LLU;

	t37 = (x153/(x154-(x155/x156)));

	if (t37 != 6012628446450310LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	volatile int8_t x164 = -1;
	volatile int32_t t38 = 599295802;

	t38 = (x161/(x162-(x163/x164)));

	if (t38 != -260) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 612U;
	volatile int16_t x167 = 182;
	int32_t t39 = 26962;

	t39 = (x165/(x166-(x167/x168)));

	if (t39 != -53) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	static uint16_t x175 = 11723U;
	int32_t t40 = 2008;

	t40 = (x173/(x174-(x175/x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = -1;
	static volatile uint32_t x179 = UINT32_MAX;
	int8_t x180 = -5;
	uint32_t t41 = 284633695U;

	t41 = (x177/(x178-(x179/x180)));

	if (t41 != 306783378U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x186 = INT32_MIN;
	volatile int32_t x187 = -12052;
	static uint16_t x188 = UINT16_MAX;

	t42 = (x185/(x186-(x187/x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -9;
	static int64_t x190 = INT64_MIN;
	volatile uint16_t x192 = 1721U;
	volatile int64_t t43 = 1895792216799LL;

	t43 = (x189/(x190-(x191/x192)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x193 = 3U;
	int8_t x194 = INT8_MIN;
	volatile int16_t x196 = INT16_MIN;
	static uint32_t t44 = 0U;

	t44 = (x193/(x194-(x195/x196)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = 30;
	volatile uint64_t x199 = UINT64_MAX;
	int8_t x200 = 16;
	uint64_t t45 = 425133LLU;

	t45 = (x197/(x198-(x199/x200)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = -1;
	volatile uint32_t x202 = 821U;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t46 = 12715964U;

	t46 = (x201/(x202-(x203/x204)));

	if (t46 != 5225021U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 4784676U;
	int8_t x206 = INT8_MIN;
	volatile int8_t x207 = 24;
	static int64_t x208 = -15351634832437980LL;

	t47 = (x205/(x206-(x207/x208)));

	if (t47 != -37380LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = 108;
	static volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = -3;
	int64_t t48 = -55700803311879LL;

	t48 = (x209/(x210-(x211/x212)));

	if (t48 != -47789492418936662LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MAX;
	volatile uint8_t x216 = UINT8_MAX;

	t49 = (x213/(x214-(x215/x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x217 = 22157694534259432LLU;
	static uint64_t x218 = 18652935LLU;
	uint32_t x219 = UINT32_MAX;
	static uint8_t x220 = 101U;
	volatile uint64_t t50 = 54884546LLU;

	t50 = (x217/(x218-(x219/x220)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x222 = -1;
	volatile int64_t x223 = INT64_MAX;
	int64_t x224 = -1713325040395LL;
	static volatile int64_t t51 = -186226080122LL;

	t51 = (x221/(x222-(x223/x224)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	static uint16_t x226 = 2922U;
	int64_t x227 = INT64_MIN;
	volatile int16_t x228 = INT16_MAX;
	volatile int64_t t52 = -22432LL;

	t52 = (x225/(x226-(x227/x228)));

	if (t52 != -32766LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x230 = 15733019U;
	uint32_t x231 = UINT32_MAX;
	int32_t x232 = INT32_MIN;
	uint32_t t53 = 9570172U;

	t53 = (x229/(x230-(x231/x232)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 14U;
	static volatile uint16_t x236 = UINT16_MAX;
	volatile int64_t t54 = 2389045541LL;

	t54 = (x233/(x234-(x235/x236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x239 = -1;
	int8_t x240 = 1;
	int64_t t55 = -1510552LL;

	t55 = (x237/(x238-(x239/x240)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MAX;
	static volatile uint64_t x242 = 48550510434714717LLU;
	volatile uint64_t t56 = 1841745740207817LLU;

	t56 = (x241/(x242-(x243/x244)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = 0;
	int8_t x247 = 1;
	int32_t x248 = -1;
	static int32_t t57 = -191520;

	t57 = (x245/(x246-(x247/x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = 139666LL;
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = -1;
	int16_t x256 = 4;
	int64_t t58 = -59066367304687888LL;

	t58 = (x253/(x254-(x255/x256)));

	if (t58 != -4LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MAX;
	int16_t x258 = -73;
	int32_t x259 = INT32_MIN;
	int64_t x260 = 592LL;
	int64_t t59 = 94201286267597LL;

	t59 = (x257/(x258-(x259/x260)));

	if (t59 != 592LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = INT8_MAX;
	volatile int32_t t60 = -2268638;

	t60 = (x261/(x262-(x263/x264)));

	if (t60 != -258) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -13LL;
	volatile uint8_t x268 = UINT8_MAX;
	int64_t t61 = 138006988814536436LL;

	t61 = (x265/(x266-(x267/x268)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = -7;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	int64_t t62 = 1402296753LL;

	t62 = (x269/(x270-(x271/x272)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = 2;
	volatile int16_t x275 = INT16_MIN;
	static volatile int16_t x276 = INT16_MIN;
	static int32_t t63 = 0;

	t63 = (x273/(x274-(x275/x276)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = INT32_MAX;
	int8_t x279 = INT8_MAX;
	static int16_t x280 = 11;
	int32_t t64 = 25;

	t64 = (x277/(x278-(x279/x280)));

	if (t64 != 32774) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x281 = INT64_MIN;
	static int64_t x282 = INT64_MIN;
	int16_t x283 = 0;

	t65 = (x281/(x282-(x283/x284)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x285 = 7316LLU;
	uint8_t x286 = 17U;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = 19U;
	uint64_t t66 = 4078683LLU;

	t66 = (x285/(x286-(x287/x288)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 2U;
	uint16_t x290 = 4595U;
	static volatile int8_t x291 = -1;
	int32_t x292 = INT32_MIN;
	volatile int32_t t67 = 26;

	t67 = (x289/(x290-(x291/x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MIN;
	static uint32_t x295 = 210U;
	uint32_t x296 = UINT32_MAX;
	volatile int64_t t68 = -1LL;

	t68 = (x293/(x294-(x295/x296)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 237U;
	static int16_t x298 = -400;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MAX;

	t69 = (x297/(x298-(x299/x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x303 = INT16_MAX;
	volatile int32_t t70 = -5204736;

	t70 = (x301/(x302-(x303/x304)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x308 = INT64_MAX;
	volatile int64_t t71 = -45678LL;

	t71 = (x305/(x306-(x307/x308)));

	if (t71 != 178956970LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x311 = INT8_MIN;
	static int64_t x312 = 22508948389LL;
	volatile int64_t t72 = 0LL;

	t72 = (x309/(x310-(x311/x312)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x314 = 3U;
	static int32_t x315 = -155964;

	t73 = (x313/(x314-(x315/x316)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x317 = -1;
	int64_t x318 = -4508933881184LL;
	uint64_t x319 = 10751445601003622LLU;
	uint16_t x320 = 27U;

	t74 = (x317/(x318-(x319/x320)));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x322 = INT32_MIN;
	volatile uint8_t x323 = 87U;
	int64_t x324 = INT64_MIN;
	int64_t t75 = 863LL;

	t75 = (x321/(x322-(x323/x324)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -48;
	int32_t x326 = 4482016;
	volatile int32_t x327 = INT32_MIN;

	t76 = (x325/(x326-(x327/x328)));

	if (t76 != 958U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 6LLU;
	int16_t x330 = INT16_MAX;
	uint64_t x331 = UINT64_MAX;

	t77 = (x329/(x330-(x331/x332)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MAX;
	static uint8_t x336 = UINT8_MAX;
	volatile int64_t t78 = -47256329LL;

	t78 = (x333/(x334-(x335/x336)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x339 = INT64_MIN;
	volatile uint32_t x340 = 28590U;
	volatile int64_t t79 = -59084406LL;

	t79 = (x337/(x338-(x339/x340)));

	if (t79 != -28590LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 432653473U;
	volatile int16_t x343 = -15776;
	uint32_t t80 = 133099U;

	t80 = (x341/(x342-(x343/x344)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 53U;
	int32_t x346 = 323292;
	static int8_t x347 = -41;
	int64_t x348 = INT64_MIN;
	static int64_t t81 = -465048534890304LL;

	t81 = (x345/(x346-(x347/x348)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = -1;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MAX;
	static volatile int64_t t82 = -2LL;

	t82 = (x353/(x354-(x355/x356)));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -4;
	int8_t x358 = INT8_MIN;
	int8_t x359 = 3;
	volatile int64_t x360 = INT64_MAX;

	t83 = (x357/(x358-(x359/x360)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x361 = INT32_MAX;
	static uint64_t x362 = 497936875252LLU;
	static int64_t x363 = -1LL;
	uint64_t x364 = UINT64_MAX;
	uint64_t t84 = 209637200LLU;

	t84 = (x361/(x362-(x363/x364)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x365 = INT16_MAX;
	uint16_t x366 = 623U;
	int8_t x368 = -52;
	volatile int32_t t85 = -14299;

	t85 = (x365/(x366-(x367/x368)));

	if (t85 != 52) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x369 = 7323924266LL;
	volatile uint16_t x370 = UINT16_MAX;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 1623U;
	static int64_t t86 = -96LL;

	t86 = (x369/(x370-(x371/x372)));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x374 = INT16_MIN;
	int64_t x376 = -1LL;

	t87 = (x373/(x374-(x375/x376)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = -1;
	uint64_t x382 = 335784LLU;
	uint16_t x383 = 7U;
	int16_t x384 = INT16_MAX;

	t88 = (x381/(x382-(x383/x384)));

	if (t88 != 54936340247628LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x385 = 188094266LL;
	int64_t x386 = 11425591001LL;
	int16_t x388 = 3755;
	volatile int64_t t89 = 11LL;

	t89 = (x385/(x386-(x387/x388)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MAX;
	static volatile int64_t x390 = -8406441644920LL;
	int8_t x391 = -1;
	volatile int8_t x392 = -1;
	int64_t t90 = -417203360217469LL;

	t90 = (x389/(x390-(x391/x392)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 1022339426LLU;
	uint64_t t91 = 43LLU;

	t91 = (x393/(x394-(x395/x396)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x397 = -1;
	int32_t x398 = INT32_MAX;
	int16_t x399 = 4;

	t92 = (x397/(x398-(x399/x400)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = INT16_MAX;
	uint8_t x402 = 23U;
	int32_t x403 = 122;
	volatile uint8_t x404 = 7U;
	volatile int32_t t93 = -20;

	t93 = (x401/(x402-(x403/x404)));

	if (t93 != 5461) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x405 = INT16_MAX;
	static int64_t x406 = -1LL;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t94 = 1047621789LL;

	t94 = (x405/(x406-(x407/x408)));

	if (t94 != -32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = -630121904026LL;
	uint64_t x411 = 621LLU;
	uint64_t x412 = 1126175878238LLU;
	uint64_t t95 = 9LLU;

	t95 = (x409/(x410-(x411/x412)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x413 = INT8_MAX;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = -1;

	t96 = (x413/(x414-(x415/x416)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	static int8_t x419 = INT8_MIN;
	static uint32_t x420 = UINT32_MAX;
	volatile uint32_t t97 = 843U;

	t97 = (x417/(x418-(x419/x420)));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x421 = 1U;
	volatile int8_t x422 = INT8_MIN;
	uint32_t x423 = 202270214U;

	t98 = (x421/(x422-(x423/x424)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = -70;
	int8_t x426 = -9;
	static int8_t x427 = INT8_MAX;
	static volatile int8_t x428 = 1;
	volatile int32_t t99 = 1;

	t99 = (x425/(x426-(x427/x428)));

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

