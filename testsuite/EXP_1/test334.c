#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 0;
int64_t x4 = -12120563549510915LL;
uint64_t x8 = 9990719585LLU;
int32_t t1 = 1845782;
int32_t x12 = INT32_MAX;
uint8_t x17 = 13U;
volatile int8_t x21 = -1;
int32_t x24 = 1;
volatile int8_t x25 = -1;
int32_t x29 = -1;
volatile int8_t x30 = INT8_MIN;
int8_t x52 = INT8_MAX;
volatile int32_t t11 = 25327660;
volatile uint8_t x56 = 110U;
static uint16_t x59 = UINT16_MAX;
volatile int32_t x62 = INT32_MIN;
int32_t x67 = INT32_MIN;
volatile int32_t t15 = 27010616;
static int8_t x73 = INT8_MIN;
int8_t x81 = INT8_MIN;
int32_t t19 = -2324118;
uint64_t x90 = UINT64_MAX;
static uint8_t x92 = 25U;
int32_t x96 = 45003122;
int16_t x115 = INT16_MAX;
static int32_t x116 = 0;
int32_t t26 = 11;
uint64_t x123 = 2LLU;
volatile int32_t t27 = 0;
volatile int32_t x128 = INT32_MIN;
static volatile int16_t x131 = INT16_MIN;
int64_t x135 = 142218731092747382LL;
int64_t x145 = INT64_MIN;
static volatile int16_t x156 = INT16_MIN;
int8_t x161 = INT8_MAX;
int8_t x164 = INT8_MAX;
volatile int32_t t36 = -439;
int64_t x167 = -73214905816339553LL;
volatile int64_t x168 = 37884952175204LL;
volatile int32_t t38 = 2612894;
int64_t x186 = INT64_MIN;
uint16_t x190 = 7U;
volatile uint32_t x192 = 354199U;
volatile int32_t t45 = 1;
int64_t x201 = 360968662894449210LL;
int32_t x206 = -1;
uint8_t x210 = 47U;
volatile uint16_t x218 = UINT16_MAX;
static volatile int32_t x228 = 1268;
int32_t t56 = 98449;
static int16_t x248 = INT16_MIN;
int32_t t58 = 3;
volatile uint16_t x257 = 0U;
int32_t t61 = 30;
uint16_t x270 = UINT16_MAX;
int16_t x271 = -469;
static uint8_t x272 = UINT8_MAX;
int32_t x273 = -1;
uint16_t x276 = 0U;
volatile int32_t t63 = -5309944;
int16_t x277 = -19;
uint16_t x280 = 117U;
int32_t t65 = 236959198;
volatile int32_t t66 = -118884390;
uint32_t x296 = 4U;
int32_t x297 = INT32_MIN;
int64_t x304 = INT64_MIN;
static int64_t x305 = 3785LL;
int64_t x306 = 1457106256LL;
uint8_t x308 = 1U;
volatile int32_t t71 = 67088;
int16_t x310 = -1;
static volatile int32_t t72 = 5614848;
uint64_t x318 = UINT64_MAX;
int32_t t75 = 12586;
volatile int16_t x330 = INT16_MAX;
int8_t x345 = INT8_MIN;
int32_t x347 = INT32_MIN;
static uint16_t x349 = 1530U;
int8_t x352 = INT8_MIN;
int64_t x359 = INT64_MIN;
int8_t x360 = INT8_MIN;
uint8_t x367 = UINT8_MAX;
uint64_t x376 = 1213741548471LLU;
static uint32_t x399 = UINT32_MAX;
uint8_t x415 = UINT8_MAX;
int32_t x422 = INT32_MAX;
int32_t x424 = INT32_MIN;
static int16_t x425 = INT16_MAX;
uint16_t x431 = UINT16_MAX;
static int64_t x432 = -1236524087369LL;


void f0(void) {
	static int64_t x2 = 39037LL;
	static uint8_t x3 = 2U;
	int32_t t0 = 2174;

	t0 = (((x1-x2)^x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	static int8_t x6 = -17;
	int32_t x7 = INT32_MAX;

	t1 = (((x5-x6)^x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 58U;
	static volatile int64_t x10 = INT64_MAX;
	uint32_t x11 = 239080153U;
	static int32_t t2 = -547;

	t2 = (((x9-x10)^x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 39353494LL;
	int32_t x14 = -1;
	static volatile int32_t x15 = -1;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 1072753662;

	t3 = (((x13-x14)^x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 34U;
	uint64_t x19 = 0LLU;
	uint16_t x20 = 30U;
	int32_t t4 = 155;

	t4 = (((x17-x18)^x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 24924U;
	int64_t x23 = -1LL;
	volatile int32_t t5 = 423245106;

	t5 = (((x21-x22)^x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 1U;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -31;

	t6 = (((x25-x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x31 = UINT64_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 6;

	t7 = (((x29-x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 4U;
	int16_t x34 = -1;
	static int64_t x35 = -1LL;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 27400;

	t8 = (((x33-x34)^x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -1;
	int32_t x42 = -1;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 103499027617LLU;
	int32_t t9 = 7494938;

	t9 = (((x41-x42)^x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 2007745;
	static volatile int64_t x46 = 5645608833LL;
	int64_t x47 = 372033661757292575LL;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -7235991;

	t10 = (((x45-x46)^x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	static int64_t x50 = INT64_MAX;
	volatile int32_t x51 = -767507972;

	t11 = (((x49-x50)^x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static int32_t x54 = -52797753;
	volatile uint64_t x55 = UINT64_MAX;
	int32_t t12 = -55250;

	t12 = (((x53-x54)^x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -5;
	int8_t x58 = 6;
	int32_t x60 = INT32_MAX;
	volatile int32_t t13 = 65196;

	t13 = (((x57-x58)^x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x63 = INT16_MIN;
	int16_t x64 = 1976;
	volatile int32_t t14 = 1;

	t14 = (((x61-x62)^x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = -31;
	static int16_t x68 = -1;

	t15 = (((x65-x66)^x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = 3239;
	uint64_t x71 = 0LLU;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t16 = 265;

	t16 = (((x69-x70)^x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	int8_t x75 = -1;
	volatile int8_t x76 = INT8_MAX;
	int32_t t17 = -308;

	t17 = (((x73-x74)^x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	volatile int32_t x78 = -1;
	int64_t x79 = INT64_MIN;
	static int8_t x80 = 12;
	int32_t t18 = 3591;

	t18 = (((x77-x78)^x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 0U;
	volatile int64_t x84 = -1LL;

	t19 = (((x81-x82)^x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	volatile uint16_t x91 = UINT16_MAX;
	int32_t t20 = 739143798;

	t20 = (((x89-x90)^x91)<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint32_t x94 = 2824367U;
	volatile int64_t x95 = 28327853LL;
	volatile int32_t t21 = -195326;

	t21 = (((x93-x94)^x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = 19182309999LL;
	uint64_t x99 = UINT64_MAX;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t22 = 0;

	t22 = (((x97-x98)^x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 8344U;
	int8_t x103 = INT8_MAX;
	int64_t x104 = INT64_MAX;
	static volatile int32_t t23 = -744;

	t23 = (((x101-x102)^x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = 126U;
	static int32_t x110 = INT32_MAX;
	uint64_t x111 = 13104212415209165LLU;
	uint8_t x112 = UINT8_MAX;
	int32_t t24 = 135792741;

	t24 = (((x109-x110)^x111)<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -713502;
	int64_t x114 = INT64_MIN;
	static int32_t t25 = -58677;

	t25 = (((x113-x114)^x115)<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = -1;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = UINT32_MAX;

	t26 = (((x117-x118)^x119)<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	static uint8_t x124 = 55U;

	t27 = (((x121-x122)^x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -6;
	int32_t x126 = -212505;
	int32_t x127 = INT32_MAX;
	int32_t t28 = -213862946;

	t28 = (((x125-x126)^x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -1;
	static uint64_t x130 = 2587LLU;
	static uint64_t x132 = UINT64_MAX;
	int32_t t29 = -2484400;

	t29 = (((x129-x130)^x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	static int32_t t30 = 2651085;

	t30 = (((x133-x134)^x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x141 = UINT32_MAX;
	int16_t x142 = -1;
	int32_t x143 = 18443;
	static volatile uint64_t x144 = 85417853658LLU;
	volatile int32_t t31 = -1760;

	t31 = (((x141-x142)^x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t32 = 42290592;

	t32 = (((x145-x146)^x147)<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 67811852LLU;
	int32_t x150 = 52825593;
	static uint8_t x151 = 2U;
	volatile int8_t x152 = INT8_MAX;
	static volatile int32_t t33 = 0;

	t33 = (((x149-x150)^x151)<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 25183070377189LLU;
	static int16_t x154 = INT16_MIN;
	int16_t x155 = 11600;
	volatile int32_t t34 = 679;

	t34 = (((x153-x154)^x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 3635413758LLU;
	volatile int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -1;
	int32_t t35 = 9;

	t35 = (((x157-x158)^x159)<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = -1LL;
	volatile uint64_t x163 = 831635LLU;

	t36 = (((x161-x162)^x163)<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -40619553;
	static volatile int32_t t37 = -25;

	t37 = (((x165-x166)^x167)<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -10812;
	static volatile int16_t x170 = 1428;
	static volatile uint32_t x171 = 60068U;
	int8_t x172 = -1;

	t38 = (((x169-x170)^x171)<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x173 = 101U;
	uint32_t x174 = 31270607U;
	int16_t x175 = -1;
	int16_t x176 = -1;
	volatile int32_t t39 = 160019880;

	t39 = (((x173-x174)^x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 71U;
	int32_t x178 = 11145165;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t40 = 638709313;

	t40 = (((x177-x178)^x179)<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x181 = 0U;
	int16_t x182 = -2704;
	int8_t x183 = INT8_MAX;
	static int8_t x184 = -1;
	int32_t t41 = -34084;

	t41 = (((x181-x182)^x183)<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	int16_t x187 = 0;
	int16_t x188 = INT16_MIN;
	volatile int32_t t42 = 15818107;

	t42 = (((x185-x186)^x187)<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -1;
	int32_t x191 = -1;
	volatile int32_t t43 = 1531689;

	t43 = (((x189-x190)^x191)<x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x193 = -838567355835LL;
	volatile int8_t x194 = 1;
	static volatile int64_t x195 = -1LL;
	int8_t x196 = -1;
	int32_t t44 = -30;

	t44 = (((x193-x194)^x195)<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -3568194284LL;
	static int64_t x198 = -3156138762004216796LL;
	int32_t x199 = -1;
	volatile int64_t x200 = INT64_MIN;

	t45 = (((x197-x198)^x199)<x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x202 = UINT32_MAX;
	volatile int64_t x203 = -8LL;
	static int32_t x204 = -1;
	volatile int32_t t46 = -344649337;

	t46 = (((x201-x202)^x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 9400U;
	uint8_t x207 = UINT8_MAX;
	volatile int8_t x208 = 7;
	int32_t t47 = -181783006;

	t47 = (((x205-x206)^x207)<x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = INT8_MAX;
	uint64_t x211 = 241701LLU;
	uint32_t x212 = 9U;
	volatile int32_t t48 = 113627654;

	t48 = (((x209-x210)^x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x213 = 235U;
	int16_t x214 = INT16_MIN;
	volatile int64_t x215 = 3269LL;
	static int64_t x216 = -1LL;
	int32_t t49 = 259978;

	t49 = (((x213-x214)^x215)<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = 231U;
	static int64_t x219 = INT64_MIN;
	uint8_t x220 = 2U;
	static volatile int32_t t50 = -3;

	t50 = (((x217-x218)^x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	volatile int8_t x224 = -1;
	volatile int32_t t51 = -151;

	t51 = (((x221-x222)^x223)<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 846931719581LLU;
	int8_t x226 = INT8_MIN;
	int32_t x227 = -34490178;
	volatile int32_t t52 = 134;

	t52 = (((x225-x226)^x227)<x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = 2;
	static uint16_t x230 = 1165U;
	uint64_t x231 = 1016362452150154329LLU;
	static int8_t x232 = INT8_MAX;
	int32_t t53 = 0;

	t53 = (((x229-x230)^x231)<x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t54 = 0;

	t54 = (((x233-x234)^x235)<x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 2U;
	int32_t x238 = INT32_MAX;
	uint16_t x239 = 708U;
	int16_t x240 = 0;
	static int32_t t55 = 1554;

	t55 = (((x237-x238)^x239)<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static uint8_t x243 = 1U;
	int32_t x244 = -1;

	t56 = (((x241-x242)^x243)<x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 73364U;
	int64_t x246 = 731427574125713406LL;
	uint32_t x247 = 15637U;
	int32_t t57 = 24;

	t57 = (((x245-x246)^x247)<x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = -441;
	static int32_t x255 = INT32_MAX;
	volatile uint64_t x256 = UINT64_MAX;

	t58 = (((x253-x254)^x255)<x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x258 = 53U;
	int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	static int32_t t59 = 6;

	t59 = (((x257-x258)^x259)<x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x261 = 79U;
	static volatile uint8_t x262 = 91U;
	static int64_t x263 = -2614019051513LL;
	int32_t x264 = -7499;
	int32_t t60 = -49;

	t60 = (((x261-x262)^x263)<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x266 = 12159189948LLU;
	static uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 18436U;

	t61 = (((x265-x266)^x267)<x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = 2;
	int32_t t62 = 2297;

	t62 = (((x269-x270)^x271)<x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = INT64_MIN;
	int64_t x275 = 1076LL;

	t63 = (((x273-x274)^x275)<x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = -29608;
	volatile int32_t t64 = 462199;

	t64 = (((x277-x278)^x279)<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	uint8_t x283 = UINT8_MAX;
	static uint64_t x284 = 20749LLU;

	t65 = (((x281-x282)^x283)<x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x285 = 0U;
	static uint16_t x286 = UINT16_MAX;
	int32_t x287 = -12315;
	volatile uint32_t x288 = 117527337U;

	t66 = (((x285-x286)^x287)<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = 64U;
	volatile uint64_t x290 = UINT64_MAX;
	static int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t67 = 0;

	t67 = (((x289-x290)^x291)<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = -22904;
	volatile int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	int32_t t68 = 7;

	t68 = (((x293-x294)^x295)<x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x298 = INT16_MIN;
	static uint64_t x299 = 7881117LLU;
	static int32_t x300 = INT32_MAX;
	int32_t t69 = 11577;

	t69 = (((x297-x298)^x299)<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 17225199LLU;
	uint8_t x302 = 14U;
	int8_t x303 = -1;
	int32_t t70 = 16414130;

	t70 = (((x301-x302)^x303)<x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x307 = INT8_MIN;

	t71 = (((x305-x306)^x307)<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 0U;
	int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MAX;

	t72 = (((x309-x310)^x311)<x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = 8035766;
	static volatile int8_t x314 = 30;
	uint32_t x315 = UINT32_MAX;
	static uint16_t x316 = UINT16_MAX;
	int32_t t73 = 0;

	t73 = (((x313-x314)^x315)<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = 3LL;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = -1LL;
	static volatile int32_t t74 = 15;

	t74 = (((x317-x318)^x319)<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = 0;
	uint32_t x323 = 11967342U;
	uint8_t x324 = UINT8_MAX;

	t75 = (((x321-x322)^x323)<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x329 = INT8_MAX;
	int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MAX;
	volatile int32_t t76 = 12;

	t76 = (((x329-x330)^x331)<x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = UINT64_MAX;
	int32_t t77 = 5444;

	t77 = (((x333-x334)^x335)<x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = 237182622658387LLU;
	static int64_t x338 = 35902931964242534LL;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t78 = 0;

	t78 = (((x337-x338)^x339)<x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x341 = UINT16_MAX;
	static int16_t x342 = INT16_MIN;
	volatile int64_t x343 = 75384587197901LL;
	int8_t x344 = -1;
	volatile int32_t t79 = 25;

	t79 = (((x341-x342)^x343)<x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x346 = 0U;
	uint16_t x348 = 6U;
	volatile int32_t t80 = -7;

	t80 = (((x345-x346)^x347)<x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x350 = UINT16_MAX;
	int32_t x351 = -8;
	static volatile int32_t t81 = 13867829;

	t81 = (((x349-x350)^x351)<x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	static int32_t t82 = 41740;

	t82 = (((x357-x358)^x359)<x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x361 = INT16_MIN;
	static int16_t x362 = INT16_MIN;
	volatile int64_t x363 = INT64_MIN;
	uint32_t x364 = 1U;
	volatile int32_t t83 = 191;

	t83 = (((x361-x362)^x363)<x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x365 = 58037799U;
	int32_t x366 = 2255;
	uint32_t x368 = 147347974U;
	volatile int32_t t84 = -49547139;

	t84 = (((x365-x366)^x367)<x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	volatile int32_t t85 = 2898;

	t85 = (((x369-x370)^x371)<x372);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = 5729048683LLU;
	int64_t x374 = -153LL;
	int32_t x375 = INT32_MIN;
	volatile int32_t t86 = -164066550;

	t86 = (((x373-x374)^x375)<x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MAX;
	volatile int16_t x379 = INT16_MAX;
	volatile int32_t x380 = 28801180;
	static volatile int32_t t87 = 0;

	t87 = (((x377-x378)^x379)<x380);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MIN;
	static int64_t x382 = 10762674585377LL;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = INT32_MIN;
	int32_t t88 = -31586702;

	t88 = (((x381-x382)^x383)<x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x390 = 0;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 3659900U;
	int32_t t89 = 8138446;

	t89 = (((x389-x390)^x391)<x392);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x393 = INT8_MIN;
	uint8_t x394 = 127U;
	uint32_t x395 = 16092815U;
	int16_t x396 = INT16_MIN;
	int32_t t90 = 1056684;

	t90 = (((x393-x394)^x395)<x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = UINT16_MAX;
	static volatile int8_t x398 = INT8_MIN;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t91 = 2494063;

	t91 = (((x397-x398)^x399)<x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 241860493055LLU;
	uint8_t x402 = 22U;
	volatile uint32_t x403 = 59432U;
	int64_t x404 = INT64_MIN;
	int32_t t92 = 128517852;

	t92 = (((x401-x402)^x403)<x404);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = 5;
	int16_t x406 = -1;
	int16_t x407 = 77;
	uint8_t x408 = UINT8_MAX;
	int32_t t93 = -6;

	t93 = (((x405-x406)^x407)<x408);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MAX;
	uint64_t x410 = 13LLU;
	int8_t x411 = 1;
	static uint32_t x412 = UINT32_MAX;
	static volatile int32_t t94 = 552;

	t94 = (((x409-x410)^x411)<x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x413 = UINT32_MAX;
	volatile uint8_t x414 = 105U;
	uint64_t x416 = 804764238676LLU;
	static volatile int32_t t95 = 127752416;

	t95 = (((x413-x414)^x415)<x416);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x417 = INT64_MIN;
	static int8_t x418 = INT8_MIN;
	int32_t x419 = -1;
	int32_t x420 = INT32_MIN;
	int32_t t96 = -11;

	t96 = (((x417-x418)^x419)<x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x421 = 5;
	int32_t x423 = -429;
	volatile int32_t t97 = 12322;

	t97 = (((x421-x422)^x423)<x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = -1;
	int16_t x428 = INT16_MAX;
	volatile int32_t t98 = 4306361;

	t98 = (((x425-x426)^x427)<x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	int32_t x430 = INT32_MIN;
	volatile int32_t t99 = 1385;

	t99 = (((x429-x430)^x431)<x432);

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

