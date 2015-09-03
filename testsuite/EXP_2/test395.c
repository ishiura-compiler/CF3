#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
static int16_t x13 = 2781;
uint32_t x15 = UINT32_MAX;
int32_t x16 = -1;
int16_t x24 = -1;
volatile int32_t t4 = 11467960;
int8_t x27 = -1;
volatile int64_t t5 = -7LL;
uint64_t x34 = UINT64_MAX;
int64_t x36 = INT64_MAX;
uint8_t x59 = UINT8_MAX;
static int64_t x61 = -11060628073215723LL;
volatile int8_t x93 = INT8_MAX;
volatile int8_t x95 = 1;
int64_t x116 = INT64_MAX;
volatile int64_t t19 = -860738796970LL;
int16_t x122 = INT16_MIN;
uint8_t x131 = 34U;
int8_t x133 = -31;
int64_t x136 = INT64_MIN;
uint64_t t23 = 1881555LLU;
volatile uint64_t x148 = 2928507844LLU;
volatile int16_t x150 = INT16_MAX;
static int32_t x154 = 316;
int64_t x157 = -1LL;
int8_t x162 = -25;
uint64_t x163 = 8271317123147248LLU;
int32_t x177 = -90;
int32_t x180 = INT32_MIN;
uint32_t x186 = 5865U;
uint8_t x187 = 4U;
int64_t x189 = INT64_MIN;
int8_t x190 = INT8_MAX;
uint8_t x210 = 10U;
int32_t x212 = INT32_MIN;
int16_t x241 = INT16_MIN;
int8_t x242 = -1;
int32_t x243 = INT32_MAX;
static volatile int32_t t41 = -213;
int16_t x261 = -3406;
static int8_t x262 = -1;
volatile uint32_t t45 = 11U;
static volatile int16_t x265 = -33;
volatile uint8_t x270 = 12U;
int64_t x281 = INT64_MIN;
volatile int64_t t49 = -169696923014341541LL;
int8_t x292 = 3;
volatile int8_t x295 = INT8_MAX;
static int64_t x314 = INT64_MAX;
volatile uint16_t x316 = 37U;
int16_t x324 = -4;
volatile uint32_t x325 = UINT32_MAX;
int64_t x328 = INT64_MIN;
int64_t t58 = -31163137660866LL;
static uint32_t x329 = UINT32_MAX;
volatile uint8_t x333 = UINT8_MAX;
uint64_t x342 = UINT64_MAX;
uint8_t x353 = 4U;
int16_t x359 = INT16_MIN;
int16_t x360 = -1;
volatile uint64_t t66 = 422919166421858LLU;
uint64_t t68 = 335347242077LLU;
int64_t x376 = -1LL;
int8_t x392 = 25;
static int8_t x395 = INT8_MIN;
static uint64_t x396 = 27615668947414LLU;
static uint8_t x400 = 20U;
int8_t x412 = 2;
volatile uint64_t x417 = 6LLU;
static volatile uint32_t x418 = UINT32_MAX;
int8_t x419 = INT8_MAX;
uint64_t t75 = 59640LLU;
static int32_t x437 = INT32_MIN;
int8_t x451 = INT8_MIN;
static int64_t x452 = INT64_MIN;
int32_t x463 = INT32_MIN;
static int8_t x464 = 11;
static int64_t t81 = -5869124358421LL;
int8_t x472 = INT8_MAX;
uint32_t x474 = UINT32_MAX;
volatile uint16_t x475 = 1782U;
int16_t x487 = INT16_MIN;
volatile uint16_t x489 = 15U;
int8_t x495 = -1;
uint64_t t88 = 4657659LLU;
int8_t x510 = INT8_MIN;
volatile uint64_t t90 = 457563823022LLU;
int16_t x539 = INT16_MIN;
int32_t x541 = INT32_MIN;
int8_t x547 = INT8_MIN;
volatile int64_t t98 = -119330915LL;
int64_t t99 = -85259892690294633LL;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	static uint16_t x3 = 223U;
	volatile uint32_t x4 = UINT32_MAX;
	int64_t t0 = -748597045769LL;

	t0 = ((x1%(x2*x3))%x4);

	if (t0 != -1920LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 5145U;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;
	uint32_t t1 = 11712279U;

	t1 = ((x5%(x6*x7))%x8);

	if (t1 != 124418198U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x14 = 1821641U;
	static volatile uint32_t t2 = 4679U;

	t2 = ((x13%(x14*x15))%x16);

	if (t2 != 2781U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -222677247;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = -1;
	int16_t x20 = -1;
	volatile int32_t t3 = -5591528;

	t3 = ((x17%(x18*x19))%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	int8_t x22 = -1;
	int8_t x23 = INT8_MAX;

	t4 = ((x21%(x22*x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 2U;
	int64_t x26 = -3529092837461717611LL;
	int8_t x28 = -1;

	t5 = ((x25%(x26*x27))%x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x33 = 1U;
	volatile int32_t x35 = -1;
	volatile uint64_t t6 = 124LLU;

	t6 = ((x33%(x34*x35))%x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	volatile int16_t x42 = INT16_MIN;
	static uint8_t x43 = 1U;
	int32_t x44 = -1;
	int32_t t7 = 9;

	t7 = ((x41%(x42*x43))%x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 89U;
	static int64_t x47 = -9127LL;
	int8_t x48 = INT8_MIN;
	volatile int64_t t8 = -7365128275834479LL;

	t8 = ((x45%(x46*x47))%x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	int64_t x55 = -5203450985253LL;
	static int16_t x56 = INT16_MIN;
	int64_t t9 = -3LL;

	t9 = ((x53%(x54*x55))%x56);

	if (t9 != -23623LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = 43;
	uint64_t x60 = 14LLU;
	static volatile uint64_t t10 = 29067321009846LLU;

	t10 = ((x57%(x58*x59))%x60);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x62 = -297;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = 540233748625020214LL;
	static volatile uint64_t t11 = 284356991875535512LLU;

	t11 = ((x61%(x62*x63))%x64);

	if (t11 != 124LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 0U;
	int16_t x66 = 94;
	uint64_t x67 = 7212LLU;
	static int16_t x68 = -38;
	volatile uint64_t t12 = 44340985178LLU;

	t12 = ((x65%(x66*x67))%x68);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x81 = INT8_MAX;
	int64_t x82 = 4979441107LL;
	uint16_t x83 = 681U;
	static int64_t x84 = -1LL;
	int64_t t13 = -245580LL;

	t13 = ((x81%(x82*x83))%x84);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = 35;
	int16_t x91 = INT16_MIN;
	static int64_t x92 = INT64_MIN;
	int64_t t14 = -1134LL;

	t14 = ((x89%(x90*x91))%x92);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x94 = 9789;
	static uint16_t x96 = 1580U;
	int32_t t15 = 0;

	t15 = ((x93%(x94*x95))%x96);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x97 = 4U;
	int16_t x98 = -1;
	volatile uint32_t x99 = 2824U;
	uint8_t x100 = 3U;
	volatile uint32_t t16 = 16320U;

	t16 = ((x97%(x98*x99))%x100);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	static uint8_t x103 = UINT8_MAX;
	int64_t x104 = INT64_MIN;
	static int64_t t17 = -52LL;

	t17 = ((x101%(x102*x103))%x104);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x105 = 1;
	volatile int16_t x106 = INT16_MAX;
	static volatile uint8_t x107 = 3U;
	int32_t x108 = 212264;
	int32_t t18 = -25687969;

	t18 = ((x105%(x106*x107))%x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = INT8_MAX;
	volatile int32_t x114 = -1918334;
	int16_t x115 = -1;

	t19 = ((x113%(x114*x115))%x116);

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	volatile int64_t x119 = 210LL;
	int32_t x120 = INT32_MIN;
	volatile int64_t t20 = -476904427LL;

	t20 = ((x117%(x118*x119))%x120);

	if (t20 != -8LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -11;
	int32_t x123 = -633;
	uint64_t x124 = 16494LLU;
	static volatile uint64_t t21 = 4619370LLU;

	t21 = ((x121%(x122*x123))%x124);

	if (t21 != 10883LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x129 = UINT16_MAX;
	static volatile int16_t x130 = -926;
	int8_t x132 = -1;
	int32_t t22 = -94;

	t22 = ((x129%(x130*x131))%x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x134 = 695;
	static uint64_t x135 = 421766LLU;

	t23 = ((x133%(x134*x135))%x136);

	if (t23 != 62274345LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x141 = INT64_MAX;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = 1594U;
	int64_t t24 = 712758185534024LL;

	t24 = ((x141%(x142*x143))%x144);

	if (t24 != 887LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x145 = 1U;
	uint64_t x146 = UINT64_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	uint64_t t25 = 130178694314049544LLU;

	t25 = ((x145%(x146*x147))%x148);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x149 = -51099;
	volatile uint16_t x151 = 890U;
	uint32_t x152 = 14U;
	volatile uint32_t t26 = 20U;

	t26 = ((x149%(x150*x151))%x152);

	if (t26 != 5U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x153 = UINT8_MAX;
	static uint32_t x155 = UINT32_MAX;
	int64_t x156 = INT64_MIN;
	volatile int64_t t27 = -69511952354810196LL;

	t27 = ((x153%(x154*x155))%x156);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x158 = -116LL;
	volatile uint64_t x159 = 2LLU;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t28 = 531LLU;

	t28 = ((x157%(x158*x159))%x160);

	if (t28 != 231LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x161 = INT16_MAX;
	int32_t x164 = 134;
	static uint64_t t29 = 580977LLU;

	t29 = ((x161%(x162*x163))%x164);

	if (t29 != 71LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = UINT16_MAX;
	static int16_t x166 = 214;
	static uint16_t x167 = UINT16_MAX;
	int32_t x168 = -1;
	volatile int32_t t30 = 3982;

	t30 = ((x165%(x166*x167))%x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = INT32_MIN;
	volatile int16_t x170 = 243;
	static uint32_t x171 = 577U;
	int32_t x172 = INT32_MAX;
	static uint32_t t31 = 48752046U;

	t31 = ((x169%(x170*x171))%x172);

	if (t31 != 11972U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x173 = 996U;
	int16_t x174 = INT16_MAX;
	int64_t x175 = -1LL;
	volatile int8_t x176 = -1;
	volatile int64_t t32 = -120LL;

	t32 = ((x173%(x174*x175))%x176);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x178 = 203307413623237LL;
	int8_t x179 = INT8_MIN;
	volatile int64_t t33 = -67LL;

	t33 = ((x177%(x178*x179))%x180);

	if (t33 != -90LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x185 = -689;
	uint64_t x188 = 3LLU;
	volatile uint64_t t34 = 458290802477160LLU;

	t34 = ((x185%(x186*x187))%x188);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MAX;
	volatile int64_t t35 = -2660178LL;

	t35 = ((x189%(x190*x191))%x192);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x201 = 256097453898621135LLU;
	static int64_t x202 = -72LL;
	int32_t x203 = INT32_MAX;
	int8_t x204 = -1;
	uint64_t t36 = 202833LLU;

	t36 = ((x201%(x202*x203))%x204);

	if (t36 != 256097453898621135LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x205 = INT32_MAX;
	uint8_t x206 = 1U;
	int16_t x207 = -10623;
	int64_t x208 = INT64_MIN;
	volatile int64_t t37 = -81690130397160477LL;

	t37 = ((x205%(x206*x207))%x208);

	if (t37 != 1705LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x209 = INT64_MIN;
	static int32_t x211 = -1721;
	volatile int64_t t38 = -1LL;

	t38 = ((x209%(x210*x211))%x212);

	if (t38 != -12408LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = -1;
	volatile uint32_t x222 = 111838160U;
	int8_t x223 = INT8_MAX;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t39 = 109705183058LL;

	t39 = ((x221%(x222*x223))%x224);

	if (t39 != 339333999LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x233 = -1LL;
	static uint32_t x234 = UINT32_MAX;
	int32_t x235 = INT32_MAX;
	static volatile int8_t x236 = 1;
	volatile int64_t t40 = -30LL;

	t40 = ((x233%(x234*x235))%x236);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x244 = -1;

	t41 = ((x241%(x242*x243))%x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x245 = -1LL;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MAX;
	static volatile uint64_t t42 = 377LLU;

	t42 = ((x245%(x246*x247))%x248);

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 1U;
	uint8_t x254 = UINT8_MAX;
	static int8_t x255 = -7;
	int16_t x256 = INT16_MAX;
	int32_t t43 = 22910088;

	t43 = ((x253%(x254*x255))%x256);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x257 = INT32_MIN;
	static uint32_t x258 = 4412545U;
	uint32_t x259 = 50U;
	int64_t x260 = INT64_MIN;
	volatile int64_t t44 = -90622041490LL;

	t44 = ((x257%(x258*x259))%x260);

	if (t44 != 161838398LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;

	t45 = ((x261%(x262*x263))%x264);

	if (t45 != 4294967218U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x266 = -315;
	int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t46 = -609LL;

	t46 = ((x265%(x266*x267))%x268);

	if (t46 != -33LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x269 = 7305U;
	int16_t x271 = INT16_MAX;
	int32_t x272 = -3428;
	static int32_t t47 = -18048;

	t47 = ((x269%(x270*x271))%x272);

	if (t47 != 449) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = -1;
	volatile int32_t x279 = 575714;
	uint16_t x280 = 1419U;
	volatile int32_t t48 = 3;

	t48 = ((x277%(x278*x279))%x280);

	if (t48 != 261) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x282 = 429U;
	int32_t x283 = -1476965;
	int16_t x284 = -1;

	t49 = ((x281%(x282*x283))%x284);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	uint8_t x286 = 27U;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = INT64_MIN;
	static volatile int64_t t50 = 2515LL;

	t50 = ((x285%(x286*x287))%x288);

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MAX;
	static uint32_t t51 = 1111265856U;

	t51 = ((x289%(x290*x291))%x292);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x293 = INT64_MIN;
	volatile int32_t x294 = 194416;
	uint64_t x296 = 524809293048LLU;
	volatile uint64_t t52 = 171016158LLU;

	t52 = ((x293%(x294*x295))%x296);

	if (t52 != 238028665240LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x305 = -1;
	int16_t x306 = INT16_MAX;
	volatile int32_t x307 = -1;
	uint16_t x308 = UINT16_MAX;
	int32_t t53 = -26998;

	t53 = ((x305%(x306*x307))%x308);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = UINT32_MAX;
	static uint64_t x311 = 474426620LLU;
	int8_t x312 = -1;
	uint64_t t54 = 1952LLU;

	t54 = ((x309%(x310*x311))%x312);

	if (t54 != 107922722712982748LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 30U;
	int64_t x315 = -1LL;
	volatile int64_t t55 = -135237171802599439LL;

	t55 = ((x313%(x314*x315))%x316);

	if (t55 != 30LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x317 = -9;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = 1;
	static int16_t x320 = -2239;
	volatile int64_t t56 = -95335892LL;

	t56 = ((x317%(x318*x319))%x320);

	if (t56 != -9LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = UINT8_MAX;
	static int32_t t57 = 175291;

	t57 = ((x321%(x322*x323))%x324);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x326 = 237580181U;
	int16_t x327 = -10;

	t58 = ((x325%(x326*x327))%x328);

	if (t58 != 456636323LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x330 = 3021LLU;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 154U;
	uint64_t t59 = 210821LLU;

	t59 = ((x329%(x330*x331))%x332);

	if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x334 = UINT16_MAX;
	static int16_t x335 = -2;
	int32_t x336 = 50910394;
	static volatile int32_t t60 = 0;

	t60 = ((x333%(x334*x335))%x336);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = -4;
	static int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;
	static int64_t t61 = -116007LL;

	t61 = ((x337%(x338*x339))%x340);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 3490022U;
	static int64_t x343 = -2650862561747195LL;
	volatile int16_t x344 = -3030;
	volatile uint64_t t62 = 62826579537208691LLU;

	t62 = ((x341%(x342*x343))%x344);

	if (t62 != 3490022LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = -1;
	static uint64_t t63 = 151388401LLU;

	t63 = ((x345%(x346*x347))%x348);

	if (t63 != 254LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x354 = 54LLU;
	static volatile int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;
	uint64_t t64 = 4930121989085339LLU;

	t64 = ((x353%(x354*x355))%x356);

	if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = INT64_MIN;
	uint16_t x358 = 19023U;
	int64_t t65 = 45463914612LL;

	t65 = ((x357%(x358*x359))%x360);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x361 = 5105423433891450147LLU;
	volatile int32_t x362 = INT32_MIN;
	static int64_t x363 = -1LL;
	int8_t x364 = -1;

	t66 = ((x361%(x362*x363))%x364);

	if (t66 != 1024331043LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = -1;
	uint16_t x367 = 67U;
	uint16_t x368 = 31437U;
	volatile int64_t t67 = -310LL;

	t67 = ((x365%(x366*x367))%x368);

	if (t67 != 41LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = INT16_MAX;
	int8_t x371 = -1;
	int32_t x372 = -1;

	t68 = ((x369%(x370*x371))%x372);

	if (t68 != 32766LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = INT8_MAX;
	volatile int64_t t69 = 56704898LL;

	t69 = ((x373%(x374*x375))%x376);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x377 = -93;
	volatile int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	static volatile int32_t x380 = -1;
	int32_t t70 = -5541;

	t70 = ((x377%(x378*x379))%x380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = 14575;
	int64_t x391 = -1LL;
	volatile int64_t t71 = 22481895LL;

	t71 = ((x389%(x390*x391))%x392);

	if (t71 != -18LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x393 = INT8_MIN;
	int16_t x394 = -6699;
	volatile uint64_t t72 = 7903893610225243LLU;

	t72 = ((x393%(x394*x395))%x396);

	if (t72 != 1914547000354LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = -21;
	static int8_t x399 = INT8_MAX;
	int32_t t73 = -184976165;

	t73 = ((x397%(x398*x399))%x400);

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x409 = 46U;
	int32_t x410 = -11976;
	int16_t x411 = INT16_MAX;
	static volatile int32_t t74 = -11859897;

	t74 = ((x409%(x410*x411))%x412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x420 = UINT8_MAX;

	t75 = ((x417%(x418*x419))%x420);

	if (t75 != 6LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x421 = INT16_MIN;
	uint16_t x422 = 1506U;
	int64_t x423 = -168599LL;
	int32_t x424 = -1;
	static volatile int64_t t76 = -920LL;

	t76 = ((x421%(x422*x423))%x424);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = 61;
	int16_t x427 = 548;
	int64_t x428 = -56841974124781LL;
	volatile int64_t t77 = 476307602273LL;

	t77 = ((x425%(x426*x427))%x428);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x429 = -1;
	static uint64_t x430 = 3176866LLU;
	int32_t x431 = INT32_MIN;
	uint32_t x432 = UINT32_MAX;
	uint64_t t78 = 1LLU;

	t78 = ((x429%(x430*x431))%x432);

	if (t78 != 1588432LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x438 = 50U;
	int8_t x439 = INT8_MAX;
	int64_t x440 = 235868936177LL;
	static int64_t t79 = -6493656739806LL;

	t79 = ((x437%(x438*x439))%x440);

	if (t79 != -2548LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x449 = -39;
	uint32_t x450 = 13285881U;
	volatile int64_t t80 = 0LL;

	t80 = ((x449%(x450*x451))%x452);

	if (t80 != 1700592729LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x461 = 1135797U;
	int64_t x462 = -1LL;

	t81 = ((x461%(x462*x463))%x464);

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x469 = -571;
	int32_t x470 = -1;
	uint64_t x471 = 67LLU;
	static uint64_t t82 = 21902LLU;

	t82 = ((x469%(x470*x471))%x472);

	if (t82 != 66LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x473 = INT32_MAX;
	int64_t x476 = INT64_MIN;
	volatile int64_t t83 = -844LL;

	t83 = ((x473%(x474*x475))%x476);

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x477 = 10725192;
	uint64_t x478 = UINT64_MAX;
	int64_t x479 = -232786678483399LL;
	uint8_t x480 = 3U;
	volatile uint64_t t84 = 1328LLU;

	t84 = ((x477%(x478*x479))%x480);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x485 = INT8_MIN;
	volatile int64_t x486 = -27653LL;
	volatile int64_t x488 = 684394538LL;
	static int64_t t85 = -4194834291633161552LL;

	t85 = ((x485%(x486*x487))%x488);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x490 = INT32_MAX;
	int64_t x491 = -1LL;
	volatile int16_t x492 = INT16_MIN;
	volatile int64_t t86 = 88841626196339LL;

	t86 = ((x489%(x490*x491))%x492);

	if (t86 != 15LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x493 = INT32_MIN;
	volatile int8_t x494 = INT8_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t87 = -279651;

	t87 = ((x493%(x494*x495))%x496);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x505 = 270LLU;
	uint32_t x506 = 2652818U;
	static volatile int32_t x507 = 220;
	int8_t x508 = -1;

	t88 = ((x505%(x506*x507))%x508);

	if (t88 != 270LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x509 = 3U;
	int32_t x511 = -1;
	static int8_t x512 = -1;
	int32_t t89 = 3436;

	t89 = ((x509%(x510*x511))%x512);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x513 = INT16_MIN;
	volatile uint64_t x514 = 263196508819LLU;
	uint8_t x515 = 1U;
	volatile int8_t x516 = INT8_MIN;

	t90 = ((x513%(x514*x515))%x516);

	if (t90 != 83709740931LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x517 = UINT8_MAX;
	int16_t x518 = -1;
	volatile uint16_t x519 = UINT16_MAX;
	volatile int16_t x520 = -1;
	int32_t t91 = -4280;

	t91 = ((x517%(x518*x519))%x520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x521 = INT32_MIN;
	int16_t x522 = -1;
	static int8_t x523 = -1;
	volatile int16_t x524 = 1;
	volatile int32_t t92 = -110560752;

	t92 = ((x521%(x522*x523))%x524);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x525 = 8U;
	int16_t x526 = INT16_MIN;
	int8_t x527 = -15;
	int16_t x528 = -32;
	static volatile int32_t t93 = 47718813;

	t93 = ((x525%(x526*x527))%x528);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x529 = -1;
	volatile int32_t x530 = INT32_MIN;
	volatile int32_t x531 = 1;
	volatile uint64_t x532 = UINT64_MAX;
	uint64_t t94 = 6461LLU;

	t94 = ((x529%(x530*x531))%x532);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x533 = INT16_MAX;
	int8_t x534 = -1;
	int64_t x535 = INT64_MAX;
	static volatile int32_t x536 = -1;
	volatile int64_t t95 = 25LL;

	t95 = ((x533%(x534*x535))%x536);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x537 = 81U;
	static int64_t x538 = -1LL;
	static int8_t x540 = INT8_MAX;
	static volatile int64_t t96 = 1485LL;

	t96 = ((x537%(x538*x539))%x540);

	if (t96 != 81LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x542 = -80089319;
	uint64_t x543 = UINT64_MAX;
	static int32_t x544 = INT32_MAX;
	static volatile uint64_t t97 = 8576648530LLU;

	t97 = ((x541%(x542*x543))%x544);

	if (t97 != 70273045LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x545 = -9644;
	int8_t x546 = INT8_MIN;
	volatile int64_t x548 = 114737068290LL;

	t98 = ((x545%(x546*x547))%x548);

	if (t98 != -9644LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x557 = 1U;
	int64_t x558 = -1LL;
	int32_t x559 = INT32_MIN;
	int32_t x560 = INT32_MIN;

	t99 = ((x557%(x558*x559))%x560);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

