#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
uint8_t x17 = UINT8_MAX;
int8_t x23 = INT8_MIN;
uint8_t x25 = 11U;
uint32_t x29 = UINT32_MAX;
int64_t x30 = INT64_MAX;
int32_t x36 = -18642023;
int64_t x45 = INT64_MIN;
int16_t x55 = 6;
int32_t t14 = 1;
static int32_t t15 = -601;
int64_t x66 = INT64_MIN;
int8_t x67 = INT8_MIN;
volatile int32_t t16 = -3138395;
volatile int64_t x71 = INT64_MIN;
volatile int32_t t18 = 223591;
int32_t x80 = -1;
int32_t x81 = INT32_MIN;
int16_t x82 = -1;
volatile uint16_t x87 = UINT16_MAX;
volatile int16_t x89 = INT16_MAX;
uint16_t x95 = UINT16_MAX;
int8_t x97 = -27;
volatile int8_t x100 = 2;
int8_t x101 = -1;
int16_t x104 = -1;
int16_t x115 = -2743;
uint16_t x117 = 237U;
uint64_t x124 = 13935470LLU;
volatile int32_t t30 = 413057;
uint32_t x129 = UINT32_MAX;
int8_t x143 = INT8_MAX;
static int64_t x144 = 2127545495807823264LL;
int8_t x145 = -1;
int32_t t36 = -19;
uint64_t x149 = 87929504770245LLU;
volatile int64_t x151 = -65244027LL;
int8_t x156 = INT8_MIN;
uint32_t x157 = 166934480U;
static int8_t x162 = -3;
volatile int32_t t40 = 61375;
uint8_t x166 = UINT8_MAX;
static int64_t x167 = 8602LL;
uint16_t x171 = 11U;
volatile int32_t x173 = -9685;
int8_t x175 = -1;
int8_t x176 = 1;
int32_t x185 = INT32_MAX;
volatile int32_t t45 = 859726554;
int8_t x189 = -1;
volatile int32_t t46 = 3;
int64_t x197 = 763595204995261LL;
volatile int8_t x198 = 54;
volatile uint32_t x203 = UINT32_MAX;
static volatile uint16_t x204 = 186U;
int32_t t49 = -1107657;
volatile int32_t t50 = 1150;
int16_t x210 = INT16_MIN;
static volatile int64_t x215 = INT64_MAX;
uint64_t x224 = 96098168LLU;
volatile int32_t t54 = -677474;
volatile int32_t x229 = -344661235;
volatile int8_t x230 = 1;
volatile uint32_t x231 = 136U;
int64_t x232 = -1LL;
volatile int32_t t56 = -1028;
int64_t x237 = INT64_MAX;
int32_t x239 = 451339971;
volatile int32_t t60 = -2055513;
int8_t x250 = -1;
int32_t t61 = -119121;
static uint16_t x253 = 26U;
static uint8_t x259 = 1U;
volatile int32_t x263 = -50493;
int64_t x276 = INT64_MAX;
uint16_t x278 = UINT16_MAX;
static int16_t x283 = INT16_MAX;
int32_t x285 = -1;
uint8_t x286 = 13U;
int16_t x288 = INT16_MIN;
uint64_t x298 = 30478378139740230LLU;
int32_t t73 = -16334;
volatile uint64_t x307 = UINT64_MAX;
static volatile int8_t x313 = -1;
volatile int64_t x319 = INT64_MIN;
int32_t x320 = -1;
int32_t t78 = -19;
static uint16_t x321 = UINT16_MAX;
int32_t x323 = INT32_MAX;
static int32_t t82 = -20;
volatile int32_t x337 = -37669;
int32_t x340 = -55;
int32_t t83 = 47802010;
static uint8_t x342 = UINT8_MAX;
volatile int32_t t87 = 44;
uint16_t x363 = UINT16_MAX;
volatile int16_t x373 = -17;
int32_t t92 = -297489965;
int16_t x379 = -1;
static int32_t t93 = -876723875;
int32_t x388 = -1;
volatile uint64_t x395 = 2742LLU;
int32_t t97 = 101462;


void f0(void) {
	static int16_t x1 = 1;
	int32_t x2 = INT32_MAX;
	int8_t x3 = 1;
	volatile int32_t t0 = 0;

	t0 = ((x1|(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 208LLU;
	uint32_t x6 = 856042571U;
	int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x5|(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int8_t x10 = -22;
	int32_t x11 = 10;
	uint32_t x12 = 223U;
	volatile int32_t t2 = 1;

	t2 = ((x9|(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static volatile int64_t x14 = INT64_MIN;
	volatile uint32_t x15 = 10645U;
	volatile int16_t x16 = -1;
	volatile int32_t t3 = -268169247;

	t3 = ((x13|(x14%x15))==x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	volatile uint64_t x19 = 7064731753LLU;
	int16_t x20 = -5;
	static int32_t t4 = -1622417;

	t4 = ((x17|(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int32_t x22 = INT32_MAX;
	volatile uint8_t x24 = 0U;
	int32_t t5 = 1793686;

	t5 = ((x21|(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x26 = 947U;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 9U;
	volatile int32_t t6 = -443;

	t6 = ((x25|(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = 20U;
	static uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = 4008529;

	t7 = ((x29|(x30%x31))==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	int32_t t8 = -13;

	t8 = ((x33|(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint16_t x38 = 828U;
	volatile uint64_t x39 = 1211895324217428415LLU;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 366503847;

	t9 = ((x37|(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -3;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	int32_t t10 = 13153;

	t10 = ((x41|(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	uint32_t x47 = UINT32_MAX;
	volatile int8_t x48 = 37;
	int32_t t11 = -70175;

	t11 = ((x45|(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 118009U;
	uint8_t x50 = 1U;
	int8_t x51 = INT8_MIN;
	static volatile int32_t x52 = INT32_MIN;
	static int32_t t12 = 303880054;

	t12 = ((x49|(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -112773275754756LL;
	int32_t x54 = -1;
	static uint8_t x56 = 1U;
	int32_t t13 = 1151051;

	t13 = ((x53|(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 26U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1;

	t14 = ((x57|(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = 0U;
	static int16_t x63 = INT16_MIN;
	static uint8_t x64 = 84U;

	t15 = ((x61|(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x68 = 1LL;

	t16 = ((x65|(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	uint32_t x70 = 1894729U;
	static int64_t x72 = 653187835684603LL;
	static volatile int32_t t17 = 11;

	t17 = ((x69|(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;

	t18 = ((x73|(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 26U;
	volatile uint16_t x78 = 9U;
	uint8_t x79 = 13U;
	volatile int32_t t19 = -7;

	t19 = ((x77|(x78%x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x83 = INT16_MAX;
	uint32_t x84 = 421U;
	static int32_t t20 = 86808;

	t20 = ((x81|(x82%x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -7;
	int64_t x86 = INT64_MIN;
	uint16_t x88 = 9U;
	volatile int32_t t21 = 0;

	t21 = ((x85|(x86%x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = 5958U;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -1594;
	int32_t t22 = 11185741;

	t22 = ((x89|(x90%x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	static int64_t x94 = -1LL;
	uint16_t x96 = 150U;
	static volatile int32_t t23 = -1;

	t23 = ((x93|(x94%x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	static int16_t x99 = -14;
	int32_t t24 = 711;

	t24 = ((x97|(x98%x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = INT16_MIN;
	uint32_t x103 = 497U;
	volatile int32_t t25 = 150;

	t25 = ((x101|(x102%x103))==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int16_t x106 = INT16_MAX;
	uint32_t x107 = UINT32_MAX;
	uint64_t x108 = UINT64_MAX;
	static int32_t t26 = 2;

	t26 = ((x105|(x106%x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	static int16_t x110 = 13;
	static int32_t x111 = INT32_MAX;
	uint8_t x112 = 111U;
	volatile int32_t t27 = -378107969;

	t27 = ((x109|(x110%x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = 72971558810LL;
	volatile uint8_t x114 = 0U;
	int16_t x116 = -1;
	volatile int32_t t28 = 10;

	t28 = ((x113|(x114%x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	uint64_t x119 = 237LLU;
	int16_t x120 = 1073;
	int32_t t29 = 668034;

	t29 = ((x117|(x118%x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = 1;
	volatile uint32_t x122 = 239U;
	int8_t x123 = INT8_MAX;

	t30 = ((x121|(x122%x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 56065402U;
	static volatile uint8_t x126 = UINT8_MAX;
	int64_t x127 = 570LL;
	volatile int8_t x128 = 13;
	volatile int32_t t31 = 16205990;

	t31 = ((x125|(x126%x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 43U;
	int16_t x131 = -1;
	uint32_t x132 = 11632U;
	int32_t t32 = 16048992;

	t32 = ((x129|(x130%x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 31482U;
	volatile int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	uint16_t x136 = 2U;
	int32_t t33 = 3834;

	t33 = ((x133|(x134%x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = -1LL;
	volatile int16_t x138 = INT16_MIN;
	static int64_t x139 = 12825LL;
	int8_t x140 = -1;
	int32_t t34 = -4542832;

	t34 = ((x137|(x138%x139))==x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 14U;
	uint8_t x142 = UINT8_MAX;
	int32_t t35 = -1;

	t35 = ((x141|(x142%x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	int32_t x148 = INT32_MIN;

	t36 = ((x145|(x146%x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 3268873;

	t37 = ((x149|(x150%x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	volatile int32_t x154 = INT32_MAX;
	static volatile uint16_t x155 = 25U;
	int32_t t38 = -131236187;

	t38 = ((x153|(x154%x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = -1441153LL;
	int16_t x159 = -1;
	uint16_t x160 = 219U;
	int32_t t39 = 640083;

	t39 = ((x157|(x158%x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = UINT8_MAX;
	volatile int32_t x163 = -1;
	int16_t x164 = INT16_MAX;

	t40 = ((x161|(x162%x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -4027001;

	t41 = ((x165|(x166%x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = -1;
	volatile int16_t x172 = 45;
	int32_t t42 = -16;

	t42 = ((x169|(x170%x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MIN;
	int32_t t43 = 2273;

	t43 = ((x173|(x174%x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 111U;
	int32_t t44 = -2370;

	t44 = ((x177|(x178%x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x186 = INT8_MAX;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;

	t45 = ((x185|(x186%x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;

	t46 = ((x189|(x190%x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x193 = 1722074U;
	int64_t x194 = -1LL;
	static volatile int32_t x195 = INT32_MIN;
	int32_t x196 = -338689;
	int32_t t47 = 9171;

	t47 = ((x193|(x194%x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x199 = INT32_MIN;
	uint8_t x200 = UINT8_MAX;
	static volatile int32_t t48 = -7;

	t48 = ((x197|(x198%x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 2U;
	int32_t x202 = INT32_MAX;

	t49 = ((x201|(x202%x203))==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	volatile int8_t x206 = INT8_MAX;
	uint64_t x207 = 812899287270828LLU;
	static volatile uint64_t x208 = 7107411381818096135LLU;

	t50 = ((x205|(x206%x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 145911853U;
	volatile uint8_t x211 = 3U;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 14570;

	t51 = ((x209|(x210%x211))==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MAX;
	uint16_t x216 = 1314U;
	volatile int32_t t52 = -724216;

	t52 = ((x213|(x214%x215))==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = 0;
	static uint16_t x219 = UINT16_MAX;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t53 = -363214;

	t53 = ((x217|(x218%x219))==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -15269177;
	volatile uint16_t x222 = 27451U;
	int16_t x223 = INT16_MIN;

	t54 = ((x221|(x222%x223))==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = 11;
	static int8_t x226 = -1;
	static volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -2;
	volatile int32_t t55 = -5;

	t55 = ((x225|(x226%x227))==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {


	t56 = ((x229|(x230%x231))==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 15U;
	uint16_t x234 = 863U;
	int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	int32_t t57 = -519356617;

	t57 = ((x233|(x234%x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = 4;
	int16_t x240 = -1733;
	volatile int32_t t58 = 1;

	t58 = ((x237|(x238%x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x241 = 196U;
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MAX;
	volatile int64_t x244 = INT64_MIN;
	int32_t t59 = -1069628811;

	t59 = ((x241|(x242%x243))==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -3699392512056055LL;
	int32_t x246 = 1430;
	static int8_t x247 = -7;
	int8_t x248 = 0;

	t60 = ((x245|(x246%x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile int64_t x251 = -1LL;
	int16_t x252 = 0;

	t61 = ((x249|(x250%x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x254 = 963113U;
	uint32_t x255 = 251419464U;
	int8_t x256 = 6;
	volatile int32_t t62 = -137;

	t62 = ((x253|(x254%x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = 13030190;
	uint32_t x258 = 0U;
	uint8_t x260 = 5U;
	int32_t t63 = 0;

	t63 = ((x257|(x258%x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = 0;
	int8_t x262 = -42;
	uint32_t x264 = UINT32_MAX;
	int32_t t64 = 1616532;

	t64 = ((x261|(x262%x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	int32_t x267 = INT32_MAX;
	int16_t x268 = -1;
	volatile int32_t t65 = 3220;

	t65 = ((x265|(x266%x267))==x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int8_t x271 = -19;
	int16_t x272 = -1;
	static int32_t t66 = -7076;

	t66 = ((x269|(x270%x271))==x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = 120620594362LL;
	int64_t x275 = INT64_MAX;
	int32_t t67 = 2157;

	t67 = ((x273|(x274%x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = -4323;
	static int16_t x279 = INT16_MIN;
	uint8_t x280 = 0U;
	volatile int32_t t68 = -13;

	t68 = ((x277|(x278%x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 4271320U;
	static volatile int16_t x282 = INT16_MIN;
	static int64_t x284 = -6725507726LL;
	int32_t t69 = 4559;

	t69 = ((x281|(x282%x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x287 = 151094983LL;
	int32_t t70 = 3480;

	t70 = ((x285|(x286%x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile int8_t x291 = INT8_MAX;
	static int64_t x292 = INT64_MAX;
	int32_t t71 = -44027;

	t71 = ((x289|(x290%x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x293 = UINT8_MAX;
	uint8_t x294 = 21U;
	uint64_t x295 = 10527LLU;
	int64_t x296 = -1LL;
	volatile int32_t t72 = 30170297;

	t72 = ((x293|(x294%x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x297 = 24U;
	int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MIN;

	t73 = ((x297|(x298%x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -16645LL;
	volatile uint8_t x302 = 81U;
	int64_t x303 = -8780137003718LL;
	int8_t x304 = -1;
	volatile int32_t t74 = -139;

	t74 = ((x301|(x302%x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 58;
	int8_t x306 = 10;
	uint8_t x308 = 16U;
	int32_t t75 = 32947127;

	t75 = ((x305|(x306%x307))==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = -1;
	static int64_t x310 = 129549722548LL;
	static volatile int32_t x311 = -1;
	static volatile int16_t x312 = 53;
	int32_t t76 = 53;

	t76 = ((x309|(x310%x311))==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x314 = 833532050U;
	static int32_t x315 = 584164483;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t77 = -1910;

	t77 = ((x313|(x314%x315))==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x317 = 7;
	int64_t x318 = INT64_MAX;

	t78 = ((x317|(x318%x319))==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x322 = UINT32_MAX;
	int64_t x324 = -1LL;
	int32_t t79 = -47;

	t79 = ((x321|(x322%x323))==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 284232483U;
	volatile int8_t x328 = 0;
	static int32_t t80 = 16;

	t80 = ((x325|(x326%x327))==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = 109;
	int16_t x330 = -1909;
	static uint32_t x331 = 3U;
	uint8_t x332 = 1U;
	int32_t t81 = -1917;

	t81 = ((x329|(x330%x331))==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = -878412296LL;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -264050;

	t82 = ((x333|(x334%x335))==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x338 = 4;
	int8_t x339 = INT8_MIN;

	t83 = ((x337|(x338%x339))==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = INT16_MIN;
	static int32_t x343 = -2;
	uint16_t x344 = 7U;
	int32_t t84 = 3212;

	t84 = ((x341|(x342%x343))==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -386196;
	volatile int16_t x346 = INT16_MIN;
	volatile int16_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t85 = 208;

	t85 = ((x345|(x346%x347))==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 1U;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t86 = 1762518;

	t86 = ((x349|(x350%x351))==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = UINT64_MAX;
	static int64_t x354 = INT64_MAX;
	volatile uint16_t x355 = 434U;
	volatile int32_t x356 = -2;

	t87 = ((x353|(x354%x355))==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = 63LL;
	volatile uint8_t x358 = 3U;
	static int32_t x359 = 42333;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = 2943;

	t88 = ((x357|(x358%x359))==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 6390U;
	static int8_t x362 = -1;
	uint32_t x364 = UINT32_MAX;
	int32_t t89 = 512;

	t89 = ((x361|(x362%x363))==x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	volatile int64_t x368 = INT64_MIN;
	int32_t t90 = -634154;

	t90 = ((x365|(x366%x367))==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	static uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t91 = 1094962;

	t91 = ((x369|(x370%x371))==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MAX;
	int16_t x376 = INT16_MAX;

	t92 = ((x373|(x374%x375))==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x377 = 224U;
	int16_t x378 = INT16_MIN;
	static uint64_t x380 = 5459LLU;

	t93 = ((x377|(x378%x379))==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x381 = INT64_MIN;
	int16_t x382 = -291;
	static int16_t x383 = INT16_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t94 = 2;

	t94 = ((x381|(x382%x383))==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	uint16_t x387 = 2716U;
	volatile int32_t t95 = -6;

	t95 = ((x385|(x386%x387))==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MAX;
	static uint64_t x390 = UINT64_MAX;
	static int32_t x391 = 39;
	uint16_t x392 = UINT16_MAX;
	static int32_t t96 = -2270891;

	t96 = ((x389|(x390%x391))==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x393 = -1;
	volatile uint16_t x394 = 0U;
	int32_t x396 = INT32_MIN;

	t97 = ((x393|(x394%x395))==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -1;
	static int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MAX;
	static int32_t t98 = -89;

	t98 = ((x397|(x398%x399))==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x401 = INT64_MAX;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -1;
	uint32_t x404 = 6U;
	int32_t t99 = 39316698;

	t99 = ((x401|(x402%x403))==x404);

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

