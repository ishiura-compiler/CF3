#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 31U;
uint8_t x3 = 1U;
volatile int16_t x4 = 3;
static int32_t t0 = -907;
int8_t x9 = INT8_MIN;
uint16_t x16 = UINT16_MAX;
static int32_t x20 = INT32_MIN;
int32_t t4 = 31;
int8_t x28 = -1;
volatile int32_t t8 = 1;
int32_t x39 = INT32_MIN;
static int32_t x40 = 2599;
int32_t t11 = 11275;
int32_t t12 = 404766;
int64_t x59 = -7LL;
volatile int64_t x65 = INT64_MIN;
static int32_t x71 = INT32_MIN;
uint64_t x76 = UINT64_MAX;
int32_t t18 = 414774;
volatile int32_t t20 = -5824;
int32_t x86 = INT32_MIN;
static int8_t x87 = INT8_MIN;
int32_t t22 = 110;
volatile int32_t t23 = -96654624;
int32_t x97 = -5228108;
uint64_t x99 = UINT64_MAX;
static volatile int64_t x104 = -1LL;
int32_t t27 = 10553;
int8_t x114 = -1;
volatile uint8_t x120 = UINT8_MAX;
int32_t x122 = INT32_MIN;
int64_t x127 = -3181LL;
static volatile int32_t x133 = INT32_MIN;
int16_t x146 = -7654;
uint16_t x164 = 125U;
static uint16_t x166 = 1995U;
int32_t t41 = 4;
int32_t x170 = INT32_MAX;
volatile uint64_t x173 = 59111988645822206LLU;
int64_t x175 = 1448363550LL;
int16_t x181 = 0;
int32_t x185 = INT32_MIN;
static volatile int64_t x186 = INT64_MAX;
int32_t t46 = 6;
int8_t x190 = INT8_MAX;
uint64_t x191 = 0LLU;
int32_t x194 = -1;
volatile int32_t t49 = 26;
int16_t x201 = INT16_MAX;
volatile int16_t x205 = -1;
volatile int16_t x207 = INT16_MAX;
int8_t x208 = INT8_MAX;
int16_t x210 = INT16_MIN;
uint8_t x214 = 4U;
volatile uint64_t x216 = UINT64_MAX;
int32_t t56 = -14542;
static int64_t x229 = INT64_MIN;
int32_t x235 = -24;
static volatile int32_t t61 = 578908;
uint64_t x249 = 220872544997192LLU;
uint8_t x250 = 9U;
uint8_t x260 = 2U;
int32_t t64 = 31180;
int8_t x264 = INT8_MIN;
static uint16_t x271 = 6U;
uint8_t x275 = 17U;
uint32_t x278 = 0U;
uint64_t x282 = 31LLU;
int32_t t70 = -1352021;
static uint16_t x285 = 0U;
static int64_t x292 = INT64_MIN;
int64_t x295 = -28256LL;
uint32_t x316 = 8387U;
volatile int32_t t79 = -439;
volatile int8_t x322 = -1;
volatile int16_t x326 = INT16_MAX;
uint64_t x328 = 32275835637747902LLU;
uint8_t x330 = 5U;
uint32_t x337 = UINT32_MAX;
static uint64_t x338 = UINT64_MAX;
volatile int32_t t84 = 377;
int32_t x341 = INT32_MIN;
static int32_t x342 = INT32_MAX;
uint16_t x343 = UINT16_MAX;
int16_t x352 = INT16_MAX;
uint64_t x355 = UINT64_MAX;
volatile int32_t t88 = 63;
int32_t x357 = 302;
volatile int16_t x362 = 6;
uint32_t x367 = 85023821U;
volatile int8_t x372 = INT8_MIN;
static volatile int32_t t92 = -909;
volatile int32_t t94 = -49316;
volatile uint16_t x389 = 8489U;
int64_t x390 = 2986LL;
int16_t x396 = INT16_MAX;
static volatile int32_t t99 = -24922164;


void f0(void) {
	uint8_t x2 = UINT8_MAX;

	t0 = (x1<((x2<x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = 1916660385LL;
	volatile int16_t x8 = 1;
	volatile int32_t t1 = -1246085;

	t1 = (x5<((x6<x7)|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	volatile int16_t x11 = 1344;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 14;

	t2 = (x9<((x10<x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 54U;
	int32_t x15 = INT32_MAX;
	volatile int32_t t3 = -63;

	t3 = (x13<((x14<x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static volatile int8_t x18 = INT8_MIN;
	volatile int32_t x19 = -1;

	t4 = (x17<((x18<x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	static uint64_t x23 = 2693134598851LLU;
	static int8_t x24 = INT8_MAX;
	int32_t t5 = -2008;

	t5 = (x21<((x22<x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MAX;
	volatile int32_t t6 = 2718;

	t6 = (x25<((x26<x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -5105059;
	static uint8_t x30 = UINT8_MAX;
	int16_t x31 = 6057;
	static uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 30287392;

	t7 = (x29<((x30<x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = -1LL;
	static uint64_t x35 = 7LLU;
	int32_t x36 = -1;

	t8 = (x33<((x34<x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -2;
	int32_t t9 = -1;

	t9 = (x37<((x38<x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 497296;
	volatile int32_t x42 = -1;
	int64_t x43 = 821601LL;
	static volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 0;

	t10 = (x41<((x42<x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 4U;
	int64_t x46 = -1440695530652073LL;
	static int16_t x47 = INT16_MIN;
	static int16_t x48 = -1;

	t11 = (x45<((x46<x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	static uint64_t x50 = 266622436LLU;
	static int64_t x51 = INT64_MIN;
	volatile int8_t x52 = -1;

	t12 = (x49<((x50<x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = -1LL;
	static uint64_t x55 = 87696867933686362LLU;
	uint64_t x56 = UINT64_MAX;
	static int32_t t13 = 75;

	t13 = (x53<((x54<x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 15034LLU;
	static uint8_t x58 = UINT8_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -40;

	t14 = (x57<((x58<x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 7U;
	static int16_t x62 = INT16_MIN;
	static int16_t x63 = -101;
	static volatile uint16_t x64 = 18U;
	volatile int32_t t15 = 4917;

	t15 = (x61<((x62<x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = -5618302;

	t16 = (x65<((x66<x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int64_t x70 = INT64_MAX;
	int16_t x72 = -1;
	static int32_t t17 = 74744883;

	t17 = (x69<((x70<x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static uint16_t x74 = 112U;
	uint16_t x75 = 14964U;

	t18 = (x73<((x74<x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = -559353770;
	volatile int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -64463073;

	t19 = (x77<((x78<x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 9U;
	uint64_t x82 = 122899502360LLU;
	volatile uint32_t x83 = 4366U;
	static volatile int8_t x84 = -1;

	t20 = (x81<((x82<x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t21 = 1;

	t21 = (x85<((x86<x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = 55798402683215115LLU;
	uint16_t x92 = 3U;

	t22 = (x89<((x90<x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 760U;
	uint8_t x96 = 13U;

	t23 = (x93<((x94<x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 0U;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -4674727;

	t24 = (x97<((x98<x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	static uint64_t x102 = UINT64_MAX;
	uint32_t x103 = 3331U;
	int32_t t25 = 515577;

	t25 = (x101<((x102<x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	static int8_t x106 = INT8_MAX;
	uint64_t x107 = 4312627614285526992LLU;
	static volatile int64_t x108 = INT64_MAX;
	int32_t t26 = -6307;

	t26 = (x105<((x106<x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = 2;
	volatile int16_t x111 = INT16_MIN;
	uint64_t x112 = UINT64_MAX;

	t27 = (x109<((x110<x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	int64_t x116 = 6LL;
	int32_t t28 = -156757;

	t28 = (x113<((x114<x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -73026939;
	static uint16_t x118 = 30U;
	static volatile uint32_t x119 = 1635306U;
	volatile int32_t t29 = -1;

	t29 = (x117<((x118<x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x123 = 25004;
	int8_t x124 = 1;
	int32_t t30 = -3514;

	t30 = (x121<((x122<x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x125 = -1;
	uint32_t x126 = 27291471U;
	int8_t x128 = 0;
	volatile int32_t t31 = 763259543;

	t31 = (x125<((x126<x127)|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -44;
	int8_t x130 = -12;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = -1602098505LL;
	volatile int32_t t32 = 1630;

	t32 = (x129<((x130<x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 105U;
	int32_t x135 = 106236230;
	volatile uint8_t x136 = 0U;
	int32_t t33 = 0;

	t33 = (x133<((x134<x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 21178U;
	int32_t x138 = -1;
	uint32_t x139 = 23607321U;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 67559900;

	t34 = (x137<((x138<x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = -1;
	volatile uint32_t x143 = 496156U;
	int32_t x144 = INT32_MAX;
	int32_t t35 = -194025197;

	t35 = (x141<((x142<x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 413001892U;
	uint64_t x147 = 2188LLU;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 1;

	t36 = (x145<((x146<x147)|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 10512562650LL;
	int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	static int32_t t37 = -903526;

	t37 = (x149<((x150<x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 34;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 17U;
	int8_t x156 = -27;
	int32_t t38 = -51;

	t38 = (x153<((x154<x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 82;
	volatile int64_t x158 = INT64_MIN;
	int16_t x159 = -1;
	uint16_t x160 = 296U;
	static int32_t t39 = -30640282;

	t39 = (x157<((x158<x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MAX;
	volatile int32_t t40 = 16;

	t40 = (x161<((x162<x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	uint8_t x167 = 0U;
	static int64_t x168 = 9592LL;

	t41 = (x165<((x166<x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	static int8_t x172 = -1;
	int32_t t42 = 822;

	t42 = (x169<((x170<x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int16_t x176 = -661;
	static int32_t t43 = -2631889;

	t43 = (x173<((x174<x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = INT64_MAX;
	volatile int32_t x178 = -1;
	static uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = -129420041;

	t44 = (x177<((x178<x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int64_t x183 = -1LL;
	int16_t x184 = -254;
	volatile int32_t t45 = 2654250;

	t45 = (x181<((x182<x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = INT64_MIN;
	volatile int8_t x188 = INT8_MAX;

	t46 = (x185<((x186<x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 140;
	int64_t x192 = -1LL;
	volatile int32_t t47 = -83498;

	t47 = (x189<((x190<x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -990901336;

	t48 = (x193<((x194<x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 106U;
	uint64_t x199 = 3070265572020398272LLU;
	uint64_t x200 = 2540270127259586771LLU;

	t49 = (x197<((x198<x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MAX;
	int32_t t50 = 68;

	t50 = (x201<((x202<x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -5;
	int32_t t51 = -220;

	t51 = (x205<((x206<x207)|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x211 = -1;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 121198222;

	t52 = (x209<((x210<x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 8557949755140184287LLU;
	int64_t x215 = -1LL;
	static volatile int32_t t53 = 14427;

	t53 = (x213<((x214<x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	volatile int64_t x218 = 2027830994929124LL;
	static int16_t x219 = INT16_MAX;
	uint8_t x220 = 2U;
	volatile int32_t t54 = 536356519;

	t54 = (x217<((x218<x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	uint32_t x222 = 455U;
	uint64_t x223 = 10LLU;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -22322;

	t55 = (x221<((x222<x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	static uint8_t x226 = 20U;
	volatile uint64_t x227 = 628LLU;
	static uint32_t x228 = 50U;

	t56 = (x225<((x226<x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 2311U;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MAX;
	int32_t t57 = 52766230;

	t57 = (x229<((x230<x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 199587000LL;
	static uint64_t x234 = 214871448418808749LLU;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 38203;

	t58 = (x233<((x234<x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 2943081157LL;
	int32_t x238 = 106;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -7333;

	t59 = (x237<((x238<x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t60 = 0;

	t60 = (x241<((x242<x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 3U;
	int32_t x246 = 878376197;
	static int16_t x247 = -1;
	int16_t x248 = INT16_MIN;

	t61 = (x245<((x246<x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x251 = -1;
	int8_t x252 = -3;
	int32_t t62 = 14751913;

	t62 = (x249<((x250<x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 123603806412LL;
	int32_t x254 = INT32_MIN;
	static uint16_t x255 = 424U;
	volatile int8_t x256 = 2;
	static int32_t t63 = 18882890;

	t63 = (x253<((x254<x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 1765LLU;
	static int64_t x258 = INT64_MIN;
	int32_t x259 = -1;

	t64 = (x257<((x258<x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 1;
	int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MAX;
	int32_t t65 = 1;

	t65 = (x261<((x262<x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MIN;
	volatile int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -936562582;

	t66 = (x265<((x266<x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = UINT64_MAX;
	uint64_t x272 = 540LLU;
	volatile int32_t t67 = -914;

	t67 = (x269<((x270<x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 56546542U;
	int64_t x274 = -1LL;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = -1824;

	t68 = (x273<((x274<x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	static volatile int8_t x280 = 3;
	volatile int32_t t69 = 855147338;

	t69 = (x277<((x278<x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;

	t70 = (x281<((x282<x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = -3;
	int32_t t71 = 210;

	t71 = (x285<((x286<x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 7639763774LLU;
	static volatile int64_t x290 = INT64_MIN;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t t72 = 23755;

	t72 = (x289<((x290<x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -81;
	volatile int16_t x294 = INT16_MAX;
	int16_t x296 = 2734;
	volatile int32_t t73 = 60;

	t73 = (x293<((x294<x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	static volatile int16_t x299 = 1;
	int8_t x300 = -1;
	static volatile int32_t t74 = 1783847;

	t74 = (x297<((x298<x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = UINT64_MAX;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 3296106;

	t75 = (x301<((x302<x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = UINT16_MAX;
	static volatile int16_t x307 = -1972;
	int64_t x308 = -1LL;
	volatile int32_t t76 = -36369;

	t76 = (x305<((x306<x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = 1;
	uint16_t x311 = 376U;
	volatile int32_t x312 = INT32_MAX;
	static int32_t t77 = 329895716;

	t77 = (x309<((x310<x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = 26;
	uint8_t x314 = 2U;
	static uint16_t x315 = 1723U;
	int32_t t78 = -361;

	t78 = (x313<((x314<x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MAX;
	uint8_t x318 = 4U;
	volatile uint64_t x319 = 3073881894085LLU;
	int8_t x320 = -13;

	t79 = (x317<((x318<x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MAX;
	int64_t x323 = INT64_MAX;
	volatile int32_t x324 = -799219;
	int32_t t80 = 1;

	t80 = (x321<((x322<x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 4102704506374135760LL;
	int16_t x327 = 665;
	volatile int32_t t81 = -1;

	t81 = (x325<((x326<x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 14U;
	int32_t x331 = -236;
	int16_t x332 = 2;
	volatile int32_t t82 = 116364;

	t82 = (x329<((x330<x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 234U;
	static uint16_t x334 = 2778U;
	static int8_t x335 = INT8_MIN;
	int32_t x336 = -1;
	int32_t t83 = 1;

	t83 = (x333<((x334<x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 103LLU;

	t84 = (x337<((x338<x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x344 = -45;
	volatile int32_t t85 = -109;

	t85 = (x341<((x342<x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	uint32_t x347 = 3833U;
	int16_t x348 = -1;
	volatile int32_t t86 = 27;

	t86 = (x345<((x346<x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int64_t x350 = -2812992672983LL;
	volatile uint32_t x351 = 262038952U;
	volatile int32_t t87 = 302887;

	t87 = (x349<((x350<x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 6340635266LLU;
	static int64_t x354 = INT64_MIN;
	static volatile uint32_t x356 = 126U;

	t88 = (x353<((x354<x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x358 = UINT16_MAX;
	volatile uint16_t x359 = 159U;
	volatile uint16_t x360 = 885U;
	int32_t t89 = -941392852;

	t89 = (x357<((x358<x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint64_t x363 = 3606922325LLU;
	int16_t x364 = 210;
	volatile int32_t t90 = -94297095;

	t90 = (x361<((x362<x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -30;
	int32_t x366 = INT32_MIN;
	uint32_t x368 = 115493U;
	int32_t t91 = 0;

	t91 = (x365<((x366<x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int32_t x370 = 531029171;
	volatile int8_t x371 = -1;

	t92 = (x369<((x370<x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int32_t x374 = -1;
	static uint16_t x375 = 12U;
	uint16_t x376 = 4381U;
	int32_t t93 = 105977;

	t93 = (x373<((x374<x375)|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 9379U;
	static int64_t x378 = INT64_MAX;
	int8_t x379 = 2;
	int32_t x380 = 82;

	t94 = (x377<((x378<x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x382 = 0U;
	static volatile uint8_t x383 = 5U;
	int32_t x384 = -1;
	int32_t t95 = -32093;

	t95 = (x381<((x382<x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 845U;
	int8_t x386 = -1;
	volatile int32_t x387 = INT32_MAX;
	uint64_t x388 = 56127636932320LLU;
	int32_t t96 = -1206;

	t96 = (x385<((x386<x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x391 = INT32_MIN;
	static int16_t x392 = 0;
	int32_t t97 = 1;

	t97 = (x389<((x390<x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 2999U;
	uint64_t x394 = 359247LLU;
	int16_t x395 = INT16_MIN;
	static int32_t t98 = 3;

	t98 = (x393<((x394<x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	static int16_t x400 = INT16_MIN;

	t99 = (x397<((x398<x399)|x400));

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

