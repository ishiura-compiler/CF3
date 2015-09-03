#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = UINT32_MAX;
int64_t x7 = 12176063444655LL;
int8_t x18 = 61;
int8_t x23 = 1;
uint32_t x36 = 177049U;
int16_t x37 = INT16_MIN;
volatile uint16_t x39 = 54U;
int64_t x45 = INT64_MAX;
volatile uint64_t t11 = 25643523895746LLU;
int16_t x50 = INT16_MAX;
volatile int32_t t13 = 1029;
int64_t x59 = -16492LL;
uint16_t x61 = 2U;
volatile uint16_t x62 = UINT16_MAX;
static int64_t x64 = INT64_MAX;
static volatile int32_t x66 = -22438;
static int32_t x69 = INT32_MAX;
volatile uint16_t x81 = 27U;
int16_t x85 = 2;
uint8_t x86 = 97U;
volatile uint64_t t21 = 4192675431917629LLU;
uint64_t x92 = 412LLU;
volatile int64_t t23 = -298176433635629767LL;
int64_t x102 = -1082886183780184LL;
int64_t x103 = INT64_MIN;
uint16_t x113 = 6004U;
static int16_t x116 = -151;
uint32_t x119 = 1U;
int64_t x127 = 182396224622554817LL;
static int32_t x134 = INT32_MAX;
static volatile int16_t x144 = 2;
static int8_t x149 = -5;
uint16_t x159 = 164U;
volatile int64_t t39 = -116753625LL;
static int32_t x169 = INT32_MIN;
static int64_t x179 = INT64_MAX;
static volatile int32_t x187 = INT32_MAX;
volatile int32_t x192 = 990334;
uint32_t x194 = UINT32_MAX;
int16_t x196 = INT16_MIN;
int8_t x204 = -7;
volatile int32_t t50 = -1148779;
uint64_t x206 = UINT64_MAX;
uint16_t x208 = 8U;
int16_t x217 = INT16_MIN;
int64_t x220 = INT64_MIN;
int32_t x224 = INT32_MIN;
int16_t x226 = INT16_MIN;
volatile int32_t t57 = 909;
int32_t x236 = -1;
int64_t x241 = 2183933LL;
static int64_t x243 = -1LL;
uint64_t x248 = 8LLU;
uint64_t t61 = 60LLU;
static int64_t x250 = -6947LL;
int32_t t62 = 1903055;
int16_t x257 = -1;
uint32_t x264 = 1944U;
volatile uint64_t x271 = 0LLU;
static int64_t t67 = -1063955LL;
int32_t x276 = -1;
int32_t t68 = 15;
static int64_t x282 = INT64_MAX;
int32_t t70 = 0;
int32_t x288 = -26;
int32_t x289 = 7063;
volatile int8_t x291 = INT8_MAX;
int16_t x296 = INT16_MAX;
static int64_t x298 = INT64_MAX;
static volatile int16_t x301 = -1;
int64_t x304 = 123080911559406731LL;
int64_t t76 = -46809222367667797LL;
volatile int8_t x314 = INT8_MAX;
int32_t x318 = -1;
int32_t x322 = -5102590;
int8_t x325 = -7;
int64_t x332 = 1464071LL;
uint8_t x333 = UINT8_MAX;
uint16_t x339 = 12U;
int32_t t84 = 1;
volatile int32_t t85 = 912895;
int8_t x352 = -1;
static uint8_t x353 = UINT8_MAX;
int64_t x356 = INT64_MAX;
uint8_t x361 = 20U;
static int8_t x364 = INT8_MAX;
int32_t t93 = 23;
uint8_t x383 = UINT8_MAX;
volatile int32_t t95 = -3152240;
uint32_t x394 = 117497408U;
volatile int32_t t98 = 30;
volatile uint64_t x398 = 34201281704LLU;


void f0(void) {
	volatile uint8_t x1 = 56U;
	int8_t x2 = INT8_MIN;
	volatile uint64_t x4 = 2196337508954999LLU;
	volatile uint64_t t0 = 11644LLU;

	t0 = ((x1<(x2<x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static uint64_t x6 = 13842590808344LLU;
	static int8_t x8 = 28;
	int32_t t1 = -35060;

	t1 = ((x5<(x6<x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 5U;
	uint32_t x10 = 1073U;
	volatile int16_t x11 = 6;
	volatile uint8_t x12 = 61U;
	static volatile int32_t t2 = 2324020;

	t2 = ((x9<(x10<x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 34U;
	static int32_t x14 = 5;
	int8_t x15 = INT8_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 234769217425LLU;

	t3 = ((x13<(x14<x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = -2324601;
	static volatile int32_t t4 = -282768560;

	t4 = ((x17<(x18<x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 157U;
	uint32_t x22 = UINT32_MAX;
	static volatile int32_t x24 = -23;
	volatile int32_t t5 = -1;

	t5 = ((x21<(x22<x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x26 = UINT16_MAX;
	volatile int32_t x27 = INT32_MIN;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 151796693LLU;

	t6 = ((x25<(x26<x27))&x28);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MAX;
	static volatile int16_t x31 = 7638;
	int32_t x32 = -1;
	static int32_t t7 = 51395243;

	t7 = ((x29<(x30<x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static volatile int64_t x34 = -1412027170378310LL;
	uint32_t x35 = UINT32_MAX;
	volatile uint32_t t8 = 1067U;

	t8 = ((x33<(x34<x35))&x36);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 53923281136LLU;
	int8_t x40 = -1;
	volatile int32_t t9 = 908044009;

	t9 = ((x37<(x38<x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 388313U;
	volatile uint64_t x42 = 44444LLU;
	static int8_t x43 = -33;
	int16_t x44 = 839;
	volatile int32_t t10 = 896697;

	t10 = ((x41<(x42<x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 38U;
	uint64_t x48 = UINT64_MAX;

	t11 = ((x45<(x46<x47))&x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint32_t x51 = 21520693U;
	int32_t x52 = -1;
	volatile int32_t t12 = -24;

	t12 = ((x49<(x50<x51))&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MIN;
	static int16_t x55 = INT16_MAX;
	int16_t x56 = -9255;

	t13 = ((x53<(x54<x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int32_t x58 = INT32_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 6798352398985769123LLU;

	t14 = ((x57<(x58<x59))&x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x63 = -1;
	static int64_t t15 = -60669894264LL;

	t15 = ((x61<(x62<x63))&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -4;
	volatile int8_t x67 = -1;
	volatile int8_t x68 = -1;
	volatile int32_t t16 = -21415;

	t16 = ((x65<(x66<x67))&x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = 1;
	static uint16_t x71 = 1287U;
	static int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 1;

	t17 = ((x69<(x70<x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 46U;
	int16_t x74 = INT16_MAX;
	static volatile int32_t x75 = INT32_MIN;
	uint16_t x76 = 85U;
	int32_t t18 = -456457;

	t18 = ((x73<(x74<x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -505560100;
	volatile uint16_t x78 = UINT16_MAX;
	int16_t x79 = 156;
	volatile int8_t x80 = 1;
	int32_t t19 = -875;

	t19 = ((x77<(x78<x79))&x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	static uint16_t x83 = 0U;
	uint8_t x84 = 1U;
	int32_t t20 = -51;

	t20 = ((x81<(x82<x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x87 = 731074372083814LLU;
	uint64_t x88 = UINT64_MAX;

	t21 = ((x85<(x86<x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 2U;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -144342379492908626LL;
	uint64_t t22 = 1771175542810711675LLU;

	t22 = ((x89<(x90<x91))&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	static volatile uint64_t x95 = 506087LLU;
	int64_t x96 = -1LL;

	t23 = ((x93<(x94<x95))&x96);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 17U;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 41158LLU;
	volatile uint64_t t24 = 80193639781147LLU;

	t24 = ((x97<(x98<x99))&x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 3;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -7;

	t25 = ((x101<(x102<x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	int64_t x106 = -1LL;
	uint8_t x107 = 3U;
	int64_t x108 = 1159590559198595LL;
	int64_t t26 = 1698225571231LL;

	t26 = ((x105<(x106<x107))&x108);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MAX;
	int8_t x111 = INT8_MAX;
	volatile int32_t x112 = -1;
	int32_t t27 = -64303301;

	t27 = ((x109<(x110<x111))&x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -2LL;
	static int64_t x115 = -1LL;
	int32_t t28 = 1;

	t28 = ((x113<(x114<x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 536389058;

	t29 = ((x117<(x118<x119))&x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MIN;
	int16_t x123 = -4648;
	static int32_t x124 = -1;
	volatile int32_t t30 = 1;

	t30 = ((x121<(x122<x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 3U;
	int8_t x126 = -13;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -51;

	t31 = ((x125<(x126<x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 14U;
	volatile uint32_t x130 = 523968U;
	static uint32_t x131 = 1743U;
	volatile int64_t x132 = -1LL;
	volatile int64_t t32 = -92201191LL;

	t32 = ((x129<(x130<x131))&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 833U;
	static int64_t x135 = -329640LL;
	int64_t x136 = -1LL;
	static volatile int64_t t33 = 157505109LL;

	t33 = ((x133<(x134<x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -13;
	int8_t x138 = INT8_MIN;
	volatile uint16_t x139 = 14506U;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -6;

	t34 = ((x137<(x138<x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	static uint32_t x142 = UINT32_MAX;
	int64_t x143 = -743005828721859LL;
	int32_t t35 = -9;

	t35 = ((x141<(x142<x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = -17;
	int64_t x147 = 15204LL;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -761288765;

	t36 = ((x145<(x146<x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	uint16_t x151 = 10U;
	uint32_t x152 = 177327U;
	volatile uint32_t t37 = 4228712U;

	t37 = ((x149<(x150<x151))&x152);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	uint64_t x154 = 0LLU;
	int32_t x155 = 7431426;
	int16_t x156 = 3;
	int32_t t38 = 371597764;

	t38 = ((x153<(x154<x155))&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -15;
	static int32_t x158 = -1;
	int64_t x160 = -1LL;

	t39 = ((x157<(x158<x159))&x160);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	volatile int16_t x162 = 54;
	static int16_t x163 = 1903;
	static int16_t x164 = 1041;
	int32_t t40 = 62;

	t40 = ((x161<(x162<x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int64_t x166 = INT64_MIN;
	static int64_t x167 = INT64_MIN;
	int32_t x168 = -1;
	volatile int32_t t41 = 1006692;

	t41 = ((x165<(x166<x167))&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x170 = -37439139295508952LL;
	volatile int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -285599;

	t42 = ((x169<(x170<x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 810505U;
	static volatile uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = -1;

	t43 = ((x173<(x174<x175))&x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	static uint8_t x178 = 104U;
	uint32_t x180 = 747676U;
	uint32_t t44 = 5394568U;

	t44 = ((x177<(x178<x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -36;
	int32_t x184 = 0;
	int32_t t45 = -60546494;

	t45 = ((x181<(x182<x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	int32_t t46 = -21780;

	t46 = ((x185<(x186<x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = 229303801LL;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t47 = 25;

	t47 = ((x189<(x190<x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 2U;
	int64_t x195 = -1LL;
	volatile int32_t t48 = 40;

	t48 = ((x193<(x194<x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MAX;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -1187;

	t49 = ((x197<(x198<x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	uint32_t x202 = UINT32_MAX;
	int64_t x203 = -1LL;

	t50 = ((x201<(x202<x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 20473U;
	static int8_t x207 = -1;
	volatile int32_t t51 = -170404;

	t51 = ((x205<(x206<x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	volatile int16_t x210 = INT16_MIN;
	uint32_t x211 = 2U;
	volatile int8_t x212 = 3;
	volatile int32_t t52 = 12477;

	t52 = ((x209<(x210<x211))&x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	volatile int16_t x214 = 169;
	uint32_t x215 = 213860U;
	int8_t x216 = -1;
	volatile int32_t t53 = -1776;

	t53 = ((x213<(x214<x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 12U;
	int8_t x219 = INT8_MAX;
	volatile int64_t t54 = 8528LL;

	t54 = ((x217<(x218<x219))&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int32_t x222 = 12241;
	static uint64_t x223 = 4240325901LLU;
	int32_t t55 = 5054;

	t55 = ((x221<(x222<x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int8_t x227 = 7;
	int8_t x228 = -61;
	static int32_t t56 = 5299;

	t56 = ((x225<(x226<x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 20966LLU;
	int8_t x230 = -1;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MAX;

	t57 = ((x229<(x230<x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	int32_t t58 = -1;

	t58 = ((x233<(x234<x235))&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -559361784;
	static int64_t x238 = -1LL;
	static volatile int16_t x239 = INT16_MAX;
	volatile uint64_t x240 = 20237597501LLU;
	volatile uint64_t t59 = 4728016LLU;

	t59 = ((x237<(x238<x239))&x240);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	static int32_t t60 = 98;

	t60 = ((x241<(x242<x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x246 = 12LLU;
	uint32_t x247 = 5938942U;

	t61 = ((x245<(x246<x247))&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static volatile int64_t x251 = -1LL;
	uint16_t x252 = UINT16_MAX;

	t62 = ((x249<(x250<x251))&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint16_t x254 = 1U;
	uint16_t x255 = 27U;
	static uint64_t x256 = 80351506376684LLU;
	volatile uint64_t t63 = 67176412069LLU;

	t63 = ((x253<(x254<x255))&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = -28;
	int8_t x259 = -1;
	static int32_t x260 = 44027;
	int32_t t64 = -568671;

	t64 = ((x257<(x258<x259))&x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	uint32_t t65 = 0U;

	t65 = ((x261<(x262<x263))&x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = -1;
	volatile uint16_t x267 = UINT16_MAX;
	volatile uint64_t x268 = 7LLU;
	uint64_t t66 = 1189LLU;

	t66 = ((x265<(x266<x267))&x268);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x272 = -65958568225007LL;

	t67 = ((x269<(x270<x271))&x272);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1128LLU;
	int16_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;

	t68 = ((x273<(x274<x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	int64_t x278 = -129976LL;
	int64_t x279 = -1LL;
	uint16_t x280 = 1587U;
	int32_t t69 = 196866801;

	t69 = ((x277<(x278<x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	uint16_t x283 = 4U;
	uint16_t x284 = UINT16_MAX;

	t70 = ((x281<(x282<x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int32_t x286 = 26;
	static int64_t x287 = -1LL;
	volatile int32_t t71 = 72459457;

	t71 = ((x285<(x286<x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = -1;
	uint8_t x292 = 19U;
	volatile int32_t t72 = 14274;

	t72 = ((x289<(x290<x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 62901710057807773LLU;
	int16_t x294 = INT16_MAX;
	int64_t x295 = -1LL;
	static int32_t t73 = 50;

	t73 = ((x293<(x294<x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 324U;
	static int16_t x299 = 25;
	int32_t x300 = -536248;
	volatile int32_t t74 = -25421095;

	t74 = ((x297<(x298<x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	volatile int32_t x303 = INT32_MIN;
	int64_t t75 = -51LL;

	t75 = ((x301<(x302<x303))&x304);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 29348738LLU;
	uint64_t x306 = 663247323992LLU;
	uint64_t x307 = 70179683199047LLU;
	volatile int64_t x308 = 152258665661LL;

	t76 = ((x305<(x306<x307))&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 324554865904LLU;
	int64_t x310 = -1LL;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = -28915493LL;
	volatile int64_t t77 = -5540300486126217LL;

	t77 = ((x309<(x310<x311))&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MAX;
	int32_t t78 = 29107;

	t78 = ((x313<(x314<x315))&x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 427824831U;
	int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 15436;

	t79 = ((x317<(x318<x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x323 = -1;
	uint32_t x324 = 6205U;
	uint32_t t80 = 39665U;

	t80 = ((x321<(x322<x323))&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	static int64_t x328 = -8126028614871LL;
	int64_t t81 = 1520694971415840LL;

	t81 = ((x325<(x326<x327))&x328);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = -198;
	int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	int64_t t82 = -101161542LL;

	t82 = ((x329<(x330<x331))&x332);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 41297U;
	uint16_t x335 = 1U;
	int8_t x336 = 17;
	static int32_t t83 = 992;

	t83 = ((x333<(x334<x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 4U;
	int64_t x338 = INT64_MIN;
	int8_t x340 = 1;

	t84 = ((x337<(x338<x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 59;
	int32_t x342 = INT32_MIN;
	static volatile int8_t x343 = INT8_MAX;
	int16_t x344 = -1;

	t85 = ((x341<(x342<x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t86 = -28512LL;

	t86 = ((x345<(x346<x347))&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	static int64_t x351 = -6781747LL;
	int32_t t87 = 6626152;

	t87 = ((x349<(x350<x351))&x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = -2;
	int64_t x355 = 705424301LL;
	int64_t t88 = 2947LL;

	t88 = ((x353<(x354<x355))&x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 18U;
	static int32_t x358 = -22150;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = 40U;
	volatile int32_t t89 = 2;

	t89 = ((x357<(x358<x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = 2;
	int32_t x363 = -1;
	volatile int32_t t90 = -5111;

	t90 = ((x361<(x362<x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 1U;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = INT16_MIN;
	int32_t x368 = -200;
	int32_t t91 = 1;

	t91 = ((x365<(x366<x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = -143;
	int32_t t92 = 187;

	t92 = ((x369<(x370<x371))&x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -4;
	int64_t x374 = INT64_MAX;
	int32_t x375 = INT32_MAX;
	int16_t x376 = INT16_MAX;

	t93 = ((x373<(x374<x375))&x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static volatile int8_t x378 = INT8_MAX;
	int16_t x379 = -1;
	int64_t x380 = -40210218LL;
	int64_t t94 = -193LL;

	t94 = ((x377<(x378<x379))&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 0;
	uint16_t x382 = 1U;
	int16_t x384 = INT16_MAX;

	t95 = ((x381<(x382<x383))&x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -462692405549747LL;
	int16_t x386 = INT16_MAX;
	int32_t x387 = 3;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -184;

	t96 = ((x385<(x386<x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	static uint16_t x390 = UINT16_MAX;
	int8_t x391 = -1;
	int32_t x392 = INT32_MAX;
	int32_t t97 = -12503;

	t97 = ((x389<(x390<x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 7;
	int32_t x395 = INT32_MIN;
	int32_t x396 = -1;

	t98 = ((x393<(x394<x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int64_t x399 = -10057223800LL;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -1396;

	t99 = ((x397<(x398<x399))&x400);

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

