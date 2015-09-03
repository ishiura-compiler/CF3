#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int64_t x8 = INT64_MIN;
volatile uint32_t x13 = 1260908U;
volatile int32_t t5 = 12;
uint32_t x31 = 4364U;
uint16_t x32 = 1U;
static volatile int32_t t7 = -5;
uint32_t x43 = UINT32_MAX;
volatile int32_t t10 = -1694;
int8_t x52 = -2;
static volatile int8_t x58 = INT8_MIN;
static int32_t x59 = -69843;
uint64_t x61 = 243033256682360LLU;
int32_t x65 = INT32_MAX;
int64_t x81 = INT64_MAX;
static int32_t x82 = -1;
int32_t t21 = 73895341;
int16_t x89 = -22;
int8_t x104 = INT8_MIN;
volatile int32_t t25 = 0;
volatile int32_t t27 = 12456;
int8_t x118 = INT8_MAX;
int32_t x119 = -28983;
int32_t x125 = INT32_MIN;
int8_t x126 = -1;
int8_t x132 = -1;
static int64_t x135 = -886155879758448962LL;
volatile int64_t x136 = INT64_MIN;
int16_t x138 = 3952;
uint16_t x139 = 3U;
int32_t t37 = -16;
int16_t x157 = -13;
volatile uint32_t x163 = UINT32_MAX;
uint16_t x165 = 27554U;
volatile int32_t t41 = -3118542;
int16_t x177 = -1;
int8_t x190 = -1;
int16_t x193 = INT16_MIN;
int16_t x200 = INT16_MAX;
volatile int16_t x206 = INT16_MAX;
uint32_t x207 = 0U;
int16_t x209 = INT16_MIN;
int8_t x212 = INT8_MIN;
volatile int64_t x215 = INT64_MAX;
static int8_t x217 = -3;
int32_t x218 = INT32_MAX;
int16_t x220 = INT16_MAX;
uint32_t x222 = UINT32_MAX;
uint32_t x225 = UINT32_MAX;
uint64_t x240 = 113LLU;
static int32_t x244 = INT32_MAX;
int32_t t60 = -101391;
int8_t x267 = -1;
volatile int8_t x276 = -21;
int64_t x277 = INT64_MIN;
volatile int32_t t66 = -2702767;
uint8_t x287 = 1U;
int64_t x289 = 702593574611149LL;
static volatile uint8_t x298 = 1U;
static int32_t x304 = -2703130;
volatile int32_t x305 = 35994;
volatile uint64_t x307 = UINT64_MAX;
int32_t t73 = 1020;
uint64_t x314 = 106534946LLU;
static int32_t x316 = -452769;
volatile int64_t x317 = 125806493996726359LL;
volatile int32_t t75 = -21;
int16_t x321 = -43;
int64_t x326 = 6474748LL;
static int64_t x331 = -35146212467692LL;
uint8_t x334 = 47U;
int8_t x340 = INT8_MIN;
uint16_t x353 = 377U;
int64_t x354 = INT64_MIN;
int16_t x355 = INT16_MAX;
volatile int32_t x360 = INT32_MAX;
int64_t x363 = INT64_MIN;
volatile uint32_t x368 = 6438U;
int32_t t87 = -986635605;
static int32_t x373 = -117;
static int32_t x376 = -12254;
int64_t x381 = INT64_MAX;
volatile int64_t x394 = -745LL;
int32_t t93 = -2364;
volatile int64_t x401 = -552474LL;
static uint64_t x405 = 29701857507932LLU;
volatile uint64_t x406 = 594304975085250LLU;
int32_t t96 = -15994;
volatile int32_t t97 = -89169665;


void f0(void) {
	static uint8_t x1 = 0U;
	int16_t x2 = INT16_MAX;
	uint8_t x3 = 65U;
	uint64_t x4 = 9591522067698211LLU;
	volatile int32_t t0 = -1;

	t0 = ((x1%x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 196094412725488293LLU;
	static uint32_t x7 = 30624U;
	volatile int32_t t1 = -16204;

	t1 = ((x5%x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int32_t x12 = -273;
	int32_t t2 = -576;

	t2 = ((x9%x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static int32_t x15 = INT32_MAX;
	uint32_t x16 = 46545U;
	volatile int32_t t3 = 246;

	t3 = ((x13%x14)<(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x18 = 3U;
	uint32_t x19 = 876U;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t4 = 238;

	t4 = ((x17%x18)<(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint64_t x22 = 1016148056665569110LLU;
	int16_t x23 = 24;
	uint32_t x24 = 1U;

	t5 = ((x21%x22)<(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x26 = INT32_MIN;
	int8_t x27 = 4;
	uint16_t x28 = 9712U;
	volatile int32_t t6 = -139146;

	t6 = ((x25%x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static volatile int32_t x30 = 5808310;

	t7 = ((x29%x30)<(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 38;
	int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -27378;

	t8 = ((x33%x34)<(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint8_t x38 = 4U;
	uint64_t x39 = 317410023542515451LLU;
	static int32_t x40 = INT32_MIN;
	static int32_t t9 = 26786;

	t9 = ((x37%x38)<(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 115;
	uint16_t x42 = UINT16_MAX;
	int16_t x44 = INT16_MIN;

	t10 = ((x41%x42)<(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 0;
	static uint32_t x46 = 3436347U;
	int16_t x47 = INT16_MIN;
	static volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -1525138;

	t11 = ((x45%x46)<(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	static int16_t x51 = INT16_MIN;
	int32_t t12 = -12067492;

	t12 = ((x49%x50)<(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 245LLU;
	int16_t x54 = -11;
	uint32_t x55 = 2524U;
	int32_t x56 = -3235920;
	int32_t t13 = -13400195;

	t13 = ((x53%x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = -1;
	volatile int16_t x60 = INT16_MAX;
	volatile int32_t t14 = 40769;

	t14 = ((x57%x58)<(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -63106252782802383LL;
	uint32_t x63 = 1074496859U;
	static int32_t x64 = INT32_MIN;
	static int32_t t15 = 220005750;

	t15 = ((x61%x62)<(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -411;
	int16_t x67 = INT16_MIN;
	static int8_t x68 = 1;
	static int32_t t16 = 2540280;

	t16 = ((x65%x66)<(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1259U;
	uint8_t x70 = UINT8_MAX;
	volatile uint16_t x71 = 36U;
	volatile int32_t x72 = -1;
	int32_t t17 = -9342940;

	t17 = ((x69%x70)<(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 3;
	uint16_t x74 = 976U;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = -5158262;

	t18 = ((x73%x74)<(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static int16_t x78 = INT16_MIN;
	static int32_t x79 = INT32_MAX;
	int32_t x80 = -16093;
	volatile int32_t t19 = -18619;

	t19 = ((x77%x78)<(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = -1;
	uint8_t x84 = 12U;
	static int32_t t20 = -6278502;

	t20 = ((x81%x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -1;

	t21 = ((x85%x86)<(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -1;
	int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 4410;

	t22 = ((x89%x90)<(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 7;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MAX;
	static volatile int16_t x96 = -592;
	int32_t t23 = 2315418;

	t23 = ((x93%x94)<(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -128;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MIN;
	volatile int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = 3492441;

	t24 = ((x97%x98)<(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = UINT8_MAX;
	static int32_t x103 = -1;

	t25 = ((x101%x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	static int8_t x110 = INT8_MIN;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MAX;
	volatile int32_t t26 = 73649594;

	t26 = ((x109%x110)<(x111^x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 47U;
	int32_t x114 = INT32_MAX;
	volatile int16_t x115 = -14283;
	volatile uint64_t x116 = 3918414174424LLU;

	t27 = ((x113%x114)<(x115^x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x120 = 80U;
	int32_t t28 = 0;

	t28 = ((x117%x118)<(x119^x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	static volatile int64_t x122 = INT64_MAX;
	volatile int16_t x123 = -1;
	volatile int64_t x124 = -3889820733665250LL;
	volatile int32_t t29 = 155;

	t29 = ((x121%x122)<(x123^x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x127 = INT64_MIN;
	static volatile int32_t x128 = 3;
	int32_t t30 = -1258786;

	t30 = ((x125%x126)<(x127^x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 17192222U;
	int8_t x130 = INT8_MIN;
	static int8_t x131 = INT8_MIN;
	static volatile int32_t t31 = -1;

	t31 = ((x129%x130)<(x131^x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x133 = 33286389U;
	int32_t x134 = 812135020;
	static int32_t t32 = 12635;

	t32 = ((x133%x134)<(x135^x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 22794;
	int64_t x140 = -1LL;
	volatile int32_t t33 = -44;

	t33 = ((x137%x138)<(x139^x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 30776U;
	int32_t x142 = -1;
	uint64_t x143 = 193645051492682LLU;
	uint64_t x144 = 1047435161690LLU;
	int32_t t34 = 3720481;

	t34 = ((x141%x142)<(x143^x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = 1;
	static int16_t x147 = 916;
	static volatile int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 78;

	t35 = ((x145%x146)<(x147^x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 14U;
	uint8_t x150 = 55U;
	int32_t x151 = INT32_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t36 = 7945;

	t36 = ((x149%x150)<(x151^x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	volatile uint8_t x154 = 41U;
	static uint16_t x155 = 250U;
	int32_t x156 = -1;

	t37 = ((x153%x154)<(x155^x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x158 = -1;
	int64_t x159 = -1LL;
	static volatile int64_t x160 = INT64_MAX;
	int32_t t38 = 13967;

	t38 = ((x157%x158)<(x159^x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t39 = 52997;

	t39 = ((x161%x162)<(x163^x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x166 = 436U;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = -934648055;

	t40 = ((x165%x166)<(x167^x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = UINT32_MAX;
	uint32_t x171 = UINT32_MAX;
	static uint32_t x172 = UINT32_MAX;

	t41 = ((x169%x170)<(x171^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x173 = 0U;
	static volatile uint8_t x174 = 1U;
	int16_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile int32_t t42 = -45088;

	t42 = ((x173%x174)<(x175^x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x178 = -1089LL;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = -4;
	static volatile int32_t t43 = -694300915;

	t43 = ((x177%x178)<(x179^x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 137855020LLU;
	int32_t x182 = INT32_MIN;
	static int16_t x183 = INT16_MAX;
	int16_t x184 = -1;
	volatile int32_t t44 = -74886647;

	t44 = ((x181%x182)<(x183^x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	volatile int8_t x188 = -14;
	int32_t t45 = -27861577;

	t45 = ((x185%x186)<(x187^x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = 13738578U;
	volatile uint16_t x191 = UINT16_MAX;
	static int64_t x192 = INT64_MIN;
	int32_t t46 = 5229867;

	t46 = ((x189%x190)<(x191^x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 6U;
	int32_t t47 = -180264;

	t47 = ((x193%x194)<(x195^x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -16;
	int8_t x198 = -20;
	uint64_t x199 = 262444324LLU;
	volatile int32_t t48 = 2158;

	t48 = ((x197%x198)<(x199^x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 27;
	int64_t x204 = INT64_MAX;
	int32_t t49 = 0;

	t49 = ((x201%x202)<(x203^x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 907;
	int16_t x208 = INT16_MIN;
	volatile int32_t t50 = 1592051;

	t50 = ((x205%x206)<(x207^x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	volatile int32_t t51 = 77379646;

	t51 = ((x209%x210)<(x211^x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MAX;
	uint16_t x214 = 7U;
	int64_t x216 = -1LL;
	volatile int32_t t52 = -37629;

	t52 = ((x213%x214)<(x215^x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x219 = INT8_MIN;
	int32_t t53 = 4615;

	t53 = ((x217%x218)<(x219^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int64_t x223 = 283608858LL;
	int64_t x224 = INT64_MAX;
	int32_t t54 = -54;

	t54 = ((x221%x222)<(x223^x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x226 = 5983554LLU;
	int8_t x227 = 4;
	int8_t x228 = INT8_MIN;
	int32_t t55 = 92562;

	t55 = ((x225%x226)<(x227^x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MAX;
	static int8_t x232 = -1;
	volatile int32_t t56 = -14568771;

	t56 = ((x229%x230)<(x231^x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = INT32_MAX;
	uint16_t x234 = 263U;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = INT16_MAX;
	int32_t t57 = 281;

	t57 = ((x233%x234)<(x235^x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x237 = INT8_MIN;
	static int16_t x238 = INT16_MIN;
	uint32_t x239 = 69677U;
	volatile int32_t t58 = 7;

	t58 = ((x237%x238)<(x239^x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	uint8_t x242 = 56U;
	int16_t x243 = INT16_MAX;
	int32_t t59 = -74227783;

	t59 = ((x241%x242)<(x243^x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x245 = INT32_MIN;
	volatile int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	volatile int32_t x248 = INT32_MIN;

	t60 = ((x245%x246)<(x247^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = 35;
	uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = 28023;
	int8_t x252 = INT8_MAX;
	volatile int32_t t61 = 22026928;

	t61 = ((x249%x250)<(x251^x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	volatile uint16_t x254 = 5U;
	uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 7U;
	int32_t t62 = 94207;

	t62 = ((x253%x254)<(x255^x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = -1;
	volatile int64_t x258 = INT64_MAX;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	static int32_t t63 = -3897098;

	t63 = ((x257%x258)<(x259^x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 433U;
	int16_t x266 = -34;
	uint16_t x268 = 15U;
	volatile int32_t t64 = -82087386;

	t64 = ((x265%x266)<(x267^x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x273 = 7U;
	int8_t x274 = INT8_MIN;
	static uint64_t x275 = 898453337LLU;
	volatile int32_t t65 = 93;

	t65 = ((x273%x274)<(x275^x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int8_t x280 = 2;

	t66 = ((x277%x278)<(x279^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -17352465033882LL;
	uint32_t x282 = 3170U;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 2151U;
	volatile int32_t t67 = 0;

	t67 = ((x281%x282)<(x283^x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = 1;
	int32_t x286 = INT32_MAX;
	volatile uint16_t x288 = 1U;
	volatile int32_t t68 = -6980;

	t68 = ((x285%x286)<(x287^x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x290 = -1;
	volatile uint32_t x291 = 1769U;
	static int32_t x292 = -1;
	static volatile int32_t t69 = 190989971;

	t69 = ((x289%x290)<(x291^x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = 1;
	int32_t x299 = -1;
	int16_t x300 = INT16_MAX;
	volatile int32_t t70 = -2955;

	t70 = ((x297%x298)<(x299^x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = 1;
	static uint16_t x303 = 468U;
	static int32_t t71 = -963329941;

	t71 = ((x301%x302)<(x303^x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x306 = 166342247;
	int64_t x308 = -463292LL;
	volatile int32_t t72 = 93;

	t72 = ((x305%x306)<(x307^x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x309 = 25536;
	volatile uint64_t x310 = 3018777427670505056LLU;
	int8_t x311 = 5;
	int8_t x312 = INT8_MIN;

	t73 = ((x309%x310)<(x311^x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = -1;
	uint8_t x315 = 28U;
	int32_t t74 = -1906;

	t74 = ((x313%x314)<(x315^x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile uint16_t x320 = 7U;

	t75 = ((x317%x318)<(x319^x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 2516414542043LLU;
	uint64_t x324 = UINT64_MAX;
	static int32_t t76 = 1382;

	t76 = ((x321%x322)<(x323^x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -1LL;
	static uint32_t x327 = 1U;
	uint8_t x328 = 2U;
	static volatile int32_t t77 = -704;

	t77 = ((x325%x326)<(x327^x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = 3;
	uint64_t x330 = UINT64_MAX;
	int8_t x332 = 4;
	int32_t t78 = -633;

	t78 = ((x329%x330)<(x331^x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	int64_t x335 = 989927883766LL;
	int64_t x336 = -1LL;
	static int32_t t79 = 88;

	t79 = ((x333%x334)<(x335^x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = INT16_MAX;
	volatile uint32_t x338 = 19773912U;
	static uint64_t x339 = UINT64_MAX;
	volatile int32_t t80 = 41;

	t80 = ((x337%x338)<(x339^x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 1;
	static volatile int16_t x342 = INT16_MIN;
	int32_t x343 = 970155;
	int16_t x344 = INT16_MIN;
	int32_t t81 = 1934;

	t81 = ((x341%x342)<(x343^x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 74069007LLU;
	int16_t x350 = -22;
	int32_t x351 = -1;
	int64_t x352 = -2LL;
	int32_t t82 = 4;

	t82 = ((x349%x350)<(x351^x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x356 = INT8_MIN;
	int32_t t83 = 2445884;

	t83 = ((x353%x354)<(x355^x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MAX;
	static volatile int32_t t84 = -85805;

	t84 = ((x357%x358)<(x359^x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	volatile int16_t x362 = INT16_MIN;
	static volatile int8_t x364 = INT8_MAX;
	volatile int32_t t85 = -6656;

	t85 = ((x361%x362)<(x363^x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x365 = INT8_MIN;
	static int16_t x366 = 1;
	uint8_t x367 = 2U;
	int32_t t86 = -1;

	t86 = ((x365%x366)<(x367^x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = 66;
	uint64_t x372 = 26LLU;

	t87 = ((x369%x370)<(x371^x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x374 = 561U;
	static int64_t x375 = INT64_MIN;
	int32_t t88 = 2894172;

	t88 = ((x373%x374)<(x375^x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x377 = UINT32_MAX;
	static volatile int64_t x378 = 1351882LL;
	int64_t x379 = -56LL;
	int16_t x380 = INT16_MAX;
	int32_t t89 = -51;

	t89 = ((x377%x378)<(x379^x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x382 = INT16_MAX;
	uint8_t x383 = 28U;
	int16_t x384 = 10752;
	int32_t t90 = -103884;

	t90 = ((x381%x382)<(x383^x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = 1170;
	int8_t x387 = 0;
	uint8_t x388 = 22U;
	int32_t t91 = 69824;

	t91 = ((x385%x386)<(x387^x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x389 = -1;
	uint32_t x390 = 3996877U;
	static int64_t x391 = INT64_MAX;
	static int32_t x392 = -18;
	static volatile int32_t t92 = -849226872;

	t92 = ((x389%x390)<(x391^x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x395 = 1;
	volatile uint8_t x396 = 92U;

	t93 = ((x393%x394)<(x395^x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = INT16_MIN;
	int8_t x398 = 1;
	volatile uint8_t x399 = 44U;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t94 = -50610;

	t94 = ((x397%x398)<(x399^x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x402 = 20;
	int16_t x403 = INT16_MIN;
	int8_t x404 = -17;
	volatile int32_t t95 = 7608;

	t95 = ((x401%x402)<(x403^x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x407 = -407;
	int32_t x408 = INT32_MAX;

	t96 = ((x405%x406)<(x407^x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = 673;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MAX;

	t97 = ((x409%x410)<(x411^x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -2474199905LL;
	static int32_t x414 = INT32_MIN;
	uint16_t x415 = 364U;
	int8_t x416 = INT8_MIN;
	static int32_t t98 = 2960;

	t98 = ((x413%x414)<(x415^x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = UINT32_MAX;
	uint8_t x418 = UINT8_MAX;
	static int16_t x419 = INT16_MIN;
	int32_t x420 = -108853;
	volatile int32_t t99 = -7;

	t99 = ((x417%x418)<(x419^x420));

	if (t99 != 1) { NG(); } else { ; }
	
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

