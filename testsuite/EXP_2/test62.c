#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = 229U;
int32_t t1 = 460590;
static uint16_t x10 = UINT16_MAX;
volatile int64_t x15 = INT64_MIN;
int32_t t4 = -10;
uint16_t x27 = UINT16_MAX;
static int8_t x28 = INT8_MIN;
uint64_t x34 = UINT64_MAX;
static uint64_t x38 = 1799800721LLU;
volatile int32_t t9 = 1748550;
volatile int32_t x51 = INT32_MIN;
int16_t x67 = -8;
volatile int32_t t16 = 951;
static int8_t x69 = -1;
int16_t x75 = INT16_MIN;
static int16_t x78 = INT16_MIN;
volatile int32_t t19 = -263637;
volatile int16_t x81 = -555;
static int64_t x86 = INT64_MIN;
int64_t x88 = INT64_MAX;
int8_t x91 = -1;
volatile uint64_t x99 = 8323251078588973LLU;
uint64_t x101 = 9LLU;
int32_t x103 = -1;
int32_t t25 = 17;
int32_t x105 = -1;
volatile uint16_t x109 = 3U;
volatile int32_t t29 = -4126890;
uint8_t x123 = UINT8_MAX;
static volatile int32_t t30 = 1782;
volatile int64_t x125 = -1LL;
uint8_t x133 = 103U;
uint8_t x138 = 0U;
int8_t x145 = INT8_MIN;
int32_t t36 = 759577269;
static uint16_t x152 = 11U;
uint64_t x155 = UINT64_MAX;
volatile int32_t t38 = -7522;
int32_t t42 = -1990507;
volatile int32_t x173 = -1;
volatile int32_t t44 = 3752700;
volatile int32_t t45 = 87222;
volatile int32_t x189 = 0;
static int16_t x193 = 2490;
static int16_t x198 = 0;
volatile int32_t t48 = -35910;
static uint16_t x206 = UINT16_MAX;
volatile int32_t t50 = -1;
static uint8_t x209 = 10U;
int32_t x211 = 81088926;
uint32_t x213 = UINT32_MAX;
volatile int32_t x216 = -73851;
int16_t x226 = INT16_MIN;
volatile int64_t x230 = 68805LL;
uint16_t x248 = 9U;
int32_t x249 = INT32_MIN;
volatile int32_t t61 = -5915;
int8_t x259 = -18;
int32_t t65 = -1;
uint8_t x283 = UINT8_MAX;
int16_t x287 = INT16_MAX;
int64_t x289 = INT64_MAX;
int8_t x290 = -1;
uint32_t x291 = 0U;
uint16_t x292 = UINT16_MAX;
static uint8_t x293 = 3U;
int8_t x295 = -1;
volatile int32_t t72 = -81;
volatile int64_t x309 = -1LL;
volatile uint64_t x318 = UINT64_MAX;
static uint64_t x321 = 3LLU;
volatile uint64_t x324 = 916696LLU;
volatile int32_t t75 = 1;
uint64_t x327 = UINT64_MAX;
int32_t t76 = 145;
int64_t x334 = INT64_MIN;
int16_t x338 = -1;
int64_t x342 = INT64_MIN;
static uint16_t x359 = UINT16_MAX;
static volatile uint32_t x374 = UINT32_MAX;
int32_t x380 = -1;
int32_t x382 = INT32_MIN;
volatile int64_t x385 = -1LL;
static uint8_t x390 = 13U;
volatile uint8_t x396 = UINT8_MAX;
uint64_t x409 = 3409262636217152264LLU;
int8_t x410 = INT8_MAX;
static volatile uint16_t x411 = 18997U;
uint8_t x421 = 15U;
int64_t x423 = INT64_MAX;
volatile int8_t x426 = INT8_MIN;
static uint16_t x428 = 3U;
volatile int32_t t99 = -1297;


void f0(void) {
	uint16_t x1 = 116U;
	int16_t x2 = INT16_MIN;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 0;

	t0 = ((x1%(x2+x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int8_t x6 = 1;
	int8_t x7 = 16;
	uint16_t x8 = 1267U;

	t1 = ((x5%(x6+x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 18U;
	static uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 92U;
	volatile int32_t t2 = 879363;

	t2 = ((x9%(x10+x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 6LL;
	int32_t x14 = INT32_MAX;
	int8_t x16 = -1;
	int32_t t3 = -1027;

	t3 = ((x13%(x14+x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	static uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;

	t4 = ((x17%(x18+x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 21U;
	static volatile int32_t x22 = -6;
	volatile uint8_t x23 = 0U;
	int16_t x24 = 499;
	int32_t t5 = 1;

	t5 = ((x21%(x22+x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static uint64_t x26 = UINT64_MAX;
	volatile int32_t t6 = 58;

	t6 = ((x25%(x26+x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -3;
	volatile int32_t t7 = 31;

	t7 = ((x29%(x30+x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 279770409079993345LLU;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	static int32_t t8 = -6;

	t8 = ((x33%(x34+x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile int64_t x39 = -1LL;
	static int32_t x40 = 103793389;

	t9 = ((x37%(x38+x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint32_t x42 = 1485206229U;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 7446015;

	t10 = ((x41%(x42+x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 34U;
	uint64_t x46 = 272537836396060705LLU;
	uint64_t x47 = UINT64_MAX;
	static volatile uint64_t x48 = UINT64_MAX;
	int32_t t11 = -1;

	t11 = ((x45%(x46+x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = 0;
	uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = 595;

	t12 = ((x49%(x50+x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = INT8_MAX;
	int32_t t13 = -918348;

	t13 = ((x53%(x54+x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	static uint64_t x59 = 3966435883LLU;
	int8_t x60 = 3;
	static volatile int32_t t14 = -853433759;

	t14 = ((x57%(x58+x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = 57U;
	volatile int8_t x63 = -2;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = -22;

	t15 = ((x61%(x62+x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -47019124;
	int16_t x66 = INT16_MIN;
	int16_t x68 = INT16_MIN;

	t16 = ((x65%(x66+x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	uint16_t x71 = 0U;
	int8_t x72 = -1;
	int32_t t17 = 1;

	t17 = ((x69%(x70+x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 33;
	static volatile int8_t x74 = INT8_MIN;
	uint64_t x76 = 2589111781313835LLU;
	volatile int32_t t18 = 1744461;

	t18 = ((x73%(x74+x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	uint64_t x79 = 606355682746LLU;
	int8_t x80 = INT8_MAX;

	t19 = ((x77%(x78+x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = -4420543917994LL;
	int16_t x83 = -2;
	static uint32_t x84 = UINT32_MAX;
	int32_t t20 = 1;

	t20 = ((x81%(x82+x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int32_t x87 = INT32_MAX;
	volatile int32_t t21 = 922219;

	t21 = ((x85%(x86+x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x90 = 129U;
	static int32_t x92 = -1;
	int32_t t22 = 0;

	t22 = ((x89%(x90+x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 5915U;
	static volatile int64_t x94 = -1LL;
	int8_t x95 = INT8_MAX;
	int8_t x96 = 0;
	static int32_t t23 = 2301863;

	t23 = ((x93%(x94+x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MIN;
	static uint16_t x98 = 8U;
	static uint64_t x100 = 203620593578LLU;
	static volatile int32_t t24 = -6788165;

	t24 = ((x97%(x98+x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x102 = 1319106242161788793LLU;
	uint16_t x104 = UINT16_MAX;

	t25 = ((x101%(x102+x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 46676917U;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	static volatile int32_t t26 = -205656;

	t26 = ((x105%(x106+x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = -28395794LL;
	uint8_t x111 = UINT8_MAX;
	uint32_t x112 = 295099996U;
	static int32_t t27 = -403617;

	t27 = ((x109%(x110+x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int64_t x114 = -139741913450303183LL;
	static int16_t x115 = INT16_MIN;
	int32_t x116 = -1;
	int32_t t28 = -15368;

	t28 = ((x113%(x114+x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = -1;
	int8_t x119 = 0;
	int16_t x120 = INT16_MAX;

	t29 = ((x117%(x118+x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 7245U;
	int64_t x122 = INT64_MIN;
	static uint64_t x124 = 51070LLU;

	t30 = ((x121%(x122+x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 11569U;
	int64_t x127 = 83LL;
	static volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -195855981;

	t31 = ((x125%(x126+x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 14681277813LLU;
	static uint16_t x130 = UINT16_MAX;
	volatile int8_t x131 = INT8_MIN;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t32 = -1982;

	t32 = ((x129%(x130+x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x134 = 30U;
	int8_t x135 = INT8_MIN;
	static int64_t x136 = -1LL;
	int32_t t33 = 59139706;

	t33 = ((x133%(x134+x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 23U;
	volatile int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -23152647;

	t34 = ((x137%(x138+x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MAX;
	uint8_t x142 = UINT8_MAX;
	static int32_t x143 = INT32_MIN;
	uint32_t x144 = 213U;
	volatile int32_t t35 = -19452;

	t35 = ((x141%(x142+x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x146 = 1LL;
	static volatile uint32_t x147 = UINT32_MAX;
	int32_t x148 = INT32_MIN;

	t36 = ((x145%(x146+x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = -27;
	volatile int32_t t37 = -12;

	t37 = ((x149%(x150+x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -14926361991679884LL;
	volatile int64_t x154 = -12905872200LL;
	int16_t x156 = -881;

	t38 = ((x153%(x154+x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MAX;
	uint16_t x160 = 0U;
	volatile int32_t t39 = -1;

	t39 = ((x157%(x158+x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 11U;
	int64_t x162 = -1LL;
	uint32_t x163 = 0U;
	uint16_t x164 = 9666U;
	volatile int32_t t40 = 3223783;

	t40 = ((x161%(x162+x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	volatile int16_t x166 = INT16_MAX;
	static uint32_t x167 = UINT32_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = -20;

	t41 = ((x165%(x166+x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1146;
	static uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;

	t42 = ((x169%(x170+x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x174 = INT16_MIN;
	uint64_t x175 = 6894105148437738LLU;
	static uint8_t x176 = 3U;
	int32_t t43 = 988123444;

	t43 = ((x173%(x174+x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = 3440182230999LL;
	uint64_t x179 = 1238LLU;
	static int64_t x180 = INT64_MAX;

	t44 = ((x177%(x178+x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MAX;
	int32_t x183 = -227239;
	uint16_t x184 = UINT16_MAX;

	t45 = ((x181%(x182+x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x190 = 1U;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t46 = -153666289;

	t46 = ((x189%(x190+x191))<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x194 = 365773657241330068LLU;
	volatile uint8_t x195 = 12U;
	int8_t x196 = -1;
	int32_t t47 = 0;

	t47 = ((x193%(x194+x195))<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x197 = 0U;
	static int8_t x199 = INT8_MIN;
	int8_t x200 = -1;

	t48 = ((x197%(x198+x199))<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 489U;
	uint16_t x202 = 3135U;
	int16_t x203 = -1;
	int8_t x204 = INT8_MAX;
	volatile int32_t t49 = -1;

	t49 = ((x201%(x202+x203))<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -1LL;
	static volatile int32_t x207 = INT32_MIN;
	int16_t x208 = -24;

	t50 = ((x205%(x206+x207))<=x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x210 = 50U;
	static int32_t x212 = -1;
	int32_t t51 = -425;

	t51 = ((x209%(x210+x211))<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = 15;
	static uint16_t x215 = UINT16_MAX;
	int32_t t52 = 1763;

	t52 = ((x213%(x214+x215))<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	static volatile int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MAX;
	static int32_t t53 = 46;

	t53 = ((x217%(x218+x219))<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -3;
	int8_t x222 = 5;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 6U;
	volatile int32_t t54 = 66;

	t54 = ((x221%(x222+x223))<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 34;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 5U;
	volatile int32_t t55 = -83703;

	t55 = ((x225%(x226+x227))<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -270378078378655304LL;
	volatile int32_t x231 = -41602652;
	int64_t x232 = INT64_MAX;
	int32_t t56 = 822494;

	t56 = ((x229%(x230+x231))<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	volatile int8_t x235 = INT8_MAX;
	static uint16_t x236 = 184U;
	volatile int32_t t57 = -18;

	t57 = ((x233%(x234+x235))<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 0;
	static int64_t x238 = -1LL;
	static int32_t x239 = -1;
	int8_t x240 = -1;
	int32_t t58 = 41;

	t58 = ((x237%(x238+x239))<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x241 = 60;
	static volatile uint32_t x242 = 46478531U;
	volatile uint16_t x243 = UINT16_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t59 = 42;

	t59 = ((x241%(x242+x243))<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 0;
	uint8_t x246 = 0U;
	int64_t x247 = INT64_MIN;
	volatile int32_t t60 = 277;

	t60 = ((x245%(x246+x247))<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = UINT64_MAX;
	volatile uint64_t x252 = 232712LLU;

	t61 = ((x249%(x250+x251))<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint64_t x260 = 93146603LLU;
	int32_t t62 = 0;

	t62 = ((x257%(x258+x259))<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -1LL;
	static int8_t x262 = INT8_MIN;
	uint64_t x263 = 771540LLU;
	uint64_t x264 = 1877999LLU;
	int32_t t63 = -250;

	t63 = ((x261%(x262+x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -200728082;
	static uint8_t x266 = 15U;
	uint64_t x267 = 1503188845080LLU;
	int32_t x268 = -1;
	static int32_t t64 = 329;

	t64 = ((x265%(x266+x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = 45;
	static int8_t x271 = -1;
	uint16_t x272 = 5U;

	t65 = ((x269%(x270+x271))<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	volatile int16_t x274 = -256;
	static int8_t x275 = INT8_MIN;
	static int16_t x276 = -7;
	int32_t t66 = -7680;

	t66 = ((x273%(x274+x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = 206U;
	int8_t x282 = -2;
	int32_t x284 = INT32_MIN;
	volatile int32_t t67 = 18;

	t67 = ((x281%(x282+x283))<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = UINT16_MAX;
	static int8_t x286 = -1;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t68 = 0;

	t68 = ((x285%(x286+x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t t69 = -37469028;

	t69 = ((x289%(x290+x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x294 = -30;
	int8_t x296 = INT8_MIN;
	int32_t t70 = -4235;

	t70 = ((x293%(x294+x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = INT32_MIN;
	static int64_t x298 = 4473709572101LL;
	int32_t x299 = -1;
	int8_t x300 = -1;
	int32_t t71 = -88633290;

	t71 = ((x297%(x298+x299))<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = 28;
	static int32_t x306 = 13023742;
	volatile uint16_t x307 = UINT16_MAX;
	uint32_t x308 = 5528U;

	t72 = ((x305%(x306+x307))<=x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x310 = UINT32_MAX;
	uint16_t x311 = 31U;
	int8_t x312 = INT8_MIN;
	static int32_t t73 = 484200868;

	t73 = ((x309%(x310+x311))<=x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -12507;
	volatile int32_t t74 = 231503013;

	t74 = ((x317%(x318+x319))<=x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;

	t75 = ((x321%(x322+x323))<=x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = 17;
	int16_t x326 = -3181;
	volatile uint8_t x328 = 7U;

	t76 = ((x325%(x326+x327))<=x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 313036U;
	volatile int32_t t77 = 17;

	t77 = ((x333%(x334+x335))<=x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MAX;
	uint32_t x339 = 1130497U;
	static uint32_t x340 = UINT32_MAX;
	static volatile int32_t t78 = -112887;

	t78 = ((x337%(x338+x339))<=x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x341 = 1U;
	volatile uint32_t x343 = 1623U;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t79 = -24649777;

	t79 = ((x341%(x342+x343))<=x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x345 = 63U;
	static int16_t x346 = -147;
	static uint16_t x347 = 26121U;
	uint64_t x348 = 14608LLU;
	int32_t t80 = 469;

	t80 = ((x345%(x346+x347))<=x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 296U;
	volatile int32_t x350 = 9;
	volatile int32_t x351 = -1;
	static volatile uint64_t x352 = UINT64_MAX;
	volatile int32_t t81 = -3;

	t81 = ((x349%(x350+x351))<=x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 0U;
	volatile int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -1;
	volatile int32_t t82 = 1;

	t82 = ((x353%(x354+x355))<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MIN;
	static uint16_t x358 = 0U;
	static uint32_t x360 = 1040244U;
	volatile int32_t t83 = -466060188;

	t83 = ((x357%(x358+x359))<=x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = 2U;
	int32_t x362 = INT32_MIN;
	static volatile uint8_t x363 = 12U;
	uint32_t x364 = UINT32_MAX;
	static volatile int32_t t84 = 12;

	t84 = ((x361%(x362+x363))<=x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = INT16_MIN;
	volatile int32_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t85 = 5647;

	t85 = ((x365%(x366+x367))<=x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x369 = 8066904080854599LLU;
	volatile uint16_t x370 = UINT16_MAX;
	int16_t x371 = 6654;
	static uint32_t x372 = UINT32_MAX;
	int32_t t86 = -352607;

	t86 = ((x369%(x370+x371))<=x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t87 = -578;

	t87 = ((x373%(x374+x375))<=x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x377 = 2U;
	uint64_t x378 = 4427664181299LLU;
	static int8_t x379 = INT8_MAX;
	static volatile int32_t t88 = -5;

	t88 = ((x377%(x378+x379))<=x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MAX;
	static uint8_t x383 = 29U;
	volatile int32_t x384 = 0;
	int32_t t89 = -1;

	t89 = ((x381%(x382+x383))<=x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = -1;
	static int8_t x388 = 58;
	static int32_t t90 = -53875045;

	t90 = ((x385%(x386+x387))<=x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = 8U;
	int64_t x391 = -1LL;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t91 = 1;

	t91 = ((x389%(x390+x391))<=x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MIN;
	static int64_t x395 = 1400990163913LL;
	volatile int32_t t92 = 146431907;

	t92 = ((x393%(x394+x395))<=x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	uint16_t x399 = 2249U;
	volatile uint8_t x400 = 39U;
	volatile int32_t t93 = 1;

	t93 = ((x397%(x398+x399))<=x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x405 = 26392901530288781LLU;
	static uint64_t x406 = 32030LLU;
	static volatile uint16_t x407 = 78U;
	static uint64_t x408 = UINT64_MAX;
	volatile int32_t t94 = -5;

	t94 = ((x405%(x406+x407))<=x408);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x412 = INT64_MIN;
	int32_t t95 = 132983762;

	t95 = ((x409%(x410+x411))<=x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = INT32_MAX;
	volatile uint16_t x414 = 27U;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = -72;
	static volatile int32_t t96 = -9;

	t96 = ((x413%(x414+x415))<=x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x422 = -1;
	int8_t x424 = INT8_MAX;
	volatile int32_t t97 = -205968297;

	t97 = ((x421%(x422+x423))<=x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = INT16_MIN;
	int32_t x427 = 961945052;
	int32_t t98 = -90;

	t98 = ((x425%(x426+x427))<=x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = 2744;
	volatile uint32_t x430 = UINT32_MAX;
	volatile int8_t x431 = 0;
	volatile int8_t x432 = 19;

	t99 = ((x429%(x430+x431))<=x432);

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

