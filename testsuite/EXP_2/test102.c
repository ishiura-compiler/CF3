#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
static uint16_t x2 = UINT16_MAX;
int64_t x13 = -1LL;
int64_t x14 = -3670LL;
uint8_t x16 = UINT8_MAX;
uint64_t x19 = 94737587685LLU;
volatile int16_t x27 = 891;
int64_t x31 = INT64_MIN;
int64_t x33 = INT64_MIN;
uint64_t x34 = UINT64_MAX;
volatile int32_t t8 = 11478;
int32_t x44 = INT32_MAX;
uint16_t x53 = 49U;
volatile uint32_t x55 = UINT32_MAX;
static int16_t x60 = INT16_MAX;
int32_t t12 = -4;
uint8_t x70 = 5U;
volatile int16_t x74 = INT16_MIN;
int32_t x91 = -1;
uint8_t x105 = 7U;
uint16_t x113 = UINT16_MAX;
int32_t x115 = 272463274;
static volatile int32_t t23 = -1;
volatile int16_t x126 = INT16_MAX;
static uint64_t x127 = UINT64_MAX;
int8_t x136 = 0;
int32_t x137 = 11741;
static int16_t x140 = -23;
static uint64_t t29 = 902407LLU;
int32_t t30 = -110240329;
volatile int64_t x155 = 205047200790LL;
int64_t x157 = -10170668315LL;
int8_t x162 = INT8_MAX;
int32_t t34 = 2;
volatile int32_t t35 = -59996014;
static uint16_t x175 = UINT16_MAX;
uint16_t x178 = 100U;
int8_t x185 = INT8_MIN;
static uint16_t x193 = 8357U;
volatile uint32_t x196 = UINT32_MAX;
int64_t x199 = 23063LL;
static int32_t t41 = 959;
int64_t x204 = -1LL;
int32_t x210 = INT32_MAX;
int64_t x212 = INT64_MIN;
volatile int32_t t45 = -3;
int16_t x217 = INT16_MAX;
int64_t x220 = INT64_MIN;
static int64_t t46 = 503734156468268LL;
volatile int32_t t48 = -539084562;
volatile uint32_t x232 = 1378481U;
uint16_t x233 = 3U;
uint8_t x239 = 41U;
int16_t x252 = -10590;
int16_t x260 = -7082;
static int32_t x263 = -2;
uint16_t x264 = 142U;
int32_t x265 = 1287;
static int32_t x268 = INT32_MIN;
uint16_t x277 = UINT16_MAX;
int64_t x281 = INT64_MIN;
uint32_t x284 = 13U;
volatile int32_t t62 = 232719;
uint64_t x295 = UINT64_MAX;
volatile uint32_t t63 = 50155U;
int16_t x298 = -1;
int16_t x301 = -9;
int64_t x304 = 17715171493LL;
uint64_t x306 = 13970LLU;
int64_t x312 = -1LL;
int64_t x314 = -11LL;
static int32_t t69 = -4115;
int64_t x326 = -62095339151143LL;
volatile int8_t x328 = -2;
volatile int32_t t73 = -2699479;
int32_t x341 = 916422;
static uint8_t x343 = 2U;
int32_t t75 = 317;
static int64_t x347 = -1LL;
static int64_t x349 = INT64_MAX;
static int64_t x367 = INT64_MIN;
int8_t x368 = -24;
int64_t x369 = 125540LL;
uint16_t x370 = UINT16_MAX;
int8_t x373 = INT8_MAX;
uint32_t x376 = UINT32_MAX;
int64_t x377 = INT64_MAX;
uint64_t x382 = 2901945845833626171LLU;
static int32_t x384 = 1039215;
uint16_t x391 = UINT16_MAX;
static uint32_t x394 = 306789971U;
int32_t x401 = INT32_MIN;
int16_t x403 = 10;
int64_t t88 = 15065LL;
static volatile int32_t t90 = 72700992;
volatile int32_t t91 = 437;
uint16_t x429 = UINT16_MAX;
volatile uint32_t x430 = 18U;
volatile uint64_t x432 = 383070463989LLU;
int32_t x434 = -1;
static int32_t t96 = -360;
int64_t x450 = 28524536420759225LL;


void f0(void) {
	int8_t x3 = -26;
	static volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -35428;

	t0 = ((x1==(x2+x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = 37720808;
	uint16_t x10 = UINT16_MAX;
	uint32_t x11 = 67U;
	static uint8_t x12 = 75U;
	int32_t t1 = -105088;

	t1 = ((x9==(x10+x11))&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = 40;
	volatile int32_t t2 = 116314;

	t2 = ((x13==(x14+x15))&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	int32_t t3 = 20;

	t3 = ((x17==(x18+x19))&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	int16_t x23 = 423;
	int16_t x24 = -1;
	static volatile int32_t t4 = 162291711;

	t4 = ((x21==(x22+x23))&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -17020677399LL;
	volatile uint8_t x26 = 100U;
	uint32_t x28 = 226199U;
	uint32_t t5 = 3930943U;

	t5 = ((x25==(x26+x27))&x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 4482;
	int8_t x30 = 61;
	uint8_t x32 = 8U;
	int32_t t6 = 6979623;

	t6 = ((x29==(x30+x31))&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x35 = 5U;
	static int32_t x36 = -1004424;
	volatile int32_t t7 = 27810;

	t7 = ((x33==(x34+x35))&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 15U;
	uint32_t x38 = UINT32_MAX;
	volatile int32_t x39 = -97431;
	volatile int16_t x40 = -273;

	t8 = ((x37==(x38+x39))&x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 3;
	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int32_t t9 = 3399;

	t9 = ((x41==(x42+x43))&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -422661154;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MAX;
	static int16_t x48 = 57;
	volatile int32_t t10 = 1278607;

	t10 = ((x45==(x46+x47))&x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = -772LL;
	static int64_t x56 = -1768LL;
	volatile int64_t t11 = -4608535LL;

	t11 = ((x53==(x54+x55))&x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -37825941;
	uint32_t x58 = 28962841U;
	int8_t x59 = -10;

	t12 = ((x57==(x58+x59))&x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = 27U;
	static volatile uint32_t x62 = 46495U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 19433836;

	t13 = ((x61==(x62+x63))&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = 1090LL;
	int64_t x71 = -1LL;
	static int32_t x72 = INT32_MAX;
	int32_t t14 = 280568861;

	t14 = ((x69==(x70+x71))&x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = 245;
	static uint32_t x75 = 316875954U;
	volatile uint16_t x76 = 74U;
	volatile int32_t t15 = -107769491;

	t15 = ((x73==(x74+x75))&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int32_t x79 = 1;
	int64_t x80 = 33303703LL;
	int64_t t16 = -133838LL;

	t16 = ((x77==(x78+x79))&x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x89 = UINT16_MAX;
	static int16_t x90 = INT16_MAX;
	static int8_t x92 = -1;
	volatile int32_t t17 = -12686920;

	t17 = ((x89==(x90+x91))&x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = 7U;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = INT16_MIN;
	static int32_t t18 = 5176;

	t18 = ((x93==(x94+x95))&x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x97 = -1;
	volatile uint16_t x98 = 75U;
	volatile uint8_t x99 = 100U;
	int16_t x100 = INT16_MIN;
	static int32_t t19 = 10944;

	t19 = ((x97==(x98+x99))&x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 385;
	int32_t x102 = INT32_MAX;
	int64_t x103 = -1LL;
	int16_t x104 = 8;
	volatile int32_t t20 = -661;

	t20 = ((x101==(x102+x103))&x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = INT32_MIN;
	uint32_t x107 = 225388531U;
	static int16_t x108 = -1;
	int32_t t21 = -19383665;

	t21 = ((x105==(x106+x107))&x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -3;
	volatile uint32_t x110 = UINT32_MAX;
	int32_t x111 = 620428;
	int32_t x112 = 12;
	int32_t t22 = 26236;

	t22 = ((x109==(x110+x111))&x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x114 = -3968;
	static int16_t x116 = 986;

	t23 = ((x113==(x114+x115))&x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = INT16_MAX;
	static uint8_t x122 = 1U;
	static int8_t x123 = -1;
	int16_t x124 = -1;
	volatile int32_t t24 = -531723;

	t24 = ((x121==(x122+x123))&x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MAX;
	int16_t x128 = INT16_MAX;
	int32_t t25 = -4502345;

	t25 = ((x125==(x126+x127))&x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = INT8_MIN;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t26 = 132259876;

	t26 = ((x129==(x130+x131))&x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = 23560U;
	volatile int32_t t27 = 988849375;

	t27 = ((x133==(x134+x135))&x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x138 = 203U;
	volatile int16_t x139 = INT16_MAX;
	int32_t t28 = 1111;

	t28 = ((x137==(x138+x139))&x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x141 = -1;
	uint64_t x142 = 1700632362LLU;
	volatile uint64_t x143 = 657386LLU;
	static volatile uint64_t x144 = UINT64_MAX;

	t29 = ((x141==(x142+x143))&x144);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x145 = 74992U;
	uint32_t x146 = 16197879U;
	static int32_t x147 = 1604033;
	int8_t x148 = INT8_MAX;

	t30 = ((x145==(x146+x147))&x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MAX;
	volatile uint8_t x150 = 26U;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t x152 = INT64_MIN;
	int64_t t31 = 0LL;

	t31 = ((x149==(x150+x151))&x152);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	int32_t x156 = -1;
	int32_t t32 = -639448441;

	t32 = ((x153==(x154+x155))&x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	volatile uint32_t t33 = 21806U;

	t33 = ((x157==(x158+x159))&x160);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 1U;
	int64_t x163 = INT64_MIN;
	int16_t x164 = -1;

	t34 = ((x161==(x162+x163))&x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 847491096LLU;
	int64_t x170 = INT64_MIN;
	uint8_t x171 = 0U;
	volatile int32_t x172 = -1;

	t35 = ((x169==(x170+x171))&x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = -20839932;
	static uint64_t x174 = UINT64_MAX;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t36 = -98959054957847LL;

	t36 = ((x173==(x174+x175))&x176);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x177 = UINT16_MAX;
	int8_t x179 = -1;
	volatile uint32_t x180 = 587311U;
	static volatile uint32_t t37 = 18576U;

	t37 = ((x177==(x178+x179))&x180);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = 614LL;
	uint16_t x182 = 0U;
	int32_t x183 = INT32_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t38 = -7562LL;

	t38 = ((x181==(x182+x183))&x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x186 = 855U;
	int8_t x187 = 1;
	volatile int8_t x188 = INT8_MAX;
	static volatile int32_t t39 = 76384;

	t39 = ((x185==(x186+x187))&x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x194 = -1;
	static uint16_t x195 = 50U;
	static volatile uint32_t t40 = 829U;

	t40 = ((x193==(x194+x195))&x196);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MAX;
	volatile int16_t x198 = INT16_MIN;
	uint8_t x200 = 24U;

	t41 = ((x197==(x198+x199))&x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	volatile int32_t x202 = -62;
	int16_t x203 = 3;
	volatile int64_t t42 = 303391667400LL;

	t42 = ((x201==(x202+x203))&x204);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = 871284394;
	volatile uint8_t x206 = 0U;
	uint32_t x207 = 14U;
	volatile int16_t x208 = INT16_MIN;
	int32_t t43 = -33412119;

	t43 = ((x205==(x206+x207))&x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 459U;
	int8_t x211 = -1;
	volatile int64_t t44 = -298LL;

	t44 = ((x209==(x210+x211))&x212);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = UINT8_MAX;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -1;

	t45 = ((x213==(x214+x215))&x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x218 = INT32_MAX;
	int64_t x219 = 58108LL;

	t46 = ((x217==(x218+x219))&x220);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x221 = 87U;
	static volatile int16_t x222 = INT16_MAX;
	volatile int32_t x223 = INT32_MIN;
	volatile int32_t x224 = INT32_MIN;
	static volatile int32_t t47 = 79359;

	t47 = ((x221==(x222+x223))&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x225 = 123795934U;
	volatile uint8_t x226 = 2U;
	int16_t x227 = -1;
	volatile uint8_t x228 = 1U;

	t48 = ((x225==(x226+x227))&x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	static volatile uint32_t x230 = 292370651U;
	volatile int16_t x231 = 8;
	static uint32_t t49 = 1184U;

	t49 = ((x229==(x230+x231))&x232);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x234 = INT8_MAX;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = -1;
	static int32_t t50 = -203;

	t50 = ((x233==(x234+x235))&x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x237 = 15522;
	int16_t x238 = INT16_MAX;
	volatile int8_t x240 = -1;
	static volatile int32_t t51 = 100033765;

	t51 = ((x237==(x238+x239))&x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x241 = INT32_MIN;
	static int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t52 = -1;

	t52 = ((x241==(x242+x243))&x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = 129508LL;
	int8_t x250 = INT8_MAX;
	uint32_t x251 = 103070U;
	volatile int32_t t53 = -1043414;

	t53 = ((x249==(x250+x251))&x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 72U;
	static int32_t x254 = INT32_MAX;
	volatile int8_t x255 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t54 = 3311877104864LLU;

	t54 = ((x253==(x254+x255))&x256);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 571661519945LLU;
	static int32_t t55 = 0;

	t55 = ((x257==(x258+x259))&x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 16U;
	static volatile int64_t x262 = -1LL;
	static int32_t t56 = -992640071;

	t56 = ((x261==(x262+x263))&x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x266 = 78938005U;
	volatile int32_t x267 = 220725784;
	volatile int32_t t57 = -2056919;

	t57 = ((x265==(x266+x267))&x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = 15048343LLU;
	volatile int16_t x270 = 6;
	int64_t x271 = INT64_MIN;
	uint16_t x272 = 21U;
	volatile int32_t t58 = -4;

	t58 = ((x269==(x270+x271))&x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	volatile uint32_t x280 = 1U;
	uint32_t t59 = 38U;

	t59 = ((x277==(x278+x279))&x280);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x282 = -1363599896LL;
	int64_t x283 = -3583414022021LL;
	volatile uint32_t t60 = 17485519U;

	t60 = ((x281==(x282+x283))&x284);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 0U;
	static volatile uint64_t x286 = 102109139LLU;
	int32_t x287 = INT32_MIN;
	volatile uint16_t x288 = UINT16_MAX;
	static volatile int32_t t61 = 170;

	t61 = ((x285==(x286+x287))&x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = 79;
	static uint16_t x291 = 66U;
	uint16_t x292 = UINT16_MAX;

	t62 = ((x289==(x290+x291))&x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x293 = INT16_MIN;
	uint8_t x294 = 4U;
	uint32_t x296 = 657319U;

	t63 = ((x293==(x294+x295))&x296);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x297 = 12U;
	int16_t x299 = 223;
	int16_t x300 = 2;
	static volatile int32_t t64 = 2;

	t64 = ((x297==(x298+x299))&x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x302 = INT8_MIN;
	volatile int32_t x303 = -728;
	volatile int64_t t65 = -5LL;

	t65 = ((x301==(x302+x303))&x304);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = 112732LL;
	volatile uint64_t x307 = UINT64_MAX;
	volatile uint8_t x308 = 1U;
	int32_t t66 = -13;

	t66 = ((x305==(x306+x307))&x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = 68U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	int64_t t67 = 1841682929637251231LL;

	t67 = ((x309==(x310+x311))&x312);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	int64_t t68 = -427881644315884LL;

	t68 = ((x313==(x314+x315))&x316);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;

	t69 = ((x317==(x318+x319))&x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MAX;
	static volatile int32_t x323 = INT32_MIN;
	int32_t x324 = -1;
	int32_t t70 = -256;

	t70 = ((x321==(x322+x323))&x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = 5U;
	volatile uint32_t x327 = UINT32_MAX;
	int32_t t71 = -290;

	t71 = ((x325==(x326+x327))&x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x329 = -17;
	int16_t x330 = 13;
	volatile int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t72 = 178;

	t72 = ((x329==(x330+x331))&x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = 0U;
	static int64_t x335 = -1LL;
	static uint16_t x336 = 5047U;

	t73 = ((x333==(x334+x335))&x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = -14;
	uint8_t x339 = UINT8_MAX;
	uint64_t x340 = 81604281LLU;
	static volatile uint64_t t74 = 896188777774LLU;

	t74 = ((x337==(x338+x339))&x340);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x342 = INT8_MIN;
	static volatile uint16_t x344 = 2847U;

	t75 = ((x341==(x342+x343))&x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = INT8_MAX;
	uint32_t x348 = UINT32_MAX;
	uint32_t t76 = 7358974U;

	t76 = ((x345==(x346+x347))&x348);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x350 = 804056LLU;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = -14965052375LL;
	int64_t t77 = -2156162035760955784LL;

	t77 = ((x349==(x350+x351))&x352);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int32_t x355 = -7892;
	static volatile int16_t x356 = -42;
	volatile int32_t t78 = -66888;

	t78 = ((x353==(x354+x355))&x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x357 = INT16_MIN;
	uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 956U;
	uint32_t x360 = 1U;
	volatile uint32_t t79 = 479289U;

	t79 = ((x357==(x358+x359))&x360);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x365 = INT64_MAX;
	uint64_t x366 = 6047236305278502908LLU;
	volatile int32_t t80 = 380469875;

	t80 = ((x365==(x366+x367))&x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x371 = -1;
	static int8_t x372 = -1;
	volatile int32_t t81 = -1847960;

	t81 = ((x369==(x370+x371))&x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x374 = INT8_MIN;
	volatile uint8_t x375 = UINT8_MAX;
	uint32_t t82 = 60U;

	t82 = ((x373==(x374+x375))&x376);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x378 = -1;
	volatile uint8_t x379 = 0U;
	static uint16_t x380 = 655U;
	volatile int32_t t83 = 30;

	t83 = ((x377==(x378+x379))&x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = -1LL;
	volatile int64_t x383 = INT64_MIN;
	volatile int32_t t84 = -59779989;

	t84 = ((x381==(x382+x383))&x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x389 = INT32_MIN;
	uint16_t x390 = UINT16_MAX;
	static int32_t x392 = 3934477;
	int32_t t85 = 9244650;

	t85 = ((x389==(x390+x391))&x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = -1;
	uint32_t x395 = UINT32_MAX;
	volatile int64_t x396 = 23LL;
	static int64_t t86 = 92488LL;

	t86 = ((x393==(x394+x395))&x396);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = 237;
	uint8_t x398 = 49U;
	int32_t x399 = INT32_MIN;
	volatile int8_t x400 = 1;
	static int32_t t87 = -3;

	t87 = ((x397==(x398+x399))&x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x402 = INT32_MIN;
	int64_t x404 = INT64_MIN;

	t88 = ((x401==(x402+x403))&x404);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -710662;
	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = UINT64_MAX;
	int32_t x408 = -1;
	volatile int32_t t89 = -6074;

	t89 = ((x405==(x406+x407))&x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = 56428846510LL;
	static uint8_t x410 = 48U;
	int32_t x411 = 508924;
	static uint16_t x412 = UINT16_MAX;

	t90 = ((x409==(x410+x411))&x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MIN;
	volatile int16_t x418 = 562;
	uint16_t x419 = 40U;
	static int8_t x420 = -1;

	t91 = ((x417==(x418+x419))&x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = -8008;
	volatile int8_t x422 = INT8_MIN;
	uint64_t x423 = 13207903844543644LLU;
	static int64_t x424 = INT64_MAX;
	static volatile int64_t t92 = -433586LL;

	t92 = ((x421==(x422+x423))&x424);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x425 = 6287149LLU;
	int64_t x426 = -303LL;
	static int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MIN;
	int64_t t93 = -16379600305058435LL;

	t93 = ((x425==(x426+x427))&x428);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x431 = 29U;
	volatile uint64_t t94 = 8290787LLU;

	t94 = ((x429==(x430+x431))&x432);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MIN;
	int16_t x435 = -5;
	int16_t x436 = INT16_MIN;
	volatile int32_t t95 = -346170;

	t95 = ((x433==(x434+x435))&x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = UINT16_MAX;
	int32_t x438 = -1;
	uint32_t x439 = 594690U;
	uint16_t x440 = UINT16_MAX;

	t96 = ((x437==(x438+x439))&x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -1;
	uint32_t x442 = 6U;
	uint32_t x443 = 51785975U;
	int16_t x444 = INT16_MIN;
	int32_t t97 = 6317;

	t97 = ((x441==(x442+x443))&x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x449 = INT8_MAX;
	int64_t x451 = -1811843LL;
	volatile uint16_t x452 = 5848U;
	int32_t t98 = 730;

	t98 = ((x449==(x450+x451))&x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x453 = INT64_MAX;
	static uint8_t x454 = 0U;
	uint64_t x455 = 554652354323619LLU;
	int8_t x456 = INT8_MAX;
	int32_t t99 = 981302;

	t99 = ((x453==(x454+x455))&x456);

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

