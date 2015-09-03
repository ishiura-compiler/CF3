#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 1U;
uint16_t x18 = UINT16_MAX;
volatile uint32_t x19 = 66601U;
int64_t x27 = -52455LL;
volatile int64_t t5 = -3878187608152982LL;
volatile int32_t x29 = 2;
uint16_t x30 = 7628U;
uint8_t x32 = 1U;
static int8_t x37 = -11;
static int64_t x38 = -14537965365LL;
int64_t x41 = -1LL;
volatile int64_t t9 = -5212449241LL;
int64_t x49 = -1LL;
volatile int32_t x50 = 718397;
int32_t x54 = 323391253;
uint8_t x56 = 0U;
uint64_t t11 = 5976195LLU;
uint64_t x60 = 3953094883922675LLU;
static volatile uint16_t x65 = UINT16_MAX;
static int16_t x72 = INT16_MIN;
static int16_t x81 = INT16_MIN;
volatile int64_t t17 = 12835433210LL;
volatile int64_t t19 = -14981100LL;
int64_t x115 = -437985LL;
volatile uint64_t t22 = 321LLU;
int32_t x125 = INT32_MAX;
static volatile int64_t x127 = INT64_MIN;
volatile uint32_t x139 = UINT32_MAX;
uint32_t x146 = UINT32_MAX;
int8_t x150 = -1;
uint64_t x152 = 89LLU;
int32_t x156 = INT32_MAX;
uint8_t x173 = 1U;
volatile int64_t x175 = -1LL;
int64_t x178 = -48147633879LL;
int64_t x181 = INT64_MIN;
volatile uint32_t t37 = 361U;
int32_t x196 = INT32_MIN;
int32_t x200 = 0;
int64_t x203 = INT64_MAX;
int16_t x209 = 878;
static int8_t x211 = 38;
volatile uint64_t t42 = 202905907LLU;
static uint64_t x223 = UINT64_MAX;
int64_t x233 = -1LL;
static int16_t x241 = -13435;
volatile int64_t t50 = 15419LL;
int8_t x253 = -1;
volatile int16_t x256 = 6;
uint64_t t51 = 2LLU;
uint16_t x259 = UINT16_MAX;
int64_t x274 = INT64_MAX;
volatile int8_t x279 = INT8_MIN;
int32_t x286 = -812445796;
int8_t x290 = -1;
int32_t x291 = -1;
int8_t x295 = -1;
static int32_t x297 = INT32_MIN;
int16_t x298 = -15;
uint8_t x312 = UINT8_MAX;
static int8_t x317 = INT8_MAX;
int64_t x319 = -159681LL;
volatile int64_t x322 = INT64_MAX;
uint64_t t67 = 11767576LLU;
int32_t x326 = INT32_MAX;
volatile int64_t t68 = 6774852347719743LL;
volatile int8_t x329 = INT8_MIN;
uint64_t x344 = UINT64_MAX;
volatile uint16_t x365 = 37U;
volatile uint64_t x370 = UINT64_MAX;
int32_t x371 = INT32_MIN;
volatile uint32_t t75 = 34U;
volatile uint32_t t76 = 79002907U;
volatile int16_t x420 = INT16_MIN;
int64_t x450 = INT64_MAX;
static volatile uint32_t x464 = 10966906U;
int8_t x471 = INT8_MAX;
int16_t x472 = INT16_MIN;
static int8_t x479 = 42;
int8_t x486 = 7;
uint64_t t91 = 531608164644598412LLU;
static volatile int32_t x489 = 6400964;
static int64_t x490 = -6277602698LL;
int8_t x491 = INT8_MIN;
int32_t x494 = INT32_MAX;
static uint16_t x496 = 364U;
volatile uint32_t x497 = 635870U;
int8_t x499 = INT8_MIN;
static int64_t t94 = -2034063742136LL;
uint64_t x501 = 96LLU;
static volatile uint64_t x507 = 12042LLU;
static uint64_t t96 = 87424254LLU;
int32_t x521 = INT32_MIN;
uint64_t x523 = 85478461609159LLU;


void f0(void) {
	uint32_t x1 = 19U;
	static uint64_t x2 = UINT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	int32_t x4 = 34;
	static volatile uint64_t t0 = 14870524047483LLU;

	t0 = ((x1/(x2&x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = INT8_MIN;
	uint16_t x11 = 1726U;
	static int64_t x12 = -1LL;
	volatile int64_t t1 = -3546753494109142481LL;

	t1 = ((x9/(x10&x11))&x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 1U;
	static volatile uint64_t x14 = 2010729397LLU;
	static uint32_t x15 = 144133U;
	uint32_t x16 = UINT32_MAX;
	volatile uint64_t t2 = 66LLU;

	t2 = ((x13/(x14&x15))&x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	static int8_t x20 = 10;
	volatile int64_t t3 = 8804721926508658LL;

	t3 = ((x17/(x18&x19))&x20);

	if (t3 != 10LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 2U;
	uint16_t x22 = UINT16_MAX;
	volatile int64_t x23 = 472101336553LL;
	int8_t x24 = -1;
	int64_t t4 = -128306481LL;

	t4 = ((x21/(x22&x23))&x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	int8_t x28 = -15;

	t5 = ((x25/(x26&x27))&x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x31 = 26784958;
	volatile int32_t t6 = -3;

	t6 = ((x29/(x30&x31))&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	int64_t x34 = -15599062195441007LL;
	static int64_t x35 = 20506304001LL;
	int16_t x36 = -1;
	volatile int64_t t7 = -5418359LL;

	t7 = ((x33/(x34&x35))&x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x39 = UINT32_MAX;
	int8_t x40 = 13;
	static int64_t t8 = 3907405LL;

	t8 = ((x37/(x38&x39))&x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x42 = 509;
	static uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = -1;

	t9 = ((x41/(x42&x43))&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x51 = INT8_MIN;
	static volatile int64_t x52 = -1LL;
	static volatile int64_t t10 = -6694880047601135LL;

	t10 = ((x49/(x50&x51))&x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = 6;
	uint64_t x55 = 1315448645LLU;

	t11 = ((x53/(x54&x55))&x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	volatile uint16_t x58 = UINT16_MAX;
	int16_t x59 = -105;
	uint64_t t12 = 3551886653668209636LLU;

	t12 = ((x57/(x58&x59))&x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x66 = 1255331U;
	volatile int8_t x67 = INT8_MAX;
	uint16_t x68 = 357U;
	uint32_t t13 = 65U;

	t13 = ((x65/(x66&x67))&x68);

	if (t13 != 320U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 991083934U;
	uint16_t x70 = 6960U;
	volatile uint32_t x71 = 627064328U;
	volatile uint32_t t14 = 15583U;

	t14 = ((x69/(x70&x71))&x72);

	if (t14 != 131072U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	static volatile uint8_t x74 = 1U;
	static int8_t x75 = -1;
	int64_t x76 = INT64_MAX;
	volatile int64_t t15 = 63663LL;

	t15 = ((x73/(x74&x75))&x76);

	if (t15 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	uint64_t x78 = 224500042LLU;
	uint16_t x79 = UINT16_MAX;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t16 = 5219601004LLU;

	t16 = ((x77/(x78&x79))&x80);

	if (t16 != 470076552512857LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = -2;
	int32_t x83 = -25881;
	int64_t x84 = INT64_MAX;

	t17 = ((x81/(x82&x83))&x84);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -30;
	volatile uint64_t x86 = 110683487751627942LLU;
	int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static uint64_t t18 = 9001314405425643023LLU;

	t18 = ((x85/(x86&x87))&x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x89 = 4U;
	int64_t x90 = -476054668644LL;
	volatile int32_t x91 = INT32_MAX;
	volatile int8_t x92 = INT8_MIN;

	t19 = ((x89/(x90&x91))&x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -3;
	static int16_t x98 = INT16_MIN;
	static int32_t x99 = INT32_MAX;
	static uint16_t x100 = 463U;
	static int32_t t20 = -1;

	t20 = ((x97/(x98&x99))&x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = 403105U;
	static int8_t x116 = -2;
	int64_t t21 = 27163LL;

	t21 = ((x113/(x114&x115))&x116);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	int64_t x120 = 55478LL;

	t22 = ((x117/(x118&x119))&x120);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MAX;
	uint16_t x122 = 7U;
	uint8_t x123 = 19U;
	int32_t x124 = -1;
	int32_t t23 = -559;

	t23 = ((x121/(x122&x123))&x124);

	if (t23 != 715827882) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MIN;
	int64_t t24 = 251428LL;

	t24 = ((x125/(x126&x127))&x128);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x133 = 1U;
	static int32_t x134 = INT32_MIN;
	static int8_t x135 = -1;
	int32_t x136 = INT32_MIN;
	int32_t t25 = -13367;

	t25 = ((x133/(x134&x135))&x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = -1;
	volatile int32_t x138 = -1;
	int16_t x140 = INT16_MAX;
	uint32_t t26 = 27114U;

	t26 = ((x137/(x138&x139))&x140);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = -13;
	static int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t27 = 451339751634LLU;

	t27 = ((x145/(x146&x147))&x148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 128158449696930LLU;
	volatile uint16_t x151 = 65U;
	static uint64_t t28 = 12643LLU;

	t28 = ((x149/(x150&x151))&x152);

	if (t28 != 9LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x153 = INT8_MAX;
	static int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MIN;
	static int32_t t29 = -5;

	t29 = ((x153/(x154&x155))&x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x157 = 583;
	static int64_t x158 = 301LL;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = 3869U;
	static volatile int64_t t30 = -276965601LL;

	t30 = ((x157/(x158&x159))&x160);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x161 = 11U;
	int8_t x162 = 12;
	static int8_t x163 = INT8_MAX;
	volatile int8_t x164 = 4;
	volatile int32_t t31 = -847686580;

	t31 = ((x161/(x162&x163))&x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x165 = 1182640362U;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = -2781;
	int8_t x168 = -45;
	volatile uint64_t t32 = 868747649350448418LLU;

	t32 = ((x165/(x166&x167))&x168);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x174 = UINT64_MAX;
	uint32_t x176 = UINT32_MAX;
	static uint64_t t33 = 144569LLU;

	t33 = ((x173/(x174&x175))&x176);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MIN;
	volatile int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	int64_t t34 = -33660487323LL;

	t34 = ((x177/(x178&x179))&x180);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x182 = INT32_MIN;
	volatile int32_t x183 = -6362;
	volatile int64_t x184 = -1LL;
	int64_t t35 = 11LL;

	t35 = ((x181/(x182&x183))&x184);

	if (t35 != 4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = UINT64_MAX;
	static int32_t x186 = 844910301;
	int32_t x187 = -1;
	volatile uint64_t x188 = 32172713357LLU;
	uint64_t t36 = 999898614LLU;

	t36 = ((x185/(x186&x187))&x188);

	if (t36 != 21827452941LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = 241766U;
	static uint16_t x191 = 88U;
	volatile int16_t x192 = 1;

	t37 = ((x189/(x190&x191))&x192);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = 461629349379076LLU;
	static int32_t x194 = -234500;
	static int8_t x195 = INT8_MIN;
	volatile uint64_t t38 = 341731359325009LLU;

	t38 = ((x193/(x194&x195))&x196);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = -184;
	uint32_t x198 = 16984509U;
	int64_t x199 = -1LL;
	static int64_t t39 = -16481LL;

	t39 = ((x197/(x198&x199))&x200);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -831;
	int64_t x202 = 53890446131943450LL;
	static volatile uint16_t x204 = UINT16_MAX;
	int64_t t40 = -2887937050305158LL;

	t40 = ((x201/(x202&x203))&x204);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x210 = INT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int64_t t41 = 58429892559508LL;

	t41 = ((x209/(x210&x211))&x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x213 = INT64_MIN;
	int32_t x214 = -8;
	static uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MIN;

	t42 = ((x213/(x214&x215))&x216);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 17LLU;
	volatile uint64_t t43 = 29014LLU;

	t43 = ((x217/(x218&x219))&x220);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = INT64_MAX;
	static int64_t x222 = INT64_MAX;
	int16_t x224 = -164;
	static volatile uint64_t t44 = 0LLU;

	t44 = ((x221/(x222&x223))&x224);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x225 = 14U;
	volatile int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	int32_t x228 = INT32_MIN;
	int64_t t45 = 6391LL;

	t45 = ((x225/(x226&x227))&x228);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = 46027048LL;
	volatile int16_t x232 = INT16_MIN;
	volatile int64_t t46 = 31LL;

	t46 = ((x229/(x230&x231))&x232);

	if (t46 != -200390279168LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x234 = -3403;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	int64_t t47 = -2614LL;

	t47 = ((x233/(x234&x235))&x236);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x237 = 27927U;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = INT64_MAX;
	static uint16_t x240 = UINT16_MAX;
	static volatile int64_t t48 = -11LL;

	t48 = ((x237/(x238&x239))&x240);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x242 = 6U;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;
	int32_t t49 = 233967869;

	t49 = ((x241/(x242&x243))&x244);

	if (t49 != -2304) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 10610849227362LL;
	static int8_t x251 = -1;
	int64_t x252 = -3667LL;

	t50 = ((x249/(x250&x251))&x252);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x254 = 3LLU;
	uint16_t x255 = 1281U;

	t51 = ((x253/(x254&x255))&x256);

	if (t51 != 6LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x260 = 57;
	volatile int32_t t52 = 125;

	t52 = ((x257/(x258&x259))&x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	static int8_t x262 = INT8_MIN;
	static int64_t x263 = -7585380330LL;
	static int64_t x264 = INT64_MIN;
	static volatile int64_t t53 = -38LL;

	t53 = ((x261/(x262&x263))&x264);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MIN;
	volatile int64_t x266 = 31700955683LL;
	static int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	volatile int64_t t54 = 158632133204702752LL;

	t54 = ((x265/(x266&x267))&x268);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = -7434LL;
	uint8_t x270 = 1U;
	int16_t x271 = 1;
	int64_t x272 = INT64_MAX;
	volatile int64_t t55 = -6165592LL;

	t55 = ((x269/(x270&x271))&x272);

	if (t55 != 9223372036854768374LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x273 = 9U;
	int16_t x275 = 1;
	uint64_t x276 = 44347442LLU;
	volatile uint64_t t56 = 47LLU;

	t56 = ((x273/(x274&x275))&x276);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x277 = INT16_MAX;
	int64_t x278 = -13145021237996319LL;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t57 = 26940LL;

	t57 = ((x277/(x278&x279))&x280);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x287 = 6U;
	uint16_t x288 = 4U;
	int64_t t58 = -1919816690537549680LL;

	t58 = ((x285/(x286&x287))&x288);

	if (t58 != 4LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = 0;
	static volatile int64_t x292 = -436925LL;
	int64_t t59 = -2604864598LL;

	t59 = ((x289/(x290&x291))&x292);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x293 = 450373U;
	int64_t x294 = 334214249853084LL;
	static uint8_t x296 = 6U;
	int64_t t60 = -67547LL;

	t60 = ((x293/(x294&x295))&x296);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x299 = INT8_MIN;
	static volatile int32_t x300 = INT32_MAX;
	int32_t t61 = 14803493;

	t61 = ((x297/(x298&x299))&x300);

	if (t61 != 16777216) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = INT64_MAX;
	uint16_t x302 = 20U;
	uint64_t x303 = 20789961256851LLU;
	uint32_t x304 = UINT32_MAX;
	volatile uint64_t t62 = 34385719990348LLU;

	t62 = ((x301/(x302&x303))&x304);

	if (t62 != 4294967295LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = 62398;
	int64_t x306 = -1LL;
	static uint8_t x307 = 2U;
	uint16_t x308 = 530U;
	volatile int64_t t63 = -38283099LL;

	t63 = ((x305/(x306&x307))&x308);

	if (t63 != 18LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = -3;
	static volatile int32_t x311 = -1;
	volatile int32_t t64 = 0;

	t64 = ((x309/(x310&x311))&x312);

	if (t64 != 42) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int16_t x315 = 396;
	int32_t x316 = -1;
	int64_t t65 = 0LL;

	t65 = ((x313/(x314&x315))&x316);

	if (t65 != -23291343527411050LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x318 = INT16_MIN;
	uint64_t x320 = 9287583516LLU;
	uint64_t t66 = 365455273LLU;

	t66 = ((x317/(x318&x319))&x320);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = 1U;
	static uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;

	t67 = ((x321/(x322&x323))&x324);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = -1LL;
	int8_t x327 = INT8_MIN;
	volatile int32_t x328 = INT32_MAX;

	t68 = ((x325/(x326&x327))&x328);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x330 = INT8_MAX;
	int32_t x331 = 6060;
	int32_t x332 = INT32_MAX;
	static int32_t t69 = 9135;

	t69 = ((x329/(x330&x331))&x332);

	if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = 554;
	volatile uint16_t x334 = UINT16_MAX;
	int64_t x335 = -480830891LL;
	int32_t x336 = 12;
	volatile int64_t t70 = -4336751LL;

	t70 = ((x333/(x334&x335))&x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = -885883502LL;
	static uint16_t x343 = 134U;
	volatile uint64_t t71 = 91446399340LLU;

	t71 = ((x341/(x342&x343))&x344);

	if (t71 != 18446744073693032512LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -19;
	int64_t x364 = -15LL;
	volatile int64_t t72 = -71616652121775504LL;

	t72 = ((x361/(x362&x363))&x364);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = -6;
	int64_t x368 = INT64_MIN;
	int64_t t73 = 1017929685952LL;

	t73 = ((x365/(x366&x367))&x368);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x369 = UINT32_MAX;
	static uint64_t x372 = 7147548278152LLU;
	uint64_t t74 = 1223197LLU;

	t74 = ((x369/(x370&x371))&x372);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x373 = 655U;
	int16_t x374 = 252;
	int8_t x375 = -1;
	int8_t x376 = INT8_MAX;

	t75 = ((x373/(x374&x375))&x376);

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x389 = -1;
	uint32_t x390 = 4U;
	int32_t x391 = -1;
	uint16_t x392 = UINT16_MAX;

	t76 = ((x389/(x390&x391))&x392);

	if (t76 != 65535U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = -71594;
	int8_t x395 = INT8_MAX;
	uint16_t x396 = 203U;
	volatile int32_t t77 = 36;

	t77 = ((x393/(x394&x395))&x396);

	if (t77 != 203) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = -1;
	static uint32_t x410 = 44575U;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t78 = 970417LLU;

	t78 = ((x409/(x410&x411))&x412);

	if (t78 != 131071LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x417 = -494688;
	uint16_t x418 = UINT16_MAX;
	volatile uint64_t x419 = 16135224LLU;
	uint64_t t79 = 200120585917770128LLU;

	t79 = ((x417/(x418&x419))&x420);

	if (t79 != 1379918018674688LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x425 = -144481021;
	int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MAX;
	static uint32_t x428 = 1760291923U;
	uint32_t t80 = 7255U;

	t80 = ((x425/(x426&x427))&x428);

	if (t80 != 1760291858U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x429 = 2703U;
	uint16_t x430 = 3U;
	int32_t x431 = 17332554;
	uint16_t x432 = UINT16_MAX;
	static volatile int32_t t81 = 291893;

	t81 = ((x429/(x430&x431))&x432);

	if (t81 != 1351) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x433 = 113U;
	uint16_t x434 = 8743U;
	int8_t x435 = INT8_MIN;
	volatile uint32_t x436 = UINT32_MAX;
	volatile uint32_t t82 = 216038577U;

	t82 = ((x433/(x434&x435))&x436);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x437 = 2;
	uint32_t x438 = 6388525U;
	int8_t x439 = 15;
	volatile int32_t x440 = -409481;
	uint32_t t83 = 761U;

	t83 = ((x437/(x438&x439))&x440);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = 2960U;
	uint16_t x451 = 51U;
	int64_t x452 = -60LL;
	volatile int64_t t84 = 447228LL;

	t84 = ((x449/(x450&x451))&x452);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x457 = UINT8_MAX;
	uint8_t x458 = 37U;
	static int8_t x459 = INT8_MAX;
	uint16_t x460 = 15574U;
	volatile int32_t t85 = 18644;

	t85 = ((x457/(x458&x459))&x460);

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x461 = 3;
	volatile uint16_t x462 = 2097U;
	static uint32_t x463 = UINT32_MAX;
	static volatile uint32_t t86 = 29718U;

	t86 = ((x461/(x462&x463))&x464);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x469 = INT64_MIN;
	static int64_t x470 = -2LL;
	int64_t t87 = 0LL;

	t87 = ((x469/(x470&x471))&x472);

	if (t87 != -73201365371879424LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = 1214552696981199327LL;
	uint64_t x474 = 1865296965LLU;
	uint8_t x475 = 13U;
	int16_t x476 = INT16_MAX;
	uint64_t t88 = 0LLU;

	t88 = ((x473/(x474&x475))&x476);

	if (t88 != 20985LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -20;
	volatile int64_t x478 = -1LL;
	volatile uint16_t x480 = 38U;
	volatile int64_t t89 = -1571551LL;

	t89 = ((x477/(x478&x479))&x480);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x481 = 1U;
	uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MIN;
	static uint32_t x484 = 3613U;
	static volatile uint32_t t90 = 0U;

	t90 = ((x481/(x482&x483))&x484);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x485 = -6;
	int64_t x487 = -1LL;
	uint64_t x488 = UINT64_MAX;

	t91 = ((x485/(x486&x487))&x488);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x492 = -1;
	volatile int64_t t92 = 13839962929107LL;

	t92 = ((x489/(x490&x491))&x492);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = UINT16_MAX;
	int32_t x495 = 3;
	static int32_t t93 = 129860948;

	t93 = ((x493/(x494&x495))&x496);

	if (t93 != 324) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x498 = -1LL;
	uint8_t x500 = 7U;

	t94 = ((x497/(x498&x499))&x500);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x502 = INT32_MAX;
	int8_t x503 = -1;
	static int8_t x504 = INT8_MAX;
	volatile uint64_t t95 = 128977930425745566LLU;

	t95 = ((x501/(x502&x503))&x504);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x505 = INT16_MAX;
	static int64_t x506 = -1965910640LL;
	int8_t x508 = INT8_MAX;

	t96 = ((x505/(x506&x507))&x508);

	if (t96 != 25LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x513 = 181896U;
	uint32_t x514 = UINT32_MAX;
	int8_t x515 = -1;
	uint16_t x516 = UINT16_MAX;
	static volatile uint32_t t97 = 717U;

	t97 = ((x513/(x514&x515))&x516);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x517 = INT8_MIN;
	uint16_t x518 = UINT16_MAX;
	volatile int8_t x519 = INT8_MIN;
	uint64_t x520 = 3597596LLU;
	volatile uint64_t t98 = 121821988LLU;

	t98 = ((x517/(x518&x519))&x520);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x522 = INT16_MIN;
	int16_t x524 = 28;
	volatile uint64_t t99 = 38696LLU;

	t99 = ((x521/(x522&x523))&x524);

	if (t99 != 28LLU) { NG(); } else { ; }
	
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

