#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = 1;
int32_t x12 = INT32_MAX;
volatile int32_t t2 = 0;
int32_t x13 = -979174952;
volatile int16_t x17 = INT16_MIN;
volatile int8_t x20 = -1;
int8_t x21 = INT8_MIN;
uint8_t x27 = UINT8_MAX;
int8_t x29 = INT8_MIN;
static int32_t x30 = INT32_MIN;
static int32_t x37 = INT32_MAX;
volatile int32_t x41 = INT32_MAX;
static int64_t x54 = INT64_MAX;
static volatile uint64_t x55 = UINT64_MAX;
volatile int8_t x81 = -40;
int16_t x83 = INT16_MAX;
int8_t x95 = -1;
uint32_t x98 = 15844U;
uint16_t x99 = UINT16_MAX;
static volatile int64_t t22 = INT64_MIN;
volatile int64_t x102 = -1LL;
int32_t t23 = -10163;
int32_t x110 = -7029;
uint8_t x117 = 15U;
uint32_t t28 = 48U;
static int64_t x131 = -3873456LL;
volatile int32_t t30 = -10;
int32_t x133 = INT32_MAX;
int8_t x136 = INT8_MIN;
volatile int8_t x137 = -1;
int8_t x141 = 1;
static uint64_t x150 = UINT64_MAX;
volatile int32_t t35 = 5368;
int16_t x153 = 1539;
int8_t x173 = -10;
static int16_t x178 = -1;
int16_t x193 = INT16_MIN;
int32_t x201 = 43011;
volatile int8_t x222 = 7;
static uint32_t x223 = 6842U;
int64_t x225 = INT64_MIN;
static int64_t x226 = -2703140048LL;
int16_t x232 = INT16_MAX;
static volatile uint32_t t55 = 1U;
volatile int64_t x256 = INT64_MAX;
static int64_t t60 = INT64_MAX;
int16_t x260 = -1;
static int64_t x267 = INT64_MIN;
int32_t t63 = -61020982;
volatile int32_t t64 = -4462096;
int64_t t65 = INT64_MIN;
volatile int16_t x279 = INT16_MIN;
int64_t x283 = INT64_MAX;
static uint64_t x284 = UINT64_MAX;
volatile uint16_t x288 = 8U;
int32_t t68 = 83;
uint32_t x310 = 164020772U;
volatile int64_t x312 = 8292078026103LL;
int32_t x315 = INT32_MAX;
volatile int32_t t73 = 36275;
static volatile uint32_t x318 = 63955U;
static volatile int8_t x323 = INT8_MAX;
uint8_t x329 = 121U;
volatile int64_t x331 = -1LL;
int16_t x335 = 241;
static int32_t t81 = -117;
int32_t t82 = 235757;
volatile uint16_t x365 = 363U;
volatile int16_t x367 = 447;
volatile int16_t x371 = -1;
static int64_t x372 = INT64_MAX;
int16_t x379 = INT16_MIN;
volatile int64_t x380 = INT64_MIN;
int8_t x386 = -5;
int64_t t91 = 28271353367766929LL;
volatile int32_t x395 = -7;
int32_t x400 = INT32_MIN;
volatile uint16_t x407 = 27U;
int16_t x412 = INT16_MAX;
uint8_t x416 = 0U;
int8_t x421 = INT8_MAX;
int64_t x422 = 532810053146740315LL;
volatile int32_t t99 = 31930;


void f0(void) {
	uint16_t x1 = 2362U;
	uint64_t x2 = UINT64_MAX;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 378929603996439945LL;

	t0 = ((x1<(x2/x3))^x4);

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int8_t x7 = 1;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 720;

	t1 = ((x5<(x6/x7))^x8);

	if (t1 != 126) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;

	t2 = ((x9<(x10/x11))^x12);

	if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 7;
	volatile int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 0;

	t3 = ((x13<(x14/x15))^x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = -26LL;
	volatile int32_t t4 = 0;

	t4 = ((x17<(x18/x19))^x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 0U;
	int64_t x23 = 3LL;
	volatile int16_t x24 = INT16_MAX;
	int32_t t5 = -7965;

	t5 = ((x21<(x22/x23))^x24);

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 82U;
	int16_t x26 = INT16_MIN;
	volatile int64_t x28 = -14567659244293101LL;
	static volatile int64_t t6 = -240196LL;

	t6 = ((x25<(x26/x27))^x28);

	if (t6 != -14567659244293101LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = -3;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 215;

	t7 = ((x29<(x30/x31))^x32);

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 0U;
	volatile uint32_t x34 = 3U;
	static uint8_t x35 = UINT8_MAX;
	static int16_t x36 = -1;
	int32_t t8 = -193755337;

	t8 = ((x33<(x34/x35))^x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = -948392777;
	int64_t x39 = INT64_MAX;
	int8_t x40 = -1;
	volatile int32_t t9 = 3124591;

	t9 = ((x37<(x38/x39))^x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = 0;
	int8_t x43 = -3;
	uint32_t x44 = 271871U;
	static volatile uint32_t t10 = 42177U;

	t10 = ((x41<(x42/x43))^x44);

	if (t10 != 271871U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -3480291752271594808LL;
	int64_t x50 = INT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -6085551;

	t11 = ((x49<(x50/x51))^x52);

	if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int64_t x56 = -1LL;
	static int64_t t12 = 89449LL;

	t12 = ((x53<(x54/x55))^x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	static int64_t x58 = INT64_MIN;
	volatile int32_t x59 = -1078;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -469;

	t13 = ((x57<(x58/x59))^x60);

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MAX;
	static uint32_t x63 = 421225152U;
	uint8_t x64 = 19U;
	int32_t t14 = 6256;

	t14 = ((x61<(x62/x63))^x64);

	if (t14 != 19) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	static int16_t x66 = 17;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t15 = INT32_MAX;

	t15 = ((x65<(x66/x67))^x68);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int32_t t16 = 2;

	t16 = ((x69<(x70/x71))^x72);

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = 81735;

	t17 = ((x73<(x74/x75))^x76);

	if (t17 != 32766) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 164;
	static uint32_t x78 = 111U;
	uint32_t x79 = 123126U;
	uint8_t x80 = 1U;
	volatile int32_t t18 = 75117;

	t18 = ((x77<(x78/x79))^x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x82 = 0LLU;
	volatile int32_t x84 = -1;
	int32_t t19 = -3764;

	t19 = ((x81<(x82/x83))^x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = INT8_MIN;
	volatile int8_t x90 = -24;
	static uint64_t x91 = 116742122468798900LLU;
	static uint16_t x92 = UINT16_MAX;
	volatile int32_t t20 = 6730696;

	t20 = ((x89<(x90/x91))^x92);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 923910LL;
	uint64_t x94 = 1009653358474637LLU;
	int64_t x96 = -7406822LL;
	int64_t t21 = -90992559473LL;

	t21 = ((x93<(x94/x95))^x96);

	if (t21 != -7406822LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x97 = 11594U;
	int64_t x100 = INT64_MIN;

	t22 = ((x97<(x98/x99))^x100);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int64_t x103 = INT64_MAX;
	volatile uint16_t x104 = 29U;

	t23 = ((x101<(x102/x103))^x104);

	if (t23 != 28) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	static int8_t x106 = INT8_MAX;
	int8_t x107 = -1;
	uint32_t x108 = 3194062U;
	uint32_t t24 = 1295318U;

	t24 = ((x105<(x106/x107))^x108);

	if (t24 != 3194063U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 6LL;
	int64_t x111 = INT64_MIN;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t25 = -176;

	t25 = ((x109<(x110/x111))^x112);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int32_t x114 = -5;
	static uint32_t x115 = 1733U;
	int64_t x116 = INT64_MAX;
	static volatile int64_t t26 = -1557041326578539LL;

	t26 = ((x113<(x114/x115))^x116);

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = 1045;
	int16_t x119 = -121;
	int64_t x120 = INT64_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = ((x117<(x118/x119))^x120);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 6U;
	uint64_t x122 = 1075879894089LLU;
	uint32_t x123 = 6831U;
	static uint32_t x124 = 1459227U;

	t28 = ((x121<(x122/x123))^x124);

	if (t28 != 1459226U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 117949059U;
	int8_t x127 = -22;
	int16_t x128 = INT16_MIN;
	int32_t t29 = -6;

	t29 = ((x125<(x126/x127))^x128);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x129 = 16885012U;
	static uint64_t x130 = UINT64_MAX;
	int8_t x132 = INT8_MIN;

	t30 = ((x129<(x130/x131))^x132);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = 1;
	int32_t x135 = INT32_MIN;
	int32_t t31 = 7938287;

	t31 = ((x133<(x134/x135))^x136);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x138 = UINT8_MAX;
	uint32_t x139 = UINT32_MAX;
	uint32_t x140 = 1U;
	volatile uint32_t t32 = 486885237U;

	t32 = ((x137<(x138/x139))^x140);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x142 = 5587504U;
	static uint64_t x143 = 42692725051881LLU;
	volatile int16_t x144 = INT16_MAX;
	int32_t t33 = 285578480;

	t33 = ((x141<(x142/x143))^x144);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = UINT16_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	int64_t x147 = -8LL;
	volatile uint16_t x148 = 210U;
	static int32_t t34 = -20457715;

	t34 = ((x145<(x146/x147))^x148);

	if (t34 != 210) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = 1U;
	int32_t x151 = INT32_MIN;
	volatile uint16_t x152 = 3U;

	t35 = ((x149<(x150/x151))^x152);

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x154 = 1;
	int32_t x155 = -1;
	int16_t x156 = -1;
	static volatile int32_t t36 = 9289683;

	t36 = ((x153<(x154/x155))^x156);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = -36304080;
	int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t37 = 9301U;

	t37 = ((x157<(x158/x159))^x160);

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	static volatile int32_t x162 = -4601480;
	static uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = ((x161<(x162/x163))^x164);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 737325;
	int32_t x166 = -49;
	int32_t x167 = INT32_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = ((x165<(x166/x167))^x168);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = 31;
	static int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	volatile int32_t t40 = -2;

	t40 = ((x169<(x170/x171))^x172);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x174 = 13;
	volatile int64_t x175 = INT64_MAX;
	int32_t x176 = INT32_MAX;
	static int32_t t41 = 47212;

	t41 = ((x173<(x174/x175))^x176);

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int32_t x179 = -91073;
	volatile int32_t x180 = INT32_MIN;
	int32_t t42 = INT32_MIN;

	t42 = ((x177<(x178/x179))^x180);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = -1;
	static int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t43 = -233890406;

	t43 = ((x185<(x186/x187))^x188);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -1;
	int16_t x190 = -9;
	static uint8_t x191 = 30U;
	uint8_t x192 = 71U;
	static volatile int32_t t44 = 632945;

	t44 = ((x189<(x190/x191))^x192);

	if (t44 != 70) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MIN;
	int8_t x196 = 29;
	int32_t t45 = 1;

	t45 = ((x193<(x194/x195))^x196);

	if (t45 != 28) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = -30389077453402289LL;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = -22884381;
	static int32_t t46 = 429;

	t46 = ((x197<(x198/x199))^x200);

	if (t46 != -22884382) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -3;
	int32_t t47 = -12907705;

	t47 = ((x201<(x202/x203))^x204);

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = 41U;
	volatile int32_t x206 = -100430;
	int16_t x207 = INT16_MIN;
	static uint64_t x208 = 2662557706417LLU;
	uint64_t t48 = 184923781089LLU;

	t48 = ((x205<(x206/x207))^x208);

	if (t48 != 2662557706417LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 1490232928982539220LL;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int32_t x212 = -1;
	int32_t t49 = -2;

	t49 = ((x209<(x210/x211))^x212);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 2U;
	uint8_t x214 = 46U;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 1U;
	static int32_t t50 = -1559042;

	t50 = ((x213<(x214/x215))^x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	volatile uint32_t x218 = 272346U;
	int64_t x219 = INT64_MIN;
	volatile int32_t x220 = -113511284;
	volatile int32_t t51 = 486090;

	t51 = ((x217<(x218/x219))^x220);

	if (t51 != -113511283) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = UINT8_MAX;
	static volatile int32_t x224 = 55230;
	volatile int32_t t52 = 1009;

	t52 = ((x221<(x222/x223))^x224);

	if (t52 != 55230) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x227 = 30LLU;
	int8_t x228 = -1;
	volatile int32_t t53 = 5290695;

	t53 = ((x225<(x226/x227))^x228);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 6;
	uint64_t x230 = 869248119073128374LLU;
	volatile int16_t x231 = 2;
	static volatile int32_t t54 = 2107408;

	t54 = ((x229<(x230/x231))^x232);

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	volatile int8_t x234 = -1;
	int8_t x235 = -1;
	uint32_t x236 = 350U;

	t55 = ((x233<(x234/x235))^x236);

	if (t55 != 351U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 22U;
	static int64_t x238 = -1LL;
	static int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x237<(x238/x239))^x240);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x242 = 1U;
	static uint64_t x243 = 230852LLU;
	int64_t x244 = 168452035LL;
	volatile int64_t t57 = -1855LL;

	t57 = ((x241<(x242/x243))^x244);

	if (t57 != 168452035LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -351666783666LL;
	int8_t x246 = 1;
	static int16_t x247 = 8061;
	int64_t x248 = INT64_MAX;
	static volatile int64_t t58 = 121100267594LL;

	t58 = ((x245<(x246/x247))^x248);

	if (t58 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x249 = 3U;
	int32_t x250 = INT32_MAX;
	volatile int64_t x251 = INT64_MIN;
	volatile int16_t x252 = -37;
	int32_t t59 = -1062515742;

	t59 = ((x249<(x250/x251))^x252);

	if (t59 != -37) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MAX;
	uint32_t x255 = UINT32_MAX;

	t60 = ((x253<(x254/x255))^x256);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 266073837LLU;
	volatile int16_t x258 = -251;
	static int64_t x259 = INT64_MIN;
	int32_t t61 = 578142662;

	t61 = ((x257<(x258/x259))^x260);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 8U;
	static volatile int8_t x262 = 28;
	int8_t x263 = INT8_MIN;
	volatile int8_t x264 = INT8_MIN;
	volatile int32_t t62 = -13246;

	t62 = ((x261<(x262/x263))^x264);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -10;
	int16_t x266 = INT16_MAX;
	int16_t x268 = -1;

	t63 = ((x265<(x266/x267))^x268);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -126595;
	int32_t x270 = INT32_MIN;
	static volatile int64_t x271 = INT64_MIN;
	int32_t x272 = -96411;

	t64 = ((x269<(x270/x271))^x272);

	if (t64 != -96412) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 24U;
	volatile uint32_t x274 = UINT32_MAX;
	static int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;

	t65 = ((x273<(x274/x275))^x276);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = 44;
	volatile int8_t x278 = INT8_MIN;
	static int8_t x280 = INT8_MIN;
	int32_t t66 = 35869;

	t66 = ((x277<(x278/x279))^x280);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 34U;
	int16_t x282 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x281<(x282/x283))^x284);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = 8657068498031LLU;
	int16_t x286 = -4;
	static volatile int8_t x287 = INT8_MAX;

	t68 = ((x285<(x286/x287))^x288);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -1;
	volatile uint64_t x290 = 3386196332LLU;
	int64_t x291 = -1LL;
	int8_t x292 = -1;
	volatile int32_t t69 = -1210;

	t69 = ((x289<(x290/x291))^x292);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = -12134;
	int8_t x298 = -2;
	static uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t70 = -2;

	t70 = ((x297<(x298/x299))^x300);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1438495100LL;
	int8_t x302 = 1;
	int64_t x303 = 140LL;
	int16_t x304 = INT16_MIN;
	volatile int32_t t71 = -110;

	t71 = ((x301<(x302/x303))^x304);

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MIN;
	volatile int64_t x311 = -1LL;
	static int64_t t72 = -4354LL;

	t72 = ((x309<(x310/x311))^x312);

	if (t72 != 8292078026103LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int32_t x316 = -9780710;

	t73 = ((x313<(x314/x315))^x316);

	if (t73 != -9780709) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x319 = 33LLU;
	int32_t x320 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = ((x317<(x318/x319))^x320);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 12U;
	int64_t x322 = -309573401LL;
	uint8_t x324 = UINT8_MAX;
	int32_t t75 = -5186;

	t75 = ((x321<(x322/x323))^x324);

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x325 = 4U;
	int16_t x326 = -1;
	int64_t x327 = INT64_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x325<(x326/x327))^x328);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x330 = 76743;
	volatile int64_t x332 = -169577099684193LL;
	volatile int64_t t77 = 4682235803LL;

	t77 = ((x329<(x330/x331))^x332);

	if (t77 != -169577099684193LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = -1LL;
	int64_t x336 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = ((x333<(x334/x335))^x336);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MIN;
	uint16_t x339 = 7U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t79 = 11781045;

	t79 = ((x337<(x338/x339))^x340);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = -1LL;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MAX;
	uint64_t x344 = 206441250470634LLU;
	volatile uint64_t t80 = 3164LLU;

	t80 = ((x341<(x342/x343))^x344);

	if (t80 != 206441250470635LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 28U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	static int8_t x348 = 0;

	t81 = ((x345<(x346/x347))^x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 28321159288LLU;
	int16_t x352 = -1812;

	t82 = ((x349<(x350/x351))^x352);

	if (t82 != -1812) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MIN;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = -58;
	int8_t x356 = -1;
	int32_t t83 = -75;

	t83 = ((x353<(x354/x355))^x356);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = 58861814975LLU;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	static int64_t x360 = INT64_MIN;
	int64_t t84 = INT64_MIN;

	t84 = ((x357<(x358/x359))^x360);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 97U;
	static int16_t x363 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t85 = 925418894;

	t85 = ((x361<(x362/x363))^x364);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x366 = INT16_MAX;
	int8_t x368 = -1;
	volatile int32_t t86 = 482013774;

	t86 = ((x365<(x366/x367))^x368);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int64_t t87 = -1335902507714008LL;

	t87 = ((x369<(x370/x371))^x372);

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = 3103867731LL;
	static int16_t x374 = 1;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 4480LLU;
	uint64_t t88 = 180816435222LLU;

	t88 = ((x373<(x374/x375))^x376);

	if (t88 != 4480LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x377 = INT64_MIN;
	volatile uint8_t x378 = UINT8_MAX;
	static int64_t t89 = 57048LL;

	t89 = ((x377<(x378/x379))^x380);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -1375569;
	uint32_t x382 = 0U;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x381<(x382/x383))^x384);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1;
	int64_t x387 = INT64_MIN;
	static volatile int64_t x388 = 3793LL;

	t91 = ((x385<(x386/x387))^x388);

	if (t91 != 3792LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MIN;
	uint16_t x390 = 1U;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = 3;
	volatile int32_t t92 = 160124;

	t92 = ((x389<(x390/x391))^x392);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = -1184LL;
	uint32_t x396 = 534993175U;
	volatile uint32_t t93 = 13U;

	t93 = ((x393<(x394/x395))^x396);

	if (t93 != 534993175U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x398 = 154;
	int8_t x399 = -1;
	volatile int32_t t94 = INT32_MIN;

	t94 = ((x397<(x398/x399))^x400);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -682;
	uint8_t x406 = UINT8_MAX;
	uint64_t x408 = 11LLU;
	volatile uint64_t t95 = 0LLU;

	t95 = ((x405<(x406/x407))^x408);

	if (t95 != 10LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = -1;
	int8_t x411 = -25;
	int32_t t96 = -174477;

	t96 = ((x409<(x410/x411))^x412);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	volatile int8_t x414 = 0;
	int16_t x415 = INT16_MAX;
	volatile int32_t t97 = -231;

	t97 = ((x413<(x414/x415))^x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 13048U;
	int16_t x418 = -1;
	int32_t x419 = -113251;
	volatile int16_t x420 = 14;
	int32_t t98 = 398647073;

	t98 = ((x417<(x418/x419))^x420);

	if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x423 = -1;
	int16_t x424 = 0;

	t99 = ((x421<(x422/x423))^x424);

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

