#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = INT16_MIN;
int8_t x24 = INT8_MIN;
volatile int32_t t1 = 6725311;
volatile uint64_t x25 = 7863568376LLU;
static int32_t t2 = 2679;
uint8_t x30 = 7U;
static uint32_t t4 = 1159U;
int8_t x45 = -16;
volatile int16_t x58 = INT16_MIN;
volatile int64_t t7 = 367LL;
uint8_t x64 = 14U;
int8_t x65 = INT8_MAX;
int16_t x66 = INT16_MIN;
volatile int32_t t9 = -2;
static uint32_t x70 = UINT32_MAX;
static int64_t x76 = 81862000386617909LL;
int8_t x77 = INT8_MAX;
int64_t t12 = -734LL;
uint16_t x83 = 29991U;
int32_t x84 = 1;
volatile int64_t x103 = INT64_MAX;
volatile uint64_t x107 = 658990LLU;
volatile int8_t x109 = 0;
int64_t x110 = INT64_MAX;
static int32_t t17 = 58;
uint8_t x114 = 2U;
volatile int64_t t19 = -712012957502014LL;
volatile int8_t x125 = -1;
volatile int64_t x127 = 472843345185407583LL;
uint64_t t21 = 33115450LLU;
static volatile uint64_t x142 = UINT64_MAX;
int32_t t25 = -12;
uint32_t x157 = 45U;
int8_t x158 = -1;
static uint64_t x161 = 853003LLU;
int16_t x171 = -1;
int16_t x198 = 15;
uint8_t x215 = UINT8_MAX;
int32_t t37 = 281813311;
uint16_t x233 = 0U;
int16_t x246 = INT16_MIN;
uint8_t x247 = 7U;
uint16_t x257 = 4U;
int32_t x262 = -1;
volatile int16_t x272 = INT16_MAX;
volatile int32_t t46 = 230;
volatile int64_t x276 = -1LL;
uint32_t x283 = 471U;
static uint16_t x288 = UINT16_MAX;
static uint16_t x291 = 2U;
volatile int32_t t52 = 1;
uint8_t x312 = UINT8_MAX;
int32_t t53 = -13;
static uint32_t t54 = 2U;
static int64_t x338 = -1LL;
uint8_t x339 = 5U;
int32_t t58 = -5072;
int16_t x354 = -53;
int8_t x357 = INT8_MIN;
int8_t x359 = -41;
uint64_t x366 = 22LLU;
static int32_t x369 = -109075;
uint16_t x373 = 73U;
volatile int64_t x375 = -3559450094219228LL;
uint8_t x382 = UINT8_MAX;
static int16_t x385 = INT16_MIN;
uint64_t x395 = 101012856345394330LLU;
int32_t x397 = -384189;
uint8_t x400 = 22U;
int8_t x413 = 11;
int32_t t72 = -14571105;
static int32_t t74 = 176018;
int8_t x425 = 7;
int32_t x429 = INT32_MAX;
int32_t x430 = -1;
int8_t x434 = INT8_MIN;
uint64_t t77 = 24971498LLU;
uint64_t x449 = UINT64_MAX;
volatile uint16_t x451 = 18252U;
int8_t x454 = INT8_MAX;
int32_t x455 = INT32_MIN;
static int32_t t80 = -1;
static int32_t x470 = -40;
int16_t x472 = INT16_MAX;
int32_t t83 = -8463;
volatile int8_t x501 = -1;
uint16_t x533 = 0U;
volatile uint64_t x535 = 255151937827LLU;
volatile uint64_t x538 = 77326LLU;
int8_t x542 = INT8_MAX;
int32_t x548 = -1;
volatile int32_t t92 = 318123852;
static int32_t t94 = -67;
static uint32_t x577 = UINT32_MAX;


void f0(void) {
	volatile uint32_t x9 = 62U;
	static int32_t x10 = 441634;
	int32_t x11 = -1;
	volatile int64_t x12 = 31869LL;
	static volatile int64_t t0 = 19665735409926LL;

	t0 = (((x9*x10)<x11)-x12);

	if (t0 != -31868LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = -1;
	volatile int16_t x22 = INT16_MIN;

	t1 = (((x21*x22)<x23)-x24);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x26 = 1;
	static int16_t x27 = INT16_MAX;
	static int8_t x28 = INT8_MIN;

	t2 = (((x25*x26)<x27)-x28);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x29 = 9U;
	volatile int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;
	volatile int32_t t3 = 57463;

	t3 = (((x29*x30)<x31)-x32);

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x41 = UINT8_MAX;
	int8_t x42 = 3;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 6U;

	t4 = (((x41*x42)<x43)-x44);

	if (t4 != 4294967290U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x46 = 4511LLU;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = 2;
	volatile int32_t t5 = -14;

	t5 = (((x45*x46)<x47)-x48);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x49 = INT8_MIN;
	static int8_t x50 = INT8_MIN;
	int32_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	static volatile int32_t t6 = -325167;

	t6 = (((x49*x50)<x51)-x52);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = -1;
	uint16_t x59 = 3U;
	int64_t x60 = INT64_MAX;

	t7 = (((x57*x58)<x59)-x60);

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = UINT16_MAX;
	static int16_t x62 = -3116;
	int32_t x63 = INT32_MIN;
	volatile int32_t t8 = 1065656264;

	t8 = (((x61*x62)<x63)-x64);

	if (t8 != -14) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x67 = INT8_MIN;
	static volatile int8_t x68 = INT8_MIN;

	t9 = (((x65*x66)<x67)-x68);

	if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 73U;
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = -1;
	int32_t t10 = -1;

	t10 = (((x69*x70)<x71)-x72);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -27093027;
	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 90927574U;
	static int64_t t11 = 1LL;

	t11 = (((x73*x74)<x75)-x76);

	if (t11 != -81862000386617908LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x78 = 872U;
	volatile int32_t x79 = INT32_MIN;
	static int64_t x80 = -1LL;

	t12 = (((x77*x78)<x79)-x80);

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 555123LLU;
	int32_t t13 = 799;

	t13 = (((x81*x82)<x83)-x84);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = 7317LL;
	int8_t x90 = INT8_MIN;
	static int64_t x91 = INT64_MAX;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t14 = -170883086;

	t14 = (((x89*x90)<x91)-x92);

	if (t14 != -254) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x101 = UINT8_MAX;
	static volatile int16_t x102 = -1;
	volatile int64_t x104 = -1LL;
	volatile int64_t t15 = 28348148572141022LL;

	t15 = (((x101*x102)<x103)-x104);

	if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x105 = -745;
	static uint32_t x106 = 13148756U;
	uint64_t x108 = 4LLU;
	volatile uint64_t t16 = 9905LLU;

	t16 = (((x105*x106)<x107)-x108);

	if (t16 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x111 = 174637722U;
	uint16_t x112 = 5663U;

	t17 = (((x109*x110)<x111)-x112);

	if (t17 != -5662) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x113 = 861U;
	static uint8_t x115 = UINT8_MAX;
	static int32_t x116 = -4076192;
	int32_t t18 = -89;

	t18 = (((x113*x114)<x115)-x116);

	if (t18 != 4076192) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x117 = 53434334313126LLU;
	int32_t x118 = -1;
	int32_t x119 = INT32_MAX;
	static int64_t x120 = 1439314817308327LL;

	t19 = (((x117*x118)<x119)-x120);

	if (t19 != -1439314817308327LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x121 = -21;
	int32_t x122 = -1;
	static int8_t x123 = -3;
	int32_t x124 = -30;
	static int32_t t20 = 571;

	t20 = (((x121*x122)<x123)-x124);

	if (t20 != 30) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x126 = UINT16_MAX;
	uint64_t x128 = 148LLU;

	t21 = (((x125*x126)<x127)-x128);

	if (t21 != 18446744073709551469LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = -1LL;
	int32_t x130 = 12;
	int32_t x131 = -32997027;
	volatile uint32_t x132 = 28324221U;
	volatile uint32_t t22 = 24156U;

	t22 = (((x129*x130)<x131)-x132);

	if (t22 != 4266643075U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = 1;
	int8_t x134 = INT8_MIN;
	volatile uint64_t x135 = 12455646334LLU;
	int16_t x136 = INT16_MAX;
	volatile int32_t t23 = 97835;

	t23 = (((x133*x134)<x135)-x136);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x141 = 928;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t24 = -72282;

	t24 = (((x141*x142)<x143)-x144);

	if (t24 != -2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = INT64_MAX;
	uint64_t x150 = 1609509916159LLU;
	static int32_t x151 = -1;
	volatile int8_t x152 = INT8_MAX;

	t25 = (((x149*x150)<x151)-x152);

	if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = 1LL;
	uint16_t x155 = 26U;
	int32_t x156 = INT32_MAX;
	int32_t t26 = -13048;

	t26 = (((x153*x154)<x155)-x156);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x159 = 265145U;
	static int8_t x160 = INT8_MIN;
	int32_t t27 = 472;

	t27 = (((x157*x158)<x159)-x160);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x162 = INT64_MIN;
	static volatile int64_t x163 = INT64_MIN;
	uint64_t x164 = 11536589LLU;
	static uint64_t t28 = 78574319LLU;

	t28 = (((x161*x162)<x163)-x164);

	if (t28 != 18446744073698015027LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = 484812LLU;
	volatile int8_t x170 = INT8_MAX;
	uint16_t x172 = 14U;
	volatile int32_t t29 = -39100;

	t29 = (((x169*x170)<x171)-x172);

	if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = 99918735957LL;
	uint64_t x174 = 969430514885828LLU;
	volatile int16_t x175 = -1;
	uint8_t x176 = 22U;
	volatile int32_t t30 = 11678;

	t30 = (((x173*x174)<x175)-x176);

	if (t30 != -21) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x177 = 3422124014716LLU;
	static int32_t x178 = 2;
	int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	int32_t t31 = 3;

	t31 = (((x177*x178)<x179)-x180);

	if (t31 != -65534) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static volatile uint8_t x190 = UINT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	static uint64_t x192 = 249736LLU;
	volatile uint64_t t32 = 23998LLU;

	t32 = (((x189*x190)<x191)-x192);

	if (t32 != 18446744073709301880LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = -1;
	volatile int32_t t33 = 482374877;

	t33 = (((x197*x198)<x199)-x200);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x201 = -2094;
	int8_t x202 = INT8_MIN;
	static int32_t x203 = INT32_MIN;
	uint8_t x204 = 1U;
	static volatile int32_t t34 = -9;

	t34 = (((x201*x202)<x203)-x204);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	volatile int32_t x207 = -439;
	static volatile int16_t x208 = -1;
	volatile int32_t t35 = -1726778;

	t35 = (((x205*x206)<x207)-x208);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x213 = 13627413U;
	static volatile int64_t x214 = -1LL;
	int16_t x216 = INT16_MAX;
	volatile int32_t t36 = -38;

	t36 = (((x213*x214)<x215)-x216);

	if (t36 != -32766) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x217 = -16851890LL;
	uint8_t x218 = 53U;
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MIN;

	t37 = (((x217*x218)<x219)-x220);

	if (t37 != 32769) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x221 = 61U;
	int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t38 = -28991394;

	t38 = (((x221*x222)<x223)-x224);

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x234 = 87U;
	static volatile int8_t x235 = -16;
	static int16_t x236 = INT16_MAX;
	volatile int32_t t39 = 157;

	t39 = (((x233*x234)<x235)-x236);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x245 = 6U;
	uint8_t x248 = 63U;
	volatile int32_t t40 = 1906;

	t40 = (((x245*x246)<x247)-x248);

	if (t40 != -62) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x249 = 0U;
	static volatile uint8_t x250 = 3U;
	uint32_t x251 = 568196171U;
	int8_t x252 = -1;
	int32_t t41 = 140;

	t41 = (((x249*x250)<x251)-x252);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x253 = INT16_MAX;
	uint8_t x254 = 1U;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = 35416U;
	static uint32_t t42 = 17144531U;

	t42 = (((x253*x254)<x255)-x256);

	if (t42 != 4294931880U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	int32_t t43 = -225056442;

	t43 = (((x257*x258)<x259)-x260);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x261 = 9U;
	static int32_t x263 = INT32_MAX;
	int64_t x264 = INT64_MAX;
	volatile int64_t t44 = 232916085422LL;

	t44 = (((x261*x262)<x263)-x264);

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x265 = -1;
	int16_t x266 = 5;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = 15U;
	int32_t t45 = -377969260;

	t45 = (((x265*x266)<x267)-x268);

	if (t45 != -15) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x269 = -1;
	int32_t x270 = -15048;
	volatile int64_t x271 = INT64_MIN;

	t46 = (((x269*x270)<x271)-x272);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x273 = 5783503967383562087LLU;
	int32_t x274 = 285615;
	static int8_t x275 = INT8_MAX;
	int64_t t47 = 36622634169350LL;

	t47 = (((x273*x274)<x275)-x276);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	uint64_t x284 = 1LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x281*x282)<x283)-x284);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x285 = 1797129073U;
	volatile uint8_t x286 = 72U;
	int8_t x287 = INT8_MIN;
	static volatile int32_t t49 = 62451881;

	t49 = (((x285*x286)<x287)-x288);

	if (t49 != -65534) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x289 = 22;
	int64_t x290 = -1LL;
	static uint32_t x292 = UINT32_MAX;
	uint32_t t50 = 69017U;

	t50 = (((x289*x290)<x291)-x292);

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 0U;
	static int8_t x299 = -1;
	volatile uint16_t x300 = 123U;
	int32_t t51 = 3094239;

	t51 = (((x297*x298)<x299)-x300);

	if (t51 != -122) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	volatile int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 9U;

	t52 = (((x301*x302)<x303)-x304);

	if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -90;

	t53 = (((x309*x310)<x311)-x312);

	if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x313 = 6831116891537LLU;
	uint64_t x314 = 2320618LLU;
	int32_t x315 = 1596;
	uint32_t x316 = 31525281U;

	t54 = (((x313*x314)<x315)-x316);

	if (t54 != 4263442015U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = 353;
	int16_t x322 = 533;
	int32_t x323 = -9386432;
	uint32_t x324 = 5928409U;
	volatile uint32_t t55 = 21487060U;

	t55 = (((x321*x322)<x323)-x324);

	if (t55 != 4289038887U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x329 = 60821U;
	int32_t x330 = -1;
	volatile int32_t x331 = -1;
	int64_t x332 = 77189LL;
	int64_t t56 = 138296562LL;

	t56 = (((x329*x330)<x331)-x332);

	if (t56 != -77188LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = 2139;
	volatile uint32_t x334 = 1085495U;
	volatile uint8_t x335 = UINT8_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t57 = -619118;

	t57 = (((x333*x334)<x335)-x336);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x340 = 3U;

	t58 = (((x337*x338)<x339)-x340);

	if (t58 != -3) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x341 = INT16_MIN;
	static int8_t x342 = -1;
	volatile uint64_t x343 = 2938LLU;
	int8_t x344 = -1;
	volatile int32_t t59 = 0;

	t59 = (((x341*x342)<x343)-x344);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x353 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t60 = -198933588;

	t60 = (((x353*x354)<x355)-x356);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x358 = 780631336U;
	volatile int32_t x360 = -4;
	int32_t t61 = -367253;

	t61 = (((x357*x358)<x359)-x360);

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x365 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 0U;
	int32_t t62 = -59;

	t62 = (((x365*x366)<x367)-x368);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x370 = 85U;
	static uint16_t x371 = 2015U;
	int64_t x372 = 0LL;
	volatile int64_t t63 = 96415611842893919LL;

	t63 = (((x369*x370)<x371)-x372);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x374 = UINT32_MAX;
	uint64_t x376 = 2334LLU;
	uint64_t t64 = 173871LLU;

	t64 = (((x373*x374)<x375)-x376);

	if (t64 != 18446744073709549282LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x381 = -503;
	int32_t x383 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	static volatile int32_t t65 = -4;

	t65 = (((x381*x382)<x383)-x384);

	if (t65 != -254) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x386 = UINT8_MAX;
	int16_t x387 = -1;
	static volatile uint8_t x388 = 0U;
	static volatile int32_t t66 = 38;

	t66 = (((x385*x386)<x387)-x388);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x390 = 1726566LLU;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -93524159291287LL;
	volatile int64_t t67 = -6295506LL;

	t67 = (((x389*x390)<x391)-x392);

	if (t67 != 93524159291288LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x393 = 1U;
	static int32_t x394 = -1;
	uint16_t x396 = 1749U;
	volatile int32_t t68 = -32244;

	t68 = (((x393*x394)<x395)-x396);

	if (t68 != -1749) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x398 = -2;
	int16_t x399 = INT16_MIN;
	volatile int32_t t69 = -2735;

	t69 = (((x397*x398)<x399)-x400);

	if (t69 != -22) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x405 = INT8_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	int16_t x407 = -1;
	uint8_t x408 = 21U;
	volatile int32_t t70 = -37;

	t70 = (((x405*x406)<x407)-x408);

	if (t70 != -20) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x409 = 13;
	uint8_t x410 = UINT8_MAX;
	volatile int8_t x411 = -6;
	int64_t x412 = 3836454937008256LL;
	int64_t t71 = -12953231LL;

	t71 = (((x409*x410)<x411)-x412);

	if (t71 != -3836454937008256LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x414 = 5U;
	static int16_t x415 = -1;
	volatile int32_t x416 = INT32_MAX;

	t72 = (((x413*x414)<x415)-x416);

	if (t72 != -2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x417 = INT16_MIN;
	int8_t x418 = 13;
	volatile int64_t x419 = 15262454244476413LL;
	volatile int16_t x420 = INT16_MIN;
	int32_t t73 = 1572022;

	t73 = (((x417*x418)<x419)-x420);

	if (t73 != 32769) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = 99333303112553861LL;
	static int8_t x422 = 2;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;

	t74 = (((x421*x422)<x423)-x424);

	if (t74 != -65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x426 = 591U;
	int64_t x427 = INT64_MIN;
	static int32_t x428 = -2371;
	volatile int32_t t75 = 127795796;

	t75 = (((x425*x426)<x427)-x428);

	if (t75 != 2371) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x431 = INT64_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t76 = 77164488;

	t76 = (((x429*x430)<x431)-x432);

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x433 = -1LL;
	int64_t x435 = -1LL;
	volatile uint64_t x436 = 10432854030939LLU;

	t77 = (((x433*x434)<x435)-x436);

	if (t77 != 18446733640855520677LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x437 = 2292U;
	int16_t x438 = 1;
	int16_t x439 = INT16_MIN;
	int64_t x440 = 3264253700793056LL;
	int64_t t78 = 22150943183967140LL;

	t78 = (((x437*x438)<x439)-x440);

	if (t78 != -3264253700793056LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x450 = INT16_MIN;
	uint32_t x452 = 31880U;
	uint32_t t79 = 660U;

	t79 = (((x449*x450)<x451)-x452);

	if (t79 != 4294935416U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x453 = -12557;
	int8_t x456 = 1;

	t80 = (((x453*x454)<x455)-x456);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x469 = 32;
	static int32_t x471 = 1894;
	volatile int32_t t81 = -4153;

	t81 = (((x469*x470)<x471)-x472);

	if (t81 != -32766) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x481 = 7263U;
	int8_t x482 = -1;
	uint8_t x483 = 6U;
	int16_t x484 = 5830;
	volatile int32_t t82 = -8148;

	t82 = (((x481*x482)<x483)-x484);

	if (t82 != -5829) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x489 = INT16_MAX;
	volatile int16_t x490 = INT16_MIN;
	volatile int32_t x491 = -1025926;
	int8_t x492 = INT8_MIN;

	t83 = (((x489*x490)<x491)-x492);

	if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x493 = 24U;
	int8_t x494 = 0;
	uint64_t x495 = UINT64_MAX;
	volatile int32_t x496 = 77;
	static int32_t t84 = 3;

	t84 = (((x493*x494)<x495)-x496);

	if (t84 != -76) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x502 = -1;
	static int8_t x503 = -1;
	static volatile int32_t x504 = -1611537;
	volatile int32_t t85 = 59058;

	t85 = (((x501*x502)<x503)-x504);

	if (t85 != 1611537) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x509 = -25;
	volatile uint16_t x510 = UINT16_MAX;
	int16_t x511 = INT16_MIN;
	volatile int32_t x512 = INT32_MAX;
	volatile int32_t t86 = 60133;

	t86 = (((x509*x510)<x511)-x512);

	if (t86 != -2147483646) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x517 = -1;
	int64_t x518 = INT64_MAX;
	uint8_t x519 = 0U;
	int32_t x520 = -97493;
	volatile int32_t t87 = 4;

	t87 = (((x517*x518)<x519)-x520);

	if (t87 != 97494) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x521 = 139U;
	static int16_t x522 = INT16_MAX;
	uint8_t x523 = UINT8_MAX;
	uint8_t x524 = 3U;
	int32_t t88 = -74385651;

	t88 = (((x521*x522)<x523)-x524);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x534 = UINT64_MAX;
	static int64_t x536 = INT64_MAX;
	int64_t t89 = -182459777699949LL;

	t89 = (((x533*x534)<x535)-x536);

	if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x537 = -37106231LL;
	int64_t x539 = 34085028491981LL;
	int64_t x540 = -1LL;
	int64_t t90 = 30946597466LL;

	t90 = (((x537*x538)<x539)-x540);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x541 = 120667544553LLU;
	uint32_t x543 = UINT32_MAX;
	uint32_t x544 = 68U;
	volatile uint32_t t91 = 30U;

	t91 = (((x541*x542)<x543)-x544);

	if (t91 != 4294967228U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x545 = INT32_MIN;
	int64_t x546 = 2707353333LL;
	static int32_t x547 = INT32_MAX;

	t92 = (((x545*x546)<x547)-x548);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x549 = INT32_MIN;
	uint64_t x550 = UINT64_MAX;
	static int16_t x551 = INT16_MIN;
	uint8_t x552 = 3U;
	int32_t t93 = -698;

	t93 = (((x549*x550)<x551)-x552);

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x553 = 127U;
	static int8_t x554 = INT8_MAX;
	volatile int64_t x555 = -30399287476100LL;
	volatile int16_t x556 = INT16_MIN;

	t94 = (((x553*x554)<x555)-x556);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x557 = -1;
	int8_t x558 = INT8_MAX;
	int16_t x559 = -3862;
	static uint32_t x560 = 3222U;
	volatile uint32_t t95 = 2U;

	t95 = (((x557*x558)<x559)-x560);

	if (t95 != 4294964074U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x569 = INT64_MIN;
	uint64_t x570 = 65543873535464286LLU;
	int8_t x571 = INT8_MAX;
	int32_t x572 = 3;
	int32_t t96 = -25;

	t96 = (((x569*x570)<x571)-x572);

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x573 = -769;
	static int8_t x574 = INT8_MIN;
	static int8_t x575 = -1;
	int8_t x576 = INT8_MAX;
	int32_t t97 = 18397181;

	t97 = (((x573*x574)<x575)-x576);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x578 = INT8_MAX;
	static int64_t x579 = INT64_MIN;
	uint64_t x580 = UINT64_MAX;
	volatile uint64_t t98 = 186LLU;

	t98 = (((x577*x578)<x579)-x580);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x581 = 95843764U;
	volatile int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MAX;
	volatile int32_t t99 = -14365065;

	t99 = (((x581*x582)<x583)-x584);

	if (t99 != -126) { NG(); } else { ; }
	
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

