#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int8_t x2 = -1;
uint64_t x8 = 585LLU;
uint64_t t1 = 545757428860108041LLU;
uint64_t x10 = 7672306LLU;
volatile uint16_t x13 = 0U;
int32_t x17 = 1;
int8_t x23 = INT8_MIN;
int32_t x24 = INT32_MIN;
static int64_t x26 = -1LL;
static int32_t t6 = 4;
int32_t x32 = -1;
volatile int32_t t8 = 32156808;
volatile uint8_t x39 = UINT8_MAX;
volatile int32_t t9 = -53788;
uint64_t x49 = 41204861832628899LLU;
static volatile int64_t x50 = -439396136257276LL;
int64_t x51 = 717187730887697LL;
volatile int32_t t12 = 261;
int8_t x59 = -55;
int8_t x62 = 13;
int32_t x67 = INT32_MAX;
uint8_t x68 = 35U;
int16_t x71 = INT16_MIN;
uint32_t x75 = 3011U;
static int8_t x81 = 32;
int16_t x84 = -120;
uint16_t x85 = 43U;
int16_t x88 = -1;
int32_t t22 = -60104417;
uint32_t x93 = UINT32_MAX;
uint64_t x101 = 4LLU;
uint16_t x102 = 9529U;
uint16_t x114 = UINT16_MAX;
volatile int32_t t28 = 85;
static int8_t x117 = 1;
int64_t x128 = -21LL;
static int64_t x130 = INT64_MIN;
volatile int32_t x131 = INT32_MAX;
static uint64_t x133 = UINT64_MAX;
static int32_t x136 = 0;
volatile uint32_t x139 = UINT32_MAX;
volatile uint64_t x148 = UINT64_MAX;
int16_t x155 = -1;
int32_t x157 = 5919371;
int32_t t39 = -839;
int32_t t42 = 1;
static uint32_t x175 = 1527584168U;
uint16_t x178 = 104U;
volatile uint32_t t45 = UINT32_MAX;
int8_t x186 = INT8_MIN;
volatile uint64_t x191 = UINT64_MAX;
int64_t x194 = INT64_MAX;
int16_t x195 = INT16_MAX;
int32_t x196 = INT32_MAX;
volatile uint16_t x200 = 162U;
uint64_t x202 = 125059LLU;
int16_t x205 = INT16_MIN;
uint64_t x206 = UINT64_MAX;
volatile uint32_t x208 = 1713666U;
volatile int32_t t52 = INT32_MIN;
static uint64_t x218 = 184209LLU;
volatile int8_t x222 = -63;
uint32_t x224 = UINT32_MAX;
static uint64_t t56 = 171331002006036LLU;
volatile int32_t t57 = 649;
int64_t x235 = -4466960615LL;
int32_t t58 = 742;
volatile uint32_t x240 = 1997516212U;
uint32_t t59 = 5431236U;
volatile int32_t t61 = -391930;
int16_t x252 = -1;
volatile int32_t t62 = 159678961;
static int32_t x253 = INT32_MIN;
uint8_t x267 = 2U;
volatile int8_t x270 = 15;
volatile uint16_t x279 = 7U;
static uint64_t x292 = 519703484227550LLU;
static uint16_t x295 = 3554U;
int32_t x297 = -1;
int16_t x300 = -1;
static volatile int8_t x308 = 0;
int8_t x310 = INT8_MIN;
volatile int32_t t79 = 1;
int32_t t80 = 3257;
static int16_t x330 = -134;
volatile uint64_t x336 = 85267106990LLU;
uint32_t x340 = UINT32_MAX;
static volatile int16_t x342 = INT16_MIN;
int64_t t87 = 3887LL;
static int8_t x355 = INT8_MIN;
volatile int32_t t88 = 37970;
int16_t x358 = -141;
int8_t x362 = -27;
uint16_t x365 = UINT16_MAX;
uint64_t x367 = 601759323509LLU;
uint64_t x369 = 8075718529925LLU;
int64_t x376 = -45132575488364LL;
int8_t x379 = -1;
volatile int32_t x383 = -1007;
volatile int32_t t96 = 50;
uint16_t x390 = UINT16_MAX;
uint64_t x395 = 1625277274678662LLU;
volatile uint8_t x396 = 3U;
int16_t x399 = -12456;


void f0(void) {
	int8_t x3 = -1;
	uint32_t x4 = 107342599U;
	static uint32_t t0 = 128U;

	t0 = ((x1<=(x2<x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 2638961765LLU;
	volatile int16_t x6 = INT16_MAX;
	static uint8_t x7 = UINT8_MAX;

	t1 = ((x5<=(x6<x7))*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	uint16_t x12 = 31159U;
	int32_t t2 = -250692806;

	t2 = ((x9<=(x10<x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = 7U;
	uint16_t x15 = 0U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = INT32_MIN;

	t3 = ((x13<=(x14<x15))*x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 15990U;
	int64_t x19 = INT64_MIN;
	int64_t x20 = 428LL;
	int64_t t4 = 70489217250097869LL;

	t4 = ((x17<=(x18<x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	int16_t x22 = 1;
	int32_t t5 = INT32_MIN;

	t5 = ((x21<=(x22<x23))*x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 2342289858636LL;
	static uint32_t x27 = UINT32_MAX;
	static volatile int8_t x28 = INT8_MAX;

	t6 = ((x25<=(x26<x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	volatile int16_t x31 = -13;
	static int32_t t7 = 10595;

	t7 = ((x29<=(x30<x31))*x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	volatile uint64_t x34 = 19LLU;
	static uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;

	t8 = ((x33<=(x34<x35))*x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	int64_t x38 = -1LL;
	volatile int32_t x40 = -2856272;

	t9 = ((x37<=(x38<x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int8_t x42 = -1;
	int16_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -18157;

	t10 = ((x41<=(x42<x43))*x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -32449332;
	uint16_t x48 = 23681U;
	static volatile int32_t t11 = -4530578;

	t11 = ((x45<=(x46<x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x52 = INT16_MIN;

	t12 = ((x49<=(x50<x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 579911265349621531LL;
	uint16_t x54 = 1U;
	int64_t x55 = 24691465147090297LL;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 107158587;

	t13 = ((x53<=(x54<x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -46010LL;
	volatile int16_t x58 = -3115;
	int16_t x60 = -1;
	volatile int32_t t14 = -31;

	t14 = ((x57<=(x58<x59))*x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 7009;
	uint16_t x63 = UINT16_MAX;
	uint64_t x64 = 93200786LLU;
	volatile uint64_t t15 = 148046667LLU;

	t15 = ((x61<=(x62<x63))*x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	int64_t x66 = -1LL;
	volatile int32_t t16 = -53239018;

	t16 = ((x65<=(x66<x67))*x68);

	if (t16 != 35) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static uint16_t x70 = UINT16_MAX;
	uint32_t x72 = 570U;
	uint32_t t17 = 21262U;

	t17 = ((x69<=(x70<x71))*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint64_t x74 = 8726022517LLU;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -45538918;

	t18 = ((x73<=(x74<x75))*x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int64_t x78 = INT64_MIN;
	volatile int32_t x79 = INT32_MIN;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -117;

	t19 = ((x77<=(x78<x79))*x80);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	volatile int32_t t20 = 0;

	t20 = ((x81<=(x82<x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MAX;
	uint8_t x87 = 47U;
	int32_t t21 = 31;

	t21 = ((x85<=(x86<x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -6;
	int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;

	t22 = ((x89<=(x90<x91))*x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = -1LL;
	int16_t x95 = -1;
	static uint64_t x96 = 110474013806LLU;
	volatile uint64_t t23 = 241296049LLU;

	t23 = ((x93<=(x94<x95))*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 26;
	int8_t x98 = -1;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = INT64_MAX;
	int64_t t24 = -80984345155LL;

	t24 = ((x97<=(x98<x99))*x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = 2;
	volatile int16_t x104 = -1;
	volatile int32_t t25 = 5;

	t25 = ((x101<=(x102<x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 13LLU;
	int16_t x106 = 0;
	static uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 56433U;
	volatile uint32_t t26 = 132U;

	t26 = ((x105<=(x106<x107))*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -994;
	static uint64_t x110 = 132LLU;
	int16_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = 629;

	t27 = ((x109<=(x110<x111))*x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int8_t x115 = INT8_MIN;
	volatile int32_t x116 = 9;

	t28 = ((x113<=(x114<x115))*x116);

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x118 = -1;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MIN;
	int64_t t29 = 43594LL;

	t29 = ((x117<=(x118<x119))*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static uint64_t x122 = 8LLU;
	static uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t30 = UINT64_MAX;

	t30 = ((x121<=(x122<x123))*x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -248;
	int64_t x126 = -82630940270021498LL;
	int64_t x127 = INT64_MAX;
	int64_t t31 = 328LL;

	t31 = ((x125<=(x126<x127))*x128);

	if (t31 != -21LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 10169U;
	uint64_t x132 = 1239757LLU;
	static volatile uint64_t t32 = 791060360493LLU;

	t32 = ((x129<=(x130<x131))*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -568LL;
	volatile int64_t x135 = 246865632563LL;
	int32_t t33 = -228899901;

	t33 = ((x133<=(x134<x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	static int64_t x138 = INT64_MIN;
	volatile uint32_t x140 = 110576975U;
	static volatile uint32_t t34 = 3U;

	t34 = ((x137<=(x138<x139))*x140);

	if (t34 != 110576975U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -1LL;
	volatile uint16_t x142 = 401U;
	static volatile int16_t x143 = -1;
	volatile uint16_t x144 = 160U;
	static volatile int32_t t35 = 35699;

	t35 = ((x141<=(x142<x143))*x144);

	if (t35 != 160) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x145<=(x146<x147))*x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = 868854700436LLU;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 1007218688;

	t37 = ((x149<=(x150<x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int64_t x154 = INT64_MIN;
	int16_t x156 = 71;
	volatile int32_t t38 = -108;

	t38 = ((x153<=(x154<x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x158 = 12419119;
	volatile int32_t x159 = 3007217;
	int8_t x160 = -1;

	t39 = ((x157<=(x158<x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 6040LLU;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MAX;
	uint32_t x164 = 89546U;
	uint32_t t40 = 496U;

	t40 = ((x161<=(x162<x163))*x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 113LLU;
	int8_t x166 = 8;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -28;

	t41 = ((x165<=(x166<x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 414037U;
	int32_t x170 = -8;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = UINT8_MAX;

	t42 = ((x169<=(x170<x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 7741LLU;
	int16_t x174 = INT16_MIN;
	int8_t x176 = 0;
	static int32_t t43 = 88;

	t43 = ((x173<=(x174<x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	uint64_t x179 = 16731962840227988LLU;
	int16_t x180 = 0;
	int32_t t44 = -4887853;

	t44 = ((x177<=(x178<x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint8_t x182 = 1U;
	static uint32_t x183 = UINT32_MAX;
	static uint32_t x184 = UINT32_MAX;

	t45 = ((x181<=(x182<x183))*x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	uint16_t x188 = 106U;
	volatile int32_t t46 = -1;

	t46 = ((x185<=(x186<x187))*x188);

	if (t46 != 106) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 18U;
	uint16_t x190 = UINT16_MAX;
	static int64_t x192 = -1LL;
	volatile int64_t t47 = 34LL;

	t47 = ((x189<=(x190<x191))*x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int32_t t48 = -7869;

	t48 = ((x193<=(x194<x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 209;
	int16_t x198 = INT16_MAX;
	int64_t x199 = -1LL;
	int32_t t49 = 23;

	t49 = ((x197<=(x198<x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 216248127216241LL;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = -957;
	static int32_t t50 = 207;

	t50 = ((x201<=(x202<x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x207 = 96496U;
	volatile uint32_t t51 = 103272U;

	t51 = ((x205<=(x206<x207))*x208);

	if (t51 != 1713666U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -16;
	uint8_t x210 = 48U;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;

	t52 = ((x209<=(x210<x211))*x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 0U;
	volatile int32_t x215 = INT32_MAX;
	static int32_t x216 = INT32_MIN;
	static volatile int32_t t53 = 208373997;

	t53 = ((x213<=(x214<x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 160599;
	int32_t x219 = 40281;
	uint16_t x220 = 402U;
	int32_t t54 = -18;

	t54 = ((x217<=(x218<x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 2835LLU;
	int16_t x223 = INT16_MIN;
	volatile uint32_t t55 = 90218387U;

	t55 = ((x221<=(x222<x223))*x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = 11884284926LL;
	volatile int32_t x226 = 3653543;
	uint64_t x227 = 1329062LLU;
	uint64_t x228 = 5076362113112LLU;

	t56 = ((x225<=(x226<x227))*x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = 67U;
	int8_t x232 = INT8_MIN;

	t57 = ((x229<=(x230<x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	static volatile uint8_t x234 = 23U;
	volatile uint16_t x236 = 1015U;

	t58 = ((x233<=(x234<x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;

	t59 = ((x237<=(x238<x239))*x240);

	if (t59 != 1997516212U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 261930855U;
	volatile uint32_t x242 = 1407805U;
	uint8_t x243 = 3U;
	int8_t x244 = INT8_MAX;
	int32_t t60 = -3145081;

	t60 = ((x241<=(x242<x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 24U;
	int64_t x246 = -1LL;
	static int16_t x247 = -1;
	int32_t x248 = -1;

	t61 = ((x245<=(x246<x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;

	t62 = ((x249<=(x250<x251))*x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	static int64_t x255 = 25733082263LL;
	int64_t x256 = INT64_MIN;
	int64_t t63 = INT64_MIN;

	t63 = ((x253<=(x254<x255))*x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile int64_t x258 = -650941161028LL;
	uint16_t x259 = 3299U;
	volatile uint32_t x260 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = ((x257<=(x258<x259))*x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 371226750157373LLU;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 342984;

	t65 = ((x261<=(x262<x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 152;
	uint64_t x266 = 179134972089927LLU;
	volatile uint8_t x268 = 10U;
	static int32_t t66 = 29288;

	t66 = ((x265<=(x266<x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 6U;
	uint8_t x271 = 0U;
	uint64_t x272 = 3688794771LLU;
	static uint64_t t67 = 91335168048LLU;

	t67 = ((x269<=(x270<x271))*x272);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 2817;
	int32_t x274 = INT32_MIN;
	static volatile int8_t x275 = INT8_MAX;
	int32_t x276 = -1;
	int32_t t68 = 0;

	t68 = ((x273<=(x274<x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = -1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = INT32_MAX;

	t69 = ((x277<=(x278<x279))*x280);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 1U;
	int16_t x282 = -2;
	uint32_t x283 = 0U;
	uint32_t x284 = 481U;
	static volatile uint32_t t70 = 1680U;

	t70 = ((x281<=(x282<x283))*x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -12696;
	static int32_t x286 = -17;
	uint64_t x287 = 173986714050LLU;
	volatile uint8_t x288 = 1U;
	int32_t t71 = 6146397;

	t71 = ((x285<=(x286<x287))*x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 1U;
	int16_t x290 = 3;
	uint32_t x291 = UINT32_MAX;
	uint64_t t72 = 34186232805077692LLU;

	t72 = ((x289<=(x290<x291))*x292);

	if (t72 != 519703484227550LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 5441LLU;
	static uint16_t x294 = UINT16_MAX;
	static uint16_t x296 = 807U;
	int32_t t73 = -1;

	t73 = ((x293<=(x294<x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = 1;
	int64_t x299 = INT64_MAX;
	int32_t t74 = -193223;

	t74 = ((x297<=(x298<x299))*x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	uint64_t x303 = 13LLU;
	static uint16_t x304 = 115U;
	static volatile int32_t t75 = 474626279;

	t75 = ((x301<=(x302<x303))*x304);

	if (t75 != 115) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 570;
	int32_t x306 = 9646115;
	int64_t x307 = INT64_MAX;
	volatile int32_t t76 = 320464;

	t76 = ((x305<=(x306<x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = 769;
	static int32_t t77 = 11;

	t77 = ((x309<=(x310<x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	int16_t x314 = -2970;
	volatile int64_t x315 = -1LL;
	int16_t x316 = -1;
	volatile int32_t t78 = 506;

	t78 = ((x313<=(x314<x315))*x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 7U;
	volatile uint32_t x318 = UINT32_MAX;
	int16_t x319 = 1;
	int16_t x320 = INT16_MIN;

	t79 = ((x317<=(x318<x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	volatile uint16_t x322 = 7U;
	uint32_t x323 = 2U;
	volatile int8_t x324 = -1;

	t80 = ((x321<=(x322<x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 29208;
	int8_t x326 = INT8_MAX;
	static int32_t x327 = 13606251;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 559444;

	t81 = ((x325<=(x326<x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -1LL;
	volatile int32_t x331 = -8;
	uint8_t x332 = 117U;
	int32_t t82 = 2;

	t82 = ((x329<=(x330<x331))*x332);

	if (t82 != 117) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 30;
	static uint32_t x334 = 1U;
	int64_t x335 = 9853663687296011LL;
	volatile uint64_t t83 = 20620653935732LLU;

	t83 = ((x333<=(x334<x335))*x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = 1212902904289415121LL;
	static int16_t x339 = INT16_MIN;
	uint32_t t84 = 128U;

	t84 = ((x337<=(x338<x339))*x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -259585661355LL;
	static volatile int8_t x343 = INT8_MAX;
	static int64_t x344 = -1LL;
	int64_t t85 = 337926760LL;

	t85 = ((x341<=(x342<x343))*x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	uint16_t x347 = 0U;
	static int16_t x348 = -175;
	volatile int32_t t86 = -213353789;

	t86 = ((x345<=(x346<x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 13LLU;
	int8_t x350 = -1;
	volatile int16_t x351 = INT16_MAX;
	int64_t x352 = -1LL;

	t87 = ((x349<=(x350<x351))*x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	static int16_t x354 = INT16_MIN;
	int32_t x356 = -1;

	t88 = ((x353<=(x354<x355))*x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	uint32_t x359 = UINT32_MAX;
	static uint16_t x360 = 48U;
	int32_t t89 = 3;

	t89 = ((x357<=(x358<x359))*x360);

	if (t89 != 48) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile uint32_t x364 = UINT32_MAX;
	static uint32_t t90 = 20805326U;

	t90 = ((x361<=(x362<x363))*x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 8611U;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 35663;

	t91 = ((x365<=(x366<x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -1;
	uint32_t x372 = 79515888U;
	static uint32_t t92 = 78928409U;

	t92 = ((x369<=(x370<x371))*x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 29U;
	int32_t x374 = -1;
	int8_t x375 = 12;
	static volatile int64_t t93 = -24203241186LL;

	t93 = ((x373<=(x374<x375))*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MAX;
	int16_t x380 = -1;
	int32_t t94 = 23;

	t94 = ((x377<=(x378<x379))*x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -2;
	static volatile uint8_t x382 = 31U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -67250202;

	t95 = ((x381<=(x382<x383))*x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	uint32_t x387 = 1558U;
	uint8_t x388 = 7U;

	t96 = ((x385<=(x386<x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = 26;
	int16_t x391 = 549;
	volatile uint32_t x392 = UINT32_MAX;
	uint32_t t97 = 16085U;

	t97 = ((x389<=(x390<x391))*x392);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	volatile int32_t t98 = -1;

	t98 = ((x393<=(x394<x395))*x396);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 24;
	volatile int8_t x398 = INT8_MIN;
	volatile int32_t x400 = INT32_MIN;
	int32_t t99 = 183573337;

	t99 = ((x397<=(x398<x399))*x400);

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

