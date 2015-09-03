#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int8_t x10 = INT8_MIN;
static int32_t x14 = -1005;
static uint16_t x16 = 4901U;
uint32_t x22 = 898321363U;
static volatile int32_t t5 = -11371;
volatile int16_t x30 = INT16_MIN;
int8_t x33 = -9;
uint8_t x37 = UINT8_MAX;
int32_t x40 = INT32_MAX;
volatile int64_t x43 = INT64_MIN;
static int64_t x44 = -1LL;
volatile uint8_t x50 = UINT8_MAX;
static volatile int8_t x53 = INT8_MIN;
int32_t t13 = -210;
volatile uint64_t x61 = 45LLU;
uint8_t x66 = UINT8_MAX;
int16_t x67 = 341;
int8_t x71 = -1;
static uint16_t x72 = 1U;
int32_t x78 = -2639;
volatile int32_t x81 = INT32_MIN;
uint16_t x82 = UINT16_MAX;
int32_t x83 = INT32_MAX;
int32_t x88 = -8;
volatile int32_t t20 = -1;
int32_t t21 = 7388;
int8_t x98 = INT8_MIN;
int32_t t26 = 3;
uint8_t x113 = UINT8_MAX;
int32_t t27 = 459;
int32_t x122 = -1;
volatile uint32_t x127 = UINT32_MAX;
static int64_t x129 = 45388819LL;
int32_t x139 = INT32_MIN;
static uint64_t x142 = UINT64_MAX;
volatile int16_t x144 = INT16_MIN;
volatile int32_t x145 = -3511098;
int32_t x149 = INT32_MIN;
volatile int32_t t35 = 17018;
static int64_t x154 = INT64_MIN;
int64_t x174 = -19LL;
int16_t x180 = INT16_MIN;
uint16_t x182 = 293U;
int32_t x184 = -1;
int8_t x191 = -1;
int32_t x210 = 1655;
int32_t x213 = INT32_MIN;
int32_t x214 = INT32_MIN;
static int64_t x217 = 12165LL;
int8_t x223 = -6;
int8_t x230 = INT8_MIN;
volatile int8_t x231 = 5;
int16_t x234 = -1;
static volatile int32_t t55 = 278933150;
static uint64_t x249 = 5600470LLU;
int8_t x252 = -30;
uint8_t x253 = UINT8_MAX;
uint32_t x265 = 5U;
int32_t t61 = 18079312;
static int32_t x273 = 3;
uint64_t x274 = UINT64_MAX;
int32_t t62 = 41117830;
int64_t x278 = -1LL;
int16_t x279 = -229;
int32_t x286 = INT32_MIN;
static volatile uint16_t x290 = 6U;
volatile int16_t x295 = 2;
volatile int32_t t67 = -151;
uint8_t x299 = 33U;
volatile int64_t x300 = -1LL;
int8_t x301 = -1;
volatile uint8_t x303 = 30U;
int32_t x306 = 30457721;
uint64_t x309 = UINT64_MAX;
uint8_t x317 = 2U;
int8_t x319 = -1;
volatile int32_t t74 = -5568;
static int64_t x327 = -2849806974LL;
static volatile uint8_t x328 = 2U;
int16_t x330 = -1;
int32_t x331 = INT32_MIN;
int16_t x332 = 452;
int16_t x334 = INT16_MIN;
volatile uint32_t x336 = 3851654U;
int8_t x338 = -2;
int16_t x346 = -62;
int8_t x348 = INT8_MIN;
static volatile int32_t t79 = -7465776;
static uint8_t x352 = UINT8_MAX;
uint16_t x358 = 1776U;
static int16_t x364 = INT16_MIN;
int32_t t82 = -11;
uint64_t x369 = 4162306827878685318LLU;
volatile uint8_t x385 = 2U;
uint64_t x391 = 214838522LLU;
uint8_t x404 = 1U;
int8_t x408 = -6;
int64_t x416 = -1LL;
int32_t x423 = -1;
volatile uint16_t x424 = UINT16_MAX;
static int8_t x431 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x3 = INT8_MAX;
	static uint8_t x4 = 4U;
	int32_t t0 = -6632366;

	t0 = (((x1%x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x9 = UINT32_MAX;
	uint16_t x11 = 1029U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t1 = 3;

	t1 = (((x9%x10)+x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int8_t x15 = 5;
	volatile int32_t t2 = 18125;

	t2 = (((x13%x14)+x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 50133081880LLU;
	uint64_t x19 = 3306623339399LLU;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -14671280;

	t3 = (((x17%x18)+x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint64_t x23 = 1552842293409214LLU;
	volatile uint32_t x24 = 24052208U;
	int32_t t4 = -7390;

	t4 = (((x21%x22)+x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -15;
	volatile int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	volatile uint8_t x28 = UINT8_MAX;

	t5 = (((x25%x26)+x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	volatile uint64_t x31 = 4105830853758425LLU;
	int64_t x32 = -1LL;
	int32_t t6 = -32000;

	t6 = (((x29%x30)+x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x34 = 9;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = 68281;

	t7 = (((x33%x34)+x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -1;
	int32_t x39 = INT32_MIN;
	volatile int32_t t8 = -81286449;

	t8 = (((x37%x38)+x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 105812508;
	int8_t x42 = -1;
	volatile int32_t t9 = -47787;

	t9 = (((x41%x42)+x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	int8_t x46 = -20;
	uint32_t x47 = 73U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = -633839;

	t10 = (((x45%x46)+x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int8_t x51 = INT8_MAX;
	int16_t x52 = 268;
	int32_t t11 = 2;

	t11 = (((x49%x50)+x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = -1;
	uint16_t x55 = 929U;
	int16_t x56 = 9;
	int32_t t12 = -24;

	t12 = (((x53%x54)+x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 8265416246LLU;
	int64_t x58 = INT64_MIN;
	uint32_t x59 = 15U;
	uint64_t x60 = 50LLU;

	t13 = (((x57%x58)+x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MIN;
	int64_t x63 = 84194583494081447LL;
	int64_t x64 = 793390257560612472LL;
	static volatile int32_t t14 = 47;

	t14 = (((x61%x62)+x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int32_t x68 = 58;
	int32_t t15 = 686713314;

	t15 = (((x65%x66)+x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 76;
	int64_t x70 = 38254769429248891LL;
	static volatile int32_t t16 = -584166;

	t16 = (((x69%x70)+x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	volatile int32_t x75 = INT32_MIN;
	volatile int8_t x76 = -1;
	volatile int32_t t17 = -1;

	t17 = (((x73%x74)+x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 1U;
	uint8_t x79 = 2U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t18 = -6;

	t18 = (((x77%x78)+x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x84 = 917U;
	int32_t t19 = 13;

	t19 = (((x81%x82)+x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 233U;
	uint32_t x86 = 656362U;
	volatile uint32_t x87 = UINT32_MAX;

	t20 = (((x85%x86)+x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = 725097614U;
	volatile int8_t x90 = INT8_MIN;
	int16_t x91 = -8139;
	volatile int32_t x92 = -1;

	t21 = (((x89%x90)+x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 11;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	static int32_t x96 = INT32_MAX;
	int32_t t22 = 28722;

	t22 = (((x93%x94)+x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	static int32_t x99 = -2057992;
	volatile int8_t x100 = INT8_MIN;
	static int32_t t23 = -122;

	t23 = (((x97%x98)+x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = UINT16_MAX;
	static int8_t x102 = INT8_MAX;
	int64_t x103 = -1LL;
	int16_t x104 = -1;
	volatile int32_t t24 = -1114;

	t24 = (((x101%x102)+x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 40LL;
	volatile int64_t x106 = INT64_MIN;
	uint64_t x107 = 808164LLU;
	int16_t x108 = -1;
	int32_t t25 = 16535353;

	t25 = (((x105%x106)+x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x110 = -1;
	uint8_t x111 = 0U;
	volatile uint32_t x112 = UINT32_MAX;

	t26 = (((x109%x110)+x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = INT32_MIN;
	volatile uint64_t x115 = 898LLU;
	int64_t x116 = -1LL;

	t27 = (((x113%x114)+x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = 4;
	uint64_t x118 = 416LLU;
	int32_t x119 = 14314;
	uint32_t x120 = 17968U;
	volatile int32_t t28 = 8399;

	t28 = (((x117%x118)+x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -137;
	uint32_t x123 = 1U;
	volatile uint32_t x124 = 14U;
	int32_t t29 = -2064;

	t29 = (((x121%x122)+x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 11U;
	int64_t x126 = -1LL;
	int64_t x128 = INT64_MIN;
	int32_t t30 = 12;

	t30 = (((x125%x126)+x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = 382679864282LL;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	volatile int32_t t31 = -2;

	t31 = (((x129%x130)+x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = 6067979614375LL;
	volatile uint16_t x140 = 2U;
	int32_t t32 = -23;

	t32 = (((x137%x138)+x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	volatile int32_t t33 = 320600;

	t33 = (((x141%x142)+x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = 56143446LL;
	static int8_t x148 = -4;
	volatile int32_t t34 = 28;

	t34 = (((x145%x146)+x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MIN;

	t35 = (((x149%x150)+x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 1704;
	uint64_t x155 = 12359223516399934LLU;
	uint16_t x156 = 0U;
	int32_t t36 = -1;

	t36 = (((x153%x154)+x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = 14U;
	static uint32_t x158 = 331824U;
	int32_t x159 = -7383;
	uint32_t x160 = 351U;
	volatile int32_t t37 = 0;

	t37 = (((x157%x158)+x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	volatile uint8_t x162 = 5U;
	volatile int64_t x163 = 132774711187687092LL;
	int8_t x164 = 41;
	volatile int32_t t38 = 66179699;

	t38 = (((x161%x162)+x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = 10U;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = -106LL;
	uint64_t x168 = 26671193818LLU;
	int32_t t39 = -3738563;

	t39 = (((x165%x166)+x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	volatile uint8_t x175 = 1U;
	int64_t x176 = -1LL;
	int32_t t40 = -59963;

	t40 = (((x173%x174)+x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = 202197057LL;
	int8_t x178 = INT8_MIN;
	int64_t x179 = 31919LL;
	volatile int32_t t41 = -1;

	t41 = (((x177%x178)+x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x181 = UINT32_MAX;
	int8_t x183 = -1;
	int32_t t42 = -620745699;

	t42 = (((x181%x182)+x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = -1;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t43 = 625;

	t43 = (((x185%x186)+x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = 0;
	int32_t x190 = -13245;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t44 = 0;

	t44 = (((x189%x190)+x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MIN;
	static volatile int32_t x194 = INT32_MIN;
	volatile int8_t x195 = -1;
	volatile uint64_t x196 = UINT64_MAX;
	int32_t t45 = -4245;

	t45 = (((x193%x194)+x195)==x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = INT16_MAX;
	volatile int8_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = -1;
	volatile int32_t t46 = -5956;

	t46 = (((x197%x198)+x199)==x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = -11076LL;
	volatile int16_t x202 = -1;
	volatile int8_t x203 = 1;
	int8_t x204 = 23;
	int32_t t47 = -521;

	t47 = (((x201%x202)+x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 16279U;
	int32_t x211 = 555975;
	uint16_t x212 = 73U;
	int32_t t48 = 1;

	t48 = (((x209%x210)+x211)==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x215 = 6U;
	int32_t x216 = INT32_MAX;
	static int32_t t49 = -73223354;

	t49 = (((x213%x214)+x215)==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x218 = 30615378379LL;
	int16_t x219 = -222;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t50 = 2;

	t50 = (((x217%x218)+x219)==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int64_t x222 = -3817714006651791201LL;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t51 = -82909675;

	t51 = (((x221%x222)+x223)==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MAX;
	volatile uint8_t x226 = 11U;
	uint8_t x227 = 15U;
	int16_t x228 = -1;
	static int32_t t52 = -36797;

	t52 = (((x225%x226)+x227)==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 7;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t53 = -300;

	t53 = (((x229%x230)+x231)==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	int32_t x235 = 120118312;
	uint16_t x236 = 11U;
	int32_t t54 = 272705;

	t54 = (((x233%x234)+x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	static int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	volatile int32_t x244 = INT32_MAX;

	t55 = (((x241%x242)+x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x245 = INT64_MIN;
	uint32_t x246 = 476U;
	uint8_t x247 = 22U;
	static int8_t x248 = INT8_MIN;
	int32_t t56 = 1;

	t56 = (((x245%x246)+x247)==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x250 = UINT8_MAX;
	volatile int16_t x251 = INT16_MIN;
	static volatile int32_t t57 = -18998;

	t57 = (((x249%x250)+x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x254 = -1;
	static uint16_t x255 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	int32_t t58 = 1866226;

	t58 = (((x253%x254)+x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MAX;
	volatile int8_t x258 = 3;
	int8_t x259 = 43;
	volatile int32_t x260 = 2;
	volatile int32_t t59 = -17921872;

	t59 = (((x257%x258)+x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = 0U;
	volatile int8_t x262 = -62;
	uint8_t x263 = 3U;
	int32_t x264 = INT32_MIN;
	volatile int32_t t60 = 1654;

	t60 = (((x261%x262)+x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x266 = -1;
	int16_t x267 = -1;
	uint32_t x268 = 182006U;

	t61 = (((x265%x266)+x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x275 = INT16_MIN;
	uint16_t x276 = 1085U;

	t62 = (((x273%x274)+x275)==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	int32_t x280 = -31945;
	int32_t t63 = 11;

	t63 = (((x277%x278)+x279)==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = INT64_MIN;
	uint8_t x282 = 66U;
	volatile int32_t x283 = INT32_MAX;
	static volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t64 = -18443;

	t64 = (((x281%x282)+x283)==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x285 = -270771403437224LL;
	int32_t x287 = 1;
	static int64_t x288 = -1LL;
	static int32_t t65 = -96307015;

	t65 = (((x285%x286)+x287)==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MAX;
	volatile uint16_t x291 = 713U;
	int32_t x292 = 3308470;
	volatile int32_t t66 = -438384;

	t66 = (((x289%x290)+x291)==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = -1;
	static int32_t x294 = -1071405;
	int16_t x296 = 2800;

	t67 = (((x293%x294)+x295)==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 48U;
	int8_t x298 = -16;
	int32_t t68 = 18377;

	t68 = (((x297%x298)+x299)==x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x302 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	static int32_t t69 = -307749300;

	t69 = (((x301%x302)+x303)==x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = 2;
	volatile int16_t x307 = INT16_MIN;
	static int64_t x308 = INT64_MIN;
	static volatile int32_t t70 = -44;

	t70 = (((x305%x306)+x307)==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x310 = 733015607339LLU;
	int8_t x311 = -1;
	static uint32_t x312 = 36174258U;
	int32_t t71 = -56220;

	t71 = (((x309%x310)+x311)==x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x313 = -1LL;
	uint64_t x314 = 11740804LLU;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -761483;
	volatile int32_t t72 = 99;

	t72 = (((x313%x314)+x315)==x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x318 = INT64_MIN;
	uint64_t x320 = 11480LLU;
	volatile int32_t t73 = 7;

	t73 = (((x317%x318)+x319)==x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x321 = UINT64_MAX;
	static int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	volatile uint32_t x324 = 799U;

	t74 = (((x321%x322)+x323)==x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = INT64_MIN;
	volatile int32_t x326 = -5841696;
	int32_t t75 = -3;

	t75 = (((x325%x326)+x327)==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x329 = 6U;
	volatile int32_t t76 = 1691;

	t76 = (((x329%x330)+x331)==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	volatile int32_t t77 = 17189;

	t77 = (((x333%x334)+x335)==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -140832;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	int32_t t78 = -8416729;

	t78 = (((x337%x338)+x339)==x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x345 = INT32_MAX;
	int32_t x347 = INT32_MIN;

	t79 = (((x345%x346)+x347)==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MAX;
	uint64_t x350 = 1547960609LLU;
	uint32_t x351 = UINT32_MAX;
	volatile int32_t t80 = -1916881;

	t80 = (((x349%x350)+x351)==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x357 = UINT32_MAX;
	volatile int8_t x359 = INT8_MIN;
	static int32_t x360 = INT32_MIN;
	int32_t t81 = -43;

	t81 = (((x357%x358)+x359)==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x361 = INT32_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int16_t x363 = INT16_MIN;

	t82 = (((x361%x362)+x363)==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = 32U;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t83 = 124607166;

	t83 = (((x365%x366)+x367)==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x370 = INT16_MIN;
	int32_t x371 = -45;
	static int8_t x372 = INT8_MIN;
	int32_t t84 = 493955;

	t84 = (((x369%x370)+x371)==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = UINT32_MAX;
	static volatile uint32_t x374 = UINT32_MAX;
	uint16_t x375 = 126U;
	static int16_t x376 = 516;
	static int32_t t85 = 0;

	t85 = (((x373%x374)+x375)==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 16364682220460715LLU;
	int32_t x378 = 1434503;
	int32_t x379 = INT32_MAX;
	int8_t x380 = -1;
	volatile int32_t t86 = 184;

	t86 = (((x377%x378)+x379)==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = INT32_MAX;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t87 = 377174;

	t87 = (((x381%x382)+x383)==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t88 = 12962369;

	t88 = (((x385%x386)+x387)==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t89 = 32058;

	t89 = (((x389%x390)+x391)==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 8172U;
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t90 = -4;

	t90 = (((x393%x394)+x395)==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 87531671434LLU;
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 17U;
	volatile int16_t x400 = -1;
	volatile int32_t t91 = 480274;

	t91 = (((x397%x398)+x399)==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = -1LL;
	static volatile int64_t x402 = -1LL;
	int8_t x403 = -2;
	volatile int32_t t92 = -31806105;

	t92 = (((x401%x402)+x403)==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	int16_t x407 = INT16_MIN;
	static int32_t t93 = 5014786;

	t93 = (((x405%x406)+x407)==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 6U;
	int64_t x410 = -1LL;
	volatile uint64_t x411 = UINT64_MAX;
	int32_t x412 = -1;
	static int32_t t94 = 48;

	t94 = (((x409%x410)+x411)==x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x414 = 1009412218U;
	int8_t x415 = 8;
	int32_t t95 = -4;

	t95 = (((x413%x414)+x415)==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -1;
	int16_t x418 = 5507;
	int8_t x419 = 1;
	int64_t x420 = INT64_MIN;
	volatile int32_t t96 = 1;

	t96 = (((x417%x418)+x419)==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x422 = -27990066LL;
	int32_t t97 = 3148426;

	t97 = (((x421%x422)+x423)==x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 2890U;
	static int64_t x426 = -15999LL;
	uint16_t x427 = 1315U;
	int64_t x428 = 377298434191LL;
	volatile int32_t t98 = -1038194389;

	t98 = (((x425%x426)+x427)==x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = 22;
	int32_t x430 = INT32_MAX;
	int64_t x432 = INT64_MIN;
	volatile int32_t t99 = -40;

	t99 = (((x429%x430)+x431)==x432);

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

