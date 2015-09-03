#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int32_t t0 = -3797;
int32_t x9 = INT32_MAX;
uint16_t x16 = 13U;
static volatile int32_t t2 = -2115;
int64_t x19 = INT64_MAX;
uint64_t x20 = 58LLU;
int32_t t3 = -15;
uint16_t x21 = 1U;
int32_t x29 = 9015;
int16_t x30 = 1;
static uint8_t x31 = UINT8_MAX;
int16_t x39 = INT16_MAX;
static int8_t x43 = 60;
volatile uint64_t x47 = 11LLU;
uint8_t x48 = 1U;
uint32_t x58 = 26517258U;
volatile int32_t t9 = 613;
volatile int32_t t10 = -225166979;
int32_t t11 = -627924;
int32_t x81 = -1;
volatile int64_t x82 = -1LL;
volatile uint8_t x84 = UINT8_MAX;
int32_t t13 = 57;
uint8_t x86 = 30U;
int16_t x92 = INT16_MIN;
int32_t x99 = -1;
int16_t x101 = INT16_MIN;
int32_t x113 = INT32_MAX;
int32_t t20 = 293787978;
volatile int64_t x118 = -1LL;
volatile int64_t x121 = -1LL;
static int32_t x134 = -30007752;
int32_t x140 = INT32_MIN;
int64_t x142 = 98460361LL;
int8_t x149 = 0;
uint32_t x176 = 209697U;
uint32_t x186 = UINT32_MAX;
int32_t x188 = INT32_MIN;
int16_t x193 = -1;
uint8_t x194 = UINT8_MAX;
volatile int32_t t33 = 295113882;
uint16_t x206 = UINT16_MAX;
volatile uint16_t x207 = 16U;
int16_t x208 = INT16_MIN;
int16_t x214 = INT16_MIN;
volatile uint64_t x215 = 72095LLU;
uint16_t x224 = 30370U;
int32_t t38 = 3193;
volatile uint16_t x235 = UINT16_MAX;
static int64_t x237 = INT64_MAX;
int16_t x239 = INT16_MIN;
volatile int32_t t42 = -41027125;
uint64_t x249 = UINT64_MAX;
uint64_t x251 = 8618086LLU;
volatile int32_t t43 = 133616571;
static volatile int32_t x258 = INT32_MAX;
int8_t x260 = INT8_MIN;
int64_t x261 = -1LL;
int16_t x262 = -1;
static volatile int16_t x270 = INT16_MIN;
volatile int64_t x271 = 155903719834LL;
static uint32_t x276 = 9U;
uint8_t x278 = 3U;
int16_t x282 = -63;
int8_t x283 = INT8_MIN;
static uint64_t x284 = 36049502638LLU;
volatile int8_t x287 = -1;
volatile int32_t t51 = 29;
volatile int16_t x289 = -1;
volatile int32_t x290 = INT32_MIN;
uint64_t x300 = UINT64_MAX;
static volatile int32_t t54 = 1;
int64_t x301 = INT64_MIN;
static int16_t x310 = -1;
int32_t x316 = 382956;
int8_t x324 = INT8_MAX;
volatile uint64_t x327 = 171854738LLU;
static int32_t x329 = INT32_MIN;
uint64_t x336 = UINT64_MAX;
volatile int16_t x340 = INT16_MIN;
volatile int32_t x344 = -1;
static int32_t t63 = 24614374;
int32_t x351 = -1;
uint16_t x352 = 5U;
static volatile int32_t t65 = 0;
volatile int32_t t66 = -486192;
int64_t x364 = INT64_MIN;
uint64_t x366 = 27696711948218048LLU;
static int8_t x375 = INT8_MAX;
uint8_t x376 = 33U;
int32_t t71 = 3658;
volatile int32_t x381 = -1;
static volatile int8_t x383 = -4;
volatile int16_t x389 = -251;
int64_t x390 = -1LL;
int32_t x401 = INT32_MAX;
int32_t t76 = -863;
static uint8_t x407 = 106U;
int32_t t77 = 85;
static int8_t x421 = -1;
volatile uint8_t x422 = UINT8_MAX;
int64_t x424 = INT64_MIN;
int32_t t81 = 2071;
int16_t x438 = INT16_MIN;
int16_t x455 = INT16_MIN;
uint8_t x456 = 46U;
int8_t x477 = -1;
uint16_t x481 = 1U;
static int8_t x482 = INT8_MAX;
uint32_t x484 = 1U;
volatile int8_t x492 = 1;
int16_t x502 = 618;
volatile int32_t t89 = 8316947;
volatile int32_t t90 = -56688133;
int16_t x523 = 15;
uint16_t x529 = 0U;
volatile int16_t x530 = -21;
static uint32_t x534 = 9700407U;
int8_t x539 = 12;
volatile int32_t t95 = 34;
volatile int32_t t96 = 7789;
uint32_t x550 = 351796826U;
int32_t t98 = 311797679;
uint64_t x555 = UINT64_MAX;
int32_t t99 = 31851912;


void f0(void) {
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = -1;
	uint64_t x4 = UINT64_MAX;

	t0 = (x1<=((x2*x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = 1;
	volatile int8_t x11 = -33;
	int32_t x12 = INT32_MIN;
	int32_t t1 = 53645975;

	t1 = (x9<=((x10*x11)<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 28U;
	uint8_t x14 = 16U;
	int64_t x15 = 490375LL;

	t2 = (x13<=((x14*x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 3066U;
	static volatile int16_t x18 = -1;

	t3 = (x17<=((x18*x19)<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = 2986735LL;
	static volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -1017;

	t4 = (x21<=((x22*x23)<x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x32 = 112U;
	volatile int32_t t5 = 3;

	t5 = (x29<=((x30*x31)<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = -889010;
	static int32_t x38 = -12;
	int64_t x40 = INT64_MIN;
	int32_t t6 = 3733;

	t6 = (x37<=((x38*x39)<x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -4243LL;
	static int32_t x42 = -1;
	int64_t x44 = -1LL;
	volatile int32_t t7 = -444399;

	t7 = (x41<=((x42*x43)<x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 3537530057024LL;
	uint64_t x46 = UINT64_MAX;
	static volatile int32_t t8 = -165;

	t8 = (x45<=((x46*x47)<x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = 42876;
	static int32_t x59 = -1;
	uint32_t x60 = UINT32_MAX;

	t9 = (x57<=((x58*x59)<x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x65 = INT8_MAX;
	volatile uint32_t x66 = 43761U;
	int16_t x67 = -1;
	uint16_t x68 = 5216U;

	t10 = (x65<=((x66*x67)<x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	volatile int32_t x70 = 543302;
	volatile uint64_t x71 = UINT64_MAX;
	static volatile uint32_t x72 = UINT32_MAX;

	t11 = (x69<=((x70*x71)<x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	static uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 42809U;
	int64_t x76 = 63516LL;
	static int32_t t12 = 0;

	t12 = (x73<=((x74*x75)<x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x83 = 281767563720865866LLU;

	t13 = (x81<=((x82*x83)<x84));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int64_t x87 = -1LL;
	static uint16_t x88 = UINT16_MAX;
	static int32_t t14 = -16223483;

	t14 = (x85<=((x86*x87)<x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = 61;
	int16_t x90 = INT16_MAX;
	int8_t x91 = -1;
	static int32_t t15 = 2330;

	t15 = (x89<=((x90*x91)<x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x97 = -63;
	uint16_t x98 = 7847U;
	static uint32_t x100 = UINT32_MAX;
	int32_t t16 = -86137;

	t16 = (x97<=((x98*x99)<x100));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x102 = -1;
	static volatile uint8_t x103 = 1U;
	uint16_t x104 = 2044U;
	int32_t t17 = 1528992;

	t17 = (x101<=((x102*x103)<x104));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t18 = -1590;

	t18 = (x105<=((x106*x107)<x108));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	static uint8_t x110 = 37U;
	int8_t x111 = 1;
	int32_t x112 = 2530108;
	volatile int32_t t19 = -958409;

	t19 = (x109<=((x110*x111)<x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x114 = 0;
	volatile int64_t x115 = INT64_MIN;
	int16_t x116 = -1;

	t20 = (x113<=((x114*x115)<x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = -1LL;
	uint64_t x119 = 315LLU;
	uint32_t x120 = UINT32_MAX;
	int32_t t21 = -57234994;

	t21 = (x117<=((x118*x119)<x120));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x122 = 20;
	uint64_t x123 = UINT64_MAX;
	static uint8_t x124 = UINT8_MAX;
	volatile int32_t t22 = 47131;

	t22 = (x121<=((x122*x123)<x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = UINT32_MAX;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t23 = 105;

	t23 = (x133<=((x134*x135)<x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -1LL;
	uint64_t x138 = 3LLU;
	static int16_t x139 = -1;
	static volatile int32_t t24 = -1;

	t24 = (x137<=((x138*x139)<x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 6U;
	int16_t x143 = INT16_MAX;
	static volatile int64_t x144 = 32213340206LL;
	volatile int32_t t25 = 1;

	t25 = (x141<=((x142*x143)<x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	uint64_t x146 = 1589101507544188379LLU;
	int32_t x147 = -1;
	int16_t x148 = 3;
	static int32_t t26 = -1406;

	t26 = (x145<=((x146*x147)<x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x150 = INT16_MAX;
	uint32_t x151 = 3262U;
	int32_t x152 = 217619284;
	int32_t t27 = 41069;

	t27 = (x149<=((x150*x151)<x152));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	static uint16_t x168 = 10946U;
	volatile int32_t t28 = -108831458;

	t28 = (x165<=((x166*x167)<x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x173 = 1971U;
	static volatile uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	static volatile int32_t t29 = -108671804;

	t29 = (x173<=((x174*x175)<x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x177 = -5;
	uint32_t x178 = 2020927839U;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t30 = 1;

	t30 = (x177<=((x178*x179)<x180));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MIN;
	volatile int64_t x183 = -1LL;
	int32_t x184 = 161289;
	volatile int32_t t31 = 1548343;

	t31 = (x181<=((x182*x183)<x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = 1;
	int8_t x187 = INT8_MIN;
	int32_t t32 = 124558;

	t32 = (x185<=((x186*x187)<x188));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x195 = -1LL;
	static int32_t x196 = INT32_MIN;

	t33 = (x193<=((x194*x195)<x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = -1;
	uint64_t x204 = 120808697LLU;
	int32_t t34 = 4457;

	t34 = (x201<=((x202*x203)<x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x205 = 8U;
	int32_t t35 = -114;

	t35 = (x205<=((x206*x207)<x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x209 = 118U;
	uint32_t x210 = 586057U;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t36 = -30362604;

	t36 = (x209<=((x210*x211)<x212));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x213 = 66581000094LL;
	static int64_t x216 = 56021218421LL;
	int32_t t37 = 1866;

	t37 = (x213<=((x214*x215)<x216));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = INT16_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	volatile uint32_t x223 = 15842U;

	t38 = (x221<=((x222*x223)<x224));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x233 = 14U;
	int8_t x234 = -1;
	static int64_t x236 = 6LL;
	volatile int32_t t39 = 604328;

	t39 = (x233<=((x234*x235)<x236));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x238 = -1;
	int8_t x240 = INT8_MAX;
	int32_t t40 = 2;

	t40 = (x237<=((x238*x239)<x240));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = -1;
	int8_t x242 = 2;
	int16_t x243 = INT16_MIN;
	volatile uint8_t x244 = 28U;
	int32_t t41 = -107181;

	t41 = (x241<=((x242*x243)<x244));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = 28;
	int8_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = -260626787LL;

	t42 = (x245<=((x246*x247)<x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x250 = -1;
	int8_t x252 = -1;

	t43 = (x249<=((x250*x251)<x252));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MAX;
	volatile uint64_t x254 = 22261895634680380LLU;
	uint32_t x255 = 1229688829U;
	int64_t x256 = INT64_MIN;
	int32_t t44 = 144;

	t44 = (x253<=((x254*x255)<x256));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = -90;
	int8_t x259 = -1;
	volatile int32_t t45 = -8502152;

	t45 = (x257<=((x258*x259)<x260));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x263 = UINT32_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t46 = -161330905;

	t46 = (x261<=((x262*x263)<x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	volatile int32_t t47 = 70;

	t47 = (x269<=((x270*x271)<x272));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x273 = 0U;
	static int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	static volatile int32_t t48 = 471;

	t48 = (x273<=((x274*x275)<x276));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x277 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 51LLU;
	int32_t t49 = -8896;

	t49 = (x277<=((x278*x279)<x280));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t t50 = 32727919;

	t50 = (x281<=((x282*x283)<x284));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	volatile int8_t x288 = INT8_MIN;

	t51 = (x285<=((x286*x287)<x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x291 = UINT64_MAX;
	uint8_t x292 = 1U;
	volatile int32_t t52 = -60625;

	t52 = (x289<=((x290*x291)<x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = -6713LL;
	int16_t x295 = 8897;
	static int16_t x296 = INT16_MIN;
	int32_t t53 = 29;

	t53 = (x293<=((x294*x295)<x296));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -1;
	uint64_t x298 = 218667LLU;
	uint64_t x299 = 26967529229324782LLU;

	t54 = (x297<=((x298*x299)<x300));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x302 = UINT16_MAX;
	uint16_t x303 = 7671U;
	volatile int32_t x304 = 198;
	volatile int32_t t55 = -1;

	t55 = (x301<=((x302*x303)<x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x309 = -1LL;
	uint64_t x311 = 7758935281436645LLU;
	int32_t x312 = -1;
	int32_t t56 = -37788;

	t56 = (x309<=((x310*x311)<x312));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = -2080035;
	volatile uint64_t x315 = 1056219201502LLU;
	static volatile int32_t t57 = -482;

	t57 = (x313<=((x314*x315)<x316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = -2011;
	int8_t x322 = -1;
	uint64_t x323 = 384626LLU;
	int32_t t58 = 23922;

	t58 = (x321<=((x322*x323)<x324));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 132107719313086LLU;
	int32_t x328 = INT32_MIN;
	volatile int32_t t59 = 1;

	t59 = (x325<=((x326*x327)<x328));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x330 = -1LL;
	uint32_t x331 = 1U;
	volatile int32_t x332 = -1;
	volatile int32_t t60 = -182;

	t60 = (x329<=((x330*x331)<x332));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = -5374;
	int16_t x335 = INT16_MAX;
	volatile int32_t t61 = -186121;

	t61 = (x333<=((x334*x335)<x336));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = INT32_MAX;
	static int8_t x338 = INT8_MIN;
	volatile int8_t x339 = 11;
	volatile int32_t t62 = -49968;

	t62 = (x337<=((x338*x339)<x340));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -1LL;
	volatile uint64_t x343 = UINT64_MAX;

	t63 = (x341<=((x342*x343)<x344));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int8_t x348 = 15;
	static int32_t t64 = -6;

	t64 = (x345<=((x346*x347)<x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x349 = INT8_MAX;
	static volatile uint8_t x350 = 56U;

	t65 = (x349<=((x350*x351)<x352));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	volatile uint32_t x359 = 1375889317U;
	uint8_t x360 = 10U;

	t66 = (x357<=((x358*x359)<x360));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x361 = INT8_MAX;
	int64_t x362 = -175639LL;
	int8_t x363 = 1;
	int32_t t67 = 1776;

	t67 = (x361<=((x362*x363)<x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x365 = INT8_MIN;
	int8_t x367 = 0;
	uint16_t x368 = 1U;
	volatile int32_t t68 = -173516974;

	t68 = (x365<=((x366*x367)<x368));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x369 = 35904193624020407LLU;
	int64_t x370 = INT64_MAX;
	static uint8_t x371 = 1U;
	int64_t x372 = 136897LL;
	static volatile int32_t t69 = -49856814;

	t69 = (x369<=((x370*x371)<x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x373 = 10U;
	volatile int16_t x374 = INT16_MAX;
	static int32_t t70 = 279980;

	t70 = (x373<=((x374*x375)<x376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x377 = 10;
	uint8_t x378 = 1U;
	static uint32_t x379 = 2312272U;
	static uint8_t x380 = 113U;

	t71 = (x377<=((x378*x379)<x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x382 = 0;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t72 = 192698479;

	t72 = (x381<=((x382*x383)<x384));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = -48025388LL;
	int16_t x386 = 1;
	volatile int16_t x387 = 2035;
	uint8_t x388 = 4U;
	static int32_t t73 = -3823;

	t73 = (x385<=((x386*x387)<x388));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x391 = 2690581LLU;
	static uint16_t x392 = UINT16_MAX;
	int32_t t74 = -5765;

	t74 = (x389<=((x390*x391)<x392));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x393 = INT16_MIN;
	volatile int8_t x394 = 14;
	int32_t x395 = 120649;
	static volatile int64_t x396 = INT64_MAX;
	int32_t t75 = 872511957;

	t75 = (x393<=((x394*x395)<x396));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x402 = INT16_MIN;
	int8_t x403 = -1;
	uint16_t x404 = UINT16_MAX;

	t76 = (x401<=((x402*x403)<x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x405 = -22;
	volatile int32_t x406 = -2554156;
	uint32_t x408 = UINT32_MAX;

	t77 = (x405<=((x406*x407)<x408));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x409 = 5U;
	volatile int64_t x410 = -1LL;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	volatile int32_t t78 = 14486;

	t78 = (x409<=((x410*x411)<x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x413 = 16U;
	int8_t x414 = INT8_MAX;
	volatile int16_t x415 = INT16_MAX;
	static int64_t x416 = INT64_MAX;
	int32_t t79 = 4318;

	t79 = (x413<=((x414*x415)<x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x423 = INT8_MIN;
	int32_t t80 = -3943898;

	t80 = (x421<=((x422*x423)<x424));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x429 = 12U;
	int8_t x430 = 2;
	volatile int64_t x431 = -24329373867LL;
	int32_t x432 = INT32_MAX;

	t81 = (x429<=((x430*x431)<x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x437 = -1;
	int16_t x439 = INT16_MIN;
	volatile int32_t x440 = INT32_MIN;
	int32_t t82 = 0;

	t82 = (x437<=((x438*x439)<x440));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x453 = 14U;
	static int16_t x454 = 9;
	int32_t t83 = -15;

	t83 = (x453<=((x454*x455)<x456));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = 61660978485LL;
	uint8_t x463 = 19U;
	static volatile int32_t x464 = 1;
	volatile int32_t t84 = 1641819;

	t84 = (x461<=((x462*x463)<x464));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x478 = INT8_MIN;
	uint64_t x479 = 392LLU;
	volatile int64_t x480 = INT64_MIN;
	int32_t t85 = 176973;

	t85 = (x477<=((x478*x479)<x480));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x483 = 1090U;
	static volatile int32_t t86 = 70859994;

	t86 = (x481<=((x482*x483)<x484));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x489 = -8;
	volatile int16_t x490 = -1;
	static uint8_t x491 = UINT8_MAX;
	int32_t t87 = 3926;

	t87 = (x489<=((x490*x491)<x492));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x501 = INT8_MIN;
	volatile int8_t x503 = -1;
	int64_t x504 = 243LL;
	volatile int32_t t88 = -1;

	t88 = (x501<=((x502*x503)<x504));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x505 = UINT64_MAX;
	uint8_t x506 = 1U;
	int8_t x507 = -23;
	uint8_t x508 = 1U;

	t89 = (x505<=((x506*x507)<x508));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x509 = 694800LL;
	volatile uint32_t x510 = UINT32_MAX;
	int32_t x511 = INT32_MIN;
	int64_t x512 = INT64_MIN;

	t90 = (x509<=((x510*x511)<x512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x513 = 1LL;
	uint8_t x514 = 6U;
	volatile uint32_t x515 = UINT32_MAX;
	int16_t x516 = 2;
	volatile int32_t t91 = 7416069;

	t91 = (x513<=((x514*x515)<x516));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x521 = -1LL;
	uint32_t x522 = UINT32_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t92 = 41;

	t92 = (x521<=((x522*x523)<x524));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x531 = 44170LL;
	int32_t x532 = -1;
	int32_t t93 = -4;

	t93 = (x529<=((x530*x531)<x532));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x533 = UINT64_MAX;
	int8_t x535 = -1;
	int8_t x536 = 43;
	volatile int32_t t94 = 2;

	t94 = (x533<=((x534*x535)<x536));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x537 = 127U;
	static volatile int8_t x538 = INT8_MAX;
	uint32_t x540 = UINT32_MAX;

	t95 = (x537<=((x538*x539)<x540));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x541 = INT64_MAX;
	int8_t x542 = -1;
	int8_t x543 = 1;
	volatile int16_t x544 = INT16_MIN;

	t96 = (x541<=((x542*x543)<x544));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x545 = 6U;
	static int64_t x546 = INT64_MIN;
	uint8_t x547 = 1U;
	int16_t x548 = 94;
	int32_t t97 = 14024;

	t97 = (x545<=((x546*x547)<x548));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x549 = -35;
	static volatile int8_t x551 = INT8_MIN;
	volatile int8_t x552 = 61;

	t98 = (x549<=((x550*x551)<x552));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x553 = 132957217875733LLU;
	int32_t x554 = INT32_MIN;
	int64_t x556 = INT64_MIN;

	t99 = (x553<=((x554*x555)<x556));

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

