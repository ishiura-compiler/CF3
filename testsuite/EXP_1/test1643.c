#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
uint8_t x7 = UINT8_MAX;
int32_t t1 = -76;
int64_t x11 = -1LL;
int8_t x16 = INT8_MIN;
volatile int32_t t3 = 9724533;
int64_t x19 = INT64_MAX;
int32_t t6 = -1517;
volatile int32_t x30 = 3126114;
uint8_t x32 = UINT8_MAX;
volatile int32_t t7 = 946;
int16_t x34 = -374;
int64_t x37 = -1LL;
volatile int8_t x42 = INT8_MIN;
volatile int64_t x43 = INT64_MIN;
uint32_t x52 = 35590U;
volatile uint64_t x53 = 48353053126LLU;
volatile int32_t t13 = -3;
uint8_t x57 = UINT8_MAX;
int64_t x67 = 72238329202641LL;
volatile int64_t x74 = -3335LL;
uint8_t x76 = 4U;
static int16_t x83 = -1;
volatile int32_t x86 = 118;
int32_t x87 = INT32_MAX;
int64_t x88 = -406528922824535264LL;
volatile int64_t t21 = 1LL;
int64_t x91 = -1LL;
uint32_t x92 = 9U;
int8_t x95 = INT8_MIN;
int32_t t23 = -407;
volatile uint32_t x103 = 8243U;
int32_t x104 = 4205;
int8_t x106 = INT8_MIN;
volatile uint32_t t26 = 142972U;
volatile uint64_t t28 = 0LLU;
int16_t x117 = -1;
uint64_t x121 = 3818LLU;
volatile int8_t x123 = INT8_MIN;
int8_t x127 = INT8_MAX;
int64_t x130 = INT64_MIN;
volatile int8_t x133 = INT8_MIN;
uint8_t x160 = 8U;
int16_t x165 = -26;
uint64_t x168 = 410463607LLU;
int32_t x172 = -7438811;
int32_t x173 = -1;
int32_t x175 = INT32_MIN;
int32_t t43 = 505089627;
uint64_t x179 = UINT64_MAX;
uint16_t x180 = 4U;
volatile int32_t t44 = 468090698;
static int16_t x185 = 7;
int16_t x189 = INT16_MIN;
int32_t x201 = INT32_MAX;
int64_t x206 = -66996245657467968LL;
volatile int32_t t51 = 0;
uint32_t x216 = UINT32_MAX;
volatile uint64_t x221 = 653404605168LLU;
uint64_t x227 = UINT64_MAX;
volatile uint8_t x230 = 0U;
int8_t x231 = -1;
volatile int32_t t56 = -373;
volatile int32_t t57 = 9285;
int64_t x243 = 6911797LL;
int8_t x252 = INT8_MIN;
static int8_t x253 = 21;
int16_t x256 = INT16_MIN;
volatile int32_t t62 = 11;
int8_t x261 = -1;
int32_t x265 = -1;
int32_t x267 = 58624439;
volatile uint64_t x272 = UINT64_MAX;
volatile uint64_t t65 = 1116LLU;
int16_t x275 = 1;
int32_t x283 = 272307901;
int16_t x301 = 3;
uint64_t x302 = 32139227LLU;
int32_t x309 = -1;
int32_t t76 = 919;
int32_t x321 = 166;
int64_t x322 = -1LL;
volatile int8_t x323 = INT8_MIN;
int64_t x325 = INT64_MIN;
int8_t x327 = INT8_MAX;
int8_t x340 = INT8_MIN;
volatile int32_t t81 = 4;
uint16_t x341 = UINT16_MAX;
volatile uint32_t x350 = UINT32_MAX;
int32_t t84 = 1;
static volatile int32_t x363 = INT32_MIN;
int64_t x374 = -1LL;
int8_t x379 = -1;
int32_t t91 = 4057073;
int16_t x381 = INT16_MAX;
uint64_t x383 = 5980350090856LLU;
int8_t x386 = INT8_MIN;
uint8_t x392 = UINT8_MAX;
static int8_t x397 = INT8_MIN;
static int64_t x405 = -1LL;
int64_t x407 = -1LL;
static uint32_t x411 = UINT32_MAX;


void f0(void) {
	int32_t x2 = 1014526;
	static int8_t x3 = INT8_MIN;
	uint64_t x4 = 4242202195LLU;
	static volatile uint64_t t0 = 336392288LLU;

	t0 = (((x1<=x2)<=x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3881299161509767842LLU;
	int16_t x6 = -655;
	int32_t x8 = -1;

	t1 = (((x5<=x6)<=x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	static int32_t x10 = INT32_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 29968514;

	t2 = (((x9<=x10)<=x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 755U;
	static int32_t x14 = -1;
	static uint64_t x15 = 1073LLU;

	t3 = (((x13<=x14)<=x15)%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -483;
	volatile int64_t x18 = INT64_MIN;
	volatile int8_t x20 = -1;
	int32_t t4 = 73053;

	t4 = (((x17<=x18)<=x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MAX;
	volatile uint8_t x23 = UINT8_MAX;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -271781;

	t5 = (((x21<=x22)<=x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 252044376869LL;
	int32_t x26 = INT32_MAX;
	static volatile int64_t x27 = -12377LL;
	volatile uint16_t x28 = 5268U;

	t6 = (((x25<=x26)<=x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint32_t x31 = 25904U;

	t7 = (((x29<=x30)<=x31)%x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int32_t x35 = INT32_MIN;
	static volatile int32_t x36 = 188249843;
	volatile int32_t t8 = 525226;

	t8 = (((x33<=x34)<=x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 71U;
	int64_t x39 = -1LL;
	int32_t x40 = -1;
	static volatile int32_t t9 = 6;

	t9 = (((x37<=x38)<=x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 23U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -1;

	t10 = (((x41<=x42)<=x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 87123513U;
	uint8_t x46 = 8U;
	volatile uint8_t x47 = 1U;
	static uint32_t x48 = 1856620U;
	uint32_t t11 = 3179U;

	t11 = (((x45<=x46)<=x47)%x48);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 44U;
	int32_t x51 = -1;
	uint32_t t12 = 12591306U;

	t12 = (((x49<=x50)<=x51)%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 41935525;
	int32_t x55 = 1772068;
	int8_t x56 = INT8_MAX;

	t13 = (((x53<=x54)<=x55)%x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x58 = -1602;
	uint8_t x59 = 4U;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 58778;

	t14 = (((x57<=x58)<=x59)%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint64_t x62 = 597982121734LLU;
	static int8_t x63 = 17;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = -280;

	t15 = (((x61<=x62)<=x63)%x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 790383094;

	t16 = (((x65<=x66)<=x67)%x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 2516016U;
	volatile int8_t x70 = 6;
	static volatile uint64_t x71 = 385044025LLU;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 74087028523LL;

	t17 = (((x69<=x70)<=x71)%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static volatile int32_t x75 = INT32_MAX;
	int32_t t18 = -6;

	t18 = (((x73<=x74)<=x75)%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = 1771428896U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 1;

	t19 = (((x77<=x78)<=x79)%x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint16_t x82 = UINT16_MAX;
	uint8_t x84 = 27U;
	int32_t t20 = -1;

	t20 = (((x81<=x82)<=x83)%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;

	t21 = (((x85<=x86)<=x87)%x88);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = INT32_MIN;
	uint64_t x90 = 7LLU;
	volatile uint32_t t22 = 78U;

	t22 = (((x89<=x90)<=x91)%x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -2917;
	int16_t x94 = INT16_MAX;
	int16_t x96 = -1;

	t23 = (((x93<=x94)<=x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -2227376LL;
	static uint8_t x98 = 0U;
	static uint64_t x99 = 1354LLU;
	int16_t x100 = -1;
	int32_t t24 = -1;

	t24 = (((x97<=x98)<=x99)%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	volatile int32_t t25 = -634978033;

	t25 = (((x101<=x102)<=x103)%x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int8_t x107 = INT8_MAX;
	uint32_t x108 = 51538818U;

	t26 = (((x105<=x106)<=x107)%x108);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 65LL;
	static int64_t x110 = 344LL;
	volatile int8_t x111 = -2;
	volatile int16_t x112 = 1852;
	static volatile int32_t t27 = -244;

	t27 = (((x109<=x110)<=x111)%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 975;
	int8_t x114 = 1;
	volatile int64_t x115 = 547839LL;
	uint64_t x116 = UINT64_MAX;

	t28 = (((x113<=x114)<=x115)%x116);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x118 = 2777888U;
	int8_t x119 = 0;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -536092726;

	t29 = (((x117<=x118)<=x119)%x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x122 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -19;

	t30 = (((x121<=x122)<=x123)%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -41435122;

	t31 = (((x125<=x126)<=x127)%x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x131 = -19LL;
	static int8_t x132 = INT8_MAX;
	int32_t t32 = -16052856;

	t32 = (((x129<=x130)<=x131)%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = -1LL;
	uint32_t x136 = 2807351U;
	uint32_t t33 = 3979U;

	t33 = (((x133<=x134)<=x135)%x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -7566;

	t34 = (((x137<=x138)<=x139)%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = 193359;
	int32_t x142 = INT32_MAX;
	static uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MAX;
	volatile int64_t t35 = -5LL;

	t35 = (((x141<=x142)<=x143)%x144);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 1U;
	volatile int32_t x146 = -21;
	int32_t x147 = -127481;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = -9367739;

	t36 = (((x145<=x146)<=x147)%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 489567842U;
	int32_t x150 = INT32_MAX;
	int32_t x151 = 247675952;
	static uint64_t x152 = 8088064540169612892LLU;
	volatile uint64_t t37 = 104299655641LLU;

	t37 = (((x149<=x150)<=x151)%x152);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;
	static int64_t t38 = 60LL;

	t38 = (((x153<=x154)<=x155)%x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 444387792905989LLU;
	int64_t x158 = INT64_MAX;
	int8_t x159 = 0;
	volatile int32_t t39 = 0;

	t39 = (((x157<=x158)<=x159)%x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 2;
	volatile int16_t x162 = INT16_MIN;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = 8;
	volatile int32_t t40 = -49364768;

	t40 = (((x161<=x162)<=x163)%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	uint64_t t41 = 12072420525984731LLU;

	t41 = (((x165<=x166)<=x167)%x168);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	static volatile uint32_t x170 = 1517U;
	uint8_t x171 = 3U;
	int32_t t42 = -3436;

	t42 = (((x169<=x170)<=x171)%x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = -1;
	int16_t x176 = -2;

	t43 = (((x173<=x174)<=x175)%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = 164;
	uint32_t x178 = 80U;

	t44 = (((x177<=x178)<=x179)%x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = UINT64_MAX;
	static uint64_t t45 = 204LLU;

	t45 = (((x181<=x182)<=x183)%x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = 0;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 11U;
	uint32_t t46 = 136648924U;

	t46 = (((x185<=x186)<=x187)%x188);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = 7112LL;
	volatile int8_t x191 = 1;
	int8_t x192 = INT8_MIN;
	static int32_t t47 = -26;

	t47 = (((x189<=x190)<=x191)%x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static int8_t x194 = INT8_MIN;
	static int8_t x195 = -1;
	uint32_t x196 = 488897U;
	uint32_t t48 = 58359648U;

	t48 = (((x193<=x194)<=x195)%x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	uint32_t x198 = 9279U;
	static int8_t x199 = -1;
	uint16_t x200 = 18U;
	static volatile int32_t t49 = 0;

	t49 = (((x197<=x198)<=x199)%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = -1;
	uint64_t x203 = 2279592018984270170LLU;
	static volatile uint64_t x204 = 148947854659LLU;
	uint64_t t50 = 93339LLU;

	t50 = (((x201<=x202)<=x203)%x204);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;

	t51 = (((x205<=x206)<=x207)%x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x213 = UINT32_MAX;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = -69;
	volatile uint32_t t52 = 42501U;

	t52 = (((x213<=x214)<=x215)%x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = 1;
	int64_t x220 = INT64_MIN;
	volatile int64_t t53 = 13773832031580LL;

	t53 = (((x217<=x218)<=x219)%x220);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x222 = 12;
	static uint16_t x223 = 290U;
	uint32_t x224 = 232642403U;
	static uint32_t t54 = 0U;

	t54 = (((x221<=x222)<=x223)%x224);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	int16_t x228 = -1;
	int32_t t55 = -291;

	t55 = (((x225<=x226)<=x227)%x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -11935753LL;
	static int8_t x232 = -37;

	t56 = (((x229<=x230)<=x231)%x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	static uint8_t x235 = 0U;
	int32_t x236 = INT32_MIN;

	t57 = (((x233<=x234)<=x235)%x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 1U;
	volatile int8_t x242 = 0;
	static int64_t x244 = INT64_MIN;
	int64_t t58 = -16239879240799LL;

	t58 = (((x241<=x242)<=x243)%x244);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 567148757573081382LLU;
	int64_t x246 = 3715LL;
	uint8_t x247 = 88U;
	static uint32_t x248 = 354412602U;
	volatile uint32_t t59 = 72842U;

	t59 = (((x245<=x246)<=x247)%x248);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = 103757;
	volatile int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	int32_t t60 = -5;

	t60 = (((x249<=x250)<=x251)%x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x254 = 4093198162LLU;
	int16_t x255 = -1;
	int32_t t61 = 15359;

	t61 = (((x253<=x254)<=x255)%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x257 = -59623419LL;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = UINT16_MAX;
	uint16_t x260 = 29809U;

	t62 = (((x257<=x258)<=x259)%x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t63 = 3750446666LL;

	t63 = (((x261<=x262)<=x263)%x264);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x266 = -263013319138LL;
	volatile int32_t x268 = -982;
	int32_t t64 = 93272;

	t64 = (((x265<=x266)<=x267)%x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = 5316LL;
	uint8_t x270 = 41U;
	int64_t x271 = INT64_MIN;

	t65 = (((x269<=x270)<=x271)%x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x274 = -1LL;
	int32_t x276 = 1;
	volatile int32_t t66 = 14;

	t66 = (((x273<=x274)<=x275)%x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x277 = INT32_MIN;
	int16_t x278 = 3609;
	static int8_t x279 = -1;
	int32_t x280 = 6138;
	volatile int32_t t67 = -77903;

	t67 = (((x277<=x278)<=x279)%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 3U;
	int64_t x282 = INT64_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t68 = -83483LL;

	t68 = (((x281<=x282)<=x283)%x284);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int64_t x286 = 5169LL;
	int32_t x287 = 374469;
	int16_t x288 = -70;
	volatile int32_t t69 = 79984;

	t69 = (((x285<=x286)<=x287)%x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = -52988809LL;
	uint32_t x290 = 689699U;
	volatile int64_t x291 = INT64_MIN;
	uint32_t x292 = 902127U;
	static volatile uint32_t t70 = 132912453U;

	t70 = (((x289<=x290)<=x291)%x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = 182893;
	static volatile int64_t x298 = INT64_MIN;
	int16_t x299 = 0;
	int16_t x300 = 7;
	int32_t t71 = -1930;

	t71 = (((x297<=x298)<=x299)%x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x303 = 2201;
	uint32_t x304 = 1U;
	uint32_t t72 = 913334013U;

	t72 = (((x301<=x302)<=x303)%x304);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = 2;
	volatile uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 2244411151641867007LLU;
	int8_t x308 = 1;
	int32_t t73 = -4;

	t73 = (((x305<=x306)<=x307)%x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x310 = 433512295;
	int8_t x311 = 2;
	int16_t x312 = INT16_MIN;
	static int32_t t74 = -3377506;

	t74 = (((x309<=x310)<=x311)%x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MAX;
	volatile int32_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 346LLU;
	static volatile uint64_t t75 = 36010LLU;

	t75 = (((x313<=x314)<=x315)%x316);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -10;
	uint64_t x318 = 15264630031289284LLU;
	volatile uint16_t x319 = 9826U;
	static int16_t x320 = -1;

	t76 = (((x317<=x318)<=x319)%x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x324 = 297056674LL;
	volatile int64_t t77 = -1591207LL;

	t77 = (((x321<=x322)<=x323)%x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x326 = 0U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t78 = 8362284381176932516LLU;

	t78 = (((x325<=x326)<=x327)%x328);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	volatile uint16_t x330 = 28991U;
	uint32_t x331 = 106665943U;
	volatile int16_t x332 = -1;
	int32_t t79 = 10297;

	t79 = (((x329<=x330)<=x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 5362LLU;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	int16_t x336 = INT16_MAX;
	int32_t t80 = 369093997;

	t80 = (((x333<=x334)<=x335)%x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x337 = 242540278235LL;
	static int8_t x338 = 6;
	int16_t x339 = -36;

	t81 = (((x337<=x338)<=x339)%x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x342 = 0U;
	static volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t82 = -863306;

	t82 = (((x341<=x342)<=x343)%x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = 3291U;
	int64_t x346 = -1LL;
	static int32_t x347 = 24;
	static int16_t x348 = -430;
	int32_t t83 = -165778;

	t83 = (((x345<=x346)<=x347)%x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;

	t84 = (((x349<=x350)<=x351)%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	static uint64_t x355 = 9124LLU;
	int32_t x356 = INT32_MIN;
	int32_t t85 = 6630;

	t85 = (((x353<=x354)<=x355)%x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = 658;
	int64_t x358 = INT64_MAX;
	int64_t x359 = INT64_MIN;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t86 = 3133;

	t86 = (((x357<=x358)<=x359)%x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	int8_t x364 = -1;
	volatile int32_t t87 = -4;

	t87 = (((x361<=x362)<=x363)%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -1;
	int64_t x366 = 141980945324LL;
	int16_t x367 = -2;
	volatile uint64_t x368 = 1973217482LLU;
	static volatile uint64_t t88 = 439657915LLU;

	t88 = (((x365<=x366)<=x367)%x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = 230339081798LL;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 14U;
	volatile uint32_t t89 = 216326809U;

	t89 = (((x369<=x370)<=x371)%x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = 1904U;
	uint8_t x375 = 99U;
	int8_t x376 = -1;
	static int32_t t90 = -40;

	t90 = (((x373<=x374)<=x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MAX;
	static int8_t x378 = 1;
	int16_t x380 = INT16_MIN;

	t91 = (((x377<=x378)<=x379)%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x382 = -1;
	int8_t x384 = -1;
	int32_t t92 = 110;

	t92 = (((x381<=x382)<=x383)%x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x385 = 0U;
	volatile int8_t x387 = 6;
	static int64_t x388 = INT64_MIN;
	int64_t t93 = 49444LL;

	t93 = (((x385<=x386)<=x387)%x388);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = 122202287;
	int32_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int32_t t94 = -12;

	t94 = (((x389<=x390)<=x391)%x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = -1LL;
	int16_t x395 = INT16_MIN;
	volatile int32_t x396 = INT32_MAX;
	volatile int32_t t95 = -59910;

	t95 = (((x393<=x394)<=x395)%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = UINT32_MAX;
	volatile int64_t x399 = INT64_MAX;
	uint16_t x400 = UINT16_MAX;
	static int32_t t96 = 1;

	t96 = (((x397<=x398)<=x399)%x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	volatile uint8_t x402 = 2U;
	static uint64_t x403 = 25727070LLU;
	int32_t x404 = -8570;
	int32_t t97 = 240378307;

	t97 = (((x401<=x402)<=x403)%x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x406 = -1;
	int64_t x408 = 277281LL;
	int64_t t98 = 12208530742826LL;

	t98 = (((x405<=x406)<=x407)%x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = UINT32_MAX;
	static uint8_t x410 = UINT8_MAX;
	int64_t x412 = INT64_MIN;
	volatile int64_t t99 = -12023679LL;

	t99 = (((x409<=x410)<=x411)%x412);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

