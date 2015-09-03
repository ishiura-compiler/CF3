#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -124;
int64_t x7 = INT64_MIN;
int32_t t2 = -1;
volatile int16_t x13 = -1;
int32_t x16 = INT32_MIN;
int8_t x19 = INT8_MIN;
static uint8_t x20 = 1U;
uint64_t x23 = UINT64_MAX;
int32_t x27 = -6;
static uint16_t x28 = 5U;
int64_t x29 = INT64_MIN;
uint16_t x30 = UINT16_MAX;
volatile int32_t t7 = 979268735;
int64_t x33 = 3566100979919784365LL;
uint16_t x34 = 6376U;
int64_t x37 = -144342916295174666LL;
static int32_t x38 = -1;
int8_t x42 = 3;
uint64_t x43 = UINT64_MAX;
uint8_t x47 = 25U;
volatile int32_t t11 = -143395;
static uint16_t x49 = 2193U;
uint32_t x53 = 31U;
static int16_t x60 = INT16_MIN;
static volatile int32_t t14 = -4473;
int64_t x61 = 95LL;
int32_t t17 = -4;
volatile int8_t x76 = -42;
int32_t x99 = -3;
int8_t x109 = INT8_MAX;
static uint16_t x112 = UINT16_MAX;
uint8_t x113 = UINT8_MAX;
int32_t x115 = 3138;
static volatile int32_t t29 = -137886579;
static volatile int16_t x124 = INT16_MAX;
volatile int32_t t30 = 18089228;
uint16_t x134 = 1U;
uint32_t x136 = 369280000U;
static int32_t x154 = INT32_MAX;
int64_t x156 = INT64_MIN;
static int32_t x164 = -1;
volatile int32_t t39 = 21673;
volatile int16_t x166 = -1;
uint8_t x168 = 5U;
static int16_t x177 = 432;
uint64_t x181 = UINT64_MAX;
int64_t x185 = -26450194581631LL;
static int64_t x187 = INT64_MAX;
volatile int32_t t45 = -6;
int32_t t46 = -11;
int16_t x193 = INT16_MAX;
static volatile int32_t t47 = -303340;
int16_t x199 = 3;
volatile int8_t x202 = INT8_MIN;
uint8_t x203 = UINT8_MAX;
uint8_t x204 = 7U;
int32_t t50 = -1361984;
volatile int32_t t51 = -56753433;
static int16_t x214 = INT16_MIN;
static volatile int8_t x217 = INT8_MAX;
static volatile uint8_t x221 = 94U;
int32_t x230 = 32;
int32_t x231 = 486;
static int32_t t56 = 1533400;
uint8_t x239 = 7U;
volatile int32_t t58 = 124;
int8_t x242 = 27;
volatile int8_t x244 = -1;
uint32_t x246 = UINT32_MAX;
int32_t t61 = 20806147;
uint32_t x253 = UINT32_MAX;
int32_t x254 = -25696855;
static int16_t x255 = 12;
uint64_t x256 = 26LLU;
uint16_t x257 = 4U;
int8_t x258 = INT8_MAX;
int8_t x259 = INT8_MIN;
int64_t x266 = INT64_MIN;
static int32_t x271 = INT32_MIN;
volatile int32_t t66 = -201130;
uint64_t x281 = 18423205143LLU;
static int16_t x282 = -3;
int32_t x289 = INT32_MIN;
int32_t t70 = -7149465;
static uint32_t x296 = UINT32_MAX;
static int16_t x301 = INT16_MIN;
int32_t t74 = 6;
int64_t x318 = INT64_MAX;
int32_t t77 = -17611;
int8_t x321 = INT8_MIN;
uint64_t x325 = 29LLU;
uint64_t x332 = 1LLU;
volatile int64_t x337 = 2924461795229LL;
static int16_t x339 = INT16_MAX;
uint16_t x341 = 22U;
int32_t x343 = 449690552;
int32_t x360 = INT32_MIN;
static int32_t t87 = -861373;
int8_t x361 = INT8_MIN;
int8_t x369 = INT8_MAX;
uint16_t x374 = 1957U;
static int64_t x376 = -1LL;
static int32_t t93 = 0;
int8_t x389 = INT8_MAX;
static volatile int32_t x392 = INT32_MAX;
int16_t x399 = INT16_MIN;
uint32_t x401 = 170556896U;
uint8_t x403 = 29U;
volatile int32_t t98 = -3775328;
static int32_t x406 = INT32_MIN;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x3 = -1;
	uint64_t x4 = 931805797311LLU;
	static int32_t t0 = 64670;

	t0 = ((x1<=(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 14750U;
	int64_t x6 = 54695615427356LL;
	uint8_t x8 = 5U;
	volatile int32_t t1 = 0;

	t1 = ((x5<=(x6%x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	uint32_t x10 = UINT32_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	uint64_t x12 = 1722168195338368LLU;

	t2 = ((x9<=(x10%x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	uint32_t x15 = UINT32_MAX;
	int32_t t3 = 3203442;

	t3 = ((x13<=(x14%x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint16_t x18 = 2U;
	static volatile int32_t t4 = 79453040;

	t4 = ((x17<=(x18%x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	int16_t x22 = 3;
	int64_t x24 = -31LL;
	int32_t t5 = 38465733;

	t5 = ((x21<=(x22%x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3468LLU;
	uint8_t x26 = 5U;
	volatile int32_t t6 = -1;

	t6 = ((x25<=(x26%x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = 1;
	int8_t x32 = INT8_MIN;

	t7 = ((x29<=(x30%x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x35 = 10;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 0;

	t8 = ((x33<=(x34%x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x39 = 6065U;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 977031147;

	t9 = ((x37<=(x38%x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 14;
	int16_t x44 = -2;
	int32_t t10 = -1030658075;

	t10 = ((x41<=(x42%x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MIN;
	uint8_t x48 = 3U;

	t11 = ((x45<=(x46%x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint64_t x51 = 102608LLU;
	int32_t x52 = -1;
	int32_t t12 = -12502;

	t12 = ((x49<=(x50%x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x54 = 90268U;
	static int64_t x55 = 101638579562LL;
	int16_t x56 = -5;
	static int32_t t13 = -7;

	t13 = ((x53<=(x54%x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = 222684795968216421LL;
	static volatile int16_t x59 = -1;

	t14 = ((x57<=(x58%x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = -246;

	t15 = ((x61<=(x62%x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -770354786587905123LL;
	int16_t x66 = INT16_MIN;
	volatile int32_t x67 = -1;
	uint16_t x68 = 1844U;
	int32_t t16 = 107163442;

	t16 = ((x65<=(x66%x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = INT64_MIN;

	t17 = ((x69<=(x70%x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 1300633658867061266LL;
	int32_t x74 = INT32_MIN;
	volatile int8_t x75 = INT8_MAX;
	int32_t t18 = 248162;

	t18 = ((x73<=(x74%x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -3;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = -19239081124LL;
	int16_t x80 = -1478;
	volatile int32_t t19 = 9926;

	t19 = ((x77<=(x78%x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 10140U;
	int16_t x82 = INT16_MIN;
	volatile uint32_t x83 = 61212U;
	volatile int32_t x84 = -1;
	int32_t t20 = -672442;

	t20 = ((x81<=(x82%x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 28U;
	static int8_t x86 = INT8_MAX;
	volatile int32_t x87 = INT32_MAX;
	volatile uint64_t x88 = 1035713522LLU;
	int32_t t21 = -62110432;

	t21 = ((x85<=(x86%x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	static int64_t x90 = -1LL;
	static int8_t x91 = 1;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 3775;

	t22 = ((x89<=(x90%x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = -113420273;

	t23 = ((x93<=(x94%x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	uint8_t x100 = 0U;
	static volatile int32_t t24 = 31949544;

	t24 = ((x97<=(x98%x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	int32_t x102 = -172108766;
	int64_t x103 = -8521051087LL;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t25 = 168;

	t25 = ((x101<=(x102%x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 1728636637550LLU;
	volatile int32_t x106 = -24447;
	static int8_t x107 = INT8_MIN;
	static uint32_t x108 = UINT32_MAX;
	int32_t t26 = 351496669;

	t26 = ((x105<=(x106%x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MAX;
	int32_t t27 = -32758113;

	t27 = ((x109<=(x110%x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 46360;

	t28 = ((x113<=(x114%x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 31;
	int16_t x118 = INT16_MIN;
	int8_t x119 = 61;
	static uint16_t x120 = 6U;

	t29 = ((x117<=(x118%x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -2628033377794086LL;
	static int8_t x122 = -1;
	int16_t x123 = -1;

	t30 = ((x121<=(x122%x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	static int64_t x132 = INT64_MIN;
	static volatile int32_t t31 = -81;

	t31 = ((x129<=(x130%x131))<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = INT16_MIN;
	static int16_t x135 = -1;
	int32_t t32 = 154579085;

	t32 = ((x133<=(x134%x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 120650400986LLU;
	int8_t x138 = INT8_MIN;
	static uint8_t x139 = UINT8_MAX;
	static int32_t x140 = INT32_MAX;
	volatile int32_t t33 = 78;

	t33 = ((x137<=(x138%x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 5;
	static int32_t x142 = 100179155;
	static int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t34 = 53074280;

	t34 = ((x141<=(x142%x143))<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	static int32_t x146 = INT32_MIN;
	int64_t x147 = 8992832846960LL;
	int8_t x148 = INT8_MIN;
	int32_t t35 = 6;

	t35 = ((x145<=(x146%x147))<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MAX;
	static volatile uint64_t x150 = 3LLU;
	uint8_t x151 = UINT8_MAX;
	int64_t x152 = -1LL;
	int32_t t36 = 90972907;

	t36 = ((x149<=(x150%x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = 4U;
	static uint16_t x155 = UINT16_MAX;
	int32_t t37 = 1008608;

	t37 = ((x153<=(x154%x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 6U;
	volatile int64_t x158 = INT64_MIN;
	int64_t x159 = -1LL;
	int32_t x160 = -2018471;
	int32_t t38 = 0;

	t38 = ((x157<=(x158%x159))<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 1577U;
	int32_t x162 = INT32_MIN;
	volatile int16_t x163 = -1;

	t39 = ((x161<=(x162%x163))<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MIN;
	uint16_t x167 = 8647U;
	static int32_t t40 = 600053;

	t40 = ((x165<=(x166%x167))<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = 24;
	static int64_t x170 = 5817LL;
	volatile uint8_t x171 = 69U;
	int8_t x172 = INT8_MIN;
	static int32_t t41 = 33811;

	t41 = ((x169<=(x170%x171))<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1073623159847LL;
	int32_t t42 = -196799289;

	t42 = ((x173<=(x174%x175))<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = 10;
	static uint8_t x180 = 3U;
	static volatile int32_t t43 = 42782075;

	t43 = ((x177<=(x178%x179))<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x182 = INT32_MIN;
	int32_t x183 = 30;
	volatile int32_t x184 = INT32_MAX;
	volatile int32_t t44 = -3376951;

	t44 = ((x181<=(x182%x183))<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = 0;
	static int8_t x188 = 45;

	t45 = ((x185<=(x186%x187))<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = 405;
	volatile uint64_t x190 = 140251595LLU;
	volatile int16_t x191 = INT16_MIN;
	uint32_t x192 = 134696885U;

	t46 = ((x189<=(x190%x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = INT64_MAX;
	volatile int16_t x195 = INT16_MIN;
	int32_t x196 = -5;

	t47 = ((x193<=(x194%x195))<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = INT32_MIN;
	uint64_t x198 = 45964LLU;
	volatile int32_t x200 = 49;
	static int32_t t48 = -59954;

	t48 = ((x197<=(x198%x199))<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	static volatile int32_t t49 = 7305951;

	t49 = ((x201<=(x202%x203))<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 178U;
	uint32_t x206 = 3951U;
	int8_t x207 = 23;
	uint16_t x208 = UINT16_MAX;

	t50 = ((x205<=(x206%x207))<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = INT16_MAX;
	static uint64_t x212 = 391546336LLU;

	t51 = ((x209<=(x210%x211))<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	static uint8_t x216 = 30U;
	int32_t t52 = 797;

	t52 = ((x213<=(x214%x215))<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x218 = 2558U;
	static volatile int32_t x219 = INT32_MIN;
	uint16_t x220 = UINT16_MAX;
	int32_t t53 = -320;

	t53 = ((x217<=(x218%x219))<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x222 = 237;
	static int8_t x223 = 1;
	int32_t x224 = INT32_MAX;
	int32_t t54 = -3295173;

	t54 = ((x221<=(x222%x223))<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 3U;
	uint16_t x228 = 4U;
	static volatile int32_t t55 = -264829;

	t55 = ((x225<=(x226%x227))<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = -1;
	static volatile int16_t x232 = 293;

	t56 = ((x229<=(x230%x231))<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	static int8_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t57 = -130085;

	t57 = ((x233<=(x234%x235))<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = UINT8_MAX;
	uint8_t x238 = 73U;
	uint64_t x240 = UINT64_MAX;

	t58 = ((x237<=(x238%x239))<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = INT32_MIN;
	volatile int64_t x243 = INT64_MAX;
	volatile int32_t t59 = -232277674;

	t59 = ((x241<=(x242%x243))<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -1;
	static int64_t x247 = -1LL;
	volatile int64_t x248 = INT64_MIN;
	int32_t t60 = -72352;

	t60 = ((x245<=(x246%x247))<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -58;
	static int32_t x250 = -1;
	static uint8_t x251 = 9U;
	static int16_t x252 = 5497;

	t61 = ((x249<=(x250%x251))<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t t62 = -3013;

	t62 = ((x253<=(x254%x255))<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x260 = INT32_MIN;
	int32_t t63 = -1;

	t63 = ((x257<=(x258%x259))<=x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	static int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t64 = 5793;

	t64 = ((x261<=(x262%x263))<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 31U;
	int64_t x267 = -1LL;
	static volatile uint64_t x268 = 3LLU;
	volatile int32_t t65 = -1589201;

	t65 = ((x265<=(x266%x267))<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 1057797758690432905LL;
	uint64_t x270 = 504049484541868549LLU;
	static int8_t x272 = -1;

	t66 = ((x269<=(x270%x271))<=x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 2U;
	uint32_t x279 = 1684330U;
	uint64_t x280 = 7LLU;
	volatile int32_t t67 = 156;

	t67 = ((x277<=(x278%x279))<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x283 = UINT32_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	int32_t t68 = -11141;

	t68 = ((x281<=(x282%x283))<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = -1;
	int64_t x287 = 11954780379LL;
	static uint32_t x288 = UINT32_MAX;
	volatile int32_t t69 = -592318;

	t69 = ((x285<=(x286%x287))<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x290 = 2927;
	uint64_t x291 = 37699098476296626LLU;
	uint8_t x292 = 2U;

	t70 = ((x289<=(x290%x291))<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MAX;
	int64_t x294 = -1LL;
	static int64_t x295 = -1LL;
	int32_t t71 = 0;

	t71 = ((x293<=(x294%x295))<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = 24;
	uint8_t x298 = 35U;
	int32_t x299 = 32242608;
	int8_t x300 = -6;
	volatile int32_t t72 = -10;

	t72 = ((x297<=(x298%x299))<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = INT64_MIN;
	volatile uint16_t x303 = UINT16_MAX;
	static uint32_t x304 = 4767U;
	volatile int32_t t73 = 75821088;

	t73 = ((x301<=(x302%x303))<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x305 = 1U;
	uint16_t x306 = 125U;
	static uint8_t x307 = 9U;
	static int64_t x308 = -1LL;

	t74 = ((x305<=(x306%x307))<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x309 = 11656505U;
	uint32_t x310 = UINT32_MAX;
	uint32_t x311 = 6121955U;
	uint16_t x312 = UINT16_MAX;
	int32_t t75 = 149122589;

	t75 = ((x309<=(x310%x311))<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = -1;
	uint32_t x314 = 3U;
	static int64_t x315 = INT64_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t76 = 109;

	t76 = ((x313<=(x314%x315))<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x317 = 144130661317037LLU;
	static int32_t x319 = 458393;
	int8_t x320 = INT8_MIN;

	t77 = ((x317<=(x318%x319))<=x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 4102206LLU;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t78 = -935175351;

	t78 = ((x321<=(x322%x323))<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x326 = INT16_MIN;
	static volatile int16_t x327 = INT16_MIN;
	uint32_t x328 = 622928U;
	int32_t t79 = -4;

	t79 = ((x325<=(x326%x327))<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 13515U;
	uint64_t x330 = 3LLU;
	static int16_t x331 = INT16_MIN;
	int32_t t80 = -822554;

	t80 = ((x329<=(x330%x331))<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -1;
	static int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	volatile int32_t x336 = -1;
	int32_t t81 = -4759670;

	t81 = ((x333<=(x334%x335))<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x338 = 68068779746LLU;
	int16_t x340 = 0;
	volatile int32_t t82 = 0;

	t82 = ((x337<=(x338%x339))<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x342 = -1;
	uint32_t x344 = UINT32_MAX;
	static int32_t t83 = 592558;

	t83 = ((x341<=(x342%x343))<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x345 = INT64_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	int32_t x347 = -14;
	volatile int16_t x348 = -1;
	int32_t t84 = 23191;

	t84 = ((x345<=(x346%x347))<=x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MAX;
	volatile int64_t x351 = -12855633LL;
	int8_t x352 = -1;
	int32_t t85 = 15483;

	t85 = ((x349<=(x350%x351))<=x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = -1LL;
	int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = 13U;
	volatile int32_t t86 = -456;

	t86 = ((x353<=(x354%x355))<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	static uint8_t x359 = 5U;

	t87 = ((x357<=(x358%x359))<=x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x362 = 2976746740LLU;
	int32_t x363 = -1;
	uint64_t x364 = 37LLU;
	volatile int32_t t88 = -10;

	t88 = ((x361<=(x362%x363))<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x365 = INT16_MIN;
	int32_t x366 = 7071818;
	static int16_t x367 = INT16_MAX;
	uint8_t x368 = UINT8_MAX;
	static int32_t t89 = -211293489;

	t89 = ((x365<=(x366%x367))<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = 14;
	int8_t x371 = 4;
	int8_t x372 = INT8_MIN;
	int32_t t90 = -912891;

	t90 = ((x369<=(x370%x371))<=x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x373 = INT32_MIN;
	static volatile uint16_t x375 = UINT16_MAX;
	int32_t t91 = 15;

	t91 = ((x373<=(x374%x375))<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 54653LLU;
	int64_t x378 = INT64_MIN;
	int64_t x379 = -1LL;
	volatile uint16_t x380 = 10009U;
	volatile int32_t t92 = 9148907;

	t92 = ((x377<=(x378%x379))<=x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = 100;
	static volatile int32_t x383 = INT32_MIN;
	int16_t x384 = -1;

	t93 = ((x381<=(x382%x383))<=x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 5U;
	volatile int16_t x386 = INT16_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	static volatile int64_t x388 = -1LL;
	volatile int32_t t94 = 1735373;

	t94 = ((x385<=(x386%x387))<=x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x390 = 56;
	int16_t x391 = -1;
	int32_t t95 = -60;

	t95 = ((x389<=(x390%x391))<=x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x393 = 246894944U;
	volatile uint8_t x394 = UINT8_MAX;
	volatile int64_t x395 = -1LL;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t96 = 5134;

	t96 = ((x393<=(x394%x395))<=x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = 1;
	uint8_t x398 = 1U;
	volatile int8_t x400 = -1;
	int32_t t97 = -1;

	t97 = ((x397<=(x398%x399))<=x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x402 = 6U;
	int8_t x404 = INT8_MAX;

	t98 = ((x401<=(x402%x403))<=x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 77134162617LLU;
	int8_t x407 = INT8_MIN;
	int32_t x408 = 290710755;
	int32_t t99 = 6168;

	t99 = ((x405<=(x406%x407))<=x408);

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

