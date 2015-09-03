#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 1U;
volatile uint32_t x4 = 63108723U;
int32_t x6 = INT32_MIN;
int16_t x9 = 1;
uint64_t t2 = UINT64_MAX;
volatile uint16_t x20 = 337U;
uint16_t x25 = UINT16_MAX;
static int16_t x27 = -4;
uint16_t x41 = 0U;
int16_t x43 = 861;
volatile int16_t x44 = 4;
int16_t x45 = 112;
static int64_t x46 = 651414LL;
static volatile int8_t x52 = INT8_MIN;
static int8_t x59 = INT8_MAX;
volatile int8_t x64 = INT8_MAX;
int16_t x66 = INT16_MIN;
int16_t x67 = 6999;
int16_t x72 = INT16_MAX;
volatile uint64_t t16 = 258LLU;
uint32_t x102 = 65061003U;
int8_t x103 = INT8_MAX;
int8_t x104 = -14;
uint64_t x108 = 4145817LLU;
static uint32_t x109 = 118U;
static int64_t x111 = INT64_MAX;
volatile int32_t t23 = -130;
static int64_t t24 = 3028LL;
int64_t x124 = -419526LL;
uint32_t x133 = UINT32_MAX;
volatile int32_t x134 = -1;
volatile int16_t x136 = INT16_MAX;
volatile int64_t x137 = 73863LL;
static uint64_t x139 = UINT64_MAX;
static int16_t x142 = INT16_MIN;
static int8_t x147 = INT8_MIN;
uint64_t x162 = 4656944864435247652LLU;
uint32_t x167 = 4405U;
uint8_t x173 = 6U;
int32_t x183 = -1;
int64_t x187 = INT64_MIN;
int32_t x198 = INT32_MIN;
volatile uint64_t t42 = 194034LLU;
uint32_t x212 = UINT32_MAX;
static int16_t x215 = INT16_MAX;
uint32_t t45 = 107232500U;
volatile uint32_t x223 = 22U;
static uint64_t x226 = 652343911LLU;
static volatile int8_t x235 = -1;
static int32_t x237 = INT32_MIN;
int16_t x251 = -1;
volatile int16_t x252 = INT16_MIN;
uint8_t x257 = 52U;
uint32_t t54 = 2163U;
static int32_t x261 = -3272;
int64_t t55 = 2905932049LL;
int16_t x270 = INT16_MIN;
int32_t x271 = -1;
uint16_t x272 = UINT16_MAX;
int64_t t57 = 190965LL;
uint64_t x278 = UINT64_MAX;
int32_t x279 = INT32_MIN;
int8_t x286 = -1;
volatile int64_t x288 = 909LL;
static int64_t t61 = -3700620751809LL;
static volatile uint16_t x289 = 224U;
volatile int32_t t62 = 6375;
int64_t x295 = INT64_MIN;
int16_t x301 = INT16_MAX;
int16_t x302 = INT16_MIN;
volatile int8_t x303 = -1;
static uint16_t x307 = 1301U;
volatile uint64_t t65 = 252904799208014LLU;
int32_t x314 = INT32_MIN;
int64_t t67 = 6757624432LL;
static uint32_t t70 = 47018614U;
int8_t x332 = INT8_MIN;
uint32_t t71 = 495U;
uint64_t x334 = 2264762718421136445LLU;
static int8_t x336 = INT8_MIN;
volatile uint64_t t72 = 3999599818575LLU;
uint32_t x341 = 1137763608U;
int8_t x349 = INT8_MAX;
int32_t x353 = INT32_MIN;
static uint64_t x356 = 205271LLU;
static volatile uint64_t x371 = UINT64_MAX;
int64_t x378 = INT64_MIN;
uint16_t x383 = 7834U;
static uint64_t x403 = 28767LLU;
static uint8_t x408 = UINT8_MAX;
int8_t x410 = INT8_MAX;
int16_t x414 = -975;
volatile int64_t t90 = -51416680LL;
int32_t x421 = INT32_MIN;
static uint64_t t91 = 62734772999967LLU;
static uint16_t x426 = 55U;
int8_t x428 = -1;
int16_t x446 = INT16_MIN;
static int64_t x451 = INT64_MIN;
static int64_t t96 = -776126094457890LL;
static volatile int16_t x456 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x3 = 677U;
	uint32_t t0 = 5U;

	t0 = (x1*((x2&x3)|x4));

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x7 = 1380145914U;
	uint16_t x8 = 1U;
	volatile int64_t t1 = 836094597091365226LL;

	t1 = (x5*((x6&x7)|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 48U;
	static uint64_t x11 = 37435816LLU;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9*((x10&x11)|x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = -1;
	int64_t t3 = 28205622LL;

	t3 = (x13*((x14&x15)|x16));

	if (t3 != 2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	int64_t x18 = 7127188LL;
	uint32_t x19 = 14U;
	volatile int64_t t4 = -228435262119LL;

	t4 = (x17*((x18&x19)|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = 492893LL;
	int16_t x28 = INT16_MIN;
	int64_t t5 = -16408381333LL;

	t5 = (x25*((x26&x27)|x28));

	if (t5 != -2057536860LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 26U;
	static int8_t x34 = INT8_MAX;
	int16_t x35 = -1;
	static uint8_t x36 = UINT8_MAX;
	int32_t t6 = -62506446;

	t6 = (x33*((x34&x35)|x36));

	if (t6 != 6630) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x42 = INT32_MIN;
	volatile int32_t t7 = 2218954;

	t7 = (x41*((x42&x43)|x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x47 = -1;
	volatile int16_t x48 = -1;
	static volatile int64_t t8 = 10239LL;

	t8 = (x45*((x46&x47)|x48));

	if (t8 != -112LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = 68649221LL;
	int32_t x50 = 16;
	static int16_t x51 = -1;
	int64_t t9 = -12LL;

	t9 = (x49*((x50&x51)|x52));

	if (t9 != -7688712752LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MAX;
	volatile uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 211848LLU;
	uint64_t t10 = 241970094LLU;

	t10 = (x53*((x54&x55)|x56));

	if (t10 != 6945522689LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 932;
	uint8_t x58 = 9U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t11 = 2316395;

	t11 = (x57*((x58&x59)|x60));

	if (t11 != 30538844) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 7822575U;
	volatile int16_t x62 = 228;
	volatile int16_t x63 = INT16_MAX;
	uint32_t t12 = 4524174U;

	t12 = (x61*((x62&x63)|x64));

	if (t12 != 1994756625U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 12177037U;
	static uint8_t x68 = 91U;
	static uint32_t t13 = 252551U;

	t13 = (x65*((x66&x67)|x68));

	if (t13 != 1108110367U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 45;
	uint64_t x70 = UINT64_MAX;
	static int64_t x71 = INT64_MAX;
	uint64_t t14 = 1111041536162093LLU;

	t14 = (x69*((x70&x71)|x72));

	if (t14 != 9223372036854775763LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	static uint64_t x74 = UINT64_MAX;
	volatile uint16_t x75 = 3U;
	volatile uint16_t x76 = UINT16_MAX;
	volatile uint64_t t15 = 0LLU;

	t15 = (x73*((x74&x75)|x76));

	if (t15 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = INT64_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	static int8_t x83 = -1;
	int64_t x84 = INT64_MIN;

	t16 = (x81*((x82&x83)|x84));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	static int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	static volatile int8_t x88 = 54;
	int32_t t17 = 4263;

	t17 = (x85*((x86&x87)|x88));

	if (t17 != 32714) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = 1;
	static int8_t x94 = -1;
	uint32_t x95 = 656896U;
	static int32_t x96 = INT32_MIN;
	volatile uint32_t t18 = 23U;

	t18 = (x93*((x94&x95)|x96));

	if (t18 != 2148140544U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = -1;
	uint8_t x98 = 0U;
	volatile int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	volatile int32_t t19 = -15547659;

	t19 = (x97*((x98&x99)|x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile uint32_t t20 = 10625405U;

	t20 = (x101*((x102&x103)|x104));

	if (t20 != 2147483653U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	uint8_t x107 = 60U;
	volatile uint64_t t21 = 15460277299544LLU;

	t21 = (x105*((x106&x107)|x108));

	if (t21 != 18446744073705405799LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x110 = 371834423LLU;
	uint32_t x112 = UINT32_MAX;
	volatile uint64_t t22 = 377977397071026091LLU;

	t22 = (x109*((x110&x111)|x112));

	if (t22 != 506806140810LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = -343;
	int8_t x115 = INT8_MIN;
	static int16_t x116 = 1;

	t23 = (x113*((x114&x115)|x116));

	if (t23 != 12550144) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = 3542713327284LL;
	int8_t x119 = 14;
	static int16_t x120 = -1;

	t24 = (x117*((x118&x119)|x120));

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 3U;
	int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MIN;
	int64_t t25 = -232775496994429LL;

	t25 = (x121*((x122&x123)|x124));

	if (t25 != -1258578LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = -5;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t26 = -226197634223LL;

	t26 = (x125*((x126&x127)|x128));

	if (t26 != 274877906944LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x135 = INT32_MIN;
	static volatile uint32_t t27 = 31953U;

	t27 = (x133*((x134&x135)|x136));

	if (t27 != 2147450881U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x138 = INT32_MIN;
	static int32_t x140 = INT32_MAX;
	static uint64_t t28 = 85887587482228LLU;

	t28 = (x137*((x138&x139)|x140));

	if (t28 != 18446744073709477753LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 13U;
	volatile int32_t x143 = -1;
	int64_t x144 = INT64_MAX;
	int64_t t29 = -17LL;

	t29 = (x141*((x142&x143)|x144));

	if (t29 != -13LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 1;
	int32_t x146 = INT32_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t30 = -445902LL;

	t30 = (x145*((x146&x147)|x148));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x153 = 2443040566LLU;
	uint64_t x154 = 10465LLU;
	volatile uint64_t x155 = 17376986434226LLU;
	int8_t x156 = 39;
	uint64_t t31 = 1LLU;

	t31 = (x153*((x154&x155)|x156));

	if (t31 != 5411334853690LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x163 = -1;
	uint16_t x164 = 14345U;
	volatile uint64_t t32 = 321921LLU;

	t32 = (x161*((x162&x163)|x164));

	if (t32 != 9947735313670391251LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t33 = 103LLU;

	t33 = (x165*((x166&x167)|x168));

	if (t33 != 18446744069414617088LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MAX;
	int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = -6;
	int64_t t34 = 233428106LL;

	t34 = (x169*((x170&x171)|x172));

	if (t34 != -762LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x174 = 2290U;
	int16_t x175 = -1;
	static volatile int8_t x176 = -13;
	volatile uint32_t t35 = 3265631U;

	t35 = (x173*((x174&x175)|x176));

	if (t35 != 4294967218U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MAX;
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = 63910U;
	int8_t x180 = -1;
	uint32_t t36 = 3827028U;

	t36 = (x177*((x178&x179)|x180));

	if (t36 != 2147483649U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = -3;
	volatile int32_t x184 = -1;
	volatile int32_t t37 = -442893;

	t37 = (x181*((x182&x183)|x184));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MAX;
	static int16_t x188 = INT16_MIN;
	volatile int64_t t38 = -375260640977202LL;

	t38 = (x185*((x186&x187)|x188));

	if (t38 != -4161536LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = 3U;
	uint16_t x194 = 2237U;
	volatile uint64_t x195 = 1874946LLU;
	static int64_t x196 = 31815LL;
	volatile uint64_t t39 = 1838551LLU;

	t39 = (x193*((x194&x195)|x196));

	if (t39 != 95445LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t40 = 11752300U;

	t40 = (x197*((x198&x199)|x200));

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = 95896458;
	uint16_t x202 = UINT16_MAX;
	volatile uint32_t x203 = UINT32_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile uint32_t t41 = 37856275U;

	t41 = (x201*((x202&x203)|x204));

	if (t41 != 4199070838U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = 308215261;
	int32_t x206 = INT32_MIN;
	static uint64_t x207 = UINT64_MAX;
	int64_t x208 = -1108199362LL;

	t42 = (x205*((x206&x207)|x208));

	if (t42 != 18105180118110688134LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = 5007U;
	int16_t x210 = -1;
	uint16_t x211 = 3U;
	uint32_t t43 = 4268U;

	t43 = (x209*((x210&x211)|x212));

	if (t43 != 4294962289U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t44 = 28;

	t44 = (x213*((x214&x215)|x216));

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = INT32_MAX;
	static uint8_t x219 = UINT8_MAX;
	static int16_t x220 = -914;

	t45 = (x217*((x218&x219)|x220));

	if (t45 != 769U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	int32_t x224 = -1;
	volatile uint32_t t46 = 144U;

	t46 = (x221*((x222&x223)|x224));

	if (t46 != 128U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x227 = 100U;
	int8_t x228 = INT8_MIN;
	uint64_t t47 = 1062286204834LLU;

	t47 = (x225*((x226&x227)|x228));

	if (t47 != 917504LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = -2;
	uint16_t x230 = 7335U;
	volatile uint16_t x231 = 1U;
	int64_t x232 = 0LL;
	volatile int64_t t48 = 63626634594LL;

	t48 = (x229*((x230&x231)|x232));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	volatile int32_t x236 = -35167;
	volatile int32_t t49 = 2;

	t49 = (x233*((x234&x235)|x236));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x238 = 3U;
	int64_t x239 = INT64_MIN;
	static int32_t x240 = -1;
	static volatile int64_t t50 = -361150798LL;

	t50 = (x237*((x238&x239)|x240));

	if (t50 != 2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = 59U;
	int8_t x242 = -9;
	static int16_t x243 = 3;
	int64_t x244 = -2532349389195201LL;
	int64_t t51 = -10261LL;

	t51 = (x241*((x242&x243)|x244));

	if (t51 != -149408613962516859LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x245 = 14;
	static uint64_t x246 = 96200228119233261LLU;
	static int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t52 = 2756717279935728LLU;

	t52 = (x245*((x246&x247)|x248));

	if (t52 != 18446744045608020214LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x249 = 0U;
	uint32_t x250 = UINT32_MAX;
	volatile uint32_t t53 = 84621U;

	t53 = (x249*((x250&x251)|x252));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x258 = 4534U;
	static uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 354879548U;

	t54 = (x257*((x258&x259)|x260));

	if (t54 != 1273874072U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x262 = 4U;
	volatile int64_t x263 = INT64_MAX;
	uint32_t x264 = UINT32_MAX;

	t55 = (x261*((x262&x263)|x264));

	if (t55 != -14053132989240LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MAX;
	volatile int8_t x266 = INT8_MIN;
	uint64_t x267 = 528032784LLU;
	int64_t x268 = 332583LL;
	static volatile uint64_t t56 = 147186452LLU;

	t56 = (x265*((x266&x267)|x268));

	if (t56 != 67094076505LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x269 = INT64_MAX;

	t57 = (x269*((x270&x271)|x272));

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x273 = 970837U;
	uint16_t x274 = 21U;
	int32_t x275 = -1035576553;
	static int16_t x276 = -1;
	uint32_t t58 = 12679U;

	t58 = (x273*((x274&x275)|x276));

	if (t58 != 4293996459U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x280 = 1U;
	static uint64_t t59 = 2972426LLU;

	t59 = (x277*((x278&x279)|x280));

	if (t59 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -8955544426093193LL;
	volatile int8_t x282 = -1;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	int64_t t60 = -22533863726092324LL;

	t60 = (x281*((x282&x283)|x284));

	if (t60 != 8955544426093193LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x285 = INT8_MIN;
	int64_t x287 = 293LL;

	t61 = (x285*((x286&x287)|x288));

	if (t61 != -120448LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x290 = -1;
	int16_t x291 = -202;
	int32_t x292 = 113066226;

	t62 = (x289*((x290&x291)|x292));

	if (t62 != -2240) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x293 = 92U;
	static volatile int8_t x294 = 9;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t63 = 6374489097053886997LLU;

	t63 = (x293*((x294&x295)|x296));

	if (t63 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x304 = -1;
	int32_t t64 = 1512138;

	t64 = (x301*((x302&x303)|x304));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x305 = 1;
	int16_t x306 = INT16_MIN;
	uint64_t x308 = 164221497034676LLU;

	t65 = (x305*((x306&x307)|x308));

	if (t65 != 164221497034676LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x309 = UINT32_MAX;
	volatile int16_t x310 = INT16_MAX;
	uint64_t x311 = 990132727422793LLU;
	int8_t x312 = -44;
	static uint64_t t66 = 11744654464531336LLU;

	t66 = (x309*((x310&x311)|x312));

	if (t66 != 18446743923385696291LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -1LL;
	uint16_t x315 = 2459U;
	uint32_t x316 = 1313288U;

	t67 = (x313*((x314&x315)|x316));

	if (t67 != -1313288LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = 1809856616661LLU;
	int16_t x319 = -7330;
	uint32_t x320 = 455038U;
	static volatile uint64_t t68 = 2472885433845109227LLU;

	t68 = (x317*((x318&x319)|x320));

	if (t68 != 18387438686519230464LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	static int64_t x323 = -1LL;
	int64_t x324 = 246851LL;
	volatile int64_t t69 = -8308938765668512LL;

	t69 = (x321*((x322&x323)|x324));

	if (t69 != 61LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint8_t x326 = 4U;
	volatile uint32_t x327 = UINT32_MAX;
	int16_t x328 = -1;

	t70 = (x325*((x326&x327)|x328));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	uint32_t x331 = 1U;

	t71 = (x329*((x330&x331)|x332));

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x333 = 1;
	int64_t x335 = -5840051153276LL;

	t72 = (x333*((x334&x335)|x336));

	if (t72 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 975147637U;
	uint64_t x338 = 804866478189481LLU;
	int32_t x339 = INT32_MIN;
	static uint64_t x340 = 16450912023LLU;
	uint64_t t73 = 1036414488623LLU;

	t73 = (x337*((x338&x339)|x340));

	if (t73 != 1001406236722508675LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x342 = 354525;
	uint16_t x343 = UINT16_MAX;
	static int32_t x344 = INT32_MIN;
	volatile uint32_t t74 = 616U;

	t74 = (x341*((x342&x343)|x344));

	if (t74 != 1751614904U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	uint16_t x348 = UINT16_MAX;
	int64_t t75 = -11189691LL;

	t75 = (x345*((x346&x347)|x348));

	if (t75 != -140735340871680LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x350 = 386191246U;
	int64_t x351 = INT64_MIN;
	int8_t x352 = -3;
	volatile int64_t t76 = 15440203LL;

	t76 = (x349*((x350&x351)|x352));

	if (t76 != -381LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x354 = UINT32_MAX;
	static int16_t x355 = INT16_MAX;
	volatile uint64_t t77 = 1LLU;

	t77 = (x353*((x354&x355)|x356));

	if (t77 != 18446251494647791616LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = -192;
	volatile uint16_t x358 = 2254U;
	int16_t x359 = -1;
	int32_t x360 = -8641;
	volatile int32_t t78 = 233;

	t78 = (x357*((x358&x359)|x360));

	if (t78 != 1622208) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x369 = -1;
	static volatile uint16_t x370 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t79 = 5154424409560LLU;

	t79 = (x369*((x370&x371)|x372));

	if (t79 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x373 = 130584289U;
	volatile int32_t x374 = 45;
	int64_t x375 = 4606LL;
	int16_t x376 = -3019;
	volatile int64_t t80 = -322244LL;

	t80 = (x373*((x374&x375)|x376));

	if (t80 != -393189294179LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x377 = 998U;
	uint8_t x379 = 0U;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t81 = 494910LLU;

	t81 = (x377*((x378&x379)|x380));

	if (t81 != 18446744073709550618LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x381 = 13464593LLU;
	int64_t x382 = -1LL;
	volatile int64_t x384 = INT64_MAX;
	volatile uint64_t t82 = 13634876LLU;

	t82 = (x381*((x382&x383)|x384));

	if (t82 != 9223372036841311215LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x385 = -1LL;
	uint16_t x386 = 153U;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = 443;
	static int64_t t83 = -5875670LL;

	t83 = (x385*((x386&x387)|x388));

	if (t83 != -443LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = -60971765LL;
	static volatile int64_t x390 = -28383LL;
	static int64_t x391 = INT64_MIN;
	int16_t x392 = -66;
	int64_t t84 = 16626970647282574LL;

	t84 = (x389*((x390&x391)|x392));

	if (t84 != 4024136490LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = -1;
	int64_t x398 = INT64_MAX;
	int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = 51U;
	static volatile int64_t t85 = -3888434LL;

	t85 = (x397*((x398&x399)|x400));

	if (t85 != -51LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x401 = UINT64_MAX;
	uint16_t x402 = 939U;
	static uint64_t x404 = UINT64_MAX;
	uint64_t t86 = 4213321398LLU;

	t86 = (x401*((x402&x403)|x404));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	volatile int16_t x407 = 3767;
	volatile int64_t t87 = 72009731663687LL;

	t87 = (x405*((x406&x407)|x408));

	if (t87 != -8355840LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = INT16_MAX;
	volatile int16_t x411 = INT16_MIN;
	int16_t x412 = -1;
	int32_t t88 = 285;

	t88 = (x409*((x410&x411)|x412));

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	int64_t x415 = INT64_MIN;
	static int64_t x416 = -1LL;
	int64_t t89 = 5456982001LL;

	t89 = (x413*((x414&x415)|x416));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x417 = 7831291;
	volatile int8_t x418 = INT8_MIN;
	int16_t x419 = -1146;
	int64_t x420 = 45272110143291LL;

	t90 = (x417*((x418&x419)|x420));

	if (t90 != -540359079LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x422 = -3900084;
	uint8_t x423 = 125U;
	uint64_t x424 = 14LLU;

	t91 = (x421*((x422&x423)|x424));

	if (t91 != 18446743906205827072LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = 926653514772LLU;
	int8_t x427 = INT8_MIN;
	uint64_t t92 = 12884LLU;

	t92 = (x425*((x426&x427)|x428));

	if (t92 != 18446743147056036844LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	volatile uint8_t x430 = 3U;
	int8_t x431 = 47;
	uint32_t x432 = 25406690U;
	volatile uint32_t t93 = 849904U;

	t93 = (x429*((x430&x431)|x432));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MAX;
	int32_t x438 = -25;
	int32_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t94 = 693507727LLU;

	t94 = (x437*((x438&x439)|x440));

	if (t94 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x445 = 487884152LLU;
	int16_t x447 = -1;
	volatile int32_t x448 = -1;
	volatile uint64_t t95 = 377LLU;

	t95 = (x445*((x446&x447)|x448));

	if (t95 != 18446744073221667464LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x452 = -1;

	t96 = (x449*((x450&x451)|x452));

	if (t96 != -127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -66022614188047030LL;
	int64_t x454 = -25LL;
	int8_t x455 = 0;
	volatile int64_t t97 = -730LL;

	t97 = (x453*((x454&x455)|x456));

	if (t97 != 66022614188047030LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = UINT32_MAX;
	uint64_t x462 = 276637850357828764LLU;
	int64_t x463 = INT64_MAX;
	volatile uint32_t x464 = UINT32_MAX;
	volatile uint64_t t98 = 34LLU;

	t98 = (x461*((x462&x463)|x464));

	if (t98 != 18170106218016669697LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MAX;
	int32_t x466 = -1;
	int8_t x467 = 43;
	int8_t x468 = -5;
	volatile int32_t t99 = 116725;

	t99 = (x465*((x466&x467)|x468));

	if (t99 != -163835) { NG(); } else { ; }
	
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

