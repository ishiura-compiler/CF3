#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 64346U;
int16_t x3 = 3;
uint32_t x17 = UINT32_MAX;
volatile uint64_t x19 = 19634190LLU;
static int32_t x20 = -1;
int16_t x21 = INT16_MIN;
volatile int32_t t4 = 362;
int8_t x25 = INT8_MIN;
int16_t x26 = INT16_MIN;
int16_t x27 = -1;
int32_t x28 = INT32_MIN;
volatile int32_t t5 = -187;
uint64_t x30 = 6570498LLU;
volatile int8_t x36 = INT8_MAX;
int32_t x38 = 13;
int32_t t8 = -5;
static int64_t x46 = -1LL;
int8_t x47 = INT8_MIN;
int32_t x48 = -52402;
int8_t x62 = INT8_MIN;
volatile int32_t t12 = 2337878;
int8_t x80 = INT8_MAX;
int64_t x82 = 27088LL;
int8_t x89 = INT8_MIN;
int32_t x100 = INT32_MIN;
int16_t x104 = INT16_MAX;
volatile int32_t t20 = -1;
volatile uint64_t x113 = UINT64_MAX;
int8_t x117 = 1;
volatile int32_t t22 = -766;
int32_t t23 = 3100;
uint8_t x125 = UINT8_MAX;
uint16_t x144 = UINT16_MAX;
int16_t x146 = INT16_MAX;
int8_t x157 = INT8_MIN;
int64_t x162 = -1LL;
static volatile int8_t x170 = INT8_MAX;
int64_t x174 = -1LL;
int32_t x179 = INT32_MIN;
static uint32_t x183 = 41U;
volatile int32_t t37 = -228902;
static int64_t x191 = -1LL;
int16_t x199 = INT16_MAX;
int32_t x200 = INT32_MIN;
static uint64_t x214 = 26387LLU;
volatile int64_t x218 = INT64_MIN;
volatile int64_t x220 = INT64_MIN;
int16_t x221 = INT16_MIN;
int32_t t45 = 120;
static volatile int8_t x228 = -1;
int32_t t47 = -332;
volatile int32_t t48 = 197;
static uint32_t x238 = 1173074942U;
volatile int8_t x239 = -1;
volatile int8_t x245 = INT8_MIN;
volatile int16_t x248 = -43;
int16_t x253 = INT16_MIN;
int32_t x255 = -1;
static int32_t t53 = 9040;
int8_t x264 = INT8_MAX;
volatile int64_t x269 = INT64_MIN;
int16_t x270 = -1;
volatile int64_t x271 = -7590574LL;
int32_t t55 = -59;
int16_t x273 = 1;
static int32_t x276 = INT32_MIN;
int32_t x283 = -3854741;
static uint16_t x285 = 0U;
int8_t x287 = -1;
int32_t t58 = -142157666;
uint32_t x291 = 7U;
static int8_t x293 = INT8_MIN;
int8_t x297 = -1;
int64_t x303 = INT64_MIN;
uint32_t x307 = UINT32_MAX;
static int32_t t65 = -11769;
uint8_t x321 = UINT8_MAX;
uint16_t x337 = UINT16_MAX;
int16_t x339 = INT16_MAX;
int8_t x344 = -1;
static volatile int16_t x345 = INT16_MIN;
uint16_t x346 = UINT16_MAX;
int32_t x351 = 843;
volatile int16_t x356 = 1;
int32_t x357 = INT32_MIN;
volatile uint64_t x360 = UINT64_MAX;
static int8_t x364 = INT8_MAX;
volatile int64_t x371 = -1LL;
int32_t t77 = -132251829;
uint8_t x381 = UINT8_MAX;
static uint64_t x389 = 6951734115086751927LLU;
uint16_t x390 = 4U;
uint8_t x396 = 1U;
int32_t t83 = 2621096;
int32_t x398 = -1;
int32_t x401 = INT32_MIN;
int64_t x409 = INT64_MIN;
uint16_t x411 = 1833U;
static int8_t x421 = -1;
int32_t t89 = -2096;
int64_t x428 = INT64_MIN;
volatile uint64_t x431 = 2379635524LLU;
uint32_t x444 = UINT32_MAX;
static int16_t x446 = -681;
volatile int32_t t93 = -395278;
uint32_t x454 = 111U;
int64_t x459 = INT64_MIN;
volatile int32_t t97 = -421357192;
static volatile int32_t t98 = -653790497;
volatile int64_t x469 = -1LL;


void f0(void) {
	volatile uint16_t x2 = UINT16_MAX;
	uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = 0;

	t0 = ((x1/(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	uint8_t x6 = 1U;
	int16_t x7 = -17;
	uint16_t x8 = 25388U;
	int32_t t1 = 53020140;

	t1 = ((x5/(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = -712;
	volatile int32_t t2 = 1;

	t2 = ((x9/(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 29LLU;
	volatile int32_t t3 = 347983;

	t3 = ((x17/(x18+x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = 2131;
	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;

	t4 = ((x21/(x22+x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = ((x25/(x26+x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = -1;
	static volatile int32_t x31 = INT32_MAX;
	int16_t x32 = 6;
	volatile int32_t t6 = -9124;

	t6 = ((x29/(x30+x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 116079732LLU;
	uint64_t x34 = 1116425691162LLU;
	int8_t x35 = INT8_MAX;
	volatile int32_t t7 = -5705443;

	t7 = ((x33/(x34+x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = 288;
	int64_t x39 = 2452536957674290LL;
	volatile uint32_t x40 = 150U;

	t8 = ((x37/(x38+x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = 0;
	int64_t x43 = 5168LL;
	int16_t x44 = -1;
	int32_t t9 = 26017;

	t9 = ((x41/(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x45/(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 1954823037U;
	uint32_t x54 = 442873810U;
	uint32_t x55 = 19757082U;
	static int64_t x56 = -1LL;
	int32_t t11 = -126;

	t11 = ((x53/(x54+x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x61 = 12536U;
	uint8_t x63 = 1U;
	volatile int8_t x64 = -1;

	t12 = ((x61/(x62+x63))==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = 70U;
	int32_t t13 = 306412;

	t13 = ((x77/(x78+x79))==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x81 = -6737;
	int16_t x83 = -1;
	int64_t x84 = -282037648982422LL;
	static int32_t t14 = 3508102;

	t14 = ((x81/(x82+x83))==x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = -1LL;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	static uint16_t x88 = 10180U;
	volatile int32_t t15 = -13253;

	t15 = ((x85/(x86+x87))==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x90 = 0U;
	int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t16 = 1;

	t16 = ((x89/(x90+x91))==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x93 = 1645859LL;
	volatile int16_t x94 = 1392;
	static int8_t x95 = INT8_MAX;
	static uint8_t x96 = 0U;
	volatile int32_t t17 = 2700;

	t17 = ((x93/(x94+x95))==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x97 = 0U;
	static uint16_t x98 = UINT16_MAX;
	uint8_t x99 = 90U;
	volatile int32_t t18 = -79;

	t18 = ((x97/(x98+x99))==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int8_t x103 = 0;
	static volatile int32_t t19 = -6;

	t19 = ((x101/(x102+x103))==x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = -99418231;
	int8_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MAX;

	t20 = ((x105/(x106+x107))==x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x114 = 60;
	int32_t x115 = -1;
	static int8_t x116 = INT8_MIN;
	static int32_t t21 = 16;

	t21 = ((x113/(x114+x115))==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x118 = 41U;
	int16_t x119 = -1;
	static int16_t x120 = -1;

	t22 = ((x117/(x118+x119))==x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = -1;
	int32_t x122 = INT32_MAX;
	static int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MAX;

	t23 = ((x121/(x122+x123))==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x126 = -1;
	int64_t x127 = -3462194083707730LL;
	int16_t x128 = -6401;
	volatile int32_t t24 = -6322;

	t24 = ((x125/(x126+x127))==x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = 6U;
	int64_t x130 = -1747693922LL;
	uint8_t x131 = 48U;
	static int8_t x132 = 0;
	int32_t t25 = -5;

	t25 = ((x129/(x130+x131))==x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 11U;
	uint16_t x134 = 5456U;
	volatile uint16_t x135 = 3U;
	int64_t x136 = INT64_MIN;
	static int32_t t26 = -2;

	t26 = ((x133/(x134+x135))==x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 12LLU;
	volatile int32_t t27 = -1;

	t27 = ((x141/(x142+x143))==x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x145 = 1LL;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = -1LL;
	int32_t t28 = -62680;

	t28 = ((x145/(x146+x147))==x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = -1;
	static volatile int8_t x150 = INT8_MIN;
	static uint64_t x151 = 4085363LLU;
	volatile int8_t x152 = -42;
	volatile int32_t t29 = -117443;

	t29 = ((x149/(x150+x151))==x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -12;
	uint64_t x154 = UINT64_MAX;
	uint16_t x155 = 8106U;
	int64_t x156 = -1LL;
	int32_t t30 = 43;

	t30 = ((x153/(x154+x155))==x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x158 = -6218754;
	int64_t x159 = -3728290029046390LL;
	int64_t x160 = INT64_MIN;
	int32_t t31 = 570066968;

	t31 = ((x157/(x158+x159))==x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x161 = 5735979U;
	volatile int32_t x163 = INT32_MAX;
	uint32_t x164 = 227035U;
	volatile int32_t t32 = -55;

	t32 = ((x161/(x162+x163))==x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = -1;
	volatile int16_t x167 = -121;
	int32_t x168 = INT32_MIN;
	static int32_t t33 = -352688;

	t33 = ((x165/(x166+x167))==x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = -1;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = -1;
	volatile int32_t t34 = 3786;

	t34 = ((x169/(x170+x171))==x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x173 = -13288563;
	uint32_t x175 = 56667570U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t35 = -7;

	t35 = ((x173/(x174+x175))==x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = 626809222LLU;
	volatile int32_t x178 = 477;
	uint16_t x180 = 447U;
	int32_t t36 = -305150;

	t36 = ((x177/(x178+x179))==x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x181 = 10324U;
	volatile int32_t x182 = -7;
	volatile uint16_t x184 = UINT16_MAX;

	t37 = ((x181/(x182+x183))==x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = -153;
	uint32_t x192 = 13857144U;
	int32_t t38 = -2111;

	t38 = ((x189/(x190+x191))==x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = -3369;
	int8_t x194 = INT8_MIN;
	volatile uint16_t x195 = 2U;
	static int32_t x196 = -1;
	int32_t t39 = -2115;

	t39 = ((x193/(x194+x195))==x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = INT16_MIN;
	uint16_t x198 = UINT16_MAX;
	int32_t t40 = -1;

	t40 = ((x197/(x198+x199))==x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x201 = 621;
	static int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = 11967U;
	uint16_t x204 = 43U;
	int32_t t41 = 488856;

	t41 = ((x201/(x202+x203))==x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x205 = -1;
	uint8_t x206 = 13U;
	static uint64_t x207 = 14047319108302727LLU;
	volatile int16_t x208 = 0;
	volatile int32_t t42 = 0;

	t42 = ((x205/(x206+x207))==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	static uint8_t x215 = 16U;
	uint16_t x216 = 5674U;
	int32_t t43 = 6;

	t43 = ((x213/(x214+x215))==x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = INT32_MIN;
	volatile uint16_t x219 = 2371U;
	int32_t t44 = -3183518;

	t44 = ((x217/(x218+x219))==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x222 = 6U;
	uint64_t x223 = 103531311397174LLU;
	volatile int8_t x224 = -14;

	t45 = ((x221/(x222+x223))==x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = -1;
	uint32_t x226 = 511U;
	int32_t x227 = -152569510;
	static volatile int32_t t46 = -45217451;

	t46 = ((x225/(x226+x227))==x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x229 = INT16_MAX;
	volatile uint8_t x230 = UINT8_MAX;
	int16_t x231 = -1;
	int64_t x232 = 14101554365LL;

	t47 = ((x229/(x230+x231))==x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = 42;
	uint8_t x234 = 7U;
	int8_t x235 = -1;
	int32_t x236 = INT32_MIN;

	t48 = ((x233/(x234+x235))==x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -1;
	uint64_t x240 = UINT64_MAX;
	static volatile int32_t t49 = -6649;

	t49 = ((x237/(x238+x239))==x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = 1508832559468388LLU;
	uint32_t x242 = UINT32_MAX;
	static volatile int64_t x243 = INT64_MIN;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t50 = 4808;

	t50 = ((x241/(x242+x243))==x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 79U;
	volatile int32_t t51 = -99;

	t51 = ((x245/(x246+x247))==x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 999780383497492LLU;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t52 = -31919175;

	t52 = ((x249/(x250+x251))==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x254 = 9U;
	static volatile int16_t x256 = -1;

	t53 = ((x253/(x254+x255))==x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x261 = -1;
	int64_t x262 = INT64_MAX;
	static int16_t x263 = INT16_MIN;
	static volatile int32_t t54 = -2;

	t54 = ((x261/(x262+x263))==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x272 = UINT64_MAX;

	t55 = ((x269/(x270+x271))==x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x274 = -9;
	int64_t x275 = -141714LL;
	int32_t t56 = 9512;

	t56 = ((x273/(x274+x275))==x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x281 = 3;
	int64_t x282 = -1LL;
	int64_t x284 = 13LL;
	volatile int32_t t57 = -1919;

	t57 = ((x281/(x282+x283))==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x286 = 687U;
	int32_t x288 = -1;

	t58 = ((x285/(x286+x287))==x288);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = INT64_MAX;
	int32_t x290 = -9366651;
	uint64_t x292 = 4928216491806399LLU;
	int32_t t59 = -1301;

	t59 = ((x289/(x290+x291))==x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x294 = -1;
	volatile int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	int32_t t60 = -3;

	t60 = ((x293/(x294+x295))==x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x298 = UINT32_MAX;
	volatile int64_t x299 = -538342470LL;
	static int64_t x300 = INT64_MIN;
	volatile int32_t t61 = 92086673;

	t61 = ((x297/(x298+x299))==x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x301 = INT8_MIN;
	uint64_t x302 = UINT64_MAX;
	volatile int64_t x304 = -87683LL;
	int32_t t62 = 14;

	t62 = ((x301/(x302+x303))==x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x305 = UINT8_MAX;
	volatile uint64_t x306 = 1LLU;
	volatile int16_t x308 = INT16_MIN;
	int32_t t63 = -1;

	t63 = ((x305/(x306+x307))==x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x309 = 1072586597698554LLU;
	static int64_t x310 = INT64_MAX;
	uint64_t x311 = 65397943093216LLU;
	static uint32_t x312 = 215967U;
	int32_t t64 = -40;

	t64 = ((x309/(x310+x311))==x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = -1;
	static int64_t x314 = -216LL;
	int32_t x315 = INT32_MAX;
	int8_t x316 = -1;

	t65 = ((x313/(x314+x315))==x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x317 = 292515590;
	uint64_t x318 = 222023469851839LLU;
	uint8_t x319 = 47U;
	int8_t x320 = -1;
	int32_t t66 = -8878;

	t66 = ((x317/(x318+x319))==x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x322 = 5U;
	static int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MAX;
	int32_t t67 = 269;

	t67 = ((x321/(x322+x323))==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x329 = 2769LL;
	uint8_t x330 = UINT8_MAX;
	static uint64_t x331 = 268593114822484090LLU;
	int16_t x332 = -1;
	volatile int32_t t68 = 0;

	t68 = ((x329/(x330+x331))==x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x333 = 61U;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	volatile int32_t x336 = INT32_MIN;
	int32_t t69 = 3;

	t69 = ((x333/(x334+x335))==x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x338 = INT64_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t70 = -6611;

	t70 = ((x337/(x338+x339))==x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x341 = 250U;
	int8_t x342 = INT8_MIN;
	int32_t x343 = 131465;
	int32_t t71 = -1278911;

	t71 = ((x341/(x342+x343))==x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x347 = UINT8_MAX;
	volatile uint32_t x348 = 1395653U;
	volatile int32_t t72 = 9061;

	t72 = ((x345/(x346+x347))==x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t73 = 484564594;

	t73 = ((x349/(x350+x351))==x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = -1;
	volatile uint8_t x354 = UINT8_MAX;
	uint16_t x355 = UINT16_MAX;
	int32_t t74 = 0;

	t74 = ((x353/(x354+x355))==x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x358 = 2142768568U;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int32_t t75 = 67556045;

	t75 = ((x357/(x358+x359))==x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -1LL;
	volatile int16_t x362 = -62;
	int16_t x363 = INT16_MAX;
	static int32_t t76 = 2395709;

	t76 = ((x361/(x362+x363))==x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x369 = INT16_MAX;
	volatile int8_t x370 = -8;
	static uint8_t x372 = UINT8_MAX;

	t77 = ((x369/(x370+x371))==x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x373 = -1;
	static volatile int8_t x374 = 19;
	int8_t x375 = 19;
	uint64_t x376 = UINT64_MAX;
	int32_t t78 = 95852;

	t78 = ((x373/(x374+x375))==x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -1;
	volatile uint32_t x378 = UINT32_MAX;
	int32_t x379 = -1;
	volatile int32_t x380 = -246486;
	volatile int32_t t79 = 699;

	t79 = ((x377/(x378+x379))==x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x382 = 1U;
	uint64_t x383 = 19193194830092936LLU;
	static int8_t x384 = -1;
	int32_t t80 = -22910870;

	t80 = ((x381/(x382+x383))==x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -27;
	int32_t t81 = -6;

	t81 = ((x385/(x386+x387))==x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x391 = 287U;
	static uint64_t x392 = 9877283850LLU;
	int32_t t82 = -25337735;

	t82 = ((x389/(x390+x391))==x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x393 = 31149LLU;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -145;

	t83 = ((x393/(x394+x395))==x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = 0;
	uint8_t x399 = 54U;
	volatile uint16_t x400 = 10279U;
	int32_t t84 = -266309;

	t84 = ((x397/(x398+x399))==x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x402 = 0;
	volatile uint64_t x403 = 12367908802214LLU;
	uint32_t x404 = 740618306U;
	volatile int32_t t85 = -24;

	t85 = ((x401/(x402+x403))==x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = 25;
	int16_t x406 = INT16_MAX;
	int64_t x407 = -1LL;
	static int8_t x408 = -1;
	volatile int32_t t86 = -12;

	t86 = ((x405/(x406+x407))==x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x410 = 503LL;
	int32_t x412 = 0;
	int32_t t87 = 3159;

	t87 = ((x409/(x410+x411))==x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x413 = 3U;
	static uint16_t x414 = 343U;
	int8_t x415 = INT8_MIN;
	static volatile int64_t x416 = -1LL;
	int32_t t88 = -122;

	t88 = ((x413/(x414+x415))==x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x422 = 3022;
	int64_t x423 = -8930110994508145LL;
	int8_t x424 = 24;

	t89 = ((x421/(x422+x423))==x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = INT8_MIN;
	static volatile int16_t x426 = 0;
	int32_t x427 = INT32_MAX;
	volatile int32_t t90 = 245;

	t90 = ((x425/(x426+x427))==x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = 447614250876738LLU;
	volatile int16_t x430 = INT16_MIN;
	int32_t x432 = 5084;
	int32_t t91 = 6838573;

	t91 = ((x429/(x430+x431))==x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -1;
	int64_t x442 = -32836302090507226LL;
	static int32_t x443 = INT32_MIN;
	int32_t t92 = 962586;

	t92 = ((x441/(x442+x443))==x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x445 = INT64_MIN;
	static int8_t x447 = -4;
	uint16_t x448 = 3505U;

	t93 = ((x445/(x446+x447))==x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = -245647;
	int32_t x450 = -1;
	int64_t x451 = 80548098880LL;
	static int64_t x452 = INT64_MIN;
	volatile int32_t t94 = 355070;

	t94 = ((x449/(x450+x451))==x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x453 = 152716U;
	volatile int16_t x455 = -39;
	uint16_t x456 = UINT16_MAX;
	int32_t t95 = -111762326;

	t95 = ((x453/(x454+x455))==x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x457 = -2602;
	int32_t x458 = 6549981;
	int16_t x460 = INT16_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x457/(x458+x459))==x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = 523025267804766656LL;
	uint32_t x462 = UINT32_MAX;
	static volatile int8_t x463 = INT8_MIN;
	static volatile int8_t x464 = -1;

	t97 = ((x461/(x462+x463))==x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = 483;
	uint16_t x466 = 1006U;
	static uint16_t x467 = UINT16_MAX;
	volatile int8_t x468 = INT8_MIN;

	t98 = ((x465/(x466+x467))==x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x470 = 31043U;
	volatile int16_t x471 = INT16_MIN;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t99 = -2695981;

	t99 = ((x469/(x470+x471))==x472);

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

