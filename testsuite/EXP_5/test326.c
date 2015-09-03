#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 1U;
int64_t x5 = INT64_MIN;
static volatile int64_t t1 = 13800LL;
int64_t x13 = 2828159762538LL;
uint64_t x18 = 4976524840819142240LLU;
int64_t x20 = INT64_MAX;
uint64_t t3 = 537146745LLU;
volatile int64_t t4 = 5710377LL;
int64_t x42 = -1LL;
int64_t x50 = -9267060042LL;
volatile uint16_t x52 = 7U;
volatile int32_t x53 = 3389744;
int16_t x55 = -1;
uint64_t x58 = UINT64_MAX;
int16_t x69 = -11951;
volatile int8_t x77 = INT8_MIN;
uint8_t x81 = 0U;
uint64_t x84 = 8092601789LLU;
volatile uint16_t x91 = UINT16_MAX;
int64_t x95 = 9203286197818LL;
volatile uint8_t x104 = UINT8_MAX;
static int32_t x107 = 3886;
volatile uint32_t t24 = 112941U;
volatile int32_t t27 = -150020;
int8_t x144 = 7;
static volatile int32_t t30 = 836014;
volatile int32_t x145 = -5808;
int32_t x156 = INT32_MIN;
volatile int32_t t33 = -1585;
int32_t x157 = 1401202;
static volatile uint16_t x158 = 1637U;
int64_t x164 = -110774695958LL;
int16_t x169 = INT16_MIN;
int64_t t37 = 28795955166024LL;
static uint32_t x175 = 4658129U;
volatile uint64_t t38 = 238463264782334075LLU;
int64_t x181 = INT64_MIN;
volatile int32_t x183 = 870572;
int64_t x184 = 469671441787547LL;
volatile int32_t t45 = -1445535;
int64_t x214 = -217343936962LL;
static int64_t x215 = INT64_MIN;
int16_t x235 = INT16_MIN;
static int32_t x238 = -1;
int16_t x244 = -1618;
int32_t x247 = INT32_MIN;
volatile int8_t x248 = 8;
int16_t x249 = -10645;
static int8_t x252 = INT8_MIN;
int32_t x263 = INT32_MIN;
volatile uint64_t t57 = 353987713236034LLU;
uint64_t t60 = 119LLU;
int8_t x285 = -1;
uint16_t x286 = 95U;
uint8_t x294 = 23U;
volatile int32_t t63 = -129549;
uint64_t x306 = UINT64_MAX;
uint32_t x311 = 0U;
int64_t x313 = 28089509978770868LL;
volatile int64_t t68 = -566964668016506020LL;
int32_t t69 = -495541587;
volatile int16_t x321 = -1;
uint32_t x323 = 636480U;
uint32_t t70 = 115U;
static int64_t x330 = INT64_MAX;
uint8_t x331 = 100U;
uint64_t x335 = UINT64_MAX;
volatile uint64_t t73 = 1030874LLU;
int32_t x337 = INT32_MIN;
static int8_t x338 = INT8_MIN;
int8_t x342 = 1;
int16_t x343 = -1;
int32_t x344 = 3;
uint64_t x357 = 93LLU;
int16_t x359 = INT16_MIN;
int16_t x361 = -1;
int8_t x362 = -2;
volatile int64_t x365 = INT64_MIN;
int16_t x368 = -1;
static uint16_t x369 = 5710U;
int32_t t83 = -9;
int8_t x392 = -2;
static volatile int64_t x393 = INT64_MAX;
static int32_t x400 = -3924;
int8_t x402 = -1;
static int32_t t89 = -27504498;
int32_t x405 = 92102247;
int16_t x409 = -5;
int64_t t92 = -11LL;
int8_t x425 = INT8_MIN;
int8_t x427 = INT8_MIN;
uint8_t x429 = 3U;
uint8_t x431 = UINT8_MAX;
uint32_t x437 = 5456U;
volatile uint32_t t97 = 1428U;
int16_t x442 = INT16_MAX;
volatile uint32_t t99 = 2170U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x3 = 15U;
	static int16_t x4 = -1;
	int32_t t0 = -4108177;

	t0 = (x1+((x2-x3)^x4));

	if (t0 != -2147483635) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	static volatile int16_t x7 = 3;
	static int16_t x8 = INT16_MAX;

	t1 = (x5+((x6-x7)^x8));

	if (t1 != -9223372036854743293LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x14 = 1;
	uint16_t x15 = 63U;
	int8_t x16 = INT8_MIN;
	int64_t t2 = -155053263720849397LL;

	t2 = (x13+((x14-x15)^x16));

	if (t2 != 2828159762604LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static uint16_t x19 = 1U;

	t3 = (x17+((x18-x19)^x20));

	if (t3 != 4246847196035633440LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = -208546LL;
	int8_t x24 = INT8_MAX;

	t4 = (x21+((x22-x23)^x24));

	if (t4 != 4295175774LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint8_t x26 = UINT8_MAX;
	uint64_t x27 = 107626363610LLU;
	int32_t x28 = INT32_MIN;
	static uint64_t t5 = 35074604177883LLU;

	t5 = (x25+((x26-x27)^x28));

	if (t5 != 9223372146124260901LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	volatile uint32_t x30 = 1307422525U;
	uint64_t x31 = 23027631LLU;
	static uint64_t x32 = UINT64_MAX;
	static uint64_t t6 = 19229016423140416LLU;

	t6 = (x29+((x30-x31)^x32));

	if (t6 != 18446744072425156593LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x37 = 69141647981152346LL;
	volatile int16_t x38 = INT16_MAX;
	uint8_t x39 = 1U;
	volatile int32_t x40 = INT32_MIN;
	int64_t t7 = 3LL;

	t7 = (x37+((x38-x39)^x40));

	if (t7 != 69141645833701464LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -16631805LL;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = 1;
	volatile int64_t t8 = -41312366373421LL;

	t8 = (x41+((x42-x43)^x44));

	if (t8 != 2130851841LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -3050;
	uint64_t x46 = 1491845LLU;
	static uint32_t x47 = 1066790338U;
	static uint8_t x48 = 99U;
	volatile uint64_t t9 = 688610594057301LLU;

	t9 = (x45+((x46-x47)^x48));

	if (t9 != 18446744072644250038LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x51 = UINT8_MAX;
	volatile int64_t t10 = -111854876728466385LL;

	t10 = (x49+((x50-x51)^x52));

	if (t10 != -9267060177LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x54 = -8;
	uint64_t x56 = UINT64_MAX;
	uint64_t t11 = 272180738272989LLU;

	t11 = (x53+((x54-x55)^x56));

	if (t11 != 3389750LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -63;
	volatile uint16_t x59 = 235U;
	uint16_t x60 = UINT16_MAX;
	uint64_t t12 = 563168LLU;

	t12 = (x57+((x58-x59)^x60));

	if (t12 != 18446744073709486252LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = 1;
	int16_t x62 = 7178;
	uint64_t x63 = 7820LLU;
	volatile uint8_t x64 = 106U;
	uint64_t t13 = 389671LLU;

	t13 = (x61+((x62-x63)^x64));

	if (t13 != 18446744073709550869LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MAX;
	volatile int16_t x67 = 1174;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t14 = -116053;

	t14 = (x65+((x66-x67)^x68));

	if (t14 != -31639) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = -13;
	int16_t x71 = -2;
	volatile uint64_t x72 = UINT64_MAX;
	uint64_t t15 = 8678660344329LLU;

	t15 = (x69+((x70-x71)^x72));

	if (t15 != 18446744073709539675LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -1;
	int64_t x74 = -15214LL;
	static int32_t x75 = 6042;
	int64_t x76 = 175907370LL;
	int64_t t16 = 1LL;

	t16 = (x73+((x74-x75)^x76));

	if (t16 != -175927599LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x78 = 1;
	uint32_t x79 = 308111U;
	volatile uint8_t x80 = UINT8_MAX;
	uint32_t t17 = 1616710109U;

	t17 = (x77+((x78-x79)^x80));

	if (t17 != 4294659085U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	uint64_t t18 = 61LLU;

	t18 = (x81+((x82-x83)^x84));

	if (t18 != 8092601789LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MAX;
	volatile uint64_t t19 = 52941LLU;

	t19 = (x85+((x86-x87)^x88));

	if (t19 != 9223372036854775678LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	static uint64_t x92 = 16105118101LLU;
	uint64_t t20 = 2036853818275315LLU;

	t20 = (x89+((x90-x91)^x92));

	if (t20 != 9223372052959893909LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = 0;
	int32_t x96 = -470;
	static volatile int64_t t21 = 92067481303847LL;

	t21 = (x93+((x94-x95)^x96));

	if (t21 != 9203286198507LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = INT32_MIN;
	volatile uint32_t x98 = 1163291U;
	static uint64_t x99 = 273664800284LLU;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t22 = 182658LLU;

	t22 = (x97+((x98-x99)^x100));

	if (t22 != 271797209599LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int8_t x102 = -1;
	int8_t x103 = INT8_MIN;
	volatile int64_t t23 = 1101558123707593LL;

	t23 = (x101+((x102-x103)^x104));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 1U;
	int8_t x106 = INT8_MAX;
	int8_t x108 = INT8_MAX;

	t24 = (x105+((x106-x107)^x108));

	if (t24 != 4294963503U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MIN;
	static int32_t x110 = INT32_MAX;
	uint8_t x111 = 115U;
	static uint8_t x112 = 3U;
	volatile int64_t t25 = 4040LL;

	t25 = (x109+((x110-x111)^x112));

	if (t25 != -9223372034707292273LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 76639931332365LL;
	uint16_t x114 = 2U;
	int64_t x115 = -13080357261885LL;
	int16_t x116 = INT16_MIN;
	static volatile int64_t t26 = 470018310LL;

	t26 = (x113+((x114-x115)^x116));

	if (t26 != 63559574079820LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = 18U;
	int8_t x122 = -1;
	static int32_t x123 = -19;
	volatile int16_t x124 = -1;

	t27 = (x121+((x122-x123)^x124));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -4256;
	int32_t x126 = -37;
	int16_t x127 = -641;
	int8_t x128 = INT8_MIN;
	volatile int32_t t28 = -299;

	t28 = (x125+((x126-x127)^x128));

	if (t28 != -4804) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 143216LL;
	int32_t x134 = INT32_MIN;
	uint64_t x135 = 28501354654048LLU;
	int64_t x136 = 608053129LL;
	volatile uint64_t t29 = 495207112209155LLU;

	t29 = (x133+((x134-x135)^x136));

	if (t29 != 18446715570811412633LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	volatile int8_t x143 = 1;

	t30 = (x141+((x142-x143)^x144));

	if (t30 != 65528) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = 17;
	static int64_t x147 = -4659879LL;
	static int16_t x148 = INT16_MAX;
	volatile int64_t t31 = 29570804618LL;

	t31 = (x145+((x146-x147)^x148));

	if (t31 != 4673175LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	uint16_t x150 = 12U;
	uint64_t x151 = 55169213917LLU;
	static uint64_t x152 = UINT64_MAX;
	static uint64_t t32 = 2456LLU;

	t32 = (x149+((x150-x151)^x152));

	if (t32 != 55169213903LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	volatile int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;

	t33 = (x153+((x154-x155)^x156));

	if (t33 != 2147451007) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x159 = 61U;
	int8_t x160 = 1;
	int32_t t34 = -7963;

	t34 = (x157+((x158-x159)^x160));

	if (t34 != 1402779) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x161 = 72;
	int32_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int64_t t35 = -48538549284002LL;

	t35 = (x161+((x162-x163)^x164));

	if (t35 != 110774700082LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x165 = 27U;
	volatile int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;
	int64_t t36 = -3841602451854875LL;

	t36 = (x165+((x166-x167)^x168));

	if (t36 != 9223372032559808539LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	int32_t x172 = 11981202;

	t37 = (x169+((x170-x171)^x172));

	if (t37 != -9223372034695343726LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = UINT32_MAX;
	static uint16_t x176 = 10U;

	t38 = (x173+((x174-x175)^x176));

	if (t38 != 4290309155LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	int32_t x178 = -1;
	uint32_t x179 = 3662U;
	static volatile int8_t x180 = -1;
	uint32_t t39 = 736U;

	t39 = (x177+((x178-x179)^x180));

	if (t39 != 69197U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x182 = 499422512U;
	int64_t t40 = 425LL;

	t40 = (x181+((x182-x183)^x184));

	if (t40 != -9222902365088799201LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 217892631691LLU;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = -1LL;
	volatile int32_t x188 = INT32_MIN;
	volatile uint64_t t41 = 9733581LLU;

	t41 = (x185+((x186-x187)^x188));

	if (t41 != 215745213579LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x189 = 66214U;
	int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	volatile uint32_t t42 = 2U;

	t42 = (x189+((x190-x191)^x192));

	if (t42 != 2147582502U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x193 = INT32_MIN;
	uint64_t x194 = UINT64_MAX;
	static int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t43 = 24343645189LLU;

	t43 = (x193+((x194-x195)^x196));

	if (t43 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = -13;
	int64_t x206 = -6LL;
	static int16_t x207 = INT16_MIN;
	static uint32_t x208 = UINT32_MAX;
	volatile int64_t t44 = -3LL;

	t44 = (x205+((x206-x207)^x208));

	if (t44 != 4294934520LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -1;
	volatile int8_t x210 = 2;
	int32_t x211 = -28510159;
	uint8_t x212 = UINT8_MAX;

	t45 = (x209+((x210-x211)^x212));

	if (t45 != 28509997) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -13346;
	uint64_t x216 = 127290645240872378LLU;
	volatile uint64_t t46 = 6LLU;

	t46 = (x213+((x214-x215)^x216));

	if (t46 != 9096081471445473122LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = 0;
	int16_t x219 = -137;
	int8_t x220 = INT8_MAX;
	volatile int32_t t47 = -1007477829;

	t47 = (x217+((x218-x219)^x220));

	if (t47 != -2147483402) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x225 = -492514;
	static volatile int8_t x226 = -3;
	int8_t x227 = INT8_MAX;
	int64_t x228 = 813LL;
	int64_t t48 = -32224190681416LL;

	t48 = (x225+((x226-x227)^x228));

	if (t48 != -493455LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 0U;
	volatile uint8_t x230 = 5U;
	int16_t x231 = -5359;
	static uint16_t x232 = 7U;
	int32_t t49 = -2203768;

	t49 = (x229+((x230-x231)^x232));

	if (t49 != 5363) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -3385;
	int32_t x234 = INT32_MIN;
	static int32_t x236 = -788947;
	int32_t t50 = 7280;

	t50 = (x233+((x234-x235)^x236));

	if (t50 != 2146658548) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x237 = 93603320LLU;
	volatile uint16_t x239 = UINT16_MAX;
	int32_t x240 = 613;
	volatile uint64_t t51 = 978695493789LLU;

	t51 = (x237+((x238-x239)^x240));

	if (t51 != 93538397LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	int64_t x243 = -1LL;
	volatile int64_t t52 = -590275069393767243LL;

	t52 = (x241+((x242-x243)^x244));

	if (t52 != -1746LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	static int64_t x246 = -1LL;
	int64_t t53 = 7084006546LL;

	t53 = (x245+((x246-x247)^x248));

	if (t53 != 2147516406LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x250 = -1;
	int16_t x251 = -1;
	int32_t t54 = -358;

	t54 = (x249+((x250-x251)^x252));

	if (t54 != -10773) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = -15122055215607876LL;
	uint8_t x255 = 0U;
	uint8_t x256 = UINT8_MAX;
	int64_t t55 = -133131LL;

	t55 = (x253+((x254-x255)^x256));

	if (t55 != -15122055215608125LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x257 = 456100U;
	int16_t x258 = -3;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 1U;
	volatile uint32_t t56 = 188257478U;

	t56 = (x257+((x258-x259)^x260));

	if (t56 != 488864U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x262 = 6489LLU;
	int16_t x264 = INT16_MIN;

	t57 = (x261+((x262-x263)^x264));

	if (t57 != 18446744071562041944LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x273 = -1;
	uint32_t x274 = 465027405U;
	static uint32_t x275 = 743U;
	uint8_t x276 = 7U;
	volatile uint32_t t58 = 440315972U;

	t58 = (x273+((x274-x275)^x276));

	if (t58 != 465026656U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	static uint64_t x279 = 1844972915972258556LLU;
	volatile int16_t x280 = INT16_MAX;
	uint64_t t59 = 1424424102LLU;

	t59 = (x277+((x278-x279)^x280));

	if (t59 != 16601771157737290363LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = -1;
	static volatile int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 111641407247978949LLU;

	t60 = (x281+((x282-x283)^x284));

	if (t60 != 111641407247978809LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x287 = -1LL;
	static int64_t x288 = -1LL;
	static volatile int64_t t61 = 3LL;

	t61 = (x285+((x286-x287)^x288));

	if (t61 != -98LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = -1;
	int32_t x290 = 3242615;
	int8_t x291 = -1;
	int8_t x292 = -1;
	int32_t t62 = -5864;

	t62 = (x289+((x290-x291)^x292));

	if (t62 != -3242618) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	static volatile uint16_t x296 = 29889U;

	t63 = (x293+((x294-x295)^x296));

	if (t63 != 29654) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = 20;
	uint16_t x298 = 719U;
	volatile int8_t x299 = INT8_MIN;
	static int32_t x300 = INT32_MIN;
	static int32_t t64 = -407524;

	t64 = (x297+((x298-x299)^x300));

	if (t64 != -2147482781) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = INT16_MIN;
	uint64_t x302 = 788LLU;
	int32_t x303 = 1;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t65 = 12375228779LLU;

	t65 = (x301+((x302-x303)^x304));

	if (t65 != 18446744073709518060LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x305 = -1;
	int16_t x307 = INT16_MAX;
	volatile uint16_t x308 = 6865U;
	static volatile uint64_t t66 = 3LLU;

	t66 = (x305+((x306-x307)^x308));

	if (t66 != 18446744073709525712LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = 1;
	volatile uint8_t x310 = 3U;
	int64_t x312 = INT64_MIN;
	int64_t t67 = -31LL;

	t67 = (x309+((x310-x311)^x312));

	if (t67 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x314 = INT64_MIN;
	int16_t x315 = -1;
	int16_t x316 = INT16_MAX;

	t68 = (x313+((x314-x315)^x316));

	if (t68 != -9195282526875972174LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = -4;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -1;

	t69 = (x317+((x318-x319)^x320));

	if (t69 != -65668) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x322 = 0U;
	int16_t x324 = -45;

	t70 = (x321+((x322-x323)^x324));

	if (t70 != 636434U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x325 = 14739905;
	int16_t x326 = -82;
	int64_t x327 = -10580997956LL;
	int32_t x328 = 32690;
	volatile int64_t t71 = 261045LL;

	t71 = (x325+((x326-x327)^x328));

	if (t71 != 10595742465LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 835313123U;
	volatile uint64_t x332 = 3467222098857043078LLU;
	static volatile uint64_t t72 = 112303072500LLU;

	t72 = (x329+((x330-x331)^x332));

	if (t72 != 5756149938833045760LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int16_t x336 = INT16_MIN;

	t73 = (x333+((x334-x335)^x336));

	if (t73 != 32640LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x339 = INT32_MIN;
	static uint16_t x340 = UINT16_MAX;
	int32_t t74 = 689702;

	t74 = (x337+((x338-x339)^x340));

	if (t74 != -65409) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MIN;
	volatile int32_t t75 = -5414;

	t75 = (x341+((x342-x343)^x344));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = INT8_MAX;
	volatile int32_t x346 = INT32_MAX;
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = -2071214660067LL;
	volatile int64_t t76 = 511LL;

	t76 = (x345+((x346-x347)^x348));

	if (t76 != -2071281296996LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x349 = 12U;
	static uint32_t x350 = 22U;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 4U;
	uint32_t t77 = 13079U;

	t77 = (x349+((x350-x351)^x352));

	if (t77 != 32798U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	int64_t x354 = -114797192456305LL;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = 0;
	volatile int64_t t78 = 25260LL;

	t78 = (x353+((x354-x355)^x356));

	if (t78 != 9223257239662319502LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x358 = INT8_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	uint64_t t79 = 24065159426972LLU;

	t79 = (x357+((x358-x359)^x360));

	if (t79 != 32733LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t80 = -1;

	t80 = (x361+((x362-x363)^x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x366 = 0U;
	static int32_t x367 = INT32_MAX;
	int64_t t81 = 5308628LL;

	t81 = (x365+((x366-x367)^x368));

	if (t81 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MAX;
	int16_t x372 = 0;
	static volatile uint32_t t82 = 18390U;

	t82 = (x369+((x370-x371)^x372));

	if (t82 != 4294940238U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = -1;
	int8_t x374 = -5;
	uint16_t x375 = 48U;
	int8_t x376 = 13;

	t83 = (x373+((x374-x375)^x376));

	if (t83 != -59) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int16_t x382 = INT16_MAX;
	volatile int64_t x383 = -722140LL;
	volatile int16_t x384 = INT16_MIN;
	volatile int64_t t84 = -3376532354430511LL;

	t84 = (x381+((x382-x383)^x384));

	if (t84 != -784934LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 0U;
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = INT64_MAX;
	volatile int64_t t85 = -869956241504942456LL;

	t85 = (x385+((x386-x387)^x388));

	if (t85 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	static int64_t x390 = -2123749886307LL;
	volatile int32_t x391 = INT32_MAX;
	static int64_t t86 = 457527230014942LL;

	t86 = (x389+((x390-x391)^x392));

	if (t86 != 2130192337247LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	uint64_t t87 = 77701186816913540LLU;

	t87 = (x393+((x394-x395)^x396));

	if (t87 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	volatile int32_t t88 = -1069;

	t88 = (x397+((x398-x399)^x400));

	if (t88 != -69205) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x401 = INT32_MIN;
	static int32_t x403 = INT32_MIN;
	uint8_t x404 = 13U;

	t89 = (x401+((x402-x403)^x404));

	if (t89 != -14) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x406 = INT64_MIN;
	int32_t x407 = -37611;
	int32_t x408 = INT32_MAX;
	int64_t t90 = 1LL;

	t90 = (x405+((x406-x407)^x408));

	if (t90 != -9223372034615227525LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x410 = UINT64_MAX;
	int64_t x411 = -266086162257LL;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t91 = 2LLU;

	t91 = (x409+((x410-x411)^x412));

	if (t91 != 18446743807623389387LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MAX;
	int64_t x415 = 95357627049684105LL;
	int32_t x416 = -139472;

	t92 = (x413+((x414-x415)^x416));

	if (t92 != 95357627049479238LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x421 = UINT16_MAX;
	int64_t x422 = 0LL;
	static int8_t x423 = INT8_MAX;
	volatile int32_t x424 = 419194529;
	int64_t t93 = -346LL;

	t93 = (x421+((x422-x423)^x424));

	if (t93 != -419129057LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x426 = 129593495013LLU;
	int8_t x428 = 30;
	static volatile uint64_t t94 = 2097874712517LLU;

	t94 = (x425+((x426-x427)^x428));

	if (t94 != 129593495035LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x430 = 82U;
	uint8_t x432 = 16U;
	volatile int32_t t95 = 204173661;

	t95 = (x429+((x430-x431)^x432));

	if (t95 != -186) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x433 = INT16_MIN;
	uint32_t x434 = 632U;
	int16_t x435 = INT16_MAX;
	volatile int32_t x436 = INT32_MAX;
	uint32_t t96 = 1161569U;

	t96 = (x433+((x434-x435)^x436));

	if (t96 != 2147483014U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = -1;
	static volatile uint16_t x440 = 10U;

	t97 = (x437+((x438-x439)^x440));

	if (t97 != 5722U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -2374;
	int64_t x443 = 496LL;
	int32_t x444 = INT32_MIN;
	static volatile int64_t t98 = 25394LL;

	t98 = (x441+((x442-x443)^x444));

	if (t98 != -2147453751LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x445 = 11521U;
	volatile int8_t x446 = INT8_MIN;
	static int16_t x447 = 243;
	static uint32_t x448 = 153U;

	t99 = (x445+((x446-x447)^x448));

	if (t99 != 11029U) { NG(); } else { ; }
	
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

