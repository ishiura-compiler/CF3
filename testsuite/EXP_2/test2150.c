#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -11562;
int32_t x11 = INT32_MIN;
uint8_t x13 = 1U;
volatile uint8_t x17 = UINT8_MAX;
volatile uint32_t t5 = 10554U;
int32_t x25 = INT32_MIN;
int32_t x29 = INT32_MAX;
int32_t x35 = INT32_MIN;
int64_t x42 = INT64_MIN;
int64_t x44 = INT64_MIN;
int64_t t10 = -133LL;
int64_t x52 = INT64_MAX;
static volatile int64_t t12 = 1LL;
int8_t x53 = -43;
static uint32_t x58 = UINT32_MAX;
volatile int32_t t14 = -1;
int16_t x63 = INT16_MIN;
int32_t x65 = INT32_MIN;
int64_t x69 = INT64_MAX;
volatile int32_t x74 = 662409;
static volatile int64_t t18 = 1185041736LL;
int32_t x79 = 267511644;
uint8_t x80 = 20U;
volatile int16_t x87 = -1;
static volatile int16_t x97 = 1;
static int16_t x101 = INT16_MAX;
uint64_t x107 = UINT64_MAX;
uint64_t t27 = 105072LLU;
int8_t x118 = INT8_MIN;
volatile int16_t x120 = INT16_MAX;
volatile int16_t x122 = 27;
uint8_t x123 = 53U;
volatile int64_t t30 = -41625510LL;
int8_t x125 = 3;
volatile uint64_t t31 = 226861478992520002LLU;
static int32_t x132 = 6066;
int32_t x139 = INT32_MIN;
static volatile int64_t t34 = -161069955041975281LL;
uint8_t x144 = 114U;
volatile int16_t x148 = INT16_MAX;
int64_t x150 = INT64_MIN;
int64_t x165 = -48LL;
uint8_t x166 = 3U;
uint64_t x168 = 184LLU;
uint64_t t41 = 1930709LLU;
static uint16_t x169 = 33U;
static volatile int32_t x175 = 1612597;
int32_t x178 = 10;
uint64_t x179 = 2955112467589893LLU;
static int32_t x191 = 700601;
int32_t t48 = 2703089;
uint64_t x201 = 16597LLU;
int32_t x205 = 1640;
int16_t x206 = 1;
int8_t x214 = INT8_MIN;
static int32_t x217 = 1474;
uint32_t t56 = 15556U;
uint32_t x229 = 107220930U;
uint64_t x241 = 5770539LLU;
static int8_t x248 = 1;
static int8_t x252 = 28;
int8_t x261 = 1;
uint8_t x262 = UINT8_MAX;
static uint16_t x266 = 30523U;
volatile uint64_t x272 = UINT64_MAX;
static uint64_t t67 = 495594881083179403LLU;
int8_t x273 = -1;
int8_t x275 = -1;
int32_t t69 = 316;
uint16_t x283 = UINT16_MAX;
int32_t x289 = INT32_MIN;
static int64_t x290 = 1099LL;
int32_t t72 = 30716;
volatile int8_t x297 = 1;
static volatile int8_t x312 = INT8_MAX;
int8_t x318 = 0;
volatile uint32_t x320 = 1205114718U;
volatile uint8_t x322 = UINT8_MAX;
int8_t x325 = -1;
int64_t x332 = INT64_MIN;
int8_t x333 = -7;
uint64_t x334 = 24318721993494LLU;
static int64_t x337 = -1LL;
int8_t x348 = -1;
int32_t t85 = 60761377;
volatile int32_t t90 = -1;
uint16_t x370 = 8150U;
int32_t x378 = -1;
volatile int16_t x386 = 1968;
static volatile int32_t t95 = 48019439;
volatile int32_t x389 = 7;
volatile uint64_t x390 = 1016295086577429219LLU;
static uint8_t x394 = UINT8_MAX;
volatile int16_t x399 = INT16_MIN;
uint16_t x402 = 0U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = -1;

	t0 = ((x1<=(x2^x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2332U;
	volatile uint8_t x6 = 8U;
	static volatile int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 33;

	t1 = ((x5<=(x6^x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 14040LLU;
	int16_t x10 = -2266;
	int8_t x12 = 1;
	volatile int32_t t2 = 49;

	t2 = ((x9<=(x10^x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 57U;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -9976;

	t3 = ((x13<=(x14^x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	uint8_t x19 = 0U;
	int64_t x20 = INT64_MAX;
	static int64_t t4 = 5LL;

	t4 = ((x17<=(x18^x19))%x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 920240929477841511LL;
	uint16_t x22 = UINT16_MAX;
	volatile uint8_t x23 = 31U;
	uint32_t x24 = 8U;

	t5 = ((x21<=(x22^x23))%x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 0U;
	int16_t x27 = -1;
	volatile int8_t x28 = INT8_MAX;
	int32_t t6 = 1;

	t6 = ((x25<=(x26^x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	uint64_t x31 = 15627994LLU;
	int64_t x32 = -1407927734073076LL;
	int64_t t7 = 30454078886008LL;

	t7 = ((x29<=(x30^x31))%x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 4486409LL;
	int8_t x34 = -26;
	int8_t x36 = 2;
	int32_t t8 = -1464;

	t8 = ((x33<=(x34^x35))%x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 60U;
	uint8_t x40 = 31U;
	int32_t t9 = 428430;

	t9 = ((x37<=(x38^x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 56U;
	volatile int16_t x43 = INT16_MAX;

	t10 = ((x41<=(x42^x43))%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int64_t x46 = 475534LL;
	int16_t x47 = -1;
	static volatile int64_t x48 = INT64_MIN;
	int64_t t11 = -1LL;

	t11 = ((x45<=(x46^x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = -1;
	volatile int64_t x51 = 521LL;

	t12 = ((x49<=(x50^x51))%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = -702LL;

	t13 = ((x53<=(x54^x55))%x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x59 = -1;
	volatile int8_t x60 = -1;

	t14 = ((x57<=(x58^x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 339;
	volatile int64_t x62 = INT64_MIN;
	uint8_t x64 = 1U;
	int32_t t15 = -199664;

	t15 = ((x61<=(x62^x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = INT32_MIN;
	static int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = 29U;
	volatile uint32_t t16 = 2U;

	t16 = ((x65<=(x66^x67))%x68);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 645444601761280LLU;
	int32_t x71 = INT32_MIN;
	volatile int64_t x72 = 13789959350LL;
	int64_t t17 = 3771912665550292521LL;

	t17 = ((x69<=(x70^x71))%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MAX;
	static int32_t x75 = -578560;
	int64_t x76 = 1LL;

	t18 = ((x73<=(x74^x75))%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static int16_t x78 = INT16_MAX;
	volatile int32_t t19 = -5029;

	t19 = ((x77<=(x78^x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	int64_t x82 = -20458805843126LL;
	int8_t x83 = -1;
	int8_t x84 = -1;
	static int32_t t20 = -57597;

	t20 = ((x81<=(x82^x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x85 = UINT32_MAX;
	static uint16_t x86 = 1U;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 25178266;

	t21 = ((x85<=(x86^x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 69U;
	static int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = 893U;
	int32_t t22 = -920317668;

	t22 = ((x89<=(x90^x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = 143;
	volatile int64_t x95 = -1LL;
	uint32_t x96 = 10695U;
	volatile uint32_t t23 = 537867U;

	t23 = ((x93<=(x94^x95))%x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 0U;
	uint8_t x99 = 6U;
	int64_t x100 = INT64_MIN;
	int64_t t24 = -246811335378618LL;

	t24 = ((x97<=(x98^x99))%x100);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MAX;
	int32_t x103 = 4485;
	volatile int32_t x104 = 63143;
	int32_t t25 = -2083;

	t25 = ((x101<=(x102^x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	static uint16_t x108 = 26607U;
	int32_t t26 = 1006169092;

	t26 = ((x105<=(x106^x107))%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 1821U;
	volatile int8_t x110 = 6;
	static uint64_t x111 = 0LLU;
	uint64_t x112 = UINT64_MAX;

	t27 = ((x109<=(x110^x111))%x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -60;
	int8_t x114 = INT8_MIN;
	uint16_t x115 = 2U;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -5907726;

	t28 = ((x113<=(x114^x115))%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int8_t x119 = -1;
	volatile int32_t t29 = 5240149;

	t29 = ((x117<=(x118^x119))%x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 105U;
	static int64_t x124 = -93920058LL;

	t30 = ((x121<=(x122^x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x126 = 1;
	static int32_t x127 = INT32_MAX;
	static volatile uint64_t x128 = 9130879035646170941LLU;

	t31 = ((x125<=(x126^x127))%x128);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = UINT64_MAX;
	static int32_t x131 = -1;
	volatile int32_t t32 = 22970169;

	t32 = ((x129<=(x130^x131))%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 24U;
	int8_t x134 = INT8_MAX;
	static uint64_t x135 = 95714167113673457LLU;
	int64_t x136 = -48278976052LL;
	static volatile int64_t t33 = 7LL;

	t33 = ((x133<=(x134^x135))%x136);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 123LLU;
	volatile uint8_t x138 = 0U;
	volatile int64_t x140 = -1913105943LL;

	t34 = ((x137<=(x138^x139))%x140);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 17239542LLU;
	uint16_t x142 = 120U;
	volatile int8_t x143 = -1;
	int32_t t35 = -1770;

	t35 = ((x141<=(x142^x143))%x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MAX;
	static int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 31;

	t36 = ((x145<=(x146^x147))%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int8_t x151 = -1;
	uint64_t x152 = 3006716981853901360LLU;
	volatile uint64_t t37 = 28330LLU;

	t37 = ((x149<=(x150^x151))%x152);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 3323U;
	uint64_t x154 = 330148455316LLU;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = 17;
	int32_t t38 = 805681475;

	t38 = ((x153<=(x154^x155))%x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 2U;
	int8_t x160 = 9;
	static int32_t t39 = -51586;

	t39 = ((x157<=(x158^x159))%x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1U;
	uint16_t x162 = 21U;
	int16_t x163 = -12681;
	int64_t x164 = -1577437788319LL;
	int64_t t40 = 786130826638661LL;

	t40 = ((x161<=(x162^x163))%x164);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x167 = INT16_MIN;

	t41 = ((x165<=(x166^x167))%x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x170 = 290446518335LLU;
	int16_t x171 = 8697;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 7888;

	t42 = ((x169<=(x170^x171))%x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1692;
	volatile int8_t x174 = -1;
	volatile int16_t x176 = -212;
	int32_t t43 = -29332015;

	t43 = ((x173<=(x174^x175))%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -2399821557754LL;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t44 = 256013357803693550LL;

	t44 = ((x177<=(x178^x179))%x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 15251043;
	int16_t x182 = 2;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -966668;

	t45 = ((x181<=(x182^x183))%x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 15U;
	uint32_t x187 = 1U;
	static uint64_t x188 = UINT64_MAX;
	volatile uint64_t t46 = 4540453472LLU;

	t46 = ((x185<=(x186^x187))%x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	uint32_t x192 = 10608942U;
	static uint32_t t47 = 1886827U;

	t47 = ((x189<=(x190^x191))%x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 1113162595990680LLU;
	int64_t x194 = -5141702907357748LL;
	int32_t x195 = -1;
	int16_t x196 = -3;

	t48 = ((x193<=(x194^x195))%x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 3;
	volatile int8_t x198 = 5;
	uint8_t x199 = 3U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -6;

	t49 = ((x197<=(x198^x199))%x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 0U;
	uint16_t x203 = 145U;
	static uint32_t x204 = UINT32_MAX;
	static uint32_t t50 = 10967504U;

	t50 = ((x201<=(x202^x203))%x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x207 = UINT16_MAX;
	static int32_t x208 = INT32_MAX;
	int32_t t51 = -591097;

	t51 = ((x205<=(x206^x207))%x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 12922513;

	t52 = ((x209<=(x210^x211))%x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 1809;
	uint32_t x215 = 3U;
	int32_t x216 = INT32_MIN;
	static int32_t t53 = 1991;

	t53 = ((x213<=(x214^x215))%x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -58;

	t54 = ((x217<=(x218^x219))%x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -7062786346211LL;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = 1573;
	volatile int32_t t55 = -5829;

	t55 = ((x221<=(x222^x223))%x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint64_t x226 = 40628781LLU;
	static int8_t x227 = INT8_MIN;
	static uint32_t x228 = UINT32_MAX;

	t56 = ((x225<=(x226^x227))%x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	volatile uint8_t x232 = UINT8_MAX;
	int32_t t57 = -405726;

	t57 = ((x229<=(x230^x231))%x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -2626169638942981329LL;
	uint64_t x234 = UINT64_MAX;
	static int16_t x235 = -1;
	uint32_t x236 = 1225744U;
	volatile uint32_t t58 = 3U;

	t58 = ((x233<=(x234^x235))%x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	volatile int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t59 = 981281U;

	t59 = ((x237<=(x238^x239))%x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	static int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MAX;
	static int32_t t60 = 50099675;

	t60 = ((x241<=(x242^x243))%x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 24938725U;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	volatile int32_t t61 = 120893;

	t61 = ((x245<=(x246^x247))%x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int16_t x250 = -1;
	int64_t x251 = -1LL;
	static int32_t t62 = -957693;

	t62 = ((x249<=(x250^x251))%x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	static volatile uint16_t x254 = UINT16_MAX;
	uint16_t x255 = UINT16_MAX;
	static uint8_t x256 = UINT8_MAX;
	static volatile int32_t t63 = 1702;

	t63 = ((x253<=(x254^x255))%x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int32_t x258 = -325214981;
	int16_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	static int32_t t64 = 0;

	t64 = ((x257<=(x258^x259))%x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x263 = -21;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -8141426;

	t65 = ((x261<=(x262^x263))%x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	uint8_t x267 = UINT8_MAX;
	static uint8_t x268 = 1U;
	volatile int32_t t66 = -3;

	t66 = ((x265<=(x266^x267))%x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	int8_t x271 = -3;

	t67 = ((x269<=(x270^x271))%x272);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 1425764005265LLU;
	volatile int8_t x276 = 38;
	volatile int32_t t68 = 62594;

	t68 = ((x273<=(x274^x275))%x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 19733LLU;
	static int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	static int8_t x280 = INT8_MIN;

	t69 = ((x277<=(x278^x279))%x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = 9971642;
	int16_t x282 = INT16_MIN;
	int16_t x284 = -1;
	volatile int32_t t70 = -100574;

	t70 = ((x281<=(x282^x283))%x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = -1;
	static volatile uint64_t x287 = 6194126LLU;
	volatile int16_t x288 = INT16_MIN;
	int32_t t71 = -1695385;

	t71 = ((x285<=(x286^x287))%x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x291 = 23134;
	int16_t x292 = 1823;

	t72 = ((x289<=(x290^x291))%x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -692LL;
	int32_t x294 = INT32_MAX;
	static int8_t x295 = INT8_MIN;
	static int16_t x296 = -1;
	volatile int32_t t73 = 70008;

	t73 = ((x293<=(x294^x295))%x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	static int32_t x299 = -855179;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t74 = 524312401U;

	t74 = ((x297<=(x298^x299))%x300);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -1;
	int64_t x304 = INT64_MIN;
	static int64_t t75 = -2067475993471843694LL;

	t75 = ((x301<=(x302^x303))%x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int16_t x306 = -1421;
	static int16_t x307 = -1;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 13395456;

	t76 = ((x305<=(x306^x307))%x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	static int64_t x311 = INT64_MIN;
	volatile int32_t t77 = -60;

	t77 = ((x309<=(x310^x311))%x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x317 = -1145;
	int8_t x319 = 0;
	volatile uint32_t t78 = 13375U;

	t78 = ((x317<=(x318^x319))%x320);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = INT8_MIN;
	uint32_t x323 = 0U;
	int32_t x324 = -1;
	int32_t t79 = -78;

	t79 = ((x321<=(x322^x323))%x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = -243LL;
	static int64_t x328 = INT64_MAX;
	int64_t t80 = 7LL;

	t80 = ((x325<=(x326^x327))%x328);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x329 = 3532U;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MAX;
	volatile int64_t t81 = 33LL;

	t81 = ((x329<=(x330^x331))%x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x335 = 2;
	volatile int16_t x336 = INT16_MAX;
	volatile int32_t t82 = 34071;

	t82 = ((x333<=(x334^x335))%x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = 125;
	volatile int64_t x339 = INT64_MIN;
	volatile int16_t x340 = INT16_MAX;
	int32_t t83 = -30;

	t83 = ((x337<=(x338^x339))%x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = 6838138131165080LL;
	uint8_t x342 = 0U;
	int16_t x343 = -1;
	static int64_t x344 = -1LL;
	static volatile int64_t t84 = 9814410LL;

	t84 = ((x341<=(x342^x343))%x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = -1LL;
	uint32_t x346 = UINT32_MAX;
	volatile uint16_t x347 = UINT16_MAX;

	t85 = ((x345<=(x346^x347))%x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = 1534269281LLU;
	int64_t x352 = INT64_MAX;
	volatile int64_t t86 = 883891927LL;

	t86 = ((x349<=(x350^x351))%x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = 3;
	volatile uint8_t x354 = 1U;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	int64_t t87 = -36LL;

	t87 = ((x353<=(x354^x355))%x356);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = -1855616;
	uint8_t x358 = UINT8_MAX;
	static volatile uint64_t x359 = 6LLU;
	volatile int16_t x360 = -78;
	int32_t t88 = 2324;

	t88 = ((x357<=(x358^x359))%x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 10U;
	int16_t x362 = -1;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	volatile int64_t t89 = -557959517177917LL;

	t89 = ((x361<=(x362^x363))%x364);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x365 = 199040360789771886LLU;
	static int32_t x366 = -4819551;
	volatile int64_t x367 = -1LL;
	int16_t x368 = INT16_MIN;

	t90 = ((x365<=(x366^x367))%x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = UINT64_MAX;
	static uint8_t x371 = UINT8_MAX;
	static uint8_t x372 = 5U;
	volatile int32_t t91 = -169;

	t91 = ((x369<=(x370^x371))%x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = -15453436456402412LL;
	int64_t x374 = INT64_MIN;
	int16_t x375 = 862;
	int8_t x376 = -29;
	int32_t t92 = -14660775;

	t92 = ((x373<=(x374^x375))%x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x377 = -4;
	static uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 21273U;
	volatile int32_t t93 = -709;

	t93 = ((x377<=(x378^x379))%x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	static int32_t x383 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	uint64_t t94 = 0LLU;

	t94 = ((x381<=(x382^x383))%x384);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = -1;
	uint64_t x387 = 128795542301502LLU;
	volatile int8_t x388 = -21;

	t95 = ((x385<=(x386^x387))%x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t96 = 8;

	t96 = ((x389<=(x390^x391))%x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x393 = 240617727LLU;
	uint8_t x395 = 0U;
	int32_t x396 = INT32_MAX;
	int32_t t97 = 2415165;

	t97 = ((x393<=(x394^x395))%x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	int32_t x398 = INT32_MAX;
	uint16_t x400 = 21U;
	volatile int32_t t98 = -88464;

	t98 = ((x397<=(x398^x399))%x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x401 = 6U;
	uint64_t x403 = 97207573LLU;
	uint32_t x404 = 188882758U;
	uint32_t t99 = 10113513U;

	t99 = ((x401<=(x402^x403))%x404);

	if (t99 != 1U) { NG(); } else { ; }
	
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

