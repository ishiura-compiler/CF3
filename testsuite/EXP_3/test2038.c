#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
int32_t x10 = 447;
uint32_t x29 = 12336U;
int64_t x31 = INT64_MIN;
int16_t x37 = -1;
int16_t x39 = INT16_MIN;
uint8_t x43 = 10U;
int8_t x45 = INT8_MIN;
static int8_t x46 = 25;
volatile int32_t x49 = -1436;
volatile uint16_t x50 = 432U;
static int64_t x64 = -7971221635091LL;
static volatile int32_t t10 = 21296464;
int32_t t11 = -1971357;
int32_t x78 = INT32_MIN;
int16_t x81 = INT16_MIN;
int32_t t13 = 13345531;
int64_t x87 = -1LL;
int32_t x91 = INT32_MAX;
volatile int32_t x96 = -151501;
uint64_t x106 = 2002335LLU;
volatile int32_t t19 = -5465;
uint64_t x112 = UINT64_MAX;
int16_t x114 = INT16_MIN;
volatile int8_t x116 = -1;
int32_t t21 = 1;
static volatile int32_t x117 = INT32_MIN;
int32_t t22 = -172854651;
int32_t x124 = INT32_MIN;
int8_t x126 = -1;
uint32_t x131 = UINT32_MAX;
static int16_t x133 = -449;
volatile uint16_t x138 = 89U;
volatile uint8_t x146 = UINT8_MAX;
int64_t x147 = 0LL;
static volatile int32_t x164 = INT32_MAX;
int32_t t34 = -2925;
int64_t x171 = INT64_MIN;
volatile int16_t x172 = INT16_MIN;
static int8_t x173 = INT8_MAX;
uint32_t x177 = UINT32_MAX;
static volatile int32_t x184 = -1;
uint64_t x201 = 72009902LLU;
int32_t t42 = -51831;
int32_t x215 = INT32_MIN;
static volatile int8_t x220 = INT8_MIN;
volatile int32_t t46 = -57555;
int8_t x234 = INT8_MIN;
int8_t x236 = -1;
uint32_t x237 = 69327U;
uint16_t x239 = 4U;
uint64_t x240 = 5104317351070LLU;
volatile uint64_t x246 = UINT64_MAX;
volatile int64_t x248 = INT64_MIN;
static int32_t t54 = 3063130;
static volatile int32_t t57 = -69806604;
int16_t x274 = -62;
volatile int32_t t59 = 11941;
int64_t x281 = INT64_MIN;
volatile int8_t x282 = INT8_MAX;
int32_t t60 = 1036;
int64_t x285 = 139029053217767LL;
int32_t x287 = -1260;
uint8_t x291 = UINT8_MAX;
int32_t t62 = -360651;
uint64_t x296 = UINT64_MAX;
int8_t x303 = -1;
uint16_t x306 = UINT16_MAX;
int64_t x312 = -1LL;
int64_t x315 = INT64_MAX;
volatile int32_t t70 = -285;
int32_t x332 = INT32_MAX;
static int32_t t71 = -989947083;
int8_t x335 = 1;
volatile int8_t x344 = -1;
int32_t x348 = INT32_MAX;
uint64_t x349 = 1514LLU;
volatile int16_t x350 = -1;
static int32_t t76 = -475;
int64_t x353 = INT64_MAX;
static volatile uint16_t x366 = UINT16_MAX;
volatile uint16_t x368 = UINT16_MAX;
int32_t t81 = -10539704;
volatile int32_t x377 = -18;
uint64_t x381 = UINT64_MAX;
volatile int32_t t83 = -1;
volatile int16_t x386 = INT16_MIN;
int16_t x392 = INT16_MAX;
int32_t t85 = -439;
int64_t x396 = -1LL;
int64_t x397 = 1584LL;
uint16_t x398 = 1U;
volatile uint64_t x400 = UINT64_MAX;
static int32_t t87 = -1302441;
static volatile int32_t t88 = -1342112;
static uint8_t x409 = UINT8_MAX;
static int8_t x419 = -4;
volatile int32_t x425 = 2223895;
int8_t x426 = -1;
int32_t x433 = 17;
volatile int32_t t95 = 200;
uint16_t x441 = UINT16_MAX;
volatile int32_t t97 = -302187883;
int8_t x449 = INT8_MIN;
int16_t x450 = INT16_MIN;
int32_t x452 = 1375896;
int32_t t99 = -963244;


void f0(void) {
	volatile uint16_t x11 = 1U;
	volatile int64_t x12 = -3622102786278LL;
	int32_t t0 = -30603;

	t0 = ((x9+x10)<=(x11^x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x17 = 3U;
	uint32_t x18 = 196292206U;
	int64_t x19 = INT64_MAX;
	int16_t x20 = -1;
	volatile int32_t t1 = 3372;

	t1 = ((x17+x18)<=(x19^x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x30 = -9912LL;
	static volatile int16_t x32 = INT16_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x29+x30)<=(x31^x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = 318;
	volatile uint8_t x35 = 6U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t3 = -454564;

	t3 = ((x33+x34)<=(x35^x36));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x38 = INT16_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t4 = 468156;

	t4 = ((x37+x38)<=(x39^x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x44 = 21698;
	int32_t t5 = 3629;

	t5 = ((x41+x42)<=(x43^x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x47 = UINT32_MAX;
	int8_t x48 = 2;
	volatile int32_t t6 = 1;

	t6 = ((x45+x46)<=(x47^x48));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x51 = 0LLU;
	int8_t x52 = INT8_MAX;
	int32_t t7 = -7957182;

	t7 = ((x49+x50)<=(x51^x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 4U;
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = 0U;
	int32_t x56 = INT32_MAX;
	int32_t t8 = 12800834;

	t8 = ((x53+x54)<=(x55^x56));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = -1;
	static uint16_t x58 = 242U;
	uint16_t x59 = UINT16_MAX;
	volatile uint8_t x60 = 118U;
	volatile int32_t t9 = 95886;

	t9 = ((x57+x58)<=(x59^x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = -1;

	t10 = ((x61+x62)<=(x63^x64));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	static uint32_t x68 = UINT32_MAX;

	t11 = ((x65+x66)<=(x67^x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 19U;
	static int8_t x79 = INT8_MIN;
	uint32_t x80 = 39459U;
	volatile int32_t t12 = -47070;

	t12 = ((x77+x78)<=(x79^x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x82 = 11052;
	static uint8_t x83 = 5U;
	volatile uint64_t x84 = 1LLU;

	t13 = ((x81+x82)<=(x83^x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x85 = 2013401668LLU;
	int8_t x86 = -40;
	static uint32_t x88 = 4543U;
	volatile int32_t t14 = 3;

	t14 = ((x85+x86)<=(x87^x88));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = 0;
	volatile uint64_t x90 = UINT64_MAX;
	uint16_t x92 = 11421U;
	volatile int32_t t15 = -12;

	t15 = ((x89+x90)<=(x91^x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x93 = 5708014329743LL;
	uint8_t x94 = 28U;
	uint64_t x95 = UINT64_MAX;
	static volatile int32_t t16 = -27501;

	t16 = ((x93+x94)<=(x95^x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = 0U;
	int32_t x98 = 3293019;
	uint16_t x99 = 0U;
	uint16_t x100 = 3U;
	static int32_t t17 = 206;

	t17 = ((x97+x98)<=(x99^x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 21465866LLU;
	int32_t x102 = -90;
	int16_t x103 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t18 = -447;

	t18 = ((x101+x102)<=(x103^x104));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 262543381LLU;
	int32_t x107 = INT32_MAX;
	static int8_t x108 = INT8_MAX;

	t19 = ((x105+x106)<=(x107^x108));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	volatile int32_t t20 = 1;

	t20 = ((x109+x110)<=(x111^x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 2U;
	volatile uint16_t x115 = UINT16_MAX;

	t21 = ((x113+x114)<=(x115^x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x118 = UINT32_MAX;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;

	t22 = ((x117+x118)<=(x119^x120));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -23656;
	static uint32_t x122 = UINT32_MAX;
	volatile int32_t x123 = 109;
	volatile int32_t t23 = -217;

	t23 = ((x121+x122)<=(x123^x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -24294;
	volatile int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t24 = 14641;

	t24 = ((x125+x126)<=(x127^x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x129 = -1;
	volatile int16_t x130 = -87;
	int32_t x132 = INT32_MAX;
	volatile int32_t t25 = -4;

	t25 = ((x129+x130)<=(x131^x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = 0LL;
	volatile int32_t x136 = 1;
	volatile int32_t t26 = -1024783;

	t26 = ((x133+x134)<=(x135^x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MAX;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 0;
	static volatile int32_t t27 = 564;

	t27 = ((x137+x138)<=(x139^x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int32_t x142 = -5851436;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t28 = 369;

	t28 = ((x141+x142)<=(x143^x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x148 = -387973167096217054LL;
	volatile int32_t t29 = -64437119;

	t29 = ((x145+x146)<=(x147^x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = UINT16_MAX;
	uint16_t x150 = UINT16_MAX;
	static volatile uint16_t x151 = 211U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t30 = 0;

	t30 = ((x149+x150)<=(x151^x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x153 = 39973394127893LL;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = 7U;
	int64_t x156 = -17612556443LL;
	int32_t t31 = 206683;

	t31 = ((x153+x154)<=(x155^x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x157 = 57912;
	volatile int8_t x158 = 3;
	uint32_t x159 = UINT32_MAX;
	volatile int8_t x160 = 15;
	int32_t t32 = 709;

	t32 = ((x157+x158)<=(x159^x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 75U;
	volatile int64_t x162 = -1LL;
	uint64_t x163 = 755LLU;
	volatile int32_t t33 = -914728456;

	t33 = ((x161+x162)<=(x163^x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -14564727LL;
	int16_t x166 = 1770;
	int64_t x167 = INT64_MAX;
	volatile int8_t x168 = 0;

	t34 = ((x165+x166)<=(x167^x168));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = 28U;
	int32_t t35 = -2006707;

	t35 = ((x169+x170)<=(x171^x172));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x174 = INT8_MIN;
	static int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MAX;
	static volatile int32_t t36 = 371442;

	t36 = ((x173+x174)<=(x175^x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t37 = 1;

	t37 = ((x177+x178)<=(x179^x180));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = -334370;
	int16_t x182 = 568;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t t38 = -76318;

	t38 = ((x181+x182)<=(x183^x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = 28956;
	uint32_t x190 = 486U;
	static uint16_t x191 = UINT16_MAX;
	static int32_t x192 = -6203077;
	int32_t t39 = 85503;

	t39 = ((x189+x190)<=(x191^x192));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -20859;
	volatile int16_t x194 = 501;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t40 = 38197999;

	t40 = ((x193+x194)<=(x195^x196));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x197 = 17U;
	int16_t x198 = -1;
	volatile uint64_t x199 = 715709469754750LLU;
	int64_t x200 = 3912565516LL;
	int32_t t41 = 8329937;

	t41 = ((x197+x198)<=(x199^x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x202 = 1156U;
	int64_t x203 = -1528098497605LL;
	int32_t x204 = -1;

	t42 = ((x201+x202)<=(x203^x204));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = 31182044U;
	uint32_t x207 = 15156U;
	volatile int64_t x208 = 1139LL;
	int32_t t43 = 280336149;

	t43 = ((x205+x206)<=(x207^x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -1;
	int64_t x210 = 2132453226742442935LL;
	int32_t x211 = -667635335;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t44 = -239508993;

	t44 = ((x209+x210)<=(x211^x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x216 = 157;
	volatile int32_t t45 = 41788;

	t45 = ((x213+x214)<=(x215^x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 0U;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 6U;

	t46 = ((x217+x218)<=(x219^x220));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x221 = -1;
	int8_t x222 = 0;
	int16_t x223 = -1937;
	int16_t x224 = -1;
	volatile int32_t t47 = 23;

	t47 = ((x221+x222)<=(x223^x224));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x229 = 49LLU;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 2U;
	volatile int32_t t48 = 190438;

	t48 = ((x229+x230)<=(x231^x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x235 = INT32_MIN;
	volatile int32_t t49 = 1;

	t49 = ((x233+x234)<=(x235^x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x238 = UINT64_MAX;
	int32_t t50 = -654364;

	t50 = ((x237+x238)<=(x239^x240));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = -205218;
	uint32_t x242 = 27728U;
	uint16_t x243 = 9U;
	int32_t x244 = INT32_MAX;
	static volatile int32_t t51 = -429;

	t51 = ((x241+x242)<=(x243^x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = -1;
	int32_t x247 = -1;
	volatile int32_t t52 = -55;

	t52 = ((x245+x246)<=(x247^x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -55967538LL;
	int32_t x250 = INT32_MAX;
	static int8_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	int32_t t53 = -865956;

	t53 = ((x249+x250)<=(x251^x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = 16U;
	uint16_t x254 = 2508U;
	int64_t x255 = -1LL;
	volatile int8_t x256 = INT8_MIN;

	t54 = ((x253+x254)<=(x255^x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x261 = 87752870LL;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = -1LL;
	uint32_t x264 = 32747U;
	static volatile int32_t t55 = -401562;

	t55 = ((x261+x262)<=(x263^x264));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t56 = 524303053;

	t56 = ((x265+x266)<=(x267^x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x269 = 63;
	static int16_t x270 = INT16_MIN;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;

	t57 = ((x269+x270)<=(x271^x272));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 3U;
	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t58 = 57132;

	t58 = ((x273+x274)<=(x275^x276));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x277 = 10;
	uint64_t x278 = UINT64_MAX;
	static int64_t x279 = INT64_MAX;
	volatile int64_t x280 = INT64_MAX;

	t59 = ((x277+x278)<=(x279^x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x283 = -1215635528LL;
	static int32_t x284 = INT32_MIN;

	t60 = ((x281+x282)<=(x283^x284));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = -1;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t61 = 70;

	t61 = ((x285+x286)<=(x287^x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	volatile int8_t x292 = -1;

	t62 = ((x289+x290)<=(x291^x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x293 = -195931632181770772LL;
	uint64_t x294 = 43LLU;
	int8_t x295 = INT8_MIN;
	int32_t t63 = 11;

	t63 = ((x293+x294)<=(x295^x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 7U;
	int8_t x298 = 1;
	int32_t x299 = 47852732;
	int64_t x300 = -1LL;
	int32_t t64 = -46397414;

	t64 = ((x297+x298)<=(x299^x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = UINT32_MAX;
	int64_t x304 = -1LL;
	static int32_t t65 = -24;

	t65 = ((x301+x302)<=(x303^x304));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	int32_t x307 = -1;
	static int32_t x308 = -1694;
	volatile int32_t t66 = -678;

	t66 = ((x305+x306)<=(x307^x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x309 = -1;
	static int8_t x310 = 12;
	volatile int16_t x311 = -1;
	static int32_t t67 = 34611589;

	t67 = ((x309+x310)<=(x311^x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x313 = -1;
	volatile int16_t x314 = INT16_MAX;
	int8_t x316 = 56;
	volatile int32_t t68 = -6;

	t68 = ((x313+x314)<=(x315^x316));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = INT8_MAX;
	int64_t x318 = -8278995101LL;
	int64_t x319 = -92112LL;
	volatile uint32_t x320 = 8165U;
	int32_t t69 = 13;

	t69 = ((x317+x318)<=(x319^x320));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = -90346LL;
	static uint16_t x327 = 12769U;
	volatile int8_t x328 = -22;

	t70 = ((x325+x326)<=(x327^x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = 35453627838226398LLU;
	int8_t x330 = 0;
	int32_t x331 = 5;

	t71 = ((x329+x330)<=(x331^x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -25707720LL;
	uint16_t x334 = 24U;
	int32_t x336 = -1;
	int32_t t72 = -297;

	t72 = ((x333+x334)<=(x335^x336));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x337 = 319220746;
	int64_t x338 = INT64_MIN;
	int16_t x339 = -1;
	int16_t x340 = INT16_MIN;
	volatile int32_t t73 = -6;

	t73 = ((x337+x338)<=(x339^x340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	volatile int32_t t74 = -3830723;

	t74 = ((x341+x342)<=(x343^x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 22871U;
	uint32_t x346 = 22U;
	uint16_t x347 = 4U;
	volatile int32_t t75 = -481;

	t75 = ((x345+x346)<=(x347^x348));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x351 = INT8_MIN;
	volatile int64_t x352 = -895835339224646964LL;

	t76 = ((x349+x350)<=(x351^x352));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = ((x353+x354)<=(x355^x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x357 = 99314738LLU;
	static volatile uint16_t x358 = 8U;
	int64_t x359 = INT64_MIN;
	static uint8_t x360 = 1U;
	int32_t t78 = -988830;

	t78 = ((x357+x358)<=(x359^x360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x361 = -22;
	int64_t x362 = 1LL;
	static volatile int8_t x363 = 2;
	static int16_t x364 = INT16_MIN;
	static int32_t t79 = -44654;

	t79 = ((x361+x362)<=(x363^x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x365 = 32757U;
	volatile int64_t x367 = INT64_MIN;
	int32_t t80 = -172330;

	t80 = ((x365+x366)<=(x367^x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x369 = INT32_MIN;
	static volatile int64_t x370 = INT64_MAX;
	volatile int8_t x371 = INT8_MIN;
	int64_t x372 = 153469889LL;

	t81 = ((x369+x370)<=(x371^x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x378 = INT64_MAX;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	int32_t t82 = 176;

	t82 = ((x377+x378)<=(x379^x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MAX;
	uint16_t x384 = UINT16_MAX;

	t83 = ((x381+x382)<=(x383^x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x385 = INT16_MIN;
	static int64_t x387 = INT64_MAX;
	int64_t x388 = -1LL;
	volatile int32_t t84 = -238;

	t84 = ((x385+x386)<=(x387^x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 493677854U;
	static int16_t x390 = 14489;
	int32_t x391 = -1;

	t85 = ((x389+x390)<=(x391^x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = 736U;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	volatile int32_t t86 = 1640308;

	t86 = ((x393+x394)<=(x395^x396));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x399 = INT32_MAX;

	t87 = ((x397+x398)<=(x399^x400));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MIN;
	static uint64_t x404 = 12965521057LLU;

	t88 = ((x401+x402)<=(x403^x404));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x410 = 8267U;
	volatile uint16_t x411 = 27U;
	volatile int8_t x412 = INT8_MIN;
	static int32_t t89 = -33357;

	t89 = ((x409+x410)<=(x411^x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = 6U;
	int16_t x414 = 1;
	uint16_t x415 = 3U;
	int8_t x416 = -30;
	volatile int32_t t90 = 1918184;

	t90 = ((x413+x414)<=(x415^x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x417 = 3979LL;
	int64_t x418 = INT64_MIN;
	static int8_t x420 = INT8_MAX;
	int32_t t91 = 2823685;

	t91 = ((x417+x418)<=(x419^x420));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	static int8_t x423 = INT8_MAX;
	int64_t x424 = INT64_MIN;
	static int32_t t92 = -23225591;

	t92 = ((x421+x422)<=(x423^x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x427 = -1;
	int32_t x428 = INT32_MIN;
	volatile int32_t t93 = 7;

	t93 = ((x425+x426)<=(x427^x428));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x429 = UINT16_MAX;
	volatile int8_t x430 = INT8_MAX;
	uint32_t x431 = 1292U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t94 = 67;

	t94 = ((x429+x430)<=(x431^x432));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 95U;
	volatile uint32_t x436 = 3U;

	t95 = ((x433+x434)<=(x435^x436));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = -1;
	static volatile uint32_t x438 = 1827925679U;
	int64_t x439 = 79082LL;
	uint8_t x440 = 0U;
	static volatile int32_t t96 = -14997530;

	t96 = ((x437+x438)<=(x439^x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x442 = 1;
	static volatile uint16_t x443 = 86U;
	static int16_t x444 = INT16_MIN;

	t97 = ((x441+x442)<=(x443^x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x451 = -1;
	static volatile int32_t t98 = 4;

	t98 = ((x449+x450)<=(x451^x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = -1;
	volatile int64_t x454 = INT64_MAX;
	volatile int16_t x455 = INT16_MIN;
	int8_t x456 = -1;

	t99 = ((x453+x454)<=(x455^x456));

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

