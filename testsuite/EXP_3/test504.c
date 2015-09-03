#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x21 = 1;
static int32_t t2 = 488719998;
uint16_t x25 = UINT16_MAX;
volatile int8_t x35 = INT8_MAX;
volatile int32_t t5 = -682567;
int16_t x51 = INT16_MAX;
int32_t t8 = 11964017;
volatile int16_t x61 = INT16_MIN;
uint16_t x66 = UINT16_MAX;
volatile uint64_t x67 = 53671LLU;
int64_t x70 = 324742LL;
volatile int16_t x71 = INT16_MIN;
int64_t x72 = 10LL;
volatile uint32_t x75 = UINT32_MAX;
int32_t t12 = 1594;
static uint16_t x79 = UINT16_MAX;
uint8_t x80 = 4U;
int64_t x85 = -90999LL;
uint32_t x93 = 5465230U;
static int32_t x100 = -240;
uint8_t x106 = 5U;
volatile int16_t x109 = INT16_MIN;
int32_t t20 = -17;
volatile int16_t x125 = INT16_MIN;
uint64_t x153 = 2242060764515481086LLU;
int8_t x155 = INT8_MIN;
volatile uint64_t x160 = 68530738844265666LLU;
volatile int32_t x162 = INT32_MIN;
int32_t x164 = INT32_MIN;
static volatile int8_t x166 = INT8_MIN;
int32_t x169 = -54203;
volatile uint32_t x170 = 1140107105U;
int16_t x173 = 77;
static volatile uint8_t x178 = 3U;
volatile int16_t x179 = INT16_MAX;
static volatile int32_t t35 = 502696301;
int32_t x188 = 3413;
static int8_t x189 = INT8_MIN;
volatile int32_t t38 = -430577994;
int8_t x197 = -1;
int16_t x200 = -3154;
static int32_t t39 = -234364048;
int32_t t40 = 2;
uint32_t x210 = 11U;
volatile int32_t t42 = 1;
uint64_t x216 = 13116649LLU;
static volatile int32_t t43 = 232462401;
int16_t x220 = 569;
int16_t x222 = INT16_MIN;
volatile int32_t x230 = -1;
int32_t x231 = INT32_MIN;
static uint16_t x233 = 940U;
int32_t t47 = -20879;
int32_t x243 = INT32_MIN;
uint8_t x245 = UINT8_MAX;
int32_t t50 = 20896;
static int16_t x258 = 14795;
static uint16_t x260 = UINT16_MAX;
int32_t t53 = 0;
volatile int32_t t55 = 27;
volatile uint32_t x289 = UINT32_MAX;
int32_t x295 = -1;
volatile int32_t t58 = 67091;
volatile int32_t t59 = -1833173;
static int32_t x320 = INT32_MAX;
int16_t x324 = 1;
volatile int16_t x352 = -1;
int64_t x358 = INT64_MIN;
static uint8_t x359 = 51U;
uint64_t x363 = 6388LLU;
int8_t x364 = -1;
static volatile int32_t t69 = -3753;
int8_t x365 = INT8_MAX;
int8_t x367 = 61;
int64_t x369 = 3LL;
int32_t t71 = -156183614;
static int32_t t72 = 1053988667;
uint32_t x379 = UINT32_MAX;
int16_t x392 = INT16_MIN;
uint32_t x398 = 514508150U;
volatile int16_t x402 = -2918;
static volatile int32_t t79 = 15;
int64_t x412 = 1LL;
static volatile int32_t t81 = 118205341;
uint16_t x451 = 1297U;
int32_t x459 = -97286910;
int8_t x470 = INT8_MIN;
uint8_t x471 = UINT8_MAX;
int64_t x481 = INT64_MIN;
int8_t x484 = INT8_MIN;
int8_t x494 = -1;
int8_t x495 = INT8_MIN;
int32_t x497 = INT32_MAX;
uint32_t x519 = UINT32_MAX;


void f0(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = 927507;
	static int32_t x11 = -1;
	int16_t x12 = -1;
	int32_t t0 = 2810764;

	t0 = ((x9^x10)<=(x11*x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x13 = 15U;
	static volatile uint32_t x14 = 21063U;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t1 = -117266;

	t1 = ((x13^x14)<=(x15*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = 120;
	static int16_t x23 = -83;
	static int16_t x24 = 20;

	t2 = ((x21^x22)<=(x23*x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x26 = 126U;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	static int32_t t3 = -124639401;

	t3 = ((x25^x26)<=(x27*x28));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -793175218629250438LL;
	static int32_t x36 = -1;
	volatile int32_t t4 = -689721;

	t4 = ((x33^x34)<=(x35*x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 29455LLU;
	static int8_t x42 = -3;
	static uint16_t x43 = UINT16_MAX;
	static int32_t x44 = -1;

	t5 = ((x41^x42)<=(x43*x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x45 = UINT32_MAX;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 25U;
	uint32_t x48 = 12054677U;
	int32_t t6 = 13291;

	t6 = ((x45^x46)<=(x47*x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	int8_t x50 = INT8_MAX;
	int64_t x52 = 2634596648183LL;
	volatile int32_t t7 = -53613883;

	t7 = ((x49^x50)<=(x51*x52));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -12430775LL;
	static uint64_t x56 = UINT64_MAX;

	t8 = ((x53^x54)<=(x55*x56));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = 1LLU;
	volatile int32_t t9 = -4704109;

	t9 = ((x61^x62)<=(x63*x64));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MIN;
	static uint64_t x68 = 13154LLU;
	volatile int32_t t10 = 3714;

	t10 = ((x65^x66)<=(x67*x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x69 = 6705911LLU;
	volatile int32_t t11 = 0;

	t11 = ((x69^x70)<=(x71*x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = -1LL;
	int64_t x74 = 14521983LL;
	int16_t x76 = -1826;

	t12 = ((x73^x74)<=(x75*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = -1;
	int16_t x78 = -12588;
	int32_t t13 = 91;

	t13 = ((x77^x78)<=(x79*x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	int32_t x88 = 0;
	static volatile int32_t t14 = 692;

	t14 = ((x85^x86)<=(x87*x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 661464540LLU;
	static int32_t x90 = INT32_MIN;
	uint8_t x91 = 0U;
	volatile uint16_t x92 = 2U;
	volatile int32_t t15 = 228120;

	t15 = ((x89^x90)<=(x91*x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x94 = INT64_MAX;
	uint32_t x95 = 2093595356U;
	volatile uint16_t x96 = 41U;
	volatile int32_t t16 = -68;

	t16 = ((x93^x94)<=(x95*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 1790LL;
	volatile uint32_t x98 = UINT32_MAX;
	static uint8_t x99 = 0U;
	volatile int32_t t17 = 0;

	t17 = ((x97^x98)<=(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = INT64_MAX;
	volatile int64_t x107 = -1LL;
	int64_t x108 = -447169204LL;
	volatile int32_t t18 = 20893;

	t18 = ((x105^x106)<=(x107*x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x110 = INT32_MIN;
	int64_t x111 = 624LL;
	uint8_t x112 = 3U;
	volatile int32_t t19 = -7;

	t19 = ((x109^x110)<=(x111*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MAX;
	int8_t x122 = 3;
	static int32_t x123 = INT32_MIN;
	volatile int8_t x124 = 0;

	t20 = ((x121^x122)<=(x123*x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	int32_t t21 = 0;

	t21 = ((x125^x126)<=(x127*x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = -1LL;
	int16_t x130 = 205;
	uint8_t x131 = 0U;
	int8_t x132 = -1;
	int32_t t22 = -11736631;

	t22 = ((x129^x130)<=(x131*x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x133 = 3296792LLU;
	static int16_t x134 = -1;
	int16_t x135 = 3026;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t23 = -711297812;

	t23 = ((x133^x134)<=(x135*x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = -26;
	int16_t x138 = -10511;
	int16_t x139 = INT16_MAX;
	static uint16_t x140 = 1961U;
	volatile int32_t t24 = -19168513;

	t24 = ((x137^x138)<=(x139*x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 117U;
	volatile uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 18U;
	volatile int32_t t25 = -408476956;

	t25 = ((x141^x142)<=(x143*x144));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int32_t x148 = 991770;
	int32_t t26 = -265265;

	t26 = ((x145^x146)<=(x147*x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = -1;
	int8_t x152 = INT8_MIN;
	static int32_t t27 = 72940442;

	t27 = ((x149^x150)<=(x151*x152));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x154 = -3944080;
	uint8_t x156 = 0U;
	int32_t t28 = -24491272;

	t28 = ((x153^x154)<=(x155*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MAX;
	volatile int64_t x159 = INT64_MIN;
	static int32_t t29 = -16793359;

	t29 = ((x157^x158)<=(x159*x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x161 = INT64_MIN;
	static uint32_t x163 = UINT32_MAX;
	volatile int32_t t30 = -57445140;

	t30 = ((x161^x162)<=(x163*x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 0U;
	volatile int32_t t31 = 122669;

	t31 = ((x165^x166)<=(x167*x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x171 = -888;
	volatile uint8_t x172 = 0U;
	int32_t t32 = 96657791;

	t32 = ((x169^x170)<=(x171*x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x174 = 123620U;
	volatile uint32_t x175 = 1605118755U;
	int32_t x176 = INT32_MIN;
	int32_t t33 = -189761;

	t33 = ((x173^x174)<=(x175*x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x180 = 0U;
	volatile int32_t t34 = -93;

	t34 = ((x177^x178)<=(x179*x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MAX;
	int8_t x183 = -1;
	static int8_t x184 = 20;

	t35 = ((x181^x182)<=(x183*x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x185 = 878909U;
	uint32_t x186 = 1U;
	volatile int64_t x187 = -1LL;
	volatile int32_t t36 = 8;

	t36 = ((x185^x186)<=(x187*x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x190 = 500;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = 0;
	volatile int32_t t37 = 128;

	t37 = ((x189^x190)<=(x191*x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MAX;
	uint64_t x195 = 114067278764552076LLU;
	int32_t x196 = INT32_MIN;

	t38 = ((x193^x194)<=(x195*x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x198 = INT64_MIN;
	static uint64_t x199 = UINT64_MAX;

	t39 = ((x197^x198)<=(x199*x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x201 = 989LL;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -6679164559399LL;
	volatile int32_t x204 = -1;

	t40 = ((x201^x202)<=(x203*x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x205 = 8;
	static int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = 405;
	int32_t t41 = -1002;

	t41 = ((x205^x206)<=(x207*x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x209 = -1;
	volatile uint32_t x211 = 49248U;
	int32_t x212 = INT32_MIN;

	t42 = ((x209^x210)<=(x211*x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	static volatile int16_t x214 = 15783;
	volatile int16_t x215 = INT16_MAX;

	t43 = ((x213^x214)<=(x215*x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = 126152;
	uint32_t x218 = UINT32_MAX;
	volatile int16_t x219 = -1;
	int32_t t44 = -243566;

	t44 = ((x217^x218)<=(x219*x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x221 = 29U;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 4431411872188927LLU;
	int32_t t45 = -260427;

	t45 = ((x221^x222)<=(x223*x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x229 = 1U;
	uint64_t x232 = 26874LLU;
	volatile int32_t t46 = 49425;

	t46 = ((x229^x230)<=(x231*x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x234 = INT32_MIN;
	static int32_t x235 = -1;
	int8_t x236 = INT8_MIN;

	t47 = ((x233^x234)<=(x235*x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = -874817;
	uint16_t x238 = 2660U;
	static volatile uint32_t x239 = 13U;
	int16_t x240 = -1;
	static int32_t t48 = 3;

	t48 = ((x237^x238)<=(x239*x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	volatile uint32_t x244 = 17889U;
	volatile int32_t t49 = -72326;

	t49 = ((x241^x242)<=(x243*x244));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x246 = UINT16_MAX;
	static uint64_t x247 = 1615979297LLU;
	uint32_t x248 = 16763189U;

	t50 = ((x245^x246)<=(x247*x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	static int8_t x250 = INT8_MAX;
	static uint8_t x251 = UINT8_MAX;
	uint16_t x252 = UINT16_MAX;
	static int32_t t51 = 30;

	t51 = ((x249^x250)<=(x251*x252));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = 1399452600LL;
	volatile uint8_t x255 = 4U;
	int64_t x256 = -266153028047543LL;
	static int32_t t52 = -595080;

	t52 = ((x253^x254)<=(x255*x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x257 = INT64_MIN;
	int64_t x259 = -10982224LL;

	t53 = ((x257^x258)<=(x259*x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int8_t x278 = -15;
	int64_t x279 = -25293447LL;
	uint64_t x280 = 0LLU;
	int32_t t54 = 12809;

	t54 = ((x277^x278)<=(x279*x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;

	t55 = ((x281^x282)<=(x283*x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x290 = INT8_MAX;
	static uint32_t x291 = 110914106U;
	int8_t x292 = -1;
	static volatile int32_t t56 = 3084;

	t56 = ((x289^x290)<=(x291*x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x293 = -1329577860499296734LL;
	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t57 = -16;

	t57 = ((x293^x294)<=(x295*x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x301 = 11626840U;
	uint16_t x302 = 20421U;
	int32_t x303 = -13;
	volatile int16_t x304 = INT16_MIN;

	t58 = ((x301^x302)<=(x303*x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x309 = 2234U;
	int32_t x310 = -20;
	int16_t x311 = -1047;
	int16_t x312 = -1;

	t59 = ((x309^x310)<=(x311*x312));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	volatile uint32_t x315 = UINT32_MAX;
	uint32_t x316 = 79U;
	volatile int32_t t60 = -6;

	t60 = ((x313^x314)<=(x315*x316));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x317 = -1;
	volatile int32_t x318 = INT32_MIN;
	int64_t x319 = 801346LL;
	volatile int32_t t61 = -8;

	t61 = ((x317^x318)<=(x319*x320));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x321 = -1;
	int8_t x322 = INT8_MAX;
	volatile int64_t x323 = 11355679241170760LL;
	volatile int32_t t62 = 450023;

	t62 = ((x321^x322)<=(x323*x324));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = -3;
	static volatile int64_t x330 = -1LL;
	static uint32_t x331 = 108285293U;
	uint64_t x332 = 3572259108856613067LLU;
	volatile int32_t t63 = 513914877;

	t63 = ((x329^x330)<=(x331*x332));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x333 = 19545U;
	int8_t x334 = -1;
	uint32_t x335 = 4622U;
	uint64_t x336 = UINT64_MAX;
	static int32_t t64 = -200;

	t64 = ((x333^x334)<=(x335*x336));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x341 = -862902883862658LL;
	static int16_t x342 = -1161;
	static int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t65 = -8727216;

	t65 = ((x341^x342)<=(x343*x344));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x349 = 7U;
	uint8_t x350 = 3U;
	uint32_t x351 = 75161130U;
	int32_t t66 = 554177559;

	t66 = ((x349^x350)<=(x351*x352));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 92232432LLU;
	static int32_t x355 = INT32_MAX;
	int64_t x356 = -1LL;
	int32_t t67 = 1333;

	t67 = ((x353^x354)<=(x355*x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = 2440547607LL;
	int16_t x360 = 9202;
	int32_t t68 = -4075;

	t68 = ((x357^x358)<=(x359*x360));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = 78U;
	int16_t x362 = INT16_MIN;

	t69 = ((x361^x362)<=(x363*x364));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x366 = 441U;
	uint64_t x368 = UINT64_MAX;
	static int32_t t70 = -9222713;

	t70 = ((x365^x366)<=(x367*x368));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x370 = 32U;
	static volatile uint16_t x371 = 15U;
	uint32_t x372 = 8691U;

	t71 = ((x369^x370)<=(x371*x372));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x373 = INT16_MIN;
	volatile int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MIN;
	int8_t x376 = -7;

	t72 = ((x373^x374)<=(x375*x376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = 22142974;
	uint64_t x380 = UINT64_MAX;
	static int32_t t73 = 635785695;

	t73 = ((x377^x378)<=(x379*x380));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile int64_t x382 = INT64_MAX;
	int16_t x383 = -1;
	int8_t x384 = INT8_MAX;
	int32_t t74 = -1004319;

	t74 = ((x381^x382)<=(x383*x384));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x385 = -478;
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 1855U;
	volatile uint64_t x388 = 33753824060LLU;
	int32_t t75 = 63313979;

	t75 = ((x385^x386)<=(x387*x388));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = INT16_MAX;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = -10166LL;
	static volatile int32_t t76 = 350199;

	t76 = ((x389^x390)<=(x391*x392));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 23U;
	uint32_t x396 = 13162U;
	static volatile int32_t t77 = -243595946;

	t77 = ((x393^x394)<=(x395*x396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x397 = 23U;
	int16_t x399 = 42;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t78 = 1;

	t78 = ((x397^x398)<=(x399*x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x401 = INT8_MAX;
	int32_t x403 = -1;
	volatile int16_t x404 = -1;

	t79 = ((x401^x402)<=(x403*x404));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;
	static int32_t t80 = -194114;

	t80 = ((x409^x410)<=(x411*x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x417 = 384846068U;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MAX;

	t81 = ((x417^x418)<=(x419*x420));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x425 = 7U;
	uint32_t x426 = 75U;
	int64_t x427 = -1LL;
	volatile uint16_t x428 = UINT16_MAX;
	int32_t t82 = -1085;

	t82 = ((x425^x426)<=(x427*x428));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x429 = 1U;
	volatile int64_t x430 = 49172097002888LL;
	uint8_t x431 = 1U;
	int32_t x432 = INT32_MAX;
	volatile int32_t t83 = 3;

	t83 = ((x429^x430)<=(x431*x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x437 = 4258U;
	uint64_t x438 = 6159LLU;
	uint32_t x439 = UINT32_MAX;
	volatile uint16_t x440 = 0U;
	int32_t t84 = 21668;

	t84 = ((x437^x438)<=(x439*x440));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x441 = UINT8_MAX;
	uint32_t x442 = 21688002U;
	static uint64_t x443 = UINT64_MAX;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t85 = 524722789;

	t85 = ((x441^x442)<=(x443*x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x445 = -1;
	uint64_t x446 = UINT64_MAX;
	static uint64_t x447 = 445059860354615LLU;
	uint64_t x448 = 895313510908711LLU;
	int32_t t86 = 23;

	t86 = ((x445^x446)<=(x447*x448));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x449 = 4U;
	uint16_t x450 = UINT16_MAX;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x449^x450)<=(x451*x452));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x453 = INT32_MAX;
	static volatile uint32_t x454 = UINT32_MAX;
	uint32_t x455 = 2U;
	int8_t x456 = INT8_MIN;
	int32_t t88 = -51842;

	t88 = ((x453^x454)<=(x455*x456));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	uint64_t x460 = 1LLU;
	volatile int32_t t89 = 15;

	t89 = ((x457^x458)<=(x459*x460));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x461 = INT32_MAX;
	uint8_t x462 = UINT8_MAX;
	uint32_t x463 = UINT32_MAX;
	static int64_t x464 = -156LL;
	static int32_t t90 = 6;

	t90 = ((x461^x462)<=(x463*x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x469 = UINT8_MAX;
	static uint64_t x472 = UINT64_MAX;
	volatile int32_t t91 = 173678;

	t91 = ((x469^x470)<=(x471*x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = INT8_MIN;
	volatile int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MIN;
	int64_t x476 = 2546466983999LL;
	int32_t t92 = 655;

	t92 = ((x473^x474)<=(x475*x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x482 = -126119915LL;
	uint32_t x483 = 1659U;
	static volatile int32_t t93 = 24;

	t93 = ((x481^x482)<=(x483*x484));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x489 = 1U;
	volatile int64_t x490 = -1LL;
	int8_t x491 = -17;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t94 = -77838;

	t94 = ((x489^x490)<=(x491*x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x493 = 1;
	static volatile int32_t x496 = -448573;
	int32_t t95 = 229047;

	t95 = ((x493^x494)<=(x495*x496));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x498 = -2526645;
	int8_t x499 = INT8_MIN;
	volatile int32_t x500 = -1;
	volatile int32_t t96 = -4460420;

	t96 = ((x497^x498)<=(x499*x500));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x501 = 130456788LL;
	int32_t x502 = 4;
	int64_t x503 = -90535645LL;
	static int32_t x504 = -32558;
	int32_t t97 = 30580846;

	t97 = ((x501^x502)<=(x503*x504));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = INT32_MAX;
	int8_t x514 = INT8_MIN;
	volatile uint8_t x515 = 49U;
	uint64_t x516 = 13543846951354LLU;
	volatile int32_t t98 = -2897732;

	t98 = ((x513^x514)<=(x515*x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = -1;
	int64_t x518 = INT64_MIN;
	uint16_t x520 = 108U;
	volatile int32_t t99 = 49;

	t99 = ((x517^x518)<=(x519*x520));

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

