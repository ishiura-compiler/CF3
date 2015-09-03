#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x4 = INT32_MAX;
volatile uint64_t t1 = 2355818047LLU;
static uint8_t x10 = 21U;
int16_t x11 = INT16_MIN;
int16_t x13 = INT16_MIN;
static int8_t x14 = INT8_MIN;
int32_t x15 = INT32_MAX;
int8_t x16 = INT8_MIN;
uint16_t x20 = UINT16_MAX;
volatile int64_t x24 = INT64_MIN;
uint32_t x28 = UINT32_MAX;
static uint64_t x41 = UINT64_MAX;
static int64_t x42 = -469515LL;
static int8_t x44 = 58;
uint8_t x45 = UINT8_MAX;
volatile int64_t x47 = INT64_MAX;
int8_t x51 = INT8_MAX;
uint8_t x56 = 75U;
uint64_t x59 = UINT64_MAX;
static uint32_t x69 = 91952933U;
volatile uint8_t x72 = 42U;
int32_t x85 = INT32_MAX;
static uint8_t x89 = UINT8_MAX;
int32_t t22 = -3769487;
static int32_t x98 = INT32_MIN;
static int32_t x100 = -2116820;
int16_t x105 = 13230;
volatile int16_t x111 = -7;
int64_t x112 = -172043092932LL;
int64_t t27 = -81551LL;
volatile uint8_t x119 = 22U;
uint16_t x122 = 1U;
int64_t x124 = -3027087376106178LL;
volatile uint64_t x128 = 74LLU;
uint16_t x131 = UINT16_MAX;
int16_t x132 = -1;
static volatile int8_t x134 = INT8_MIN;
volatile int32_t x135 = INT32_MIN;
uint32_t t34 = 14878093U;
uint32_t x145 = UINT32_MAX;
volatile uint8_t x146 = 57U;
int32_t t38 = 1167954;
volatile int16_t x163 = INT16_MAX;
uint8_t x172 = 15U;
volatile int8_t x174 = 46;
int8_t x176 = INT8_MAX;
uint16_t x180 = 21864U;
volatile int64_t x181 = INT64_MIN;
int32_t x187 = 198700;
int16_t x193 = INT16_MIN;
int8_t x194 = INT8_MAX;
static int16_t x196 = INT16_MAX;
static uint32_t x198 = UINT32_MAX;
int64_t t48 = -725242LL;
volatile uint32_t t49 = 72943U;
int32_t x208 = INT32_MIN;
int64_t x212 = INT64_MIN;
uint64_t x214 = UINT64_MAX;
uint32_t x217 = 1495797876U;
int64_t x220 = 321913567262LL;
uint64_t x231 = 6LLU;
uint16_t x233 = UINT16_MAX;
volatile int16_t x237 = INT16_MIN;
volatile int32_t t58 = -566;
int32_t x250 = INT32_MAX;
static volatile uint64_t x251 = 2548590396743707043LLU;
int16_t x252 = 258;
int64_t x256 = INT64_MAX;
int32_t x264 = INT32_MIN;
int64_t x274 = INT64_MIN;
volatile int32_t t69 = -584;
int8_t x291 = -4;
uint32_t x295 = 25799971U;
static int32_t x297 = 167732264;
int8_t x301 = INT8_MAX;
uint64_t x306 = 1244811LLU;
uint32_t t76 = 0U;
int32_t x321 = 322122;
int32_t x327 = 15904805;
static volatile int8_t x334 = INT8_MAX;
int8_t x337 = -1;
uint32_t x343 = UINT32_MAX;
volatile int32_t x344 = -846;
volatile int64_t x347 = -3504LL;
static int32_t t84 = 4018610;
static int32_t x352 = -1;
static uint16_t x355 = 98U;
static int64_t x361 = INT64_MIN;
uint64_t x363 = 1574861933880LLU;
uint16_t x368 = 1U;
int16_t x369 = INT16_MAX;
uint64_t t91 = 31616635LLU;
uint8_t x388 = 24U;
int16_t x389 = INT16_MIN;
volatile int32_t t94 = -16808;
uint32_t t96 = 5U;
static int16_t x403 = -1;
static uint64_t x404 = 6245430506996615156LLU;
static int8_t x411 = -1;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	int64_t x3 = -1LL;
	volatile int32_t t0 = 1206;

	t0 = (((x1%x2)<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	uint16_t x7 = 2733U;
	uint64_t x8 = 5717613033556196LLU;

	t1 = (((x5%x6)<x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 32U;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -54529124;

	t2 = (((x9%x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t t3 = 30127;

	t3 = (((x13%x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 12U;
	int64_t x18 = INT64_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -8080532;

	t4 = (((x17%x18)<x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint8_t x22 = 3U;
	uint64_t x23 = 357615754521890259LLU;
	static volatile int64_t t5 = -4287LL;

	t5 = (((x21%x22)<x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 6U;
	static uint32_t t6 = 4U;

	t6 = (((x25%x26)<x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint32_t x30 = 36U;
	static int8_t x31 = -1;
	int32_t x32 = -1;
	volatile int32_t t7 = 47;

	t7 = (((x29%x30)<x31)/x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile uint8_t x34 = 8U;
	static volatile int8_t x35 = INT8_MIN;
	int64_t x36 = -1LL;
	int64_t t8 = -18524LL;

	t8 = (((x33%x34)<x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x38 = INT32_MIN;
	volatile int32_t x39 = -1;
	uint64_t x40 = 2196913672014583LLU;
	volatile uint64_t t9 = 29559LLU;

	t9 = (((x37%x38)<x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x43 = 2U;
	int32_t t10 = 0;

	t10 = (((x41%x42)<x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = 72;

	t11 = (((x45%x46)<x47)/x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 416U;
	static uint32_t x50 = UINT32_MAX;
	static uint16_t x52 = 12220U;
	int32_t t12 = 486698;

	t12 = (((x49%x50)<x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 2602506LLU;
	uint64_t x55 = 119703026614753085LLU;
	int32_t t13 = 4;

	t13 = (((x53%x54)<x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static int32_t x58 = -1;
	uint16_t x60 = 6U;
	volatile int32_t t14 = -28;

	t14 = (((x57%x58)<x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	static int32_t x62 = INT32_MIN;
	uint64_t x63 = 30642228LLU;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = -1;

	t15 = (((x61%x62)<x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 101LLU;
	volatile uint8_t x66 = 11U;
	int32_t x67 = -1;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 116457;

	t16 = (((x65%x66)<x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 7;
	int16_t x71 = -1;
	static volatile int32_t t17 = -2953;

	t17 = (((x69%x70)<x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 1U;
	int64_t x74 = -22928LL;
	int16_t x75 = -1281;
	static int16_t x76 = INT16_MAX;
	int32_t t18 = -13707;

	t18 = (((x73%x74)<x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static volatile uint64_t x78 = 854LLU;
	int16_t x79 = -1;
	static uint16_t x80 = 5838U;
	static int32_t t19 = -5953;

	t19 = (((x77%x78)<x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 0;
	int16_t x82 = -1;
	static uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t20 = -30838LL;

	t20 = (((x81%x82)<x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x86 = 2000U;
	volatile int64_t x87 = INT64_MIN;
	static uint32_t x88 = UINT32_MAX;
	volatile uint32_t t21 = 12540U;

	t21 = (((x85%x86)<x87)/x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MAX;
	volatile int16_t x91 = -1;
	static int8_t x92 = 7;

	t22 = (((x89%x90)<x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = -1;
	volatile int8_t x95 = INT8_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 14879;

	t23 = (((x93%x94)<x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	volatile int32_t x99 = INT32_MIN;
	int32_t t24 = -206260;

	t24 = (((x97%x98)<x99)/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static int32_t x102 = -70552313;
	int8_t x103 = INT8_MAX;
	uint16_t x104 = 1U;
	int32_t t25 = 684251;

	t25 = (((x101%x102)<x103)/x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 65U;
	uint64_t x107 = 399LLU;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = 0;

	t26 = (((x105%x106)<x107)/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MIN;

	t27 = (((x109%x110)<x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	uint32_t x116 = 12116958U;
	uint32_t t28 = 6049014U;

	t28 = (((x113%x114)<x115)/x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 8;
	int8_t x118 = -1;
	static uint16_t x120 = 23U;
	static volatile int32_t t29 = -5;

	t29 = (((x117%x118)<x119)/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 110003247LLU;
	int16_t x123 = INT16_MAX;
	volatile int64_t t30 = -1338192287037LL;

	t30 = (((x121%x122)<x123)/x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 659585LL;
	uint64_t t31 = 72354997527243809LLU;

	t31 = (((x125%x126)<x127)/x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 11499;
	int8_t x130 = INT8_MIN;
	volatile int32_t t32 = -2736642;

	t32 = (((x129%x130)<x131)/x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 14179U;
	static int64_t x136 = INT64_MIN;
	int64_t t33 = 24LL;

	t33 = (((x133%x134)<x135)/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 1873185;
	static uint32_t x138 = 4982152U;
	uint16_t x139 = 498U;
	uint32_t x140 = 161197U;

	t34 = (((x137%x138)<x139)/x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 26420144U;
	volatile uint32_t x142 = 9U;
	static uint32_t x143 = 78U;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -28519287;

	t35 = (((x141%x142)<x143)/x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x147 = 11U;
	static uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t36 = 39615028LLU;

	t36 = (((x145%x146)<x147)/x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 230;
	volatile int8_t x150 = -1;
	uint32_t x151 = 2223037U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 139;

	t37 = (((x149%x150)<x151)/x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	volatile int8_t x154 = INT8_MAX;
	uint32_t x155 = 30U;
	int8_t x156 = INT8_MIN;

	t38 = (((x153%x154)<x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 41U;
	static int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -2789084;

	t39 = (((x157%x158)<x159)/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 2;

	t40 = (((x161%x162)<x163)/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = 385665;

	t41 = (((x165%x166)<x167)/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 1U;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -4822894700551876LL;
	static int32_t t42 = 3783;

	t42 = (((x169%x170)<x171)/x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = 158141159696014688LLU;
	int32_t t43 = 1874;

	t43 = (((x173%x174)<x175)/x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -1487;
	uint32_t x179 = 496382615U;
	int32_t t44 = 390799663;

	t44 = (((x177%x178)<x179)/x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x182 = -1LL;
	static int8_t x183 = INT8_MIN;
	int64_t x184 = -1LL;
	volatile int64_t t45 = 3191548LL;

	t45 = (((x181%x182)<x183)/x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 0;
	static int16_t x186 = INT16_MAX;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = 1LL;

	t46 = (((x185%x186)<x187)/x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x195 = 1;
	static volatile int32_t t47 = 849;

	t47 = (((x193%x194)<x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MAX;
	int32_t x199 = -1;
	static volatile int64_t x200 = -1LL;

	t48 = (((x197%x198)<x199)/x200);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 3U;
	volatile int32_t x202 = INT32_MIN;
	int32_t x203 = 415002689;
	uint32_t x204 = 1051447107U;

	t49 = (((x201%x202)<x203)/x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MAX;
	volatile int32_t x206 = -1;
	uint64_t x207 = 58LLU;
	volatile int32_t t50 = 237075;

	t50 = (((x205%x206)<x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = 4305567795747LL;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = 7;
	int64_t t51 = -29LL;

	t51 = (((x209%x210)<x211)/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MAX;
	static uint64_t x215 = 23065441LLU;
	uint8_t x216 = UINT8_MAX;
	int32_t t52 = 229158;

	t52 = (((x213%x214)<x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x218 = 1U;
	volatile int16_t x219 = -1;
	volatile int64_t t53 = 1149013LL;

	t53 = (((x217%x218)<x219)/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = -1453265646LL;
	static int16_t x222 = INT16_MIN;
	int64_t x223 = -1LL;
	volatile int8_t x224 = -60;
	volatile int32_t t54 = -1945;

	t54 = (((x221%x222)<x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x225 = INT16_MIN;
	volatile uint32_t x226 = 10U;
	int32_t x227 = -115207;
	uint64_t x228 = 5496518LLU;
	volatile uint64_t t55 = 509467648373291LLU;

	t55 = (((x225%x226)<x227)/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	int16_t x230 = -1;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t56 = -823734;

	t56 = (((x229%x230)<x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = 4495;
	int32_t x235 = -113;
	uint64_t x236 = UINT64_MAX;
	uint64_t t57 = 24382029LLU;

	t57 = (((x233%x234)<x235)/x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -1;
	static int16_t x240 = -1291;

	t58 = (((x237%x238)<x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = -1LL;
	volatile int8_t x243 = 0;
	static int32_t x244 = INT32_MIN;
	int32_t t59 = -19841839;

	t59 = (((x241%x242)<x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	static int32_t t60 = 278714;

	t60 = (((x249%x250)<x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 1293U;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = 0U;
	int64_t t61 = -5384063096162LL;

	t61 = (((x253%x254)<x255)/x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = -1;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 23U;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t62 = 2602649LLU;

	t62 = (((x257%x258)<x259)/x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MAX;
	volatile int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	volatile int32_t t63 = 14;

	t63 = (((x261%x262)<x263)/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = 1903;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t64 = 50081U;

	t64 = (((x265%x266)<x267)/x268);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;
	static int32_t t65 = 2283;

	t65 = (((x269%x270)<x271)/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -121;
	int16_t x275 = INT16_MAX;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t66 = 32082168779272861LLU;

	t66 = (((x273%x274)<x275)/x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	static int8_t x278 = INT8_MAX;
	static volatile int64_t x279 = INT64_MIN;
	volatile uint64_t x280 = 1192462LLU;
	static uint64_t t67 = 1824606LLU;

	t67 = (((x277%x278)<x279)/x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = 14741611972014LLU;
	uint8_t x283 = 102U;
	volatile int8_t x284 = INT8_MIN;
	int32_t t68 = 957745;

	t68 = (((x281%x282)<x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x286 = -1;
	int64_t x287 = -1LL;
	int32_t x288 = INT32_MIN;

	t69 = (((x285%x286)<x287)/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 24579957062397968LLU;
	uint32_t x290 = 3U;
	int64_t x292 = -813LL;
	volatile int64_t t70 = 30LL;

	t70 = (((x289%x290)<x291)/x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	uint64_t x296 = 82715LLU;
	uint64_t t71 = 4553031583267987LLU;

	t71 = (((x293%x294)<x295)/x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int64_t t72 = -3846407477490780260LL;

	t72 = (((x297%x298)<x299)/x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = 796724LLU;
	volatile int32_t x303 = -1;
	uint16_t x304 = 1U;
	static int32_t t73 = -185871776;

	t73 = (((x301%x302)<x303)/x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MAX;
	int32_t x307 = INT32_MAX;
	volatile int32_t x308 = 516917;
	int32_t t74 = -6;

	t74 = (((x305%x306)<x307)/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	int32_t x310 = 27;
	int32_t x311 = -6969;
	uint32_t x312 = 464943U;
	static uint32_t t75 = 1675054U;

	t75 = (((x309%x310)<x311)/x312);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = 67U;
	int64_t x315 = 22114941104LL;
	uint32_t x316 = 123U;

	t76 = (((x313%x314)<x315)/x316);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MAX;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 14495U;
	volatile int32_t t77 = 31816;

	t77 = (((x317%x318)<x319)/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 15634523059983LLU;
	uint64_t x323 = 79176989931LLU;
	static int32_t x324 = -121;
	volatile int32_t t78 = 288260;

	t78 = (((x321%x322)<x323)/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;
	static int16_t x328 = 1;
	int32_t t79 = -183;

	t79 = (((x325%x326)<x327)/x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = -1;
	int64_t x331 = -1LL;
	static uint8_t x332 = UINT8_MAX;
	int32_t t80 = 223;

	t80 = (((x329%x330)<x331)/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	int64_t x335 = -1LL;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t81 = -43;

	t81 = (((x333%x334)<x335)/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = -26988;
	int64_t x339 = -77530511LL;
	int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 11866393;

	t82 = (((x337%x338)<x339)/x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = INT64_MAX;
	uint64_t x342 = UINT64_MAX;
	volatile int32_t t83 = -1996;

	t83 = (((x341%x342)<x343)/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = -1;
	int64_t x346 = 266746403428LL;
	int8_t x348 = -2;

	t84 = (((x345%x346)<x347)/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 2330989527109621LLU;
	int32_t x351 = INT32_MIN;
	volatile int32_t t85 = -847;

	t85 = (((x349%x350)<x351)/x352);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -3633;
	volatile int8_t x354 = INT8_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t86 = 4770562889080890LLU;

	t86 = (((x353%x354)<x355)/x356);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x362 = 118871LL;
	int64_t x364 = INT64_MIN;
	int64_t t87 = -121658616647LL;

	t87 = (((x361%x362)<x363)/x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x365 = 60;
	uint32_t x366 = 92788864U;
	int8_t x367 = -1;
	volatile int32_t t88 = 1;

	t88 = (((x365%x366)<x367)/x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x370 = -1;
	uint32_t x371 = 1967239177U;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t89 = 1LLU;

	t89 = (((x369%x370)<x371)/x372);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = 16919LL;
	int8_t x374 = INT8_MIN;
	int64_t x375 = -9078998598335216LL;
	static int16_t x376 = INT16_MAX;
	static int32_t t90 = -78505;

	t90 = (((x373%x374)<x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	static int32_t x378 = -1;
	uint64_t x379 = 31LLU;
	uint64_t x380 = 787446402326761LLU;

	t91 = (((x377%x378)<x379)/x380);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x381 = 131066136LL;
	volatile int16_t x382 = INT16_MIN;
	static volatile int64_t x383 = -20808540974597787LL;
	int16_t x384 = INT16_MIN;
	static int32_t t92 = 6170548;

	t92 = (((x381%x382)<x383)/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x385 = 1762LLU;
	int64_t x386 = INT64_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	int32_t t93 = -6;

	t93 = (((x385%x386)<x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = -3;
	uint64_t x391 = 4886177429LLU;
	int32_t x392 = INT32_MIN;

	t94 = (((x389%x390)<x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 10321294U;
	int32_t x394 = -1;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 3U;
	volatile int32_t t95 = -738223918;

	t95 = (((x393%x394)<x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = 5689305978625LL;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;

	t96 = (((x397%x398)<x399)/x400);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	static volatile int8_t x402 = INT8_MIN;
	uint64_t t97 = 9587LLU;

	t97 = (((x401%x402)<x403)/x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = 169087293;
	volatile int8_t x407 = INT8_MIN;
	int32_t x408 = -1;
	volatile int32_t t98 = -69106161;

	t98 = (((x405%x406)<x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	uint16_t x410 = 8U;
	int8_t x412 = 1;
	volatile int32_t t99 = 24;

	t99 = (((x409%x410)<x411)/x412);

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

