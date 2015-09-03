#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 30883934922564757LLU;
static int32_t t1 = 7038;
int16_t x13 = INT16_MIN;
volatile uint32_t x20 = 931U;
volatile int16_t x25 = INT16_MAX;
int64_t x28 = 70LL;
int64_t x29 = INT64_MAX;
uint32_t x32 = 1U;
uint8_t x35 = 3U;
static uint32_t x38 = 360487U;
uint32_t x39 = UINT32_MAX;
int16_t x41 = 8;
volatile int64_t x43 = -4685180760121LL;
int16_t x44 = INT16_MIN;
volatile int32_t t10 = 25;
uint32_t x45 = 41024175U;
static int8_t x46 = INT8_MAX;
int8_t x49 = INT8_MIN;
int32_t t12 = 224136;
int8_t x60 = 0;
uint64_t x67 = UINT64_MAX;
uint16_t x71 = UINT16_MAX;
static int64_t x73 = -561698191109052602LL;
volatile int8_t x80 = INT8_MIN;
static int32_t t19 = 0;
uint16_t x81 = 5079U;
static int64_t x82 = -2404523571282605LL;
static uint32_t x86 = 497U;
static int8_t x89 = 1;
int32_t x95 = -8231203;
uint8_t x99 = UINT8_MAX;
int16_t x100 = 1246;
uint8_t x118 = UINT8_MAX;
static uint32_t x132 = 712760067U;
static uint64_t x138 = UINT64_MAX;
uint16_t x139 = 66U;
int32_t x142 = -202995;
uint8_t x149 = 0U;
int16_t x152 = INT16_MIN;
static volatile int32_t t39 = 96233;
int32_t x162 = 77836161;
static volatile int32_t t40 = -986618560;
int64_t x166 = -1LL;
static int32_t t41 = 11682;
int16_t x170 = -1;
static int32_t t42 = -1796349;
static volatile int32_t x187 = 106975727;
int16_t x193 = INT16_MAX;
uint64_t x196 = 5LLU;
volatile int32_t x197 = -1;
volatile int32_t t50 = -115455;
static int8_t x207 = INT8_MIN;
static volatile int32_t t51 = -63;
volatile int64_t x209 = INT64_MAX;
uint16_t x211 = 879U;
volatile int32_t x212 = 14741;
int16_t x223 = INT16_MIN;
volatile int32_t x224 = -1;
int16_t x232 = INT16_MAX;
int8_t x234 = INT8_MIN;
volatile int32_t x236 = INT32_MIN;
volatile int16_t x243 = 830;
volatile int32_t t60 = 48467504;
int16_t x248 = INT16_MIN;
static uint16_t x249 = 23955U;
volatile int32_t x257 = INT32_MIN;
volatile int64_t x258 = 770788064LL;
int8_t x261 = -1;
uint64_t x269 = 489651487882LLU;
uint32_t x270 = 448286314U;
volatile int32_t t67 = -1658;
uint16_t x274 = 12307U;
int8_t x284 = INT8_MIN;
volatile int32_t x291 = INT32_MAX;
int16_t x305 = INT16_MAX;
volatile int16_t x306 = 10;
int8_t x308 = -52;
int32_t x309 = INT32_MIN;
int32_t x312 = INT32_MAX;
uint16_t x315 = UINT16_MAX;
volatile int8_t x324 = INT8_MIN;
int16_t x331 = 7938;
uint64_t x332 = 3127LLU;
static uint8_t x335 = UINT8_MAX;
uint16_t x336 = UINT16_MAX;
volatile int32_t t83 = -950;
int64_t x337 = INT64_MIN;
int32_t x339 = -1;
static volatile int16_t x346 = -1;
int32_t x347 = -1296606;
uint8_t x357 = 0U;
int64_t x358 = 908LL;
int8_t x360 = INT8_MIN;
int64_t x364 = 2644574291050060179LL;
static volatile int8_t x366 = 53;
int32_t t91 = 25212158;
static uint8_t x391 = UINT8_MAX;
int64_t x397 = -1LL;
int32_t x398 = -15097647;


void f0(void) {
	int64_t x1 = -4064119281862769LL;
	static uint32_t x2 = 290718U;
	uint32_t x3 = 11U;
	static uint64_t x4 = 989955330076963807LLU;
	static int32_t t0 = -26574;

	t0 = ((x1^x2)<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = -1;

	t1 = ((x5^x6)<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -15353;
	static volatile int32_t x10 = -1;
	int64_t x11 = -1LL;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -14295483;

	t2 = ((x9^x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = UINT8_MAX;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -317640;

	t3 = ((x13^x14)<(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int32_t x18 = -7090;
	volatile uint16_t x19 = 234U;
	int32_t t4 = -31899;

	t4 = ((x17^x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	int64_t x24 = -1LL;
	int32_t t5 = -4;

	t5 = ((x21^x22)<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	static uint16_t x27 = 181U;
	volatile int32_t t6 = 6;

	t6 = ((x25^x26)<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = -10538;
	int32_t t7 = 8101601;

	t7 = ((x29^x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 18U;
	static int64_t x34 = INT64_MIN;
	static volatile int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -158125261;

	t8 = ((x33^x34)<(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x40 = 45LLU;
	volatile int32_t t9 = 701687200;

	t9 = ((x37^x38)<(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = -1;

	t10 = ((x41^x42)<(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t x48 = 8;
	volatile int32_t t11 = -2;

	t11 = ((x45^x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x50 = 518536979U;
	int64_t x51 = INT64_MIN;
	int64_t x52 = 2072455456060LL;

	t12 = ((x49^x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 1LL;
	static int16_t x54 = 5;
	int16_t x55 = -1;
	static int64_t x56 = -1LL;
	int32_t t13 = -1;

	t13 = ((x53^x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t t14 = 790;

	t14 = ((x57^x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = UINT32_MAX;
	static uint16_t x63 = 0U;
	static int16_t x64 = -1;
	volatile int32_t t15 = 2;

	t15 = ((x61^x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1628338320813LLU;
	volatile int16_t x66 = 116;
	volatile uint64_t x68 = 8900484023891987694LLU;
	volatile int32_t t16 = -4924491;

	t16 = ((x65^x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	static volatile int32_t t17 = -109;

	t17 = ((x69^x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MIN;
	uint8_t x75 = 0U;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = -2530;

	t18 = ((x73^x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	uint8_t x78 = 0U;
	int64_t x79 = 12757448612058LL;

	t19 = ((x77^x78)<(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x83 = 348909443U;
	static int16_t x84 = -1961;
	int32_t t20 = -1;

	t20 = ((x81^x82)<(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	uint32_t x87 = 7879098U;
	uint32_t x88 = 408806U;
	static volatile int32_t t21 = 4385372;

	t21 = ((x85^x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 61LL;
	volatile int32_t x91 = 1;
	static int8_t x92 = INT8_MIN;
	static int32_t t22 = 27;

	t22 = ((x89^x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 10U;
	volatile int64_t x94 = 0LL;
	int64_t x96 = -29588448069LL;
	volatile int32_t t23 = -21948299;

	t23 = ((x93^x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -3;
	int64_t x98 = -942266LL;
	static volatile int32_t t24 = -2698564;

	t24 = ((x97^x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	static int8_t x102 = INT8_MIN;
	volatile uint16_t x103 = 4128U;
	volatile int64_t x104 = -1LL;
	volatile int32_t t25 = 75;

	t25 = ((x101^x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x106 = 302LLU;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 64063729;

	t26 = ((x105^x106)<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;
	static volatile int32_t t27 = -213;

	t27 = ((x109^x110)<(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 463U;
	int32_t x114 = -77653;
	static uint32_t x115 = UINT32_MAX;
	volatile int32_t x116 = 1;
	int32_t t28 = -1073448486;

	t28 = ((x113^x114)<(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint64_t x119 = UINT64_MAX;
	static int16_t x120 = 11;
	volatile int32_t t29 = -185719;

	t29 = ((x117^x118)<(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile uint32_t x122 = 98U;
	int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = -110385;

	t30 = ((x121^x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	int64_t x127 = -1LL;
	int8_t x128 = 0;
	volatile int32_t t31 = -3;

	t31 = ((x125^x126)<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	int16_t x130 = -1;
	int8_t x131 = -20;
	volatile int32_t t32 = -5;

	t32 = ((x129^x130)<(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	static int32_t x134 = -1;
	volatile int32_t x135 = 32802590;
	int8_t x136 = -1;
	int32_t t33 = 10;

	t33 = ((x133^x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 133U;
	int32_t x140 = -653;
	volatile int32_t t34 = -115555707;

	t34 = ((x137^x138)<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MAX;
	static int8_t x143 = INT8_MAX;
	uint64_t x144 = 106LLU;
	static volatile int32_t t35 = 109649;

	t35 = ((x141^x142)<(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 12U;
	volatile int8_t x146 = INT8_MAX;
	static int64_t x147 = -1LL;
	int16_t x148 = -1;
	volatile int32_t t36 = 797316106;

	t36 = ((x145^x146)<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MAX;
	volatile int32_t t37 = -3;

	t37 = ((x149^x150)<(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	volatile uint32_t x154 = 8037076U;
	uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 0U;
	int32_t t38 = 225325;

	t38 = ((x153^x154)<(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	static int64_t x158 = -861790687LL;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;

	t39 = ((x157^x158)<(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint8_t x163 = 0U;
	int16_t x164 = 3;

	t40 = ((x161^x162)<(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -327169390LL;
	static int64_t x167 = INT64_MAX;
	volatile int16_t x168 = -1;

	t41 = ((x165^x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	static uint16_t x172 = UINT16_MAX;

	t42 = ((x169^x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = -1LL;
	volatile int32_t t43 = -52720;

	t43 = ((x173^x174)<(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 0U;
	uint16_t x178 = 256U;
	uint16_t x179 = 0U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -23;

	t44 = ((x177^x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 124U;
	int16_t x182 = INT16_MAX;
	volatile int32_t x183 = -1;
	uint64_t x184 = 99346432346LLU;
	int32_t t45 = -50378;

	t45 = ((x181^x182)<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 5997;

	t46 = ((x185^x186)<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -62637686;

	t47 = ((x189^x190)<(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = INT16_MIN;
	int32_t t48 = 29931;

	t48 = ((x193^x194)<(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = 3U;
	int32_t t49 = 247336733;

	t49 = ((x197^x198)<(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -8;
	int64_t x202 = INT64_MAX;
	uint8_t x203 = 88U;
	int16_t x204 = INT16_MAX;

	t50 = ((x201^x202)<(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 81248U;
	int32_t x206 = 24669;
	uint64_t x208 = 6075040527570LLU;

	t51 = ((x205^x206)<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	int32_t t52 = -26405;

	t52 = ((x209^x210)<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MAX;
	static int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	volatile int64_t x216 = INT64_MAX;
	int32_t t53 = 87787349;

	t53 = ((x213^x214)<(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = -4709809771055644LL;
	static volatile int8_t x219 = INT8_MAX;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t54 = 4581834;

	t54 = ((x217^x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int32_t x222 = -1;
	volatile int32_t t55 = 0;

	t55 = ((x221^x222)<(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -130;
	uint8_t x226 = UINT8_MAX;
	volatile int64_t x227 = INT64_MIN;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -1039519;

	t56 = ((x225^x226)<(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 5;
	int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	int32_t t57 = 45;

	t57 = ((x229^x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	uint32_t x235 = 641307U;
	int32_t t58 = 924;

	t58 = ((x233^x234)<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 117U;
	int64_t x238 = 140831858LL;
	static volatile uint64_t x239 = 8063682557067805LLU;
	volatile uint64_t x240 = 1132632124341LLU;
	volatile int32_t t59 = 26726;

	t59 = ((x237^x238)<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static uint32_t x242 = UINT32_MAX;
	int64_t x244 = 5091484524848318LL;

	t60 = ((x241^x242)<(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 70016512LLU;
	int16_t x246 = -3332;
	int16_t x247 = INT16_MIN;
	int32_t t61 = 0;

	t61 = ((x245^x246)<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MAX;
	volatile int16_t x252 = -1836;
	int32_t t62 = 362770;

	t62 = ((x249^x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	int64_t x254 = -169LL;
	static volatile int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 995;

	t63 = ((x253^x254)<(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x259 = 57U;
	uint16_t x260 = UINT16_MAX;
	static int32_t t64 = -1758;

	t64 = ((x257^x258)<(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = -1;
	uint32_t x263 = 4483504U;
	static int32_t x264 = -1;
	volatile int32_t t65 = -3337;

	t65 = ((x261^x262)<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	static volatile int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MAX;
	uint8_t x268 = UINT8_MAX;
	static int32_t t66 = 482;

	t66 = ((x265^x266)<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x271 = 3U;
	static volatile int8_t x272 = INT8_MIN;

	t67 = ((x269^x270)<(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -7887232882542LL;
	static volatile int64_t x275 = INT64_MAX;
	int64_t x276 = -4LL;
	volatile int32_t t68 = 2930;

	t68 = ((x273^x274)<(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 678;
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static volatile int8_t x280 = -1;
	static volatile int32_t t69 = 739576887;

	t69 = ((x277^x278)<(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -3;
	static volatile int32_t x282 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	int32_t t70 = 0;

	t70 = ((x281^x282)<(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t71 = -257434422;

	t71 = ((x285^x286)<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint16_t x290 = 31U;
	int8_t x292 = INT8_MAX;
	int32_t t72 = -11;

	t72 = ((x289^x290)<(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	volatile uint8_t x295 = UINT8_MAX;
	int8_t x296 = -7;
	int32_t t73 = 5865820;

	t73 = ((x293^x294)<(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 452061283420816LLU;
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = INT64_MIN;
	volatile int8_t x300 = -1;
	int32_t t74 = -15752;

	t74 = ((x297^x298)<(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	static int32_t t75 = 2649;

	t75 = ((x301^x302)<(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x307 = -1;
	static volatile int32_t t76 = -525659885;

	t76 = ((x305^x306)<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -1;
	int64_t x311 = -1799LL;
	volatile int32_t t77 = -14;

	t77 = ((x309^x310)<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MIN;
	volatile int32_t x316 = INT32_MIN;
	int32_t t78 = -969868241;

	t78 = ((x313^x314)<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	static int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	static uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -3178462;

	t79 = ((x317^x318)<(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MAX;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 270U;
	volatile int32_t t80 = -31;

	t80 = ((x321^x322)<(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = 15681023264041422LLU;
	int64_t x327 = INT64_MIN;
	static int8_t x328 = -1;
	int32_t t81 = -186435059;

	t81 = ((x325^x326)<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = 633380042U;
	volatile int32_t t82 = -4554;

	t82 = ((x329^x330)<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 3834695102773932120LLU;
	static int64_t x334 = 120678312337147737LL;

	t83 = ((x333^x334)<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x338 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = -473;

	t84 = ((x337^x338)<(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;
	static int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -36392;

	t85 = ((x341^x342)<(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	volatile int16_t x348 = -1;
	int32_t t86 = -1858293;

	t86 = ((x345^x346)<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	volatile int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -1;

	t87 = ((x349^x350)<(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x354 = 6U;
	int32_t x355 = 2090140;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -2840;

	t88 = ((x353^x354)<(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x359 = INT32_MAX;
	volatile int32_t t89 = 6256526;

	t89 = ((x357^x358)<(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 82U;
	uint32_t x362 = 956351015U;
	volatile int16_t x363 = INT16_MAX;
	volatile int32_t t90 = 1700457;

	t90 = ((x361^x362)<(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -1;

	t91 = ((x365^x366)<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int64_t x370 = 1229232LL;
	static int32_t x371 = INT32_MIN;
	static int16_t x372 = INT16_MAX;
	int32_t t92 = 6;

	t92 = ((x369^x370)<(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -781;
	int16_t x374 = 229;
	static volatile uint32_t x375 = UINT32_MAX;
	static int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 9166;

	t93 = ((x373^x374)<(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x377 = INT32_MAX;
	static volatile uint16_t x378 = 28U;
	int64_t x379 = -1LL;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = 62105;

	t94 = ((x377^x378)<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 17347U;
	uint32_t x384 = 1738182U;
	volatile int32_t t95 = 14;

	t95 = ((x381^x382)<(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x385 = 316148615;
	static int16_t x386 = INT16_MIN;
	int32_t x387 = -173950122;
	uint16_t x388 = 3U;
	int32_t t96 = -3;

	t96 = ((x385^x386)<(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 4179861U;
	volatile int16_t x390 = INT16_MIN;
	int16_t x392 = 10170;
	static int32_t t97 = 239;

	t97 = ((x389^x390)<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	static int32_t x394 = INT32_MAX;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	static int32_t t98 = -1950;

	t98 = ((x393^x394)<(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x399 = INT32_MAX;
	uint32_t x400 = UINT32_MAX;
	static int32_t t99 = 0;

	t99 = ((x397^x398)<(x399==x400));

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

