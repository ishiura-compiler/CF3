#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
int16_t x8 = 27;
int8_t x14 = INT8_MAX;
static int64_t x17 = INT64_MIN;
int64_t x21 = INT64_MIN;
int16_t x28 = INT16_MAX;
int32_t t6 = -1;
volatile uint16_t x30 = 79U;
int32_t x32 = INT32_MAX;
volatile uint32_t x36 = 991896U;
uint16_t x37 = 7292U;
uint64_t x40 = 51567LLU;
volatile uint8_t x45 = 7U;
volatile uint8_t x50 = 10U;
int64_t x51 = INT64_MAX;
int32_t x55 = -1;
static uint64_t x57 = 8692LLU;
int32_t x60 = -1;
int16_t x63 = INT16_MIN;
static uint8_t x70 = 0U;
int8_t x73 = INT8_MAX;
int8_t x76 = 29;
int32_t t18 = 87274;
int32_t t19 = -602032;
uint32_t x83 = 347729044U;
static int32_t x87 = 16641;
static int8_t x99 = -1;
uint32_t x105 = 60213U;
uint32_t x110 = 1101083573U;
static uint64_t x114 = UINT64_MAX;
volatile int32_t t28 = -3061276;
uint16_t x117 = 0U;
volatile int32_t t30 = -2;
volatile int8_t x128 = -1;
static int32_t t32 = -895376;
uint32_t x134 = 510U;
int32_t t34 = -8026;
int32_t x151 = -1;
uint16_t x156 = 143U;
int8_t x157 = INT8_MIN;
static int16_t x158 = 0;
uint32_t x164 = UINT32_MAX;
int16_t x169 = -496;
int64_t x170 = INT64_MIN;
static uint64_t x180 = UINT64_MAX;
static int8_t x184 = 39;
uint32_t x188 = 107U;
int32_t t46 = 90385817;
uint16_t x197 = UINT16_MAX;
volatile int32_t x200 = -27358;
static int16_t x202 = 0;
static int8_t x204 = INT8_MIN;
int32_t x212 = -33465;
int8_t x213 = INT8_MIN;
uint8_t x216 = 5U;
int32_t t52 = -28729722;
uint8_t x221 = 0U;
int8_t x231 = INT8_MIN;
int32_t x233 = INT32_MIN;
int16_t x236 = INT16_MAX;
int16_t x239 = 2049;
static uint16_t x246 = 10188U;
uint64_t x254 = 17970367650157374LLU;
volatile int16_t x255 = -16;
static int32_t t64 = 257106094;
int64_t x273 = -1LL;
int64_t x275 = -27786LL;
int32_t x280 = INT32_MAX;
volatile int32_t t69 = 1;
volatile int32_t x289 = INT32_MIN;
int64_t x295 = INT64_MAX;
static int16_t x299 = INT16_MIN;
volatile uint16_t x300 = UINT16_MAX;
int16_t x301 = 0;
int8_t x302 = 0;
static uint32_t x311 = UINT32_MAX;
volatile int32_t t74 = 402;
volatile int32_t t75 = -1609;
static volatile int16_t x320 = -4089;
int32_t t76 = 101186;
static int32_t x321 = 695473;
uint64_t x335 = 5LLU;
static int32_t x336 = -21;
volatile uint8_t x337 = 5U;
int16_t x347 = 864;
volatile int64_t x350 = INT64_MIN;
static volatile int8_t x355 = INT8_MIN;
int16_t x358 = 102;
volatile uint64_t x365 = UINT64_MAX;
int64_t x366 = 220643763186LL;
static uint8_t x367 = UINT8_MAX;
uint8_t x368 = UINT8_MAX;
volatile int32_t t87 = -49104776;
static volatile int8_t x375 = INT8_MAX;
static volatile int32_t t89 = 41318018;
static uint64_t x379 = 714843116999408108LLU;
static uint16_t x384 = 1098U;
int32_t t91 = 3;
int32_t t92 = 248;
volatile int64_t x391 = INT64_MIN;
int64_t x393 = INT64_MIN;
int64_t x396 = INT64_MAX;
static volatile int32_t t95 = 471;
volatile int32_t t96 = -2703;
int32_t x409 = INT32_MAX;
int64_t x413 = -1LL;
volatile int64_t x415 = INT64_MIN;


void f0(void) {
	int16_t x2 = INT16_MAX;
	volatile int16_t x3 = INT16_MAX;
	int8_t x4 = -47;
	static int32_t t0 = -157802;

	t0 = ((x1<x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 201;

	t1 = ((x5<x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -29;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = -30;
	uint8_t x12 = 4U;
	int32_t t2 = -120252045;

	t2 = ((x9<x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x15 = INT16_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -131;

	t3 = ((x13<x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 218U;
	static volatile int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -3;

	t4 = ((x17<x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = 1U;
	uint16_t x23 = UINT16_MAX;
	volatile int32_t x24 = -643818;
	int32_t t5 = -8294502;

	t5 = ((x21<x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 4LL;
	static uint8_t x26 = 5U;
	int8_t x27 = INT8_MAX;

	t6 = ((x25<x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1730138;
	int8_t x31 = -1;
	volatile int32_t t7 = -3850496;

	t7 = ((x29<x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 20U;
	uint32_t x35 = 3297210U;
	static int32_t t8 = 0;

	t8 = ((x33<x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MAX;
	int8_t x39 = 1;
	int32_t t9 = 449483334;

	t9 = ((x37<x38)==(x39%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 192U;
	static int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 1;

	t10 = ((x41<x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	uint32_t x47 = 31173081U;
	int16_t x48 = -1;
	volatile int32_t t11 = -1534;

	t11 = ((x45<x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 2050;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 5;

	t12 = ((x49<x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint16_t x54 = 28568U;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 3852;

	t13 = ((x53<x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -243020130;
	static uint64_t x59 = UINT64_MAX;
	static volatile int32_t t14 = 588908542;

	t14 = ((x57<x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 106U;
	volatile int8_t x62 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = 426015;

	t15 = ((x61<x62)==(x63%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = 114U;
	static int64_t x68 = 118733331521330962LL;
	int32_t t16 = -2;

	t16 = ((x65<x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 215527596621LLU;
	int32_t t17 = 1609820;

	t17 = ((x69<x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x74 = 4U;
	int32_t x75 = INT32_MIN;

	t18 = ((x73<x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -21933LL;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = 277243684318361LL;
	static int64_t x80 = INT64_MAX;

	t19 = ((x77<x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 1U;
	uint64_t x82 = 17761250198086LLU;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 75;

	t20 = ((x81<x82)==(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static uint64_t x86 = UINT64_MAX;
	static volatile int64_t x88 = -131867409992LL;
	volatile int32_t t21 = 5956975;

	t21 = ((x85<x86)==(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -1LL;
	int64_t x90 = -1LL;
	static int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = -422244162;

	t22 = ((x89<x90)==(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = 323U;
	static volatile int8_t x95 = 6;
	int32_t x96 = -1;
	volatile int32_t t23 = 33802740;

	t23 = ((x93<x94)==(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 22072LL;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x100 = 92237729U;
	volatile int32_t t24 = -7644;

	t24 = ((x97<x98)==(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x102 = 48166;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -327129;

	t25 = ((x101<x102)==(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MIN;
	volatile int64_t x108 = 109LL;
	int32_t t26 = 176877;

	t26 = ((x105<x106)==(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 45324954158972LL;
	volatile int32_t x111 = 838;
	volatile int32_t x112 = 229;
	volatile int32_t t27 = 741428;

	t27 = ((x109<x110)==(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int64_t x115 = 125914573LL;
	static uint8_t x116 = 10U;

	t28 = ((x113<x114)==(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = 981405557402151870LL;
	uint64_t x119 = 23672LLU;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -247;

	t29 = ((x117<x118)==(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = 627U;
	int8_t x123 = INT8_MIN;
	int32_t x124 = -1;

	t30 = ((x121<x122)==(x123%x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	static volatile int32_t t31 = -259;

	t31 = ((x125<x126)==(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -13786;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = -1;
	int32_t x132 = 423027;

	t32 = ((x129<x130)==(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -1;

	t33 = ((x133<x134)==(x135%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1776;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = UINT32_MAX;
	int32_t x140 = -137371;

	t34 = ((x137<x138)==(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = 4666846503LLU;
	volatile uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 11U;
	static uint64_t x144 = 1883268774557674LLU;
	volatile int32_t t35 = 1;

	t35 = ((x141<x142)==(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 0U;
	static int64_t x146 = INT64_MIN;
	volatile int16_t x147 = INT16_MAX;
	static int64_t x148 = 8214299LL;
	static volatile int32_t t36 = 15;

	t36 = ((x145<x146)==(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1321U;
	int16_t x150 = -1;
	static uint8_t x152 = 20U;
	int32_t t37 = -7009925;

	t37 = ((x149<x150)==(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile int32_t x154 = INT32_MIN;
	static int8_t x155 = -1;
	volatile int32_t t38 = 33;

	t38 = ((x153<x154)==(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = INT16_MAX;
	int32_t t39 = 10154;

	t39 = ((x157<x158)==(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = -6504530LL;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = -11362857;

	t40 = ((x161<x162)==(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	int64_t x168 = 77716LL;
	int32_t t41 = -36;

	t41 = ((x165<x166)==(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MIN;
	int32_t x172 = 2;
	volatile int32_t t42 = -3;

	t42 = ((x169<x170)==(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -137258365989590583LL;
	static int8_t x178 = INT8_MIN;
	volatile uint8_t x179 = UINT8_MAX;
	volatile int32_t t43 = -2029109;

	t43 = ((x177<x178)==(x179%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 0;
	static int16_t x182 = -1539;
	int8_t x183 = INT8_MAX;
	static volatile int32_t t44 = 83141;

	t44 = ((x181<x182)==(x183%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = 1;
	int64_t x186 = -1LL;
	uint32_t x187 = UINT32_MAX;
	static int32_t t45 = -110;

	t45 = ((x185<x186)==(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = 1;
	volatile int64_t x190 = -1656LL;
	uint8_t x191 = 2U;
	int32_t x192 = INT32_MIN;

	t46 = ((x189<x190)==(x191%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = -4331;
	uint32_t x195 = 909288098U;
	volatile uint64_t x196 = 2769LLU;
	static volatile int32_t t47 = 127333571;

	t47 = ((x193<x194)==(x195%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	static volatile int32_t t48 = 225414;

	t48 = ((x197<x198)==(x199%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 64908892U;
	static int16_t x203 = -11717;
	static int32_t t49 = -249;

	t49 = ((x201<x202)==(x203%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	static int8_t x206 = INT8_MIN;
	static int16_t x207 = -1;
	uint32_t x208 = 451009639U;
	int32_t t50 = 1;

	t50 = ((x205<x206)==(x207%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = 19U;
	uint8_t x210 = 21U;
	int32_t x211 = INT32_MIN;
	volatile int32_t t51 = 2;

	t51 = ((x209<x210)==(x211%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x214 = INT32_MIN;
	static uint8_t x215 = 21U;

	t52 = ((x213<x214)==(x215%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	int64_t x218 = -1LL;
	static uint64_t x219 = UINT64_MAX;
	volatile int32_t x220 = -613390;
	int32_t t53 = 56105760;

	t53 = ((x217<x218)==(x219%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x222 = 24185381U;
	int64_t x223 = -1LL;
	volatile uint8_t x224 = 45U;
	int32_t t54 = 2;

	t54 = ((x221<x222)==(x223%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	uint32_t x227 = 3576U;
	int16_t x228 = -1;
	volatile int32_t t55 = -497082756;

	t55 = ((x225<x226)==(x227%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MAX;
	uint8_t x232 = 18U;
	int32_t t56 = 40415;

	t56 = ((x229<x230)==(x231%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x234 = -8;
	int32_t x235 = INT32_MIN;
	volatile int32_t t57 = 1467615;

	t57 = ((x233<x234)==(x235%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = 41201699503715700LL;
	int8_t x238 = -1;
	int16_t x240 = -1;
	volatile int32_t t58 = -473484;

	t58 = ((x237<x238)==(x239%x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint16_t x242 = 8593U;
	static int8_t x243 = -1;
	static int64_t x244 = 31LL;
	volatile int32_t t59 = -1246;

	t59 = ((x241<x242)==(x243%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x245 = 1505397224U;
	volatile int64_t x247 = 25338912551LL;
	uint32_t x248 = 1012850U;
	volatile int32_t t60 = -17522;

	t60 = ((x245<x246)==(x247%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = UINT64_MAX;
	int32_t x256 = 642130;
	int32_t t61 = -22;

	t61 = ((x253<x254)==(x255%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	uint64_t x260 = 116650756138691LLU;
	int32_t t62 = 154563;

	t62 = ((x257<x258)==(x259%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 2LLU;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile int64_t x264 = INT64_MIN;
	static int32_t t63 = 493;

	t63 = ((x261<x262)==(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 41805692U;
	int32_t x266 = INT32_MIN;
	static uint32_t x267 = 22U;
	volatile int16_t x268 = -424;

	t64 = ((x265<x266)==(x267%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 1U;
	int16_t x270 = -1;
	uint32_t x271 = 3380124U;
	volatile uint8_t x272 = 12U;
	static volatile int32_t t65 = -4814103;

	t65 = ((x269<x270)==(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x274 = 3821529365785154243LL;
	volatile int32_t x276 = INT32_MAX;
	volatile int32_t t66 = -1409;

	t66 = ((x273<x274)==(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = INT64_MAX;
	int32_t x278 = -1;
	static volatile int32_t x279 = INT32_MIN;
	int32_t t67 = -8216027;

	t67 = ((x277<x278)==(x279%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 12U;
	uint64_t x282 = 12436640831474329LLU;
	int64_t x283 = INT64_MIN;
	static uint16_t x284 = 424U;
	int32_t t68 = 496361;

	t68 = ((x281<x282)==(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	int16_t x287 = -180;
	int32_t x288 = -1;

	t69 = ((x285<x286)==(x287%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x290 = -1;
	int64_t x291 = -3177015802924215692LL;
	int64_t x292 = INT64_MIN;
	volatile int32_t t70 = 102;

	t70 = ((x289<x290)==(x291%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 0U;
	static int64_t x294 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	volatile int32_t t71 = 7;

	t71 = ((x293<x294)==(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = 3;
	volatile int32_t t72 = 31480169;

	t72 = ((x297<x298)==(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x303 = 1U;
	volatile int8_t x304 = INT8_MIN;
	static volatile int32_t t73 = 27;

	t73 = ((x301<x302)==(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = 653;
	volatile int64_t x312 = -1LL;

	t74 = ((x309<x310)==(x311%x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x313 = 2U;
	int32_t x314 = INT32_MAX;
	volatile int16_t x315 = -14;
	static volatile int32_t x316 = INT32_MIN;

	t75 = ((x313<x314)==(x315%x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 274U;
	static volatile int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MIN;

	t76 = ((x317<x318)==(x319%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x322 = 1U;
	volatile int32_t x323 = 3226;
	int16_t x324 = INT16_MIN;
	static int32_t t77 = 7152;

	t77 = ((x321<x322)==(x323%x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 582U;
	volatile int32_t x330 = INT32_MAX;
	int8_t x331 = INT8_MIN;
	static int64_t x332 = -357329456LL;
	int32_t t78 = 222565611;

	t78 = ((x329<x330)==(x331%x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1LL;
	int64_t x334 = -1LL;
	static volatile int32_t t79 = 7691;

	t79 = ((x333<x334)==(x335%x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x338 = 19738618284369LLU;
	int64_t x339 = 140231478LL;
	volatile uint64_t x340 = 5905566259LLU;
	static int32_t t80 = 7496;

	t80 = ((x337<x338)==(x339%x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x341 = UINT16_MAX;
	static volatile uint16_t x342 = 110U;
	volatile int8_t x343 = INT8_MIN;
	uint16_t x344 = 1712U;
	volatile int32_t t81 = 209201;

	t81 = ((x341<x342)==(x343%x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MAX;
	static int64_t x346 = 38LL;
	uint8_t x348 = 13U;
	static int32_t t82 = 52478152;

	t82 = ((x345<x346)==(x347%x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x349 = -126;
	static int16_t x351 = INT16_MAX;
	static volatile int32_t x352 = INT32_MAX;
	int32_t t83 = -121118764;

	t83 = ((x349<x350)==(x351%x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 0U;
	int8_t x354 = INT8_MIN;
	uint32_t x356 = 6090U;
	int32_t t84 = -718064;

	t84 = ((x353<x354)==(x355%x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x357 = INT16_MIN;
	static int32_t x359 = -1;
	volatile int64_t x360 = -19159LL;
	volatile int32_t t85 = 145198237;

	t85 = ((x357<x358)==(x359%x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -79709556;
	uint64_t x362 = UINT64_MAX;
	static uint16_t x363 = 3116U;
	int64_t x364 = INT64_MIN;
	int32_t t86 = -258876932;

	t86 = ((x361<x362)==(x363%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {


	t87 = ((x365<x366)==(x367%x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t88 = 1059529903;

	t88 = ((x369<x370)==(x371%x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x373 = -1;
	static int64_t x374 = 152817LL;
	uint8_t x376 = UINT8_MAX;

	t89 = ((x373<x374)==(x375%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	int64_t x380 = INT64_MIN;
	int32_t t90 = 358128;

	t90 = ((x377<x378)==(x379%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = -469801;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = 1;

	t91 = ((x381<x382)==(x383%x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;

	t92 = ((x385<x386)==(x387%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 34557LLU;
	uint64_t x390 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	static int32_t t93 = 10;

	t93 = ((x389<x390)==(x391%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = 1;
	volatile int32_t t94 = 4;

	t94 = ((x393<x394)==(x395%x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 5604421U;
	int64_t x398 = -2577608372672LL;
	int8_t x399 = 0;
	int64_t x400 = INT64_MIN;

	t95 = ((x397<x398)==(x399%x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -1;
	uint64_t x402 = 4132722LLU;
	static int64_t x403 = -1LL;
	static int64_t x404 = INT64_MIN;

	t96 = ((x401<x402)==(x403%x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MAX;
	volatile int8_t x408 = -1;
	volatile int32_t t97 = -121;

	t97 = ((x405<x406)==(x407%x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = -538;
	volatile uint64_t x412 = 11LLU;
	volatile int32_t t98 = -174490;

	t98 = ((x409<x410)==(x411%x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x414 = UINT16_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t99 = 133248;

	t99 = ((x413<x414)==(x415%x416));

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

