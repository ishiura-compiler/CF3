#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
static int64_t t0 = -128LL;
int16_t x10 = INT16_MIN;
int8_t x13 = 10;
static volatile int32_t x14 = 4;
volatile uint64_t t3 = 804082470LLU;
int64_t x19 = INT64_MIN;
static int32_t t5 = 115829;
static int8_t x25 = INT8_MIN;
int32_t t8 = 5970414;
volatile int64_t x57 = INT64_MAX;
int16_t x64 = INT16_MIN;
volatile int32_t t12 = 5930;
int8_t x66 = 32;
int16_t x68 = INT16_MAX;
volatile int64_t t14 = 0LL;
uint16_t x75 = 1U;
uint8_t x76 = UINT8_MAX;
int16_t x78 = 678;
static int64_t x82 = -1LL;
volatile int32_t t17 = 813721509;
static int8_t x86 = INT8_MAX;
int16_t x89 = INT16_MIN;
uint64_t x92 = 15032629868463LLU;
uint8_t x95 = 69U;
int16_t x104 = 24;
int8_t x107 = INT8_MAX;
uint16_t x117 = 124U;
static int32_t x119 = -12752042;
static int32_t x122 = INT32_MIN;
int16_t x123 = -1;
int16_t x124 = 12;
int8_t x126 = INT8_MIN;
int32_t x146 = INT32_MIN;
volatile int32_t t32 = 1;
volatile int8_t x162 = INT8_MIN;
uint8_t x164 = 0U;
int16_t x165 = INT16_MIN;
volatile int64_t x167 = -1LL;
int32_t x169 = -379580;
int8_t x173 = INT8_MIN;
uint64_t x177 = UINT64_MAX;
int32_t t40 = -1926;
int32_t x189 = INT32_MIN;
int64_t x190 = -13LL;
uint8_t x199 = 6U;
uint64_t x200 = 28982638517LLU;
uint64_t x207 = UINT64_MAX;
static uint32_t x209 = 21U;
volatile uint64_t x211 = 32332143128499095LLU;
int16_t x219 = INT16_MIN;
int8_t x222 = 12;
int16_t x224 = -1;
int32_t x233 = -59816;
int64_t x256 = -7629798581688LL;
uint64_t x265 = 234854753LLU;
int16_t x268 = -1;
int32_t x269 = 151842;
static int32_t t56 = -2;
int8_t x275 = -1;
int32_t x278 = -1;
int16_t x280 = INT16_MIN;
int8_t x283 = -4;
static int8_t x286 = INT8_MIN;
uint16_t x287 = 126U;
int8_t x295 = 0;
uint64_t x296 = 435LLU;
int32_t x305 = INT32_MIN;
int32_t x307 = 0;
volatile uint64_t x310 = 10995LLU;
volatile int8_t x312 = 46;
int64_t x321 = -522838356070922205LL;
volatile int64_t t68 = -2569LL;
int64_t x327 = -213441LL;
volatile int8_t x330 = INT8_MIN;
uint32_t t70 = 0U;
volatile uint32_t t71 = 74070053U;
uint64_t x339 = 494905938358286LLU;
static volatile uint64_t t72 = 1996147165217460864LLU;
int16_t x342 = INT16_MIN;
int64_t x346 = -118LL;
volatile uint64_t t74 = 69LLU;
static int32_t x349 = -92970375;
int8_t x351 = -1;
volatile uint16_t x365 = UINT16_MAX;
static int8_t x366 = -27;
uint64_t x367 = 170609662072653385LLU;
int64_t x369 = -1LL;
int64_t t80 = 250376709875161LL;
uint8_t x376 = 8U;
volatile int32_t t81 = 16;
static volatile int16_t x380 = INT16_MIN;
int32_t t82 = 12038;
static int16_t x381 = INT16_MIN;
uint16_t x391 = 1U;
static int16_t x393 = 6;
uint64_t x394 = UINT64_MAX;
int8_t x399 = -12;
uint64_t x405 = UINT64_MAX;
int32_t x406 = INT32_MIN;
volatile uint64_t t89 = 15422421531391LLU;
volatile uint8_t x411 = 46U;
uint64_t t90 = 362918LLU;
int16_t x416 = INT16_MIN;
uint8_t x424 = 58U;
int32_t t93 = 2562459;
static int16_t x426 = INT16_MIN;
uint8_t x429 = 2U;
int32_t x432 = -1;
int16_t x435 = -1653;
static int64_t t99 = -12291636659578222LL;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = -149583965LL;

	t0 = (x1+((x2<=x3)|x4));

	if (t0 != -149518430LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = INT8_MIN;
	volatile int64_t x8 = INT64_MIN;
	static volatile int64_t t1 = -1363584638LL;

	t1 = (x5+((x6<=x7)|x8));

	if (t1 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -179;

	t2 = (x9+((x10<=x11)|x12));

	if (t2 != -32895) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = 27;
	uint64_t x16 = 27536277975LLU;

	t3 = (x13+((x14<=x15)|x16));

	if (t3 != 27536277985LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	static int32_t x18 = 466734427;
	volatile uint8_t x20 = 7U;
	int32_t t4 = 161013381;

	t4 = (x17+((x18<=x19)|x20));

	if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 1U;
	int16_t x22 = INT16_MAX;
	int32_t x23 = -179;
	int8_t x24 = -1;

	t5 = (x21+((x22<=x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 0U;
	uint64_t x28 = 3509000848280456LLU;
	volatile uint64_t t6 = 4148449041LLU;

	t6 = (x25+((x26<=x27)|x28));

	if (t6 != 3509000848280329LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 20439LLU;
	int16_t x34 = INT16_MIN;
	static int32_t x35 = INT32_MIN;
	int8_t x36 = 1;
	uint64_t t7 = 54LLU;

	t7 = (x33+((x34<=x35)|x36));

	if (t7 != 20440LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 5U;
	int32_t x38 = -266825;
	uint16_t x39 = 2175U;
	volatile uint8_t x40 = 8U;

	t8 = (x37+((x38<=x39)|x40));

	if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int64_t x42 = -1LL;
	int64_t x43 = INT64_MIN;
	volatile int64_t x44 = -1LL;
	int64_t t9 = -743540LL;

	t9 = (x41+((x42<=x43)|x44));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int32_t x50 = 1;
	volatile uint64_t x51 = 15055652875LLU;
	int8_t x52 = -45;
	int32_t t10 = 1542068;

	t10 = (x49+((x50<=x51)|x52));

	if (t10 != -46) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x58 = INT32_MAX;
	volatile uint32_t x59 = 317971U;
	uint64_t x60 = 19318LLU;
	volatile uint64_t t11 = 44803219706LLU;

	t11 = (x57+((x58<=x59)|x60));

	if (t11 != 9223372036854795125LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 59924701;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 9U;

	t12 = (x61+((x62<=x63)|x64));

	if (t12 != 59891933) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	int8_t x67 = INT8_MIN;
	static int32_t t13 = -97;

	t13 = (x65+((x66<=x67)|x68));

	if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = INT64_MAX;
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = INT64_MAX;
	int32_t x72 = -1;

	t14 = (x69+((x70<=x71)|x72));

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int32_t t15 = -31226;

	t15 = (x73+((x74<=x75)|x76));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = UINT32_MAX;
	static uint16_t x79 = 873U;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t16 = 12LLU;

	t16 = (x77+((x78<=x79)|x80));

	if (t16 != 4294967294LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 3229U;
	volatile uint8_t x83 = 23U;
	int8_t x84 = -58;

	t17 = (x81+((x82<=x83)|x84));

	if (t17 != 3172) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 39;
	volatile uint16_t x87 = 0U;
	static volatile uint16_t x88 = 11U;
	volatile int32_t t18 = 135;

	t18 = (x85+((x86<=x87)|x88));

	if (t18 != 50) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = -3651966011LL;
	volatile int64_t x91 = INT64_MIN;
	uint64_t t19 = 6LLU;

	t19 = (x89+((x90<=x91)|x92));

	if (t19 != 15032629835695LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	static uint16_t x96 = 7372U;
	static volatile int64_t t20 = 311573902292692156LL;

	t20 = (x93+((x94<=x95)|x96));

	if (t20 != -9223372036854768435LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 664U;
	static volatile int32_t x100 = -390514438;
	volatile int32_t t21 = 31;

	t21 = (x97+((x98<=x99)|x100));

	if (t21 != -390547206) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	int32_t x103 = INT32_MIN;
	int32_t t22 = 8164347;

	t22 = (x101+((x102<=x103)|x104));

	if (t22 != 23) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 123U;
	static uint64_t x106 = 116599034289148574LLU;
	uint8_t x108 = 38U;
	volatile int32_t t23 = 1;

	t23 = (x105+((x106<=x107)|x108));

	if (t23 != 161) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 106076U;
	int32_t x110 = -1401;
	int16_t x111 = 1;
	volatile int32_t x112 = INT32_MAX;
	volatile uint32_t t24 = 2545U;

	t24 = (x109+((x110<=x111)|x112));

	if (t24 != 2147589723U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = 121;
	volatile int16_t x120 = -1;
	volatile int32_t t25 = -2483;

	t25 = (x117+((x118<=x119)|x120));

	if (t25 != 123) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	static int32_t t26 = -11;

	t26 = (x121+((x122<=x123)|x124));

	if (t26 != -2147483635) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = -1;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t27 = 35820;

	t27 = (x125+((x126<=x127)|x128));

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t28 = 2880000071057786LLU;

	t28 = (x129+((x130<=x131)|x132));

	if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = 3U;
	static uint8_t x135 = 50U;
	static int8_t x136 = -1;
	volatile int32_t t29 = -24;

	t29 = (x133+((x134<=x135)|x136));

	if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 3049742U;
	static uint16_t x138 = UINT16_MAX;
	int64_t x139 = INT64_MAX;
	static int8_t x140 = 1;
	volatile uint32_t t30 = 9U;

	t30 = (x137+((x138<=x139)|x140));

	if (t30 != 3049743U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x141 = 912353LLU;
	uint64_t x142 = UINT64_MAX;
	volatile int64_t x143 = INT64_MAX;
	static uint8_t x144 = 9U;
	static volatile uint64_t t31 = 557940413883LLU;

	t31 = (x141+((x142<=x143)|x144));

	if (t31 != 912362LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x145 = UINT16_MAX;
	int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MAX;

	t32 = (x145+((x146<=x147)|x148));

	if (t32 != 98302) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x153 = INT8_MIN;
	volatile int16_t x154 = 15962;
	static int32_t x155 = -1815;
	int8_t x156 = INT8_MAX;
	int32_t t33 = -381822949;

	t33 = (x153+((x154<=x155)|x156));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = -1;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (x157+((x158<=x159)|x160));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = -1;
	uint16_t x163 = 751U;
	volatile int32_t t35 = 55385865;

	t35 = (x161+((x162<=x163)|x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = 1;
	static int8_t x168 = -26;
	static int32_t t36 = -307169;

	t36 = (x165+((x166<=x167)|x168));

	if (t36 != -32794) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x170 = 126982871LLU;
	int64_t x171 = INT64_MAX;
	int64_t x172 = -1LL;
	static int64_t t37 = -51772550795854734LL;

	t37 = (x169+((x170<=x171)|x172));

	if (t37 != -379581LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x174 = 9578248U;
	uint8_t x175 = UINT8_MAX;
	uint16_t x176 = 1U;
	static volatile int32_t t38 = -77449;

	t38 = (x173+((x174<=x175)|x176));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x178 = 0;
	uint32_t x179 = 58088U;
	int32_t x180 = 0;
	volatile uint64_t t39 = 194277129989479LLU;

	t39 = (x177+((x178<=x179)|x180));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -53;
	uint8_t x182 = 10U;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t x184 = 768390;

	t40 = (x181+((x182<=x183)|x184));

	if (t40 != 768338) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x191 = -1;
	static volatile int16_t x192 = INT16_MAX;
	int32_t t41 = 272352186;

	t41 = (x189+((x190<=x191)|x192));

	if (t41 != -2147450881) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x197 = -3;
	static int64_t x198 = INT64_MIN;
	uint64_t t42 = 6LLU;

	t42 = (x197+((x198<=x199)|x200));

	if (t42 != 28982638514LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint32_t x202 = 94059465U;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = 516088311353968LL;
	volatile int64_t t43 = -32299674383470LL;

	t43 = (x201+((x202<=x203)|x204));

	if (t43 != 516088311419504LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MAX;
	int8_t x206 = 34;
	int32_t x208 = 5;
	volatile int32_t t44 = -25295;

	t44 = (x205+((x206<=x207)|x208));

	if (t44 != 32772) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	static uint32_t t45 = 378449523U;

	t45 = (x209+((x210<=x211)|x212));

	if (t45 != 4294967189U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	volatile uint32_t x215 = 51U;
	int8_t x216 = INT8_MIN;
	int32_t t46 = -1452;

	t46 = (x213+((x214<=x215)|x216));

	if (t46 != -256) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = INT16_MIN;
	static volatile uint32_t x218 = UINT32_MAX;
	int16_t x220 = 343;
	int32_t t47 = 272;

	t47 = (x217+((x218<=x219)|x220));

	if (t47 != -32425) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = 76339996075931LLU;
	static int64_t x223 = INT64_MAX;
	volatile uint64_t t48 = 369216626710771LLU;

	t48 = (x221+((x222<=x223)|x224));

	if (t48 != 76339996075930LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MAX;
	static uint32_t x231 = 0U;
	volatile int16_t x232 = -1;
	int32_t t49 = -181201364;

	t49 = (x229+((x230<=x231)|x232));

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = INT32_MIN;
	uint8_t x235 = 0U;
	int8_t x236 = 12;
	volatile int32_t t50 = 219172;

	t50 = (x233+((x234<=x235)|x236));

	if (t50 != -59803) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint8_t x250 = 7U;
	int16_t x251 = -1;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t51 = 10568871182LLU;

	t51 = (x249+((x250<=x251)|x252));

	if (t51 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = UINT64_MAX;
	int64_t t52 = 6811476968LL;

	t52 = (x253+((x254<=x255)|x256));

	if (t52 != -7629798516152LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	static int8_t x259 = INT8_MAX;
	uint16_t x260 = 464U;
	static volatile int64_t t53 = -89209422918996814LL;

	t53 = (x257+((x258<=x259)|x260));

	if (t53 != -9223372036854775343LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x261 = INT64_MAX;
	static uint16_t x262 = 3383U;
	volatile int64_t x263 = -1LL;
	uint64_t x264 = 647072LLU;
	volatile uint64_t t54 = 184000399265081LLU;

	t54 = (x261+((x262<=x263)|x264));

	if (t54 != 9223372036855422879LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MAX;
	volatile uint64_t t55 = 394712819268799LLU;

	t55 = (x265+((x266<=x267)|x268));

	if (t55 != 234854752LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x270 = -1;
	static int64_t x271 = -19630214409LL;
	static int8_t x272 = INT8_MIN;

	t56 = (x269+((x270<=x271)|x272));

	if (t56 != 151714) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = -1;
	uint16_t x274 = 40U;
	uint16_t x276 = 197U;
	int32_t t57 = 0;

	t57 = (x273+((x274<=x275)|x276));

	if (t57 != 196) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x277 = 13U;
	int64_t x279 = INT64_MIN;
	static volatile int32_t t58 = 5642;

	t58 = (x277+((x278<=x279)|x280));

	if (t58 != -32755) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x281 = UINT8_MAX;
	static volatile int16_t x282 = INT16_MIN;
	int16_t x284 = -1;
	int32_t t59 = -9151;

	t59 = (x281+((x282<=x283)|x284));

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 9781LLU;
	uint16_t x288 = 214U;
	volatile uint64_t t60 = 154179891950775814LLU;

	t60 = (x285+((x286<=x287)|x288));

	if (t60 != 9996LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 668U;
	uint16_t x290 = 2901U;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = 7312883333LL;
	int64_t t61 = -225549654LL;

	t61 = (x289+((x290<=x291)|x292));

	if (t61 != 7312884001LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	uint64_t t62 = 6254534043852462LLU;

	t62 = (x293+((x294<=x295)|x296));

	if (t62 != 2147484082LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 1645809894499895LLU;
	int16_t x298 = INT16_MIN;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	uint64_t t63 = 1989223857566382256LLU;

	t63 = (x297+((x298<=x299)|x300));

	if (t63 != 1645809894500150LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x306 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;
	static int32_t t64 = -1341;

	t64 = (x305+((x306<=x307)|x308));

	if (t64 != -2147418113) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = 240LL;
	uint32_t x311 = 8U;
	volatile int64_t t65 = 0LL;

	t65 = (x309+((x310<=x311)|x312));

	if (t65 != 286LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 388064637419818822LLU;
	uint64_t x314 = 686LLU;
	volatile int32_t x315 = 364;
	uint8_t x316 = 16U;
	static uint64_t t66 = 114662024448302LLU;

	t66 = (x313+((x314<=x315)|x316));

	if (t66 != 388064637419818838LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x317 = 14U;
	static int32_t x318 = -1050368465;
	int64_t x319 = -128027848979534841LL;
	static int8_t x320 = 1;
	volatile int32_t t67 = 2143719;

	t67 = (x317+((x318<=x319)|x320));

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x322 = 46096689U;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 17U;

	t68 = (x321+((x322<=x323)|x324));

	if (t68 != -522838356070922188LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = -1;
	int16_t x326 = -30;
	static int32_t x328 = -12719;
	static volatile int32_t t69 = 19324542;

	t69 = (x325+((x326<=x327)|x328));

	if (t69 != -12720) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x329 = 7934537U;
	int32_t x331 = INT32_MIN;
	int8_t x332 = 0;

	t70 = (x329+((x330<=x331)|x332));

	if (t70 != 7934537U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = -1;
	int32_t x336 = 2;

	t71 = (x333+((x334<=x335)|x336));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = 4578098LLU;
	uint32_t x338 = UINT32_MAX;
	int32_t x340 = INT32_MIN;

	t72 = (x337+((x338<=x339)|x340));

	if (t72 != 18446744071566646067LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 80340224U;
	uint8_t x343 = UINT8_MAX;
	uint32_t x344 = 55383U;
	uint32_t t73 = 12453U;

	t73 = (x341+((x342<=x343)|x344));

	if (t73 != 80395607U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x345 = 89867252LLU;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MAX;

	t74 = (x345+((x346<=x347)|x348));

	if (t74 != 89867379LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x350 = UINT16_MAX;
	static uint8_t x352 = 2U;
	int32_t t75 = 7223;

	t75 = (x349+((x350<=x351)|x352));

	if (t75 != -92970373) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x353 = INT64_MAX;
	static int32_t x354 = INT32_MIN;
	static uint16_t x355 = 1U;
	int32_t x356 = -1;
	static int64_t t76 = -159951119087848982LL;

	t76 = (x353+((x354<=x355)|x356));

	if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x357 = 243;
	static volatile int64_t x358 = -1LL;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;
	int64_t t77 = -2613593LL;

	t77 = (x357+((x358<=x359)|x360));

	if (t77 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x361 = 38U;
	uint8_t x362 = 33U;
	static int16_t x363 = -45;
	int32_t x364 = -1;
	volatile int32_t t78 = -46414;

	t78 = (x361+((x362<=x363)|x364));

	if (t78 != 37) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x368 = 20135U;
	int32_t t79 = -42084504;

	t79 = (x365+((x366<=x367)|x368));

	if (t79 != 85670) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x370 = 13U;
	uint16_t x371 = 76U;
	static uint32_t x372 = 1931981926U;

	t80 = (x369+((x370<=x371)|x372));

	if (t80 != 1931981926LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = -7;
	static int64_t x374 = -1LL;
	static int8_t x375 = -1;

	t81 = (x373+((x374<=x375)|x376));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = -1;
	int16_t x378 = 16060;
	static int64_t x379 = -2123058LL;

	t82 = (x377+((x378<=x379)|x380));

	if (t82 != -32769) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x382 = 6U;
	uint64_t x383 = 3387911LLU;
	int8_t x384 = -1;
	volatile int32_t t83 = -180;

	t83 = (x381+((x382<=x383)|x384));

	if (t83 != -32769) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -7;
	static volatile int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MAX;
	static int32_t x388 = -1021596;
	volatile int32_t t84 = -2;

	t84 = (x385+((x386<=x387)|x388));

	if (t84 != -1021602) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x389 = 2255U;
	int16_t x390 = INT16_MIN;
	static uint64_t x392 = 557669492LLU;
	uint64_t t85 = 58729169120249084LLU;

	t85 = (x389+((x390<=x391)|x392));

	if (t85 != 557671748LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x395 = 92599677LLU;
	volatile int16_t x396 = -1;
	volatile int32_t t86 = 0;

	t86 = (x393+((x394<=x395)|x396));

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = UINT16_MAX;
	static int32_t x400 = INT32_MIN;
	volatile int32_t t87 = 35;

	t87 = (x397+((x398<=x399)|x400));

	if (t87 != -2147483393) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -306;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	int32_t x404 = 0;
	int32_t t88 = 3925069;

	t88 = (x401+((x402<=x403)|x404));

	if (t88 != -305) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x407 = 2U;
	int64_t x408 = 82689757352550LL;

	t89 = (x405+((x406<=x407)|x408));

	if (t89 != 82689757352550LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x409 = -1;
	static int64_t x410 = INT64_MAX;
	static uint64_t x412 = 43204076121517LLU;

	t90 = (x409+((x410<=x411)|x412));

	if (t90 != 43204076121516LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MAX;
	int64_t x414 = INT64_MAX;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t t91 = 921;

	t91 = (x413+((x414<=x415)|x416));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MIN;
	static volatile uint32_t x418 = 20948901U;
	static int64_t x419 = INT64_MIN;
	static int32_t x420 = -1;
	volatile int32_t t92 = 123531;

	t92 = (x417+((x418<=x419)|x420));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = 1;
	static int32_t x422 = INT32_MIN;
	static uint32_t x423 = 7U;

	t93 = (x421+((x422<=x423)|x424));

	if (t93 != 59) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x425 = 1575271865507547LLU;
	int8_t x427 = INT8_MAX;
	int16_t x428 = INT16_MIN;
	static volatile uint64_t t94 = 75080LLU;

	t94 = (x425+((x426<=x427)|x428));

	if (t94 != 1575271865474780LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x430 = INT16_MAX;
	volatile uint64_t x431 = UINT64_MAX;
	volatile int32_t t95 = 3;

	t95 = (x429+((x430<=x431)|x432));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x433 = -1LL;
	int32_t x434 = 104435680;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t96 = 12LLU;

	t96 = (x433+((x434<=x435)|x436));

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = 0;
	int32_t x438 = INT32_MAX;
	int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MAX;
	int32_t t97 = INT32_MAX;

	t97 = (x437+((x438<=x439)|x440));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x441 = 6185138U;
	volatile int8_t x442 = 0;
	static uint16_t x443 = 21U;
	int8_t x444 = 8;
	uint32_t t98 = 103909U;

	t98 = (x441+((x442<=x443)|x444));

	if (t98 != 6185147U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x445 = INT64_MAX;
	static int32_t x446 = INT32_MIN;
	int16_t x447 = -37;
	int16_t x448 = -1;

	t99 = (x445+((x446<=x447)|x448));

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

