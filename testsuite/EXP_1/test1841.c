#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int64_t x6 = INT64_MIN;
volatile uint64_t x7 = UINT64_MAX;
int32_t x8 = -18;
int8_t x10 = 1;
int16_t x11 = -888;
static int64_t x12 = -2780981503LL;
int8_t x15 = 53;
static uint64_t x17 = 46524158784673648LLU;
volatile int32_t x18 = -78;
int8_t x19 = INT8_MIN;
uint32_t x31 = 689399U;
int8_t x34 = INT8_MIN;
int32_t x45 = INT32_MIN;
int32_t t12 = -240636;
int64_t x55 = -2168577896233LL;
int32_t x56 = INT32_MAX;
int16_t x60 = INT16_MIN;
int32_t t15 = -724193;
static int64_t x69 = INT64_MAX;
int8_t x71 = INT8_MIN;
volatile uint64_t x72 = UINT64_MAX;
uint64_t x75 = 29924963909356LLU;
uint8_t x77 = UINT8_MAX;
int8_t x79 = INT8_MAX;
static int32_t t21 = -5;
static volatile int32_t x91 = -1616;
int16_t x93 = INT16_MIN;
uint16_t x96 = 4U;
int64_t x98 = INT64_MIN;
int32_t x100 = INT32_MIN;
volatile int8_t x102 = 1;
int16_t x105 = -1369;
volatile int8_t x106 = -5;
uint32_t x108 = 505086U;
int16_t x109 = -1;
volatile uint8_t x112 = 73U;
uint64_t x114 = 1615060LLU;
int8_t x115 = -1;
int32_t t29 = 376754;
volatile int8_t x125 = -15;
volatile int32_t t31 = -119975;
int16_t x129 = -60;
static uint16_t x132 = UINT16_MAX;
static int16_t x136 = 550;
int16_t x141 = INT16_MIN;
uint32_t x145 = 6132840U;
int8_t x189 = 0;
int64_t x192 = INT64_MIN;
int8_t x198 = -7;
uint8_t x200 = 0U;
volatile int32_t t50 = 3587616;
int64_t x205 = -8LL;
int32_t t53 = -106;
int16_t x217 = INT16_MAX;
int64_t x218 = -18485350LL;
int32_t t54 = -406519022;
int16_t x231 = -27;
static volatile int32_t t58 = -1;
int32_t x254 = INT32_MIN;
int32_t t63 = 1921;
int32_t x259 = -1;
uint32_t x261 = 5U;
int64_t x262 = INT64_MIN;
int32_t t65 = -205380;
int64_t x268 = 1LL;
int32_t t66 = 546310;
int64_t x270 = INT64_MIN;
uint8_t x273 = UINT8_MAX;
static int8_t x286 = INT8_MIN;
static uint32_t x289 = 19089015U;
uint16_t x305 = 3U;
uint64_t x308 = 29355135245589LLU;
int64_t x310 = -3106871004202554LL;
static int64_t x311 = 63947376955322717LL;
uint64_t x312 = 1419622393394758019LLU;
static volatile int32_t t77 = 3573833;
volatile int16_t x313 = INT16_MIN;
int64_t x315 = INT64_MIN;
int32_t t78 = -8;
int64_t x320 = INT64_MAX;
int32_t x322 = -6295;
volatile int32_t x326 = INT32_MIN;
int64_t x331 = -209485262LL;
int16_t x332 = -1;
static volatile uint8_t x335 = 44U;
int32_t x339 = INT32_MIN;
int64_t x340 = -23294298909794LL;
static uint16_t x348 = UINT16_MAX;
int32_t t86 = -218045;
int64_t x350 = -1419137LL;
int32_t x363 = -1;
static volatile uint64_t x365 = 946260787272LLU;
uint64_t x367 = UINT64_MAX;
uint64_t x371 = 24212750433861186LLU;
static int8_t x375 = INT8_MIN;
uint64_t x381 = 1564LLU;
static volatile int16_t x389 = -1;
int16_t x390 = 242;
static int8_t x396 = -1;
static int8_t x398 = 1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x3 = 7950991307343LLU;
	int64_t x4 = -105440321700986483LL;
	volatile int32_t t0 = 0;

	t0 = (((x1&x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 4;
	volatile int32_t t1 = -26;

	t1 = (((x5&x6)|x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 108U;
	volatile int32_t t2 = 0;

	t2 = (((x9&x10)|x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int8_t x14 = -4;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 1448876;

	t3 = (((x13&x14)|x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 109689;

	t4 = (((x17&x18)|x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	int32_t x22 = INT32_MAX;
	static int64_t x23 = INT64_MAX;
	int8_t x24 = -5;
	int32_t t5 = 5;

	t5 = (((x21&x22)|x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 84640868092LLU;
	static volatile int16_t x28 = -850;
	int32_t t6 = 5276510;

	t6 = (((x25&x26)|x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = 14;
	int8_t x30 = 62;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = -1724;

	t7 = (((x29&x30)|x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x35 = 1804;
	int16_t x36 = -1;
	volatile int32_t t8 = -24374912;

	t8 = (((x33&x34)|x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -1;
	int32_t x39 = 488651;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t9 = -979;

	t9 = (((x37&x38)|x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile int32_t x42 = INT32_MIN;
	static int16_t x43 = INT16_MAX;
	volatile int64_t x44 = -12LL;
	static int32_t t10 = -130757;

	t10 = (((x41&x42)|x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 7021732196LLU;
	uint16_t x47 = 148U;
	uint64_t x48 = UINT64_MAX;
	static int32_t t11 = -6;

	t11 = (((x45&x46)|x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 2940U;
	int64_t x51 = -2LL;
	int8_t x52 = INT8_MIN;

	t12 = (((x49&x50)|x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	static uint8_t x54 = 1U;
	volatile int32_t t13 = -137;

	t13 = (((x53&x54)|x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -7;
	static int16_t x58 = INT16_MIN;
	static volatile uint64_t x59 = 513254691820640416LLU;
	int32_t t14 = -646;

	t14 = (((x57&x58)|x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -13039;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = 1LLU;
	int32_t x64 = -1;

	t15 = (((x61&x62)|x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -526;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 3445444;

	t16 = (((x65&x66)|x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 527918245;
	volatile int32_t t17 = 6;

	t17 = (((x69&x70)|x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int8_t x74 = -1;
	int32_t x76 = 38;
	int32_t t18 = 4335263;

	t18 = (((x73&x74)|x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -2841657LL;
	int32_t x80 = INT32_MAX;
	static volatile int32_t t19 = -1657047;

	t19 = (((x77&x78)|x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -136808738710510985LL;
	static uint64_t x82 = UINT64_MAX;
	uint32_t x83 = 4U;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -98683;

	t20 = (((x81&x82)|x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MIN;
	volatile int8_t x87 = 36;
	volatile int32_t x88 = INT32_MAX;

	t21 = (((x85&x86)|x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -3;
	uint64_t x90 = 219534LLU;
	uint64_t x92 = 53539333886026858LLU;
	volatile int32_t t22 = 4;

	t22 = (((x89&x90)|x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 0U;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = 387;

	t23 = (((x93&x94)|x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int16_t x99 = INT16_MIN;
	static int32_t t24 = 107065410;

	t24 = (((x97&x98)|x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int64_t x103 = -3370001954028140LL;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = 3147403;

	t25 = (((x101&x102)|x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x107 = UINT8_MAX;
	volatile int32_t t26 = -550;

	t26 = (((x105&x106)|x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 6499;
	uint8_t x111 = 9U;
	volatile int32_t t27 = -4;

	t27 = (((x109&x110)|x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MAX;
	volatile uint16_t x116 = 265U;
	volatile int32_t t28 = -856966;

	t28 = (((x113&x114)|x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int8_t x119 = 19;
	uint32_t x120 = 1655548919U;

	t29 = (((x117&x118)|x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 0;
	static int32_t x122 = -17950;
	static int16_t x123 = -1;
	volatile uint64_t x124 = 0LLU;
	static int32_t t30 = -37534122;

	t30 = (((x121&x122)|x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = 1442866523218435743LLU;

	t31 = (((x125&x126)|x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 1U;
	static volatile uint16_t x131 = UINT16_MAX;
	int32_t t32 = -34983602;

	t32 = (((x129&x130)|x131)==x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -46840004;
	static int64_t x134 = 157197LL;
	volatile int16_t x135 = 0;
	int32_t t33 = 1;

	t33 = (((x133&x134)|x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	static int64_t x138 = INT64_MAX;
	static int64_t x139 = 728500171270154LL;
	int32_t x140 = -8596;
	volatile int32_t t34 = 3939;

	t34 = (((x137&x138)|x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x142 = INT64_MAX;
	int32_t x143 = 112;
	uint16_t x144 = 1U;
	int32_t t35 = -11;

	t35 = (((x141&x142)|x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = INT8_MIN;
	uint16_t x147 = 20431U;
	int64_t x148 = -1LL;
	volatile int32_t t36 = -423006;

	t36 = (((x145&x146)|x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 8U;
	static int64_t x150 = INT64_MIN;
	uint64_t x151 = 473462996327LLU;
	volatile int64_t x152 = INT64_MIN;
	int32_t t37 = -109;

	t37 = (((x149&x150)|x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 117320691402LLU;
	static volatile int8_t x154 = -1;
	int8_t x155 = 35;
	uint16_t x156 = 1871U;
	volatile int32_t t38 = 234;

	t38 = (((x153&x154)|x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 89U;
	int64_t x158 = -1LL;
	uint64_t x159 = 318895286LLU;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = 2;

	t39 = (((x157&x158)|x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	volatile uint16_t x162 = UINT16_MAX;
	static int16_t x163 = -1784;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -914;

	t40 = (((x161&x162)|x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x165 = 17237142U;
	static volatile uint32_t x166 = 36U;
	int16_t x167 = -864;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 3710446;

	t41 = (((x165&x166)|x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MIN;
	volatile uint64_t x172 = 146LLU;
	int32_t t42 = 11;

	t42 = (((x169&x170)|x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 5U;
	volatile int64_t x174 = INT64_MIN;
	int8_t x175 = 41;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 11852;

	t43 = (((x173&x174)|x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	uint64_t x179 = 42039958232LLU;
	int16_t x180 = 630;
	int32_t t44 = 3;

	t44 = (((x177&x178)|x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 12;
	uint32_t x182 = 8U;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 3576094;

	t45 = (((x181&x182)|x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	uint64_t x186 = 143840931672837LLU;
	int32_t x187 = INT32_MIN;
	int8_t x188 = -1;
	volatile int32_t t46 = 7;

	t46 = (((x185&x186)|x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x190 = INT8_MAX;
	int64_t x191 = -1LL;
	static int32_t t47 = -362274259;

	t47 = (((x189&x190)|x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 1;
	uint64_t x194 = 3312532378LLU;
	static int8_t x195 = INT8_MAX;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -6812166;

	t48 = (((x193&x194)|x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -2;
	int32_t x199 = 233866200;
	int32_t t49 = -24224527;

	t49 = (((x197&x198)|x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MAX;
	static int64_t x202 = -113693176LL;
	uint32_t x203 = 2344168U;
	int64_t x204 = 61LL;

	t50 = (((x201&x202)|x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = 117603;
	static int8_t x207 = 33;
	uint64_t x208 = 60414434775LLU;
	int32_t t51 = 243711;

	t51 = (((x205&x206)|x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 3203549986426684LL;
	static int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = -3140;

	t52 = (((x209&x210)|x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -59;
	static int8_t x214 = 1;
	int8_t x215 = 0;
	int16_t x216 = -1;

	t53 = (((x213&x214)|x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x219 = 27;
	int16_t x220 = -1;

	t54 = (((x217&x218)|x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = 31;
	int16_t x224 = -1;
	volatile int32_t t55 = 4;

	t55 = (((x221&x222)|x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -253668;
	int32_t x226 = INT32_MAX;
	static uint64_t x227 = 1051867643805601693LLU;
	uint32_t x228 = UINT32_MAX;
	static int32_t t56 = 15;

	t56 = (((x225&x226)|x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x230 = INT32_MIN;
	volatile int16_t x232 = INT16_MAX;
	int32_t t57 = 200;

	t57 = (((x229&x230)|x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 7;
	int8_t x234 = INT8_MIN;
	static int16_t x235 = INT16_MIN;
	int64_t x236 = -964793846501392LL;

	t58 = (((x233&x234)|x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -3407LL;
	int32_t x240 = -3932;
	static int32_t t59 = -5;

	t59 = (((x237&x238)|x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 9879580U;
	int64_t x242 = 402450208579LL;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;
	static volatile int32_t t60 = 45;

	t60 = (((x241&x242)|x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 1018U;
	int8_t x248 = 27;
	int32_t t61 = 83;

	t61 = (((x245&x246)|x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 24U;
	int16_t x250 = INT16_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -6824032;
	int32_t t62 = -4308278;

	t62 = (((x249&x250)|x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 34U;
	int8_t x255 = -35;
	int8_t x256 = INT8_MIN;

	t63 = (((x253&x254)|x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 5U;
	static volatile int16_t x258 = INT16_MAX;
	volatile int8_t x260 = INT8_MAX;
	static int32_t t64 = -6;

	t64 = (((x257&x258)|x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x263 = 19U;
	int32_t x264 = INT32_MAX;

	t65 = (((x261&x262)|x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static uint64_t x266 = 3736387354843LLU;
	volatile uint8_t x267 = 0U;

	t66 = (((x265&x266)|x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 34522269;
	static int8_t x271 = -1;
	volatile int16_t x272 = 11;
	volatile int32_t t67 = 59550657;

	t67 = (((x269&x270)|x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x274 = -1;
	uint16_t x275 = 6634U;
	uint64_t x276 = 71739LLU;
	static int32_t t68 = 14127991;

	t68 = (((x273&x274)|x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	static int8_t x278 = -1;
	int32_t x279 = -1;
	int8_t x280 = -1;
	int32_t t69 = -111487;

	t69 = (((x277&x278)|x279)==x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 112;
	static uint64_t x282 = 2637105886993881LLU;
	static volatile int8_t x283 = -1;
	static int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = -8505944;

	t70 = (((x281&x282)|x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -440;
	int64_t x287 = -4469286407LL;
	static int16_t x288 = INT16_MAX;
	int32_t t71 = 66289504;

	t71 = (((x285&x286)|x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = 0;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 1910U;
	static int32_t t72 = -40869363;

	t72 = (((x289&x290)|x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	int16_t x295 = 28;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -2184542;

	t73 = (((x293&x294)|x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = 7;
	volatile int16_t x299 = -1;
	uint64_t x300 = 1LLU;
	volatile int32_t t74 = 74;

	t74 = (((x297&x298)|x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MIN;
	int16_t x304 = -2;
	volatile int32_t t75 = -1295200;

	t75 = (((x301&x302)|x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	static uint32_t x307 = 312U;
	volatile int32_t t76 = 578;

	t76 = (((x305&x306)|x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;

	t77 = (((x309&x310)|x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = 49573LLU;
	int32_t x316 = INT32_MIN;

	t78 = (((x313&x314)|x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 882U;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = -1LL;
	int32_t t79 = 183081343;

	t79 = (((x317&x318)|x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x323 = 15U;
	static uint16_t x324 = 1000U;
	volatile int32_t t80 = 177146064;

	t80 = (((x321&x322)|x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 193432488626964LLU;
	static int32_t x327 = INT32_MIN;
	static uint64_t x328 = 8747621901056687166LLU;
	volatile int32_t t81 = 1;

	t81 = (((x325&x326)|x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	static uint16_t x330 = 2231U;
	static volatile int32_t t82 = -241731074;

	t82 = (((x329&x330)|x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 2U;
	int32_t x334 = INT32_MIN;
	int64_t x336 = 830231471150222270LL;
	int32_t t83 = 10991854;

	t83 = (((x333&x334)|x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	static int32_t x338 = 3861;
	volatile int32_t t84 = -216;

	t84 = (((x337&x338)|x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 1653579086644LLU;
	uint8_t x342 = UINT8_MAX;
	volatile int64_t x343 = INT64_MIN;
	volatile int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -907915372;

	t85 = (((x341&x342)|x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 36U;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 122U;

	t86 = (((x345&x346)|x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 5739U;
	static int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;
	static volatile int32_t t87 = 2;

	t87 = (((x349&x350)|x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	int64_t x354 = -1LL;
	uint8_t x355 = 1U;
	int64_t x356 = -1LL;
	volatile int32_t t88 = 7847114;

	t88 = (((x353&x354)|x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = 224;
	uint16_t x359 = 413U;
	static volatile int16_t x360 = -1;
	volatile int32_t t89 = 1;

	t89 = (((x357&x358)|x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	static int32_t x362 = 0;
	static volatile int32_t x364 = INT32_MIN;
	int32_t t90 = -98;

	t90 = (((x361&x362)|x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1079572038481728LL;
	static int16_t x368 = -4396;
	int32_t t91 = 693111612;

	t91 = (((x365&x366)|x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -24;
	volatile uint64_t x370 = 1420396651235LLU;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 1;

	t92 = (((x369&x370)|x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 14U;
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t93 = -18436710;

	t93 = (((x373&x374)|x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 64955U;
	int32_t x378 = -1;
	int8_t x379 = -10;
	int32_t x380 = 1;
	int32_t t94 = -63028053;

	t94 = (((x377&x378)|x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	volatile int16_t x383 = -87;
	volatile int16_t x384 = INT16_MIN;
	static int32_t t95 = 4131;

	t95 = (((x381&x382)|x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static volatile int64_t x386 = 60LL;
	static uint64_t x387 = UINT64_MAX;
	int8_t x388 = -1;
	volatile int32_t t96 = 436;

	t96 = (((x385&x386)|x387)==x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x391 = -1;
	int64_t x392 = INT64_MAX;
	static volatile int32_t t97 = -1577071;

	t97 = (((x389&x390)|x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	static uint32_t x394 = 461123308U;
	int16_t x395 = -113;
	int32_t t98 = 329328784;

	t98 = (((x393&x394)|x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	int32_t t99 = 1;

	t99 = (((x397&x398)|x399)==x400);

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

