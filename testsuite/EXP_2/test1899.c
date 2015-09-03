#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
int16_t x5 = -155;
volatile uint32_t t4 = 134U;
static uint64_t x25 = UINT64_MAX;
uint16_t x32 = UINT16_MAX;
int16_t x50 = INT16_MIN;
int64_t t11 = -63457012212LL;
int32_t t12 = -18275;
static volatile uint64_t t13 = 7383689590435LLU;
uint8_t x68 = 3U;
volatile int8_t x72 = INT8_MAX;
volatile int64_t t15 = -449753813745195LL;
int32_t x78 = INT32_MIN;
uint32_t t17 = 36443U;
uint64_t t18 = UINT64_MAX;
uint8_t x89 = 103U;
int8_t x91 = INT8_MIN;
static volatile int64_t t20 = 6501LL;
int64_t t21 = 2037150820396LL;
int64_t x99 = INT64_MIN;
int8_t x105 = INT8_MAX;
int16_t x111 = -1;
static uint32_t x113 = UINT32_MAX;
static volatile uint64_t t27 = 38749LLU;
volatile uint8_t x128 = 19U;
uint64_t x131 = 909983363LLU;
int32_t x135 = 388;
uint16_t x136 = 28477U;
volatile uint32_t t31 = 90664456U;
uint32_t x137 = 1444354U;
int32_t x140 = INT32_MIN;
static volatile int16_t x144 = INT16_MAX;
volatile int32_t t34 = 316834647;
volatile int32_t x149 = INT32_MAX;
uint16_t x157 = 3645U;
int16_t x161 = INT16_MIN;
uint32_t t38 = 510U;
int32_t x174 = INT32_MIN;
uint8_t x179 = UINT8_MAX;
uint64_t x181 = 72240030899517LLU;
int32_t x189 = INT32_MIN;
volatile int64_t x197 = INT64_MIN;
volatile int64_t x201 = 1339046739064LL;
volatile int64_t t48 = 2434655540668047LL;
static int64_t x214 = INT64_MIN;
static uint64_t x216 = 848206174771530LLU;
int64_t x219 = INT64_MIN;
int64_t t52 = -1221474608096352LL;
uint64_t x231 = 314748208185959LLU;
int16_t x233 = -1;
static uint16_t x235 = UINT16_MAX;
int32_t x236 = 55611888;
volatile int64_t x237 = -1LL;
volatile int64_t x239 = 1092915735LL;
volatile int16_t x240 = INT16_MIN;
uint16_t x247 = 8055U;
uint32_t x250 = UINT32_MAX;
volatile uint16_t x254 = 223U;
int16_t x257 = -1;
uint32_t x259 = UINT32_MAX;
int32_t x268 = -110950648;
uint64_t x269 = 87LLU;
uint16_t x283 = 289U;
int64_t x284 = 1522130790985086LL;
static volatile int64_t x285 = 811LL;
static volatile uint64_t x288 = UINT64_MAX;
int16_t x292 = INT16_MIN;
volatile int64_t t70 = 0LL;
uint64_t t72 = 1LLU;
uint8_t x309 = UINT8_MAX;
int8_t x310 = INT8_MAX;
uint32_t x312 = UINT32_MAX;
uint32_t x318 = 42U;
uint64_t t77 = 6199396356LLU;
volatile uint16_t x322 = 18818U;
uint16_t x331 = UINT16_MAX;
int64_t x335 = INT64_MIN;
volatile uint8_t x338 = UINT8_MAX;
static int64_t t83 = -216384703866168994LL;
static uint64_t x346 = 1LLU;
int32_t x350 = -1956;
int64_t x356 = -4117573LL;
static int64_t t86 = 833507248972LL;
volatile uint32_t t87 = UINT32_MAX;
static int8_t x365 = INT8_MIN;
static uint8_t x368 = UINT8_MAX;
uint64_t x373 = 16937709963040LLU;
static volatile int32_t x377 = INT32_MIN;
volatile uint16_t x379 = UINT16_MAX;
uint8_t x391 = UINT8_MAX;
volatile int64_t x392 = INT64_MAX;
int64_t t95 = INT64_MAX;
volatile int32_t x402 = -1;
int8_t x403 = 1;
static int64_t x404 = -1LL;
volatile int8_t x407 = INT8_MIN;


void f0(void) {
	static volatile uint32_t x1 = UINT32_MAX;
	uint32_t x2 = 878U;
	int64_t x4 = 15597280LL;
	int64_t t0 = -27035LL;

	t0 = ((x1/(x2|x3))+x4);

	if (t0 != 15597281LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 2U;
	int8_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	uint32_t t1 = 41275170U;

	t1 = ((x5/(x6|x7))+x8);

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 13;
	int32_t x10 = INT32_MIN;
	int64_t x11 = -1LL;
	static int64_t x12 = 33352550LL;
	static int64_t t2 = -6042604LL;

	t2 = ((x9/(x10|x11))+x12);

	if (t2 != 33352537LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -4526694479592847389LL;
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MAX;
	static int16_t x16 = 3;
	int64_t t3 = 5LL;

	t3 = ((x13/(x14|x15))+x16);

	if (t3 != -69072930183759LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 18962U;
	static uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = 0;
	int16_t x24 = INT16_MAX;

	t4 = ((x21/(x22|x23))+x24);

	if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x26 = 4081504U;
	static int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MAX;
	uint64_t t5 = 5493LLU;

	t5 = ((x25/(x26|x27))+x28);

	if (t5 != 8573639673LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint16_t x30 = 2898U;
	int32_t x31 = INT32_MIN;
	volatile uint64_t t6 = 28LLU;

	t6 = ((x29/(x30|x31))+x32);

	if (t6 != 65536LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 786032U;
	static volatile uint8_t x34 = 49U;
	int64_t x35 = -1LL;
	uint8_t x36 = UINT8_MAX;
	volatile int64_t t7 = -10605237429852110LL;

	t7 = ((x33/(x34|x35))+x36);

	if (t7 != -785777LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = 19990;
	volatile int8_t x39 = INT8_MIN;
	uint8_t x40 = 58U;
	int32_t t8 = -1580680;

	t8 = ((x37/(x38|x39))+x40);

	if (t8 != 57) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -687;
	static uint32_t x42 = 21U;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = 17U;
	volatile uint32_t t9 = 58264014U;

	t9 = ((x41/(x42|x43))+x44);

	if (t9 != 18U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -1;
	volatile uint32_t x47 = 175197762U;
	uint8_t x48 = 8U;
	volatile uint32_t t10 = 6U;

	t10 = ((x45/(x46|x47))+x48);

	if (t10 != 8U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = 12726070369378LL;
	static int16_t x51 = -680;
	volatile int32_t x52 = INT32_MIN;

	t11 = ((x49/(x50|x51))+x52);

	if (t11 != -20862293014LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = -28;
	volatile int16_t x55 = INT16_MIN;
	int32_t x56 = -1;

	t12 = ((x53/(x54|x55))+x56);

	if (t12 != -1171) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 97;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = 63503383238LLU;
	static int8_t x60 = INT8_MIN;

	t13 = ((x57/(x58|x59))+x60);

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	static volatile int64_t x66 = -1LL;
	static int8_t x67 = 2;
	int64_t t14 = -190438576546144692LL;

	t14 = ((x65/(x66|x67))+x68);

	if (t14 != -4294967292LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x70 = 45994963LL;
	volatile int64_t x71 = -1LL;

	t15 = ((x69/(x70|x71))+x72);

	if (t15 != -65408LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 61LL;
	static int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MAX;
	int8_t x76 = -37;
	int64_t t16 = -5LL;

	t16 = ((x73/(x74|x75))+x76);

	if (t16 != -37LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x79 = 1;
	uint32_t x80 = 670U;

	t17 = ((x77/(x78|x79))+x80);

	if (t17 != 670U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MAX;
	static int8_t x82 = INT8_MIN;
	uint64_t x83 = 72LLU;
	int64_t x84 = -1LL;

	t18 = ((x81/(x82|x83))+x84);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 8U;
	int8_t x88 = 0;
	uint64_t t19 = 90LLU;

	t19 = ((x85/(x86|x87))+x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x90 = 12738U;
	static int64_t x92 = 9666022538657274LL;

	t20 = ((x89/(x90|x91))+x92);

	if (t20 != 9666022538657273LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MIN;
	int8_t x96 = 1;

	t21 = ((x93/(x94|x95))+x96);

	if (t21 != -281474976710654LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	uint8_t x98 = 2U;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t22 = 1475LL;

	t22 = ((x97/(x98|x99))+x100);

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 4406954761844372328LLU;
	int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	static volatile int8_t x104 = INT8_MIN;
	volatile uint64_t t23 = 2353942015LLU;

	t23 = ((x101/(x102|x103))+x104);

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 143257190581870198LLU;
	volatile int16_t x108 = -1;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x105/(x106|x107))+x108);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t25 = -2;

	t25 = ((x109/(x110|x111))+x112);

	if (t25 != -33023) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x114 = 8727261049683678LLU;
	uint16_t x115 = 31U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x113/(x114|x115))+x116);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 356831998LLU;
	static int32_t x118 = -1;
	static volatile int64_t x119 = INT64_MAX;
	int32_t x120 = INT32_MIN;

	t27 = ((x117/(x118|x119))+x120);

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;
	volatile int32_t t28 = 8061882;

	t28 = ((x121/(x122|x123))+x124);

	if (t28 != -32895) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	volatile int64_t x126 = -1LL;
	uint16_t x127 = 26U;
	static volatile int64_t t29 = -558745410648936LL;

	t29 = ((x125/(x126|x127))+x128);

	if (t29 != 20LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 1411;
	volatile int8_t x130 = INT8_MAX;
	uint64_t x132 = 0LLU;
	uint64_t t30 = 367090605LLU;

	t30 = ((x129/(x130|x131))+x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 13560922U;
	int32_t x134 = INT32_MIN;

	t31 = ((x133/(x134|x135))+x136);

	if (t31 != 28477U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x138 = INT8_MIN;
	static uint8_t x139 = 1U;
	uint32_t t32 = 783300750U;

	t32 = ((x137/(x138|x139))+x140);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x141 = UINT32_MAX;
	int8_t x142 = 1;
	uint16_t x143 = 652U;
	volatile uint32_t t33 = 922U;

	t33 = ((x141/(x142|x143))+x144);

	if (t33 != 6610052U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -154;
	int8_t x146 = 1;
	static uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;

	t34 = ((x145/(x146|x147))+x148);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x150 = 68636634840075505LLU;
	static uint32_t x151 = 57981927U;
	volatile uint16_t x152 = 3U;
	uint64_t t35 = 112416143LLU;

	t35 = ((x149/(x150|x151))+x152);

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	uint32_t x154 = 865U;
	int64_t x155 = 229587098970427070LL;
	uint16_t x156 = UINT16_MAX;
	static int64_t t36 = -5LL;

	t36 = ((x153/(x154|x155))+x156);

	if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x158 = 0;
	volatile uint8_t x159 = 15U;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t37 = 136385U;

	t37 = ((x157/(x158|x159))+x160);

	if (t37 != 242U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = 3U;
	int32_t x164 = INT32_MIN;

	t38 = ((x161/(x162|x163))+x164);

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -6;
	int16_t x168 = INT16_MAX;
	int32_t t39 = 135;

	t39 = ((x165/(x166|x167))+x168);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 93U;
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	static volatile int32_t x172 = INT32_MIN;
	int64_t t40 = 11024398LL;

	t40 = ((x169/(x170|x171))+x172);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x173 = 1917024525U;
	volatile uint8_t x175 = UINT8_MAX;
	uint32_t x176 = 245785U;
	volatile uint32_t t41 = 3862U;

	t41 = ((x173/(x174|x175))+x176);

	if (t41 != 245785U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x178 = 4;
	int64_t x180 = -1LL;
	volatile int64_t t42 = 36753064LL;

	t42 = ((x177/(x178|x179))+x180);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = 1;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = UINT16_MAX;
	uint64_t t43 = 803243421174LLU;

	t43 = ((x181/(x182|x183))+x184);

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 38279417U;
	int16_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 7U;
	volatile uint64_t t44 = 23170775LLU;

	t44 = ((x185/(x186|x187))+x188);

	if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x190 = -1LL;
	volatile uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	volatile int64_t t45 = -10859LL;

	t45 = ((x189/(x190|x191))+x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 3U;
	int32_t x194 = -117232027;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = ((x193/(x194|x195))+x196);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x198 = INT64_MIN;
	uint64_t x199 = 18791235LLU;
	uint16_t x200 = 1645U;
	uint64_t t47 = 5943551790331LLU;

	t47 = ((x197/(x198|x199))+x200);

	if (t47 != 1645LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t48 = ((x201/(x202|x203))+x204);

	if (t48 != -1339046771832LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	uint8_t x206 = 15U;
	uint16_t x207 = 5066U;
	int16_t x208 = -3;
	int32_t t49 = 101582370;

	t49 = ((x205/(x206|x207))+x208);

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	volatile uint64_t x210 = 5126693289652955254LLU;
	int8_t x211 = 0;
	static uint32_t x212 = 0U;
	volatile uint64_t t50 = 64417827637LLU;

	t50 = ((x209/(x210|x211))+x212);

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 4U;
	static int64_t x215 = -1LL;
	volatile uint64_t t51 = 2624703541849LLU;

	t51 = ((x213/(x214|x215))+x216);

	if (t51 != 848206174771526LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 37U;
	uint16_t x220 = 30708U;

	t52 = ((x217/(x218|x219))+x220);

	if (t52 != 30709LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	volatile int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	uint16_t x224 = 12U;
	int64_t t53 = 7534234917099LL;

	t53 = ((x221/(x222|x223))+x224);

	if (t53 != 12LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = 30;
	int32_t t54 = 202381;

	t54 = ((x225/(x226|x227))+x228);

	if (t54 != 286) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x229 = UINT8_MAX;
	static uint32_t x230 = 20U;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t55 = 6195432513511LLU;

	t55 = ((x229/(x230|x231))+x232);

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = -1;
	volatile int32_t t56 = 7568317;

	t56 = ((x233/(x234|x235))+x236);

	if (t56 != 55611889) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x238 = 1;
	volatile int64_t t57 = 3031610LL;

	t57 = ((x237/(x238|x239))+x240);

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = UINT32_MAX;
	int8_t x242 = INT8_MAX;
	int16_t x243 = -1;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t58 = 1289649U;

	t58 = ((x241/(x242|x243))+x244);

	if (t58 != 2147483649U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x245 = 2U;
	volatile int32_t x246 = INT32_MAX;
	uint8_t x248 = 0U;
	int32_t t59 = -403053541;

	t59 = ((x245/(x246|x247))+x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = 6;
	int32_t x251 = 61995;
	volatile int16_t x252 = INT16_MIN;
	volatile uint32_t t60 = 52357U;

	t60 = ((x249/(x250|x251))+x252);

	if (t60 != 4294934528U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 66U;
	static int64_t x255 = -1LL;
	int16_t x256 = INT16_MIN;
	int64_t t61 = -122658LL;

	t61 = ((x253/(x254|x255))+x256);

	if (t61 != -32834LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x258 = INT64_MAX;
	int32_t x260 = INT32_MAX;
	static int64_t t62 = -383614362593354LL;

	t62 = ((x257/(x258|x259))+x260);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = INT64_MAX;
	int16_t x262 = -1;
	volatile int64_t x263 = -1LL;
	uint32_t x264 = 7985347U;
	int64_t t63 = 244822987160602363LL;

	t63 = ((x261/(x262|x263))+x264);

	if (t63 != -9223372036846790460LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile int16_t x266 = 10392;
	volatile int64_t x267 = INT64_MAX;
	static volatile int64_t t64 = 179301982703771LL;

	t64 = ((x265/(x266|x267))+x268);

	if (t64 != -110950648LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x270 = UINT8_MAX;
	static int16_t x271 = 356;
	volatile int16_t x272 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x269/(x270|x271))+x272);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 37252530935LLU;
	int32_t x274 = INT32_MAX;
	volatile int8_t x275 = INT8_MAX;
	uint32_t x276 = 7U;
	uint64_t t66 = 57042604452205LLU;

	t66 = ((x273/(x274|x275))+x276);

	if (t66 != 24LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 1608793480107121LLU;
	uint16_t x278 = 8464U;
	static int64_t x279 = -1LL;
	int8_t x280 = -1;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x277/(x278|x279))+x280);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 8100U;
	int8_t x282 = INT8_MIN;
	volatile int64_t t68 = -3359820LL;

	t68 = ((x281/(x282|x283))+x284);

	if (t68 != 1522130790985001LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = -1;
	uint64_t x287 = 45LLU;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x285/(x286|x287))+x288);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 85U;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -1;

	t70 = ((x289/(x290|x291))+x292);

	if (t70 != -32853LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x293 = INT8_MIN;
	int32_t x294 = -1;
	static volatile uint8_t x295 = 1U;
	volatile int8_t x296 = INT8_MAX;
	int32_t t71 = 94698613;

	t71 = ((x293/(x294|x295))+x296);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 4946741;
	static int64_t x298 = -1034759580873LL;
	int8_t x299 = -3;
	uint64_t x300 = 168LLU;

	t72 = ((x297/(x298|x299))+x300);

	if (t72 != 18446744073704605043LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 827;
	uint8_t x302 = 11U;
	int32_t x303 = -173;
	static volatile int8_t x304 = -1;
	static volatile int32_t t73 = -15259;

	t73 = ((x301/(x302|x303))+x304);

	if (t73 != -6) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = 1;
	int8_t x306 = -1;
	int32_t x307 = -1;
	static volatile uint64_t x308 = 41940073LLU;
	static uint64_t t74 = 5016LLU;

	t74 = ((x305/(x306|x307))+x308);

	if (t74 != 41940072LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x311 = INT8_MIN;
	static volatile uint32_t t75 = 1099153U;

	t75 = ((x309/(x310|x311))+x312);

	if (t75 != 4294967040U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	int32_t x315 = -31557;
	int16_t x316 = INT16_MIN;
	int32_t t76 = 759781390;

	t76 = ((x313/(x314|x315))+x316);

	if (t76 != 35429) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = 14606;

	t77 = ((x317/(x318|x319))+x320);

	if (t77 != 14606LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -1;
	int64_t x323 = INT64_MIN;
	int32_t x324 = -1;
	static int64_t t78 = 500330LL;

	t78 = ((x321/(x322|x323))+x324);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = UINT32_MAX;
	uint16_t x326 = UINT16_MAX;
	volatile uint16_t x327 = 18U;
	uint16_t x328 = 68U;
	uint32_t t79 = 40620353U;

	t79 = ((x325/(x326|x327))+x328);

	if (t79 != 65605U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x329 = 0;
	volatile int64_t x330 = -1LL;
	int64_t x332 = INT64_MIN;
	int64_t t80 = INT64_MIN;

	t80 = ((x329/(x330|x331))+x332);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x333 = INT8_MIN;
	uint64_t x334 = UINT64_MAX;
	static volatile int32_t x336 = INT32_MIN;
	uint64_t t81 = 518600873LLU;

	t81 = ((x333/(x334|x335))+x336);

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x339 = 0U;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t82 = 3622324;

	t82 = ((x337/(x338|x339))+x340);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x341 = -2633LL;
	int64_t x342 = 66111612974034618LL;
	int8_t x343 = 0;
	volatile int16_t x344 = 6;

	t83 = ((x341/(x342|x343))+x344);

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = INT8_MAX;
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile uint64_t t84 = 22LLU;

	t84 = ((x345/(x346|x347))+x348);

	if (t84 != 4294967295LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x349 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	volatile int8_t x352 = 1;
	volatile int64_t t85 = 1LL;

	t85 = ((x349/(x350|x351))+x352);

	if (t85 != 17LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -1;
	static int64_t x354 = -268708634286LL;
	int8_t x355 = INT8_MIN;

	t86 = ((x353/(x354|x355))+x356);

	if (t86 != -4117573LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = -1;
	int32_t x358 = 953385;
	int16_t x359 = -2252;
	static uint32_t x360 = UINT32_MAX;

	t87 = ((x357/(x358|x359))+x360);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	static int32_t x362 = -1;
	static volatile uint64_t x363 = 541953375195LLU;
	int32_t x364 = 0;
	static uint64_t t88 = 58LLU;

	t88 = ((x361/(x362|x363))+x364);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = -31;
	int32_t x367 = 132528038;
	static int32_t t89 = 7145887;

	t89 = ((x365/(x366|x367))+x368);

	if (t89 != 260) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 16U;
	volatile int32_t x371 = -1;
	int32_t x372 = -2;
	uint32_t t90 = UINT32_MAX;

	t90 = ((x369/(x370|x371))+x372);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x374 = 173LLU;
	static volatile uint16_t x375 = 31244U;
	static int32_t x376 = 1;
	volatile uint64_t t91 = 221686LLU;

	t91 = ((x373/(x374|x375))+x376);

	if (t91 != 539331634LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x378 = 97453U;
	int32_t x380 = -1;
	static volatile uint32_t t92 = 5U;

	t92 = ((x377/(x378|x379))+x380);

	if (t92 != 16383U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x381 = 1U;
	static int8_t x382 = INT8_MIN;
	volatile int32_t x383 = INT32_MIN;
	uint8_t x384 = 2U;
	static int32_t t93 = -320136;

	t93 = ((x381/(x382|x383))+x384);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MAX;
	static int16_t x386 = -1863;
	static volatile uint64_t x387 = 3223086165524857LLU;
	int32_t x388 = INT32_MIN;
	uint64_t t94 = 1699276659928553340LLU;

	t94 = ((x385/(x386|x387))+x388);

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x389 = -1;
	int32_t x390 = 37539;

	t95 = ((x389/(x390|x391))+x392);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = -1;
	uint64_t x394 = 215314813892448LLU;
	int64_t x395 = INT64_MIN;
	int64_t x396 = -1LL;
	volatile uint64_t t96 = 1034LLU;

	t96 = ((x393/(x394|x395))+x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = -1;
	int16_t x398 = -34;
	static int32_t x399 = 587381;
	int64_t x400 = -24238001LL;
	volatile int64_t t97 = -46630090LL;

	t97 = ((x397/(x398|x399))+x400);

	if (t97 != -24238000LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 83715676U;
	volatile int64_t t98 = 13098611473LL;

	t98 = ((x401/(x402|x403))+x404);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 179307418;
	uint32_t x406 = 45320276U;
	static int16_t x408 = -182;
	uint32_t t99 = 0U;

	t99 = ((x405/(x406|x407))+x408);

	if (t99 != 4294967114U) { NG(); } else { ; }
	
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

