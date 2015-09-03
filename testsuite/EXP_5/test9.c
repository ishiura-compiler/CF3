#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int32_t x2 = INT32_MAX;
uint32_t x13 = 292282139U;
int32_t t4 = -1488;
uint32_t x32 = UINT32_MAX;
int32_t t7 = -19;
uint8_t x38 = 28U;
volatile int32_t x39 = -1;
static volatile int64_t x40 = -76396012LL;
int16_t x47 = INT16_MIN;
uint8_t x55 = 0U;
static int32_t t11 = 130;
static volatile int32_t x58 = 1;
volatile uint16_t x59 = UINT16_MAX;
volatile int16_t x70 = INT16_MIN;
uint64_t x71 = UINT64_MAX;
int32_t x78 = -1249;
uint64_t x83 = 5391824LLU;
static uint64_t x88 = 4189405878146157350LLU;
volatile int32_t t18 = 22;
uint32_t x96 = 127430684U;
int32_t x100 = -1594;
uint32_t x102 = 121671913U;
static volatile int32_t t22 = 0;
uint32_t x114 = UINT32_MAX;
volatile int8_t x115 = -1;
static volatile uint8_t x116 = 1U;
int32_t t25 = -592657;
volatile int32_t x119 = -1;
static int64_t x126 = 1LL;
uint64_t x138 = UINT64_MAX;
static volatile int32_t t30 = -1098788;
static uint64_t x151 = 100LLU;
volatile int32_t t32 = -812521584;
volatile int32_t x160 = INT32_MIN;
int8_t x171 = INT8_MAX;
static uint16_t x173 = 122U;
int16_t x174 = INT16_MAX;
static volatile int32_t t37 = -131888324;
int32_t x177 = -1;
int32_t t41 = -965;
static volatile uint32_t x195 = 6519U;
volatile int32_t t42 = 0;
static uint64_t x201 = UINT64_MAX;
volatile int32_t t44 = 945662;
static uint64_t x220 = UINT64_MAX;
static int8_t x223 = INT8_MAX;
int32_t x225 = INT32_MAX;
uint16_t x236 = UINT16_MAX;
volatile uint16_t x238 = 84U;
uint8_t x246 = 58U;
uint16_t x248 = 1713U;
static int16_t x254 = INT16_MIN;
uint32_t x255 = UINT32_MAX;
uint16_t x256 = UINT16_MAX;
volatile uint16_t x259 = 3086U;
int64_t x260 = INT64_MIN;
int64_t x262 = INT64_MAX;
uint64_t x274 = 2784653186643LLU;
int32_t t58 = -2570;
static int64_t x277 = 462224439551999LL;
volatile int32_t t60 = 83;
static uint32_t x296 = UINT32_MAX;
int8_t x314 = 1;
int32_t x321 = INT32_MIN;
static int64_t x325 = INT64_MAX;
int32_t t71 = 90855;
int32_t x346 = INT32_MIN;
uint8_t x348 = UINT8_MAX;
int32_t x349 = INT32_MIN;
int64_t x353 = -1LL;
uint64_t x357 = 32797542323230810LLU;
static int32_t x369 = -1;
int32_t t77 = -3987900;
volatile uint32_t x377 = UINT32_MAX;
int32_t x389 = INT32_MAX;
uint32_t x391 = 102U;
int8_t x394 = -1;
static int32_t x395 = -1;
volatile int8_t x400 = -5;
volatile uint16_t x412 = UINT16_MAX;
uint16_t x431 = 24749U;
int64_t x432 = INT64_MAX;
volatile int32_t t88 = -14240500;
volatile uint8_t x438 = 93U;
volatile int32_t t90 = -698551;
volatile uint64_t x445 = 161876456LLU;
uint32_t x453 = 22551331U;
int32_t t93 = 156501499;
static volatile int32_t t94 = -343;
int64_t x467 = -1LL;
static uint8_t x470 = UINT8_MAX;
volatile int64_t x472 = -28129447813229509LL;
volatile int32_t x477 = INT32_MIN;
volatile int32_t t98 = -1040436324;
uint32_t x487 = UINT32_MAX;
static int64_t x488 = -455335319499LL;


void f0(void) {
	int16_t x3 = -1;
	uint32_t x4 = 5674462U;
	static volatile int32_t t0 = -406108;

	t0 = (x1<((x2+x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 27350600064LLU;
	static int8_t x7 = INT8_MIN;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 1576217;

	t1 = (x5<((x6+x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint32_t x10 = 0U;
	static int16_t x11 = 1668;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 54;

	t2 = (x9<((x10+x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = -1;
	volatile int32_t t3 = 245371;

	t3 = (x13<((x14+x15)+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 62541;
	int32_t x22 = 3440001;
	static uint64_t x23 = 1146624957LLU;
	static uint8_t x24 = 20U;

	t4 = (x21<((x22+x23)+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 9009U;
	int8_t x26 = -1;
	int32_t x27 = -1;
	uint32_t x28 = 1U;
	int32_t t5 = 60081;

	t5 = (x25<((x26+x27)+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int16_t x30 = 14;
	int8_t x31 = INT8_MAX;
	volatile int32_t t6 = -7602;

	t6 = (x29<((x30+x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 464U;
	uint32_t x36 = 8072745U;

	t7 = (x33<((x34+x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static int32_t t8 = 2020777;

	t8 = (x37<((x38+x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = UINT16_MAX;
	static uint64_t x46 = UINT64_MAX;
	int64_t x48 = INT64_MAX;
	static volatile int32_t t9 = -37333935;

	t9 = (x45<((x46+x47)+x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = 20734611536288LLU;
	static int32_t x52 = INT32_MIN;
	static int32_t t10 = -545;

	t10 = (x49<((x50+x51)+x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	int64_t x54 = -1LL;
	static int32_t x56 = INT32_MAX;

	t11 = (x53<((x54+x55)+x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x57 = -1;
	static uint32_t x60 = UINT32_MAX;
	static int32_t t12 = -125;

	t12 = (x57<((x58+x59)+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 99U;
	int8_t x62 = INT8_MAX;
	uint8_t x63 = 87U;
	int32_t x64 = INT32_MIN;
	int32_t t13 = -689192985;

	t13 = (x61<((x62+x63)+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = 1423;
	uint16_t x72 = 11U;
	volatile int32_t t14 = -2;

	t14 = (x69<((x70+x71)+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MIN;
	static int8_t x75 = 3;
	uint32_t x76 = UINT32_MAX;
	int32_t t15 = -2020563;

	t15 = (x73<((x74+x75)+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x79 = -1LL;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t16 = 24;

	t16 = (x77<((x78+x79)+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	static int16_t x82 = 675;
	static int16_t x84 = INT16_MIN;
	int32_t t17 = -1536;

	t17 = (x81<((x82+x83)+x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -35;
	static uint64_t x86 = 2127325547740946052LLU;
	volatile int64_t x87 = -1LL;

	t18 = (x85<((x86+x87)+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 5LLU;
	int64_t x90 = -1LL;
	uint32_t x91 = 2040U;
	static int8_t x92 = INT8_MAX;
	int32_t t19 = 7;

	t19 = (x89<((x90+x91)+x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t t20 = 63651046;

	t20 = (x93<((x94+x95)+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = -7096;
	int16_t x98 = 0;
	int32_t x99 = INT32_MAX;
	int32_t t21 = -99;

	t21 = (x97<((x98+x99)+x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	volatile uint64_t x103 = 700187307766LLU;
	int16_t x104 = INT16_MIN;

	t22 = (x101<((x102+x103)+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	static int8_t x106 = 33;
	int16_t x107 = -1;
	static uint32_t x108 = 16U;
	volatile int32_t t23 = 39178966;

	t23 = (x105<((x106+x107)+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = 426695537U;
	uint64_t x110 = UINT64_MAX;
	static uint16_t x111 = 2U;
	static int16_t x112 = 321;
	static volatile int32_t t24 = -239;

	t24 = (x109<((x110+x111)+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;

	t25 = (x113<((x114+x115)+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = 5181909U;
	int8_t x120 = INT8_MIN;
	int32_t t26 = 20;

	t26 = (x117<((x118+x119)+x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x125 = INT64_MAX;
	int32_t x127 = 974656;
	int32_t x128 = INT32_MIN;
	volatile int32_t t27 = -29722150;

	t27 = (x125<((x126+x127)+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	volatile int32_t x134 = INT32_MIN;
	static int16_t x135 = INT16_MAX;
	uint8_t x136 = 52U;
	volatile int32_t t28 = -85787184;

	t28 = (x133<((x134+x135)+x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x137 = INT64_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	int64_t x140 = -7813249LL;
	static int32_t t29 = -3679;

	t29 = (x137<((x138+x139)+x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 14135U;
	uint16_t x142 = 2U;
	int16_t x143 = INT16_MAX;
	int64_t x144 = -1LL;

	t30 = (x141<((x142+x143)+x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint16_t x150 = UINT16_MAX;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t31 = -218;

	t31 = (x149<((x150+x151)+x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	volatile int16_t x154 = 5104;
	static int16_t x155 = -1;
	uint64_t x156 = 3811LLU;

	t32 = (x153<((x154+x155)+x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 7780U;
	static uint64_t x158 = UINT64_MAX;
	uint16_t x159 = 32U;
	int32_t t33 = 31238757;

	t33 = (x157<((x158+x159)+x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x161 = 6U;
	uint8_t x162 = 7U;
	static volatile int8_t x163 = 22;
	static volatile uint8_t x164 = 44U;
	int32_t t34 = -1795;

	t34 = (x161<((x162+x163)+x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 2U;
	volatile uint16_t x166 = UINT16_MAX;
	static volatile int32_t x167 = -11352765;
	int16_t x168 = -2;
	static volatile int32_t t35 = 11;

	t35 = (x165<((x166+x167)+x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -41;
	int8_t x170 = INT8_MAX;
	static int32_t x172 = 1;
	int32_t t36 = -1909;

	t36 = (x169<((x170+x171)+x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x175 = -1;
	volatile int8_t x176 = -1;

	t37 = (x173<((x174+x175)+x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = -1;
	int32_t x179 = INT32_MAX;
	uint32_t x180 = UINT32_MAX;
	static int32_t t38 = 5;

	t38 = (x177<((x178+x179)+x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = 1052;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = 0;
	volatile int32_t t39 = 2105;

	t39 = (x181<((x182+x183)+x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 50U;
	int32_t x186 = -17292;
	int64_t x187 = -40876LL;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t40 = -3919;

	t40 = (x185<((x186+x187)+x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 735U;
	static int64_t x190 = INT64_MIN;
	static uint32_t x191 = 302914407U;
	int8_t x192 = 1;

	t41 = (x189<((x190+x191)+x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = 36278;
	uint16_t x194 = UINT16_MAX;
	volatile int32_t x196 = INT32_MAX;

	t42 = (x193<((x194+x195)+x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	uint8_t x199 = 32U;
	static int8_t x200 = -1;
	int32_t t43 = 4524145;

	t43 = (x197<((x198+x199)+x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x202 = -2;
	static int8_t x203 = -10;
	static int32_t x204 = -16097501;

	t44 = (x201<((x202+x203)+x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x205 = 55808562670326LLU;
	int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 123672167548425LLU;
	static int8_t x208 = INT8_MAX;
	int32_t t45 = 706873;

	t45 = (x205<((x206+x207)+x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = UINT32_MAX;
	uint64_t x214 = 1690265918925486LLU;
	volatile int16_t x215 = 2;
	int64_t x216 = 13839405LL;
	int32_t t46 = -367223851;

	t46 = (x213<((x214+x215)+x216));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 6U;
	static int64_t x218 = -224LL;
	volatile int64_t x219 = 759064330LL;
	int32_t t47 = 454526009;

	t47 = (x217<((x218+x219)+x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 6624U;
	uint32_t x222 = 851U;
	uint8_t x224 = UINT8_MAX;
	static volatile int32_t t48 = 45101951;

	t48 = (x221<((x222+x223)+x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x226 = 322U;
	volatile int64_t x227 = -7476024449LL;
	int8_t x228 = -56;
	int32_t t49 = -26;

	t49 = (x225<((x226+x227)+x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 535043061972036LLU;
	volatile int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t50 = -718;

	t50 = (x229<((x230+x231)+x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = INT8_MIN;
	static volatile uint8_t x234 = 2U;
	int64_t x235 = INT64_MIN;
	volatile int32_t t51 = 0;

	t51 = (x233<((x234+x235)+x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x237 = 139U;
	uint16_t x239 = UINT16_MAX;
	uint8_t x240 = 0U;
	volatile int32_t t52 = 1;

	t52 = (x237<((x238+x239)+x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int8_t x247 = 4;
	int32_t t53 = 355;

	t53 = (x245<((x246+x247)+x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = INT8_MIN;
	static volatile int32_t t54 = 1;

	t54 = (x253<((x254+x255)+x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = 87;
	static uint32_t x258 = UINT32_MAX;
	volatile int32_t t55 = 263;

	t55 = (x257<((x258+x259)+x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x263 = 4LLU;
	volatile uint32_t x264 = 7U;
	volatile int32_t t56 = 812906;

	t56 = (x261<((x262+x263)+x264));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = -1;
	volatile uint16_t x272 = 86U;
	static int32_t t57 = 341;

	t57 = (x269<((x270+x271)+x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x275 = INT64_MIN;
	volatile int16_t x276 = -82;

	t58 = (x273<((x274+x275)+x276));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x278 = INT16_MAX;
	int64_t x279 = 4218152324234896183LL;
	uint8_t x280 = 0U;
	int32_t t59 = 264803865;

	t59 = (x277<((x278+x279)+x280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = 191443;
	volatile int64_t x283 = INT64_MIN;
	static int32_t x284 = -1;

	t60 = (x281<((x282+x283)+x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 6912U;
	int8_t x286 = 0;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = -1;
	volatile int32_t t61 = 404464;

	t61 = (x285<((x286+x287)+x288));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x289 = 0;
	volatile uint16_t x290 = 7U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = INT32_MIN;
	int32_t t62 = 40458348;

	t62 = (x289<((x290+x291)+x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -1LL;
	volatile uint32_t x294 = UINT32_MAX;
	int32_t x295 = -1;
	volatile int32_t t63 = 595603;

	t63 = (x293<((x294+x295)+x296));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = -1LL;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = 42U;
	volatile uint16_t x300 = 93U;
	volatile int32_t t64 = 0;

	t64 = (x297<((x298+x299)+x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MAX;
	static int8_t x303 = -1;
	volatile int32_t x304 = INT32_MIN;
	static int32_t t65 = -331;

	t65 = (x301<((x302+x303)+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x305 = -63682LL;
	uint32_t x306 = 36U;
	uint16_t x307 = 440U;
	int8_t x308 = 3;
	volatile int32_t t66 = 101113;

	t66 = (x305<((x306+x307)+x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = -1637;
	static volatile int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	volatile int32_t t67 = -27776;

	t67 = (x313<((x314+x315)+x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x317 = INT32_MAX;
	volatile uint8_t x318 = 90U;
	static uint32_t x319 = 1597329U;
	uint64_t x320 = 9707LLU;
	static int32_t t68 = 4017;

	t68 = (x317<((x318+x319)+x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x322 = 114;
	int64_t x323 = -2741691LL;
	uint8_t x324 = 1U;
	volatile int32_t t69 = 2697;

	t69 = (x321<((x322+x323)+x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x326 = -991;
	uint32_t x327 = 44U;
	volatile int64_t x328 = -1LL;
	volatile int32_t t70 = 2617295;

	t70 = (x325<((x326+x327)+x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 3U;
	static uint8_t x332 = UINT8_MAX;

	t71 = (x329<((x330+x331)+x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MAX;
	volatile int8_t x347 = 5;
	int32_t t72 = -60;

	t72 = (x345<((x346+x347)+x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = -450LL;
	volatile uint8_t x352 = UINT8_MAX;
	int32_t t73 = 14510;

	t73 = (x349<((x350+x351)+x352));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x354 = -2;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	static volatile int32_t t74 = 8;

	t74 = (x353<((x354+x355)+x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x358 = -1;
	volatile int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	volatile int32_t t75 = -10697725;

	t75 = (x357<((x358+x359)+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x365 = INT16_MAX;
	static volatile uint64_t x366 = 1254324825LLU;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	int32_t t76 = -7;

	t76 = (x365<((x366+x367)+x368));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x370 = INT8_MIN;
	int32_t x371 = -1;
	static uint8_t x372 = 19U;

	t77 = (x369<((x370+x371)+x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -1LL;
	uint64_t x374 = 6851606409LLU;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t78 = 25961;

	t78 = (x373<((x374+x375)+x376));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x378 = 30012U;
	int8_t x379 = 9;
	int64_t x380 = -23233385LL;
	int32_t t79 = -216;

	t79 = (x377<((x378+x379)+x380));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x390 = INT32_MIN;
	int32_t x392 = 161;
	int32_t t80 = -54883887;

	t80 = (x389<((x390+x391)+x392));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x396 = INT16_MAX;
	int32_t t81 = -1;

	t81 = (x393<((x394+x395)+x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x397 = INT64_MIN;
	static int16_t x398 = -1;
	static int32_t x399 = -16985654;
	volatile int32_t t82 = 18223993;

	t82 = (x397<((x398+x399)+x400));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	int32_t x407 = INT32_MIN;
	static uint8_t x408 = 20U;
	static volatile int32_t t83 = 50;

	t83 = (x405<((x406+x407)+x408));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x409 = INT64_MIN;
	static int16_t x410 = INT16_MAX;
	int32_t x411 = -5;
	volatile int32_t t84 = -814214;

	t84 = (x409<((x410+x411)+x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = 797853205;
	volatile int32_t x414 = 1;
	volatile uint32_t x415 = 1021U;
	uint32_t x416 = 10267U;
	int32_t t85 = -102159118;

	t85 = (x413<((x414+x415)+x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = 116;
	uint32_t x418 = 799U;
	static uint16_t x419 = 1619U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t86 = -273219;

	t86 = (x417<((x418+x419)+x420));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x421 = 4U;
	int16_t x422 = -94;
	static uint16_t x423 = 31886U;
	int64_t x424 = INT64_MIN;
	int32_t t87 = 7180;

	t87 = (x421<((x422+x423)+x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;

	t88 = (x429<((x430+x431)+x432));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = 667586;
	int64_t x434 = INT64_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t89 = -87901;

	t89 = (x433<((x434+x435)+x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x437 = 2LL;
	int8_t x439 = 3;
	int8_t x440 = INT8_MAX;

	t90 = (x437<((x438+x439)+x440));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x446 = INT32_MAX;
	static uint64_t x447 = UINT64_MAX;
	int64_t x448 = -1LL;
	volatile int32_t t91 = -1698;

	t91 = (x445<((x446+x447)+x448));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x449 = -1;
	static int32_t x450 = 15735713;
	int64_t x451 = -1LL;
	volatile int64_t x452 = INT64_MIN;
	int32_t t92 = 752927553;

	t92 = (x449<((x450+x451)+x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x454 = 47U;
	static int16_t x455 = -1;
	int64_t x456 = INT64_MIN;

	t93 = (x453<((x454+x455)+x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x461 = 34U;
	static volatile int64_t x462 = -1LL;
	volatile int64_t x463 = -1LL;
	int64_t x464 = 3111LL;

	t94 = (x461<((x462+x463)+x464));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x465 = -1LL;
	int8_t x466 = -1;
	volatile uint16_t x468 = 3531U;
	int32_t t95 = -459530;

	t95 = (x465<((x466+x467)+x468));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = INT64_MAX;
	int16_t x471 = 389;
	volatile int32_t t96 = -16133;

	t96 = (x469<((x470+x471)+x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x478 = 0U;
	int64_t x479 = INT64_MIN;
	uint8_t x480 = 6U;
	static int32_t t97 = -543611954;

	t97 = (x477<((x478+x479)+x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x481 = 211213444951LLU;
	int32_t x482 = INT32_MAX;
	static uint8_t x483 = 0U;
	uint32_t x484 = 210U;

	t98 = (x481<((x482+x483)+x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x485 = UINT8_MAX;
	static int8_t x486 = INT8_MAX;
	int32_t t99 = -8111;

	t99 = (x485<((x486+x487)+x488));

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

