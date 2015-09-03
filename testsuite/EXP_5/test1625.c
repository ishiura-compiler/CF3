#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 250671U;
static volatile uint8_t x5 = 0U;
volatile int64_t x8 = -15796LL;
int8_t x10 = 0;
static int8_t x14 = -6;
uint16_t x18 = 28601U;
volatile int8_t x23 = INT8_MAX;
uint8_t x37 = 42U;
int32_t x53 = -1;
int8_t x56 = -3;
int8_t x57 = INT8_MAX;
uint64_t x60 = UINT64_MAX;
volatile int32_t t14 = -300116;
int16_t x68 = 9698;
volatile int8_t x69 = INT8_MIN;
volatile int32_t x70 = -209499;
uint8_t x81 = 7U;
volatile int32_t t20 = 318880;
static volatile uint64_t t21 = 6545204469073LLU;
static volatile int32_t t23 = 466127;
int8_t x97 = 0;
int8_t x100 = 3;
volatile int32_t t24 = -187918935;
static int8_t x102 = INT8_MIN;
int32_t x105 = -1;
int16_t x110 = -1;
static uint64_t x111 = 30607704612LLU;
static int16_t x123 = -1;
static volatile int32_t t33 = 6;
int32_t t34 = -31272018;
uint16_t x144 = 4007U;
int64_t x145 = -12789578803472698LL;
int8_t x151 = INT8_MAX;
int32_t t38 = INT32_MIN;
uint64_t x158 = 369524958298614LLU;
static volatile int32_t t39 = -2414515;
static volatile uint32_t t40 = 9514347U;
int16_t x170 = -28;
int64_t t42 = 5945595032893323LL;
volatile int16_t x175 = -1;
int32_t x177 = INT32_MIN;
volatile int64_t x178 = INT64_MIN;
int32_t t45 = -15269828;
static volatile int16_t x186 = -1;
int32_t x199 = INT32_MIN;
int64_t t49 = -42LL;
static volatile int8_t x201 = INT8_MIN;
uint16_t x202 = 6591U;
static int64_t x204 = -1LL;
static int64_t x206 = INT64_MIN;
volatile int32_t t51 = -10;
volatile uint64_t t53 = 8110553423155LLU;
int32_t x224 = -1;
uint32_t x234 = UINT32_MAX;
volatile uint64_t x238 = 15883340LLU;
int32_t t59 = 721583399;
int8_t x241 = INT8_MAX;
static volatile int32_t t62 = -1;
uint32_t x255 = 1012587U;
uint16_t x256 = UINT16_MAX;
int64_t x267 = -1LL;
int32_t x271 = INT32_MIN;
int32_t t70 = -20177;
int64_t x290 = INT64_MAX;
int32_t x292 = -1396;
uint16_t x293 = 6U;
int16_t x295 = INT16_MAX;
int32_t x305 = 140637;
uint16_t x308 = 8271U;
int16_t x313 = -1314;
int32_t t78 = -24495;
int8_t x318 = INT8_MIN;
volatile int32_t x321 = -1;
static uint32_t x323 = 2848U;
static volatile int32_t t81 = -159;
uint8_t x329 = 3U;
uint32_t x340 = 20468472U;
int32_t t86 = 666;
int16_t x354 = -1;
int8_t x356 = 0;
volatile int32_t x357 = 42395736;
volatile int16_t x376 = -15;
uint64_t x380 = UINT64_MAX;
static volatile int16_t x381 = INT16_MIN;
int32_t t95 = -2136882;
int32_t x385 = -71215306;
int8_t x391 = -1;
int16_t x394 = INT16_MIN;
volatile uint32_t x397 = 1726375U;
volatile int32_t x399 = -1;


void f0(void) {
	uint32_t x1 = 60U;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = 0;
	volatile int64_t x4 = 1774911LL;

	t0 = (x1^((x2<=x3)==x4));

	if (t0 != 60U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int32_t x7 = 4;
	int32_t t1 = 1878;

	t1 = (x5^((x6<=x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -13;
	volatile int64_t x11 = -1218124821679774LL;
	uint64_t x12 = 416334128861874450LLU;
	int32_t t2 = 0;

	t2 = (x9^((x10<=x11)==x12));

	if (t2 != -13) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 5U;
	int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -3;

	t3 = (x13^((x14<=x15)==x16));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint32_t x19 = UINT32_MAX;
	volatile uint16_t x20 = 103U;
	int32_t t4 = -496;

	t4 = (x17^((x18<=x19)==x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	uint32_t x22 = 11148U;
	int16_t x24 = -9822;
	int32_t t5 = -5;

	t5 = (x21^((x22<=x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	int64_t x27 = -876231LL;
	int32_t x28 = -1;
	int32_t t6 = 98679905;

	t6 = (x25^((x26<=x27)==x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	static int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 9U;
	volatile int32_t t7 = 0;

	t7 = (x29^((x30<=x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int8_t x34 = -1;
	int64_t x35 = INT64_MAX;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x33^((x34<=x35)==x36));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = 5778U;
	int32_t x39 = -712910;
	uint8_t x40 = 2U;
	volatile int32_t t9 = 560;

	t9 = (x37^((x38<=x39)==x40));

	if (t9 != 42) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x42 = 301;
	int8_t x43 = INT8_MIN;
	int32_t x44 = 6324130;
	int32_t t10 = INT32_MIN;

	t10 = (x41^((x42<=x43)==x44));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 10U;
	int8_t x46 = INT8_MAX;
	volatile int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 11643;

	t11 = (x45^((x46<=x47)==x48));

	if (t11 != 10) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 215U;
	static int64_t x50 = -52860898144LL;
	int16_t x51 = 5732;
	volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -19;

	t12 = (x49^((x50<=x51)==x52));

	if (t12 != 215) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 4257LLU;
	int16_t x55 = INT16_MIN;
	static int32_t t13 = -22;

	t13 = (x53^((x54<=x55)==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	uint64_t x59 = 218802LLU;

	t14 = (x57^((x58<=x59)==x60));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static volatile int64_t x62 = -180426284444115448LL;
	int32_t x63 = INT32_MIN;
	int16_t x64 = 3;
	volatile int32_t t15 = 16;

	t15 = (x61^((x62<=x63)==x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = -1;
	uint16_t x67 = UINT16_MAX;
	static volatile int32_t t16 = -1405;

	t16 = (x65^((x66<=x67)==x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x71 = -11;
	static int32_t x72 = -1;
	int32_t t17 = 1613;

	t17 = (x69^((x70<=x71)==x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 3291U;
	int8_t x76 = 1;
	static volatile int32_t t18 = INT32_MIN;

	t18 = (x73^((x74<=x75)==x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	uint32_t x79 = 3U;
	int16_t x80 = 25;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x77^((x78<=x79)==x80));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 7U;
	int16_t x83 = 2824;
	volatile int64_t x84 = INT64_MAX;

	t20 = (x81^((x82<=x83)==x84));

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2058030904390934LLU;
	volatile int16_t x86 = INT16_MAX;
	static uint32_t x87 = 33943U;
	int8_t x88 = INT8_MAX;

	t21 = (x85^((x86<=x87)==x88));

	if (t21 != 2058030904390934LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	volatile int64_t x90 = INT64_MIN;
	volatile int64_t x91 = 3LL;
	int32_t x92 = -1;
	static int32_t t22 = -1837059;

	t22 = (x89^((x90<=x91)==x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	uint16_t x94 = 15U;
	static int16_t x95 = INT16_MIN;
	volatile int8_t x96 = INT8_MIN;

	t23 = (x93^((x94<=x95)==x96));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;

	t24 = (x97^((x98<=x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x103 = -3592;
	static int16_t x104 = INT16_MIN;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (x101^((x102<=x103)==x104));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = 911535941LL;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 1;

	t26 = (x105^((x106<=x107)==x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x109^((x110<=x111)==x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 49U;
	int32_t x114 = -1;
	volatile uint32_t x115 = 2U;
	int8_t x116 = -27;
	static int32_t t28 = 191;

	t28 = (x113^((x114<=x115)==x116));

	if (t28 != 49) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 4959U;
	static int32_t x118 = 505123;
	static int16_t x119 = -1;
	static volatile int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = -147;

	t29 = (x117^((x118<=x119)==x120));

	if (t29 != 4959) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1896;
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = -1;
	int32_t t30 = 27312;

	t30 = (x121^((x122<=x123)==x124));

	if (t30 != -1896) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 1848LLU;
	volatile int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	uint8_t x128 = UINT8_MAX;
	uint64_t t31 = 153686LLU;

	t31 = (x125^((x126<=x127)==x128));

	if (t31 != 1848LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint32_t x130 = 10U;
	uint16_t x131 = 1U;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 1140;

	t32 = (x129^((x130<=x131)==x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 34781;
	int32_t x134 = -833685763;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -1;

	t33 = (x133^((x134<=x135)==x136));

	if (t33 != 34781) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 21275325181173065LLU;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (x137^((x138<=x139)==x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 1405U;
	int64_t x142 = 0LL;
	static int8_t x143 = INT8_MIN;
	static volatile int32_t t35 = -18695;

	t35 = (x141^((x142<=x143)==x144));

	if (t35 != 1405) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x146 = INT64_MIN;
	static int32_t x147 = -75;
	int64_t x148 = 9242910380333630LL;
	int64_t t36 = 8418412510254685LL;

	t36 = (x145^((x146<=x147)==x148));

	if (t36 != -12789578803472698LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = 13;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = INT32_MIN;

	t37 = (x149^((x150<=x151)==x152));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = INT32_MIN;
	int64_t x154 = 1937LL;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 1868285565174424054LLU;

	t38 = (x153^((x154<=x155)==x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 0;
	static int16_t x159 = -1;
	uint64_t x160 = 10102247LLU;

	t39 = (x157^((x158<=x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 45U;
	uint16_t x162 = 161U;
	static volatile uint16_t x163 = 10U;
	static int8_t x164 = 18;

	t40 = (x161^((x162<=x163)==x164));

	if (t40 != 45U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 14865U;
	int32_t x166 = 335407647;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = 47;
	static volatile uint32_t t41 = 53919586U;

	t41 = (x165^((x166<=x167)==x168));

	if (t41 != 14865U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	volatile int8_t x171 = 1;
	static volatile int64_t x172 = INT64_MIN;

	t42 = (x169^((x170<=x171)==x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MAX;
	volatile int8_t x174 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x173^((x174<=x175)==x176));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x177^((x178<=x179)==x180));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MAX;
	int64_t x182 = 12863475631407LL;
	int16_t x183 = -1;
	static int64_t x184 = INT64_MIN;

	t45 = (x181^((x182<=x183)==x184));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 13394850LLU;
	int8_t x187 = -1;
	volatile int64_t x188 = INT64_MAX;
	uint64_t t46 = 201LLU;

	t46 = (x185^((x186<=x187)==x188));

	if (t46 != 13394850LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 4726;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 405U;
	static uint32_t x192 = 9208433U;
	static int32_t t47 = -85932;

	t47 = (x189^((x190<=x191)==x192));

	if (t47 != 4726) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -205557817227100LL;
	volatile uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 2080071916529LLU;
	uint32_t x196 = 581536U;
	volatile int64_t t48 = -895755LL;

	t48 = (x193^((x194<=x195)==x196));

	if (t48 != -205557817227100LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = 0;
	int16_t x200 = 0;

	t49 = (x197^((x198<=x199)==x200));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x203 = 16LLU;
	int32_t t50 = -468903;

	t50 = (x201^((x202<=x203)==x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int16_t x207 = 4;
	int32_t x208 = INT32_MIN;

	t51 = (x205^((x206<=x207)==x208));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = 3;
	int64_t x210 = -30561714143011452LL;
	static int32_t x211 = -1;
	int16_t x212 = -1;
	volatile int32_t t52 = -4582;

	t52 = (x209^((x210<=x211)==x212));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 11LLU;
	int64_t x214 = INT64_MIN;
	static volatile int8_t x215 = 1;
	volatile int16_t x216 = INT16_MAX;

	t53 = (x213^((x214<=x215)==x216));

	if (t53 != 11LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static int8_t x219 = 26;
	uint64_t x220 = 9LLU;
	int32_t t54 = 114906356;

	t54 = (x217^((x218<=x219)==x220));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -6608;
	volatile int64_t x222 = -1LL;
	volatile int16_t x223 = INT16_MIN;
	volatile int32_t t55 = -2;

	t55 = (x221^((x222<=x223)==x224));

	if (t55 != -6608) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	static int32_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = INT16_MAX;
	int32_t t56 = 7;

	t56 = (x225^((x226<=x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	volatile uint16_t x230 = 6U;
	uint8_t x231 = 1U;
	volatile int8_t x232 = 1;
	uint32_t t57 = UINT32_MAX;

	t57 = (x229^((x230<=x231)==x232));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	static uint64_t x235 = 5659373553LLU;
	static int8_t x236 = INT8_MAX;
	int64_t t58 = INT64_MIN;

	t58 = (x233^((x234<=x235)==x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = -3;

	t59 = (x237^((x238<=x239)==x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x242 = 53U;
	int64_t x243 = INT64_MIN;
	int32_t x244 = -1;
	int32_t t60 = -998299428;

	t60 = (x241^((x242<=x243)==x244));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	static int16_t x246 = 524;
	int32_t x247 = 17;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 58;

	t61 = (x245^((x246<=x247)==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 51U;
	static int64_t x250 = INT64_MAX;
	int8_t x251 = 23;
	int8_t x252 = INT8_MIN;

	t62 = (x249^((x250<=x251)==x252));

	if (t62 != 51) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	int32_t t63 = 232042472;

	t63 = (x253^((x254<=x255)==x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	uint64_t x259 = 34973952687848499LLU;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x257^((x258<=x259)==x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	static uint64_t x262 = 219552434284827656LLU;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -127003836489372303LL;
	int32_t t65 = -117;

	t65 = (x261^((x262<=x263)==x264));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -1324703;
	static volatile int8_t x266 = 1;
	volatile int16_t x268 = 0;
	int32_t t66 = 53;

	t66 = (x265^((x266<=x267)==x268));

	if (t66 != -1324704) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int8_t x270 = INT8_MIN;
	uint32_t x272 = 90574U;
	int32_t t67 = 2795;

	t67 = (x269^((x270<=x271)==x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = -1;
	int8_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x273^((x274<=x275)==x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -6735;
	uint8_t x278 = 51U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = -1;
	static int32_t t69 = 5740;

	t69 = (x277^((x278<=x279)==x280));

	if (t69 != -6735) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	volatile uint64_t x282 = 850691023335LLU;
	volatile int8_t x283 = 1;
	volatile uint8_t x284 = 0U;

	t70 = (x281^((x282<=x283)==x284));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1U;
	static volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = 424U;
	static int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = 0;

	t71 = (x285^((x286<=x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile int64_t x291 = 5928076LL;
	volatile int32_t t72 = 7;

	t72 = (x289^((x290<=x291)==x292));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x294 = 7U;
	int8_t x296 = 14;
	int32_t t73 = 366211788;

	t73 = (x293^((x294<=x295)==x296));

	if (t73 != 6) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	volatile int32_t x298 = 63742;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = -1LL;
	static volatile int32_t t74 = INT32_MIN;

	t74 = (x297^((x298<=x299)==x300));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint8_t x302 = 1U;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 130077050U;
	int32_t t75 = 389;

	t75 = (x301^((x302<=x303)==x304));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x306 = -22354LL;
	uint16_t x307 = 26178U;
	int32_t t76 = -2833826;

	t76 = (x305^((x306<=x307)==x308));

	if (t76 != 140637) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 29683579746254LL;
	static volatile int8_t x310 = 18;
	int64_t x311 = -7LL;
	int64_t x312 = -1LL;
	volatile int64_t t77 = 15LL;

	t77 = (x309^((x310<=x311)==x312));

	if (t77 != 29683579746254LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = UINT8_MAX;
	volatile uint32_t x315 = 27688660U;
	int8_t x316 = -57;

	t78 = (x313^((x314<=x315)==x316));

	if (t78 != -1314) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static int32_t x319 = INT32_MAX;
	uint64_t x320 = UINT64_MAX;
	static int32_t t79 = -10578;

	t79 = (x317^((x318<=x319)==x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = -1;
	int32_t x324 = -1;
	volatile int32_t t80 = -628108856;

	t80 = (x321^((x322<=x323)==x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = 0;
	static int64_t x328 = 598394792LL;

	t81 = (x325^((x326<=x327)==x328));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 481716LLU;
	uint16_t x331 = 2U;
	volatile uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -128644069;

	t82 = (x329^((x330<=x331)==x332));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MIN;
	volatile int8_t x335 = 6;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = 629986946;

	t83 = (x333^((x334<=x335)==x336));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 949U;
	uint8_t x338 = UINT8_MAX;
	volatile uint64_t x339 = UINT64_MAX;
	static volatile int32_t t84 = -43876776;

	t84 = (x337^((x338<=x339)==x340));

	if (t84 != 949) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	static int32_t x342 = -5;
	uint32_t x343 = UINT32_MAX;
	static int8_t x344 = INT8_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x341^((x342<=x343)==x344));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -6;
	uint32_t x346 = 43605U;
	int32_t x347 = INT32_MAX;
	static volatile int64_t x348 = INT64_MAX;

	t86 = (x345^((x346<=x347)==x348));

	if (t86 != -6) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 27U;
	volatile int64_t x350 = 375084081LL;
	uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 683767937886915048LLU;
	int32_t t87 = 6146;

	t87 = (x349^((x350<=x351)==x352));

	if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int32_t x355 = INT32_MAX;
	static volatile int32_t t88 = INT32_MIN;

	t88 = (x353^((x354<=x355)==x356));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -3111;
	int64_t x359 = -6189LL;
	uint8_t x360 = 4U;
	volatile int32_t t89 = 790;

	t89 = (x357^((x358<=x359)==x360));

	if (t89 != 42395736) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	int32_t x362 = -1;
	uint32_t x363 = 19767U;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 1;

	t90 = (x361^((x362<=x363)==x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 98U;
	static volatile int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = 2524356157LLU;
	volatile int32_t t91 = -141;

	t91 = (x365^((x366<=x367)==x368));

	if (t91 != 98) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1818;
	volatile uint32_t x370 = 30U;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -2;
	static int32_t t92 = 29986;

	t92 = (x369^((x370<=x371)==x372));

	if (t92 != -1818) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	int16_t x374 = 39;
	uint16_t x375 = 28U;
	volatile int32_t t93 = 1300012;

	t93 = (x373^((x374<=x375)==x376));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = -2;
	int64_t t94 = INT64_MIN;

	t94 = (x377^((x378<=x379)==x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 33U;
	volatile int8_t x384 = INT8_MAX;

	t95 = (x381^((x382<=x383)==x384));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	static volatile uint8_t x387 = UINT8_MAX;
	int64_t x388 = INT64_MAX;
	static int32_t t96 = -61565;

	t96 = (x385^((x386<=x387)==x388));

	if (t96 != -71215306) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MIN;
	int32_t x390 = -112;
	int8_t x392 = INT8_MIN;
	int32_t t97 = INT32_MIN;

	t97 = (x389^((x390<=x391)==x392));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = 2;
	int8_t x395 = -1;
	int16_t x396 = -7;
	int32_t t98 = -218025250;

	t98 = (x393^((x394<=x395)==x396));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = UINT8_MAX;
	int32_t x400 = INT32_MIN;
	uint32_t t99 = 2U;

	t99 = (x397^((x398<=x399)==x400));

	if (t99 != 1726375U) { NG(); } else { ; }
	
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

