#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x15 = 1U;
static int32_t x16 = -1;
int32_t x22 = INT32_MIN;
int64_t x42 = 1502635896439658113LL;
int8_t x54 = INT8_MAX;
int16_t x58 = 6007;
int32_t t11 = 624346988;
int8_t x62 = INT8_MIN;
uint32_t x75 = 563353204U;
int32_t t15 = 435699;
volatile int32_t t16 = 165663051;
static int32_t x90 = INT32_MAX;
uint32_t x95 = 719008107U;
volatile uint64_t x105 = 1517452927LLU;
int64_t x107 = -1454160632LL;
static int16_t x108 = -1;
uint64_t x111 = 2467LLU;
int64_t x120 = INT64_MAX;
uint16_t x121 = 307U;
int16_t x123 = -1;
static uint8_t x129 = UINT8_MAX;
volatile uint8_t x133 = UINT8_MAX;
int32_t t26 = 207;
int64_t x176 = -1LL;
volatile int64_t x181 = INT64_MIN;
volatile int16_t x185 = INT16_MAX;
static uint64_t x188 = UINT64_MAX;
static int16_t x198 = -151;
uint16_t x199 = 171U;
static volatile int8_t x215 = -1;
uint16_t x219 = UINT16_MAX;
int64_t x224 = INT64_MIN;
int32_t t42 = 51737;
int8_t x225 = -1;
int32_t t43 = 0;
uint8_t x229 = 1U;
int32_t x234 = INT32_MAX;
static volatile int64_t x241 = -24221654LL;
int32_t x242 = INT32_MIN;
static volatile uint16_t x253 = 511U;
static int64_t x254 = 3511917823627605419LL;
int64_t x257 = INT64_MAX;
uint64_t x264 = 1320509297LLU;
volatile int32_t t50 = 3970005;
uint32_t x272 = 272145U;
uint8_t x273 = UINT8_MAX;
int32_t t53 = -384167;
int64_t x289 = -1LL;
static int64_t x314 = INT64_MIN;
int32_t x316 = -1;
volatile int32_t t61 = 111743236;
uint32_t x318 = 12516273U;
static volatile uint32_t x321 = 5U;
int8_t x322 = 51;
int64_t x328 = 6476028LL;
volatile int16_t x330 = INT16_MAX;
volatile int32_t t67 = 21545703;
int64_t x342 = INT64_MIN;
int64_t x343 = 1115182LL;
uint64_t x352 = UINT64_MAX;
volatile uint16_t x353 = UINT16_MAX;
volatile int32_t t71 = -17;
int64_t x357 = -1LL;
int32_t x359 = 1;
uint16_t x362 = 48U;
uint8_t x366 = 45U;
static volatile int8_t x367 = -1;
volatile int32_t t74 = -39154150;
int8_t x380 = -1;
uint64_t x393 = 635276732688380564LLU;
static int8_t x394 = INT8_MIN;
volatile uint32_t x403 = 3772989U;
int8_t x406 = -1;
volatile int32_t t81 = 58855265;
int16_t x417 = -1;
int32_t x427 = 1456;
int16_t x428 = -1;
static volatile int32_t t87 = 38565;
int16_t x434 = INT16_MAX;
uint16_t x436 = 10709U;
volatile int32_t t88 = 390909495;
volatile int16_t x437 = INT16_MAX;
static int32_t t89 = 549628;
uint8_t x444 = UINT8_MAX;
int32_t x451 = 18571;
int32_t t92 = -2;
int16_t x462 = INT16_MAX;
uint64_t x475 = UINT64_MAX;
int16_t x483 = INT16_MIN;
int32_t t98 = -4927313;


void f0(void) {
	uint64_t x1 = 31765LLU;
	static int16_t x2 = -1;
	int32_t x3 = -1;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 39700;

	t0 = ((x1%x2)<(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -221;
	volatile uint8_t x6 = 3U;
	int8_t x7 = 7;
	uint16_t x8 = 584U;
	volatile int32_t t1 = -7148208;

	t1 = ((x5%x6)<(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 227289618494876LL;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	static uint64_t x12 = UINT64_MAX;
	static volatile int32_t t2 = -7068927;

	t2 = ((x9%x10)<(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 8696U;
	uint64_t x14 = 31970LLU;
	volatile int32_t t3 = 1799626;

	t3 = ((x13%x14)<(x15*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 39LL;
	static int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 430044977;

	t4 = ((x17%x18)<(x19*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 47U;
	uint8_t x23 = 5U;
	uint8_t x24 = 0U;
	int32_t t5 = 24075;

	t5 = ((x21%x22)<(x23*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int8_t x26 = -1;
	int16_t x27 = -13;
	uint32_t x28 = 1426516735U;
	volatile int32_t t6 = -185493;

	t6 = ((x25%x26)<(x27*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 1;
	int32_t x34 = 1449967;
	int32_t x35 = INT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t7 = -218;

	t7 = ((x33%x34)<(x35*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	static uint64_t x43 = UINT64_MAX;
	static volatile int64_t x44 = INT64_MAX;
	volatile int32_t t8 = 17082298;

	t8 = ((x41%x42)<(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 6U;
	static uint8_t x46 = 7U;
	int64_t x47 = -1LL;
	int64_t x48 = 56799684LL;
	volatile int32_t t9 = 21740;

	t9 = ((x45%x46)<(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint32_t x55 = UINT32_MAX;
	static volatile uint16_t x56 = 31U;
	int32_t t10 = 1664607;

	t10 = ((x53%x54)<(x55*x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x59 = -1;
	int8_t x60 = 42;

	t11 = ((x57%x58)<(x59*x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x61 = INT16_MAX;
	uint32_t x63 = 7243740U;
	int32_t x64 = INT32_MAX;
	int32_t t12 = -2469115;

	t12 = ((x61%x62)<(x63*x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -125;
	volatile uint32_t x70 = UINT32_MAX;
	volatile uint64_t x71 = 3245877LLU;
	static int8_t x72 = INT8_MIN;
	int32_t t13 = 1208187;

	t13 = ((x69%x70)<(x71*x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 104LLU;
	int8_t x74 = -19;
	int16_t x76 = INT16_MIN;
	int32_t t14 = -457610856;

	t14 = ((x73%x74)<(x75*x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int8_t x78 = INT8_MAX;
	volatile int32_t x79 = INT32_MAX;
	volatile uint64_t x80 = UINT64_MAX;

	t15 = ((x77%x78)<(x79*x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = 3925U;
	uint16_t x87 = 14860U;
	uint32_t x88 = 71837960U;

	t16 = ((x85%x86)<(x87*x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	int64_t x91 = 72920LL;
	uint32_t x92 = 1014855078U;
	volatile int32_t t17 = 478;

	t17 = ((x89%x90)<(x91*x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = INT64_MIN;
	static uint16_t x94 = 56U;
	int32_t x96 = -401298;
	int32_t t18 = -12175196;

	t18 = ((x93%x94)<(x95*x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = 18;
	volatile uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 109U;
	static volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t19 = 186634;

	t19 = ((x101%x102)<(x103*x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = -1;
	volatile int32_t t20 = -286;

	t20 = ((x105%x106)<(x107*x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x109 = 1U;
	volatile int8_t x110 = INT8_MIN;
	static volatile int16_t x112 = INT16_MIN;
	int32_t t21 = 1682;

	t21 = ((x109%x110)<(x111*x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = 0;
	int32_t t22 = 734210;

	t22 = ((x117%x118)<(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x122 = INT64_MAX;
	int32_t x124 = -45581662;
	volatile int32_t t23 = 7;

	t23 = ((x121%x122)<(x123*x124));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = 0U;
	volatile int16_t x126 = -1;
	volatile int16_t x127 = INT16_MIN;
	uint8_t x128 = 93U;
	volatile int32_t t24 = -68828645;

	t24 = ((x125%x126)<(x127*x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x130 = 106U;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t25 = 12385;

	t25 = ((x129%x130)<(x131*x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x134 = INT64_MIN;
	static int64_t x135 = 53991LL;
	uint8_t x136 = 31U;

	t26 = ((x133%x134)<(x135*x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x137 = 0U;
	static int64_t x138 = INT64_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t27 = -1;

	t27 = ((x137%x138)<(x139*x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MAX;
	volatile int64_t x143 = -1LL;
	static int64_t x144 = 120882313LL;
	static int32_t t28 = -12;

	t28 = ((x141%x142)<(x143*x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -962LL;
	volatile int32_t x154 = -7790;
	int64_t x155 = -7279766219882738LL;
	int8_t x156 = INT8_MAX;
	int32_t t29 = 1;

	t29 = ((x153%x154)<(x155*x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = 55;
	static uint32_t x158 = 43562U;
	int32_t x159 = INT32_MAX;
	uint32_t x160 = 24073U;
	static volatile int32_t t30 = 1;

	t30 = ((x157%x158)<(x159*x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = 0;
	volatile int32_t x162 = INT32_MIN;
	uint32_t x163 = 15998U;
	uint8_t x164 = UINT8_MAX;
	int32_t t31 = -973;

	t31 = ((x161%x162)<(x163*x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = -21;
	static int64_t x174 = 3945LL;
	volatile int32_t x175 = -1;
	volatile int32_t t32 = 1;

	t32 = ((x173%x174)<(x175*x176));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x177 = 219U;
	int16_t x178 = -1107;
	uint64_t x179 = 12LLU;
	int32_t x180 = INT32_MIN;
	int32_t t33 = -204;

	t33 = ((x177%x178)<(x179*x180));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x182 = INT16_MIN;
	uint64_t x183 = 28857LLU;
	uint8_t x184 = UINT8_MAX;
	int32_t t34 = 3619;

	t34 = ((x181%x182)<(x183*x184));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MIN;
	int32_t t35 = 0;

	t35 = ((x185%x186)<(x187*x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = INT16_MAX;
	volatile uint16_t x190 = 2206U;
	volatile int32_t x191 = -1;
	int16_t x192 = 121;
	static volatile int32_t t36 = 3968563;

	t36 = ((x189%x190)<(x191*x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x197 = INT8_MIN;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = ((x197%x198)<(x199*x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = 21U;
	static uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MAX;
	volatile uint8_t x204 = 0U;
	static volatile int32_t t38 = 5015;

	t38 = ((x201%x202)<(x203*x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x209 = -1;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 95U;
	static volatile uint8_t x212 = 14U;
	volatile int32_t t39 = 477934189;

	t39 = ((x209%x210)<(x211*x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = -1LL;
	static int16_t x214 = INT16_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t40 = 290215118;

	t40 = ((x213%x214)<(x215*x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = 1;
	uint64_t x218 = UINT64_MAX;
	volatile uint32_t x220 = 2U;
	static volatile int32_t t41 = -37;

	t41 = ((x217%x218)<(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	static volatile uint64_t x223 = UINT64_MAX;

	t42 = ((x221%x222)<(x223*x224));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x226 = 2401366;
	static uint8_t x227 = 3U;
	static uint16_t x228 = 8752U;

	t43 = ((x225%x226)<(x227*x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x230 = -1;
	int16_t x231 = 124;
	int64_t x232 = 263862343LL;
	volatile int32_t t44 = -440778196;

	t44 = ((x229%x230)<(x231*x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x233 = -1;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	volatile int32_t t45 = 2837461;

	t45 = ((x233%x234)<(x235*x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x243 = 2U;
	static uint8_t x244 = UINT8_MAX;
	static int32_t t46 = 25589;

	t46 = ((x241%x242)<(x243*x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MAX;
	static int64_t x250 = INT64_MIN;
	static int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t47 = -36019;

	t47 = ((x249%x250)<(x251*x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x255 = 1U;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t48 = 0;

	t48 = ((x253%x254)<(x255*x256));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x258 = 5023117U;
	int8_t x259 = INT8_MAX;
	int16_t x260 = INT16_MIN;
	static int32_t t49 = 1052;

	t49 = ((x257%x258)<(x259*x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x261 = INT8_MIN;
	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;

	t50 = ((x261%x262)<(x263*x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = -27;
	static int8_t x267 = INT8_MIN;
	int32_t x268 = -1;
	volatile int32_t t51 = 88495;

	t51 = ((x265%x266)<(x267*x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = -1;
	static int16_t x270 = 1;
	uint32_t x271 = 16146819U;
	int32_t t52 = 28;

	t52 = ((x269%x270)<(x271*x272));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MAX;

	t53 = ((x273%x274)<(x275*x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -182;
	volatile int32_t t54 = 44566;

	t54 = ((x277%x278)<(x279*x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x285 = 30416165U;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	int32_t x288 = -1;
	volatile int32_t t55 = -33;

	t55 = ((x285%x286)<(x287*x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x290 = -6;
	uint8_t x291 = 5U;
	static volatile int8_t x292 = INT8_MIN;
	static volatile int32_t t56 = 24066157;

	t56 = ((x289%x290)<(x291*x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = -1;
	static int64_t x298 = -1018521318137LL;
	static uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t57 = 7630513;

	t57 = ((x297%x298)<(x299*x300));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = -1;
	uint32_t x302 = 2564U;
	volatile int8_t x303 = -1;
	int16_t x304 = 0;
	int32_t t58 = -1003;

	t58 = ((x301%x302)<(x303*x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x305 = 173915;
	static volatile int16_t x306 = -1;
	int8_t x307 = -57;
	int8_t x308 = INT8_MAX;
	int32_t t59 = 0;

	t59 = ((x305%x306)<(x307*x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x309 = 127LLU;
	uint64_t x310 = 8071271LLU;
	uint64_t x311 = 41830800807LLU;
	int16_t x312 = INT16_MIN;
	int32_t t60 = -13;

	t60 = ((x309%x310)<(x311*x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x313 = -1LL;
	volatile uint16_t x315 = UINT16_MAX;

	t61 = ((x313%x314)<(x315*x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = INT8_MIN;
	volatile int16_t x319 = -1;
	uint64_t x320 = 600539269721898066LLU;
	volatile int32_t t62 = 471056572;

	t62 = ((x317%x318)<(x319*x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x323 = 3U;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t63 = 99;

	t63 = ((x321%x322)<(x323*x324));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MIN;
	static uint32_t x327 = 21U;
	volatile int32_t t64 = -3;

	t64 = ((x325%x326)<(x327*x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = -38;
	static volatile int16_t x331 = 15163;
	int8_t x332 = -61;
	volatile int32_t t65 = -2772391;

	t65 = ((x329%x330)<(x331*x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MAX;
	static int64_t x334 = INT64_MIN;
	uint64_t x335 = 3451526681LLU;
	int16_t x336 = INT16_MAX;
	static volatile int32_t t66 = -385380;

	t66 = ((x333%x334)<(x335*x336));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = 53;
	int16_t x338 = INT16_MIN;
	int8_t x339 = 1;
	volatile int8_t x340 = INT8_MIN;

	t67 = ((x337%x338)<(x339*x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x341 = 13886U;
	int32_t x344 = -1;
	int32_t t68 = -15588513;

	t68 = ((x341%x342)<(x343*x344));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x345 = 25314600U;
	int64_t x346 = 31492144278228207LL;
	uint32_t x347 = 1991U;
	static int8_t x348 = INT8_MAX;
	int32_t t69 = -66;

	t69 = ((x345%x346)<(x347*x348));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = UINT32_MAX;
	volatile int32_t t70 = 3007623;

	t70 = ((x349%x350)<(x351*x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x354 = 1U;
	static volatile int16_t x355 = INT16_MAX;
	uint64_t x356 = 982676385910LLU;

	t71 = ((x353%x354)<(x355*x356));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x358 = -1;
	static int16_t x360 = INT16_MIN;
	int32_t t72 = 153459;

	t72 = ((x357%x358)<(x359*x360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x361 = 5U;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t73 = -2;

	t73 = ((x361%x362)<(x363*x364));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x368 = INT16_MIN;

	t74 = ((x365%x366)<(x367*x368));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	static uint64_t x379 = 857936621LLU;
	int32_t t75 = -169135;

	t75 = ((x377%x378)<(x379*x380));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = -45;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MAX;
	volatile int32_t t76 = 29;

	t76 = ((x381%x382)<(x383*x384));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 1U;
	uint16_t x388 = 8159U;
	volatile int32_t t77 = -186;

	t77 = ((x385%x386)<(x387*x388));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = 569045458430430046LLU;
	uint64_t x391 = 4LLU;
	volatile int16_t x392 = -1;
	static int32_t t78 = 3;

	t78 = ((x389%x390)<(x391*x392));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t79 = 203;

	t79 = ((x393%x394)<(x395*x396));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = -1;
	volatile uint32_t x402 = 704994482U;
	uint64_t x404 = 2131671LLU;
	static volatile int32_t t80 = -266;

	t80 = ((x401%x402)<(x403*x404));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x405 = 57063729;
	int8_t x407 = -1;
	int32_t x408 = 7897553;

	t81 = ((x405%x406)<(x407*x408));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = 0;
	uint64_t x410 = UINT64_MAX;
	static int16_t x411 = 1057;
	uint32_t x412 = UINT32_MAX;
	int32_t t82 = -354;

	t82 = ((x409%x410)<(x411*x412));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = 7;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = INT16_MIN;
	int32_t t83 = 1;

	t83 = ((x413%x414)<(x415*x416));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x418 = -1LL;
	volatile uint8_t x419 = UINT8_MAX;
	static uint32_t x420 = 194674262U;
	int32_t t84 = 6572062;

	t84 = ((x417%x418)<(x419*x420));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = -4810101;
	static volatile int32_t x422 = -1;
	int16_t x423 = INT16_MAX;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t85 = 6;

	t85 = ((x421%x422)<(x423*x424));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x425 = UINT32_MAX;
	int8_t x426 = 3;
	int32_t t86 = -530707;

	t86 = ((x425%x426)<(x427*x428));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x429 = 22316LL;
	int64_t x430 = INT64_MIN;
	volatile int8_t x431 = -1;
	uint64_t x432 = UINT64_MAX;

	t87 = ((x429%x430)<(x431*x432));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x433 = 74U;
	volatile int64_t x435 = -1LL;

	t88 = ((x433%x434)<(x435*x436));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x438 = INT64_MIN;
	int32_t x439 = 1;
	int64_t x440 = 2293533224LL;

	t89 = ((x437%x438)<(x439*x440));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x441 = UINT8_MAX;
	static volatile uint16_t x442 = UINT16_MAX;
	uint32_t x443 = 41650U;
	static volatile int32_t t90 = 1031;

	t90 = ((x441%x442)<(x443*x444));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x449 = 12252;
	int16_t x450 = -42;
	uint8_t x452 = 24U;
	int32_t t91 = -1396976;

	t91 = ((x449%x450)<(x451*x452));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x457 = 7016516U;
	int16_t x458 = -7;
	volatile int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MAX;

	t92 = ((x457%x458)<(x459*x460));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x461 = INT32_MIN;
	static int32_t x463 = INT32_MIN;
	static uint64_t x464 = UINT64_MAX;
	volatile int32_t t93 = 3377137;

	t93 = ((x461%x462)<(x463*x464));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x465 = 1U;
	uint64_t x466 = 51933631LLU;
	volatile int8_t x467 = INT8_MIN;
	int32_t x468 = -1;
	volatile int32_t t94 = -4151;

	t94 = ((x465%x466)<(x467*x468));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MAX;
	volatile int16_t x471 = -1;
	int64_t x472 = INT64_MAX;
	volatile int32_t t95 = -50;

	t95 = ((x469%x470)<(x471*x472));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MIN;
	uint64_t x474 = 3LLU;
	int64_t x476 = 1254450506LL;
	static volatile int32_t t96 = -12569;

	t96 = ((x473%x474)<(x475*x476));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = -39850LL;
	static volatile int8_t x482 = -1;
	static int64_t x484 = 3LL;
	volatile int32_t t97 = 1542;

	t97 = ((x481%x482)<(x483*x484));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x489 = -1;
	uint64_t x490 = 263948141LLU;
	int16_t x491 = 7;
	int16_t x492 = -4594;

	t98 = ((x489%x490)<(x491*x492));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x493 = INT32_MIN;
	int64_t x494 = INT64_MAX;
	int32_t x495 = -1058563955;
	uint32_t x496 = 479390522U;
	int32_t t99 = 319694533;

	t99 = ((x493%x494)<(x495*x496));

	if (t99 != 1) { NG(); } else { ; }
	
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

