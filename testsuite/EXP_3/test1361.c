#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint64_t x6 = UINT64_MAX;
int64_t x11 = -1LL;
int8_t x16 = -2;
static int32_t t3 = 462;
static uint8_t x17 = 49U;
uint16_t x38 = 4024U;
int64_t x44 = -254LL;
static int64_t x48 = 402LL;
static int8_t x51 = 5;
int32_t t9 = 21564900;
static volatile int16_t x69 = INT16_MIN;
uint8_t x70 = 34U;
int16_t x72 = INT16_MAX;
static int8_t x78 = INT8_MIN;
volatile int32_t t13 = 234;
int8_t x83 = -3;
int32_t x88 = INT32_MIN;
volatile int32_t t15 = -45900467;
volatile uint32_t x97 = 185396U;
int8_t x98 = INT8_MAX;
uint8_t x99 = 3U;
int64_t x100 = -1146663340868471LL;
int32_t x102 = 1;
int16_t x103 = INT16_MAX;
volatile uint64_t x109 = 6998LLU;
int16_t x115 = INT16_MIN;
volatile int8_t x132 = -1;
int32_t x138 = 2574;
int8_t x156 = INT8_MIN;
static int32_t x171 = INT32_MAX;
static int8_t x186 = INT8_MAX;
uint64_t x188 = 1857LLU;
uint16_t x189 = 3807U;
volatile int32_t t39 = -76;
volatile int32_t t40 = -27;
volatile int64_t x202 = INT64_MIN;
int32_t t41 = 11;
uint16_t x208 = UINT16_MAX;
int8_t x231 = INT8_MAX;
static int32_t x235 = -492;
int16_t x240 = 1366;
uint32_t x245 = 6331367U;
volatile int32_t t53 = -20522;
static uint64_t x261 = 4764LLU;
volatile uint16_t x269 = 8320U;
volatile int32_t t56 = -59673;
volatile int32_t x276 = 1154833;
volatile int32_t t57 = -65224024;
static volatile int16_t x279 = 20;
volatile uint16_t x283 = 15U;
volatile int16_t x285 = -3771;
static uint8_t x304 = 1U;
int32_t x309 = -1;
volatile uint16_t x310 = UINT16_MAX;
int8_t x312 = -1;
static int8_t x319 = 5;
volatile int32_t t68 = 10249;
uint64_t x335 = 87060163799LLU;
uint64_t x342 = 146713995106702LLU;
volatile uint64_t x347 = 10LLU;
uint8_t x350 = 10U;
static int8_t x358 = INT8_MAX;
volatile uint16_t x360 = 7U;
int32_t x367 = -41267;
uint8_t x368 = 1U;
volatile int16_t x370 = -1;
uint8_t x372 = 7U;
int32_t t79 = 7637;
int16_t x387 = -1;
int32_t x388 = INT32_MIN;
static volatile int32_t t83 = 33070677;
static volatile uint8_t x399 = 1U;
static volatile int32_t t87 = -55001360;
int32_t t88 = 2036414;
int8_t x416 = INT8_MIN;
volatile int16_t x418 = -1;
int16_t x424 = -396;
int32_t x430 = -967632366;
static volatile int32_t x432 = INT32_MIN;
static int32_t x436 = INT32_MIN;
int32_t t94 = 7;
volatile int16_t x437 = 7128;
volatile int8_t x439 = -15;
int16_t x444 = -14;
static int16_t x446 = 4590;
volatile int32_t x453 = INT32_MIN;
static volatile uint64_t x454 = 0LLU;
uint8_t x455 = 100U;
static int32_t t99 = -4448;


void f0(void) {
	int32_t x1 = 218693;
	static int32_t x3 = INT32_MIN;
	static uint64_t x4 = 11034112LLU;
	static volatile int32_t t0 = 0;

	t0 = ((x1+x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 490;

	t1 = ((x5+x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x10 = 2U;
	static int64_t x12 = 22545270417387LL;
	volatile int32_t t2 = -38606;

	t2 = ((x9+x10)<(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -124LL;
	int8_t x14 = 23;
	int64_t x15 = INT64_MIN;

	t3 = ((x13+x14)<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = INT16_MIN;
	volatile int16_t x19 = INT16_MAX;
	static int16_t x20 = -384;
	volatile int32_t t4 = -137879;

	t4 = ((x17+x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1;
	uint8_t x34 = 2U;
	int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t5 = 24;

	t5 = ((x33+x34)<(x35<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x37 = 27U;
	uint64_t x39 = UINT64_MAX;
	volatile int64_t x40 = INT64_MAX;
	int32_t t6 = 0;

	t6 = ((x37+x38)<(x39<x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	static volatile int16_t x42 = INT16_MIN;
	static int64_t x43 = 0LL;
	int32_t t7 = -3364;

	t7 = ((x41+x42)<(x43<x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = INT64_MAX;
	static volatile int32_t x46 = -1;
	int16_t x47 = INT16_MIN;
	int32_t t8 = 7393;

	t8 = ((x45+x46)<(x47<x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	static uint16_t x50 = UINT16_MAX;
	int64_t x52 = INT64_MIN;

	t9 = ((x49+x50)<(x51<x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 122U;
	static uint64_t x62 = 114941957735027LLU;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = 36;
	volatile int32_t t10 = -328;

	t10 = ((x61+x62)<(x63<x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 0U;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -1LL;
	int8_t x68 = -1;
	volatile int32_t t11 = -1;

	t11 = ((x65+x66)<(x67<x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x71 = 1459U;
	int32_t t12 = -19;

	t12 = ((x69+x70)<(x71<x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x77 = 5050U;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = -1;

	t13 = ((x77+x78)<(x79<x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x81 = UINT8_MAX;
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = 3;
	int32_t t14 = 1;

	t14 = ((x81+x82)<(x83<x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -1;
	uint8_t x86 = 5U;
	int8_t x87 = -1;

	t15 = ((x85+x86)<(x87<x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = 1299LL;
	int32_t x91 = INT32_MIN;
	static uint64_t x92 = 319232623LLU;
	volatile int32_t t16 = -184583;

	t16 = ((x89+x90)<(x91<x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -1;
	static volatile int16_t x94 = -1771;
	int32_t x95 = 53334;
	int64_t x96 = INT64_MAX;
	volatile int32_t t17 = -3;

	t17 = ((x93+x94)<(x95<x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t t18 = -1717;

	t18 = ((x97+x98)<(x99<x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = -1LL;
	uint32_t x104 = 837U;
	static volatile int32_t t19 = 120;

	t19 = ((x101+x102)<(x103<x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 43U;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = 96U;
	static int8_t x108 = INT8_MIN;
	int32_t t20 = -40756901;

	t20 = ((x105+x106)<(x107<x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x110 = INT32_MIN;
	static int32_t x111 = INT32_MAX;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t21 = 1;

	t21 = ((x109+x110)<(x111<x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x113 = 31U;
	volatile uint32_t x114 = UINT32_MAX;
	int32_t x116 = -1624892;
	volatile int32_t t22 = -811789;

	t22 = ((x113+x114)<(x115<x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 1528961LLU;
	int32_t x122 = -102893;
	int64_t x123 = -1LL;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t23 = 654663629;

	t23 = ((x121+x122)<(x123<x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 494U;
	static uint16_t x126 = 11245U;
	uint32_t x127 = 79U;
	static int16_t x128 = -1;
	int32_t t24 = 15340;

	t24 = ((x125+x126)<(x127<x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = INT16_MIN;
	volatile uint32_t x131 = 976U;
	int32_t t25 = -10775288;

	t25 = ((x129+x130)<(x131<x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = -360959LL;
	uint16_t x139 = 2U;
	uint8_t x140 = 0U;
	volatile int32_t t26 = -1;

	t26 = ((x137+x138)<(x139<x140));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -12301724634279372LL;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = 2;
	int16_t x144 = INT16_MIN;
	volatile int32_t t27 = -58229;

	t27 = ((x141+x142)<(x143<x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = 117679234LL;
	uint8_t x146 = 18U;
	uint8_t x147 = 2U;
	int64_t x148 = -1LL;
	int32_t t28 = -656055;

	t28 = ((x145+x146)<(x147<x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -75194403LL;
	volatile uint16_t x150 = 79U;
	static volatile int8_t x151 = INT8_MAX;
	int32_t x152 = -3;
	volatile int32_t t29 = 2220;

	t29 = ((x149+x150)<(x151<x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x153 = UINT64_MAX;
	static int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	volatile int32_t t30 = -99616;

	t30 = ((x153+x154)<(x155<x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = 115578;
	static int64_t x158 = INT64_MIN;
	static int32_t x159 = 109;
	int16_t x160 = 15;
	int32_t t31 = -4076223;

	t31 = ((x157+x158)<(x159<x160));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x161 = -2765522411966437751LL;
	uint16_t x162 = 11U;
	int8_t x163 = -1;
	static uint8_t x164 = 14U;
	volatile int32_t t32 = -97868;

	t32 = ((x161+x162)<(x163<x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 13LLU;
	static volatile int8_t x166 = INT8_MAX;
	volatile int8_t x167 = -7;
	int8_t x168 = INT8_MIN;
	volatile int32_t t33 = 17707324;

	t33 = ((x165+x166)<(x167<x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = -1;
	int64_t x170 = -7987LL;
	static int64_t x172 = INT64_MAX;
	static volatile int32_t t34 = -1;

	t34 = ((x169+x170)<(x171<x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x177 = -921;
	int32_t x178 = 48;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 26;
	volatile int32_t t35 = 29985;

	t35 = ((x177+x178)<(x179<x180));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = INT8_MIN;
	static uint8_t x183 = UINT8_MAX;
	static volatile int16_t x184 = -1;
	volatile int32_t t36 = -2477014;

	t36 = ((x181+x182)<(x183<x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = 241234248LL;
	static int32_t x187 = -1;
	volatile int32_t t37 = 630;

	t37 = ((x185+x186)<(x187<x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x190 = INT16_MAX;
	static int64_t x191 = INT64_MIN;
	uint32_t x192 = 5818772U;
	volatile int32_t t38 = 60873019;

	t38 = ((x189+x190)<(x191<x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x193 = -44228;
	uint32_t x194 = 51910U;
	int16_t x195 = -81;
	int16_t x196 = INT16_MIN;

	t39 = ((x193+x194)<(x195<x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x197 = UINT16_MAX;
	static int32_t x198 = -19434963;
	volatile int64_t x199 = -1315030678359LL;
	volatile uint16_t x200 = 28884U;

	t40 = ((x197+x198)<(x199<x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x201 = 507U;
	static uint64_t x203 = 101321236082LLU;
	int32_t x204 = 1064859360;

	t41 = ((x201+x202)<(x203<x204));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x205 = 10936126852413756LL;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 27U;
	static int32_t t42 = -4817738;

	t42 = ((x205+x206)<(x207<x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 2372U;
	static int8_t x210 = INT8_MAX;
	uint8_t x211 = 6U;
	volatile int64_t x212 = -1LL;
	volatile int32_t t43 = 738;

	t43 = ((x209+x210)<(x211<x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = INT16_MAX;
	volatile uint64_t x222 = UINT64_MAX;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = UINT8_MAX;
	int32_t t44 = 1600;

	t44 = ((x221+x222)<(x223<x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 471LLU;
	volatile int32_t x226 = 95925;
	int64_t x227 = 107177347366459LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t45 = -2064325;

	t45 = ((x225+x226)<(x227<x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = 3;
	uint16_t x230 = 205U;
	int32_t x232 = INT32_MIN;
	volatile int32_t t46 = 31288900;

	t46 = ((x229+x230)<(x231<x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t x234 = 906696U;
	uint64_t x236 = 120880LLU;
	static volatile int32_t t47 = -34;

	t47 = ((x233+x234)<(x235<x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static uint8_t x238 = 11U;
	int32_t x239 = INT32_MIN;
	static int32_t t48 = 584654;

	t48 = ((x237+x238)<(x239<x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = 973U;
	static uint16_t x242 = 61U;
	volatile int8_t x243 = 25;
	static int64_t x244 = INT64_MAX;
	volatile int32_t t49 = -193217;

	t49 = ((x241+x242)<(x243<x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x246 = -1;
	static volatile int32_t x247 = -1;
	int64_t x248 = INT64_MAX;
	int32_t t50 = -8;

	t50 = ((x245+x246)<(x247<x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = 55;
	volatile int16_t x250 = INT16_MIN;
	uint32_t x251 = 3U;
	int32_t x252 = -1;
	static int32_t t51 = -70539;

	t51 = ((x249+x250)<(x251<x252));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = -1;
	uint32_t x254 = 4694851U;
	volatile int64_t x255 = -1LL;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t52 = -31346865;

	t52 = ((x253+x254)<(x255<x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = -1;
	uint16_t x258 = 19121U;
	volatile int16_t x259 = INT16_MAX;
	static uint8_t x260 = 60U;

	t53 = ((x257+x258)<(x259<x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x262 = -1LL;
	volatile int8_t x263 = 1;
	int64_t x264 = INT64_MAX;
	volatile int32_t t54 = -36;

	t54 = ((x261+x262)<(x263<x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 19U;
	static volatile int8_t x266 = 1;
	uint64_t x267 = 290164852913LLU;
	int8_t x268 = 29;
	volatile int32_t t55 = -17945;

	t55 = ((x265+x266)<(x267<x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x270 = INT64_MIN;
	int16_t x271 = 925;
	int16_t x272 = 2862;

	t56 = ((x269+x270)<(x271<x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = INT8_MIN;
	int32_t x274 = 0;
	int8_t x275 = -1;

	t57 = ((x273+x274)<(x275<x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = 3;
	volatile int16_t x278 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t58 = 3178;

	t58 = ((x277+x278)<(x279<x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	volatile int32_t t59 = 111008627;

	t59 = ((x281+x282)<(x283<x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x286 = UINT8_MAX;
	int64_t x287 = -5744LL;
	int32_t x288 = INT32_MIN;
	volatile int32_t t60 = 3;

	t60 = ((x285+x286)<(x287<x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int64_t x294 = -3621643806762382LL;
	int64_t x295 = -81LL;
	int8_t x296 = 38;
	int32_t t61 = -232387205;

	t61 = ((x293+x294)<(x295<x296));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	int16_t x302 = INT16_MAX;
	static int8_t x303 = 1;
	volatile int32_t t62 = -46698628;

	t62 = ((x301+x302)<(x303<x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = 0;
	int64_t x307 = INT64_MAX;
	volatile int32_t x308 = INT32_MAX;
	static int32_t t63 = -781137985;

	t63 = ((x305+x306)<(x307<x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x311 = -10;
	int32_t t64 = -19;

	t64 = ((x309+x310)<(x311<x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MAX;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = 25;
	static volatile int32_t t65 = 1;

	t65 = ((x313+x314)<(x315<x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = -976;
	int8_t x318 = INT8_MIN;
	uint16_t x320 = 0U;
	volatile int32_t t66 = 9;

	t66 = ((x317+x318)<(x319<x320));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MIN;
	static int32_t t67 = 813006;

	t67 = ((x321+x322)<(x323<x324));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x325 = 0U;
	int32_t x326 = 405433667;
	uint8_t x327 = 0U;
	static int32_t x328 = INT32_MAX;

	t68 = ((x325+x326)<(x327<x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = INT8_MAX;
	volatile int32_t x330 = -233985;
	uint64_t x331 = 158LLU;
	static volatile uint64_t x332 = 11LLU;
	int32_t t69 = -124679;

	t69 = ((x329+x330)<(x331<x332));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	volatile uint64_t x336 = 0LLU;
	int32_t t70 = -31044214;

	t70 = ((x333+x334)<(x335<x336));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x337 = 204U;
	int8_t x338 = -1;
	static int32_t x339 = INT32_MAX;
	int64_t x340 = -3528948483915LL;
	int32_t t71 = -100;

	t71 = ((x337+x338)<(x339<x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x341 = INT8_MIN;
	volatile int64_t x343 = 1LL;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t72 = 31691;

	t72 = ((x341+x342)<(x343<x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = 1163U;
	int16_t x346 = INT16_MAX;
	uint32_t x348 = 129U;
	volatile int32_t t73 = -18898;

	t73 = ((x345+x346)<(x347<x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 1456LLU;
	int16_t x351 = INT16_MIN;
	volatile uint32_t x352 = UINT32_MAX;
	static volatile int32_t t74 = -1;

	t74 = ((x349+x350)<(x351<x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	static int8_t x354 = 1;
	uint32_t x355 = 15657028U;
	volatile int8_t x356 = -5;
	static volatile int32_t t75 = -492198;

	t75 = ((x353+x354)<(x355<x356));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1LL;
	uint64_t x359 = UINT64_MAX;
	int32_t t76 = 4891439;

	t76 = ((x357+x358)<(x359<x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x361 = UINT32_MAX;
	int32_t x362 = 187372;
	static int8_t x363 = INT8_MIN;
	uint64_t x364 = 7207888094714687LLU;
	volatile int32_t t77 = -5384;

	t77 = ((x361+x362)<(x363<x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = 1403081265714829LL;
	int32_t t78 = 15;

	t78 = ((x365+x366)<(x367<x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MAX;
	static int8_t x371 = 10;

	t79 = ((x369+x370)<(x371<x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x373 = 527025859U;
	volatile int16_t x374 = -1;
	uint16_t x375 = 3U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t80 = 3235;

	t80 = ((x373+x374)<(x375<x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x377 = 114U;
	int8_t x378 = -4;
	static uint8_t x379 = 0U;
	uint32_t x380 = 363U;
	volatile int32_t t81 = 20088;

	t81 = ((x377+x378)<(x379<x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MAX;
	static int64_t x382 = -1LL;
	int16_t x383 = -236;
	static volatile int64_t x384 = -1LL;
	volatile int32_t t82 = 167334;

	t82 = ((x381+x382)<(x383<x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x385 = 42714957LLU;
	uint64_t x386 = 20848695101816LLU;

	t83 = ((x385+x386)<(x387<x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x389 = -1939;
	int16_t x390 = INT16_MAX;
	static uint64_t x391 = UINT64_MAX;
	static int8_t x392 = -15;
	int32_t t84 = -10603;

	t84 = ((x389+x390)<(x391<x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = -1;
	uint8_t x394 = 0U;
	volatile int16_t x395 = -1;
	volatile int64_t x396 = INT64_MIN;
	static int32_t t85 = 0;

	t85 = ((x393+x394)<(x395<x396));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MAX;
	volatile int8_t x398 = INT8_MAX;
	int32_t x400 = 414931744;
	volatile int32_t t86 = 7884;

	t86 = ((x397+x398)<(x399<x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x405 = UINT16_MAX;
	volatile int8_t x406 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = UINT8_MAX;

	t87 = ((x405+x406)<(x407<x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = -1;
	int8_t x410 = 1;
	uint8_t x411 = 0U;
	int16_t x412 = INT16_MIN;

	t88 = ((x409+x410)<(x411<x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = -668457325698LL;
	int64_t x414 = -1LL;
	int16_t x415 = 0;
	int32_t t89 = -13;

	t89 = ((x413+x414)<(x415<x416));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x417 = 145353651U;
	volatile uint32_t x419 = 16004U;
	int32_t x420 = -1;
	int32_t t90 = 223792;

	t90 = ((x417+x418)<(x419<x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = -1LL;
	int32_t x423 = INT32_MIN;
	volatile int32_t t91 = -13;

	t91 = ((x421+x422)<(x423<x424));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = UINT64_MAX;
	static uint8_t x426 = 3U;
	static uint64_t x427 = 97624503LLU;
	int8_t x428 = INT8_MIN;
	volatile int32_t t92 = -512571325;

	t92 = ((x425+x426)<(x427<x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x431 = INT16_MAX;
	static int32_t t93 = 6631;

	t93 = ((x429+x430)<(x431<x432));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 64U;
	int32_t x434 = INT32_MIN;
	int64_t x435 = INT64_MAX;

	t94 = ((x433+x434)<(x435<x436));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x438 = 1;
	int8_t x440 = -1;
	static int32_t t95 = -4287;

	t95 = ((x437+x438)<(x439<x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x441 = 7;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	static int32_t t96 = 16279190;

	t96 = ((x441+x442)<(x443<x444));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x445 = 96U;
	int16_t x447 = INT16_MIN;
	int8_t x448 = 15;
	int32_t t97 = 0;

	t97 = ((x445+x446)<(x447<x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x449 = -113859792;
	uint32_t x450 = 813744298U;
	int64_t x451 = INT64_MIN;
	volatile int8_t x452 = INT8_MAX;
	static int32_t t98 = -22;

	t98 = ((x449+x450)<(x451<x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x456 = INT8_MIN;

	t99 = ((x453+x454)<(x455<x456));

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

