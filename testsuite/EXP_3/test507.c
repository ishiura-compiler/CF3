#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = INT32_MAX;
uint8_t x14 = 29U;
uint32_t t1 = 78U;
static uint32_t t3 = 6515U;
uint64_t x38 = UINT64_MAX;
uint8_t x41 = 7U;
int32_t x50 = -123614603;
uint32_t x51 = 12175868U;
uint64_t x52 = 203444401002859LLU;
int64_t x56 = -1LL;
uint64_t x62 = 18LLU;
volatile uint16_t x67 = UINT16_MAX;
static int16_t x80 = 2454;
volatile uint32_t x88 = 2912U;
uint8_t x97 = 1U;
int64_t x99 = 68985444473LL;
int16_t x103 = -8214;
uint8_t x105 = 2U;
static volatile uint64_t x126 = 51036LLU;
int16_t x130 = INT16_MIN;
int16_t x131 = 1;
int32_t x132 = 121;
int8_t x146 = INT8_MIN;
uint32_t x147 = 2053580529U;
int32_t t24 = -105672;
static uint16_t x170 = 113U;
int64_t t27 = -63496LL;
uint16_t x173 = UINT16_MAX;
volatile int64_t t28 = -35960651930LL;
int64_t x177 = -147023936834696274LL;
uint16_t x182 = 62U;
int16_t x184 = -16281;
static int8_t x185 = INT8_MIN;
int32_t x186 = INT32_MIN;
volatile int16_t x187 = INT16_MAX;
uint8_t x191 = 1U;
static uint64_t t34 = 119098569879LLU;
uint64_t x213 = 62535532205806872LLU;
static volatile int64_t x214 = INT64_MIN;
volatile uint64_t t36 = 216573197561LLU;
uint64_t t37 = 498717483528LLU;
int8_t x221 = INT8_MAX;
volatile int64_t t38 = 15816361823702315LL;
int32_t x230 = INT32_MIN;
volatile uint32_t x232 = UINT32_MAX;
int8_t x234 = -1;
static uint8_t x235 = 0U;
uint32_t x247 = 669736U;
uint16_t x250 = 1U;
int16_t x253 = INT16_MIN;
uint8_t x258 = UINT8_MAX;
int64_t t46 = 68328667254567506LL;
static int32_t x275 = -1;
int16_t x276 = INT16_MIN;
volatile uint64_t t48 = 48490794819542012LLU;
static int8_t x283 = -1;
static uint8_t x285 = 5U;
static uint64_t t50 = 5306012016LLU;
uint32_t x289 = UINT32_MAX;
int16_t x291 = INT16_MIN;
int8_t x300 = 0;
int64_t t55 = 144389069873LL;
int16_t x314 = -1;
uint8_t x315 = 1U;
static uint64_t t58 = 473127129055672359LLU;
static volatile int16_t x330 = INT16_MAX;
int16_t x331 = INT16_MIN;
uint32_t t59 = 947787743U;
volatile int64_t x336 = -5278553LL;
volatile int64_t t60 = -17725657735445LL;
int32_t x338 = INT32_MAX;
int16_t x340 = INT16_MIN;
int16_t x345 = INT16_MIN;
static volatile int32_t x347 = -5773;
int32_t x348 = -1;
volatile int32_t t63 = 106457443;
int16_t x351 = INT16_MIN;
int64_t x354 = INT64_MIN;
volatile uint16_t x357 = UINT16_MAX;
int16_t x365 = INT16_MAX;
volatile uint64_t t67 = 30869381977LLU;
uint64_t x377 = 259089579826843527LLU;
int8_t x381 = INT8_MIN;
int32_t x386 = INT32_MIN;
static int32_t x388 = -1;
uint8_t x398 = UINT8_MAX;
int8_t x401 = -2;
int64_t x403 = 4329LL;
int16_t x404 = -1706;
static int8_t x406 = 11;
uint64_t t75 = 114788932093178790LLU;
volatile int8_t x410 = INT8_MIN;
uint8_t x411 = 1U;
int64_t x413 = -35LL;
int8_t x417 = INT8_MIN;
static int16_t x420 = INT16_MIN;
volatile int64_t t78 = 9LL;
uint32_t x428 = 1610828672U;
static int64_t t81 = 53069668LL;
uint32_t x435 = 1588U;
volatile int64_t t82 = 686906LL;
int8_t x440 = -1;
volatile uint32_t x442 = UINT32_MAX;
volatile uint8_t x445 = 23U;
uint8_t x453 = UINT8_MAX;
uint16_t x454 = UINT16_MAX;
volatile int32_t x457 = -30693;
int8_t x463 = INT8_MIN;
int32_t x467 = -353590;
static int64_t t90 = -135721LL;
static uint32_t x476 = UINT32_MAX;
int64_t t91 = -229337570672086474LL;
int64_t x504 = 22538992014042676LL;
volatile int64_t t95 = 2151158136433LL;
static uint16_t x515 = 207U;
int64_t x520 = -238242776LL;
static int8_t x522 = INT8_MAX;


void f0(void) {
	int16_t x5 = -65;
	uint8_t x7 = 61U;
	int64_t x8 = 14476911844LL;
	int64_t t0 = 220660LL;

	t0 = ((x5^x6)^(x7*x8));

	if (t0 != -884287419884LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x13 = INT16_MIN;
	static uint32_t x15 = 25U;
	static volatile int16_t x16 = INT16_MAX;

	t1 = ((x13^x14)^(x15*x16));

	if (t1 != 4294180858U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x29 = 3766186U;
	int64_t x30 = 30076392391LL;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -1;
	volatile int64_t t2 = 542791493298978682LL;

	t2 = ((x29^x30)^(x31*x32));

	if (t2 != 30073693421LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x33 = 45U;
	int16_t x34 = -1;
	int16_t x35 = -1;
	static uint32_t x36 = 37U;

	t3 = ((x33^x34)^(x35*x36));

	if (t3 != 9U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MAX;
	volatile uint64_t t4 = 3613LLU;

	t4 = ((x37^x38)^(x39*x40));

	if (t4 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x42 = 24U;
	static int8_t x43 = 5;
	static volatile uint32_t x44 = UINT32_MAX;
	uint32_t t5 = 349932U;

	t5 = ((x41^x42)^(x43*x44));

	if (t5 != 4294967268U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = -1LL;
	int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	uint64_t t6 = 28113178LLU;

	t6 = ((x45^x46)^(x47*x48));

	if (t6 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -1;
	uint64_t t7 = 47188LLU;

	t7 = ((x49^x50)^(x51*x52));

	if (t7 != 5248466072775966174LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -1;
	static int8_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile int64_t t8 = 250476398791LL;

	t8 = ((x53^x54)^(x55*x56));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x61 = -62620508819391LL;
	int32_t x63 = -120736376;
	int8_t x64 = 0;
	uint64_t t9 = 280800937458047739LLU;

	t9 = ((x61^x62)^(x63*x64));

	if (t9 != 18446681453200732243LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	uint8_t x68 = 4U;
	volatile int32_t t10 = -12692;

	t10 = ((x65^x66)^(x67*x68));

	if (t10 != 229500) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = 44;
	uint32_t x72 = 28158U;
	volatile uint32_t t11 = 1427U;

	t11 = ((x69^x70)^(x71*x72));

	if (t11 != 2148722519U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MIN;
	static int64_t x74 = INT64_MAX;
	uint32_t x75 = 30715U;
	int32_t x76 = INT32_MAX;
	static int64_t t12 = 1529523649912415LL;

	t12 = ((x73^x74)^(x75*x76));

	if (t12 != -9223372034707322758LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 976473812U;
	int8_t x78 = -1;
	int64_t x79 = -1LL;
	volatile int64_t t13 = 204989517226LL;

	t13 = ((x77^x78)^(x79*x80));

	if (t13 != -3318495423LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int8_t x86 = -1;
	int8_t x87 = INT8_MIN;
	volatile uint32_t t14 = 181U;

	t14 = ((x85^x86)^(x87*x88));

	if (t14 != 372480U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x89 = INT64_MIN;
	static int32_t x90 = -298896;
	int32_t x91 = -1;
	uint16_t x92 = 127U;
	static volatile int64_t t15 = 15795367LL;

	t15 = ((x89^x90)^(x91*x92));

	if (t15 != -9223372036854476815LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x98 = 19U;
	int16_t x100 = 43;
	volatile int64_t t16 = -1700306404261LL;

	t16 = ((x97^x98)^(x99*x100));

	if (t16 != 2966374112321LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x101 = -53;
	int32_t x102 = -1;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t17 = -11961;

	t17 = ((x101^x102)^(x103*x104));

	if (t17 != -2094558) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x106 = INT8_MIN;
	static int8_t x107 = -1;
	volatile uint64_t x108 = UINT64_MAX;
	uint64_t t18 = 258LLU;

	t18 = ((x105^x106)^(x107*x108));

	if (t18 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x109 = 1U;
	static uint64_t x110 = 66276895543001LLU;
	int16_t x111 = -2038;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t19 = 54922LLU;

	t19 = ((x109^x110)^(x111*x112));

	if (t19 != 18446677796774922542LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 3U;
	uint64_t x115 = 156LLU;
	volatile int64_t x116 = 179178451349LL;
	uint64_t t20 = 30501299LLU;

	t20 = ((x113^x114)^(x115*x116));

	if (t20 != 27955750881584LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = 16204927062LL;
	static volatile int8_t x127 = -2;
	static volatile int16_t x128 = 0;
	static volatile uint64_t t21 = 2289496009517703841LLU;

	t21 = ((x125^x126)^(x127*x128));

	if (t21 != 16204912394LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t t22 = -7147026891307019LL;

	t22 = ((x129^x130)^(x131*x132));

	if (t22 != 9223372036854743161LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x145 = -31;
	uint8_t x148 = 29U;
	uint32_t t23 = 1727674U;

	t23 = ((x145^x146)^(x147*x148));

	if (t23 != 3719260460U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 3;
	volatile int16_t x151 = -483;
	int32_t x152 = 3301942;

	t24 = ((x149^x150)^(x151*x152));

	if (t24 != 1594837917) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x162 = 1355499U;
	int32_t x163 = -1679;
	int8_t x164 = -1;
	uint64_t t25 = 47703124267LLU;

	t25 = ((x161^x162)^(x163*x164));

	if (t25 != 18446744073708197787LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x165 = 64LLU;
	int16_t x166 = -2;
	static uint64_t x167 = UINT64_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t26 = 321015LLU;

	t26 = ((x165^x166)^(x167*x168));

	if (t26 != 191LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;

	t27 = ((x169^x170)^(x171*x172));

	if (t27 != 2147549070LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x174 = INT64_MAX;
	static int16_t x175 = -1;
	volatile int8_t x176 = INT8_MIN;

	t28 = ((x173^x174)^(x175*x176));

	if (t28 != 9223372036854710400LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x178 = -1;
	uint64_t x179 = 17347194814LLU;
	int16_t x180 = INT16_MIN;
	uint64_t t29 = 24737488135227LLU;

	t29 = ((x177^x178)^(x179*x180));

	if (t29 != 18300287469995947089LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = 28;
	uint32_t x183 = 781U;
	volatile uint32_t t30 = 936656728U;

	t30 = ((x181^x182)^(x183*x184));

	if (t30 != 4282251801U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x188 = INT8_MIN;
	static int32_t t31 = -1549893;

	t31 = ((x185^x186)^(x187*x188));

	if (t31 != -2143289600) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	int32_t x192 = -1;
	int32_t t32 = -1591;

	t32 = ((x189^x190)^(x191*x192));

	if (t32 != -2147450881) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x201 = -15442;
	uint16_t x202 = UINT16_MAX;
	int8_t x203 = 43;
	static volatile int32_t x204 = -1;
	volatile int32_t t33 = -12374528;

	t33 = ((x201^x202)^(x203*x204));

	if (t33 != 50052) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x205 = 1;
	volatile uint64_t x206 = 419966192LLU;
	static int64_t x207 = -304479030841LL;
	static int8_t x208 = -1;

	t34 = ((x205^x206)^(x207*x208));

	if (t34 != 304897942216LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = -10170;
	int32_t x210 = -22;
	static volatile int16_t x211 = 6547;
	int32_t x212 = 1108;
	volatile int32_t t35 = 83904;

	t35 = ((x209^x210)^(x211*x212));

	if (t35 != 7247760) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x215 = 6U;
	int16_t x216 = INT16_MIN;

	t36 = ((x213^x214)^(x215*x216));

	if (t36 != 9160836504649110808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = 265;
	uint8_t x219 = 5U;
	uint64_t x220 = 421073204612562478LLU;

	t37 = ((x217^x218)^(x219*x220));

	if (t37 != 16341378050646767599LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x222 = INT64_MAX;
	uint8_t x223 = 4U;
	int16_t x224 = -1;

	t38 = ((x221^x222)^(x223*x224));

	if (t38 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x231 = 0U;
	uint32_t t39 = UINT32_MAX;

	t39 = ((x229^x230)^(x231*x232));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = 395725LL;
	int32_t x236 = INT32_MIN;
	int64_t t40 = -51LL;

	t40 = ((x233^x234)^(x235*x236));

	if (t40 != -395726LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = -1;
	volatile int32_t x242 = -10;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = -1;
	volatile int32_t t41 = -192169099;

	t41 = ((x241^x242)^(x243*x244));

	if (t41 != -248) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x245 = INT16_MIN;
	static int32_t x246 = -1;
	int16_t x248 = INT16_MIN;
	volatile uint32_t t42 = 295U;

	t42 = ((x245^x246)^(x247*x248));

	if (t42 != 3823927295U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x249 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	static uint16_t x252 = 0U;
	int32_t t43 = -130631;

	t43 = ((x249^x250)^(x251*x252));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x254 = INT8_MAX;
	int64_t x255 = -7485882641LL;
	uint32_t x256 = 20745U;
	int64_t t44 = 1603997906892298924LL;

	t44 = ((x253^x254)^(x255*x256));

	if (t44 != 155294635365656LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 296892U;
	int32_t x259 = -1;
	static volatile int64_t x260 = -1LL;
	int64_t t45 = -529975574LL;

	t45 = ((x257^x258)^(x259*x260));

	if (t45 != 296770LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x261 = INT32_MIN;
	int64_t x262 = 74553034702LL;
	int16_t x263 = INT16_MAX;
	int16_t x264 = -7;

	t46 = ((x261^x262)^(x263*x264));

	if (t46 != 73623242697LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x265 = UINT64_MAX;
	uint8_t x266 = 17U;
	int16_t x267 = -1;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t47 = 2LLU;

	t47 = ((x265^x266)^(x267*x268));

	if (t47 != 32751LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x273 = 1U;
	static uint64_t x274 = 837765972220LLU;

	t48 = ((x273^x274)^(x275*x276));

	if (t48 != 837766004989LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -1;
	uint8_t x282 = 35U;
	static uint8_t x284 = 0U;
	int32_t t49 = -354;

	t49 = ((x281^x282)^(x283*x284));

	if (t49 != -36) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x286 = 2;
	volatile int8_t x287 = INT8_MIN;
	uint64_t x288 = UINT64_MAX;

	t50 = ((x285^x286)^(x287*x288));

	if (t50 != 135LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x290 = INT8_MIN;
	int64_t x292 = -577581LL;
	volatile int64_t t51 = -125LL;

	t51 = ((x289^x290)^(x291*x292));

	if (t51 != 18926174335LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = -1;
	int64_t x295 = -3LL;
	int16_t x296 = 12;
	volatile int64_t t52 = 73LL;

	t52 = ((x293^x294)^(x295*x296));

	if (t52 != 32732LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x297 = -5730027LL;
	volatile int32_t x298 = INT32_MAX;
	static volatile uint8_t x299 = 47U;
	static int64_t t53 = 2023101813772613441LL;

	t53 = ((x297^x298)^(x299*x300));

	if (t53 != -2141753622LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x301 = 9341U;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = INT8_MIN;
	volatile int8_t x304 = INT8_MAX;
	volatile uint64_t t54 = 534LLU;

	t54 = ((x301^x302)^(x303*x304));

	if (t54 != 6914LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = -1701;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = UINT8_MAX;
	static int64_t x308 = 5LL;

	t55 = ((x305^x306)^(x307*x308));

	if (t55 != -673LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x313 = 3273;
	static int8_t x316 = 1;
	int32_t t56 = -67059053;

	t56 = ((x313^x314)^(x315*x316));

	if (t56 != -3273) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = INT32_MIN;
	static uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MIN;
	static int16_t x320 = -118;
	volatile uint64_t t57 = 81LLU;

	t57 = ((x317^x318)^(x319*x320));

	if (t57 != 2143617023LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x321 = INT64_MIN;
	uint64_t x322 = 103978463509090LLU;
	volatile int8_t x323 = INT8_MIN;
	uint16_t x324 = 12U;

	t58 = ((x321^x322)^(x323*x324));

	if (t58 != 9223268058391265378LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = INT8_MIN;
	static uint32_t x332 = 2618U;

	t59 = ((x329^x330)^(x331*x332));

	if (t59 != 85753983U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	static int64_t x335 = -2600222LL;

	t60 = ((x333^x334)^(x335*x336));

	if (t60 != 13725873833617LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = INT8_MAX;
	uint16_t x339 = 8588U;
	int32_t t61 = -1;

	t61 = ((x337^x338)^(x339*x340));

	if (t61 != -1866072192) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = 795U;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t62 = -58LL;

	t62 = ((x341^x342)^(x343*x344));

	if (t62 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x346 = INT32_MIN;

	t63 = ((x345^x346)^(x347*x348));

	if (t63 != 2147456653) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = 62;
	static int32_t x350 = 233;
	static int8_t x352 = -1;
	int32_t t64 = 1629;

	t64 = ((x349^x350)^(x351*x352));

	if (t64 != 32983) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x353 = 6U;
	uint32_t x355 = UINT32_MAX;
	volatile int32_t x356 = -1140744;
	int64_t t65 = 115384751993579LL;

	t65 = ((x353^x354)^(x355*x356));

	if (t65 != -9223372036853635058LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x358 = 12;
	int8_t x359 = -1;
	int64_t x360 = 11534633LL;
	static volatile int64_t t66 = 696172909107865412LL;

	t66 = ((x357^x358)^(x359*x360));

	if (t66 != -11599580LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x366 = INT32_MIN;
	int32_t x367 = -233;
	uint64_t x368 = 3090547LLU;

	t67 = ((x365^x366)^(x367*x368));

	if (t67 != 1427394730LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x369 = 0U;
	static int8_t x370 = INT8_MAX;
	volatile int8_t x371 = -1;
	volatile int64_t x372 = -6526714966028LL;
	volatile int64_t t68 = 174255303867826LL;

	t68 = ((x369^x370)^(x371*x372));

	if (t68 != 6526714966131LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = 4;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = UINT64_MAX;
	static int16_t x376 = INT16_MIN;
	static volatile uint64_t t69 = 2705205525069LLU;

	t69 = ((x373^x374)^(x375*x376));

	if (t69 != 18446744073709518843LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x378 = -86;
	int64_t x379 = -1LL;
	uint16_t x380 = 244U;
	volatile uint64_t t70 = 249056310LLU;

	t70 = ((x377^x378)^(x379*x380));

	if (t70 != 259089579826843425LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x382 = 0;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t71 = -55;

	t71 = ((x381^x382)^(x383*x384));

	if (t71 != 8355712) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x385 = 0U;
	static volatile int16_t x387 = INT16_MAX;
	int32_t t72 = -17895291;

	t72 = ((x385^x386)^(x387*x388));

	if (t72 != 2147450881) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x397 = INT32_MIN;
	static int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 351824893342790LLU;
	volatile uint64_t t73 = 6332867338955168551LLU;

	t73 = ((x397^x398)^(x399*x400));

	if (t73 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x402 = INT16_MIN;
	volatile int64_t t74 = -528401205773986LL;

	t74 = ((x401^x402)^(x403*x404));

	if (t74 != -7393096LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x405 = 749691LLU;
	uint16_t x407 = 1U;
	int16_t x408 = INT16_MIN;

	t75 = ((x405^x406)^(x407*x408));

	if (t75 != 18446744073708826736LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x409 = 10;
	int8_t x412 = INT8_MIN;
	static int32_t t76 = 6842;

	t76 = ((x409^x410)^(x411*x412));

	if (t76 != 10) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x414 = -8;
	volatile uint64_t x415 = 417218LLU;
	uint16_t x416 = 580U;
	uint64_t t77 = 45175038075110151LLU;

	t77 = ((x413^x414)^(x415*x416));

	if (t77 != 241986477LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x418 = UINT16_MAX;
	volatile int64_t x419 = -1LL;

	t78 = ((x417^x418)^(x419*x420));

	if (t78 != -32641LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x421 = INT32_MIN;
	static int32_t x422 = 15;
	int8_t x423 = -1;
	static int32_t x424 = 7;
	volatile int32_t t79 = 156334328;

	t79 = ((x421^x422)^(x423*x424));

	if (t79 != 2147483638) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = -1;
	int32_t x426 = INT32_MAX;
	uint32_t x427 = 18245777U;
	uint32_t t80 = 60353U;

	t80 = ((x425^x426)^(x427*x428));

	if (t80 != 898220928U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = -66;
	static int64_t x431 = 7993859LL;
	int8_t x432 = INT8_MIN;

	t81 = ((x429^x430)^(x431*x432));

	if (t81 != -9223372035831561922LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x433 = 5638514432420651LL;
	uint16_t x434 = 6U;
	int64_t x436 = 2154273980876LL;

	t82 = ((x433^x434)^(x435*x436));

	if (t82 != 6807542189919837LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x437 = INT8_MIN;
	volatile uint8_t x438 = 12U;
	volatile uint32_t x439 = 205909077U;
	volatile uint32_t t83 = 921U;

	t83 = ((x437^x438)^(x439*x440));

	if (t83 != 205909031U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x441 = INT64_MIN;
	volatile int32_t x443 = 291;
	static int16_t x444 = INT16_MIN;
	static int64_t t84 = -45678268LL;

	t84 = ((x441^x442)^(x443*x444));

	if (t84 != 9223372032569343999LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x446 = -1;
	static volatile int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	static int32_t t85 = -3;

	t85 = ((x445^x446)^(x447*x448));

	if (t85 != -4194328) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x449 = INT8_MAX;
	volatile int8_t x450 = -1;
	volatile int16_t x451 = -47;
	uint8_t x452 = 15U;
	volatile int32_t t86 = 35939;

	t86 = ((x449^x450)^(x451*x452));

	if (t86 != 703) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x455 = 5262923421123LLU;
	uint16_t x456 = UINT16_MAX;
	static uint64_t t87 = 696898LLU;

	t87 = ((x453^x454)^(x455*x456));

	if (t87 != 344905686403274045LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x458 = INT16_MIN;
	int64_t x459 = -325327LL;
	int16_t x460 = -1;
	int64_t t88 = 4719553695LL;

	t88 = ((x457^x458)^(x459*x460));

	if (t88 != 327380LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x461 = 6321181228LLU;
	int64_t x462 = -1LL;
	int8_t x464 = -1;
	volatile uint64_t t89 = 8938LLU;

	t89 = ((x461^x462)^(x463*x464));

	if (t89 != 18446744067388370259LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 3675U;
	int64_t x466 = INT64_MIN;
	static int8_t x468 = -1;

	t90 = ((x465^x466)^(x467*x468));

	if (t90 != -9223372036854420627LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x473 = 4083514812340531376LL;
	volatile int32_t x474 = INT32_MAX;
	static uint8_t x475 = 53U;

	t91 = ((x473^x474)^(x475*x476));

	if (t91 != 4083514814488014980LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x477 = -1;
	int32_t x478 = INT32_MAX;
	static int8_t x479 = -1;
	int8_t x480 = 52;
	volatile int32_t t92 = 86914;

	t92 = ((x477^x478)^(x479*x480));

	if (t92 != 2147483596) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x485 = -743;
	uint8_t x486 = 2U;
	uint8_t x487 = 11U;
	volatile uint64_t x488 = UINT64_MAX;
	uint64_t t93 = 22517209584LLU;

	t93 = ((x485^x486)^(x487*x488));

	if (t93 != 750LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x493 = 4033035U;
	int8_t x494 = -1;
	int32_t x495 = -1;
	static int16_t x496 = INT16_MAX;
	static uint32_t t94 = 48134772U;

	t94 = ((x493^x494)^(x495*x496));

	if (t94 != 4060661U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x501 = 24U;
	int8_t x502 = INT8_MAX;
	static uint16_t x503 = 15U;

	t95 = ((x501^x502)^(x503*x504));

	if (t95 != 338084880210640235LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = 70451202248LL;
	int16_t x506 = INT16_MIN;
	uint32_t x507 = 18U;
	int32_t x508 = INT32_MAX;
	static int64_t t96 = 113LL;

	t96 = ((x505^x506)^(x507*x508));

	if (t96 != -71282690266LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MAX;
	static int64_t x516 = -1LL;
	int64_t t97 = -128468277LL;

	t97 = ((x513^x514)^(x515*x516));

	if (t97 != 9223372034707292366LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = 99939LL;
	static uint16_t x518 = 241U;
	uint16_t x519 = 10U;
	int64_t t98 = 2466392533LL;

	t98 = ((x517^x518)^(x519*x520));

	if (t98 != -2382459134LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x521 = -54046LL;
	uint64_t x523 = 11539877048LLU;
	uint16_t x524 = 353U;
	volatile uint64_t t99 = 62645314990079LLU;

	t99 = ((x521^x522)^(x523*x524));

	if (t99 != 18446740000132900133LLU) { NG(); } else { ; }
	
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

