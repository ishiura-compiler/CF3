#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
volatile uint32_t x5 = 7429U;
int8_t x6 = 0;
uint32_t x11 = 251847U;
uint16_t x29 = 1166U;
int8_t x31 = INT8_MAX;
static int64_t x40 = INT64_MIN;
int8_t x41 = INT8_MAX;
uint16_t x42 = 82U;
int32_t t12 = -94692;
int64_t x53 = INT64_MIN;
int8_t x55 = INT8_MIN;
static int32_t x56 = INT32_MAX;
int64_t x57 = -29548LL;
int64_t x62 = -1686156627979LL;
static int32_t x63 = -1;
uint16_t x68 = 5051U;
uint64_t x76 = 115544725LLU;
uint32_t x82 = 58272780U;
static int16_t x90 = -1;
int32_t x93 = -1;
volatile int32_t x99 = INT32_MIN;
int32_t x113 = INT32_MIN;
volatile int16_t x119 = INT16_MIN;
volatile int32_t t30 = -43571;
uint16_t x127 = 0U;
int32_t x130 = INT32_MAX;
static uint16_t x135 = UINT16_MAX;
int32_t t33 = -1224;
static volatile int32_t x138 = INT32_MIN;
int64_t x145 = INT64_MIN;
static uint64_t x148 = 84012788217LLU;
uint8_t x149 = UINT8_MAX;
static uint8_t x153 = 2U;
int16_t x156 = -1;
uint32_t x159 = UINT32_MAX;
volatile int32_t t39 = -268400;
int64_t x162 = INT64_MIN;
static uint16_t x171 = 3U;
static int64_t x175 = INT64_MIN;
volatile int32_t t45 = -190;
uint8_t x187 = UINT8_MAX;
uint32_t x194 = UINT32_MAX;
static uint16_t x195 = UINT16_MAX;
int64_t x199 = -1LL;
int8_t x200 = -1;
int8_t x201 = -1;
int64_t x204 = -935065470756LL;
static int32_t t51 = -19932;
uint8_t x209 = 46U;
uint32_t x218 = UINT32_MAX;
static int32_t x222 = INT32_MIN;
int32_t x223 = 124958;
volatile int8_t x235 = -2;
static volatile int64_t x236 = INT64_MAX;
int32_t x250 = 15964;
int16_t x251 = INT16_MIN;
static int64_t x256 = INT64_MIN;
int8_t x267 = -1;
uint8_t x269 = 83U;
uint64_t x270 = UINT64_MAX;
uint16_t x275 = UINT16_MAX;
static volatile int8_t x278 = -4;
int32_t t69 = 481115;
static int64_t x285 = -5889741256LL;
static uint64_t x286 = 4229598240601LLU;
volatile int32_t x289 = -7832248;
int32_t x294 = -1;
volatile int32_t t73 = 90;
int8_t x306 = INT8_MAX;
volatile int32_t x309 = INT32_MIN;
static int32_t x312 = 41;
int8_t x313 = -1;
volatile int32_t t78 = 275949160;
int16_t x317 = -1;
int64_t x319 = INT64_MAX;
int64_t x324 = -1LL;
static volatile int32_t t80 = -132436793;
int64_t x327 = INT64_MIN;
volatile int16_t x331 = 30;
int64_t x334 = 98050LL;
static int16_t x340 = -1;
int16_t x341 = INT16_MIN;
volatile int64_t x346 = INT64_MIN;
volatile int32_t t86 = -4163525;
volatile int16_t x351 = 37;
int32_t x356 = INT32_MIN;
volatile int8_t x365 = INT8_MIN;
uint16_t x368 = UINT16_MAX;
int32_t t91 = 0;
int16_t x369 = -60;
volatile uint16_t x372 = UINT16_MAX;
uint64_t x382 = 3LLU;
uint32_t x385 = 1925898U;
int32_t t96 = 6552;
int16_t x390 = -1;
int32_t t97 = -1;
volatile int32_t x395 = -3706;
static volatile int16_t x396 = INT16_MIN;
volatile int32_t t99 = -138095;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int8_t x3 = 2;
	int32_t t0 = 391;

	t0 = (((x1^x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x7 = 437LLU;
	volatile uint32_t x8 = 8417U;
	int32_t t1 = -1;

	t1 = (((x5^x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 19LLU;
	static int64_t x10 = INT64_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 84555834;

	t2 = (((x9^x10)^x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -12;
	int64_t x14 = INT64_MIN;
	int8_t x15 = -7;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 516856750;

	t3 = (((x13^x14)^x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 4005;
	int8_t x18 = -1;
	int32_t x19 = INT32_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 3;

	t4 = (((x17^x18)^x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1924U;
	int64_t x22 = INT64_MAX;
	uint8_t x23 = 2U;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 304;

	t5 = (((x21^x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint8_t x26 = 24U;
	volatile uint64_t x27 = 286457837558799855LLU;
	int8_t x28 = 61;
	int32_t t6 = -41940901;

	t6 = (((x25^x26)^x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MIN;
	static uint16_t x32 = 2056U;
	int32_t t7 = 12524;

	t7 = (((x29^x30)^x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 11078U;
	int32_t x34 = -1;
	int64_t x35 = -2401155438988428LL;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 36496;

	t8 = (((x33^x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 918883LLU;
	static int8_t x38 = -1;
	volatile int8_t x39 = -1;
	int32_t t9 = -1020495;

	t9 = (((x37^x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -25977LL;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -4083420;

	t10 = (((x41^x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3;
	int64_t x46 = INT64_MAX;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -389409;

	t11 = (((x45^x46)^x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	static int16_t x52 = INT16_MIN;

	t12 = (((x49^x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x54 = INT16_MAX;
	int32_t t13 = -156826848;

	t13 = (((x53^x54)^x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x58 = 27319LLU;
	static int16_t x59 = INT16_MIN;
	static uint32_t x60 = 53U;
	volatile int32_t t14 = 1860509;

	t14 = (((x57^x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MAX;
	int64_t x64 = -1015180144629237LL;
	volatile int32_t t15 = 679623303;

	t15 = (((x61^x62)^x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 372163U;
	int16_t x66 = -1;
	int64_t x67 = 4537LL;
	volatile int32_t t16 = -1;

	t16 = (((x65^x66)^x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	static int16_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = -1;
	volatile int32_t t17 = 252157820;

	t17 = (((x69^x70)^x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int32_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	volatile int32_t t18 = -4139702;

	t18 = (((x73^x74)^x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 247U;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = -1LL;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 0;

	t19 = (((x77^x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 201U;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 6851;

	t20 = (((x81^x82)^x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 39U;
	volatile int16_t x86 = INT16_MAX;
	static uint64_t x87 = 12802083724796LLU;
	uint32_t x88 = 2018981448U;
	int32_t t21 = 25699198;

	t21 = (((x85^x86)^x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile uint32_t x91 = UINT32_MAX;
	uint16_t x92 = 3514U;
	volatile int32_t t22 = -3693210;

	t22 = (((x89^x90)^x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x94 = 0;
	uint32_t x95 = UINT32_MAX;
	volatile uint64_t x96 = 140644768817214635LLU;
	volatile int32_t t23 = -760765167;

	t23 = (((x93^x94)^x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 2U;
	int8_t x98 = INT8_MIN;
	uint8_t x100 = 1U;
	volatile int32_t t24 = 0;

	t24 = (((x97^x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t25 = -4400261;

	t25 = (((x101^x102)^x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -30LL;
	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = INT8_MIN;
	uint32_t x108 = 802U;
	volatile int32_t t26 = -1780116;

	t26 = (((x105^x106)^x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 13U;
	volatile uint8_t x110 = 0U;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = UINT8_MAX;
	static int32_t t27 = 4150853;

	t27 = (((x109^x110)^x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 191913;
	uint16_t x115 = 1147U;
	int8_t x116 = -1;
	int32_t t28 = -18883;

	t28 = (((x113^x114)^x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = 0;
	volatile uint16_t x120 = 8U;
	volatile int32_t t29 = 3545;

	t29 = (((x117^x118)^x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = 106U;
	static volatile int16_t x123 = -1;
	uint64_t x124 = 28513262LLU;

	t30 = (((x121^x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 23;
	int32_t x126 = INT32_MIN;
	static volatile uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = -87;

	t31 = (((x125^x126)^x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	int32_t x131 = INT32_MAX;
	volatile int32_t x132 = 0;
	static volatile int32_t t32 = -2842;

	t32 = (((x129^x130)^x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int16_t x134 = -13;
	int64_t x136 = 972498613990525LL;

	t33 = (((x133^x134)^x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -1;
	volatile int16_t x139 = INT16_MAX;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t34 = -11785157;

	t34 = (((x137^x138)^x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -86484;
	static volatile uint32_t x142 = 171603805U;
	int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t35 = 283113;

	t35 = (((x141^x142)^x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t t36 = -4;

	t36 = (((x145^x146)^x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MAX;
	static int32_t x151 = -1;
	static volatile int8_t x152 = 1;
	volatile int32_t t37 = 177;

	t37 = (((x149^x150)^x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 2565U;
	static int32_t t38 = -230358;

	t38 = (((x153^x154)^x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 9473;
	int64_t x158 = -1LL;
	int16_t x160 = INT16_MIN;

	t39 = (((x157^x158)^x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 2723137474LLU;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	static int32_t t40 = -224819274;

	t40 = (((x161^x162)^x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 652;
	int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MAX;
	static uint8_t x168 = UINT8_MAX;
	int32_t t41 = -591257;

	t41 = (((x165^x166)^x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 837U;
	int16_t x170 = -12;
	volatile int16_t x172 = -803;
	int32_t t42 = 388301;

	t42 = (((x169^x170)^x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 4U;
	volatile uint8_t x174 = 7U;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = 3950084;

	t43 = (((x173^x174)^x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = 1;
	int8_t x178 = 2;
	static int32_t x179 = -1;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -2260;

	t44 = (((x177^x178)^x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static volatile int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;
	static uint8_t x184 = UINT8_MAX;

	t45 = (((x181^x182)^x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 2U;
	int16_t x186 = 1022;
	int16_t x188 = -34;
	volatile int32_t t46 = 6412088;

	t46 = (((x185^x186)^x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint16_t x190 = 17604U;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 1U;
	volatile int32_t t47 = -44750;

	t47 = (((x189^x190)^x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int16_t x196 = -263;
	volatile int32_t t48 = -42491001;

	t48 = (((x193^x194)^x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = -2850;
	int32_t t49 = -2324539;

	t49 = (((x197^x198)^x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	volatile int64_t x203 = INT64_MAX;
	int32_t t50 = 1145;

	t50 = (((x201^x202)^x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = 24;
	int16_t x206 = -1;
	static int8_t x207 = INT8_MAX;
	int8_t x208 = 37;

	t51 = (((x205^x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MAX;
	int8_t x211 = -1;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 35;

	t52 = (((x209^x210)^x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 277;
	int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -52991;

	t53 = (((x213^x214)^x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -8994;
	static volatile int32_t t54 = 32222;

	t54 = (((x217^x218)^x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 43;
	uint64_t x224 = 583200847LLU;
	static int32_t t55 = 1664263;

	t55 = (((x221^x222)^x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	uint32_t x228 = 4U;
	int32_t t56 = 2;

	t56 = (((x225^x226)^x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 678;
	static int64_t x230 = INT64_MIN;
	int16_t x231 = 13117;
	static int16_t x232 = INT16_MIN;
	int32_t t57 = -1709;

	t57 = (((x229^x230)^x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MAX;
	volatile int32_t t58 = 6384;

	t58 = (((x233^x234)^x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = -258634;

	t59 = (((x237^x238)^x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int32_t x242 = -1;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -48;
	volatile int32_t t60 = -7;

	t60 = (((x241^x242)^x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -3310;
	static uint8_t x246 = 1U;
	static volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t61 = 4;

	t61 = (((x245^x246)^x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = 227;

	t62 = (((x249^x250)^x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 3U;
	volatile int16_t x254 = -157;
	uint32_t x255 = UINT32_MAX;
	volatile int32_t t63 = -127;

	t63 = (((x253^x254)^x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -998;
	static volatile int32_t t64 = -15224;

	t64 = (((x257^x258)^x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 1545U;
	uint64_t x262 = 2212467850002578LLU;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MAX;
	int32_t t65 = -46357;

	t65 = (((x261^x262)^x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 0LL;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -7119;

	t66 = (((x265^x266)^x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x271 = INT32_MAX;
	int32_t x272 = -361721745;
	int32_t t67 = -5183589;

	t67 = (((x269^x270)^x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = -1;
	int32_t x276 = -470;
	int32_t t68 = -2;

	t68 = (((x273^x274)^x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	uint16_t x279 = 10117U;
	uint32_t x280 = 0U;

	t69 = (((x277^x278)^x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MIN;
	uint16_t x282 = 60U;
	int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -3111190;

	t70 = (((x281^x282)^x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x287 = 3238531129867844978LLU;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 122811;

	t71 = (((x285^x286)^x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	volatile int64_t x292 = 864167719075225LL;
	volatile int32_t t72 = 121;

	t72 = (((x289^x290)^x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	volatile int8_t x296 = INT8_MAX;

	t73 = (((x293^x294)^x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -691;
	int8_t x298 = 0;
	static int64_t x299 = INT64_MAX;
	static uint64_t x300 = 237475913086LLU;
	int32_t t74 = 683;

	t74 = (((x297^x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MAX;
	volatile uint16_t x303 = 2U;
	int32_t x304 = -7464;
	volatile int32_t t75 = -325072358;

	t75 = (((x301^x302)^x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 62U;
	uint64_t x307 = 11276596255LLU;
	int8_t x308 = -1;
	int32_t t76 = 12052;

	t76 = (((x305^x306)^x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 21U;
	volatile int64_t x311 = INT64_MIN;
	static volatile int32_t t77 = -10;

	t77 = (((x309^x310)^x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	static volatile int64_t x315 = -62644025LL;
	int32_t x316 = 189858;

	t78 = (((x313^x314)^x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x318 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = -82813915;

	t79 = (((x317^x318)^x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = INT64_MAX;

	t80 = (((x321^x322)^x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	volatile uint64_t x326 = 19627322723786LLU;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 845539490;

	t81 = (((x325^x326)^x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x330 = INT32_MAX;
	volatile uint8_t x332 = 0U;
	int32_t t82 = 88;

	t82 = (((x329^x330)^x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -11616LL;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = -1;
	int32_t t83 = 1;

	t83 = (((x333^x334)^x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static uint64_t x338 = 41029276089264614LLU;
	int32_t x339 = INT32_MIN;
	static volatile int32_t t84 = -107672;

	t84 = (((x337^x338)^x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	static uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 1436U;
	static int32_t t85 = 41306352;

	t85 = (((x341^x342)^x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -118;
	uint8_t x347 = 0U;
	int16_t x348 = 14;

	t86 = (((x345^x346)^x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	int32_t x350 = 3547865;
	volatile uint32_t x352 = UINT32_MAX;
	static int32_t t87 = -29894951;

	t87 = (((x349^x350)^x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int64_t x355 = -3386286251991465665LL;
	int32_t t88 = -4;

	t88 = (((x353^x354)^x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	static uint64_t x358 = 11452928917398587LLU;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = 15774796559133356LLU;
	static int32_t t89 = -1638260;

	t89 = (((x357^x358)^x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	static uint16_t x362 = 1870U;
	uint64_t x363 = UINT64_MAX;
	static int64_t x364 = 872085LL;
	int32_t t90 = 4183859;

	t90 = (((x361^x362)^x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MIN;
	int16_t x367 = 67;

	t91 = (((x365^x366)^x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 12U;
	int32_t x371 = INT32_MIN;
	int32_t t92 = -462081811;

	t92 = (((x369^x370)^x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = 5134786728602487LLU;
	uint8_t x375 = UINT8_MAX;
	volatile int8_t x376 = 50;
	volatile int32_t t93 = -483342;

	t93 = (((x373^x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	int8_t x380 = 0;
	int32_t t94 = -1;

	t94 = (((x377^x378)^x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -3810;
	int32_t x383 = 0;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t95 = 990756;

	t95 = (((x381^x382)^x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 4U;
	int8_t x388 = -1;

	t96 = (((x385^x386)^x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;

	t97 = (((x389^x390)^x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = 3;
	static volatile uint8_t x394 = 3U;
	volatile int32_t t98 = -73070;

	t98 = (((x393^x394)^x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 6009U;
	int32_t x398 = INT32_MAX;
	uint64_t x399 = 502540037432036LLU;
	uint32_t x400 = 38U;

	t99 = (((x397^x398)^x399)<=x400);

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

