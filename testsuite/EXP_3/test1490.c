#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -7;
int64_t x9 = INT64_MIN;
static int64_t x10 = INT64_MAX;
int32_t x11 = INT32_MIN;
int32_t t2 = 44447;
int16_t x14 = -14;
int32_t x17 = INT32_MAX;
int32_t t4 = -4;
uint64_t x23 = 35183797990942961LLU;
volatile int32_t t9 = 24547;
int32_t x44 = -1;
int64_t x56 = INT64_MIN;
static volatile int64_t x60 = INT64_MAX;
volatile int32_t t14 = -108924;
uint16_t x64 = 27789U;
int32_t x70 = 0;
volatile int64_t x73 = INT64_MIN;
static int32_t t18 = 13598;
static volatile int32_t x82 = -1;
volatile int16_t x92 = -2;
uint8_t x93 = 4U;
volatile int16_t x94 = -30;
int32_t t24 = -2489;
int16_t x105 = -1;
uint64_t x106 = 1337140247235950LLU;
static volatile uint32_t x109 = 221U;
int32_t x116 = 1;
int64_t x118 = -1LL;
volatile uint16_t x120 = 1522U;
static int32_t x122 = INT32_MAX;
int8_t x130 = INT8_MIN;
volatile int32_t t32 = 1;
int64_t x135 = INT64_MIN;
int32_t t33 = -1;
volatile int64_t x140 = 3LL;
uint8_t x147 = 2U;
volatile int32_t t36 = 216232351;
static int64_t x149 = 669743387723775210LL;
int64_t x150 = 1124656678367716LL;
int16_t x152 = -1239;
int32_t x156 = INT32_MIN;
uint32_t x158 = 132700U;
int32_t t40 = -69;
static uint16_t x165 = 63U;
int16_t x171 = 0;
static volatile int8_t x173 = INT8_MIN;
int8_t x174 = -1;
int16_t x176 = -103;
int16_t x178 = INT16_MIN;
volatile int16_t x179 = INT16_MIN;
int16_t x180 = -1966;
int64_t x182 = -28072LL;
volatile int16_t x183 = -1;
static int16_t x184 = -918;
uint64_t x192 = 2148050694269487LLU;
int8_t x193 = -1;
int8_t x197 = INT8_MIN;
int64_t x200 = INT64_MIN;
volatile uint32_t x201 = 106U;
static int32_t x209 = INT32_MIN;
int64_t x220 = -231804393666623LL;
int32_t t54 = 227905349;
static uint32_t x223 = 534212U;
int64_t x225 = 2100530371LL;
static uint16_t x235 = 8U;
int64_t x237 = INT64_MIN;
int8_t x240 = INT8_MIN;
static volatile int32_t t59 = -1;
int8_t x242 = 0;
int32_t t60 = -15100;
int16_t x255 = INT16_MIN;
static volatile uint8_t x260 = UINT8_MAX;
volatile int32_t t64 = -4135380;
int32_t x267 = INT32_MIN;
int16_t x268 = 6;
int64_t x271 = 4403752387LL;
volatile int32_t t69 = 1;
int8_t x286 = 1;
int32_t x290 = INT32_MIN;
int32_t t72 = -1;
static int8_t x296 = -1;
uint16_t x299 = 2960U;
uint16_t x300 = 4697U;
volatile int32_t t74 = -428047;
int64_t x301 = INT64_MAX;
int16_t x306 = -1;
volatile int8_t x307 = -1;
volatile uint32_t x314 = UINT32_MAX;
static uint32_t x315 = 181418985U;
volatile int32_t t78 = 1;
int8_t x319 = INT8_MIN;
int32_t x322 = INT32_MIN;
uint16_t x334 = 0U;
static uint32_t x335 = UINT32_MAX;
int16_t x339 = -1;
int64_t x342 = 966175953677021LL;
uint64_t x349 = 1011455LLU;
int32_t x355 = INT32_MIN;
uint64_t x357 = 4263273192801279660LLU;
uint16_t x359 = UINT16_MAX;
int8_t x363 = -1;
static int16_t x366 = 11001;
int16_t x367 = INT16_MIN;
uint16_t x370 = 115U;
static uint8_t x381 = UINT8_MAX;
int32_t x384 = 1397;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x2 = 158216010186LL;
	volatile int8_t x3 = INT8_MIN;
	uint8_t x4 = 3U;
	int32_t t0 = -7;

	t0 = ((x1&x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 256U;
	volatile uint32_t x6 = 19523538U;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 30944U;

	t1 = ((x5&x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x12 = 2;

	t2 = ((x9&x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	uint8_t x15 = 43U;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -21747542;

	t3 = ((x13&x14)==(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = INT16_MIN;

	t4 = ((x17&x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 0;
	static volatile uint32_t x22 = 119U;
	int32_t x24 = 5058;
	int32_t t5 = 39390;

	t5 = ((x21&x22)==(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 23738U;
	int16_t x26 = -1127;
	int32_t x27 = -1;
	int32_t x28 = 2;
	int32_t t6 = 0;

	t6 = ((x25&x26)==(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 3430756942LL;
	int32_t x30 = 627;
	static int16_t x31 = -1;
	volatile uint64_t x32 = UINT64_MAX;
	int32_t t7 = 152919;

	t7 = ((x29&x30)==(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	volatile uint8_t x34 = 9U;
	int32_t x35 = INT32_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 0;

	t8 = ((x33&x34)==(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	static uint8_t x38 = UINT8_MAX;
	int64_t x39 = 6LL;
	int16_t x40 = -1;

	t9 = ((x37&x38)==(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	volatile uint8_t x43 = 48U;
	volatile int32_t t10 = -5;

	t10 = ((x41&x42)==(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = 1U;
	int8_t x47 = 1;
	volatile int8_t x48 = -1;
	static int32_t t11 = 355664;

	t11 = ((x45&x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	volatile int64_t x50 = INT64_MAX;
	static uint64_t x51 = UINT64_MAX;
	volatile int16_t x52 = INT16_MAX;
	static volatile int32_t t12 = 13;

	t12 = ((x49&x50)==(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 30;
	int8_t x54 = -1;
	volatile uint64_t x55 = 24364LLU;
	int32_t t13 = 63;

	t13 = ((x53&x54)==(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -328;
	int32_t x58 = -1;
	int64_t x59 = 2317LL;

	t14 = ((x57&x58)==(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -14LL;
	int8_t x62 = 14;
	static int16_t x63 = 10596;
	volatile int32_t t15 = 1881;

	t15 = ((x61&x62)==(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = 1290422033560LL;
	volatile int32_t x67 = 97641;
	int64_t x68 = INT64_MIN;
	static int32_t t16 = -27;

	t16 = ((x65&x66)==(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int64_t x71 = -1LL;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 1230;

	t17 = ((x69&x70)==(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 3442U;
	int8_t x75 = INT8_MIN;
	volatile uint16_t x76 = 1639U;

	t18 = ((x73&x74)==(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 315250U;
	int16_t x79 = INT16_MIN;
	int8_t x80 = 0;
	volatile int32_t t19 = -13;

	t19 = ((x77&x78)==(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MAX;
	uint64_t x83 = 25614015LLU;
	int8_t x84 = -1;
	volatile int32_t t20 = -14993537;

	t20 = ((x81&x82)==(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 0;
	uint8_t x86 = 1U;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	volatile int32_t t21 = -325;

	t21 = ((x85&x86)==(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 11U;
	volatile uint8_t x90 = 13U;
	static int8_t x91 = 0;
	int32_t t22 = 1;

	t22 = ((x89&x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = 2617;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 374324;

	t23 = ((x93&x94)==(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int8_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	volatile uint16_t x100 = 61U;

	t24 = ((x97&x98)==(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = 17;
	int16_t x102 = -1512;
	static int8_t x103 = 5;
	uint8_t x104 = 7U;
	volatile int32_t t25 = -4479035;

	t25 = ((x101&x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = 14;
	static volatile int32_t t26 = 1866;

	t26 = ((x105&x106)==(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MAX;
	int8_t x111 = 3;
	int8_t x112 = -38;
	int32_t t27 = -4370;

	t27 = ((x109&x110)==(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -1LL;
	volatile int64_t x114 = -4LL;
	int64_t x115 = INT64_MIN;
	volatile int32_t t28 = 29103217;

	t28 = ((x113&x114)==(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 606U;
	uint64_t x119 = 107LLU;
	volatile int32_t t29 = 13501785;

	t29 = ((x117&x118)==(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	int8_t x123 = 10;
	static int32_t x124 = INT32_MAX;
	int32_t t30 = -21010073;

	t30 = ((x121&x122)==(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -1;
	static volatile uint64_t x128 = 16382578424LLU;
	int32_t t31 = -72;

	t31 = ((x125&x126)==(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	int32_t x131 = -284654330;
	int64_t x132 = -1LL;

	t32 = ((x129&x130)==(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 0U;
	uint8_t x134 = 7U;
	int8_t x136 = -4;

	t33 = ((x133&x134)==(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 116644058;
	volatile int16_t x138 = INT16_MAX;
	static int64_t x139 = 78112337LL;
	static volatile int32_t t34 = 19336;

	t34 = ((x137&x138)==(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	static uint8_t x142 = 111U;
	volatile int8_t x143 = INT8_MAX;
	static int16_t x144 = 263;
	int32_t t35 = -5;

	t35 = ((x141&x142)==(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	uint16_t x146 = UINT16_MAX;
	int8_t x148 = 0;

	t36 = ((x145&x146)==(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MIN;
	int32_t t37 = -67473945;

	t37 = ((x149&x150)==(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	static volatile int32_t x154 = INT32_MIN;
	int32_t x155 = -1;
	volatile int32_t t38 = -1522;

	t38 = ((x153&x154)==(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	uint32_t x159 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;
	static int32_t t39 = 746427185;

	t39 = ((x157&x158)==(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 4;
	static volatile int32_t x162 = INT32_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile uint16_t x164 = UINT16_MAX;

	t40 = ((x161&x162)==(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 28U;
	static int32_t x167 = -1;
	volatile uint16_t x168 = UINT16_MAX;
	static volatile int32_t t41 = -4;

	t41 = ((x165&x166)==(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 339475057743LL;
	int64_t x170 = INT64_MAX;
	uint64_t x172 = 3847LLU;
	volatile int32_t t42 = 3729023;

	t42 = ((x169&x170)==(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x175 = -1;
	static int32_t t43 = 12192;

	t43 = ((x173&x174)==(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	volatile int32_t t44 = -111298126;

	t44 = ((x177&x178)==(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 0U;
	int32_t t45 = -6083;

	t45 = ((x181&x182)==(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x185 = INT64_MIN;
	volatile int64_t x186 = -1LL;
	static int16_t x187 = -1;
	int8_t x188 = -1;
	static volatile int32_t t46 = -18012357;

	t46 = ((x185&x186)==(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint32_t x190 = 1092481371U;
	int32_t x191 = INT32_MIN;
	int32_t t47 = -457074788;

	t47 = ((x189&x190)==(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	int32_t x196 = -2276863;
	volatile int32_t t48 = 754442;

	t48 = ((x193&x194)==(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	uint64_t x199 = UINT64_MAX;
	int32_t t49 = 2;

	t49 = ((x197&x198)==(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = 0;
	static volatile int32_t t50 = -153230;

	t50 = ((x201&x202)==(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = -1007;
	int64_t x207 = -1432283180771833074LL;
	uint32_t x208 = 2060U;
	int32_t t51 = 62;

	t51 = ((x205&x206)==(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x210 = UINT16_MAX;
	volatile int64_t x211 = -7513178011126146LL;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t52 = -523777058;

	t52 = ((x209&x210)==(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static int32_t x214 = -1;
	static uint32_t x215 = UINT32_MAX;
	static int32_t x216 = INT32_MAX;
	int32_t t53 = -1757;

	t53 = ((x213&x214)==(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -1;
	int64_t x218 = -155LL;
	int16_t x219 = INT16_MAX;

	t54 = ((x217&x218)==(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 2;
	static volatile int64_t x222 = INT64_MAX;
	int64_t x224 = -277892455244496LL;
	int32_t t55 = -193611297;

	t55 = ((x221&x222)==(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x226 = 28734479;
	uint32_t x227 = 227806671U;
	static uint32_t x228 = UINT32_MAX;
	int32_t t56 = -254366;

	t56 = ((x225&x226)==(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x229 = INT32_MAX;
	uint8_t x230 = 3U;
	static int8_t x231 = INT8_MAX;
	int32_t x232 = 47639;
	volatile int32_t t57 = 16623;

	t57 = ((x229&x230)==(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	static volatile uint32_t x234 = 30275372U;
	static uint32_t x236 = 182221650U;
	volatile int32_t t58 = 1041;

	t58 = ((x233&x234)==(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 0U;
	static uint8_t x239 = 8U;

	t59 = ((x237&x238)==(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MIN;
	int8_t x243 = INT8_MAX;
	uint64_t x244 = 3896781905146872LLU;

	t60 = ((x241&x242)==(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MAX;
	uint32_t x248 = UINT32_MAX;
	int32_t t61 = 160;

	t61 = ((x245&x246)==(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 26;
	static uint16_t x250 = 6620U;
	static int32_t x251 = 31;
	int8_t x252 = 4;
	int32_t t62 = -1483;

	t62 = ((x249&x250)==(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1116993LL;
	int64_t x254 = -1LL;
	volatile uint64_t x256 = 112834451167LLU;
	volatile int32_t t63 = -19;

	t63 = ((x253&x254)==(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -128496482;
	int32_t x258 = 28565;
	volatile int32_t x259 = INT32_MAX;

	t64 = ((x257&x258)==(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 3446852257506854465LL;
	uint16_t x262 = 2U;
	int16_t x263 = -1;
	volatile int8_t x264 = -1;
	volatile int32_t t65 = 22949;

	t65 = ((x261&x262)==(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 964854224476073LLU;
	static uint8_t x266 = 16U;
	int32_t t66 = 2580;

	t66 = ((x265&x266)==(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	static int16_t x270 = 26;
	int8_t x272 = INT8_MAX;
	int32_t t67 = 1;

	t67 = ((x269&x270)==(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = 50U;
	static int16_t x275 = INT16_MIN;
	static uint32_t x276 = 108562U;
	volatile int32_t t68 = -68100448;

	t68 = ((x273&x274)==(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	volatile int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MAX;
	uint8_t x280 = 93U;

	t69 = ((x277&x278)==(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = 1U;
	int32_t t70 = 812116578;

	t70 = ((x281&x282)==(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MIN;
	int32_t x287 = 5524293;
	static int8_t x288 = INT8_MIN;
	static int32_t t71 = 0;

	t71 = ((x285&x286)==(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;
	static volatile int8_t x291 = INT8_MIN;
	int8_t x292 = -3;

	t72 = ((x289&x290)==(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MAX;
	int32_t x295 = 631146;
	volatile int32_t t73 = -327097;

	t73 = ((x293&x294)==(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x298 = 8008950798LLU;

	t74 = ((x297&x298)==(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	static int64_t x303 = -424186LL;
	int16_t x304 = -1;
	volatile int32_t t75 = 765662310;

	t75 = ((x301&x302)==(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 0;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = -1;

	t76 = ((x305&x306)==(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	int16_t x311 = -1;
	uint64_t x312 = 25235LLU;
	int32_t t77 = 93;

	t77 = ((x309&x310)==(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x316 = 1312U;

	t78 = ((x313&x314)==(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -51444880809427LL;
	uint64_t x318 = 18LLU;
	volatile int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = 1511437;

	t79 = ((x317&x318)==(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	volatile int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = -22;

	t80 = ((x321&x322)==(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int8_t x327 = -1;
	uint16_t x328 = 20981U;
	int32_t t81 = -1;

	t81 = ((x325&x326)==(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 66256225617LLU;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 1033948U;
	int32_t x332 = -2968;
	volatile int32_t t82 = -2091913;

	t82 = ((x329&x330)==(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 11;
	static int8_t x336 = INT8_MIN;
	int32_t t83 = -203623450;

	t83 = ((x333&x334)==(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	uint32_t x340 = 712U;
	int32_t t84 = 1016356;

	t84 = ((x337&x338)==(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 6U;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 12855017498LLU;
	int32_t t85 = 35;

	t85 = ((x341&x342)==(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 58;
	int64_t x346 = 0LL;
	volatile int16_t x347 = INT16_MIN;
	static volatile uint32_t x348 = 2U;
	static int32_t t86 = -37183;

	t86 = ((x345&x346)==(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 5U;
	volatile int32_t x351 = INT32_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t87 = -3692192;

	t87 = ((x349&x350)==(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 65073033U;
	volatile int16_t x354 = 45;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 2265009;

	t88 = ((x353&x354)==(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x358 = UINT16_MAX;
	static int32_t x360 = INT32_MIN;
	int32_t t89 = 12079;

	t89 = ((x357&x358)==(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 4LLU;
	uint8_t x364 = 36U;
	int32_t t90 = -1;

	t90 = ((x361&x362)==(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	static volatile uint32_t x368 = UINT32_MAX;
	static int32_t t91 = 1;

	t91 = ((x365&x366)==(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 2438;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 13462984;

	t92 = ((x369&x370)==(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 0U;
	int64_t x375 = INT64_MIN;
	uint16_t x376 = UINT16_MAX;
	int32_t t93 = 1;

	t93 = ((x373&x374)==(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = -3932LL;
	static uint8_t x379 = UINT8_MAX;
	int8_t x380 = -6;
	int32_t t94 = -829699;

	t94 = ((x377&x378)==(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = -6120LL;
	volatile int32_t t95 = 1;

	t95 = ((x381&x382)==(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 0;
	volatile int16_t x386 = INT16_MAX;
	uint8_t x387 = 12U;
	int16_t x388 = -1;
	static int32_t t96 = -12260522;

	t96 = ((x385&x386)==(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = UINT16_MAX;
	int32_t t97 = -12;

	t97 = ((x389&x390)==(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	uint32_t x394 = 16190105U;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = -1;
	volatile int32_t t98 = -219;

	t98 = ((x393&x394)==(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	uint64_t x398 = 18844744717LLU;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = 0;
	volatile int32_t t99 = 1;

	t99 = ((x397&x398)==(x399<x400));

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

