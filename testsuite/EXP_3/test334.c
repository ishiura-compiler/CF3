#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
volatile int64_t x9 = INT64_MIN;
uint64_t x15 = UINT64_MAX;
int64_t x16 = INT64_MAX;
volatile int32_t t4 = 371988885;
static volatile int16_t x24 = INT16_MAX;
uint8_t x32 = 1U;
static int8_t x35 = -59;
volatile int32_t t7 = 1156;
uint16_t x37 = 14U;
int32_t t8 = -1;
int16_t x41 = -15;
volatile int32_t t9 = 375;
static uint16_t x59 = 2U;
volatile int32_t t13 = 0;
volatile int32_t t14 = -1893058;
int32_t t16 = -751925481;
uint8_t x78 = UINT8_MAX;
int16_t x83 = -212;
volatile int32_t t19 = 2680281;
volatile uint8_t x92 = 5U;
uint8_t x94 = 0U;
uint16_t x96 = 619U;
static int32_t t22 = 5227826;
static int8_t x97 = -1;
int16_t x101 = INT16_MAX;
volatile int8_t x107 = -13;
uint64_t x112 = 83467349LLU;
volatile int32_t t27 = -731;
static int8_t x117 = 1;
static volatile int64_t x119 = -69967174LL;
static volatile int8_t x121 = INT8_MAX;
int64_t x128 = INT64_MAX;
int16_t x142 = -1;
int32_t t34 = 12;
int32_t x148 = 7;
int32_t x150 = INT32_MIN;
int32_t x152 = -24;
volatile int64_t x156 = -112982957268606LL;
int8_t x157 = INT8_MAX;
int8_t x159 = 2;
volatile uint32_t x164 = 137915216U;
volatile int32_t t39 = 113687934;
uint8_t x165 = UINT8_MAX;
volatile int32_t t40 = 634;
volatile int8_t x179 = INT8_MIN;
volatile int32_t t46 = 6154425;
int64_t x201 = 26130433LL;
static volatile int64_t x202 = INT64_MIN;
int64_t x207 = -29802LL;
uint32_t x211 = 2484U;
static volatile int32_t t50 = 0;
int8_t x223 = INT8_MIN;
int64_t x234 = INT64_MAX;
uint8_t x237 = 4U;
uint16_t x239 = 32213U;
int8_t x242 = 2;
volatile uint32_t x244 = 25U;
volatile int32_t t58 = 38;
static uint64_t x267 = 8160953LLU;
int32_t x277 = INT32_MAX;
volatile int32_t t62 = -2;
volatile int32_t t65 = 29;
uint8_t x294 = UINT8_MAX;
uint8_t x309 = 47U;
uint64_t x324 = 17688LLU;
int32_t x327 = -1;
uint32_t x328 = 583963U;
static int32_t t71 = 651267;
static int64_t x349 = -1LL;
int8_t x356 = -1;
volatile int32_t t76 = 441;
static uint32_t x363 = 402480U;
int16_t x365 = -4;
volatile uint16_t x366 = 8624U;
uint16_t x367 = 29071U;
volatile int8_t x371 = INT8_MAX;
uint64_t x377 = 44999429LLU;
volatile int32_t x379 = INT32_MAX;
uint16_t x385 = UINT16_MAX;
int32_t x393 = INT32_MIN;
uint16_t x399 = 97U;
static int8_t x404 = 4;
int16_t x406 = INT16_MIN;
static int64_t x411 = INT64_MAX;
static volatile int16_t x412 = INT16_MAX;
static uint64_t x419 = 58725165LLU;
int32_t t90 = 78853;
volatile int32_t t92 = 29607;
int16_t x433 = -10135;
static int16_t x435 = -1;
int64_t x442 = 7948016003LL;
uint32_t x459 = 11904704U;
int32_t t99 = 14428;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int32_t x3 = -1;
	int32_t t0 = -251;

	t0 = ((x1^x2)<(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = 30U;
	uint32_t x7 = 783U;
	int8_t x8 = -1;
	static int32_t t1 = 2950963;

	t1 = ((x5^x6)<(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -87;

	t2 = ((x9^x10)<(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 5637051077LL;
	uint8_t x14 = 9U;
	static volatile int32_t t3 = -55;

	t3 = ((x13^x14)<(x15-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	int64_t x19 = -1LL;
	int32_t x20 = -3421;

	t4 = ((x17^x18)<(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = 1;
	static uint16_t x23 = 1223U;
	int32_t t5 = -3;

	t5 = ((x21^x22)<(x23-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 39;
	static volatile int32_t x30 = INT32_MAX;
	static int8_t x31 = INT8_MAX;
	static int32_t t6 = 1069196573;

	t6 = ((x29^x30)<(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 2;
	uint16_t x34 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;

	t7 = ((x33^x34)<(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x38 = -1LL;
	uint8_t x39 = 21U;
	static volatile int8_t x40 = INT8_MIN;

	t8 = ((x37^x38)<(x39-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = 218542895LLU;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MAX;

	t9 = ((x41^x42)<(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MAX;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -49;
	int32_t t10 = 38937938;

	t10 = ((x45^x46)<(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 0U;
	int32_t t11 = 1748;

	t11 = ((x49^x50)<(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 11U;
	int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	int32_t t12 = 3022;

	t12 = ((x53^x54)<(x55-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MAX;
	volatile int32_t x60 = -2356137;

	t13 = ((x57^x58)<(x59-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 22U;
	uint64_t x62 = 2247867080974973521LLU;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

	t14 = ((x61^x62)<(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 50157339LLU;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = -241;
	int32_t x68 = -507;
	volatile int32_t t15 = 229;

	t15 = ((x65^x66)<(x67-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MAX;
	volatile int64_t x71 = -3586229640246LL;
	volatile uint32_t x72 = 1524850621U;

	t16 = ((x69^x70)<(x71-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	uint32_t x75 = 59824U;
	static volatile uint8_t x76 = 92U;
	volatile int32_t t17 = -1;

	t17 = ((x73^x74)<(x75-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int32_t x79 = INT32_MIN;
	int8_t x80 = -1;
	int32_t t18 = 5;

	t18 = ((x77^x78)<(x79-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 1099219521372625LLU;
	uint8_t x82 = 6U;
	int32_t x84 = -1;

	t19 = ((x81^x82)<(x83-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = 15;
	uint64_t x87 = 254731261LLU;
	uint8_t x88 = 58U;
	int32_t t20 = -42;

	t20 = ((x85^x86)<(x87-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 195761863034635LLU;
	int64_t x90 = -1LL;
	volatile int32_t x91 = -6272432;
	static int32_t t21 = -68572;

	t21 = ((x89^x90)<(x91-x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 91617;
	int16_t x95 = INT16_MIN;

	t22 = ((x93^x94)<(x95-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 3U;
	int8_t x99 = 3;
	uint64_t x100 = 11260896LLU;
	int32_t t23 = 4010;

	t23 = ((x97^x98)<(x99-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = 96;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 9U;
	static volatile int32_t t24 = -1037001263;

	t24 = ((x101^x102)<(x103-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	static int32_t x106 = 221685148;
	uint16_t x108 = 4347U;
	int32_t t25 = -4055836;

	t25 = ((x105^x106)<(x107-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = -15;
	int32_t x111 = INT32_MIN;
	int32_t t26 = 507;

	t26 = ((x109^x110)<(x111-x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MAX;

	t27 = ((x113^x114)<(x115-x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = -1LL;
	volatile int32_t x120 = INT32_MAX;
	int32_t t28 = -828483;

	t28 = ((x117^x118)<(x119-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = -1;
	int16_t x123 = INT16_MAX;
	static int64_t x124 = -99058LL;
	volatile int32_t t29 = 17802312;

	t29 = ((x121^x122)<(x123-x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 1817;
	uint32_t x126 = 29519887U;
	int32_t x127 = INT32_MAX;
	volatile int32_t t30 = -1823637;

	t30 = ((x125^x126)<(x127-x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x129 = 3;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 150907260U;
	int32_t x132 = INT32_MIN;
	int32_t t31 = 150;

	t31 = ((x129^x130)<(x131-x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 5;
	uint8_t x134 = 120U;
	uint16_t x135 = 779U;
	volatile int8_t x136 = -57;
	volatile int32_t t32 = 1;

	t32 = ((x133^x134)<(x135-x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x138 = 13811U;
	static int16_t x139 = INT16_MIN;
	volatile int16_t x140 = 13967;
	int32_t t33 = 28;

	t33 = ((x137^x138)<(x139-x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int32_t x143 = -413;
	int64_t x144 = INT64_MIN;

	t34 = ((x141^x142)<(x143-x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 47296LLU;
	volatile int64_t x146 = 432LL;
	int16_t x147 = INT16_MIN;
	static volatile int32_t t35 = 189171;

	t35 = ((x145^x146)<(x147-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	int8_t x151 = -1;
	volatile int32_t t36 = -89176;

	t36 = ((x149^x150)<(x151-x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = 1;
	int8_t x155 = -8;
	volatile int32_t t37 = -3359283;

	t37 = ((x153^x154)<(x155-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x158 = 13548U;
	static int8_t x160 = 1;
	volatile int32_t t38 = -739581;

	t38 = ((x157^x158)<(x159-x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 4953LLU;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = 28;

	t39 = ((x161^x162)<(x163-x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x166 = 357346837222936859LLU;
	int32_t x167 = -511170;
	uint8_t x168 = UINT8_MAX;

	t40 = ((x165^x166)<(x167-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile int32_t x170 = -1;
	uint64_t x171 = 187LLU;
	uint64_t x172 = 98457413211585LLU;
	volatile int32_t t41 = 153816;

	t41 = ((x169^x170)<(x171-x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 312467365LLU;
	int32_t t42 = -3744806;

	t42 = ((x173^x174)<(x175-x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	static int64_t x178 = INT64_MAX;
	uint64_t x180 = UINT64_MAX;
	int32_t t43 = -1692;

	t43 = ((x177^x178)<(x179-x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 9373152332LLU;
	int32_t x183 = -1;
	volatile uint8_t x184 = UINT8_MAX;
	static int32_t t44 = -308105985;

	t44 = ((x181^x182)<(x183-x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -8;
	int8_t x186 = -1;
	static volatile int32_t x187 = -1;
	int64_t x188 = -1LL;
	volatile int32_t t45 = 15;

	t45 = ((x185^x186)<(x187-x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = 96;
	uint32_t x191 = 7U;
	uint8_t x192 = UINT8_MAX;

	t46 = ((x189^x190)<(x191-x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 19;
	static int32_t x198 = INT32_MIN;
	volatile int64_t x199 = -1LL;
	int64_t x200 = INT64_MIN;
	int32_t t47 = 1;

	t47 = ((x197^x198)<(x199-x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x203 = INT32_MIN;
	static int64_t x204 = -11059075944805094LL;
	static int32_t t48 = 353085;

	t48 = ((x201^x202)<(x203-x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = INT32_MIN;
	volatile int32_t x206 = -1;
	uint8_t x208 = 1U;
	volatile int32_t t49 = 1858;

	t49 = ((x205^x206)<(x207-x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	uint32_t x212 = 10512U;

	t50 = ((x209^x210)<(x211-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 186U;
	int32_t x218 = 0;
	volatile uint8_t x219 = 4U;
	volatile int8_t x220 = 14;
	int32_t t51 = -877382;

	t51 = ((x217^x218)<(x219-x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = 10100LL;
	static uint32_t x222 = 10257377U;
	int64_t x224 = -1930445706131LL;
	volatile int32_t t52 = -44629115;

	t52 = ((x221^x222)<(x223-x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = 1;
	uint16_t x226 = 10186U;
	volatile uint64_t x227 = 107343185LLU;
	int16_t x228 = -39;
	volatile int32_t t53 = 106601347;

	t53 = ((x225^x226)<(x227-x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x233 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MAX;
	volatile int32_t t54 = 1931157;

	t54 = ((x233^x234)<(x235-x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x238 = -1LL;
	int16_t x240 = 795;
	static int32_t t55 = -924899141;

	t55 = ((x237^x238)<(x239-x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x241 = 471U;
	int64_t x243 = -1LL;
	int32_t t56 = -37589;

	t56 = ((x241^x242)<(x243-x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 1U;
	uint8_t x250 = 28U;
	int8_t x251 = -17;
	int16_t x252 = INT16_MIN;
	int32_t t57 = 5080;

	t57 = ((x249^x250)<(x251-x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x253 = 108U;
	int32_t x254 = INT32_MAX;
	uint64_t x255 = 26LLU;
	uint64_t x256 = 18110LLU;

	t58 = ((x253^x254)<(x255-x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	static int8_t x258 = 3;
	volatile int64_t x259 = INT64_MIN;
	int64_t x260 = -1LL;
	volatile int32_t t59 = 935840363;

	t59 = ((x257^x258)<(x259-x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x265 = 10U;
	uint64_t x266 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t60 = 14;

	t60 = ((x265^x266)<(x267-x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -91;
	uint8_t x270 = 0U;
	int16_t x271 = -1155;
	int64_t x272 = INT64_MIN;
	int32_t t61 = 22;

	t61 = ((x269^x270)<(x271-x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x278 = INT64_MAX;
	static uint64_t x279 = 62LLU;
	int16_t x280 = 28;

	t62 = ((x277^x278)<(x279-x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -20;
	int64_t x282 = -4118738618398LL;
	int8_t x283 = 1;
	int64_t x284 = -1LL;
	static int32_t t63 = 26445499;

	t63 = ((x281^x282)<(x283-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 2118U;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t64 = 222986;

	t64 = ((x285^x286)<(x287-x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x289 = UINT16_MAX;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = -1LL;
	volatile uint32_t x292 = UINT32_MAX;

	t65 = ((x289^x290)<(x291-x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -1;
	static uint64_t x295 = UINT64_MAX;
	static int64_t x296 = INT64_MAX;
	int32_t t66 = -6285;

	t66 = ((x293^x294)<(x295-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x310 = 7117U;
	volatile int32_t x311 = 0;
	int8_t x312 = 4;
	volatile int32_t t67 = -1;

	t67 = ((x309^x310)<(x311-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 0U;
	uint64_t x314 = 3874175597LLU;
	int8_t x315 = INT8_MAX;
	static uint16_t x316 = 3U;
	volatile int32_t t68 = -699;

	t68 = ((x313^x314)<(x315-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = 1858U;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	int32_t t69 = 0;

	t69 = ((x321^x322)<(x323-x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = 725432LL;
	static volatile int64_t x326 = 6151238409728386LL;
	int32_t t70 = 1464;

	t70 = ((x325^x326)<(x327-x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x329 = 1U;
	volatile int16_t x330 = 8;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;

	t71 = ((x329^x330)<(x331-x332));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 1782667124U;
	static int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	volatile uint64_t x336 = UINT64_MAX;
	static volatile int32_t t72 = -61473;

	t72 = ((x333^x334)<(x335-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = 0;
	static uint8_t x342 = 55U;
	int64_t x343 = -1LL;
	volatile int16_t x344 = 1981;
	volatile int32_t t73 = 916;

	t73 = ((x341^x342)<(x343-x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x350 = 7U;
	int16_t x351 = -1;
	int32_t x352 = INT32_MIN;
	int32_t t74 = 3108;

	t74 = ((x349^x350)<(x351-x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MAX;
	volatile uint16_t x354 = 1142U;
	int16_t x355 = 146;
	int32_t t75 = 1027777411;

	t75 = ((x353^x354)<(x355-x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MIN;
	static int64_t x358 = INT64_MAX;
	volatile int32_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;

	t76 = ((x357^x358)<(x359-x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int64_t x362 = INT64_MAX;
	uint32_t x364 = 5811082U;
	int32_t t77 = -27208719;

	t77 = ((x361^x362)<(x363-x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x368 = INT16_MAX;
	static volatile int32_t t78 = -1;

	t78 = ((x365^x366)<(x367-x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x369 = INT16_MAX;
	int8_t x370 = -2;
	static uint64_t x372 = 828141422064143091LLU;
	volatile int32_t t79 = -34;

	t79 = ((x369^x370)<(x371-x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	uint16_t x374 = 1U;
	static int32_t x375 = INT32_MIN;
	int64_t x376 = -11499102300143514LL;
	int32_t t80 = -125623526;

	t80 = ((x373^x374)<(x375-x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x378 = INT16_MIN;
	int16_t x380 = 209;
	int32_t t81 = 106741;

	t81 = ((x377^x378)<(x379-x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = INT8_MAX;
	static int32_t x388 = -29715;
	int32_t t82 = 7233166;

	t82 = ((x385^x386)<(x387-x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MIN;
	static uint16_t x390 = UINT16_MAX;
	int64_t x391 = -1LL;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t83 = -707537813;

	t83 = ((x389^x390)<(x391-x392));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MAX;
	volatile uint32_t x396 = 5440U;
	int32_t t84 = 767317;

	t84 = ((x393^x394)<(x395-x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x397 = 752696U;
	volatile uint32_t x398 = 159859988U;
	int32_t x400 = INT32_MAX;
	volatile int32_t t85 = 2;

	t85 = ((x397^x398)<(x399-x400));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 377U;
	int16_t x402 = 7435;
	int8_t x403 = INT8_MIN;
	int32_t t86 = 1045170;

	t86 = ((x401^x402)<(x403-x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x405 = UINT32_MAX;
	volatile uint8_t x407 = 15U;
	uint64_t x408 = 26LLU;
	volatile int32_t t87 = -1;

	t87 = ((x405^x406)<(x407-x408));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x409 = 89094552114930115LL;
	uint32_t x410 = 1U;
	volatile int32_t t88 = 152634939;

	t88 = ((x409^x410)<(x411-x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	static uint32_t x414 = 523187U;
	volatile int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t89 = 271747440;

	t89 = ((x413^x414)<(x415-x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = 16246658798754010LL;
	int64_t x420 = INT64_MAX;

	t90 = ((x417^x418)<(x419-x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x421 = 6;
	volatile int16_t x422 = INT16_MIN;
	int16_t x423 = 48;
	volatile int16_t x424 = INT16_MIN;
	int32_t t91 = 49;

	t91 = ((x421^x422)<(x423-x424));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x425 = 896588;
	static uint16_t x426 = 8U;
	volatile int16_t x427 = INT16_MAX;
	int16_t x428 = -1;

	t92 = ((x425^x426)<(x427-x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = INT64_MAX;
	volatile uint8_t x430 = UINT8_MAX;
	int32_t x431 = -23;
	volatile int8_t x432 = INT8_MIN;
	volatile int32_t t93 = -104;

	t93 = ((x429^x430)<(x431-x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x434 = 611577194491LLU;
	int8_t x436 = INT8_MIN;
	static int32_t t94 = 3301;

	t94 = ((x433^x434)<(x435-x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x437 = 22544723160126LLU;
	static int32_t x438 = INT32_MAX;
	int32_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t95 = -14;

	t95 = ((x437^x438)<(x439-x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x441 = INT8_MAX;
	uint16_t x443 = 1387U;
	static uint16_t x444 = 30947U;
	static volatile int32_t t96 = 142148;

	t96 = ((x441^x442)<(x443-x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MIN;
	int64_t x450 = 1LL;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = 26998620LLU;
	int32_t t97 = 518432148;

	t97 = ((x449^x450)<(x451-x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x453 = INT64_MIN;
	static int8_t x454 = INT8_MAX;
	uint32_t x455 = 13U;
	int16_t x456 = -1;
	int32_t t98 = 29;

	t98 = ((x453^x454)<(x455-x456));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x457 = INT8_MIN;
	static int8_t x458 = 0;
	int32_t x460 = INT32_MAX;

	t99 = ((x457^x458)<(x459-x460));

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

