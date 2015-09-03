#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 53253574U;
volatile uint64_t t2 = 404261194729222909LLU;
volatile int64_t x16 = -137453845970052477LL;
int64_t t3 = -1196LL;
int16_t x19 = -1;
uint8_t x23 = 26U;
int8_t x36 = 0;
volatile int32_t t7 = -2940;
static int16_t x38 = 0;
uint8_t x49 = 1U;
int16_t x50 = INT16_MIN;
int32_t x53 = 32604;
volatile uint8_t x56 = UINT8_MAX;
static volatile uint64_t t12 = 6428838686LLU;
uint8_t x64 = UINT8_MAX;
volatile int8_t x65 = -1;
static volatile int16_t x75 = INT16_MAX;
int32_t t16 = -2869379;
volatile int32_t t17 = 16184047;
volatile int64_t t18 = -25LL;
static volatile int32_t t21 = 84139;
int8_t x113 = INT8_MIN;
int32_t x125 = INT32_MIN;
static int8_t x131 = INT8_MIN;
static int32_t t30 = 60345450;
uint16_t x139 = 0U;
volatile int8_t x140 = 15;
uint16_t x150 = 12U;
int8_t x153 = INT8_MAX;
int8_t x156 = -1;
int32_t x162 = INT32_MAX;
static volatile int8_t x163 = INT8_MIN;
int32_t x171 = INT32_MAX;
volatile int32_t t36 = 0;
volatile int32_t x175 = -1;
volatile uint32_t x183 = 28324U;
uint32_t t40 = 38U;
static volatile uint64_t x192 = UINT64_MAX;
volatile int16_t x198 = INT16_MIN;
uint64_t x204 = 43226559981473505LLU;
uint64_t t44 = 3LLU;
int64_t x209 = -1LL;
uint8_t x210 = 2U;
volatile uint64_t t47 = 114820379564290016LLU;
volatile uint64_t x222 = UINT64_MAX;
static int16_t x223 = -15042;
volatile int64_t x230 = INT64_MIN;
int32_t x240 = INT32_MAX;
int8_t x243 = -54;
volatile int64_t t52 = 1LL;
volatile uint16_t x245 = 10090U;
volatile int8_t x248 = -1;
int64_t x256 = INT64_MIN;
uint32_t x265 = UINT32_MAX;
uint64_t x267 = 1797428159LLU;
volatile int32_t x269 = INT32_MIN;
static int64_t t58 = -23001792392547LL;
int8_t x273 = INT8_MIN;
int8_t x277 = 26;
int8_t x279 = INT8_MIN;
static int32_t x280 = 23680154;
static volatile int32_t t60 = 10;
int64_t x290 = INT64_MIN;
uint16_t x292 = 722U;
static volatile int8_t x313 = INT8_MIN;
int64_t x314 = -8115548743131188LL;
volatile uint32_t x318 = 842069U;
int16_t x320 = INT16_MIN;
volatile int64_t x329 = 190569816002906780LL;
int32_t x330 = INT32_MAX;
int8_t x337 = INT8_MAX;
volatile uint16_t x338 = 8355U;
int16_t x339 = 116;
int64_t x343 = 43662861062191567LL;
int32_t x346 = INT32_MIN;
volatile uint32_t t75 = 58524U;
static uint16_t x350 = 998U;
uint32_t t76 = 31253U;
int64_t x360 = INT64_MIN;
uint32_t x368 = 154U;
uint32_t t81 = 116201U;
uint32_t x377 = 92892U;
int64_t x378 = 61233838LL;
uint64_t x380 = 91344773435104678LLU;
int8_t x382 = INT8_MIN;
volatile int8_t x383 = -12;
int8_t x387 = INT8_MAX;
volatile int8_t x392 = -1;
int32_t t89 = INT32_MIN;
uint32_t x405 = UINT32_MAX;
volatile int64_t t92 = 1LL;
uint64_t x421 = 1486776LLU;
int32_t x427 = -1;
uint64_t x434 = 55LLU;
static uint64_t x438 = UINT64_MAX;
int64_t t96 = -2832763LL;
int64_t x443 = -1LL;
int64_t x444 = -265914LL;
int64_t x448 = INT64_MAX;
int8_t x450 = INT8_MIN;
static int64_t x451 = INT64_MAX;
uint8_t x452 = UINT8_MAX;
volatile int64_t t99 = -27LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int32_t x4 = 75720490;
	static volatile int32_t t0 = 11076789;

	t0 = (((x1<x2)-x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 23U;
	static uint8_t x7 = 5U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -16329;

	t1 = (((x5<x6)-x7)&x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 469733LLU;
	static uint64_t x10 = UINT64_MAX;
	int64_t x11 = -4LL;
	static uint64_t x12 = 1327950399LLU;

	t2 = (((x9<x10)-x11)&x12);

	if (t2 != 5LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x14 = 4737;
	int16_t x15 = -1;

	t3 = (((x13<x14)-x15)&x16);

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 467344796576581299LLU;
	volatile int8_t x18 = INT8_MAX;
	static int16_t x20 = -1;
	static int32_t t4 = -22;

	t4 = (((x17<x18)-x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int8_t x22 = 0;
	volatile uint8_t x24 = 3U;
	volatile int32_t t5 = 42470;

	t5 = (((x21<x22)-x23)&x24);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint32_t x30 = 145U;
	static uint32_t x31 = 4U;
	int32_t x32 = -15;
	uint32_t t6 = 219880065U;

	t6 = (((x29<x30)-x31)&x32);

	if (t6 != 4294967280U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	int8_t x34 = INT8_MIN;
	int16_t x35 = 1;

	t7 = (((x33<x34)-x35)&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 104U;
	volatile uint64_t x39 = 1704028514173857962LLU;
	uint32_t x40 = 732848U;
	volatile uint64_t t8 = 730608761079708317LLU;

	t8 = (((x37<x38)-x39)&x40);

	if (t8 != 200208LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 57001U;
	int64_t x42 = 659778LL;
	int32_t x43 = -1;
	int8_t x44 = -12;
	volatile int32_t t9 = -128556;

	t9 = (((x41<x42)-x43)&x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x51 = 0U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t10 = -106281109;

	t10 = (((x49<x50)-x51)&x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = INT64_MAX;
	volatile int16_t x55 = INT16_MIN;
	int32_t t11 = 10210905;

	t11 = (((x53<x54)-x55)&x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x57 = UINT16_MAX;
	static volatile int64_t x58 = INT64_MIN;
	volatile uint64_t x59 = 1729621936696LLU;
	uint64_t x60 = 38397245LLU;

	t12 = (((x57<x58)-x59)&x60);

	if (t12 != 38380808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -32;
	static volatile int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = 1725LLU;
	static uint64_t t13 = 56135467583095LLU;

	t13 = (((x61<x62)-x63)&x64);

	if (t13 != 67LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x66 = -1;
	volatile uint16_t x67 = 17U;
	int16_t x68 = INT16_MIN;
	int32_t t14 = 28;

	t14 = (((x65<x66)-x67)&x68);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -230418417;
	uint8_t x70 = 11U;
	static uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	uint32_t t15 = 2839412U;

	t15 = (((x69<x70)-x71)&x72);

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 2329376174883378492LLU;
	int64_t x74 = INT64_MIN;
	int32_t x76 = 189320959;

	t16 = (((x73<x74)-x75)&x76);

	if (t16 != 189300738) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 0;
	static uint32_t x78 = 2085U;
	int32_t x79 = -1;
	int16_t x80 = INT16_MIN;

	t17 = (((x77<x78)-x79)&x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MAX;
	int64_t x83 = -1LL;
	int64_t x84 = INT64_MIN;

	t18 = (((x81<x82)-x83)&x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 0U;
	volatile uint64_t x90 = 123059481450LLU;
	uint8_t x91 = UINT8_MAX;
	static int16_t x92 = INT16_MIN;
	static volatile int32_t t19 = -642;

	t19 = (((x89<x90)-x91)&x92);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = 38;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = 12374U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t20 = -475270;

	t20 = (((x93<x94)-x95)&x96);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x97 = 61U;
	int64_t x98 = 815LL;
	uint8_t x99 = 6U;
	int32_t x100 = 27309;

	t21 = (((x97<x98)-x99)&x100);

	if (t21 != 27305) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -373515446LL;
	int64_t x102 = INT64_MAX;
	int8_t x103 = -1;
	uint8_t x104 = 14U;
	int32_t t22 = -138611995;

	t22 = (((x101<x102)-x103)&x104);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x105 = UINT64_MAX;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = 8;
	uint16_t x108 = 26U;
	volatile int32_t t23 = -15787190;

	t23 = (((x105<x106)-x107)&x108);

	if (t23 != 24) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	volatile uint64_t x110 = 3606788874626856LLU;
	int64_t x111 = 10LL;
	volatile int8_t x112 = INT8_MIN;
	int64_t t24 = -26769622LL;

	t24 = (((x109<x110)-x111)&x112);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = 11567LL;
	int32_t x116 = INT32_MAX;
	volatile int64_t t25 = 528167312894576773LL;

	t25 = (((x113<x114)-x115)&x116);

	if (t25 != 2147472082LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = INT8_MAX;
	int8_t x118 = -1;
	int32_t x119 = -15;
	int32_t x120 = 1;
	volatile int32_t t26 = 2;

	t26 = (((x117<x118)-x119)&x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int32_t x122 = -363193519;
	static volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = 508LLU;
	volatile uint64_t t27 = 12068834264736LLU;

	t27 = (((x121<x122)-x123)&x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	static uint64_t t28 = 14722576LLU;

	t28 = (((x125<x126)-x127)&x128);

	if (t28 != 32769LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 25729U;
	int32_t x130 = 360236960;
	static int32_t x132 = INT32_MIN;
	int32_t t29 = -127;

	t29 = (((x129<x130)-x131)&x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = INT64_MAX;
	static volatile int32_t x134 = INT32_MIN;
	static int16_t x135 = -1;
	int32_t x136 = INT32_MAX;

	t30 = (((x133<x134)-x135)&x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	static int8_t x138 = 2;
	int32_t t31 = 342719411;

	t31 = (((x137<x138)-x139)&x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 43751221LLU;
	uint32_t x142 = 1904333554U;
	volatile uint8_t x143 = 0U;
	int64_t x144 = -542030884512LL;
	volatile int64_t t32 = -265766456763746LL;

	t32 = (((x141<x142)-x143)&x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 19U;
	int64_t x151 = -1LL;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t33 = -5985804216877810LL;

	t33 = (((x149<x150)-x151)&x152);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x154 = 7U;
	volatile int8_t x155 = INT8_MIN;
	volatile int32_t t34 = 262991;

	t34 = (((x153<x154)-x155)&x156);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = -1;
	static int8_t x164 = -1;
	volatile int32_t t35 = -7073;

	t35 = (((x161<x162)-x163)&x164);

	if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static uint16_t x172 = 429U;

	t36 = (((x169<x170)-x171)&x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -11926554;
	int64_t x174 = 158919496LL;
	uint32_t x176 = 361277U;
	volatile uint32_t t37 = 5649792U;

	t37 = (((x173<x174)-x175)&x176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x177 = 1548U;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = 12;
	int32_t x180 = -1;
	int32_t t38 = -162;

	t38 = (((x177<x178)-x179)&x180);

	if (t38 != -11) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 90U;
	int32_t x182 = INT32_MAX;
	static int64_t x184 = INT64_MIN;
	int64_t t39 = -897576647976005661LL;

	t39 = (((x181<x182)-x183)&x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x185 = INT64_MAX;
	int64_t x186 = -1LL;
	uint32_t x187 = 106266745U;
	int32_t x188 = INT32_MAX;

	t40 = (((x185<x186)-x187)&x188);

	if (t40 != 2041216903U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 82U;
	static volatile int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	static volatile uint64_t t41 = 18049444550359LLU;

	t41 = (((x189<x190)-x191)&x192);

	if (t41 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x193 = UINT32_MAX;
	volatile int8_t x194 = -1;
	static int32_t x195 = -1;
	int16_t x196 = 95;
	volatile int32_t t42 = 3;

	t42 = (((x193<x194)-x195)&x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	volatile int16_t x200 = 84;
	static uint64_t t43 = 350947LLU;

	t43 = (((x197<x198)-x199)&x200);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint64_t x202 = 13753LLU;
	static int8_t x203 = -1;

	t44 = (((x201<x202)-x203)&x204);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = 12;
	int64_t x206 = -950LL;
	uint8_t x207 = 5U;
	static int8_t x208 = 0;
	volatile int32_t t45 = 61;

	t45 = (((x205<x206)-x207)&x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x211 = -1;
	int32_t x212 = 29;
	volatile int32_t t46 = -976690;

	t46 = (((x209<x210)-x211)&x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x217 = INT8_MAX;
	uint32_t x218 = UINT32_MAX;
	volatile uint64_t x219 = 3998358LLU;
	volatile int32_t x220 = INT32_MIN;

	t47 = (((x217<x218)-x219)&x220);

	if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	static uint32_t t48 = 3330301U;

	t48 = (((x221<x222)-x223)&x224);

	if (t48 != 15043U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t49 = -6990078;

	t49 = (((x225<x226)-x227)&x228);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 4043107U;
	int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t50 = -446215LL;

	t50 = (((x229<x230)-x231)&x232);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = -580;
	static int32_t x238 = INT32_MIN;
	int16_t x239 = -9;
	volatile int32_t t51 = 1765;

	t51 = (((x237<x238)-x239)&x240);

	if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -51;
	static int32_t x242 = INT32_MIN;
	volatile int64_t x244 = INT64_MAX;

	t52 = (((x241<x242)-x243)&x244);

	if (t52 != 54LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x246 = 4546U;
	volatile uint16_t x247 = UINT16_MAX;
	volatile int32_t t53 = -49;

	t53 = (((x245<x246)-x247)&x248);

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = -7898279;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = -9036570247246LL;
	int32_t x252 = INT32_MIN;
	volatile int64_t t54 = -488962684215465LL;

	t54 = (((x249<x250)-x251)&x252);

	if (t54 != 9034463707136LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MAX;
	volatile int64_t t55 = INT64_MIN;

	t55 = (((x253<x254)-x255)&x256);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = 1557182;
	static int16_t x262 = -1;
	volatile int32_t x263 = -1;
	static int8_t x264 = INT8_MAX;
	int32_t t56 = 0;

	t56 = (((x261<x262)-x263)&x264);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x266 = -1LL;
	uint16_t x268 = 43U;
	volatile uint64_t t57 = 412704648045613751LLU;

	t57 = (((x265<x266)-x267)&x268);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x270 = 2497734274065331LLU;
	static int16_t x271 = -1;
	int64_t x272 = INT64_MIN;

	t58 = (((x269<x270)-x271)&x272);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x274 = 730U;
	static int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t59 = -3554280749335403LL;

	t59 = (((x273<x274)-x275)&x276);

	if (t59 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x278 = INT64_MAX;

	t60 = (((x277<x278)-x279)&x280);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 1U;
	int16_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	volatile int8_t x288 = 1;
	volatile int32_t t61 = 264772461;

	t61 = (((x285<x286)-x287)&x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x291 = INT16_MIN;
	volatile int32_t t62 = -3;

	t62 = (((x289<x290)-x291)&x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = 160LL;
	int16_t x294 = -1;
	volatile int32_t x295 = INT32_MAX;
	int16_t x296 = INT16_MAX;
	volatile int32_t t63 = -8493542;

	t63 = (((x293<x294)-x295)&x296);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x297 = 18618827863042LLU;
	int8_t x298 = -1;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 178381;
	int32_t t64 = 16;

	t64 = (((x297<x298)-x299)&x300);

	if (t64 != 163840) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MIN;
	int64_t x303 = -1LL;
	volatile int8_t x304 = INT8_MIN;
	volatile int64_t t65 = -28513826LL;

	t65 = (((x301<x302)-x303)&x304);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = INT32_MAX;
	int64_t x306 = 1737921LL;
	static volatile int64_t x307 = 28458702788711889LL;
	int16_t x308 = INT16_MIN;
	int64_t t66 = 9504305415522LL;

	t66 = (((x305<x306)-x307)&x308);

	if (t66 != -28458702788722688LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x315 = -62;
	volatile int8_t x316 = 1;
	int32_t t67 = 150;

	t67 = (((x313<x314)-x315)&x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = 1;
	int16_t x319 = INT16_MAX;
	static int32_t t68 = 4;

	t68 = (((x317<x318)-x319)&x320);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	static int64_t x322 = 1481764885625193LL;
	uint64_t x323 = 1874617LLU;
	int8_t x324 = INT8_MAX;
	volatile uint64_t t69 = 1LLU;

	t69 = (((x321<x322)-x323)&x324);

	if (t69 != 72LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x325 = -1;
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = INT8_MIN;
	static uint16_t x328 = 2U;
	static volatile int32_t t70 = 1;

	t70 = (((x325<x326)-x327)&x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x331 = INT8_MIN;
	int8_t x332 = -1;
	volatile int32_t t71 = 20;

	t71 = (((x329<x330)-x331)&x332);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x333 = UINT8_MAX;
	volatile int8_t x334 = -1;
	int16_t x335 = -1;
	int64_t x336 = 271LL;
	int64_t t72 = 1192945LL;

	t72 = (((x333<x334)-x335)&x336);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x340 = 1470594477133LLU;
	static volatile uint64_t t73 = 30384747639391LLU;

	t73 = (((x337<x338)-x339)&x340);

	if (t73 != 1470594477069LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x341 = 4066;
	uint32_t x342 = 97761682U;
	volatile int16_t x344 = INT16_MIN;
	static volatile int64_t t74 = 8LL;

	t74 = (((x341<x342)-x343)&x344);

	if (t74 != -43662861062209536LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -2451;
	uint32_t x347 = 77277U;
	volatile int8_t x348 = INT8_MIN;

	t75 = (((x345<x346)-x347)&x348);

	if (t75 != 4294889984U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x349 = 107U;
	int32_t x351 = -1;
	static uint32_t x352 = UINT32_MAX;

	t76 = (((x349<x350)-x351)&x352);

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = 81;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	static uint64_t x356 = 364988LLU;
	uint64_t t77 = 3489611341LLU;

	t77 = (((x353<x354)-x355)&x356);

	if (t77 != 360448LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x357 = 763;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	int64_t t78 = 5LL;

	t78 = (((x357<x358)-x359)&x360);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x361 = 1;
	static int64_t x362 = INT64_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;
	volatile uint64_t t79 = 398966917251878087LLU;

	t79 = (((x361<x362)-x363)&x364);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = -30732576;
	int16_t x366 = 6897;
	static volatile uint16_t x367 = 3759U;
	volatile uint32_t t80 = 2U;

	t80 = (((x365<x366)-x367)&x368);

	if (t80 != 18U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x369 = UINT64_MAX;
	static int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	uint32_t x372 = 961182U;

	t81 = (((x369<x370)-x371)&x372);

	if (t81 != 961024U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = -1;
	static int32_t x374 = INT32_MIN;
	static uint64_t x375 = 82976LLU;
	static int64_t x376 = INT64_MAX;
	uint64_t t82 = 561965363648173LLU;

	t82 = (((x373<x374)-x375)&x376);

	if (t82 != 9223372036854692832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x379 = -89;
	uint64_t t83 = 752232LLU;

	t83 = (((x377<x378)-x379)&x380);

	if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x381 = INT32_MAX;
	uint64_t x384 = 101LLU;
	volatile uint64_t t84 = 1269752612579059LLU;

	t84 = (((x381<x382)-x383)&x384);

	if (t84 != 4LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = 838442422370688093LLU;
	uint8_t x386 = 4U;
	static uint8_t x388 = 6U;
	volatile int32_t t85 = -33;

	t85 = (((x385<x386)-x387)&x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x389 = 3289U;
	volatile int16_t x390 = -1;
	static int8_t x391 = 18;
	volatile int32_t t86 = 737317313;

	t86 = (((x389<x390)-x391)&x392);

	if (t86 != -18) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	volatile uint8_t x394 = 1U;
	volatile uint32_t x395 = 117066U;
	static volatile int64_t x396 = INT64_MAX;
	volatile int64_t t87 = 8LL;

	t87 = (((x393<x394)-x395)&x396);

	if (t87 != 4294850231LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 42U;
	static uint16_t x398 = 25271U;
	int8_t x399 = -2;
	uint32_t x400 = UINT32_MAX;
	static volatile uint32_t t88 = 164227439U;

	t88 = (((x397<x398)-x399)&x400);

	if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	uint8_t x403 = 37U;
	int32_t x404 = INT32_MIN;

	t89 = (((x401<x402)-x403)&x404);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x406 = UINT16_MAX;
	uint8_t x407 = 0U;
	static volatile int32_t x408 = -445247;
	static int32_t t90 = 1582164;

	t90 = (((x405<x406)-x407)&x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x409 = INT16_MAX;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = 45447LLU;
	int64_t x412 = -28745706291566630LL;
	uint64_t t91 = 152611LLU;

	t91 = (((x409<x410)-x411)&x412);

	if (t91 != 18417998367417976408LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x414 = 211;
	volatile uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MAX;

	t92 = (((x413<x414)-x415)&x416);

	if (t92 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x422 = -1;
	uint64_t x423 = 610065277LLU;
	static volatile int64_t x424 = -1LL;
	static volatile uint64_t t93 = 1042054918523LLU;

	t93 = (((x421<x422)-x423)&x424);

	if (t93 != 18446744073099486340LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 38U;
	int64_t x428 = -1LL;
	int64_t t94 = -7874721219452667LL;

	t94 = (((x425<x426)-x427)&x428);

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = 0;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = -57595295410LL;
	int64_t t95 = -430624046789829LL;

	t95 = (((x433<x434)-x435)&x436);

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = 1;
	int32_t x439 = INT32_MAX;
	int64_t x440 = -1LL;

	t96 = (((x437<x438)-x439)&x440);

	if (t96 != -2147483646LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -763LL;
	static int16_t x442 = INT16_MIN;
	volatile int64_t t97 = -148204826008LL;

	t97 = (((x441<x442)-x443)&x444);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x445 = UINT16_MAX;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	volatile int64_t t98 = 15LL;

	t98 = (((x445<x446)-x447)&x448);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MIN;

	t99 = (((x449<x450)-x451)&x452);

	if (t99 != 2LL) { NG(); } else { ; }
	
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

