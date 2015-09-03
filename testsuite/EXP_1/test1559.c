#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 569823827LLU;
int64_t x6 = 53074413075872056LL;
volatile uint64_t t6 = UINT64_MAX;
static int64_t x29 = -8627854635LL;
uint64_t x37 = 42413784LLU;
volatile int8_t x39 = INT8_MIN;
int32_t t9 = -9599;
static uint32_t x46 = 24234159U;
uint64_t x50 = UINT64_MAX;
static int64_t x59 = 2124LL;
static uint16_t x62 = 28U;
uint64_t t16 = UINT64_MAX;
uint8_t x74 = UINT8_MAX;
uint64_t x75 = UINT64_MAX;
static int64_t x76 = INT64_MIN;
static uint64_t t18 = 3LLU;
int64_t x79 = 11759994382015LL;
int32_t x85 = INT32_MAX;
int16_t x87 = INT16_MAX;
int64_t x100 = 1571098661103444LL;
static int16_t x108 = 856;
volatile int64_t x110 = 12551806604671508LL;
static int64_t t28 = -4LL;
uint64_t x119 = 2520126668285275254LLU;
int16_t x125 = INT16_MIN;
uint8_t x128 = UINT8_MAX;
int32_t x129 = INT32_MAX;
static int64_t x133 = -1LL;
uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = -2567;
static int64_t x139 = -15LL;
int16_t x161 = INT16_MAX;
uint64_t x164 = UINT64_MAX;
int8_t x168 = 12;
volatile uint16_t x189 = 2U;
int64_t x194 = 62LL;
uint32_t x199 = 19U;
uint32_t x201 = 44869720U;
int32_t x204 = 0;
uint32_t x205 = UINT32_MAX;
volatile int64_t t51 = -112844LL;
int64_t x210 = INT64_MIN;
volatile uint32_t t52 = 188U;
static uint32_t x213 = 1397306U;
uint64_t x218 = UINT64_MAX;
int8_t x219 = -59;
static int8_t x221 = INT8_MIN;
static int32_t t55 = 2140;
volatile int64_t x225 = INT64_MIN;
uint32_t x231 = 783357U;
int64_t x232 = INT64_MIN;
int32_t x234 = 1656137;
static uint8_t x236 = 1U;
volatile int32_t t58 = 363099706;
volatile int64_t x240 = INT64_MIN;
int64_t x245 = -6LL;
int32_t x248 = INT32_MIN;
uint32_t x249 = UINT32_MAX;
int8_t x250 = 0;
static int8_t x254 = -7;
int8_t x265 = INT8_MAX;
static volatile int64_t t66 = -240LL;
uint8_t x270 = 103U;
uint32_t x273 = 512647U;
uint8_t x280 = 0U;
uint64_t x281 = UINT64_MAX;
int32_t x290 = 1;
int32_t x300 = -1;
volatile uint64_t t76 = UINT64_MAX;
int64_t x310 = INT64_MIN;
static int16_t x312 = INT16_MAX;
int64_t x316 = 110377LL;
int8_t x317 = INT8_MAX;
static volatile int16_t x320 = -1;
volatile int64_t t80 = -3230LL;
int8_t x327 = INT8_MIN;
int16_t x332 = INT16_MIN;
volatile int8_t x333 = INT8_MIN;
volatile int32_t t83 = -253468354;
int32_t x340 = -56865627;
static volatile uint32_t t84 = 92274U;
int16_t x347 = 16;
int64_t x348 = INT64_MIN;
int8_t x356 = INT8_MAX;
volatile int32_t x359 = INT32_MIN;
int8_t x366 = -4;
int32_t t92 = -477631819;
int64_t x374 = INT64_MIN;
uint8_t x377 = UINT8_MAX;
uint32_t x379 = 12U;
int8_t x381 = INT8_MAX;
int16_t x382 = -1;
volatile int32_t t96 = 64220864;
volatile uint8_t x392 = UINT8_MAX;
volatile int32_t t98 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = UINT16_MAX;
	uint64_t x3 = 520427264891245LLU;
	uint16_t x4 = UINT16_MAX;

	t0 = (((x1<=x2)*x3)|x4);

	if (t0 != 520427264933887LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 58;
	volatile int16_t x7 = -311;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -26504;

	t1 = (((x5<=x6)*x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = (((x9<=x10)*x11)|x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int8_t x14 = 12;
	int32_t x15 = INT32_MAX;
	int8_t x16 = 2;
	volatile int32_t t3 = INT32_MAX;

	t3 = (((x13<=x14)*x15)|x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -1;
	static volatile int8_t x19 = 0;
	volatile int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -198;

	t4 = (((x17<=x18)*x19)|x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int16_t x22 = INT16_MAX;
	volatile int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 218036822;

	t5 = (((x21<=x22)*x23)|x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -176263LL;
	int16_t x26 = 2;
	static int8_t x27 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;

	t6 = (((x25<=x26)*x27)|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	static uint64_t x32 = 1537403978577LLU;
	uint64_t t7 = 25694339327045699LLU;

	t7 = (((x29<=x30)*x31)|x32);

	if (t7 != 1537404043263LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 10U;
	int8_t x35 = -19;
	uint64_t x36 = UINT64_MAX;
	static uint64_t t8 = UINT64_MAX;

	t8 = (((x33<=x34)*x35)|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = INT32_MIN;
	int16_t x40 = INT16_MIN;

	t9 = (((x37<=x38)*x39)|x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 531492625LLU;
	int16_t x42 = INT16_MAX;
	int64_t x43 = -42901942769353745LL;
	int32_t x44 = 0;
	static int64_t t10 = -176LL;

	t10 = (((x41<=x42)*x43)|x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	static int64_t x47 = INT64_MAX;
	uint64_t x48 = 5LLU;
	static uint64_t t11 = 420574LLU;

	t11 = (((x45<=x46)*x47)|x48);

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 126U;
	static int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -2895937;

	t12 = (((x49<=x50)*x51)|x52);

	if (t12 != -2147450881) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	int64_t x54 = -1LL;
	static uint16_t x55 = 477U;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -74;

	t13 = (((x53<=x54)*x55)|x56);

	if (t13 != -32291) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -1;
	int16_t x58 = -1;
	static volatile int32_t x60 = -1;
	static int64_t t14 = 290945284350072853LL;

	t14 = (((x57<=x58)*x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	int8_t x63 = 0;
	int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -3;

	t15 = (((x61<=x62)*x63)|x64);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint64_t x66 = UINT64_MAX;
	static uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1LL;

	t16 = (((x65<=x66)*x67)|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -5196;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 279583791235607825LLU;
	volatile uint64_t t17 = 6693527870LLU;

	t17 = (((x69<=x70)*x71)|x72);

	if (t17 != 279583791235607825LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1710952152U;

	t18 = (((x73<=x74)*x75)|x76);

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t19 = 18284366LL;

	t19 = (((x77<=x78)*x79)|x80);

	if (t19 != -9223360276860393793LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	static int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MAX;
	int64_t t20 = -526LL;

	t20 = (((x81<=x82)*x83)|x84);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = UINT32_MAX;
	static int16_t x88 = 2;
	volatile int32_t t21 = 441;

	t21 = (((x85<=x86)*x87)|x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	volatile uint32_t x90 = 2492724U;
	volatile uint16_t x91 = 33U;
	uint16_t x92 = 27U;
	volatile int32_t t22 = 237848;

	t22 = (((x89<=x90)*x91)|x92);

	if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -270202;
	uint8_t x94 = UINT8_MAX;
	volatile uint32_t x95 = 739534299U;
	int8_t x96 = -11;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (((x93<=x94)*x95)|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1870668745639LL;
	static uint32_t x98 = 1U;
	uint32_t x99 = 44U;
	volatile int64_t t24 = 158377080787LL;

	t24 = (((x97<=x98)*x99)|x100);

	if (t24 != 1571098661103484LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 25U;
	static uint16_t x104 = 121U;
	volatile int32_t t25 = -62;

	t25 = (((x101<=x102)*x103)|x104);

	if (t25 != 121) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 2U;
	volatile uint64_t x106 = 693510042484LLU;
	int32_t x107 = INT32_MAX;
	static int32_t t26 = INT32_MAX;

	t26 = (((x105<=x106)*x107)|x108);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -28;
	int32_t x111 = 875214;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -5;

	t27 = (((x109<=x110)*x111)|x112);

	if (t27 != -9522) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int16_t x114 = -15287;
	static int32_t x115 = 319253173;
	int64_t x116 = INT64_MIN;

	t28 = (((x113<=x114)*x115)|x116);

	if (t28 != -9223372036535522635LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	uint16_t x118 = 30543U;
	uint8_t x120 = 2U;
	volatile uint64_t t29 = 357801633367134LLU;

	t29 = (((x117<=x118)*x119)|x120);

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = 2473;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t30 = UINT32_MAX;

	t30 = (((x121<=x122)*x123)|x124);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -415;
	uint16_t x127 = 24346U;
	static volatile int32_t t31 = -30;

	t31 = (((x125<=x126)*x127)|x128);

	if (t31 != 24575) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x130 = INT16_MIN;
	volatile uint32_t x131 = 443642U;
	static int8_t x132 = -1;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x129<=x130)*x131)|x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 30038U;

	t33 = (((x133<=x134)*x135)|x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint16_t x138 = 91U;
	volatile uint64_t x140 = 188LLU;
	volatile uint64_t t34 = 13488661LLU;

	t34 = (((x137<=x138)*x139)|x140);

	if (t34 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 112446U;
	static int64_t x142 = INT64_MAX;
	volatile int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (((x141<=x142)*x143)|x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	static int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int16_t x148 = 13786;
	volatile int32_t t36 = -2423;

	t36 = (((x145<=x146)*x147)|x148);

	if (t36 != -38) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 572;
	uint16_t x150 = 9U;
	static uint32_t x151 = 1268692U;
	static uint8_t x152 = 60U;
	static uint32_t t37 = 9428410U;

	t37 = (((x149<=x150)*x151)|x152);

	if (t37 != 60U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	volatile uint32_t x154 = UINT32_MAX;
	int64_t x155 = INT64_MIN;
	volatile int32_t x156 = INT32_MIN;
	int64_t t38 = -7846629855600041LL;

	t38 = (((x153<=x154)*x155)|x156);

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = -1;
	int64_t x159 = INT64_MAX;
	int32_t x160 = -148;
	int64_t t39 = 29LL;

	t39 = (((x157<=x158)*x159)|x160);

	if (t39 != -148LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = 3019854937606670850LL;
	int32_t x163 = 37002;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x161<=x162)*x163)|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -91;
	uint16_t x166 = UINT16_MAX;
	static volatile int8_t x167 = INT8_MAX;
	int32_t t41 = -8965746;

	t41 = (((x165<=x166)*x167)|x168);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = INT16_MAX;
	int32_t t42 = 0;

	t42 = (((x169<=x170)*x171)|x172);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = -53152;

	t43 = (((x173<=x174)*x175)|x176);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -26;
	uint16_t x178 = 6475U;
	int16_t x179 = -296;
	static uint8_t x180 = 12U;
	int32_t t44 = 434824332;

	t44 = (((x177<=x178)*x179)|x180);

	if (t44 != -292) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x181 = 24318LL;
	int8_t x182 = INT8_MIN;
	volatile int16_t x183 = -4661;
	static int16_t x184 = -1;
	volatile int32_t t45 = 2386194;

	t45 = (((x181<=x182)*x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	volatile uint32_t x186 = UINT32_MAX;
	int16_t x187 = 606;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t46 = -16163048088LL;

	t46 = (((x185<=x186)*x187)|x188);

	if (t46 != -9223372036854775202LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = 11;
	static int8_t x191 = -7;
	static int16_t x192 = INT16_MAX;
	int32_t t47 = -1;

	t47 = (((x189<=x190)*x191)|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = INT8_MIN;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (((x193<=x194)*x195)|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 80145492450121413LLU;
	int8_t x198 = INT8_MIN;
	static uint8_t x200 = 24U;
	uint32_t t49 = 1967859U;

	t49 = (((x197<=x198)*x199)|x200);

	if (t49 != 27U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x202 = 931;
	int32_t x203 = 115750;
	static int32_t t50 = -1;

	t50 = (((x201<=x202)*x203)|x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = -1;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;

	t51 = (((x205<=x206)*x207)|x208);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1727;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = 1U;

	t52 = (((x209<=x210)*x211)|x212);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = UINT16_MAX;
	static volatile int16_t x215 = -1;
	int8_t x216 = -6;
	int32_t t53 = -1;

	t53 = (((x213<=x214)*x215)|x216);

	if (t53 != -6) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	static int16_t x220 = -1;
	static volatile int32_t t54 = -114086551;

	t54 = (((x217<=x218)*x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x222 = 37U;
	volatile int32_t x223 = -1;
	static uint16_t x224 = UINT16_MAX;

	t55 = (((x221<=x222)*x223)|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	static int32_t x227 = 569353901;
	int8_t x228 = -1;
	int32_t t56 = 5103;

	t56 = (((x225<=x226)*x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	int8_t x230 = 0;
	volatile int64_t t57 = 477LL;

	t57 = (((x229<=x230)*x231)|x232);

	if (t57 != -9223372036853992451LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 115377665U;
	volatile int16_t x235 = -43;

	t58 = (((x233<=x234)*x235)|x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	uint16_t x238 = 3U;
	int32_t x239 = INT32_MIN;
	int64_t t59 = -2LL;

	t59 = (((x237<=x238)*x239)|x240);

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 12;
	int64_t x242 = 1069919838LL;
	static int8_t x243 = -5;
	volatile int64_t x244 = 144168336LL;
	volatile int64_t t60 = -1453LL;

	t60 = (((x241<=x242)*x243)|x244);

	if (t60 != -5LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = 301440881103756LL;
	int8_t x247 = -1;
	volatile int32_t t61 = -60;

	t61 = (((x245<=x246)*x247)|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x251 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (((x249<=x250)*x251)|x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	static uint8_t x255 = 4U;
	int8_t x256 = -1;
	volatile int32_t t63 = 2;

	t63 = (((x253<=x254)*x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = 24;
	int16_t x258 = -15;
	int32_t x259 = INT32_MIN;
	int16_t x260 = -563;
	int32_t t64 = 1;

	t64 = (((x257<=x258)*x259)|x260);

	if (t64 != -563) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	static uint32_t x262 = UINT32_MAX;
	static int8_t x263 = -62;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = (((x261<=x262)*x263)|x264);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = UINT16_MAX;
	static int64_t x267 = -51745LL;
	int64_t x268 = -1206681538691LL;

	t66 = (((x265<=x266)*x267)|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 2U;
	uint8_t x271 = 88U;
	static uint64_t x272 = 93LLU;
	volatile uint64_t t67 = 4383LLU;

	t67 = (((x269<=x270)*x271)|x272);

	if (t67 != 93LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x274 = UINT64_MAX;
	uint32_t x275 = 0U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = (((x273<=x274)*x275)|x276);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	static volatile int32_t t69 = -611533;

	t69 = (((x277<=x278)*x279)|x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x282 = 4364U;
	int8_t x283 = -1;
	static int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (((x281<=x282)*x283)|x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MAX;
	int64_t x286 = -1LL;
	uint8_t x287 = 98U;
	volatile int64_t x288 = INT64_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = (((x285<=x286)*x287)|x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int16_t x291 = INT16_MIN;
	volatile int32_t x292 = INT32_MIN;
	int32_t t72 = 7;

	t72 = (((x289<=x290)*x291)|x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile int64_t x295 = -1LL;
	uint8_t x296 = 19U;
	volatile int64_t t73 = -98752872982LL;

	t73 = (((x293<=x294)*x295)|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MAX;
	volatile int32_t t74 = -8629;

	t74 = (((x297<=x298)*x299)|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = -1LL;
	int32_t x303 = INT32_MIN;
	static int32_t x304 = INT32_MIN;
	int32_t t75 = INT32_MIN;

	t75 = (((x301<=x302)*x303)|x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile int16_t x306 = 124;
	static uint16_t x307 = 1919U;
	uint64_t x308 = UINT64_MAX;

	t76 = (((x305<=x306)*x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t77 = -2850;

	t77 = (((x309<=x310)*x311)|x312);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 1U;
	int64_t x315 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = (((x313<=x314)*x315)|x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 1532U;
	int16_t x319 = INT16_MIN;
	static int32_t t79 = -60227819;

	t79 = (((x317<=x318)*x319)|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 53LLU;
	static volatile uint16_t x322 = UINT16_MAX;
	int8_t x323 = INT8_MAX;
	static volatile int64_t x324 = INT64_MIN;

	t80 = (((x321<=x322)*x323)|x324);

	if (t80 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 0U;
	int16_t x326 = -4;
	int64_t x328 = -1LL;
	volatile int64_t t81 = 2143793LL;

	t81 = (((x325<=x326)*x327)|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 6;
	int16_t x330 = INT16_MIN;
	static uint64_t x331 = 341455LLU;
	volatile uint64_t t82 = 436567787079LLU;

	t82 = (((x329<=x330)*x331)|x332);

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x334 = 2U;
	int16_t x335 = INT16_MIN;
	volatile uint16_t x336 = UINT16_MAX;

	t83 = (((x333<=x334)*x335)|x336);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	int32_t x338 = INT32_MAX;
	volatile uint32_t x339 = 1U;

	t84 = (((x337<=x338)*x339)|x340);

	if (t84 != 4238101669U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 221;
	volatile uint32_t x342 = 301795U;
	int8_t x343 = 60;
	static volatile int32_t x344 = INT32_MAX;
	static int32_t t85 = INT32_MAX;

	t85 = (((x341<=x342)*x343)|x344);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 2315LL;
	volatile int32_t x346 = -1;
	volatile int64_t t86 = INT64_MIN;

	t86 = (((x345<=x346)*x347)|x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 312531946849LL;
	uint32_t x350 = UINT32_MAX;
	uint64_t x351 = 193156260954LLU;
	int8_t x352 = INT8_MIN;
	uint64_t t87 = 312232576070210188LLU;

	t87 = (((x349<=x350)*x351)|x352);

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 1U;
	uint8_t x354 = 1U;
	int8_t x355 = INT8_MIN;
	int32_t t88 = 3209984;

	t88 = (((x353<=x354)*x355)|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 6U;
	int8_t x358 = INT8_MAX;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 1;

	t89 = (((x357<=x358)*x359)|x360);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 16981U;
	static uint32_t x363 = 103942U;
	uint8_t x364 = UINT8_MAX;
	static uint32_t t90 = 5U;

	t90 = (((x361<=x362)*x363)|x364);

	if (t90 != 104191U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int16_t x367 = INT16_MAX;
	static int8_t x368 = -1;
	volatile int32_t t91 = -4113;

	t91 = (((x365<=x366)*x367)|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint64_t x370 = UINT64_MAX;
	static int16_t x371 = INT16_MAX;
	uint8_t x372 = UINT8_MAX;

	t92 = (((x369<=x370)*x371)|x372);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t93 = INT32_MAX;

	t93 = (((x373<=x374)*x375)|x376);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = 6;
	volatile uint16_t x380 = 4263U;
	static uint32_t t94 = 5U;

	t94 = (((x377<=x378)*x379)|x380);

	if (t94 != 4263U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 9;

	t95 = (((x381<=x382)*x383)|x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 1000U;
	uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = 3;
	uint16_t x388 = 3U;

	t96 = (((x385<=x386)*x387)|x388);

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile uint64_t x390 = 24LLU;
	volatile int8_t x391 = -1;
	static int32_t t97 = 485611;

	t97 = (((x389<=x390)*x391)|x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 12446;
	uint16_t x394 = 167U;
	int16_t x395 = -442;
	int16_t x396 = 2;

	t98 = (((x393<=x394)*x395)|x396);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -393669813152759058LL;
	int32_t x398 = -8;
	int64_t x399 = -21722370LL;
	int64_t x400 = INT64_MAX;
	volatile int64_t t99 = 58386299835925747LL;

	t99 = (((x397<=x398)*x399)|x400);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

