#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int32_t x7 = -12151932;
int16_t x31 = INT16_MAX;
int32_t t7 = -1;
uint16_t x36 = 473U;
static uint8_t x44 = UINT8_MAX;
int32_t t10 = -8;
static volatile uint64_t t11 = 1003405029549902068LLU;
uint64_t x52 = UINT64_MAX;
int8_t x54 = INT8_MIN;
volatile int32_t t15 = -2;
uint16_t x68 = UINT16_MAX;
volatile uint16_t x76 = 31U;
int32_t t19 = -612008526;
static uint32_t x81 = 75619750U;
int32_t x85 = INT32_MAX;
volatile int32_t t21 = 48717305;
int8_t x95 = INT8_MIN;
volatile uint32_t t25 = 15233U;
int64_t x109 = -36037589898970LL;
uint64_t x114 = UINT64_MAX;
volatile int32_t t27 = 57752039;
volatile int32_t t29 = 6;
volatile int16_t x125 = 21;
static int64_t x129 = INT64_MIN;
int32_t x136 = INT32_MIN;
volatile int16_t x144 = INT16_MIN;
uint32_t x147 = 32011U;
int64_t t34 = -273837227037254199LL;
int8_t x151 = INT8_MIN;
uint32_t x155 = UINT32_MAX;
int8_t x165 = INT8_MAX;
int32_t x166 = 2105;
int32_t x167 = -26263416;
uint8_t x175 = 8U;
int8_t x193 = INT8_MIN;
uint16_t x195 = 23691U;
int16_t x196 = INT16_MAX;
volatile uint64_t x198 = 5947524LLU;
uint64_t x203 = UINT64_MAX;
uint32_t x210 = 133998U;
volatile int64_t x216 = -1LL;
int64_t t48 = 14LL;
int16_t x222 = INT16_MIN;
int32_t x234 = -475;
int16_t x235 = -1;
int16_t x248 = -16164;
int64_t x249 = INT64_MIN;
int32_t t55 = 1720;
int8_t x253 = 6;
volatile uint64_t t58 = 100629995683LLU;
int64_t x285 = -799238520LL;
static volatile int64_t t65 = 40LL;
int32_t x297 = -1;
volatile uint8_t x299 = UINT8_MAX;
int32_t t67 = INT32_MIN;
int64_t x310 = 0LL;
uint8_t x318 = 5U;
int32_t x322 = 461937742;
static int32_t x324 = INT32_MIN;
uint64_t x326 = 24LLU;
uint16_t x331 = 7U;
int16_t x334 = INT16_MAX;
int16_t x336 = -1;
volatile int32_t x338 = 0;
uint16_t x339 = UINT16_MAX;
static int32_t t77 = -411057;
int32_t x341 = INT32_MAX;
int8_t x347 = -1;
uint16_t x350 = UINT16_MAX;
uint8_t x357 = 3U;
int64_t x361 = INT64_MIN;
uint32_t x362 = UINT32_MAX;
uint64_t x367 = UINT64_MAX;
int16_t x371 = INT16_MIN;
int64_t t86 = 5258723LL;
int8_t x382 = 1;
volatile int32_t t89 = 951922607;
volatile int32_t x389 = -1;
int64_t x391 = 113LL;
volatile int32_t x396 = -973;
uint8_t x399 = 2U;
int16_t x405 = 1;
int64_t x409 = INT64_MIN;
int64_t x411 = 629994896481LL;
uint64_t x413 = 3679304LLU;
int64_t x419 = -1040759945LL;
volatile uint64_t t96 = 133561242002099820LLU;
int8_t x422 = INT8_MIN;
int16_t x424 = INT16_MIN;
int32_t t97 = 12;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = 7821;
	volatile int8_t x3 = -1;
	uint32_t t0 = 2140491178U;

	t0 = ((x1<=(x2+x3))+x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -1906159;

	t1 = ((x5<=(x6+x7))+x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint8_t x10 = 9U;
	int64_t x11 = -1LL;
	int32_t x12 = 82;
	static volatile int32_t t2 = 4430966;

	t2 = ((x9<=(x10+x11))+x12);

	if (t2 != 82) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 7U;
	volatile int64_t x14 = 21446LL;
	uint32_t x15 = UINT32_MAX;
	uint32_t x16 = 6242U;
	volatile uint32_t t3 = 15686U;

	t3 = ((x13<=(x14+x15))+x16);

	if (t3 != 6243U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 33U;
	uint8_t x18 = UINT8_MAX;
	volatile int32_t x19 = -55463893;
	volatile int16_t x20 = 1;
	volatile int32_t t4 = 0;

	t4 = ((x17<=(x18+x19))+x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 1788604750577511687LLU;
	static uint64_t t5 = 54349943511496LLU;

	t5 = ((x21<=(x22+x23))+x24);

	if (t5 != 1788604750577511687LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	static int32_t t6 = -33133701;

	t6 = ((x25<=(x26+x27))+x28);

	if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 13158U;
	int64_t x30 = -1LL;
	uint8_t x32 = UINT8_MAX;

	t7 = ((x29<=(x30+x31))+x32);

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 402U;
	int32_t x35 = -30937388;
	volatile int32_t t8 = -615;

	t8 = ((x33<=(x34+x35))+x36);

	if (t8 != 474) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1153303U;
	int16_t x38 = INT16_MAX;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MIN;
	int64_t t9 = INT64_MIN;

	t9 = ((x37<=(x38+x39))+x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = 174607LL;
	static uint32_t x43 = 200390799U;

	t10 = ((x41<=(x42+x43))+x44);

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -418299919;
	static int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	volatile uint64_t x48 = 127550922332149492LLU;

	t11 = ((x45<=(x46+x47))+x48);

	if (t11 != 127550922332149493LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 8U;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x49<=(x50+x51))+x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 5LL;
	static volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = 734LL;

	t13 = ((x53<=(x54+x55))+x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = 53;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -25;

	t14 = ((x57<=(x58+x59))+x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 49U;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = 6826U;
	static int8_t x64 = -1;

	t15 = ((x61<=(x62+x63))+x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = 497LLU;
	int32_t t16 = 10;

	t16 = ((x65<=(x66+x67))+x68);

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	static int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -7;

	t17 = ((x69<=(x70+x71))+x72);

	if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 8024841349LL;
	uint16_t x74 = 341U;
	int64_t x75 = -1LL;
	static volatile int32_t t18 = 0;

	t18 = ((x73<=(x74+x75))+x76);

	if (t18 != 31) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int16_t x78 = -1;
	volatile int8_t x79 = INT8_MIN;
	int8_t x80 = 1;

	t19 = ((x77<=(x78+x79))+x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	volatile int32_t t20 = 55;

	t20 = ((x81<=(x82+x83))+x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = UINT16_MAX;
	uint64_t x87 = 10LLU;
	int16_t x88 = -84;

	t21 = ((x85<=(x86+x87))+x88);

	if (t21 != -84) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = 403936;

	t22 = ((x89<=(x90+x91))+x92);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	uint64_t x94 = UINT64_MAX;
	int32_t x96 = 62;
	int32_t t23 = -154;

	t23 = ((x93<=(x94+x95))+x96);

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 55979829986640988LL;
	uint32_t x98 = 155U;
	int32_t x99 = -10136;
	int8_t x100 = -1;
	volatile int32_t t24 = -1384358;

	t24 = ((x97<=(x98+x99))+x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 38771182101968LLU;
	int32_t x106 = INT32_MAX;
	int16_t x107 = -46;
	uint32_t x108 = 29784U;

	t25 = ((x105<=(x106+x107))+x108);

	if (t25 != 29784U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x110 = INT64_MIN;
	int64_t x111 = 124504268178LL;
	int64_t x112 = -399892496045355217LL;
	int64_t t26 = 4LL;

	t26 = ((x109<=(x110+x111))+x112);

	if (t26 != -399892496045355217LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 59423U;
	uint32_t x115 = 52576265U;
	int32_t x116 = 12;

	t27 = ((x113<=(x114+x115))+x116);

	if (t27 != 13) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	uint64_t x118 = 7829119812707LLU;
	uint8_t x119 = 1U;
	static int32_t x120 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

	t28 = ((x117<=(x118+x119))+x120);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1LL;
	uint64_t x122 = 66142738648693071LLU;
	int64_t x123 = 0LL;
	int32_t x124 = 52145;

	t29 = ((x121<=(x122+x123))+x124);

	if (t29 != 52145) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x126 = INT32_MAX;
	uint64_t x127 = 0LLU;
	int8_t x128 = INT8_MIN;
	int32_t t30 = 1;

	t30 = ((x125<=(x126+x127))+x128);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x130 = 0U;
	int64_t x131 = 7805280LL;
	int32_t x132 = -1;
	volatile int32_t t31 = -11259033;

	t31 = ((x129<=(x130+x131))+x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 124U;
	static int16_t x134 = -1;
	static volatile uint8_t x135 = 40U;
	volatile int32_t t32 = INT32_MIN;

	t32 = ((x133<=(x134+x135))+x136);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -3169;
	static uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 71U;
	volatile int32_t t33 = -45;

	t33 = ((x141<=(x142+x143))+x144);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -33255413652599LL;
	int16_t x146 = INT16_MAX;
	int64_t x148 = -1LL;

	t34 = ((x145<=(x146+x147))+x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	static uint16_t x150 = 132U;
	int16_t x152 = INT16_MAX;
	int32_t t35 = -86082458;

	t35 = ((x149<=(x150+x151))+x152);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	uint32_t x156 = 251134182U;
	static uint32_t t36 = 1976262U;

	t36 = ((x153<=(x154+x155))+x156);

	if (t36 != 251134183U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 8094U;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = -2707201;
	static uint64_t x160 = 800867717614LLU;
	volatile uint64_t t37 = 49514LLU;

	t37 = ((x157<=(x158+x159))+x160);

	if (t37 != 800867717615LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = -1;
	static int32_t x164 = -1;
	static volatile int32_t t38 = 0;

	t38 = ((x161<=(x162+x163))+x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x168 = INT32_MIN;
	static int32_t t39 = INT32_MIN;

	t39 = ((x165<=(x166+x167))+x168);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -1;
	int64_t x170 = 1123113LL;
	uint8_t x171 = 10U;
	volatile int64_t x172 = INT64_MIN;
	int64_t t40 = -3192LL;

	t40 = ((x169<=(x170+x171))+x172);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x173 = 30U;
	int64_t x174 = INT64_MIN;
	uint32_t x176 = 10735U;
	uint32_t t41 = 1304U;

	t41 = ((x173<=(x174+x175))+x176);

	if (t41 != 10735U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	int32_t x182 = 0;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t42 = 1;

	t42 = ((x181<=(x182+x183))+x184);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int32_t x190 = -1;
	volatile int16_t x191 = INT16_MIN;
	int32_t x192 = -15440;
	volatile int32_t t43 = -74;

	t43 = ((x189<=(x190+x191))+x192);

	if (t43 != -15440) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x194 = -4LL;
	volatile int32_t t44 = -1;

	t44 = ((x193<=(x194+x195))+x196);

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MAX;
	volatile uint8_t x199 = 45U;
	volatile int64_t x200 = 88446LL;
	volatile int64_t t45 = -6409533836014LL;

	t45 = ((x197<=(x198+x199))+x200);

	if (t45 != 88446LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 19LLU;
	uint8_t x202 = 3U;
	int16_t x204 = -1;
	static int32_t t46 = 1;

	t46 = ((x201<=(x202+x203))+x204);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = INT8_MAX;
	int32_t x211 = -2142;
	uint32_t x212 = 4484U;
	volatile uint32_t t47 = 14004U;

	t47 = ((x209<=(x210+x211))+x212);

	if (t47 != 4485U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 126464523043817371LLU;
	static int8_t x214 = INT8_MIN;
	int64_t x215 = -97797438LL;

	t48 = ((x213<=(x214+x215))+x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -1;
	int64_t x218 = -4362618363032985571LL;
	int8_t x219 = -21;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = ((x217<=(x218+x219))+x220);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = 1;
	uint8_t x223 = 4U;
	uint8_t x224 = 1U;
	int32_t t50 = -252697473;

	t50 = ((x221<=(x222+x223))+x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t51 = 1006;

	t51 = ((x233<=(x234+x235))+x236);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile int32_t x238 = INT32_MIN;
	int8_t x239 = 0;
	static uint16_t x240 = 5386U;
	int32_t t52 = 119739078;

	t52 = ((x237<=(x238+x239))+x240);

	if (t52 != 5387) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 14918U;
	int32_t x242 = INT32_MIN;
	static int64_t x243 = -3599510943LL;
	int32_t x244 = -1;
	volatile int32_t t53 = 69;

	t53 = ((x241<=(x242+x243))+x244);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = 420;
	uint16_t x246 = 11U;
	uint32_t x247 = 5203U;
	int32_t t54 = -1503111;

	t54 = ((x245<=(x246+x247))+x248);

	if (t54 != -16163) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x250 = -1LL;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -26;

	t55 = ((x249<=(x250+x251))+x252);

	if (t55 != -25) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = 2074940038900490LL;
	uint64_t x255 = 13039187026516420LLU;
	int32_t x256 = 4161923;
	static volatile int32_t t56 = 15872337;

	t56 = ((x253<=(x254+x255))+x256);

	if (t56 != 4161924) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 1458U;
	static int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = UINT32_MAX;
	uint32_t t57 = 234004U;

	t57 = ((x257<=(x258+x259))+x260);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x261 = INT64_MIN;
	uint8_t x262 = 5U;
	volatile int16_t x263 = INT16_MAX;
	static uint64_t x264 = 10226559276390798LLU;

	t58 = ((x261<=(x262+x263))+x264);

	if (t58 != 10226559276390799LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MAX;
	uint32_t x266 = 233270814U;
	int16_t x267 = 0;
	int64_t x268 = INT64_MIN;
	static volatile int64_t t59 = -1887301LL;

	t59 = ((x265<=(x266+x267))+x268);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x269 = 3068U;
	uint32_t x270 = 441577303U;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t60 = 35189500;

	t60 = ((x269<=(x270+x271))+x272);

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	int64_t x276 = 7620306871LL;
	static volatile int64_t t61 = 2202326010861771LL;

	t61 = ((x273<=(x274+x275))+x276);

	if (t61 != 7620306871LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x277 = -1;
	static uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MAX;
	int16_t x280 = 256;
	int32_t t62 = 831196307;

	t62 = ((x277<=(x278+x279))+x280);

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	uint64_t x283 = 6411489288220568LLU;
	uint16_t x284 = UINT16_MAX;
	int32_t t63 = -393376;

	t63 = ((x281<=(x282+x283))+x284);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x286 = 55573057489197LLU;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	volatile int32_t t64 = -9016;

	t64 = ((x285<=(x286+x287))+x288);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = 80U;
	volatile int8_t x291 = INT8_MIN;
	volatile int64_t x292 = 1247LL;

	t65 = ((x289<=(x290+x291))+x292);

	if (t65 != 1248LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = -3451;
	static int8_t x294 = INT8_MIN;
	uint16_t x295 = 65U;
	volatile uint32_t x296 = 5559U;
	uint32_t t66 = 1951380U;

	t66 = ((x293<=(x294+x295))+x296);

	if (t66 != 5560U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x298 = INT16_MIN;
	int32_t x300 = INT32_MIN;

	t67 = ((x297<=(x298+x299))+x300);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = 1368;
	int32_t x302 = -1;
	int16_t x303 = 2033;
	int64_t x304 = -2562298947088LL;
	int64_t t68 = 87322255478298693LL;

	t68 = ((x301<=(x302+x303))+x304);

	if (t68 != -2562298947087LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	int16_t x308 = -1;
	volatile int32_t t69 = 13488;

	t69 = ((x305<=(x306+x307))+x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	int16_t x312 = INT16_MAX;
	volatile int32_t t70 = 38895;

	t70 = ((x309<=(x310+x311))+x312);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = -1;
	int32_t x314 = -1;
	int16_t x315 = -2402;
	uint16_t x316 = 3U;
	volatile int32_t t71 = 24;

	t71 = ((x313<=(x314+x315))+x316);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = 0;
	uint16_t x319 = UINT16_MAX;
	volatile uint32_t x320 = 76096U;
	volatile uint32_t t72 = 432700546U;

	t72 = ((x317<=(x318+x319))+x320);

	if (t72 != 76097U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x321 = 55U;
	int32_t x323 = 129311816;
	static volatile int32_t t73 = -3040487;

	t73 = ((x321<=(x322+x323))+x324);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	volatile uint64_t x327 = UINT64_MAX;
	int64_t x328 = -1801855LL;
	volatile int64_t t74 = 1440499954251957433LL;

	t74 = ((x325<=(x326+x327))+x328);

	if (t74 != -1801855LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -5847695646105782LL;
	int8_t x330 = 20;
	int32_t x332 = -2932;
	static volatile int32_t t75 = -183383075;

	t75 = ((x329<=(x330+x331))+x332);

	if (t75 != -2931) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	int64_t x335 = -1044801067467982LL;
	int32_t t76 = 5730916;

	t76 = ((x333<=(x334+x335))+x336);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x337 = 0;
	int16_t x340 = -1;

	t77 = ((x337<=(x338+x339))+x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = 4653;
	int8_t x343 = -1;
	int8_t x344 = -1;
	volatile int32_t t78 = -1777948;

	t78 = ((x341<=(x342+x343))+x344);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = 2U;
	uint32_t x346 = 142U;
	int64_t x348 = -2150606485549809328LL;
	int64_t t79 = -1480LL;

	t79 = ((x345<=(x346+x347))+x348);

	if (t79 != -2150606485549809327LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 3U;
	static int16_t x351 = 100;
	int64_t x352 = -4266087726168682LL;
	static int64_t t80 = 529544075LL;

	t80 = ((x349<=(x350+x351))+x352);

	if (t80 != -4266087726168681LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = -4;
	static uint64_t x354 = UINT64_MAX;
	int8_t x355 = -1;
	volatile int32_t x356 = -307670;
	volatile int32_t t81 = -66;

	t81 = ((x353<=(x354+x355))+x356);

	if (t81 != -307669) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x358 = -23837;
	static int32_t x359 = -1;
	int64_t x360 = INT64_MAX;
	int64_t t82 = INT64_MAX;

	t82 = ((x357<=(x358+x359))+x360);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t83 = 2;

	t83 = ((x361<=(x362+x363))+x364);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = 28063U;
	int16_t x366 = -263;
	int64_t x368 = -1LL;
	int64_t t84 = 1783951638862749LL;

	t84 = ((x365<=(x366+x367))+x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	static volatile uint8_t x372 = 18U;
	volatile int32_t t85 = 124;

	t85 = ((x369<=(x370+x371))+x372);

	if (t85 != 18) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	static int32_t x375 = INT32_MAX;
	int64_t x376 = 59395375766295LL;

	t86 = ((x373<=(x374+x375))+x376);

	if (t86 != 59395375766296LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MAX;
	volatile int64_t x378 = INT64_MIN;
	uint16_t x379 = UINT16_MAX;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t87 = INT32_MIN;

	t87 = ((x377<=(x378+x379))+x380);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x381 = INT32_MIN;
	int64_t x383 = 3451244647465264433LL;
	int64_t x384 = -546485LL;
	int64_t t88 = -400586293097510328LL;

	t88 = ((x381<=(x382+x383))+x384);

	if (t88 != -546484LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = -15;

	t89 = ((x385<=(x386+x387))+x388);

	if (t89 != -15) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x390 = INT32_MIN;
	static int8_t x392 = INT8_MAX;
	int32_t t90 = 58;

	t90 = ((x389<=(x390+x391))+x392);

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = -1;
	uint16_t x394 = 0U;
	uint16_t x395 = 39U;
	int32_t t91 = -6359;

	t91 = ((x393<=(x394+x395))+x396);

	if (t91 != -972) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = -1;
	int32_t x398 = 23862418;
	static uint8_t x400 = 3U;
	int32_t t92 = 756;

	t92 = ((x397<=(x398+x399))+x400);

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x406 = UINT8_MAX;
	int32_t x407 = INT32_MIN;
	static uint32_t x408 = 3634478U;
	uint32_t t93 = 12757U;

	t93 = ((x405<=(x406+x407))+x408);

	if (t93 != 3634478U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x410 = 44U;
	int8_t x412 = -1;
	volatile int32_t t94 = -369399230;

	t94 = ((x409<=(x410+x411))+x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x414 = 98847153584968087LLU;
	int64_t x415 = INT64_MIN;
	int16_t x416 = -1;
	volatile int32_t t95 = -31;

	t95 = ((x413<=(x414+x415))+x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MAX;
	uint16_t x418 = 0U;
	uint64_t x420 = 4195782795251585LLU;

	t96 = ((x417<=(x418+x419))+x420);

	if (t96 != 4195782795251585LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -13503LL;
	uint16_t x423 = 0U;

	t97 = ((x421<=(x422+x423))+x424);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = INT32_MAX;
	uint16_t x426 = 1347U;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MAX;
	int32_t t98 = -1;

	t98 = ((x425<=(x426+x427))+x428);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 60559U;
	uint32_t x430 = 376341982U;
	int32_t x431 = -1;
	volatile uint32_t x432 = 9347U;
	uint32_t t99 = 3U;

	t99 = ((x429<=(x430+x431))+x432);

	if (t99 != 9348U) { NG(); } else { ; }
	
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

