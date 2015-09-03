#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 347566LLU;
int16_t x6 = -1;
uint64_t x10 = 258672481152855LLU;
volatile int32_t t2 = 1167845;
volatile int64_t x15 = INT64_MIN;
volatile int32_t t3 = -1032699;
static int32_t x23 = -17898;
volatile uint8_t x27 = 44U;
int16_t x28 = INT16_MIN;
int16_t x32 = INT16_MAX;
int8_t x34 = INT8_MIN;
int64_t x39 = -85099516802298LL;
static volatile uint32_t x43 = 446889066U;
volatile int32_t t11 = 0;
int8_t x74 = INT8_MAX;
int32_t x80 = INT32_MIN;
int32_t t18 = 0;
int32_t x85 = INT32_MIN;
int16_t x88 = INT16_MIN;
static int32_t x90 = INT32_MIN;
uint64_t x91 = UINT64_MAX;
volatile uint32_t x93 = 248U;
int64_t x102 = 477660LL;
uint16_t x103 = 98U;
int32_t x104 = -1;
volatile int64_t x108 = 152357LL;
uint8_t x126 = 3U;
static uint8_t x128 = 4U;
int16_t x130 = 11;
int32_t t31 = -359330;
int8_t x138 = INT8_MIN;
volatile int8_t x140 = -1;
int8_t x141 = -1;
volatile uint32_t x143 = 30820U;
static int32_t x144 = -1;
int32_t x146 = INT32_MAX;
uint16_t x147 = 1690U;
int32_t t34 = -270413;
static int64_t x152 = INT64_MAX;
int16_t x155 = 2;
static int32_t x167 = INT32_MAX;
volatile int8_t x189 = INT8_MIN;
static uint32_t x191 = 565106562U;
int64_t x193 = INT64_MIN;
uint32_t x204 = 49462909U;
static int32_t x208 = INT32_MIN;
volatile uint64_t x210 = 4162LLU;
static uint64_t x215 = UINT64_MAX;
int16_t x220 = INT16_MIN;
uint8_t x221 = UINT8_MAX;
volatile int8_t x222 = -1;
int64_t x223 = -31LL;
static int32_t t51 = -196;
int8_t x225 = INT8_MAX;
volatile int8_t x229 = INT8_MIN;
int16_t x236 = 281;
volatile int32_t t55 = 62742484;
static int64_t x242 = 22527912LL;
static int16_t x243 = -122;
int32_t t56 = -210386;
int64_t x249 = INT64_MIN;
int32_t x252 = -1;
static int64_t x254 = -1LL;
static int16_t x258 = -27;
static int64_t x259 = -18LL;
uint16_t x260 = 145U;
int8_t x263 = INT8_MIN;
int8_t x274 = INT8_MAX;
static int64_t x276 = -1LL;
volatile int32_t t64 = 964;
int64_t x288 = 6871LL;
volatile int16_t x290 = INT16_MIN;
static uint64_t x292 = 92401976227144LLU;
volatile int32_t t68 = 6971556;
volatile uint16_t x299 = UINT16_MAX;
int32_t x300 = -480298575;
int64_t x305 = INT64_MIN;
int64_t x306 = -177771564250LL;
int16_t x312 = INT16_MIN;
uint8_t x316 = 31U;
int32_t x320 = -2673;
int64_t x321 = -649636LL;
uint8_t x326 = UINT8_MAX;
static int64_t x327 = -1LL;
int8_t x334 = -1;
int32_t x344 = INT32_MAX;
int8_t x346 = INT8_MIN;
int32_t x357 = INT32_MIN;
volatile int64_t x358 = INT64_MIN;
int8_t x367 = INT8_MIN;
volatile uint32_t x370 = 1237942954U;
int8_t x371 = INT8_MAX;
int32_t t87 = -22279;
int32_t t88 = -14985290;
uint32_t x380 = UINT32_MAX;
int32_t x384 = -1;
static volatile uint32_t x387 = 5439062U;
int32_t x395 = -254;
static volatile int16_t x396 = -221;
volatile int64_t x397 = INT64_MIN;
int16_t x399 = -728;
int32_t x400 = INT32_MIN;
static volatile uint64_t x405 = 1593LLU;
int64_t x408 = INT64_MAX;
int32_t t96 = -1100340;
volatile int16_t x418 = 5;
int32_t x424 = INT32_MIN;


void f0(void) {
	static int16_t x1 = -1;
	int8_t x3 = INT8_MAX;
	uint64_t x4 = 20014227772LLU;
	static int32_t t0 = -493460;

	t0 = ((x1%x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = 2909180;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = 470325;

	t1 = ((x5%x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	static volatile int64_t x12 = -1LL;

	t2 = ((x9%x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 15762U;
	static int16_t x14 = -1;
	uint64_t x16 = 4668504606923LLU;

	t3 = ((x13%x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = -20;
	int32_t x19 = 0;
	int64_t x20 = INT64_MIN;
	int32_t t4 = 4079920;

	t4 = ((x17%x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 4;
	static int32_t x22 = 123276892;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 129616;

	t5 = ((x21%x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MAX;
	static int32_t t6 = 32197913;

	t6 = ((x25%x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = 45;
	volatile int32_t t7 = 596;

	t7 = ((x29%x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile uint64_t x35 = 151776044LLU;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 80;

	t8 = ((x33%x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int64_t x38 = 25716094LL;
	uint64_t x40 = 6LLU;
	volatile int32_t t9 = -10;

	t9 = ((x37%x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1436228U;
	int16_t x42 = INT16_MAX;
	uint16_t x44 = 9U;
	static int32_t t10 = 30247;

	t10 = ((x41%x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = 1U;
	volatile int64_t x47 = -1LL;
	int64_t x48 = INT64_MIN;

	t11 = ((x45%x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 28U;
	int16_t x50 = INT16_MAX;
	uint8_t x51 = 117U;
	int16_t x52 = -1;
	int32_t t12 = -2441;

	t12 = ((x49%x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int16_t x54 = 1;
	static volatile int16_t x55 = -17;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -1983;

	t13 = ((x53%x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 15040790036389LLU;
	static volatile int32_t x62 = 7996031;
	int16_t x63 = -9;
	volatile uint16_t x64 = 37U;
	volatile int32_t t14 = -1000;

	t14 = ((x61%x62)==(x63%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 18460614492644LLU;
	volatile uint16_t x70 = 15U;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	int32_t t15 = 6256696;

	t15 = ((x69%x70)==(x71%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x73 = 18934U;
	static int16_t x75 = -64;
	volatile uint32_t x76 = 15U;
	int32_t t16 = 991810;

	t16 = ((x73%x74)==(x75%x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 2844411008LLU;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = 0LL;
	int32_t t17 = 31285264;

	t17 = ((x77%x78)==(x79%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MAX;
	int16_t x82 = -209;
	int32_t x83 = INT32_MIN;
	static uint32_t x84 = 64U;

	t18 = ((x81%x82)==(x83%x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MAX;
	volatile int32_t t19 = 1;

	t19 = ((x85%x86)==(x87%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 5944U;
	uint16_t x92 = 637U;
	volatile int32_t t20 = -517;

	t20 = ((x89%x90)==(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t21 = 1158272;

	t21 = ((x93%x94)==(x95%x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x97 = INT64_MIN;
	static volatile uint8_t x98 = UINT8_MAX;
	uint8_t x99 = 1U;
	int64_t x100 = INT64_MIN;
	static volatile int32_t t22 = -2032;

	t22 = ((x97%x98)==(x99%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	int32_t t23 = 11011182;

	t23 = ((x101%x102)==(x103%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 3U;
	volatile int32_t x106 = INT32_MAX;
	static int64_t x107 = INT64_MIN;
	volatile int32_t t24 = 0;

	t24 = ((x105%x106)==(x107%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -1670;
	int16_t x110 = -1;
	int64_t x111 = INT64_MIN;
	int64_t x112 = 16058521965179470LL;
	volatile int32_t t25 = 466;

	t25 = ((x109%x110)==(x111%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	int16_t x114 = INT16_MAX;
	volatile int32_t x115 = -1;
	volatile int8_t x116 = INT8_MAX;
	volatile int32_t t26 = 26688699;

	t26 = ((x113%x114)==(x115%x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 1;
	int8_t x118 = 6;
	static uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 466U;
	static volatile int32_t t27 = 34;

	t27 = ((x117%x118)==(x119%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MIN;
	int64_t x123 = 5412823869781660LL;
	volatile int64_t x124 = -1175572169242LL;
	int32_t t28 = 1;

	t28 = ((x121%x122)==(x123%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	uint32_t x127 = 110U;
	volatile int32_t t29 = 9566786;

	t29 = ((x125%x126)==(x127%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	static uint32_t x131 = 3656244U;
	int8_t x132 = 6;
	static volatile int32_t t30 = 129466618;

	t30 = ((x129%x130)==(x131%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x133 = INT16_MAX;
	static volatile uint8_t x134 = 15U;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;

	t31 = ((x133%x134)==(x135%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	int32_t t32 = 6026847;

	t32 = ((x137%x138)==(x139%x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 9U;
	volatile int32_t t33 = -100;

	t33 = ((x141%x142)==(x143%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	static volatile int32_t x148 = INT32_MIN;

	t34 = ((x145%x146)==(x147%x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x149 = -387030;
	int32_t x150 = INT32_MAX;
	volatile uint8_t x151 = 0U;
	static volatile int32_t t35 = 0;

	t35 = ((x149%x150)==(x151%x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	static int8_t x154 = 54;
	int16_t x156 = INT16_MIN;
	static int32_t t36 = 1167;

	t36 = ((x153%x154)==(x155%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x161 = 47U;
	int64_t x162 = INT64_MIN;
	int8_t x163 = -1;
	volatile uint8_t x164 = 17U;
	int32_t t37 = -347626;

	t37 = ((x161%x162)==(x163%x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	int32_t x166 = INT32_MIN;
	uint64_t x168 = UINT64_MAX;
	int32_t t38 = 13945;

	t38 = ((x165%x166)==(x167%x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 106U;
	volatile int64_t x171 = -1LL;
	int16_t x172 = INT16_MAX;
	volatile int32_t t39 = 633;

	t39 = ((x169%x170)==(x171%x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = 72;
	int8_t x174 = 6;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x173%x174)==(x175%x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	static volatile int16_t x182 = -475;
	volatile uint16_t x183 = 18U;
	static int16_t x184 = -13;
	int32_t t41 = -657;

	t41 = ((x181%x182)==(x183%x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = -1;
	int64_t x186 = 198957205LL;
	int64_t x187 = 13LL;
	static int16_t x188 = INT16_MIN;
	int32_t t42 = -186111359;

	t42 = ((x185%x186)==(x187%x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = UINT32_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t43 = 74;

	t43 = ((x189%x190)==(x191%x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x194 = 1019LLU;
	uint16_t x195 = UINT16_MAX;
	static int32_t x196 = -1;
	volatile int32_t t44 = -761335464;

	t44 = ((x193%x194)==(x195%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	static int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t45 = -18279438;

	t45 = ((x197%x198)==(x199%x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x201 = INT8_MIN;
	uint8_t x202 = 56U;
	int8_t x203 = 1;
	static volatile int32_t t46 = -31672;

	t46 = ((x201%x202)==(x203%x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = INT32_MAX;
	uint16_t x206 = 2U;
	uint8_t x207 = 28U;
	int32_t t47 = 1966086;

	t47 = ((x205%x206)==(x207%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	volatile int64_t x211 = -1LL;
	static uint32_t x212 = 205U;
	static volatile int32_t t48 = 371849;

	t48 = ((x209%x210)==(x211%x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x213 = -1;
	uint64_t x214 = 1LLU;
	uint16_t x216 = UINT16_MAX;
	int32_t t49 = 19242852;

	t49 = ((x213%x214)==(x215%x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = -35;
	int32_t x218 = -28;
	int8_t x219 = INT8_MIN;
	int32_t t50 = 107;

	t50 = ((x217%x218)==(x219%x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x224 = -31238973633349554LL;

	t51 = ((x221%x222)==(x223%x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	static volatile int32_t x228 = -1;
	volatile int32_t t52 = -346753;

	t52 = ((x225%x226)==(x227%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = 55;
	static volatile uint16_t x231 = 8426U;
	int32_t x232 = -409;
	int32_t t53 = -1677;

	t53 = ((x229%x230)==(x231%x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = -1;
	volatile int32_t t54 = 525327;

	t54 = ((x233%x234)==(x235%x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MAX;
	static int16_t x238 = INT16_MAX;
	int8_t x239 = 31;
	static uint32_t x240 = UINT32_MAX;

	t55 = ((x237%x238)==(x239%x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = -685;
	int8_t x244 = -21;

	t56 = ((x241%x242)==(x243%x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x245 = -1027;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MAX;
	static volatile int8_t x248 = INT8_MAX;
	static int32_t t57 = 54718;

	t57 = ((x245%x246)==(x247%x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x250 = 3;
	volatile int64_t x251 = INT64_MAX;
	static int32_t t58 = 1;

	t58 = ((x249%x250)==(x251%x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -1;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 277557445204218LLU;
	int32_t t59 = -132;

	t59 = ((x253%x254)==(x255%x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 1U;
	volatile int32_t t60 = 1545;

	t60 = ((x257%x258)==(x259%x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -74;
	int32_t x262 = -340482723;
	uint16_t x264 = 31190U;
	volatile int32_t t61 = -1;

	t61 = ((x261%x262)==(x263%x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x265 = 6445LL;
	int8_t x266 = INT8_MIN;
	static uint8_t x267 = 125U;
	int8_t x268 = -1;
	static int32_t t62 = 3178823;

	t62 = ((x265%x266)==(x267%x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 8768775585082LLU;
	uint8_t x270 = 1U;
	uint16_t x271 = 150U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t63 = 196753;

	t63 = ((x269%x270)==(x271%x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = 1140852135881686864LL;
	static uint8_t x275 = 2U;

	t64 = ((x273%x274)==(x275%x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x277 = 3U;
	uint8_t x278 = 1U;
	int32_t x279 = INT32_MAX;
	int8_t x280 = -1;
	volatile int32_t t65 = 211;

	t65 = ((x277%x278)==(x279%x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 2619789765319238400LLU;
	uint64_t x283 = 5003056LLU;
	uint8_t x284 = UINT8_MAX;
	int32_t t66 = -31;

	t66 = ((x281%x282)==(x283%x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x285 = 3311936U;
	volatile int16_t x286 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t67 = -3;

	t67 = ((x285%x286)==(x287%x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int16_t x291 = -3113;

	t68 = ((x289%x290)==(x291%x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = INT32_MIN;
	volatile int64_t x298 = 888735150009790093LL;
	volatile int32_t t69 = -6662;

	t69 = ((x297%x298)==(x299%x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 1U;
	uint32_t x302 = UINT32_MAX;
	static int64_t x303 = -63LL;
	volatile int16_t x304 = -1976;
	static volatile int32_t t70 = -24290;

	t70 = ((x301%x302)==(x303%x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x307 = -13;
	static int32_t x308 = INT32_MAX;
	static volatile int32_t t71 = -3;

	t71 = ((x305%x306)==(x307%x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x309 = INT32_MIN;
	int16_t x310 = 4;
	int8_t x311 = 3;
	static int32_t t72 = -4320;

	t72 = ((x309%x310)==(x311%x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	static uint16_t x315 = 9948U;
	volatile int32_t t73 = 118045;

	t73 = ((x313%x314)==(x315%x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = UINT8_MAX;
	uint8_t x318 = 53U;
	volatile int64_t x319 = 60534036575503623LL;
	volatile int32_t t74 = -189;

	t74 = ((x317%x318)==(x319%x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = INT32_MIN;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t75 = 78;

	t75 = ((x321%x322)==(x323%x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 941LLU;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t76 = -188132;

	t76 = ((x325%x326)==(x327%x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 1086407387546700257LLU;
	int8_t x330 = INT8_MIN;
	volatile uint16_t x331 = 27529U;
	uint64_t x332 = UINT64_MAX;
	static volatile int32_t t77 = 1100;

	t77 = ((x329%x330)==(x331%x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -11;
	int32_t x335 = INT32_MAX;
	static int16_t x336 = INT16_MAX;
	int32_t t78 = 49346698;

	t78 = ((x333%x334)==(x335%x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	static uint8_t x338 = UINT8_MAX;
	static uint64_t x339 = 424886688LLU;
	uint64_t x340 = 1LLU;
	volatile int32_t t79 = 1332177;

	t79 = ((x337%x338)==(x339%x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = 646691180LL;
	uint64_t x342 = UINT64_MAX;
	volatile int8_t x343 = 0;
	volatile int32_t t80 = 248728;

	t80 = ((x341%x342)==(x343%x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 23U;
	int32_t x347 = INT32_MAX;
	int32_t x348 = INT32_MAX;
	int32_t t81 = -22;

	t81 = ((x345%x346)==(x347%x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x349 = INT32_MIN;
	uint8_t x350 = 77U;
	volatile uint64_t x351 = 184990240LLU;
	uint8_t x352 = 12U;
	volatile int32_t t82 = -456;

	t82 = ((x349%x350)==(x351%x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x353 = INT32_MIN;
	uint16_t x354 = 17974U;
	int16_t x355 = INT16_MIN;
	int16_t x356 = 269;
	int32_t t83 = -129;

	t83 = ((x353%x354)==(x355%x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x359 = 282270135044LLU;
	uint16_t x360 = 1426U;
	static volatile int32_t t84 = 86246683;

	t84 = ((x357%x358)==(x359%x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -1LL;
	uint32_t x362 = 2U;
	int32_t x363 = -1;
	volatile int64_t x364 = INT64_MIN;
	static volatile int32_t t85 = -11938;

	t85 = ((x361%x362)==(x363%x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 1U;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t86 = 43146115;

	t86 = ((x365%x366)==(x367%x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x369 = INT64_MIN;
	volatile int8_t x372 = -1;

	t87 = ((x369%x370)==(x371%x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x373 = INT8_MAX;
	static int32_t x374 = INT32_MIN;
	static volatile uint16_t x375 = UINT16_MAX;
	static int8_t x376 = -1;

	t88 = ((x373%x374)==(x375%x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -1421LL;
	static volatile uint8_t x378 = UINT8_MAX;
	volatile uint16_t x379 = UINT16_MAX;
	volatile int32_t t89 = -170;

	t89 = ((x377%x378)==(x379%x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 53574184837500LLU;
	volatile int16_t x382 = -1;
	uint32_t x383 = 8297U;
	int32_t t90 = -2420375;

	t90 = ((x381%x382)==(x383%x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	volatile int8_t x388 = 1;
	int32_t t91 = 568022;

	t91 = ((x385%x386)==(x387%x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = -1;
	int32_t x390 = 3152;
	uint16_t x391 = 1U;
	uint16_t x392 = 89U;
	static volatile int32_t t92 = -1641711;

	t92 = ((x389%x390)==(x391%x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = 5925;
	int64_t x394 = -190942315334496557LL;
	int32_t t93 = 1;

	t93 = ((x393%x394)==(x395%x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x398 = 11;
	static int32_t t94 = -109443;

	t94 = ((x397%x398)==(x399%x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	volatile int32_t t95 = 250783229;

	t95 = ((x405%x406)==(x407%x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 129074428806LL;
	static volatile int8_t x410 = 24;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MAX;

	t96 = ((x409%x410)==(x411%x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	int16_t x414 = INT16_MAX;
	int16_t x415 = -6952;
	int64_t x416 = -1LL;
	int32_t t97 = 2672;

	t97 = ((x413%x414)==(x415%x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = 261532037LL;
	volatile uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 7962LLU;
	int32_t t98 = 122;

	t98 = ((x417%x418)==(x419%x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = 1;
	volatile int32_t x422 = -1;
	uint64_t x423 = 2LLU;
	volatile int32_t t99 = 160;

	t99 = ((x421%x422)==(x423%x424));

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

