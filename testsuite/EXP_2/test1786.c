#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 1708451;
int64_t x9 = INT64_MIN;
static int32_t t2 = 2001;
static int32_t t3 = 402;
uint8_t x19 = 1U;
uint16_t x20 = 4U;
volatile int32_t t4 = -836847286;
uint64_t x21 = 13586137LLU;
int16_t x23 = -6;
int32_t x29 = -1;
static uint8_t x30 = 0U;
uint16_t x39 = 7U;
volatile int32_t t10 = 83;
static volatile int32_t t11 = 3;
static int64_t x49 = INT64_MIN;
uint16_t x54 = UINT16_MAX;
static int16_t x59 = 7217;
int8_t x75 = 0;
int32_t x93 = -50;
int32_t x95 = INT32_MAX;
uint16_t x99 = UINT16_MAX;
int32_t x112 = -3299363;
int8_t x113 = -14;
int16_t x116 = INT16_MIN;
int8_t x117 = INT8_MIN;
int8_t x118 = INT8_MIN;
int64_t x121 = -605434855715643551LL;
int8_t x123 = INT8_MIN;
static int32_t t31 = -804642;
volatile int64_t t32 = 1644665867498LL;
int8_t x134 = INT8_MAX;
uint32_t x141 = 15448U;
uint32_t x144 = UINT32_MAX;
int64_t x146 = INT64_MAX;
uint64_t x148 = UINT64_MAX;
int64_t x158 = -1LL;
int8_t x164 = INT8_MIN;
int16_t x165 = 1;
int8_t x166 = 5;
volatile int8_t x167 = -1;
static volatile uint64_t x171 = UINT64_MAX;
static int16_t x173 = INT16_MIN;
int32_t x186 = INT32_MIN;
int8_t x192 = -58;
static int64_t x199 = -1LL;
static int32_t x210 = INT32_MAX;
int64_t x211 = INT64_MIN;
static int32_t t50 = 122254601;
int8_t x217 = INT8_MIN;
static uint64_t x218 = UINT64_MAX;
uint8_t x222 = 124U;
volatile int8_t x226 = -35;
int32_t x238 = 429150817;
static int16_t x239 = -104;
int64_t t57 = -5711LL;
static uint64_t x243 = 201170LLU;
uint32_t x244 = UINT32_MAX;
volatile uint32_t t58 = 35102U;
uint32_t t59 = 3465885U;
volatile uint16_t x253 = 458U;
static int64_t x256 = INT64_MIN;
volatile int32_t t63 = -2355790;
static volatile uint16_t x265 = 244U;
volatile int32_t x268 = INT32_MIN;
volatile int32_t x273 = 1;
int16_t x277 = INT16_MIN;
volatile int64_t x279 = INT64_MAX;
int8_t x282 = -6;
volatile int16_t x284 = INT16_MIN;
static uint64_t x290 = UINT64_MAX;
static uint32_t t70 = 1221934688U;
volatile uint16_t x297 = 3U;
volatile int64_t x298 = INT64_MIN;
static int64_t x307 = -1LL;
volatile int8_t x315 = INT8_MIN;
int8_t x316 = INT8_MAX;
static int64_t x326 = INT64_MIN;
static int32_t t79 = -19505;
volatile int16_t x332 = -401;
static volatile uint64_t x342 = 2183108003899LLU;
int8_t x345 = INT8_MIN;
int64_t x349 = INT64_MAX;
static uint64_t x350 = 19LLU;
uint32_t x354 = 0U;
uint64_t x356 = 446502LLU;
int64_t x357 = INT64_MIN;
uint8_t x358 = UINT8_MAX;
uint64_t x360 = UINT64_MAX;
int64_t x372 = 99145638042155LL;
volatile int64_t t89 = 7818LL;
volatile int64_t x382 = -1LL;
uint16_t x383 = 24499U;
static volatile int32_t t92 = -29;
int16_t x390 = INT16_MIN;
static int64_t x399 = INT64_MAX;
int64_t t96 = -233588238583133LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MAX;
	static int32_t t0 = 15;

	t0 = ((x1==(x2&x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int8_t x6 = -15;
	volatile int64_t x7 = INT64_MAX;
	volatile uint8_t x8 = 6U;
	volatile int32_t t1 = 238993;

	t1 = ((x5==(x6&x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = -14782087LL;
	uint32_t x11 = 21U;
	uint8_t x12 = 4U;

	t2 = ((x9==(x10&x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 92U;

	t3 = ((x13==(x14&x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -57712164;
	int16_t x18 = -1;

	t4 = ((x17==(x18&x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 3065U;
	static int16_t x24 = -6;
	volatile int32_t t5 = 3;

	t5 = ((x21==(x22&x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 25U;
	int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -364739;

	t6 = ((x25==(x26&x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 278690704988008911LLU;

	t7 = ((x29==(x30&x31))%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int64_t x34 = -1LL;
	int32_t x35 = 21366131;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 16U;

	t8 = ((x33==(x34&x35))%x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = -1345908LL;
	int16_t x40 = -1;
	static int32_t t9 = -9;

	t9 = ((x37==(x38&x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint8_t x42 = 14U;
	int16_t x43 = -355;
	volatile int16_t x44 = INT16_MAX;

	t10 = ((x41==(x42&x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = 6517;

	t11 = ((x45==(x46&x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	uint32_t x51 = 40U;
	volatile int32_t x52 = INT32_MIN;
	int32_t t12 = 233651;

	t12 = ((x49==(x50&x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	int64_t x55 = -1LL;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 436081540;

	t13 = ((x53==(x54&x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 316U;
	int64_t x58 = -3LL;
	volatile int16_t x60 = INT16_MAX;
	int32_t t14 = -189317;

	t14 = ((x57==(x58&x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	uint8_t x62 = 0U;
	static int16_t x63 = INT16_MAX;
	uint8_t x64 = 24U;
	volatile int32_t t15 = 13824;

	t15 = ((x61==(x62&x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = -1;
	int64_t x66 = INT64_MAX;
	uint16_t x67 = 17U;
	static int64_t x68 = -3425390LL;
	static volatile int64_t t16 = 44122969073810LL;

	t16 = ((x65==(x66&x67))%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MAX;
	static uint32_t x70 = 243U;
	int32_t x71 = INT32_MIN;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 3936U;

	t17 = ((x69==(x70&x71))%x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 4057161U;
	int32_t x74 = INT32_MIN;
	uint8_t x76 = 6U;
	int32_t t18 = 7;

	t18 = ((x73==(x74&x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 255;
	int16_t x78 = -1;
	int64_t x79 = -1LL;
	static int8_t x80 = -1;
	int32_t t19 = -969058090;

	t19 = ((x77==(x78&x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MIN;
	volatile uint16_t x83 = 5540U;
	int64_t x84 = 16837LL;
	volatile int64_t t20 = 1584665LL;

	t20 = ((x81==(x82&x83))%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static int64_t x86 = INT64_MIN;
	uint16_t x87 = 6264U;
	static int64_t x88 = INT64_MAX;
	volatile int64_t t21 = 93902LL;

	t21 = ((x85==(x86&x87))%x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 16U;
	int32_t x90 = INT32_MIN;
	static int32_t x91 = -33342;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = 5729073;

	t22 = ((x89==(x90&x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	volatile int64_t x96 = -265680395257LL;
	volatile int64_t t23 = 113LL;

	t23 = ((x93==(x94&x95))%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 6LL;
	uint8_t x98 = 0U;
	int8_t x100 = 25;
	int32_t t24 = 430;

	t24 = ((x97==(x98&x99))%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -639102373;
	static uint16_t x102 = 45U;
	static int16_t x103 = 104;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 62;

	t25 = ((x101==(x102&x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile int8_t x106 = 2;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -78320;
	volatile int32_t t26 = -6;

	t26 = ((x105==(x106&x107))%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -1;
	static int64_t x111 = INT64_MIN;
	static volatile int32_t t27 = 0;

	t27 = ((x109==(x110&x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 2U;
	int8_t x115 = INT8_MIN;
	int32_t t28 = 230280;

	t28 = ((x113==(x114&x115))%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x119 = 2780U;
	uint16_t x120 = 4U;
	static int32_t t29 = -4097;

	t29 = ((x117==(x118&x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	uint16_t x124 = 7077U;
	volatile int32_t t30 = 703;

	t30 = ((x121==(x122&x123))%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 1020303949LLU;
	uint16_t x126 = 12U;
	volatile int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;

	t31 = ((x125==(x126&x127))%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 4U;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = 2487512741513781391LL;
	int64_t x132 = INT64_MAX;

	t32 = ((x129==(x130&x131))%x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 0;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -3;

	t33 = ((x133==(x134&x135))%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int64_t x138 = -1LL;
	volatile uint32_t x139 = UINT32_MAX;
	int32_t x140 = -1;
	volatile int32_t t34 = 346536;

	t34 = ((x137==(x138&x139))%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	static volatile int32_t x143 = INT32_MIN;
	uint32_t t35 = 3U;

	t35 = ((x141==(x142&x143))%x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	volatile int64_t x147 = INT64_MAX;
	volatile uint64_t t36 = 261413554945747LLU;

	t36 = ((x145==(x146&x147))%x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = -1;
	int64_t x154 = 6LL;
	int16_t x155 = 0;
	int8_t x156 = INT8_MIN;
	int32_t t37 = 21383301;

	t37 = ((x153==(x154&x155))%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 63996;
	static uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = INT64_MIN;
	int64_t t38 = -20074261997751372LL;

	t38 = ((x157==(x158&x159))%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = INT32_MIN;
	uint8_t x162 = 5U;
	int8_t x163 = -2;
	int32_t t39 = -56;

	t39 = ((x161==(x162&x163))%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t40 = 190LLU;

	t40 = ((x165==(x166&x167))%x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = -1;
	static uint32_t x170 = 231U;
	volatile int32_t x172 = -1;
	static volatile int32_t t41 = -6;

	t41 = ((x169==(x170&x171))%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 0U;
	volatile int16_t x175 = INT16_MAX;
	int8_t x176 = 1;
	int32_t t42 = 0;

	t42 = ((x173==(x174&x175))%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile uint64_t x178 = 49112239750LLU;
	static int32_t x179 = -2920;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = 43;

	t43 = ((x177==(x178&x179))%x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 0;
	uint32_t x182 = UINT32_MAX;
	int32_t x183 = INT32_MAX;
	volatile int16_t x184 = -1;
	static volatile int32_t t44 = -1;

	t44 = ((x181==(x182&x183))%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x185 = -1;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t45 = -84;

	t45 = ((x185==(x186&x187))%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	volatile int16_t x190 = INT16_MAX;
	static int16_t x191 = INT16_MIN;
	static volatile int32_t t46 = 126045;

	t46 = ((x189==(x190&x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x193 = UINT32_MAX;
	volatile int64_t x194 = -1LL;
	int64_t x195 = -17702932542144265LL;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t47 = -133;

	t47 = ((x193==(x194&x195))%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	static int8_t x200 = INT8_MIN;
	static volatile int32_t t48 = -487980866;

	t48 = ((x197==(x198&x199))%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x205 = INT64_MIN;
	static uint32_t x206 = UINT32_MAX;
	static uint32_t x207 = 229210U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = -3;

	t49 = ((x205==(x206&x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int32_t x212 = INT32_MIN;

	t50 = ((x209==(x210&x211))%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	uint64_t x214 = UINT64_MAX;
	volatile uint8_t x215 = 20U;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t51 = -50;

	t51 = ((x213==(x214&x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x219 = 22U;
	int16_t x220 = -1;
	int32_t t52 = -1439;

	t52 = ((x217==(x218&x219))%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = INT64_MAX;
	static uint8_t x223 = 7U;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t53 = 63;

	t53 = ((x221==(x222&x223))%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t54 = 2984;

	t54 = ((x225==(x226&x227))%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MAX;
	volatile int16_t x230 = -1123;
	static int8_t x231 = 13;
	int8_t x232 = INT8_MAX;
	volatile int32_t t55 = 130007886;

	t55 = ((x229==(x230&x231))%x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = 2757;
	volatile int16_t x235 = INT16_MIN;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t56 = 360979;

	t56 = ((x233==(x234&x235))%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int64_t x240 = 2LL;

	t57 = ((x237==(x238&x239))%x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = -1;

	t58 = ((x241==(x242&x243))%x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 28230505633918518LLU;
	uint32_t x248 = 1123U;

	t59 = ((x245==(x246&x247))%x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = -3;
	int16_t x251 = -1;
	int16_t x252 = -1;
	int32_t t60 = 13356;

	t60 = ((x249==(x250&x251))%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x254 = INT64_MIN;
	uint32_t x255 = 131469041U;
	static int64_t t61 = 19010LL;

	t61 = ((x253==(x254&x255))%x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 337068U;
	uint8_t x258 = 7U;
	int32_t x259 = 1976;
	int32_t x260 = -13090;
	static volatile int32_t t62 = -30;

	t62 = ((x257==(x258&x259))%x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int64_t x263 = -30353881746237LL;
	static volatile int8_t x264 = INT8_MAX;

	t63 = ((x261==(x262&x263))%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x266 = -113348217958LL;
	int64_t x267 = INT64_MIN;
	volatile int32_t t64 = 796580;

	t64 = ((x265==(x266&x267))%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	volatile int8_t x271 = 2;
	volatile uint16_t x272 = 1U;
	volatile int32_t t65 = -741876;

	t65 = ((x269==(x270&x271))%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 825854LLU;
	static int32_t x276 = -1;
	int32_t t66 = 16171991;

	t66 = ((x273==(x274&x275))%x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x278 = 3U;
	int8_t x280 = INT8_MIN;
	int32_t t67 = -1022917;

	t67 = ((x277==(x278&x279))%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	volatile int32_t t68 = 483815877;

	t68 = ((x281==(x282&x283))%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MAX;
	int64_t x287 = INT64_MAX;
	static uint16_t x288 = UINT16_MAX;
	static int32_t t69 = -133182;

	t69 = ((x285==(x286&x287))%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = INT16_MAX;
	volatile int32_t x291 = 435192;
	volatile uint32_t x292 = 30105601U;

	t70 = ((x289==(x290&x291))%x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MAX;
	uint32_t x294 = 414U;
	int32_t x295 = 271;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t71 = 2671699;

	t71 = ((x293==(x294&x295))%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t72 = 872U;

	t72 = ((x297==(x298&x299))%x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	volatile int16_t x303 = INT16_MIN;
	uint16_t x304 = 422U;
	int32_t t73 = 39;

	t73 = ((x301==(x302&x303))%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 124U;
	int8_t x306 = INT8_MIN;
	uint64_t x308 = 16140885567LLU;
	uint64_t t74 = 1LLU;

	t74 = ((x305==(x306&x307))%x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = -23;
	int32_t x310 = -1;
	volatile int64_t x311 = INT64_MIN;
	static volatile uint16_t x312 = UINT16_MAX;
	static volatile int32_t t75 = 4596452;

	t75 = ((x309==(x310&x311))%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -121LL;
	static int32_t x314 = INT32_MIN;
	volatile int32_t t76 = 2454735;

	t76 = ((x313==(x314&x315))%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 56U;
	static uint64_t x319 = 2208095631107298663LLU;
	int8_t x320 = INT8_MIN;
	int32_t t77 = 184;

	t77 = ((x317==(x318&x319))%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	static int64_t x323 = -668357LL;
	uint32_t x324 = UINT32_MAX;
	uint32_t t78 = 33589737U;

	t78 = ((x321==(x322&x323))%x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 15677019LL;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MAX;

	t79 = ((x325==(x326&x327))%x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	int64_t x330 = -577989429637320LL;
	int8_t x331 = 1;
	int32_t t80 = 11;

	t80 = ((x329==(x330&x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x333 = -15;
	int64_t x334 = 345447279835416LL;
	int8_t x335 = -1;
	int8_t x336 = -13;
	volatile int32_t t81 = -2039631;

	t81 = ((x333==(x334&x335))%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = 493U;
	volatile int8_t x343 = INT8_MIN;
	static uint32_t x344 = 40U;
	volatile uint32_t t82 = 30U;

	t82 = ((x341==(x342&x343))%x344);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x346 = 398373372133LL;
	uint8_t x347 = UINT8_MAX;
	static int32_t x348 = -1;
	volatile int32_t t83 = -60744934;

	t83 = ((x345==(x346&x347))%x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x351 = 826168789U;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t84 = -2;

	t84 = ((x349==(x350&x351))%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 18886U;
	int16_t x355 = INT16_MIN;
	static uint64_t t85 = 107153368LLU;

	t85 = ((x353==(x354&x355))%x356);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x359 = INT16_MIN;
	volatile uint64_t t86 = 116036261003857LLU;

	t86 = ((x357==(x358&x359))%x360);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x361 = 4U;
	int8_t x362 = 17;
	uint32_t x363 = 8353U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t87 = -51100927;

	t87 = ((x361==(x362&x363))%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -2170LL;
	volatile int32_t x366 = INT32_MIN;
	volatile int8_t x367 = -1;
	static volatile int16_t x368 = -1;
	int32_t t88 = 36355;

	t88 = ((x365==(x366&x367))%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 85001282LLU;
	uint32_t x371 = UINT32_MAX;

	t89 = ((x369==(x370&x371))%x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = 11U;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = INT8_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t90 = 479149;

	t90 = ((x373==(x374&x375))%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 34U;
	static int8_t x378 = -1;
	int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t91 = -958678986;

	t91 = ((x377==(x378&x379))%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = -1;
	int32_t x384 = INT32_MAX;

	t92 = ((x381==(x382&x383))%x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 169U;
	volatile uint16_t x386 = UINT16_MAX;
	static int16_t x387 = INT16_MIN;
	uint64_t x388 = 271038663338LLU;
	volatile uint64_t t93 = 61LLU;

	t93 = ((x385==(x386&x387))%x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = -1;
	int32_t x391 = -5164513;
	uint32_t x392 = 3380120U;
	uint32_t t94 = 50742337U;

	t94 = ((x389==(x390&x391))%x392);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 239U;
	uint8_t x394 = 5U;
	volatile int64_t x395 = -8584870779LL;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t95 = 10639104;

	t95 = ((x393==(x394&x395))%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 7713U;
	volatile uint16_t x398 = 33U;
	int64_t x400 = INT64_MIN;

	t96 = ((x397==(x398&x399))%x400);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = 2LL;
	int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	uint32_t x404 = 1924066761U;
	volatile uint32_t t97 = 10769U;

	t97 = ((x401==(x402&x403))%x404);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int16_t x406 = -49;
	uint64_t x407 = 6LLU;
	uint8_t x408 = UINT8_MAX;
	static int32_t t98 = 3395;

	t98 = ((x405==(x406&x407))%x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x409 = 0U;
	static int16_t x410 = -1;
	uint16_t x411 = 16740U;
	int64_t x412 = INT64_MAX;
	volatile int64_t t99 = -3136119474893419381LL;

	t99 = ((x409==(x410&x411))%x412);

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

