#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
static int8_t x8 = INT8_MAX;
int64_t x11 = INT64_MAX;
volatile int32_t x12 = 40009;
int64_t x14 = INT64_MAX;
uint16_t x17 = 1U;
uint64_t x20 = 150133LLU;
static int32_t t4 = -7769991;
volatile int16_t x23 = INT16_MIN;
int64_t x28 = 2346922105063213628LL;
int16_t x29 = 7;
int16_t x30 = INT16_MIN;
volatile int8_t x33 = -1;
int8_t x37 = INT8_MAX;
int32_t x39 = -3139;
static volatile uint8_t x41 = 7U;
int8_t x46 = INT8_MAX;
int32_t x48 = -1;
int32_t t11 = -77962970;
uint16_t x53 = 19058U;
volatile uint16_t x57 = 2180U;
volatile uint16_t x64 = UINT16_MAX;
static int32_t t15 = 64001;
uint8_t x65 = UINT8_MAX;
int8_t x67 = -1;
static int64_t x70 = -1LL;
volatile int32_t t17 = 29105;
uint8_t x78 = UINT8_MAX;
volatile int32_t t20 = 81;
int64_t x85 = -2147797670721LL;
int16_t x86 = INT16_MAX;
uint64_t x87 = 15468923857183LLU;
int8_t x91 = INT8_MIN;
int64_t x93 = INT64_MIN;
volatile uint8_t x94 = UINT8_MAX;
uint8_t x101 = 31U;
uint16_t x102 = UINT16_MAX;
volatile int32_t t27 = -1697237;
int16_t x117 = INT16_MIN;
volatile uint16_t x120 = 28U;
static uint64_t x121 = 8125413LLU;
static uint8_t x122 = 2U;
int64_t x125 = INT64_MAX;
uint8_t x132 = 1U;
volatile int32_t x141 = INT32_MIN;
volatile int32_t x150 = -23831;
int16_t x151 = -1;
volatile int32_t t37 = 0;
volatile int8_t x161 = INT8_MIN;
static volatile int16_t x163 = -1;
int32_t t41 = -11;
int64_t x180 = INT64_MIN;
volatile int32_t t45 = 1;
static int32_t t48 = 0;
uint16_t x200 = UINT16_MAX;
int32_t t50 = -15166058;
static uint32_t x211 = 376704536U;
int32_t x213 = -1;
int16_t x226 = INT16_MIN;
int8_t x234 = -6;
int32_t x237 = INT32_MAX;
int32_t x243 = INT32_MAX;
int8_t x245 = 49;
int32_t t61 = 63972510;
int8_t x252 = 1;
int16_t x253 = INT16_MIN;
volatile int32_t x256 = INT32_MIN;
int32_t t64 = 32301910;
int32_t x265 = -252;
uint8_t x269 = 43U;
static int64_t x272 = INT64_MIN;
int32_t x273 = INT32_MIN;
volatile int64_t x276 = 92337LL;
int16_t x280 = -534;
volatile int64_t x284 = 32330316168669180LL;
volatile int32_t t70 = -18360846;
int64_t x286 = -1LL;
int64_t x291 = INT64_MAX;
int8_t x292 = INT8_MIN;
uint16_t x294 = UINT16_MAX;
int8_t x297 = INT8_MIN;
static int16_t x300 = -5824;
int8_t x307 = 26;
static volatile int32_t t76 = -1012215;
int32_t t77 = -174986685;
int64_t x321 = INT64_MIN;
int32_t x326 = INT32_MIN;
static int8_t x327 = 1;
static uint8_t x328 = 12U;
int8_t x332 = -1;
volatile int16_t x335 = INT16_MIN;
volatile int16_t x338 = -127;
volatile int32_t t84 = -87;
static int32_t x342 = INT32_MAX;
static uint16_t x344 = UINT16_MAX;
int32_t t88 = -8818;
volatile int32_t t89 = -1;
uint64_t x363 = UINT64_MAX;
volatile int32_t x366 = -29593;
uint32_t x375 = UINT32_MAX;
int32_t x377 = -26032;
static volatile uint64_t x380 = UINT64_MAX;
int32_t t94 = -4;
volatile int32_t t95 = -197584;
int32_t x386 = INT32_MAX;
volatile uint64_t x387 = UINT64_MAX;
static volatile uint32_t x388 = 1378U;
int64_t x391 = INT64_MIN;
static int64_t x394 = 363LL;
int64_t x396 = INT64_MIN;
int32_t x398 = 984448;
int16_t x399 = -10245;
int32_t t99 = 7985;


void f0(void) {
	volatile int8_t x1 = 0;
	int32_t x2 = INT32_MAX;
	volatile int16_t x4 = 8;
	volatile int32_t t0 = 13;

	t0 = (x1<((x2^x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -3879268LL;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -1;
	int32_t t1 = -66340612;

	t1 = (x5<((x6^x7)&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 1;
	uint64_t x10 = UINT64_MAX;
	volatile int32_t t2 = 714;

	t2 = (x9<((x10^x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = 168521728;
	int32_t t3 = 28430;

	t3 = (x13<((x14^x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 1112U;
	int64_t x19 = -42657LL;

	t4 = (x17<((x18^x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 15085862;

	t5 = (x21<((x22^x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 882U;
	static uint32_t x27 = UINT32_MAX;
	int32_t t6 = -31745013;

	t6 = (x25<((x26^x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x31 = 6987653056504674LLU;
	int8_t x32 = 50;
	int32_t t7 = 1;

	t7 = (x29<((x30^x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -3;
	static int32_t t8 = 1661420;

	t8 = (x33<((x34^x35)&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	static int8_t x40 = INT8_MAX;
	int32_t t9 = -15428773;

	t9 = (x37<((x38^x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = -1042;
	int32_t t10 = 54;

	t10 = (x41<((x42^x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	static uint32_t x47 = 1780783U;

	t11 = (x45<((x46^x47)&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static int16_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -439308LL;
	int32_t t12 = 15016;

	t12 = (x49<((x50^x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 0U;
	uint8_t x55 = 35U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 551541516;

	t13 = (x53<((x54^x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 924U;
	volatile uint8_t x59 = 0U;
	int16_t x60 = INT16_MAX;
	static volatile int32_t t14 = 1;

	t14 = (x57<((x58^x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -86;
	int32_t x62 = -1;
	static uint32_t x63 = 1251666U;

	t15 = (x61<((x62^x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -10974703;

	t16 = (x65<((x66^x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	volatile int64_t x71 = 27802LL;
	uint8_t x72 = 1U;

	t17 = (x69<((x70^x71)&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	uint16_t x74 = UINT16_MAX;
	uint8_t x75 = 104U;
	volatile uint16_t x76 = 43U;
	int32_t t18 = 0;

	t18 = (x73<((x74^x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x79 = INT32_MAX;
	int8_t x80 = 7;
	int32_t t19 = 281;

	t19 = (x77<((x78^x79)&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -17104548;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;
	volatile uint8_t x84 = 2U;

	t20 = (x81<((x82^x83)&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = -53727;

	t21 = (x85<((x86^x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile uint32_t x90 = 893565U;
	uint32_t x92 = 0U;
	static int32_t t22 = 52727459;

	t22 = (x89<((x90^x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x95 = 98U;
	int32_t x96 = 1;
	volatile int32_t t23 = 28124738;

	t23 = (x93<((x94^x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 5411U;
	volatile int32_t t24 = 52181847;

	t24 = (x97<((x98^x99)&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t25 = -3020395;

	t25 = (x101<((x102^x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -16112;
	int32_t x106 = -175797;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = -1;
	int32_t t26 = -480;

	t26 = (x105<((x106^x107)&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 43911704059LL;
	int32_t x110 = INT32_MAX;
	volatile int32_t x111 = -1;
	int8_t x112 = INT8_MAX;

	t27 = (x109<((x110^x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	static int8_t x114 = -1;
	int64_t x115 = INT64_MIN;
	static volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 171;

	t28 = (x113<((x114^x115)&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -1;
	static int8_t x119 = 1;
	int32_t t29 = -8;

	t29 = (x117<((x118^x119)&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = 9;
	volatile uint16_t x124 = UINT16_MAX;
	int32_t t30 = -112914;

	t30 = (x121<((x122^x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t31 = 971;

	t31 = (x125<((x126^x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 227174U;
	int32_t x130 = -35982590;
	int64_t x131 = -90724717578720LL;
	int32_t t32 = 21186866;

	t32 = (x129<((x130^x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 1822214LLU;
	volatile int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t33 = -6;

	t33 = (x133<((x134^x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = 744281U;
	uint16_t x139 = 2U;
	uint16_t x140 = 536U;
	int32_t t34 = 427413157;

	t34 = (x137<((x138^x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	int16_t x143 = -19;
	int64_t x144 = INT64_MIN;
	static int32_t t35 = -2677;

	t35 = (x141<((x142^x143)&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 17135U;
	volatile int16_t x147 = 13712;
	volatile uint8_t x148 = 2U;
	static int32_t t36 = -53131924;

	t36 = (x145<((x146^x147)&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -3082;
	static int8_t x152 = -1;

	t37 = (x149<((x150^x151)&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	volatile int32_t x154 = INT32_MAX;
	uint64_t x155 = UINT64_MAX;
	volatile int64_t x156 = -1LL;
	int32_t t38 = 97368769;

	t38 = (x153<((x154^x155)&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -11952;
	static uint32_t x158 = 473U;
	uint16_t x159 = 198U;
	uint32_t x160 = 2429U;
	volatile int32_t t39 = 12;

	t39 = (x157<((x158^x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = UINT16_MAX;
	int32_t x164 = 4731535;
	int32_t t40 = 24885;

	t40 = (x161<((x162^x163)&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	static int16_t x166 = 10473;
	uint64_t x167 = 172LLU;
	int64_t x168 = -1LL;

	t41 = (x165<((x166^x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x170 = 727LL;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 5U;
	static int32_t t42 = 46182060;

	t42 = (x169<((x170^x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 134398061128254LL;
	int8_t x174 = -14;
	int8_t x175 = 0;
	int32_t x176 = -755;
	volatile int32_t t43 = 108;

	t43 = (x173<((x174^x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = 1;
	int8_t x178 = 57;
	volatile int8_t x179 = -1;
	volatile int32_t t44 = 2;

	t44 = (x177<((x178^x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -8;
	static int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	static int32_t x184 = -1;

	t45 = (x181<((x182^x183)&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	static int32_t x186 = INT32_MIN;
	int32_t x187 = -35538;
	static int16_t x188 = 7163;
	static volatile int32_t t46 = 0;

	t46 = (x185<((x186^x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	static int64_t x190 = INT64_MAX;
	uint16_t x191 = 1U;
	uint8_t x192 = 52U;
	volatile int32_t t47 = 12;

	t47 = (x189<((x190^x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 1U;
	volatile int32_t x194 = INT32_MAX;
	static int16_t x195 = INT16_MAX;
	static int64_t x196 = INT64_MIN;

	t48 = (x193<((x194^x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 1207067721413382404LLU;
	static uint64_t x198 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	static int32_t t49 = -661;

	t49 = (x197<((x198^x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 3LLU;
	static volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;

	t50 = (x201<((x202^x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = UINT8_MAX;
	int64_t x206 = 142948164662633685LL;
	uint32_t x207 = 8U;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -2986878;

	t51 = (x205<((x206^x207)&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -10;
	uint64_t x212 = 3176347221820362LLU;
	int32_t t52 = -83;

	t52 = (x209<((x210^x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int64_t x216 = -1LL;
	int32_t t53 = 2;

	t53 = (x213<((x214^x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	int8_t x218 = -1;
	int32_t x219 = -154710166;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 1;

	t54 = (x217<((x218^x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = -353;
	int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	static int8_t x224 = INT8_MAX;
	int32_t t55 = -442699216;

	t55 = (x221<((x222^x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = INT16_MIN;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 1;

	t56 = (x225<((x226^x227)&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 17U;
	uint64_t x230 = 1099002879LLU;
	int32_t x231 = INT32_MIN;
	int64_t x232 = 7571253039665LL;
	int32_t t57 = 5690275;

	t57 = (x229<((x230^x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -435669785;

	t58 = (x233<((x234^x235)&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x238 = INT64_MIN;
	static uint16_t x239 = 11U;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -36523223;

	t59 = (x237<((x238^x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 17U;
	int64_t x242 = -1LL;
	uint16_t x244 = 7943U;
	volatile int32_t t60 = 2794133;

	t60 = (x241<((x242^x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = 7;
	uint8_t x247 = 23U;
	uint64_t x248 = UINT64_MAX;

	t61 = (x245<((x246^x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 33992606;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	static volatile int32_t t62 = -12114586;

	t62 = (x249<((x250^x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = 1079LLU;
	int32_t t63 = 188534273;

	t63 = (x253<((x254^x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	volatile int16_t x258 = -1;
	static volatile uint16_t x259 = 5U;
	uint16_t x260 = 3014U;

	t64 = (x257<((x258^x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 2484469;
	int64_t x262 = -3441031447LL;
	uint32_t x263 = 252072314U;
	int64_t x264 = 79197LL;
	volatile int32_t t65 = -57550359;

	t65 = (x261<((x262^x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -666;
	static uint16_t x267 = UINT16_MAX;
	int16_t x268 = -1;
	static volatile int32_t t66 = 775502;

	t66 = (x265<((x266^x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -1;
	uint8_t x271 = 15U;
	static int32_t t67 = 357;

	t67 = (x269<((x270^x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int32_t t68 = 63089642;

	t68 = (x273<((x274^x275)&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 91U;
	int32_t x278 = -1;
	static int32_t x279 = INT32_MAX;
	volatile int32_t t69 = 359;

	t69 = (x277<((x278^x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	static volatile int64_t x283 = 1996281660LL;

	t70 = (x281<((x282^x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int32_t x287 = -21567;
	int64_t x288 = INT64_MIN;
	static int32_t t71 = -43733;

	t71 = (x285<((x286^x287)&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static uint16_t x290 = UINT16_MAX;
	static volatile int32_t t72 = -27;

	t72 = (x289<((x290^x291)&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 23202U;
	uint16_t x295 = 6U;
	int64_t x296 = INT64_MAX;
	int32_t t73 = 944315;

	t73 = (x293<((x294^x295)&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 1U;
	uint8_t x299 = 6U;
	int32_t t74 = 12;

	t74 = (x297<((x298^x299)&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = 1228399420027785369LL;
	uint32_t x302 = 1U;
	static uint64_t x303 = 135115743LLU;
	uint16_t x304 = 30561U;
	volatile int32_t t75 = -180;

	t75 = (x301<((x302^x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = -1;
	int64_t x306 = -1LL;
	int64_t x308 = 1LL;

	t76 = (x305<((x306^x307)&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 7U;
	int32_t x310 = 1;
	int64_t x311 = INT64_MAX;
	static volatile int64_t x312 = INT64_MAX;

	t77 = (x309<((x310^x311)&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 8644420U;
	volatile uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MAX;
	int64_t x316 = INT64_MAX;
	static volatile int32_t t78 = -26051154;

	t78 = (x313<((x314^x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	volatile int16_t x318 = 144;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 24285U;
	volatile int32_t t79 = -492;

	t79 = (x317<((x318^x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x322 = 3U;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t80 = -71;

	t80 = (x321<((x322^x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	static volatile int32_t t81 = -710;

	t81 = (x325<((x326^x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 79242U;
	static int32_t x330 = INT32_MAX;
	int32_t x331 = INT32_MIN;
	int32_t t82 = 30118418;

	t82 = (x329<((x330^x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -3;
	uint16_t x334 = 4U;
	static volatile int64_t x336 = INT64_MIN;
	int32_t t83 = 3642940;

	t83 = (x333<((x334^x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 10;
	int8_t x339 = -22;
	uint64_t x340 = 110366487571LLU;

	t84 = (x337<((x338^x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int16_t x343 = -659;
	static int32_t t85 = -392317;

	t85 = (x341<((x342^x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 1;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 8211598;

	t86 = (x345<((x346^x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 9078;
	volatile int8_t x350 = INT8_MAX;
	volatile int16_t x351 = INT16_MIN;
	volatile int16_t x352 = INT16_MAX;
	int32_t t87 = -19017;

	t87 = (x349<((x350^x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = 44U;
	volatile int32_t x355 = -1;
	int8_t x356 = -1;

	t88 = (x353<((x354^x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	volatile int64_t x359 = -12263484LL;
	int32_t x360 = -52943032;

	t89 = (x357<((x358^x359)&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	volatile int8_t x364 = INT8_MAX;
	int32_t t90 = 325280794;

	t90 = (x361<((x362^x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 7U;
	int8_t x367 = 59;
	int64_t x368 = 34489662145396541LL;
	volatile int32_t t91 = 228733;

	t91 = (x365<((x366^x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 356538711;

	t92 = (x369<((x370^x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -465;
	volatile int16_t x374 = INT16_MIN;
	int32_t x376 = -3176952;
	volatile int32_t t93 = 935;

	t93 = (x373<((x374^x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 9U;
	int32_t x379 = -1;

	t94 = (x377<((x378^x379)&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;

	t95 = (x381<((x382^x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 34U;
	volatile int32_t t96 = -405;

	t96 = (x385<((x386^x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 717935219815929012LLU;
	int16_t x390 = 1566;
	static int16_t x392 = -1;
	int32_t t97 = 140;

	t97 = (x389<((x390^x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	volatile uint32_t x395 = UINT32_MAX;
	volatile int32_t t98 = 41904;

	t98 = (x393<((x394^x395)&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 1034U;
	uint8_t x400 = UINT8_MAX;

	t99 = (x397<((x398^x399)&x400));

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

