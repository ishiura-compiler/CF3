#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 25;
volatile int32_t t0 = -19266847;
int64_t t1 = 5829213LL;
int8_t x13 = INT8_MAX;
int16_t x14 = INT16_MIN;
int32_t t2 = 363;
int8_t x17 = INT8_MIN;
uint32_t x20 = 7U;
int8_t x26 = 1;
int64_t x32 = INT64_MAX;
volatile uint8_t x37 = 8U;
static uint32_t x38 = 6U;
int64_t x39 = INT64_MIN;
int8_t x40 = INT8_MIN;
uint64_t x55 = UINT64_MAX;
int64_t x56 = INT64_MAX;
volatile int64_t t11 = 56547LL;
volatile int32_t x59 = INT32_MIN;
int32_t t12 = 60893;
int32_t x63 = 1323;
static int8_t x64 = 5;
int8_t x67 = 33;
uint8_t x70 = 7U;
uint16_t x83 = 468U;
uint32_t x90 = 11127579U;
static int16_t x98 = -1;
uint8_t x102 = 0U;
uint32_t x103 = 140961U;
static int64_t x105 = -1LL;
uint64_t x109 = UINT64_MAX;
uint8_t x111 = 1U;
int8_t x112 = 13;
int8_t x118 = INT8_MIN;
int8_t x123 = INT8_MAX;
volatile uint16_t x127 = 809U;
volatile uint16_t x129 = 173U;
int32_t t28 = -30;
int64_t t32 = 128147065883470LL;
int8_t x160 = INT8_MIN;
volatile int32_t x161 = INT32_MAX;
uint64_t x164 = 539LLU;
volatile uint64_t t36 = 1156912771LLU;
volatile int16_t x179 = INT16_MIN;
int8_t x185 = INT8_MIN;
uint32_t x186 = 0U;
volatile int64_t t43 = -24168735LL;
int32_t x194 = 3;
int16_t x195 = -18;
int32_t t44 = -4956531;
uint8_t x198 = UINT8_MAX;
int32_t t45 = -8003;
uint8_t x205 = 2U;
int16_t x206 = INT16_MAX;
int8_t x207 = INT8_MIN;
int32_t x212 = 250189804;
uint8_t x223 = 34U;
int8_t x247 = 16;
int32_t t58 = 7;
static int16_t x255 = -3;
uint32_t x256 = 62648U;
volatile uint32_t t59 = 3888U;
uint64_t x267 = 0LLU;
int8_t x268 = INT8_MIN;
static volatile int32_t t62 = -568;
static int16_t x274 = -4287;
uint8_t x283 = 0U;
volatile int32_t t66 = 1;
uint32_t x286 = 36U;
int16_t x290 = INT16_MIN;
uint16_t x291 = 3U;
static volatile int32_t t70 = -296079;
volatile uint16_t x301 = 0U;
volatile int32_t t71 = -2011;
volatile int16_t x307 = -1;
int16_t x308 = -1;
static volatile int32_t t72 = -455;
volatile uint8_t x322 = 28U;
volatile int16_t x330 = INT16_MAX;
int32_t x336 = 2219510;
int32_t x340 = 650381006;
volatile int32_t t79 = -63;
static uint32_t x343 = UINT32_MAX;
volatile int32_t t80 = -6709;
volatile uint64_t x347 = 10671815385LLU;
uint16_t x354 = 1298U;
int32_t t83 = -419096393;
int16_t x359 = INT16_MIN;
volatile int32_t t84 = 89649;
volatile int64_t x361 = -1053211812LL;
uint64_t x369 = 64525415LLU;
int32_t t88 = -1156;
int8_t x379 = INT8_MIN;
volatile int64_t x383 = INT64_MAX;
static int32_t t90 = 24958319;
int16_t x386 = INT16_MIN;
int16_t x395 = -1;
int16_t x397 = 43;
int16_t x398 = INT16_MIN;
int16_t x408 = -1;
volatile int32_t t94 = -1087199;
static int64_t t95 = -33165451814LL;
int8_t x427 = INT8_MIN;


void f0(void) {
	int64_t x5 = -4971836422184LL;
	uint32_t x6 = 222894560U;
	int64_t x7 = INT64_MAX;

	t0 = ((x5<(x6==x7))%x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	int64_t x10 = -506158277080890571LL;
	int32_t x11 = 9302626;
	int64_t x12 = INT64_MIN;

	t1 = ((x9<(x10==x11))%x12);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = -1990;
	static volatile uint8_t x16 = 109U;

	t2 = ((x13<(x14==x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = UINT32_MAX;
	static int64_t x19 = -56826743LL;
	volatile uint32_t t3 = 917431144U;

	t3 = ((x17<(x18==x19))%x20);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;
	int8_t x24 = -1;
	volatile int32_t t4 = -321;

	t4 = ((x21<(x22==x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -1937;
	int8_t x27 = -1;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t5 = 372;

	t5 = ((x25<(x26==x27))%x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = 27;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = 0;
	int64_t t6 = 1724576747504687661LL;

	t6 = ((x29<(x30==x31))%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t t7 = 7;

	t7 = ((x37<(x38==x39))%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = 418606;
	uint64_t x42 = 16763124LLU;
	int32_t x43 = -1;
	volatile int64_t x44 = INT64_MAX;
	int64_t t8 = 293063044LL;

	t8 = ((x41<(x42==x43))%x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MAX;
	uint32_t x47 = UINT32_MAX;
	static int8_t x48 = -3;
	int32_t t9 = 130;

	t9 = ((x45<(x46==x47))%x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = 27;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t10 = 491581;

	t10 = ((x49<(x50==x51))%x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MIN;

	t11 = ((x53<(x54==x55))%x56);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -229321;
	uint64_t x58 = 225LLU;
	int8_t x60 = 18;

	t12 = ((x57<(x58==x59))%x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = 1;
	static volatile int32_t t13 = -253781472;

	t13 = ((x61<(x62==x63))%x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x65 = INT16_MAX;
	volatile int32_t x66 = -1;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t14 = 40075LLU;

	t14 = ((x65<(x66==x67))%x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	static int64_t x71 = INT64_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 196209550;

	t15 = ((x69<(x70==x71))%x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile int32_t x74 = -23659321;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t16 = -16955830376306409LL;

	t16 = ((x73<(x74==x75))%x76);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = UINT8_MAX;
	uint32_t x78 = 235553U;
	volatile int16_t x79 = INT16_MAX;
	volatile uint8_t x80 = 1U;
	int32_t t17 = 185381;

	t17 = ((x77<(x78==x79))%x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -42;
	int8_t x82 = -1;
	int64_t x84 = INT64_MIN;
	static int64_t t18 = 172448647373083LL;

	t18 = ((x81<(x82==x83))%x84);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 15U;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t19 = -15;

	t19 = ((x85<(x86==x87))%x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 84538399356LL;
	uint32_t x91 = 7U;
	static int8_t x92 = -1;
	volatile int32_t t20 = 124020287;

	t20 = ((x89<(x90==x91))%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = INT32_MAX;
	int16_t x99 = -1;
	int8_t x100 = 1;
	static int32_t t21 = 120380;

	t21 = ((x97<(x98==x99))%x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MAX;
	uint8_t x104 = 12U;
	volatile int32_t t22 = 32722;

	t22 = ((x101<(x102==x103))%x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x106 = 0U;
	volatile int16_t x107 = 11;
	int16_t x108 = -1;
	int32_t t23 = 428999296;

	t23 = ((x105<(x106==x107))%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x110 = -1;
	int32_t t24 = 33;

	t24 = ((x109<(x110==x111))%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = INT8_MIN;
	static int64_t x119 = -1LL;
	int16_t x120 = INT16_MAX;
	volatile int32_t t25 = 14311;

	t25 = ((x117<(x118==x119))%x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MAX;
	uint64_t x122 = 373639152LLU;
	uint16_t x124 = UINT16_MAX;
	int32_t t26 = -190520325;

	t26 = ((x121<(x122==x123))%x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t27 = 26724;

	t27 = ((x125<(x126==x127))%x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x130 = INT16_MIN;
	static volatile int16_t x131 = INT16_MAX;
	static int32_t x132 = -3;

	t28 = ((x129<(x130==x131))%x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	volatile int16_t x134 = -156;
	uint32_t x135 = 58748696U;
	volatile int32_t x136 = -1;
	volatile int32_t t29 = 49372653;

	t29 = ((x133<(x134==x135))%x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = 4;
	int16_t x139 = 1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t30 = -605902856;

	t30 = ((x137<(x138==x139))%x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MAX;
	static int16_t x143 = -20;
	int64_t x144 = INT64_MIN;
	volatile int64_t t31 = 1169679819382849866LL;

	t31 = ((x141<(x142==x143))%x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = INT16_MIN;
	static uint64_t x146 = 37447LLU;
	int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;

	t32 = ((x145<(x146==x147))%x148);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -1;
	static volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	static int8_t x152 = 1;
	int32_t t33 = 56;

	t33 = ((x149<(x150==x151))%x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 110U;
	static int64_t x155 = -64370841721677LL;
	int8_t x156 = -1;
	volatile int32_t t34 = 24515;

	t34 = ((x153<(x154==x155))%x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MIN;
	volatile int8_t x158 = INT8_MAX;
	int32_t x159 = 3370504;
	int32_t t35 = -522;

	t35 = ((x157<(x158==x159))%x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MIN;
	static int64_t x163 = 879165066LL;

	t36 = ((x161<(x162==x163))%x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 31U;
	uint32_t x166 = 105U;
	uint32_t x167 = 1902886660U;
	uint8_t x168 = UINT8_MAX;
	static int32_t t37 = 97;

	t37 = ((x165<(x166==x167))%x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 5758U;
	int32_t x170 = -7089;
	int16_t x171 = -2;
	int16_t x172 = INT16_MAX;
	int32_t t38 = -29;

	t38 = ((x169<(x170==x171))%x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int64_t x174 = -4917307099LL;
	static int8_t x175 = INT8_MAX;
	static int8_t x176 = INT8_MIN;
	static int32_t t39 = 130699929;

	t39 = ((x173<(x174==x175))%x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MAX;
	volatile int32_t x178 = INT32_MAX;
	volatile int32_t x180 = INT32_MAX;
	volatile int32_t t40 = 4336602;

	t40 = ((x177<(x178==x179))%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 379;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = 0;
	int8_t x184 = 4;
	volatile int32_t t41 = -459070475;

	t41 = ((x181<(x182==x183))%x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x187 = 63646;
	uint64_t x188 = 434143958LLU;
	uint64_t t42 = 26430LLU;

	t42 = ((x185<(x186==x187))%x188);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = -1;
	static int8_t x191 = 40;
	static int64_t x192 = INT64_MIN;

	t43 = ((x189<(x190==x191))%x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x193 = -1;
	int16_t x196 = 50;

	t44 = ((x193<(x194==x195))%x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x199 = 1U;
	int16_t x200 = -1;

	t45 = ((x197<(x198==x199))%x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	static int8_t x202 = INT8_MAX;
	uint16_t x203 = UINT16_MAX;
	volatile int64_t x204 = INT64_MAX;
	static int64_t t46 = 687LL;

	t46 = ((x201<(x202==x203))%x204);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x208 = 139U;
	uint32_t t47 = 46188946U;

	t47 = ((x205<(x206==x207))%x208);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 0;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	static int32_t t48 = -1;

	t48 = ((x209<(x210==x211))%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -1;
	int16_t x214 = 3589;
	volatile uint16_t x215 = 214U;
	int32_t x216 = INT32_MAX;
	int32_t t49 = -42;

	t49 = ((x213<(x214==x215))%x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = INT64_MIN;
	int64_t x218 = 9368521273062547LL;
	int8_t x219 = INT8_MIN;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t50 = -721299;

	t50 = ((x217<(x218==x219))%x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 56LLU;
	int16_t x222 = INT16_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t51 = 44590497;

	t51 = ((x221<(x222==x223))%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MAX;
	static int8_t x226 = -2;
	int16_t x227 = -13;
	static uint16_t x228 = 204U;
	volatile int32_t t52 = 9370;

	t52 = ((x225<(x226==x227))%x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	int64_t x231 = -499901017962497LL;
	int16_t x232 = INT16_MAX;
	int32_t t53 = 77;

	t53 = ((x229<(x230==x231))%x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	static int16_t x234 = INT16_MIN;
	static int8_t x235 = 42;
	uint32_t x236 = 5560U;
	uint32_t t54 = 16U;

	t54 = ((x233<(x234==x235))%x236);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MAX;
	uint32_t x238 = 127382U;
	volatile int8_t x239 = INT8_MAX;
	static int32_t x240 = INT32_MIN;
	int32_t t55 = 51;

	t55 = ((x237<(x238==x239))%x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 2067972LLU;
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	int16_t x244 = 4938;
	static volatile int32_t t56 = -29135495;

	t56 = ((x241<(x242==x243))%x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t57 = 70;

	t57 = ((x245<(x246==x247))%x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x249 = -41;
	int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MAX;
	int32_t x252 = -1;

	t58 = ((x249<(x250==x251))%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x253 = 59429U;
	static volatile int64_t x254 = INT64_MAX;

	t59 = ((x253<(x254==x255))%x256);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	volatile int32_t x258 = INT32_MIN;
	static int64_t x259 = -1LL;
	volatile uint64_t x260 = 1260567LLU;
	static volatile uint64_t t60 = 23LLU;

	t60 = ((x257<(x258==x259))%x260);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = -598LL;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	int32_t x264 = 2780420;
	volatile int32_t t61 = -21155955;

	t61 = ((x261<(x262==x263))%x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int32_t x266 = -1;

	t62 = ((x265<(x266==x267))%x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	static volatile uint32_t x271 = UINT32_MAX;
	int32_t x272 = -800;
	int32_t t63 = -4870;

	t63 = ((x269<(x270==x271))%x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t64 = 1914507;

	t64 = ((x273<(x274==x275))%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	int32_t x279 = 35;
	int16_t x280 = 2;
	int32_t t65 = 580561;

	t65 = ((x277<(x278==x279))%x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x281 = 1496U;
	volatile uint64_t x282 = 1LLU;
	uint16_t x284 = 33U;

	t66 = ((x281<(x282==x283))%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	uint8_t x287 = 0U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t67 = 935846;

	t67 = ((x285<(x286==x287))%x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x292 = 4553613475396LLU;
	uint64_t t68 = 583024662683989735LLU;

	t68 = ((x289<(x290==x291))%x292);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x293 = 61U;
	int16_t x294 = 501;
	uint16_t x295 = 1746U;
	volatile int32_t x296 = -1;
	int32_t t69 = -173;

	t69 = ((x293<(x294==x295))%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x298 = UINT32_MAX;
	static volatile uint32_t x299 = 751U;
	volatile int8_t x300 = -2;

	t70 = ((x297<(x298==x299))%x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = -1LL;
	volatile int32_t x303 = 2983;
	static volatile int8_t x304 = -36;

	t71 = ((x301<(x302==x303))%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -2431578763LL;
	volatile int32_t x306 = INT32_MIN;

	t72 = ((x305<(x306==x307))%x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 0U;
	volatile int32_t x314 = -33585400;
	volatile int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;
	volatile int32_t t73 = 15583;

	t73 = ((x313<(x314==x315))%x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = INT64_MIN;
	volatile uint16_t x318 = 15U;
	int16_t x319 = -1;
	int16_t x320 = 6428;
	int32_t t74 = -1020377;

	t74 = ((x317<(x318==x319))%x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	static volatile int8_t x324 = 2;
	static volatile int32_t t75 = 16;

	t75 = ((x321<(x322==x323))%x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile int16_t x327 = 14;
	int16_t x328 = INT16_MAX;
	int32_t t76 = -8166755;

	t76 = ((x325<(x326==x327))%x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x329 = INT64_MIN;
	volatile int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t77 = -41;

	t77 = ((x329<(x330==x331))%x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	static uint32_t x335 = 18597737U;
	int32_t t78 = 28;

	t78 = ((x333<(x334==x335))%x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = 2671U;
	int8_t x339 = -1;

	t79 = ((x337<(x338==x339))%x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x341 = -1;
	int32_t x342 = 1190;
	int16_t x344 = INT16_MAX;

	t80 = ((x341<(x342==x343))%x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x345 = -1LL;
	static int16_t x346 = INT16_MIN;
	volatile int32_t x348 = 549;
	static volatile int32_t t81 = 1282660;

	t81 = ((x345<(x346==x347))%x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x349 = 23527961360175LLU;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = 2454U;
	uint32_t x352 = 37883U;
	volatile uint32_t t82 = 92U;

	t82 = ((x349<(x350==x351))%x352);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x353 = 24324U;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;

	t83 = ((x353<(x354==x355))%x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = 66;
	uint8_t x358 = 28U;
	int32_t x360 = INT32_MAX;

	t84 = ((x357<(x358==x359))%x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x362 = 5U;
	uint64_t x363 = 1895382581522LLU;
	volatile int32_t x364 = -402634;
	int32_t t85 = -1;

	t85 = ((x361<(x362==x363))%x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t86 = -2;

	t86 = ((x365<(x366==x367))%x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x370 = -106654238LL;
	uint32_t x371 = 1U;
	uint16_t x372 = 1U;
	int32_t t87 = 0;

	t87 = ((x369<(x370==x371))%x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x373 = INT32_MIN;
	static uint64_t x374 = 390503044266470610LLU;
	int8_t x375 = -1;
	static int16_t x376 = INT16_MIN;

	t88 = ((x373<(x374==x375))%x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 536550686U;
	int32_t x380 = -152254;
	static volatile int32_t t89 = 4071;

	t89 = ((x377<(x378==x379))%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MAX;
	int32_t x382 = INT32_MAX;
	int8_t x384 = -2;

	t90 = ((x381<(x382==x383))%x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	volatile int8_t x388 = -22;
	volatile int32_t t91 = 16481925;

	t91 = ((x385<(x386==x387))%x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = -1;
	uint16_t x396 = UINT16_MAX;
	int32_t t92 = 87355609;

	t92 = ((x393<(x394==x395))%x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t93 = 107540565;

	t93 = ((x397<(x398==x399))%x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = -24;
	volatile uint8_t x407 = UINT8_MAX;

	t94 = ((x405<(x406==x407))%x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = INT32_MAX;
	volatile int16_t x410 = -4;
	volatile int32_t x411 = -1;
	volatile int64_t x412 = INT64_MIN;

	t95 = ((x409<(x410==x411))%x412);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x413 = INT32_MAX;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MAX;
	volatile int32_t t96 = -64651450;

	t96 = ((x413<(x414==x415))%x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x417 = INT32_MIN;
	static int16_t x418 = INT16_MIN;
	static volatile int16_t x419 = -1;
	int8_t x420 = INT8_MIN;
	static int32_t t97 = 111;

	t97 = ((x417<(x418==x419))%x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = UINT32_MAX;
	uint32_t x422 = UINT32_MAX;
	uint16_t x423 = 7130U;
	static int8_t x424 = INT8_MIN;
	int32_t t98 = -226591056;

	t98 = ((x421<(x422==x423))%x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -1;
	int16_t x426 = -1;
	volatile uint8_t x428 = 121U;
	static int32_t t99 = -27;

	t99 = ((x425<(x426==x427))%x428);

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

