#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MIN;
uint16_t x28 = 502U;
int32_t t7 = -214;
uint64_t x34 = 852055554895LLU;
volatile uint16_t x38 = 15U;
uint64_t t9 = 25626793LLU;
static int8_t x42 = INT8_MAX;
int32_t x47 = INT32_MIN;
static volatile int32_t x73 = INT32_MAX;
static int32_t x76 = 0;
int8_t x78 = INT8_MIN;
int32_t x81 = -1;
int8_t x82 = INT8_MIN;
int32_t x85 = -1;
static int16_t x107 = -7677;
uint64_t t26 = 739298822011LLU;
int8_t x110 = -12;
volatile int64_t x111 = 25326520828LL;
volatile uint64_t t27 = 132997122LLU;
uint16_t x113 = 505U;
int32_t x114 = -1;
int64_t x116 = -1LL;
volatile int64_t t28 = -476LL;
int64_t x118 = INT64_MIN;
volatile uint16_t x119 = UINT16_MAX;
static uint32_t x131 = 323079342U;
volatile int16_t x132 = INT16_MIN;
int32_t t32 = 24392451;
int32_t t33 = INT32_MIN;
volatile int32_t t34 = -5899514;
int16_t x146 = 104;
int32_t t36 = -23;
int16_t x150 = INT16_MAX;
int16_t x152 = -1;
int8_t x153 = -1;
int8_t x162 = INT8_MIN;
static uint8_t x163 = UINT8_MAX;
uint16_t x165 = 11U;
int8_t x167 = INT8_MAX;
volatile uint64_t t42 = UINT64_MAX;
int16_t x178 = INT16_MIN;
int64_t t44 = INT64_MIN;
static uint16_t x185 = UINT16_MAX;
uint16_t x199 = 227U;
static volatile int16_t x201 = INT16_MIN;
int64_t x208 = -1LL;
static uint64_t x216 = UINT64_MAX;
uint32_t x219 = 47393109U;
static int64_t x225 = 24780144312030LL;
uint64_t x226 = 55564362742521718LLU;
int64_t x231 = INT64_MIN;
volatile uint16_t x233 = 94U;
int32_t t58 = 9;
uint16_t x244 = 11U;
static volatile int32_t t60 = -934752997;
uint64_t x247 = 3499026497LLU;
static int32_t t62 = -788903475;
int32_t x254 = INT32_MIN;
uint64_t x260 = 4LLU;
static int32_t x266 = -114137664;
volatile int64_t t69 = -18LL;
static int16_t x282 = INT16_MIN;
uint32_t x291 = UINT32_MAX;
volatile int32_t t72 = 305150534;
static uint8_t x296 = UINT8_MAX;
static uint16_t x303 = UINT16_MAX;
volatile uint32_t t75 = 2100158U;
int8_t x307 = INT8_MAX;
int32_t t81 = -4166120;
uint16_t x345 = UINT16_MAX;
volatile uint8_t x348 = 3U;
int64_t x352 = INT64_MIN;
static uint8_t x353 = 3U;
static int8_t x359 = INT8_MIN;
volatile int64_t t89 = INT64_MIN;
uint64_t x362 = UINT64_MAX;
int32_t t90 = -162913776;
static uint16_t x367 = UINT16_MAX;
uint64_t x369 = UINT64_MAX;
static uint8_t x373 = 0U;
int16_t x390 = -1;
int32_t x391 = INT32_MIN;
volatile uint32_t x396 = 65U;
int64_t x398 = 571067683366001136LL;
uint64_t x399 = UINT64_MAX;


void f0(void) {
	int32_t x1 = 1;
	int8_t x2 = INT8_MAX;
	int32_t x3 = -3393;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = -1;

	t0 = (((x1<x2)==x3)|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int64_t x6 = INT64_MIN;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 27;
	int32_t t1 = 26479270;

	t1 = (((x5<x6)==x7)|x8);

	if (t1 != 27) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 108686305LLU;
	static volatile uint8_t x11 = 1U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 8013;

	t2 = (((x9<x10)==x11)|x12);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 44290LLU;
	static int8_t x14 = -7;
	int32_t x15 = 0;
	int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

	t3 = (((x13<x14)==x15)|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

	t4 = (((x17<x18)==x19)|x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 503464724U;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = INT32_MIN;

	t5 = (((x21<x22)==x23)|x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int32_t t6 = 574087;

	t6 = (((x25<x26)==x27)|x28);

	if (t6 != 502) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 7477633;
	uint16_t x30 = 3U;
	uint16_t x31 = 47U;
	uint8_t x32 = 26U;

	t7 = (((x29<x30)==x31)|x32);

	if (t7 != 26) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 58;
	uint16_t x35 = 760U;
	volatile uint32_t x36 = 2U;
	uint32_t t8 = 19U;

	t8 = (((x33<x34)==x35)|x36);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -89594LL;
	static volatile uint32_t x39 = 312362U;
	volatile uint64_t x40 = 4146353802713027472LLU;

	t9 = (((x37<x38)==x39)|x40);

	if (t9 != 4146353802713027472LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = -217;

	t10 = (((x41<x42)==x43)|x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 227;
	uint64_t x46 = UINT64_MAX;
	int64_t x48 = 4266391475849384LL;
	int64_t t11 = 9912673680LL;

	t11 = (((x45<x46)==x47)|x48);

	if (t11 != 4266391475849384LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static int32_t x50 = -1;
	uint64_t x51 = 3789981181231166842LLU;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 3208521;

	t12 = (((x49<x50)==x51)|x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile uint32_t x54 = 0U;
	static int32_t x55 = INT32_MIN;
	int16_t x56 = 2297;
	volatile int32_t t13 = 1982;

	t13 = (((x53<x54)==x55)|x56);

	if (t13 != 2297) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -489903;

	t14 = (((x57<x58)==x59)|x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -1;
	uint16_t x62 = 152U;
	volatile uint64_t x63 = 60649185381774LLU;
	volatile uint8_t x64 = 1U;
	int32_t t15 = -83;

	t15 = (((x61<x62)==x63)|x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MAX;
	static int64_t x66 = -802LL;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = (((x65<x66)==x67)|x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = 19U;
	int16_t x71 = -1;
	int32_t x72 = 669792;
	volatile int32_t t17 = -4035455;

	t17 = (((x69<x70)==x71)|x72);

	if (t17 != 669792) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	static uint8_t x75 = 5U;
	static int32_t t18 = -673;

	t18 = (((x73<x74)==x75)|x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x79 = -14LL;
	static uint8_t x80 = 11U;
	volatile int32_t t19 = 11;

	t19 = (((x77<x78)==x79)|x80);

	if (t19 != 11) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x83 = 334160640021891LL;
	int32_t x84 = -1;
	int32_t t20 = -535140;

	t20 = (((x81<x82)==x83)|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 2U;
	int64_t x87 = -15570940LL;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = -100160028;

	t21 = (((x85<x86)==x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MIN;
	uint16_t x92 = 0U;
	volatile int32_t t22 = -98;

	t22 = (((x89<x90)==x91)|x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 2965773882413LLU;
	static uint8_t x94 = 84U;
	static int8_t x95 = INT8_MIN;
	int64_t x96 = 1475358LL;
	volatile int64_t t23 = -981LL;

	t23 = (((x93<x94)==x95)|x96);

	if (t23 != 1475358LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 12U;
	static int16_t x98 = -6;
	static uint32_t x99 = 483167551U;
	volatile uint16_t x100 = 13872U;
	static volatile int32_t t24 = -4019;

	t24 = (((x97<x98)==x99)|x100);

	if (t24 != 13872) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 8U;
	volatile uint64_t x102 = 1816584534976982904LLU;
	volatile int32_t x103 = 119932480;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x101<x102)==x103)|x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 218;
	uint16_t x106 = 8U;
	uint64_t x108 = 39544LLU;

	t26 = (((x105<x106)==x107)|x108);

	if (t26 != 39544LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 92U;
	volatile uint64_t x112 = 3145426231975LLU;

	t27 = (((x109<x110)==x111)|x112);

	if (t27 != 3145426231975LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MIN;

	t28 = (((x113<x114)==x115)|x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static int32_t x120 = -12;
	volatile int32_t t29 = 554169;

	t29 = (((x117<x118)==x119)|x120);

	if (t29 != -12) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = INT8_MIN;
	static uint32_t x122 = 1089283U;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 0;
	int32_t t30 = 8055;

	t30 = (((x121<x122)==x123)|x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 933U;
	uint8_t x126 = 5U;
	static int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t31 = 26815;

	t31 = (((x125<x126)==x127)|x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 413;
	volatile uint16_t x130 = 116U;

	t32 = (((x129<x130)==x131)|x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 3452941338LLU;
	static int32_t x134 = INT32_MAX;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MIN;

	t33 = (((x133<x134)==x135)|x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = 880150U;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -103901;

	t34 = (((x137<x138)==x139)|x140);

	if (t34 != -103901) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint32_t x142 = 49225U;
	uint64_t x143 = 48413328LLU;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 30823142;

	t35 = (((x141<x142)==x143)|x144);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x147 = 2567U;
	int8_t x148 = INT8_MIN;

	t36 = (((x145<x146)==x147)|x148);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 524396794191140LLU;
	volatile int32_t x151 = 0;
	volatile int32_t t37 = 1;

	t37 = (((x149<x150)==x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t38 = -13177;

	t38 = (((x153<x154)==x155)|x156);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1084;
	volatile uint64_t x158 = 5LLU;
	volatile int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MAX;
	int32_t t39 = INT32_MAX;

	t39 = (((x157<x158)==x159)|x160);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int64_t x164 = -196276160944492678LL;
	int64_t t40 = -71921LL;

	t40 = (((x161<x162)==x163)|x164);

	if (t40 != -196276160944492678LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x166 = UINT32_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (((x165<x166)==x167)|x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MIN;
	uint64_t x172 = UINT64_MAX;

	t42 = (((x169<x170)==x171)|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 1953781725LLU;
	int32_t x176 = INT32_MIN;
	int32_t t43 = INT32_MIN;

	t43 = (((x173<x174)==x175)|x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 78U;
	uint64_t x179 = 93LLU;
	int64_t x180 = INT64_MIN;

	t44 = (((x177<x178)==x179)|x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 51U;
	int16_t x182 = -1;
	volatile int16_t x183 = INT16_MIN;
	volatile int16_t x184 = -1;
	static volatile int32_t t45 = 10606427;

	t45 = (((x181<x182)==x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 238U;
	int16_t x187 = -353;
	uint64_t x188 = 13879384468978LLU;
	uint64_t t46 = 588LLU;

	t46 = (((x185<x186)==x187)|x188);

	if (t46 != 13879384468978LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = (((x189<x190)==x191)|x192);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 44186400;
	int16_t x194 = INT16_MAX;
	int8_t x195 = 4;
	uint32_t x196 = 5781733U;
	volatile uint32_t t48 = 76U;

	t48 = (((x193<x194)==x195)|x196);

	if (t48 != 5781733U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	static int8_t x198 = -1;
	int32_t x200 = -711096;
	int32_t t49 = 256212917;

	t49 = (((x197<x198)==x199)|x200);

	if (t49 != -711096) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MAX;
	volatile int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 1;

	t50 = (((x201<x202)==x203)|x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MAX;
	int32_t x206 = -1;
	int8_t x207 = INT8_MAX;
	volatile int64_t t51 = -7301772153182LL;

	t51 = (((x205<x206)==x207)|x208);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	static volatile int8_t x212 = INT8_MIN;
	int32_t t52 = 9424388;

	t52 = (((x209<x210)==x211)|x212);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = -5525;
	int64_t x215 = INT64_MIN;
	uint64_t t53 = UINT64_MAX;

	t53 = (((x213<x214)==x215)|x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 21;

	t54 = (((x217<x218)==x219)|x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 968961436U;
	static int64_t x222 = INT64_MIN;
	int16_t x223 = -1;
	uint16_t x224 = 2277U;
	int32_t t55 = -14;

	t55 = (((x221<x222)==x223)|x224);

	if (t55 != 2277) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;
	int32_t t56 = 26525;

	t56 = (((x225<x226)==x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	int32_t t57 = -3;

	t57 = (((x229<x230)==x231)|x232);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	volatile int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MIN;

	t58 = (((x233<x234)==x235)|x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MAX;
	int16_t x239 = 603;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 170;

	t59 = (((x237<x238)==x239)|x240);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 20U;

	t60 = (((x241<x242)==x243)|x244);

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int64_t x246 = 574101229192047LL;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -57497;

	t61 = (((x245<x246)==x247)|x248);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static volatile int16_t x250 = -1;
	uint16_t x251 = 162U;
	int16_t x252 = INT16_MIN;

	t62 = (((x249<x250)==x251)|x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -212;
	volatile int16_t x255 = 0;
	int32_t x256 = -1;
	static int32_t t63 = 2378428;

	t63 = (((x253<x254)==x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 10;
	int16_t x258 = -6;
	int8_t x259 = INT8_MIN;
	volatile uint64_t t64 = 1455329415LLU;

	t64 = (((x257<x258)==x259)|x260);

	if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 2526U;
	int64_t x262 = INT64_MAX;
	int16_t x263 = -2;
	static int16_t x264 = 1923;
	int32_t t65 = 42;

	t65 = (((x261<x262)==x263)|x264);

	if (t65 != 1923) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	static int8_t x267 = INT8_MAX;
	volatile int64_t x268 = INT64_MIN;
	int64_t t66 = INT64_MIN;

	t66 = (((x265<x266)==x267)|x268);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 13031;
	static int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int8_t x272 = -1;
	int32_t t67 = 1674;

	t67 = (((x269<x270)==x271)|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int64_t x274 = -57679LL;
	static uint16_t x275 = 1U;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = (((x273<x274)==x275)|x276);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static volatile int64_t x280 = 367LL;

	t69 = (((x277<x278)==x279)|x280);

	if (t69 != 367LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MAX;
	int64_t x284 = 1897039427173212LL;
	static int64_t t70 = -21LL;

	t70 = (((x281<x282)==x283)|x284);

	if (t70 != 1897039427173212LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int16_t x286 = INT16_MIN;
	uint64_t x287 = 43788581142LLU;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = 32912;

	t71 = (((x285<x286)==x287)|x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 1017U;
	static int32_t x290 = INT32_MIN;
	int16_t x292 = -1;

	t72 = (((x289<x290)==x291)|x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MAX;
	int32_t t73 = 673448738;

	t73 = (((x293<x294)==x295)|x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	static int16_t x298 = INT16_MIN;
	int32_t x299 = 23566;
	uint32_t x300 = 156U;
	uint32_t t74 = 1U;

	t74 = (((x297<x298)==x299)|x300);

	if (t74 != 156U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = 2250;
	uint32_t x304 = 127117U;

	t75 = (((x301<x302)==x303)|x304);

	if (t75 != 127117U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 0;
	static uint32_t x306 = 1U;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -1;

	t76 = (((x305<x306)==x307)|x308);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 3LLU;
	uint8_t x311 = 2U;
	volatile uint64_t x312 = 5312753992953638LLU;
	static volatile uint64_t t77 = 54042559LLU;

	t77 = (((x309<x310)==x311)|x312);

	if (t77 != 5312753992953638LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	static uint32_t x314 = 384479U;
	volatile uint32_t x315 = 27U;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -7062;

	t78 = (((x313<x314)==x315)|x316);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	uint32_t x318 = 8U;
	volatile int16_t x319 = -1;
	int64_t x320 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = (((x317<x318)==x319)|x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 92U;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 7;
	uint8_t x324 = 30U;
	int32_t t80 = -270860817;

	t80 = (((x321<x322)==x323)|x324);

	if (t80 != 30) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = -3;
	int32_t x327 = -746610;
	int8_t x328 = 1;

	t81 = (((x325<x326)==x327)|x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 65;
	uint16_t x330 = 13501U;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = INT64_MAX;
	int64_t t82 = INT64_MAX;

	t82 = (((x329<x330)==x331)|x332);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MAX;
	int64_t x335 = -1LL;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -9018781;

	t83 = (((x333<x334)==x335)|x336);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	uint16_t x338 = 6U;
	int32_t x339 = -4082058;
	uint16_t x340 = 25249U;
	int32_t t84 = -6;

	t84 = (((x337<x338)==x339)|x340);

	if (t84 != 25249) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 3U;
	volatile uint16_t x342 = 0U;
	int16_t x343 = -1;
	uint8_t x344 = 24U;
	static int32_t t85 = 0;

	t85 = (((x341<x342)==x343)|x344);

	if (t85 != 24) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = 1U;
	uint8_t x347 = 10U;
	static int32_t t86 = 735091;

	t86 = (((x345<x346)==x347)|x348);

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	int64_t t87 = INT64_MIN;

	t87 = (((x349<x350)==x351)|x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = 178;
	int32_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	static volatile int32_t t88 = 2215740;

	t88 = (((x353<x354)==x355)|x356);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = -94LL;
	int64_t x360 = INT64_MIN;

	t89 = (((x357<x358)==x359)|x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 3U;
	uint32_t x363 = 1319671U;
	uint8_t x364 = 1U;

	t90 = (((x361<x362)==x363)|x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 1;
	static volatile uint32_t x366 = 241962U;
	int32_t x368 = INT32_MIN;
	static int32_t t91 = INT32_MIN;

	t91 = (((x365<x366)==x367)|x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	int8_t x372 = 20;
	volatile int32_t t92 = -518241;

	t92 = (((x369<x370)==x371)|x372);

	if (t92 != 20) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -9;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = 31720208092LL;
	int64_t t93 = 460990LL;

	t93 = (((x373<x374)==x375)|x376);

	if (t93 != 31720208092LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 92547917U;
	uint8_t x378 = 0U;
	int64_t x379 = 3901368512471091LL;
	static uint32_t x380 = 188455959U;
	uint32_t t94 = 47541U;

	t94 = (((x377<x378)==x379)|x380);

	if (t94 != 188455959U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 199LLU;
	static int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MAX;
	static volatile int64_t x384 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = (((x381<x382)==x383)|x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MAX;
	uint8_t x388 = 124U;
	volatile int32_t t96 = 161643045;

	t96 = (((x385<x386)==x387)|x388);

	if (t96 != 124) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	volatile uint64_t x392 = 12801912492616567LLU;
	volatile uint64_t t97 = 1196773LLU;

	t97 = (((x389<x390)==x391)|x392);

	if (t97 != 12801912492616567LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int32_t x394 = -1;
	static volatile int32_t x395 = INT32_MAX;
	static uint32_t t98 = 15784683U;

	t98 = (((x393<x394)==x395)|x396);

	if (t98 != 65U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x400 = -2;
	volatile int32_t t99 = -113165;

	t99 = (((x397<x398)==x399)|x400);

	if (t99 != -2) { NG(); } else { ; }
	
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

