#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = -451658038265063LL;
int16_t x8 = -1052;
static int32_t t2 = -121325634;
uint16_t x16 = 44U;
int16_t x20 = -1;
volatile int32_t t4 = 1;
int32_t t5 = 68;
uint16_t x27 = 1618U;
uint8_t x33 = UINT8_MAX;
uint32_t x35 = 997U;
static volatile int8_t x43 = INT8_MIN;
static int32_t x48 = INT32_MIN;
static int64_t x49 = INT64_MIN;
static volatile int8_t x56 = INT8_MIN;
int32_t x67 = INT32_MIN;
int8_t x69 = -1;
uint8_t x73 = 23U;
uint64_t x76 = 6800407617LLU;
int32_t x77 = -1;
uint16_t x83 = 194U;
volatile int32_t x87 = INT32_MIN;
int16_t x89 = INT16_MAX;
int16_t x90 = INT16_MIN;
volatile int32_t t22 = 8119531;
int32_t t25 = 29;
int64_t x110 = -1LL;
int64_t x128 = INT64_MIN;
uint32_t x132 = 5270360U;
static int32_t x135 = INT32_MIN;
uint64_t x136 = 23056LLU;
static int32_t x139 = INT32_MIN;
uint16_t x146 = 1052U;
volatile int64_t x153 = -1LL;
static volatile int64_t x154 = -131452746LL;
uint16_t x156 = UINT16_MAX;
uint64_t x157 = 11448727509LLU;
uint32_t x160 = UINT32_MAX;
volatile int32_t t39 = -28;
int32_t x170 = 777401;
int32_t x183 = -1;
volatile uint64_t x187 = 75410899181094976LLU;
int32_t x189 = INT32_MAX;
int8_t x192 = INT8_MAX;
int64_t x201 = 127368825920214750LL;
int16_t x210 = INT16_MIN;
static int8_t x214 = INT8_MAX;
uint8_t x220 = 14U;
static int32_t x222 = -1;
uint16_t x225 = 781U;
uint32_t x226 = UINT32_MAX;
static volatile uint8_t x238 = UINT8_MAX;
static int32_t x250 = INT32_MAX;
volatile uint64_t x251 = 344607493387LLU;
int32_t t62 = -165814;
int32_t x253 = -1;
uint64_t x254 = UINT64_MAX;
int32_t t64 = -127;
int32_t x263 = INT32_MAX;
volatile int64_t x265 = INT64_MIN;
static uint16_t x266 = 5378U;
uint16_t x275 = 5U;
uint32_t x279 = UINT32_MAX;
static int16_t x280 = INT16_MIN;
int16_t x283 = INT16_MAX;
static volatile int64_t x287 = INT64_MIN;
static int32_t t71 = 32;
int16_t x291 = 1;
uint64_t x310 = UINT64_MAX;
volatile int32_t t79 = -31;
volatile int16_t x326 = -990;
volatile int64_t x327 = -18370826LL;
volatile int64_t x330 = INT64_MAX;
volatile int8_t x331 = INT8_MIN;
volatile int32_t x339 = INT32_MIN;
uint8_t x352 = 71U;
int16_t x357 = 3155;
int32_t x368 = INT32_MIN;
uint64_t x370 = UINT64_MAX;
volatile uint64_t x382 = 120LLU;
int8_t x386 = -4;
uint64_t x389 = 1796LLU;
int32_t x390 = INT32_MIN;
static int32_t x393 = INT32_MIN;
int8_t x398 = INT8_MIN;
int32_t x399 = 9556288;
static int16_t x400 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MAX;
	int8_t x3 = -1;
	int32_t t0 = 1;

	t0 = ((x1<x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1810783;
	uint64_t x6 = 3494272920LLU;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = -44200571;

	t1 = ((x5<x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int8_t x10 = -1;
	uint64_t x11 = 1835417127065LLU;
	uint64_t x12 = 7555816LLU;

	t2 = ((x9<x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1245894868LL;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = -10;

	t3 = ((x13<x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1LL;
	static int64_t x18 = 91906LL;
	static uint64_t x19 = UINT64_MAX;

	t4 = ((x17<x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 7U;
	int16_t x22 = INT16_MAX;
	uint32_t x23 = 2118U;
	int64_t x24 = INT64_MAX;

	t5 = ((x21<x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 3U;
	static int32_t x26 = -1;
	static int16_t x28 = 57;
	int32_t t6 = -335584780;

	t6 = ((x25<x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 161649561;
	uint64_t x30 = 1915386LLU;
	volatile int32_t x31 = -1;
	int32_t x32 = -45;
	static int32_t t7 = 39233;

	t7 = ((x29<x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	static volatile int8_t x36 = 12;
	int32_t t8 = 6104995;

	t8 = ((x33<x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int64_t x38 = -10LL;
	volatile int32_t x39 = -592513;
	int32_t x40 = INT32_MAX;
	int32_t t9 = 121;

	t9 = ((x37<x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	uint16_t x42 = 102U;
	uint64_t x44 = 30974509LLU;
	int32_t t10 = -6352;

	t10 = ((x41<x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -27258431;

	t11 = ((x45<x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile int64_t x52 = INT64_MAX;
	static int32_t t12 = -5402;

	t12 = ((x49<x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x54 = -1LL;
	uint8_t x55 = UINT8_MAX;
	volatile int32_t t13 = 253283;

	t13 = ((x53<x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	static int32_t x58 = INT32_MAX;
	uint32_t x59 = 13U;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = -4611;

	t14 = ((x57<x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int16_t x62 = -1;
	static volatile int8_t x63 = 1;
	uint16_t x64 = 3U;
	int32_t t15 = 4426095;

	t15 = ((x61<x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = -6;
	volatile uint8_t x68 = 1U;
	int32_t t16 = 4252;

	t16 = ((x65<x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 54590LL;
	int32_t x71 = 1484;
	int32_t x72 = -1;
	int32_t t17 = 910812;

	t17 = ((x69<x70)==(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 3U;
	static int32_t t18 = 1574;

	t18 = ((x73<x74)==(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	static volatile int32_t x79 = 137;
	static volatile int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -146374314;

	t19 = ((x77<x78)==(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	static uint16_t x82 = 39U;
	int8_t x84 = 3;
	volatile int32_t t20 = -251;

	t20 = ((x81<x82)==(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 354482474147984LLU;
	static int64_t x86 = -2LL;
	int16_t x88 = 744;
	int32_t t21 = 3486434;

	t21 = ((x85<x86)==(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x91 = -52;
	uint8_t x92 = 35U;

	t22 = ((x89<x90)==(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MAX;
	int16_t x95 = -1;
	volatile int64_t x96 = INT64_MAX;
	volatile int32_t t23 = -13;

	t23 = ((x93<x94)==(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint32_t x98 = 22442950U;
	static volatile uint8_t x99 = 80U;
	static int32_t x100 = INT32_MIN;
	int32_t t24 = 75;

	t24 = ((x97<x98)==(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 1353616483LLU;
	int16_t x102 = -1;
	uint64_t x103 = 29937373043LLU;
	volatile int32_t x104 = -1;

	t25 = ((x101<x102)==(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int32_t x106 = -3813247;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -774292;

	t26 = ((x105<x106)==(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 22LLU;
	volatile int32_t x111 = INT32_MIN;
	static int64_t x112 = 2111376355000LL;
	static volatile int32_t t27 = -2;

	t27 = ((x109<x110)==(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 26;
	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MAX;
	int64_t x116 = 2508480041077LL;
	int32_t t28 = 8;

	t28 = ((x113<x114)==(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = INT8_MAX;
	static volatile uint64_t x120 = 670062931993162075LLU;
	volatile int32_t t29 = 1;

	t29 = ((x117<x118)==(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 170593467993LLU;
	static volatile int64_t x124 = 1713650618LL;
	volatile int32_t t30 = -405747;

	t30 = ((x121<x122)==(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = 701U;
	static volatile int32_t x127 = -1;
	int32_t t31 = -6153224;

	t31 = ((x125<x126)==(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	static int8_t x130 = INT8_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile int32_t t32 = 188235094;

	t32 = ((x129<x130)==(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = -53;
	static volatile int32_t t33 = 15;

	t33 = ((x133<x134)==(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	uint32_t x140 = 0U;
	volatile int32_t t34 = 349;

	t34 = ((x137<x138)==(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 236U;
	volatile int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MAX;
	static int32_t x144 = -79368761;
	volatile int32_t t35 = -3857;

	t35 = ((x141<x142)==(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -31648898;

	t36 = ((x145<x146)==(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile uint64_t x150 = 19LLU;
	int16_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 38567885;

	t37 = ((x149<x150)==(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x155 = INT16_MIN;
	int32_t t38 = -3731;

	t38 = ((x153<x154)==(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 612616191;
	int8_t x159 = 5;

	t39 = ((x157<x158)==(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = -1;
	static volatile uint64_t x163 = UINT64_MAX;
	volatile int64_t x164 = -588572407LL;
	int32_t t40 = -27;

	t40 = ((x161<x162)==(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 5U;
	int32_t x166 = 23210;
	static volatile int8_t x167 = INT8_MAX;
	uint16_t x168 = 23U;
	int32_t t41 = -1;

	t41 = ((x165<x166)==(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	static int32_t x171 = INT32_MIN;
	volatile int16_t x172 = INT16_MAX;
	int32_t t42 = 2192245;

	t42 = ((x169<x170)==(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	uint8_t x174 = 1U;
	int32_t x175 = 769912657;
	volatile uint32_t x176 = UINT32_MAX;
	int32_t t43 = -245188;

	t43 = ((x173<x174)==(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = -1;
	static int16_t x179 = -3631;
	int8_t x180 = -4;
	int32_t t44 = 1000293;

	t44 = ((x177<x178)==(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 6U;
	int64_t x182 = INT64_MIN;
	uint64_t x184 = 44278328864302277LLU;
	volatile int32_t t45 = -1;

	t45 = ((x181<x182)==(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int16_t x186 = 1602;
	int16_t x188 = -1;
	volatile int32_t t46 = 233;

	t46 = ((x185<x186)==(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	int32_t t47 = -8;

	t47 = ((x189<x190)==(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 11U;
	uint64_t x194 = 58059261505871LLU;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = -1;
	int32_t t48 = -609052;

	t48 = ((x193<x194)==(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 12590;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 79;

	t49 = ((x197<x198)==(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MAX;
	int8_t x203 = -6;
	uint32_t x204 = 53U;
	volatile int32_t t50 = 2636796;

	t50 = ((x201<x202)==(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int64_t x206 = -1LL;
	uint16_t x207 = UINT16_MAX;
	static int16_t x208 = 1677;
	volatile int32_t t51 = -18376044;

	t51 = ((x205<x206)==(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static int32_t x211 = 4;
	uint32_t x212 = 1877485U;
	volatile int32_t t52 = -197804127;

	t52 = ((x209<x210)==(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	volatile uint8_t x215 = 1U;
	volatile int32_t x216 = -1;
	volatile int32_t t53 = 24853;

	t53 = ((x213<x214)==(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 682U;
	static int32_t x219 = 1833722;
	int32_t t54 = 47;

	t54 = ((x217<x218)==(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 824943857198640LL;
	uint16_t x223 = 7989U;
	uint16_t x224 = 13U;
	int32_t t55 = -5415296;

	t55 = ((x221<x222)==(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x227 = INT32_MIN;
	volatile int8_t x228 = -1;
	static volatile int32_t t56 = 4411464;

	t56 = ((x225<x226)==(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int64_t x230 = -1686418390853LL;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = -104768;
	volatile int32_t t57 = 23380;

	t57 = ((x229<x230)==(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	static volatile int16_t x234 = -2;
	volatile int64_t x235 = -1519448702542374383LL;
	static volatile int8_t x236 = INT8_MIN;
	int32_t t58 = 7360;

	t58 = ((x233<x234)==(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 84U;
	static int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = 46624785;

	t59 = ((x237<x238)==(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = 117834;

	t60 = ((x241<x242)==(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 122U;
	int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -736673;

	t61 = ((x245<x246)==(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int64_t x252 = INT64_MIN;

	t62 = ((x249<x250)==(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = INT32_MAX;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -24;

	t63 = ((x253<x254)==(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	static uint16_t x258 = 0U;
	int64_t x259 = INT64_MAX;
	volatile uint16_t x260 = 41U;

	t64 = ((x257<x258)==(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	static int32_t t65 = 456;

	t65 = ((x261<x262)==(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = -1;
	uint64_t x268 = 2241397008072117598LLU;
	int32_t t66 = -617003583;

	t66 = ((x265<x266)==(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	static int8_t x270 = 39;
	uint64_t x271 = UINT64_MAX;
	volatile int64_t x272 = 353860LL;
	int32_t t67 = -1609479;

	t67 = ((x269<x270)==(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 5349347756048834330LLU;
	volatile int32_t x274 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 215863305;

	t68 = ((x273<x274)==(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = 94U;
	int32_t t69 = -1;

	t69 = ((x277<x278)==(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	int8_t x282 = -26;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 0;

	t70 = ((x281<x282)==(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 19238U;
	static uint64_t x286 = 1791LLU;
	uint32_t x288 = 7385U;

	t71 = ((x285<x286)==(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 328U;
	static int16_t x290 = 566;
	int8_t x292 = -1;
	volatile int32_t t72 = -2730;

	t72 = ((x289<x290)==(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int32_t x294 = INT32_MIN;
	static volatile int32_t x295 = -1;
	int32_t x296 = -41699197;
	volatile int32_t t73 = -12004116;

	t73 = ((x293<x294)==(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	uint16_t x298 = 31973U;
	int32_t x299 = INT32_MAX;
	static uint32_t x300 = UINT32_MAX;
	int32_t t74 = 1;

	t74 = ((x297<x298)==(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int64_t x302 = -1LL;
	static int64_t x303 = INT64_MIN;
	uint64_t x304 = 690699070285LLU;
	volatile int32_t t75 = 198947126;

	t75 = ((x301<x302)==(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1961623668U;
	volatile int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;
	int32_t t76 = 1;

	t76 = ((x305<x306)==(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 0U;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -1396;

	t77 = ((x309<x310)==(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	static int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	int64_t x316 = 95270103166339330LL;
	int32_t t78 = 1;

	t78 = ((x313<x314)==(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	uint16_t x318 = 28523U;
	static int8_t x319 = INT8_MIN;
	static int32_t x320 = INT32_MIN;

	t79 = ((x317<x318)==(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = 121914551619747679LL;
	volatile int8_t x323 = INT8_MAX;
	uint8_t x324 = 29U;
	volatile int32_t t80 = 728;

	t80 = ((x321<x322)==(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 118U;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -59468093;

	t81 = ((x325<x326)==(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int64_t x332 = -1132536LL;
	int32_t t82 = 70565186;

	t82 = ((x329<x330)==(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 5980650LL;
	static int32_t x334 = INT32_MIN;
	static int64_t x335 = INT64_MIN;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -129247;

	t83 = ((x333<x334)==(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 14U;
	uint32_t x338 = 14163259U;
	int32_t x340 = -97216981;
	static volatile int32_t t84 = 311240121;

	t84 = ((x337<x338)==(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -9158;
	volatile int32_t x344 = 1;
	int32_t t85 = 0;

	t85 = ((x341<x342)==(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 322808;
	int32_t x346 = 179196478;
	uint16_t x347 = UINT16_MAX;
	static int16_t x348 = INT16_MAX;
	static int32_t t86 = 9257086;

	t86 = ((x345<x346)==(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static volatile uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MIN;
	int32_t t87 = 3;

	t87 = ((x349<x350)==(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 10467U;
	volatile int32_t x354 = INT32_MAX;
	static int64_t x355 = -1LL;
	volatile int32_t x356 = 2501;
	int32_t t88 = -50;

	t88 = ((x353<x354)==(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	static int64_t x360 = -1LL;
	int32_t t89 = -3529;

	t89 = ((x357<x358)==(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	volatile uint16_t x363 = 1U;
	static uint64_t x364 = 66362411222LLU;
	volatile int32_t t90 = 186737;

	t90 = ((x361<x362)==(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	volatile uint8_t x366 = 3U;
	static uint32_t x367 = 54U;
	int32_t t91 = -7522;

	t91 = ((x365<x366)==(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	static int64_t x372 = INT64_MAX;
	volatile int32_t t92 = -386344331;

	t92 = ((x369<x370)==(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = UINT8_MAX;
	static int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = -4163;

	t93 = ((x373<x374)==(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -12;
	uint8_t x378 = 2U;
	int16_t x379 = INT16_MIN;
	volatile int16_t x380 = INT16_MIN;
	int32_t t94 = 6723705;

	t94 = ((x377<x378)==(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	static volatile uint16_t x383 = 59U;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 4008920;

	t95 = ((x381<x382)==(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint64_t x387 = 12700LLU;
	uint8_t x388 = 4U;
	int32_t t96 = -3600;

	t96 = ((x385<x386)==(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x391 = INT8_MIN;
	volatile int16_t x392 = INT16_MIN;
	int32_t t97 = -249959;

	t97 = ((x389<x390)==(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x394 = -1LL;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t x396 = UINT64_MAX;
	int32_t t98 = 55921;

	t98 = ((x393<x394)==(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t t99 = 3;

	t99 = ((x397<x398)==(x399|x400));

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

