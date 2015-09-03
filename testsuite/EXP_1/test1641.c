#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 954043804U;
int32_t x9 = 1470;
uint64_t x11 = UINT64_MAX;
uint16_t x12 = 7U;
int64_t x16 = INT64_MIN;
int32_t x17 = 1;
int32_t x24 = INT32_MIN;
int16_t x31 = 2;
static volatile int32_t x32 = 32079785;
volatile int32_t x37 = -366768;
uint64_t x38 = UINT64_MAX;
int64_t t9 = -655180LL;
static int32_t x43 = 0;
volatile int16_t x54 = INT16_MAX;
int16_t x61 = INT16_MIN;
static int8_t x68 = -1;
static uint16_t x70 = UINT16_MAX;
uint32_t x74 = 48U;
int8_t x76 = -1;
volatile int32_t t20 = -30582499;
int8_t x92 = 1;
int32_t t22 = 24;
int16_t x94 = INT16_MIN;
volatile int32_t t24 = -104543;
uint16_t x102 = 4159U;
uint64_t x104 = 254843606719470767LLU;
int32_t t27 = 49161;
int64_t x115 = 6907LL;
int32_t x122 = 37589;
int16_t x125 = INT16_MAX;
int32_t t31 = 5;
int32_t x129 = 5866;
int16_t x130 = -1;
static volatile uint32_t t32 = UINT32_MAX;
volatile uint16_t x134 = UINT16_MAX;
volatile int16_t x142 = INT16_MIN;
static volatile int8_t x144 = INT8_MIN;
int8_t x147 = -1;
int16_t x148 = -1;
uint8_t x149 = UINT8_MAX;
uint32_t x150 = 0U;
int8_t x152 = INT8_MIN;
int16_t x157 = 2;
int64_t x167 = -1LL;
volatile int64_t x178 = INT64_MAX;
volatile int32_t t44 = 48;
static int32_t x188 = -1;
volatile int32_t t47 = 132;
volatile int32_t t50 = -1089690;
volatile uint32_t x210 = 52936U;
static int32_t x219 = INT32_MIN;
static int16_t x220 = INT16_MAX;
static volatile int64_t x221 = INT64_MAX;
volatile uint64_t x224 = 2214973253155574LLU;
int32_t t56 = -2976382;
uint16_t x230 = UINT16_MAX;
int16_t x233 = -15;
static int8_t x235 = INT8_MAX;
int64_t x236 = INT64_MAX;
uint32_t x238 = 30U;
int16_t x239 = -1;
static int64_t t59 = 1381748510250294496LL;
volatile uint8_t x241 = UINT8_MAX;
static uint64_t x244 = UINT64_MAX;
int64_t x248 = -26281846731LL;
uint64_t x251 = UINT64_MAX;
int32_t t62 = 0;
int16_t x254 = INT16_MIN;
static int8_t x261 = -1;
int32_t t65 = -1367;
int64_t x270 = -1LL;
static uint16_t x272 = 325U;
int64_t t68 = -484LL;
volatile uint32_t x278 = UINT32_MAX;
uint32_t x282 = 12794594U;
uint8_t x287 = 8U;
int64_t x290 = -1837421365086LL;
uint64_t x291 = UINT64_MAX;
uint8_t x292 = 13U;
int8_t x294 = 0;
static volatile int32_t x296 = -1173963;
uint16_t x300 = 1208U;
static volatile int64_t x307 = 308837LL;
uint8_t x310 = UINT8_MAX;
int32_t t77 = -1;
volatile int64_t x316 = 2533LL;
uint32_t x320 = UINT32_MAX;
uint64_t x331 = UINT64_MAX;
int16_t x332 = INT16_MAX;
int16_t x333 = INT16_MIN;
volatile int64_t t85 = INT64_MIN;
int16_t x354 = -7624;
static int32_t t88 = 2492516;
int8_t x367 = 0;
volatile int8_t x369 = 1;
int32_t x371 = 176707616;
uint32_t x378 = 36921U;
volatile int32_t x383 = INT32_MAX;
volatile uint32_t t95 = 27593680U;


void f0(void) {
	volatile uint64_t x1 = 19338131653449192LLU;
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = -15938996561566LL;
	uint32_t x4 = 476U;

	t0 = (((x1<=x2)<=x3)*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 34865;
	int64_t x6 = INT64_MIN;
	int64_t x7 = -1LL;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -882493;

	t1 = (((x5<=x6)<=x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	int32_t t2 = 0;

	t2 = (((x9<=x10)<=x11)*x12);

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = -32;
	int64_t t3 = 16LL;

	t3 = (((x13<=x14)<=x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = -64423;
	static int64_t x19 = -1LL;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -162;

	t4 = (((x17<=x18)<=x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	uint64_t x22 = UINT64_MAX;
	static int64_t x23 = INT64_MIN;
	static volatile int32_t t5 = -1561165;

	t5 = (((x21<=x22)<=x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 89U;
	uint8_t x26 = 2U;
	volatile uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x25<=x26)<=x27)*x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static int16_t x30 = INT16_MIN;
	static volatile int32_t t7 = -38935392;

	t7 = (((x29<=x30)<=x31)*x32);

	if (t7 != 32079785) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	int64_t x35 = INT64_MIN;
	volatile int64_t x36 = -1LL;
	volatile int64_t t8 = -79898021LL;

	t8 = (((x33<=x34)<=x35)*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x39 = UINT16_MAX;
	int64_t x40 = 638252480393126520LL;

	t9 = (((x37<=x38)<=x39)*x40);

	if (t9 != 638252480393126520LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = 298281LLU;
	uint64_t x44 = 8108942576679585822LLU;
	uint64_t t10 = 208315600LLU;

	t10 = (((x41<=x42)<=x43)*x44);

	if (t10 != 8108942576679585822LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	int8_t x47 = -1;
	static volatile int64_t x48 = INT64_MIN;
	int64_t t11 = 40LL;

	t11 = (((x45<=x46)<=x47)*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -142;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

	t12 = (((x49<=x50)<=x51)*x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 1U;
	static int64_t x55 = INT64_MIN;
	uint8_t x56 = 31U;
	int32_t t13 = 818;

	t13 = (((x53<=x54)<=x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = INT16_MIN;
	uint8_t x58 = 1U;
	uint32_t x59 = 6979834U;
	int32_t x60 = -1;
	volatile int32_t t14 = -14;

	t14 = (((x57<=x58)<=x59)*x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	volatile int64_t x64 = -1LL;
	volatile int64_t t15 = 34519LL;

	t15 = (((x61<=x62)<=x63)*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 27599U;
	static uint8_t x66 = 19U;
	uint8_t x67 = 33U;
	volatile int32_t t16 = 15;

	t16 = (((x65<=x66)<=x67)*x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -16916677626LL;
	int64_t x71 = -5920LL;
	static uint16_t x72 = UINT16_MAX;
	int32_t t17 = -1;

	t17 = (((x69<=x70)<=x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 9987;
	volatile int16_t x75 = INT16_MAX;
	volatile int32_t t18 = -112;

	t18 = (((x73<=x74)<=x75)*x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 876101196U;
	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MIN;
	static volatile uint64_t x80 = 10698610933798LLU;
	static volatile uint64_t t19 = 27988504LLU;

	t19 = (((x77<=x78)<=x79)*x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 11178285LLU;
	static uint32_t x82 = 1695U;
	static uint8_t x83 = UINT8_MAX;
	uint8_t x84 = 11U;

	t20 = (((x81<=x82)<=x83)*x84);

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 44;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MAX;
	int8_t x88 = -45;
	int32_t t21 = 829;

	t21 = (((x85<=x86)<=x87)*x88);

	if (t21 != -45) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 11U;
	static uint64_t x90 = UINT64_MAX;
	volatile uint64_t x91 = UINT64_MAX;

	t22 = (((x89<=x90)<=x91)*x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int64_t x95 = -1LL;
	int32_t x96 = -13984;
	int32_t t23 = 2706;

	t23 = (((x93<=x94)<=x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static int32_t x98 = INT32_MAX;
	volatile uint8_t x99 = 15U;
	int32_t x100 = 187849592;

	t24 = (((x97<=x98)<=x99)*x100);

	if (t24 != 187849592) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	static uint64_t t25 = 226288863332979LLU;

	t25 = (((x101<=x102)<=x103)*x104);

	if (t25 != 254843606719470767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 17771U;
	volatile int64_t x106 = 560723794984354LL;
	static volatile int32_t x107 = -1;
	int32_t x108 = INT32_MAX;
	static int32_t t26 = 7;

	t26 = (((x105<=x106)<=x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = -31823220;
	volatile int64_t x111 = -1LL;
	static volatile uint8_t x112 = 33U;

	t27 = (((x109<=x110)<=x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5843U;
	volatile uint32_t x114 = 37342U;
	int16_t x116 = 3998;
	int32_t t28 = 352;

	t28 = (((x113<=x114)<=x115)*x116);

	if (t28 != 3998) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x118 = -1;
	uint64_t x119 = 3889157LLU;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (((x117<=x118)<=x119)*x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 6775785;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 5;
	static volatile int32_t t30 = 25699;

	t30 = (((x121<=x122)<=x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	volatile int32_t x128 = -5;

	t31 = (((x125<=x126)<=x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x131 = 3899933U;
	uint32_t x132 = UINT32_MAX;

	t32 = (((x129<=x130)<=x131)*x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 13349518879480572LLU;
	int16_t x135 = 134;
	static uint64_t x136 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = (((x133<=x134)<=x135)*x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = -1;
	int8_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 1LL;

	t34 = (((x137<=x138)<=x139)*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 27794U;
	volatile int32_t x143 = -46414100;
	static int32_t t35 = 3564429;

	t35 = (((x141<=x142)<=x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 3U;
	int32_t x146 = INT32_MIN;
	int32_t t36 = -14343;

	t36 = (((x145<=x146)<=x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = INT64_MAX;
	int32_t t37 = -96992387;

	t37 = (((x149<=x150)<=x151)*x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint8_t x154 = 0U;
	uint64_t x155 = 543LLU;
	int64_t x156 = -536719945247LL;
	int64_t t38 = 972589089LL;

	t38 = (((x153<=x154)<=x155)*x156);

	if (t38 != -536719945247LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x158 = INT64_MIN;
	uint64_t x159 = 10580339312991LLU;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = 0;

	t39 = (((x157<=x158)<=x159)*x160);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	static volatile int32_t x164 = -133;
	int32_t t40 = -2197545;

	t40 = (((x161<=x162)<=x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = 7U;
	static uint64_t x166 = 164LLU;
	static int32_t x168 = -1;
	int32_t t41 = 3;

	t41 = (((x165<=x166)<=x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 16663;
	static int64_t x170 = 555115911386858LL;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = -461;

	t42 = (((x169<=x170)<=x171)*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -10719536902362926LL;
	static int64_t t43 = -40777LL;

	t43 = (((x173<=x174)<=x175)*x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -137;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;

	t44 = (((x177<=x178)<=x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	volatile int16_t x182 = -125;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t45 = -236223309682730LL;

	t45 = (((x181<=x182)<=x183)*x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -4049902;
	volatile int32_t t46 = 1;

	t46 = (((x185<=x186)<=x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 6;
	volatile int8_t x190 = 6;
	int32_t x191 = INT32_MIN;
	int16_t x192 = -7;

	t47 = (((x189<=x190)<=x191)*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile uint32_t x194 = 31572086U;
	volatile int8_t x195 = 10;
	uint8_t x196 = 1U;
	volatile int32_t t48 = 9892444;

	t48 = (((x193<=x194)<=x195)*x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = -23;
	volatile int64_t x199 = 923332769608078645LL;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 58728018;

	t49 = (((x197<=x198)<=x199)*x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -246;
	static int8_t x202 = 4;
	uint32_t x203 = 117900786U;
	static int8_t x204 = INT8_MIN;

	t50 = (((x201<=x202)<=x203)*x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MAX;
	volatile int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = INT32_MIN;

	t51 = (((x205<=x206)<=x207)*x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 19U;
	int16_t x211 = -338;
	int16_t x212 = -7;
	static volatile int32_t t52 = 742223;

	t52 = (((x209<=x210)<=x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -191;
	static int16_t x214 = INT16_MAX;
	static uint16_t x215 = 72U;
	uint64_t x216 = 6724022LLU;
	volatile uint64_t t53 = 15833LLU;

	t53 = (((x213<=x214)<=x215)*x216);

	if (t53 != 6724022LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 28265U;
	static int32_t x218 = INT32_MIN;
	volatile int32_t t54 = -612679951;

	t54 = (((x217<=x218)<=x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x222 = UINT32_MAX;
	static uint8_t x223 = 29U;
	uint64_t t55 = 1075400249655380160LLU;

	t55 = (((x221<=x222)<=x223)*x224);

	if (t55 != 2214973253155574LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = 7965592369063551726LLU;
	uint32_t x226 = 15U;
	static uint64_t x227 = UINT64_MAX;
	int8_t x228 = -1;

	t56 = (((x225<=x226)<=x227)*x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = -1;
	int32_t t57 = -183171563;

	t57 = (((x229<=x230)<=x231)*x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 12LLU;
	int64_t t58 = INT64_MAX;

	t58 = (((x233<=x234)<=x235)*x236);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	static int64_t x240 = -1LL;

	t59 = (((x237<=x238)<=x239)*x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x242 = 15U;
	int64_t x243 = INT64_MIN;
	volatile uint64_t t60 = 101904393LLU;

	t60 = (((x241<=x242)<=x243)*x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 2U;
	static int16_t x246 = INT16_MAX;
	int64_t x247 = -12456452LL;
	volatile int64_t t61 = 56355790049633LL;

	t61 = (((x245<=x246)<=x247)*x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 77978259998570LLU;
	int8_t x250 = 10;
	volatile int16_t x252 = INT16_MIN;

	t62 = (((x249<=x250)<=x251)*x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int64_t x255 = 381343LL;
	static int32_t x256 = -1;
	volatile int32_t t63 = 494;

	t63 = (((x253<=x254)<=x255)*x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 188905324929307LLU;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 1U;
	uint16_t x260 = 0U;
	volatile int32_t t64 = 7585943;

	t64 = (((x257<=x258)<=x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = -1;
	int8_t x263 = 1;
	int8_t x264 = INT8_MIN;

	t65 = (((x261<=x262)<=x263)*x264);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = 9U;
	int16_t x267 = INT16_MIN;
	volatile int64_t x268 = INT64_MAX;
	volatile int64_t t66 = 1LL;

	t66 = (((x265<=x266)<=x267)*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 116704728575982LLU;
	static volatile int8_t x271 = INT8_MIN;
	volatile int32_t t67 = 2818218;

	t67 = (((x269<=x270)<=x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 3502694844527322856LLU;
	static uint64_t x274 = 324792239473LLU;
	int16_t x275 = -1;
	int64_t x276 = -1LL;

	t68 = (((x273<=x274)<=x275)*x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 419140934LLU;
	int64_t x279 = INT64_MAX;
	static uint16_t x280 = 30U;
	volatile int32_t t69 = 4678856;

	t69 = (((x277<=x278)<=x279)*x280);

	if (t69 != 30) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = 1924LLU;
	volatile uint64_t t70 = 19885LLU;

	t70 = (((x281<=x282)<=x283)*x284);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	static int16_t x286 = 60;
	int32_t x288 = -2635;
	static volatile int32_t t71 = -1431462;

	t71 = (((x285<=x286)<=x287)*x288);

	if (t71 != -2635) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 173679367U;
	int32_t t72 = -41;

	t72 = (((x289<=x290)<=x291)*x292);

	if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	uint32_t x295 = 5629891U;
	int32_t t73 = -42184;

	t73 = (((x293<=x294)<=x295)*x296);

	if (t73 != -1173963) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = 118252540018633LL;
	int32_t t74 = 0;

	t74 = (((x297<=x298)<=x299)*x300);

	if (t74 != 1208) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = -61;
	uint32_t x304 = 951U;
	uint32_t t75 = 62500539U;

	t75 = (((x301<=x302)<=x303)*x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1854;
	static uint16_t x306 = 37U;
	int8_t x308 = 1;
	volatile int32_t t76 = -1;

	t76 = (((x305<=x306)<=x307)*x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = 45961589553LL;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;

	t77 = (((x309<=x310)<=x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	uint8_t x314 = 7U;
	uint16_t x315 = 1U;
	int64_t t78 = -55525077198720937LL;

	t78 = (((x313<=x314)<=x315)*x316);

	if (t78 != 2533LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 22;
	static int16_t x318 = INT16_MIN;
	static uint64_t x319 = UINT64_MAX;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (((x317<=x318)<=x319)*x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MAX;
	int32_t t80 = -514955729;

	t80 = (((x321<=x322)<=x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = UINT32_MAX;
	uint16_t x326 = 55U;
	int8_t x327 = INT8_MIN;
	int16_t x328 = 9;
	int32_t t81 = -140576902;

	t81 = (((x325<=x326)<=x327)*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = 10408296849478546LL;
	int32_t t82 = 994;

	t82 = (((x329<=x330)<=x331)*x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 3LL;
	int8_t x335 = -1;
	uint32_t x336 = 6U;
	uint32_t t83 = 1924349U;

	t83 = (((x333<=x334)<=x335)*x336);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = INT16_MIN;
	uint8_t x339 = 65U;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (((x337<=x338)<=x339)*x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 6425655681090587079LLU;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = 47228;
	static int64_t x344 = INT64_MIN;

	t85 = (((x341<=x342)<=x343)*x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2622054673718LLU;
	int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	int32_t x348 = -1;
	int32_t t86 = -953;

	t86 = (((x345<=x346)<=x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	volatile int32_t x350 = -1;
	static int8_t x351 = 1;
	int64_t x352 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = (((x349<=x350)<=x351)*x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = 3;

	t88 = (((x353<=x354)<=x355)*x356);

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -8082393LL;
	static int64_t x358 = -1LL;
	uint32_t x359 = UINT32_MAX;
	static int16_t x360 = -1;
	volatile int32_t t89 = 12347;

	t89 = (((x357<=x358)<=x359)*x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	static int16_t x362 = -1;
	volatile int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t90 = 20;

	t90 = (((x361<=x362)<=x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x366 = 6;
	volatile uint32_t x368 = UINT32_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (((x365<=x366)<=x367)*x368);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	uint16_t x372 = 0U;
	volatile int32_t t92 = -54826;

	t92 = (((x369<=x370)<=x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1428U;
	int32_t x374 = 1;
	static uint64_t x375 = 2637495LLU;
	volatile int16_t x376 = INT16_MIN;
	static volatile int32_t t93 = 71;

	t93 = (((x373<=x374)<=x375)*x376);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	int8_t x379 = -29;
	uint8_t x380 = 27U;
	int32_t t94 = 0;

	t94 = (((x377<=x378)<=x379)*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 1U;
	uint16_t x382 = UINT16_MAX;
	volatile uint32_t x384 = 55968960U;

	t95 = (((x381<=x382)<=x383)*x384);

	if (t95 != 55968960U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x385 = INT64_MAX;
	static int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MAX;
	int16_t x388 = -10;
	int32_t t96 = -1;

	t96 = (((x385<=x386)<=x387)*x388);

	if (t96 != -10) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int16_t x390 = 100;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 29;

	t97 = (((x389<=x390)<=x391)*x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1975;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = 97U;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 18864;

	t98 = (((x393<=x394)<=x395)*x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	static volatile uint64_t x400 = 2968LLU;
	volatile uint64_t t99 = 1LLU;

	t99 = (((x397<=x398)<=x399)*x400);

	if (t99 != 2968LLU) { NG(); } else { ; }
	
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

