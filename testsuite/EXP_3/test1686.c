#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 824409LLU;
int32_t x11 = INT32_MIN;
volatile int32_t t3 = 20609057;
uint16_t x17 = 17125U;
int16_t x22 = -1;
int32_t x23 = -7831209;
int64_t x26 = INT64_MIN;
static int16_t x37 = INT16_MIN;
volatile int8_t x42 = 2;
uint16_t x43 = 16922U;
int64_t x44 = INT64_MIN;
static int8_t x55 = 12;
int64_t x56 = INT64_MIN;
int32_t t15 = -896;
static int32_t x65 = -1;
int8_t x67 = INT8_MAX;
volatile int32_t t17 = -5;
static int16_t x75 = INT16_MIN;
int32_t t20 = 6898176;
uint32_t x88 = 837U;
static volatile int32_t t21 = 52181;
int32_t x90 = INT32_MIN;
int32_t t22 = 59;
int8_t x94 = -1;
int32_t t23 = -1004;
static uint16_t x103 = 374U;
int8_t x105 = -28;
int8_t x109 = INT8_MIN;
int8_t x111 = -7;
static uint64_t x116 = 2130233487317407LLU;
volatile int64_t x121 = -93030641295252797LL;
uint64_t x124 = 121269857350761151LLU;
static uint32_t x125 = 269997672U;
static int16_t x126 = -1;
static int32_t x129 = INT32_MIN;
static int8_t x136 = -1;
uint16_t x137 = UINT16_MAX;
volatile uint64_t x139 = 356426138784LLU;
volatile int32_t t34 = -265739;
static int8_t x141 = 1;
volatile int64_t x142 = INT64_MIN;
static int8_t x144 = INT8_MIN;
static int32_t t35 = 29432367;
int8_t x158 = -1;
int64_t x160 = INT64_MIN;
volatile int32_t x163 = INT32_MIN;
volatile int16_t x167 = 48;
int32_t t41 = -649287;
static int16_t x171 = -47;
volatile int32_t t43 = 51248;
int16_t x179 = INT16_MAX;
uint8_t x182 = 1U;
int32_t t46 = -554;
int32_t t48 = 0;
volatile int8_t x198 = 59;
static volatile int32_t t49 = -982;
int32_t t50 = 14494004;
uint64_t x212 = 51889819971550391LLU;
int32_t x217 = INT32_MIN;
static int16_t x221 = 408;
int8_t x223 = INT8_MAX;
uint32_t x224 = 51585108U;
int8_t x228 = -1;
int32_t t57 = -1;
static uint8_t x235 = 8U;
uint8_t x236 = 21U;
int32_t t58 = 838180780;
static int32_t t59 = 75;
volatile int32_t x243 = INT32_MAX;
static uint8_t x251 = 2U;
volatile int32_t t64 = -3528;
int32_t x269 = INT32_MAX;
static int16_t x278 = INT16_MAX;
int32_t x289 = INT32_MIN;
static int32_t x290 = INT32_MIN;
int64_t x291 = INT64_MIN;
uint64_t x292 = 25724074594LLU;
int32_t t72 = -4078;
int64_t x294 = INT64_MIN;
static int64_t x307 = -4652834655931LL;
int16_t x308 = INT16_MIN;
volatile int32_t t76 = 399009660;
int64_t x312 = INT64_MAX;
uint64_t x314 = 48471511953387553LLU;
int32_t t78 = -1705;
int32_t t80 = 1;
uint8_t x325 = 1U;
int64_t x326 = -1LL;
int32_t t81 = -29242160;
uint32_t x334 = 1507233029U;
int32_t t83 = 0;
static int32_t t84 = -21;
volatile int32_t x341 = INT32_MIN;
uint32_t x344 = 29U;
static int16_t x347 = -1;
volatile int32_t x351 = -1;
int8_t x353 = INT8_MIN;
uint64_t x357 = UINT64_MAX;
static uint8_t x362 = UINT8_MAX;
uint32_t x364 = 435547U;
volatile int32_t t90 = -1298143;
int8_t x365 = INT8_MIN;
int64_t x367 = INT64_MIN;
uint64_t x368 = 1789447224036428029LLU;
volatile int32_t t91 = -334;
static uint64_t x369 = 57258LLU;
static uint8_t x370 = 0U;
int32_t x371 = 1000757;
volatile int32_t t92 = 185045;
uint64_t x374 = 125792553372186LLU;
volatile int64_t x380 = -295597029LL;
volatile int8_t x388 = 0;
int8_t x395 = 5;


void f0(void) {
	uint32_t x1 = 0U;
	static int16_t x3 = -1;
	int64_t x4 = -1LL;
	int32_t t0 = -6064;

	t0 = ((x1^x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -3;
	int8_t x6 = -1;
	int8_t x7 = INT8_MIN;
	static int8_t x8 = -29;
	int32_t t1 = -63;

	t1 = ((x5^x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = 2U;
	static int16_t x12 = -26;
	static volatile int32_t t2 = 241016021;

	t2 = ((x9^x10)<(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint16_t x14 = UINT16_MAX;
	volatile int32_t x15 = -5285155;
	int32_t x16 = INT32_MIN;

	t3 = ((x13^x14)<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MAX;
	int8_t x19 = 1;
	static int16_t x20 = -3988;
	int32_t t4 = -3133427;

	t4 = ((x17^x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -16722;

	t5 = ((x21^x22)<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -75670850;
	volatile int16_t x27 = INT16_MAX;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -8864;

	t6 = ((x25^x26)<(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 2772LL;
	volatile int32_t x30 = INT32_MIN;
	static uint64_t x31 = 7147508LLU;
	volatile int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = 1;

	t7 = ((x29^x30)<(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x34 = -2661;
	int32_t x35 = -13419455;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -13121759;

	t8 = ((x33^x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -247;
	uint32_t x39 = 10266U;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = -1;

	t9 = ((x37^x38)<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 16324LL;
	static volatile int32_t t10 = -9;

	t10 = ((x41^x42)<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	int32_t t11 = 2;

	t11 = ((x45^x46)<(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 5191U;
	uint16_t x50 = 0U;
	uint64_t x51 = 1691734150941614783LLU;
	volatile int16_t x52 = -104;
	volatile int32_t t12 = 30275372;

	t12 = ((x49^x50)<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	static int8_t x54 = -1;
	volatile int32_t t13 = 50365043;

	t13 = ((x53^x54)<(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	uint8_t x58 = 1U;
	volatile int32_t x59 = -1;
	uint64_t x60 = 3LLU;
	int32_t t14 = 206130;

	t14 = ((x57^x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MIN;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = -54;
	int16_t x64 = 7879;

	t15 = ((x61^x62)<(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	static volatile int64_t x68 = 2419737175370491LL;
	volatile int32_t t16 = -38;

	t16 = ((x65^x66)<(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;

	t17 = ((x69^x70)<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -9;
	int64_t x74 = 13LL;
	uint8_t x76 = 4U;
	static volatile int32_t t18 = -993;

	t18 = ((x73^x74)<(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	static volatile int8_t x80 = 2;
	int32_t t19 = -52326441;

	t19 = ((x77^x78)<(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	static int8_t x84 = INT8_MAX;

	t20 = ((x81^x82)<(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int8_t x86 = -1;
	static int64_t x87 = 54821599LL;

	t21 = ((x85^x86)<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x91 = INT64_MIN;
	volatile int16_t x92 = -6297;

	t22 = ((x89^x90)<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;

	t23 = ((x93^x94)<(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4070005406006LLU;
	int16_t x98 = INT16_MIN;
	int16_t x99 = 3239;
	volatile int16_t x100 = INT16_MIN;
	int32_t t24 = 10270052;

	t24 = ((x97^x98)<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 307;
	static uint8_t x102 = 19U;
	volatile uint64_t x104 = UINT64_MAX;
	int32_t t25 = 2;

	t25 = ((x101^x102)<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -144994991;

	t26 = ((x105^x106)<(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x110 = INT32_MIN;
	static volatile int32_t x112 = -223;
	int32_t t27 = 941;

	t27 = ((x109^x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 124;
	volatile uint64_t x114 = 352741LLU;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t t28 = -93;

	t28 = ((x113^x114)<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = 5864074U;
	uint64_t x118 = 956LLU;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 13;

	t29 = ((x117^x118)<(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	int32_t t30 = 582672356;

	t30 = ((x121^x122)<(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x127 = INT64_MAX;
	int32_t x128 = -1;
	static int32_t t31 = -1;

	t31 = ((x125^x126)<(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x130 = 45LLU;
	static int32_t x131 = INT32_MAX;
	volatile uint16_t x132 = 390U;
	static int32_t t32 = 1;

	t32 = ((x129^x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -12;
	int32_t x134 = -22086502;
	int8_t x135 = 25;
	static volatile int32_t t33 = 217306;

	t33 = ((x133^x134)<(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = 48995628U;
	int16_t x140 = -1;

	t34 = ((x137^x138)<(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x143 = 381293;

	t35 = ((x141^x142)<(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 765196U;
	volatile uint8_t x146 = 2U;
	static uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;
	static int32_t t36 = 209069316;

	t36 = ((x145^x146)<(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = -1;
	static volatile int64_t x152 = INT64_MIN;
	int32_t t37 = -150808;

	t37 = ((x149^x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 1;
	int64_t x154 = INT64_MIN;
	int16_t x155 = -78;
	uint64_t x156 = 157483280844258757LLU;
	int32_t t38 = 837708;

	t38 = ((x153^x154)<(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 10673679U;
	int32_t x159 = INT32_MAX;
	int32_t t39 = 470497;

	t39 = ((x157^x158)<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	int64_t x162 = 59655454LL;
	volatile int32_t x164 = -20363;
	int32_t t40 = 3152;

	t40 = ((x161^x162)<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	int8_t x168 = INT8_MAX;

	t41 = ((x165^x166)<(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	volatile int32_t x170 = INT32_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 2754;

	t42 = ((x169^x170)<(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 15U;
	uint8_t x174 = 4U;
	static volatile int64_t x175 = -1LL;
	volatile int32_t x176 = INT32_MAX;

	t43 = ((x173^x174)<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MAX;
	int16_t x178 = 0;
	int8_t x180 = 44;
	volatile int32_t t44 = -86355960;

	t44 = ((x177^x178)<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 3346007987726116LLU;
	int8_t x183 = -53;
	int64_t x184 = -3000320882807886844LL;
	volatile int32_t t45 = 443;

	t45 = ((x181^x182)<(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x185 = 7;
	int16_t x186 = 30;
	int64_t x187 = INT64_MIN;
	int16_t x188 = -6;

	t46 = ((x185^x186)<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -14;
	int8_t x190 = 2;
	static int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -16271;

	t47 = ((x189^x190)<(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MAX;
	static int16_t x194 = -1;
	int64_t x195 = INT64_MAX;
	static volatile uint8_t x196 = 3U;

	t48 = ((x193^x194)<(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	static int16_t x199 = -1;
	static uint16_t x200 = 1U;

	t49 = ((x197^x198)<(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 6U;
	volatile uint16_t x202 = UINT16_MAX;
	volatile uint64_t x203 = 3862246LLU;
	int16_t x204 = INT16_MAX;

	t50 = ((x201^x202)<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -4;
	static volatile uint32_t x206 = 112073U;
	int16_t x207 = INT16_MIN;
	static int64_t x208 = -7037LL;
	int32_t t51 = 81;

	t51 = ((x205^x206)<(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static volatile int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	static int32_t t52 = -12028;

	t52 = ((x209^x210)<(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = 1052LL;
	volatile int64_t x214 = -3408871LL;
	int64_t x215 = INT64_MAX;
	int16_t x216 = INT16_MAX;
	static volatile int32_t t53 = 294;

	t53 = ((x213^x214)<(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 6668867U;
	volatile int32_t t54 = 78878080;

	t54 = ((x217^x218)<(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 171;
	int32_t t55 = -7226;

	t55 = ((x221^x222)<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	uint32_t x227 = UINT32_MAX;
	static int32_t t56 = 836;

	t56 = ((x225^x226)<(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -3;
	static int8_t x230 = -1;
	int16_t x231 = INT16_MAX;
	static int32_t x232 = -303420932;

	t57 = ((x229^x230)<(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 5209920769208458LLU;
	uint32_t x234 = UINT32_MAX;

	t58 = ((x233^x234)<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	int8_t x240 = -1;

	t59 = ((x237^x238)<(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = 54;
	uint32_t x242 = UINT32_MAX;
	static int8_t x244 = INT8_MIN;
	static int32_t t60 = -10399;

	t60 = ((x241^x242)<(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = 3473;
	static uint32_t x246 = UINT32_MAX;
	uint16_t x247 = UINT16_MAX;
	uint8_t x248 = UINT8_MAX;
	int32_t t61 = -21592748;

	t61 = ((x245^x246)<(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	uint16_t x250 = 673U;
	static uint32_t x252 = 28498986U;
	static volatile int32_t t62 = -9113;

	t62 = ((x249^x250)<(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	static volatile uint64_t x254 = 5959951737LLU;
	int32_t x255 = INT32_MAX;
	volatile int8_t x256 = -1;
	volatile int32_t t63 = 833;

	t63 = ((x253^x254)<(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	static int64_t x258 = 297551571584495494LL;
	volatile int16_t x259 = -12;
	uint64_t x260 = UINT64_MAX;

	t64 = ((x257^x258)<(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 34U;
	int32_t x262 = 31393995;
	uint32_t x263 = UINT32_MAX;
	static int32_t x264 = INT32_MIN;
	int32_t t65 = -170932218;

	t65 = ((x261^x262)<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	volatile int16_t x266 = -124;
	int64_t x267 = INT64_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t66 = -1;

	t66 = ((x265^x266)<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = -1;
	uint32_t x271 = UINT32_MAX;
	static volatile int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = 5068005;

	t67 = ((x269^x270)<(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -2385618;
	static int64_t x274 = 22330340LL;
	int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MAX;
	static int32_t t68 = -120568;

	t68 = ((x273^x274)<(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x277 = 1897600369U;
	uint32_t x279 = 44868U;
	int8_t x280 = INT8_MIN;
	int32_t t69 = -452424;

	t69 = ((x277^x278)<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 1U;
	uint32_t x283 = 47135436U;
	volatile uint32_t x284 = 198013944U;
	volatile int32_t t70 = -2308;

	t70 = ((x281^x282)<(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MAX;
	int64_t x287 = INT64_MIN;
	int8_t x288 = -4;
	int32_t t71 = -42100;

	t71 = ((x285^x286)<(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {


	t72 = ((x289^x290)<(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 697U;
	uint16_t x295 = UINT16_MAX;
	volatile uint32_t x296 = 403U;
	int32_t t73 = -227;

	t73 = ((x293^x294)<(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	volatile int16_t x298 = 3;
	uint16_t x299 = 29827U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x297^x298)<(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MAX;
	int64_t x302 = 1291774LL;
	int16_t x303 = 1;
	volatile int8_t x304 = -56;
	int32_t t75 = 233;

	t75 = ((x301^x302)<(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 31;
	int16_t x306 = INT16_MIN;

	t76 = ((x305^x306)<(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint64_t x310 = UINT64_MAX;
	volatile uint16_t x311 = 269U;
	volatile int32_t t77 = -31261871;

	t77 = ((x309^x310)<(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 29522U;
	uint32_t x315 = 99U;
	uint8_t x316 = 6U;

	t78 = ((x313^x314)<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MAX;
	int16_t x319 = 103;
	int64_t x320 = INT64_MAX;
	int32_t t79 = -889788555;

	t79 = ((x317^x318)<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	volatile uint32_t x322 = 14866644U;
	int16_t x323 = INT16_MAX;
	static volatile uint16_t x324 = UINT16_MAX;

	t80 = ((x321^x322)<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;

	t81 = ((x325^x326)<(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static int64_t x330 = 33184102LL;
	int64_t x331 = 0LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 3886;

	t82 = ((x329^x330)<(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 0;
	volatile int64_t x335 = -1LL;
	static int32_t x336 = INT32_MAX;

	t83 = ((x333^x334)<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	volatile int8_t x338 = -1;
	volatile int64_t x339 = -1021719366LL;
	int16_t x340 = -1;

	t84 = ((x337^x338)<(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x342 = 84191U;
	volatile int8_t x343 = INT8_MAX;
	static volatile int32_t t85 = 14781979;

	t85 = ((x341^x342)<(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 5U;
	volatile int8_t x346 = 0;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -6852955;

	t86 = ((x345^x346)<(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 21U;
	int8_t x350 = INT8_MIN;
	uint8_t x352 = 0U;
	int32_t t87 = 88;

	t87 = ((x349^x350)<(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x354 = INT64_MIN;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = 1;
	volatile int32_t t88 = 61264;

	t88 = ((x353^x354)<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = 18;
	uint64_t x360 = UINT64_MAX;
	static int32_t t89 = 2;

	t89 = ((x357^x358)<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MAX;
	int32_t x363 = 51714111;

	t90 = ((x361^x362)<(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 78U;

	t91 = ((x365^x366)<(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x372 = -1;

	t92 = ((x369^x370)<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	static volatile int16_t x375 = -7;
	uint8_t x376 = 83U;
	volatile int32_t t93 = -83;

	t93 = ((x373^x374)<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 28823U;
	volatile int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int32_t t94 = 500334548;

	t94 = ((x377^x378)<(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile uint64_t x384 = 93282343LLU;
	volatile int32_t t95 = 2;

	t95 = ((x381^x382)<(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	volatile int32_t t96 = -803594;

	t96 = ((x385^x386)<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 6546607;

	t97 = ((x389^x390)<(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -11;
	int8_t x394 = INT8_MIN;
	static int64_t x396 = INT64_MAX;
	static volatile int32_t t98 = -1;

	t98 = ((x393^x394)<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MIN;
	static uint32_t x399 = 12917841U;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 1;

	t99 = ((x397^x398)<(x399<=x400));

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

