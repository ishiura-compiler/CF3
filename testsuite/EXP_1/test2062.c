#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = 2;
int32_t t1 = 2001;
volatile int8_t x10 = -47;
int8_t x12 = INT8_MIN;
volatile int16_t x19 = INT16_MIN;
uint16_t x28 = 0U;
int16_t x34 = 792;
uint8_t x44 = 2U;
int8_t x46 = INT8_MIN;
int8_t x48 = INT8_MIN;
static int8_t x52 = INT8_MAX;
volatile int32_t x53 = 10060485;
int16_t x63 = 7346;
static volatile uint16_t x64 = 1674U;
int32_t x77 = -1;
volatile int8_t x79 = 3;
uint16_t x82 = UINT16_MAX;
int32_t t17 = -1;
static int16_t x99 = INT16_MIN;
int32_t x113 = -464895634;
uint64_t x115 = 12LLU;
int32_t t24 = -1719552;
int64_t x141 = INT64_MIN;
static int16_t x143 = 0;
volatile int16_t x146 = -1;
int16_t x150 = INT16_MIN;
volatile uint64_t x152 = 7368568724LLU;
int8_t x154 = -9;
int32_t x163 = -1597;
int32_t x164 = INT32_MIN;
static int32_t x167 = -1;
int32_t t34 = -803597558;
volatile int32_t x204 = 241303;
int32_t t36 = 480536;
static volatile int32_t t37 = 27;
volatile int16_t x213 = -1;
volatile int32_t t40 = -447;
int64_t x234 = 1296055LL;
static volatile int32_t x235 = INT32_MIN;
int8_t x238 = -50;
uint8_t x249 = 3U;
int16_t x251 = 0;
volatile int32_t t47 = -1;
static int32_t x263 = -1;
static uint8_t x271 = 0U;
int32_t x273 = INT32_MIN;
static int8_t x277 = INT8_MIN;
int16_t x284 = INT16_MIN;
uint64_t x286 = 233710954LLU;
int32_t x288 = INT32_MIN;
volatile int32_t t56 = 99251757;
volatile int32_t t57 = -424859069;
volatile int8_t x312 = -1;
static volatile int32_t t58 = -61590;
static volatile int32_t t59 = 10483231;
int16_t x318 = 199;
static uint64_t x321 = UINT64_MAX;
volatile uint64_t x323 = UINT64_MAX;
volatile uint64_t x342 = 89410970491LLU;
volatile uint64_t x346 = 46327218869240LLU;
static uint64_t x347 = 436962LLU;
volatile uint8_t x355 = 38U;
uint16_t x357 = 804U;
volatile int8_t x358 = 0;
uint16_t x362 = UINT16_MAX;
int16_t x364 = INT16_MAX;
static int32_t t67 = 1;
volatile uint16_t x399 = UINT16_MAX;
volatile int8_t x400 = -1;
volatile int32_t t69 = 119696;
static uint64_t x410 = 23009249LLU;
volatile int32_t t71 = -87;
int16_t x422 = INT16_MAX;
int32_t x426 = 21;
static volatile uint32_t x429 = 5U;
int8_t x431 = -1;
int32_t x436 = INT32_MAX;
int32_t t75 = 1039395;
static int64_t x450 = -978850LL;
int64_t x455 = -1LL;
int32_t x458 = 24;
volatile uint8_t x477 = UINT8_MAX;
uint32_t x484 = 457044764U;
int32_t t85 = 5536071;
uint16_t x498 = 16U;
static int16_t x500 = INT16_MIN;
int32_t t87 = 1093;
int32_t x505 = -501813;
int64_t x508 = INT64_MIN;
volatile int32_t t89 = 13836293;
int8_t x518 = INT8_MIN;
int32_t x523 = INT32_MAX;
volatile int32_t t92 = 10;
uint64_t x539 = UINT64_MAX;
int64_t x541 = -1LL;
uint64_t x543 = UINT64_MAX;
int16_t x546 = 12850;
int8_t x547 = -1;
int16_t x551 = -1;
int32_t t97 = -83894;
int32_t x555 = -83;
uint8_t x558 = 39U;
int32_t x560 = 238168147;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint32_t x2 = 7U;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t t0 = 6817;

	t0 = (((x1^x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 2;
	int16_t x6 = 55;
	static int32_t x7 = 91;
	uint16_t x8 = UINT16_MAX;

	t1 = (((x5^x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -23699;
	volatile int16_t x11 = INT16_MAX;
	int32_t t2 = -146162;

	t2 = (((x9^x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	volatile int32_t t3 = -43536;

	t3 = (((x17^x18)*x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	static volatile uint8_t x22 = 60U;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 223469828819008LLU;
	volatile int32_t t4 = 464773;

	t4 = (((x21^x22)*x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = 85U;
	int64_t x27 = -1LL;
	volatile int32_t t5 = 1;

	t5 = (((x25^x26)*x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -3;
	static int8_t x31 = INT8_MIN;
	int16_t x32 = -653;
	int32_t t6 = 2;

	t6 = (((x29^x30)*x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	volatile uint64_t x35 = 117LLU;
	static uint16_t x36 = 16U;
	int32_t t7 = 6;

	t7 = (((x33^x34)*x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 7994460033840LLU;
	int8_t x42 = 0;
	int32_t x43 = INT32_MAX;
	volatile int32_t t8 = 3;

	t8 = (((x41^x42)*x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MIN;
	volatile uint8_t x47 = 2U;
	int32_t t9 = -4016951;

	t9 = (((x45^x46)*x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MAX;
	volatile int16_t x51 = 4058;
	int32_t t10 = -893080;

	t10 = (((x49^x50)*x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x54 = 11LL;
	int8_t x55 = INT8_MIN;
	int64_t x56 = 30LL;
	volatile int32_t t11 = -12;

	t11 = (((x53^x54)*x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = -1LL;
	volatile int16_t x58 = -404;
	volatile int16_t x59 = -1;
	int64_t x60 = 13LL;
	int32_t t12 = 95326015;

	t12 = (((x57^x58)*x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = 176906;
	int8_t x62 = -1;
	static volatile int32_t t13 = 592;

	t13 = (((x61^x62)*x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 41383155386222LLU;
	volatile int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t14 = 175420792;

	t14 = (((x73^x74)*x75)==x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x78 = 4301635224LL;
	volatile int64_t x80 = INT64_MAX;
	static volatile int32_t t15 = -465946;

	t15 = (((x77^x78)*x79)==x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x83 = 20U;
	volatile int8_t x84 = INT8_MAX;
	static volatile int32_t t16 = 824;

	t16 = (((x81^x82)*x83)==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -2959834;
	uint8_t x91 = 0U;
	volatile int8_t x92 = INT8_MAX;

	t17 = (((x89^x90)*x91)==x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int8_t x95 = -1;
	int64_t x96 = -1LL;
	int32_t t18 = 0;

	t18 = (((x93^x94)*x95)==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = -1;
	int8_t x98 = INT8_MAX;
	int8_t x100 = -20;
	int32_t t19 = -1661402;

	t19 = (((x97^x98)*x99)==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = 12842;
	int16_t x107 = 144;
	static uint64_t x108 = 13978593LLU;
	static volatile int32_t t20 = -111379;

	t20 = (((x105^x106)*x107)==x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x114 = 52149986;
	uint8_t x116 = 8U;
	volatile int32_t t21 = -7041;

	t21 = (((x113^x114)*x115)==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int64_t x118 = 2378923LL;
	volatile uint8_t x119 = 26U;
	volatile uint64_t x120 = 7030869175947LLU;
	volatile int32_t t22 = -6;

	t22 = (((x117^x118)*x119)==x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = 10;
	int64_t x122 = -93564463347LL;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t23 = -66441664;

	t23 = (((x121^x122)*x123)==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x125 = -1;
	int32_t x126 = 195;
	uint64_t x127 = 4200685400611LLU;
	uint8_t x128 = 70U;

	t24 = (((x125^x126)*x127)==x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x133 = -3;
	uint8_t x134 = 82U;
	int64_t x135 = 86014875120LL;
	static int64_t x136 = INT64_MIN;
	int32_t t25 = 327277339;

	t25 = (((x133^x134)*x135)==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x142 = INT8_MIN;
	static int16_t x144 = -157;
	volatile int32_t t26 = -822784354;

	t26 = (((x141^x142)*x143)==x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = -1LL;
	int8_t x147 = 0;
	int8_t x148 = INT8_MIN;
	int32_t t27 = 349;

	t27 = (((x145^x146)*x147)==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x149 = 136846684011LL;
	int16_t x151 = INT16_MIN;
	static int32_t t28 = 3773;

	t28 = (((x149^x150)*x151)==x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 9142U;
	volatile int32_t x155 = 6;
	static volatile int64_t x156 = INT64_MIN;
	int32_t t29 = -134520181;

	t29 = (((x153^x154)*x155)==x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	static uint8_t x158 = 1U;
	static int64_t x159 = INT64_MIN;
	volatile int64_t x160 = 1541461LL;
	volatile int32_t t30 = -29;

	t30 = (((x157^x158)*x159)==x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x161 = 1U;
	uint32_t x162 = 241U;
	volatile int32_t t31 = 1317432;

	t31 = (((x161^x162)*x163)==x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = 4946;
	static int16_t x166 = 15392;
	int64_t x168 = INT64_MIN;
	static int32_t t32 = 55;

	t32 = (((x165^x166)*x167)==x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -10;
	uint8_t x170 = 23U;
	volatile uint8_t x171 = 29U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t33 = 71;

	t33 = (((x169^x170)*x171)==x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MAX;
	uint16_t x178 = 0U;
	int8_t x179 = -4;
	uint8_t x180 = UINT8_MAX;

	t34 = (((x177^x178)*x179)==x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x181 = INT16_MIN;
	uint16_t x182 = 15U;
	int8_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t35 = -166706775;

	t35 = (((x181^x182)*x183)==x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x201 = INT8_MIN;
	int8_t x202 = 0;
	volatile int16_t x203 = INT16_MAX;

	t36 = (((x201^x202)*x203)==x204);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = 248517200087069743LLU;
	volatile uint8_t x210 = 11U;
	static int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;

	t37 = (((x209^x210)*x211)==x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MAX;
	volatile int16_t x216 = INT16_MIN;
	int32_t t38 = 359;

	t38 = (((x213^x214)*x215)==x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x217 = 771U;
	int64_t x218 = INT64_MAX;
	volatile uint64_t x219 = 201414317242LLU;
	int16_t x220 = INT16_MAX;
	int32_t t39 = 22071147;

	t39 = (((x217^x218)*x219)==x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x221 = 54;
	int8_t x222 = -1;
	volatile int8_t x223 = -12;
	volatile uint16_t x224 = 101U;

	t40 = (((x221^x222)*x223)==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x225 = 50U;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int64_t x228 = -1LL;
	int32_t t41 = -4721;

	t41 = (((x225^x226)*x227)==x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x229 = 1;
	uint8_t x230 = UINT8_MAX;
	volatile uint8_t x231 = 80U;
	int8_t x232 = INT8_MIN;
	int32_t t42 = -378398;

	t42 = (((x229^x230)*x231)==x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t43 = -576802;

	t43 = (((x233^x234)*x235)==x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = INT32_MIN;
	volatile uint64_t x239 = 2966001305052388LLU;
	static uint32_t x240 = 2U;
	static int32_t t44 = 21;

	t44 = (((x237^x238)*x239)==x240);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x241 = 2764U;
	uint8_t x242 = 7U;
	uint32_t x243 = 28U;
	int64_t x244 = INT64_MIN;
	int32_t t45 = -3878214;

	t45 = (((x241^x242)*x243)==x244);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x245 = -1LL;
	volatile int8_t x246 = -1;
	volatile int16_t x247 = -22;
	int8_t x248 = 0;
	int32_t t46 = -461232808;

	t46 = (((x245^x246)*x247)==x248);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x250 = INT16_MIN;
	uint32_t x252 = 97116U;

	t47 = (((x249^x250)*x251)==x252);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = -1;
	int16_t x262 = 16;
	int32_t x264 = INT32_MIN;
	int32_t t48 = 36;

	t48 = (((x261^x262)*x263)==x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MIN;
	static uint32_t x272 = UINT32_MAX;
	volatile int32_t t49 = -7;

	t49 = (((x269^x270)*x271)==x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x274 = -1;
	int64_t x275 = 172LL;
	uint16_t x276 = 0U;
	volatile int32_t t50 = -116864307;

	t50 = (((x273^x274)*x275)==x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x278 = INT8_MIN;
	static uint8_t x279 = 29U;
	uint64_t x280 = 2317019LLU;
	volatile int32_t t51 = 7;

	t51 = (((x277^x278)*x279)==x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MIN;
	volatile int32_t x283 = INT32_MIN;
	int32_t t52 = 3;

	t52 = (((x281^x282)*x283)==x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x285 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	int32_t t53 = 395673830;

	t53 = (((x285^x286)*x287)==x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x289 = 975;
	uint32_t x290 = 27431646U;
	int16_t x291 = 0;
	int64_t x292 = INT64_MIN;
	volatile int32_t t54 = -11;

	t54 = (((x289^x290)*x291)==x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x293 = -1;
	static int8_t x294 = 0;
	int16_t x295 = 559;
	volatile int32_t x296 = -1254;
	int32_t t55 = 3870;

	t55 = (((x293^x294)*x295)==x296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x301 = INT16_MAX;
	uint8_t x302 = 23U;
	static int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;

	t56 = (((x301^x302)*x303)==x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x305 = 2138979756993LLU;
	static uint64_t x306 = 19564611674043437LLU;
	int16_t x307 = -9;
	uint32_t x308 = 498123U;

	t57 = (((x305^x306)*x307)==x308);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x309 = INT32_MIN;
	uint32_t x310 = 59576U;
	int8_t x311 = INT8_MAX;

	t58 = (((x309^x310)*x311)==x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = 12LLU;
	static volatile int32_t x315 = -1;
	int64_t x316 = -273LL;

	t59 = (((x313^x314)*x315)==x316);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int8_t x319 = -1;
	volatile uint16_t x320 = 14U;
	volatile int32_t t60 = 21360447;

	t60 = (((x317^x318)*x319)==x320);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x322 = UINT16_MAX;
	uint16_t x324 = 1095U;
	static int32_t t61 = 48;

	t61 = (((x321^x322)*x323)==x324);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x341 = UINT32_MAX;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = INT8_MAX;
	int32_t t62 = 1730815;

	t62 = (((x341^x342)*x343)==x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t63 = 60068;

	t63 = (((x345^x346)*x347)==x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x349 = 93U;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MAX;
	volatile uint32_t x352 = 102859U;
	volatile int32_t t64 = -1346365;

	t64 = (((x349^x350)*x351)==x352);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = -1LL;
	uint32_t x354 = 7U;
	int8_t x356 = INT8_MIN;
	int32_t t65 = 27101043;

	t65 = (((x353^x354)*x355)==x356);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x359 = 603U;
	int8_t x360 = -1;
	int32_t t66 = 0;

	t66 = (((x357^x358)*x359)==x360);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x361 = 401U;
	uint32_t x363 = 10U;

	t67 = (((x361^x362)*x363)==x364);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = -2340637;
	volatile int8_t x391 = 0;
	int8_t x392 = -1;
	int32_t t68 = -3;

	t68 = (((x389^x390)*x391)==x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = 10;
	static int8_t x398 = INT8_MIN;

	t69 = (((x397^x398)*x399)==x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x409 = 2U;
	int16_t x411 = -1;
	int64_t x412 = 25098LL;
	volatile int32_t t70 = 14136;

	t70 = (((x409^x410)*x411)==x412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x417 = 30306LLU;
	volatile int32_t x418 = INT32_MAX;
	volatile int32_t x419 = INT32_MIN;
	static uint64_t x420 = UINT64_MAX;

	t71 = (((x417^x418)*x419)==x420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x421 = -5764;
	int8_t x423 = INT8_MAX;
	static int64_t x424 = INT64_MIN;
	int32_t t72 = 0;

	t72 = (((x421^x422)*x423)==x424);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x425 = 31563U;
	volatile int16_t x427 = INT16_MAX;
	static uint32_t x428 = 150U;
	int32_t t73 = 0;

	t73 = (((x425^x426)*x427)==x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x430 = -117;
	int8_t x432 = INT8_MIN;
	static int32_t t74 = -6;

	t74 = (((x429^x430)*x431)==x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x433 = INT8_MIN;
	volatile int64_t x434 = -1LL;
	int16_t x435 = INT16_MIN;

	t75 = (((x433^x434)*x435)==x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x437 = -63;
	volatile uint64_t x438 = 214133267280908187LLU;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t76 = 0;

	t76 = (((x437^x438)*x439)==x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x449 = UINT32_MAX;
	int8_t x451 = -1;
	volatile uint16_t x452 = 21430U;
	volatile int32_t t77 = 33735023;

	t77 = (((x449^x450)*x451)==x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x453 = 204933526890467277LLU;
	static int16_t x454 = INT16_MAX;
	uint64_t x456 = 104LLU;
	volatile int32_t t78 = 425;

	t78 = (((x453^x454)*x455)==x456);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = INT64_MIN;
	static volatile int16_t x459 = 1;
	uint32_t x460 = UINT32_MAX;
	int32_t t79 = -5697339;

	t79 = (((x457^x458)*x459)==x460);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x461 = 148LLU;
	static int32_t x462 = 28545424;
	int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MIN;
	int32_t t80 = -595;

	t80 = (((x461^x462)*x463)==x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x465 = 27U;
	static int64_t x466 = INT64_MIN;
	int8_t x467 = 1;
	uint8_t x468 = 66U;
	volatile int32_t t81 = -652575422;

	t81 = (((x465^x466)*x467)==x468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MIN;
	volatile uint64_t x471 = 987273840LLU;
	static uint32_t x472 = UINT32_MAX;
	static volatile int32_t t82 = 14576987;

	t82 = (((x469^x470)*x471)==x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x473 = -1;
	int8_t x474 = 46;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = -47;
	int32_t t83 = 113031563;

	t83 = (((x473^x474)*x475)==x476);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x478 = INT64_MAX;
	static int8_t x479 = -1;
	volatile int8_t x480 = INT8_MIN;
	static int32_t t84 = 158029;

	t84 = (((x477^x478)*x479)==x480);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x481 = INT32_MIN;
	int32_t x482 = INT32_MIN;
	uint16_t x483 = UINT16_MAX;

	t85 = (((x481^x482)*x483)==x484);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = 26;
	uint64_t x486 = 4640810285376LLU;
	static uint8_t x487 = UINT8_MAX;
	static int8_t x488 = INT8_MAX;
	volatile int32_t t86 = -25970421;

	t86 = (((x485^x486)*x487)==x488);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x497 = UINT32_MAX;
	int32_t x499 = INT32_MAX;

	t87 = (((x497^x498)*x499)==x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x506 = -7478524;
	int64_t x507 = -9105968656LL;
	static int32_t t88 = 65163361;

	t88 = (((x505^x506)*x507)==x508);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x509 = INT32_MAX;
	static volatile int8_t x510 = INT8_MAX;
	int8_t x511 = -1;
	static uint16_t x512 = UINT16_MAX;

	t89 = (((x509^x510)*x511)==x512);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x517 = UINT64_MAX;
	int16_t x519 = INT16_MIN;
	static int64_t x520 = INT64_MAX;
	static volatile int32_t t90 = -149305;

	t90 = (((x517^x518)*x519)==x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x521 = -4321LL;
	uint32_t x522 = 36U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t91 = -5929;

	t91 = (((x521^x522)*x523)==x524);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x525 = 14118U;
	static uint16_t x526 = UINT16_MAX;
	int64_t x527 = -1LL;
	int16_t x528 = INT16_MAX;

	t92 = (((x525^x526)*x527)==x528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x533 = 2U;
	int16_t x534 = INT16_MAX;
	int32_t x535 = 888;
	int8_t x536 = INT8_MIN;
	volatile int32_t t93 = -910;

	t93 = (((x533^x534)*x535)==x536);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x537 = -8968;
	static uint64_t x538 = UINT64_MAX;
	int64_t x540 = INT64_MIN;
	int32_t t94 = -1;

	t94 = (((x537^x538)*x539)==x540);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x542 = INT32_MIN;
	uint16_t x544 = 1U;
	volatile int32_t t95 = -897790;

	t95 = (((x541^x542)*x543)==x544);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x545 = UINT16_MAX;
	uint64_t x548 = 204710689526282LLU;
	int32_t t96 = -607;

	t96 = (((x545^x546)*x547)==x548);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x549 = -1;
	uint8_t x550 = 14U;
	uint32_t x552 = 19U;

	t97 = (((x549^x550)*x551)==x552);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x553 = 10890235;
	int8_t x554 = 3;
	uint8_t x556 = 21U;
	int32_t t98 = 6462320;

	t98 = (((x553^x554)*x555)==x556);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x557 = 72;
	volatile int16_t x559 = INT16_MAX;
	static volatile int32_t t99 = 385;

	t99 = (((x557^x558)*x559)==x560);

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

