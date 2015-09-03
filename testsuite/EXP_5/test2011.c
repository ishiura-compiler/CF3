#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = INT32_MIN;
volatile int32_t t1 = -17;
uint64_t x13 = UINT64_MAX;
int8_t x19 = -1;
int32_t t4 = -2294079;
int16_t x28 = -61;
uint64_t x31 = UINT64_MAX;
int32_t t7 = -340337565;
volatile uint8_t x33 = 17U;
uint8_t x36 = 41U;
int32_t x47 = 58808596;
uint32_t x50 = 1189217556U;
static uint64_t x51 = 64728677522LLU;
uint16_t x54 = 10U;
uint16_t x59 = 7U;
int32_t t16 = -176197;
static int32_t x70 = -1;
uint64_t x71 = UINT64_MAX;
static int32_t t17 = -71166809;
volatile int32_t x73 = -996034247;
volatile int8_t x74 = INT8_MAX;
volatile uint64_t x77 = 1867771613LLU;
uint32_t x80 = 63145630U;
int16_t x83 = INT16_MIN;
volatile int8_t x85 = -1;
int8_t x87 = INT8_MIN;
uint8_t x92 = UINT8_MAX;
int16_t x95 = -1;
static int32_t t24 = 1374;
int8_t x101 = INT8_MIN;
static volatile int64_t x105 = 2246345388LL;
static int64_t x106 = -36060699564862LL;
volatile int32_t t29 = -3;
static int8_t x124 = INT8_MAX;
volatile int32_t t30 = -14505720;
uint16_t x134 = 3318U;
volatile uint16_t x137 = 6U;
volatile int16_t x142 = INT16_MAX;
int64_t x143 = -563284304426512241LL;
int16_t x149 = INT16_MAX;
uint32_t x157 = 33377171U;
static int32_t x161 = -1;
int8_t x166 = INT8_MIN;
static int16_t x174 = -1;
int16_t x178 = 1735;
int8_t x184 = INT8_MIN;
int8_t x190 = INT8_MAX;
int32_t x191 = 373291115;
static uint32_t x199 = 21187U;
static uint64_t x204 = UINT64_MAX;
static uint64_t x210 = 2622LLU;
int64_t x213 = INT64_MAX;
volatile int16_t x214 = -14000;
int32_t x219 = 1;
volatile int32_t x224 = INT32_MIN;
int32_t t55 = 149;
uint8_t x225 = UINT8_MAX;
uint8_t x233 = 3U;
int64_t x237 = -5LL;
static uint16_t x240 = 557U;
int8_t x243 = INT8_MIN;
static int32_t t60 = -255;
volatile int32_t t61 = -382663;
static int64_t x255 = INT64_MAX;
int8_t x260 = -51;
static int32_t x261 = 1;
volatile int32_t t65 = -2727;
int8_t x268 = INT8_MIN;
volatile int32_t t66 = -29958398;
volatile int32_t x278 = 54;
volatile int64_t x279 = INT64_MIN;
int64_t x280 = -4772LL;
volatile uint16_t x283 = 218U;
volatile int32_t t70 = 1;
int32_t t71 = -4;
uint8_t x293 = UINT8_MAX;
int32_t x312 = INT32_MIN;
uint8_t x313 = 98U;
uint8_t x319 = UINT8_MAX;
volatile int16_t x320 = -54;
int32_t t79 = -3928961;
int8_t x322 = 7;
static int16_t x326 = 54;
int64_t x328 = INT64_MAX;
uint64_t x332 = 18407LLU;
uint32_t x333 = UINT32_MAX;
uint64_t x339 = 7389524090164364LLU;
static int8_t x341 = INT8_MAX;
uint64_t x343 = UINT64_MAX;
uint32_t x350 = 132U;
volatile int16_t x356 = INT16_MAX;
static uint32_t x357 = 1167572348U;
static uint8_t x358 = 2U;
volatile int64_t x365 = INT64_MIN;
int8_t x369 = INT8_MIN;
uint16_t x372 = 0U;
static int32_t x383 = -27205;
int64_t x385 = -119713LL;
static int32_t x393 = -1297;
uint32_t x395 = UINT32_MAX;
int64_t x400 = -189664297LL;
volatile int32_t t99 = -447;


void f0(void) {
	int16_t x1 = 1;
	volatile int8_t x2 = INT8_MAX;
	static volatile int32_t x3 = -2;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -7719;

	t0 = (x1<((x2|x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	static int8_t x7 = INT8_MAX;
	uint16_t x8 = 7217U;

	t1 = (x5<((x6|x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint16_t x10 = 10U;
	volatile uint8_t x11 = 71U;
	volatile int32_t x12 = -1;
	static volatile int32_t t2 = 128061;

	t2 = (x9<((x10|x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -2794;

	t3 = (x13<((x14|x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 109;
	int8_t x18 = -5;
	uint64_t x20 = 2002958LLU;

	t4 = (x17<((x18|x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 86U;
	static int8_t x22 = INT8_MAX;
	int16_t x23 = INT16_MIN;
	volatile int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -4373;

	t5 = (x21<((x22|x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	volatile int32_t t6 = -89989393;

	t6 = (x25<((x26|x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 6939LLU;
	static uint64_t x30 = UINT64_MAX;
	int8_t x32 = 29;

	t7 = (x29<((x30|x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	static int16_t x35 = INT16_MIN;
	int32_t t8 = 7;

	t8 = (x33<((x34|x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 229115505875804913LLU;
	static uint8_t x38 = 1U;
	uint16_t x39 = 9022U;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = -21713480;

	t9 = (x37<((x38|x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 30432557;
	static volatile uint64_t x42 = 407500150287095072LLU;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 7;

	t10 = (x41<((x42|x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 33;
	int64_t x46 = -1LL;
	static uint64_t x48 = 3LLU;
	volatile int32_t t11 = 193;

	t11 = (x45<((x46|x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = 0;

	t12 = (x49<((x50|x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = 211;

	t13 = (x53<((x54|x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 250U;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 1;

	t14 = (x57<((x58|x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 108810141U;
	static uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 1940453U;
	static uint16_t x64 = 439U;
	volatile int32_t t15 = 15934484;

	t15 = (x61<((x62|x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 14944LLU;
	int32_t x66 = -73241;
	uint64_t x67 = 15659203423089LLU;
	volatile uint32_t x68 = 7949U;

	t16 = (x65<((x66|x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 3U;
	int32_t x72 = INT32_MIN;

	t17 = (x69<((x70|x71)|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = INT16_MIN;
	volatile uint16_t x76 = 796U;
	volatile int32_t t18 = -32931290;

	t18 = (x73<((x74|x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 0LLU;
	uint16_t x79 = 2263U;
	static volatile int32_t t19 = -975;

	t19 = (x77<((x78|x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 193;
	uint64_t x82 = UINT64_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 12305;

	t20 = (x81<((x82|x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x86 = 387850LL;
	int32_t x88 = INT32_MAX;
	int32_t t21 = 24806728;

	t21 = (x85<((x86|x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	static uint32_t x90 = 14111U;
	volatile int64_t x91 = INT64_MAX;
	static int32_t t22 = -229;

	t22 = (x89<((x90|x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile uint8_t x94 = 20U;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 22847;

	t23 = (x93<((x94|x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x98 = 6U;
	int32_t x99 = INT32_MAX;
	volatile int8_t x100 = INT8_MIN;

	t24 = (x97<((x98|x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = -1;
	volatile uint8_t x103 = 62U;
	volatile uint32_t x104 = 0U;
	volatile int32_t t25 = -355502484;

	t25 = (x101<((x102|x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x107 = INT64_MAX;
	int32_t x108 = -1;
	int32_t t26 = 0;

	t26 = (x105<((x106|x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = 30;
	int16_t x111 = -181;
	uint16_t x112 = 3844U;
	static int32_t t27 = 400;

	t27 = (x109<((x110|x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	uint32_t x116 = 660778577U;
	static volatile int32_t t28 = -55825;

	t28 = (x113<((x114|x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static uint8_t x118 = 12U;
	int8_t x119 = INT8_MAX;
	int8_t x120 = 3;

	t29 = (x117<((x118|x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	static int64_t x123 = INT64_MIN;

	t30 = (x121<((x122|x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	uint64_t x126 = 132109480324287LLU;
	volatile int16_t x127 = 0;
	static int8_t x128 = -47;
	int32_t t31 = -72721;

	t31 = (x125<((x126|x127)|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = INT16_MIN;
	uint16_t x130 = 6510U;
	int32_t x131 = 992928;
	volatile int8_t x132 = INT8_MIN;
	static int32_t t32 = 62;

	t32 = (x129<((x130|x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile uint16_t x135 = 8736U;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -251168191;

	t33 = (x133<((x134|x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	static int8_t x139 = -1;
	int8_t x140 = 0;
	int32_t t34 = 1;

	t34 = (x137<((x138|x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 99;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t35 = 4;

	t35 = (x141<((x142|x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 100405528U;
	static int32_t x147 = INT32_MIN;
	int16_t x148 = 24;
	int32_t t36 = -543399;

	t36 = (x145<((x146|x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = 0;
	static int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -220;

	t37 = (x149<((x150|x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MAX;
	uint64_t x155 = 13142857666LLU;
	uint16_t x156 = 2072U;
	int32_t t38 = 82718269;

	t38 = (x153<((x154|x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -664;
	static uint32_t x159 = 4U;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -63738;

	t39 = (x157<((x158|x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x162 = UINT32_MAX;
	static int32_t x163 = -1;
	int64_t x164 = INT64_MAX;
	int32_t t40 = 76814;

	t40 = (x161<((x162|x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -76505607;

	t41 = (x165<((x166|x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	static uint32_t x170 = 485U;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = -1;
	static volatile int32_t t42 = 14424;

	t42 = (x169<((x170|x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 696U;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = 54U;
	volatile int32_t t43 = 5;

	t43 = (x173<((x174|x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 15924U;
	volatile int16_t x179 = 221;
	int32_t x180 = -184;
	volatile int32_t t44 = -1;

	t44 = (x177<((x178|x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int16_t x183 = -1;
	static volatile int32_t t45 = 158841270;

	t45 = (x181<((x182|x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 61626220358640LL;
	uint64_t x186 = 2191269696775425908LLU;
	uint8_t x187 = UINT8_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 633;

	t46 = (x185<((x186|x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 490761195955LL;
	static uint16_t x192 = 23U;
	int32_t t47 = 10;

	t47 = (x189<((x190|x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	int64_t x194 = 20641464LL;
	uint8_t x195 = UINT8_MAX;
	volatile uint64_t x196 = 19830232021368LLU;
	volatile int32_t t48 = -12;

	t48 = (x193<((x194|x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	volatile uint32_t x200 = 27771871U;
	int32_t t49 = 5530;

	t49 = (x197<((x198|x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static volatile int64_t x202 = INT64_MIN;
	uint32_t x203 = 6170U;
	volatile int32_t t50 = -49582745;

	t50 = (x201<((x202|x203)|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 3533;

	t51 = (x205<((x206|x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	static int32_t x211 = INT32_MAX;
	static volatile int64_t x212 = INT64_MAX;
	int32_t t52 = 891273652;

	t52 = (x209<((x210|x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x215 = INT16_MIN;
	volatile uint16_t x216 = 350U;
	volatile int32_t t53 = -1;

	t53 = (x213<((x214|x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	volatile int64_t x218 = -4461841166384603776LL;
	uint8_t x220 = UINT8_MAX;
	int32_t t54 = -6798;

	t54 = (x217<((x218|x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 6173U;
	int8_t x222 = INT8_MAX;
	volatile int16_t x223 = -365;

	t55 = (x221<((x222|x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x226 = -1606718LL;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -2536109;

	t56 = (x225<((x226|x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MAX;
	int8_t x231 = -20;
	int16_t x232 = -10102;
	int32_t t57 = 527;

	t57 = (x229<((x230|x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = INT64_MIN;
	int8_t x235 = 63;
	int64_t x236 = 158291938LL;
	volatile int32_t t58 = -1;

	t58 = (x233<((x234|x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x238 = INT32_MIN;
	uint8_t x239 = 2U;
	volatile int32_t t59 = -67240;

	t59 = (x237<((x238|x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 453927745;
	static int8_t x242 = INT8_MAX;
	volatile int16_t x244 = 1099;

	t60 = (x241<((x242|x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile uint16_t x246 = 681U;
	uint64_t x247 = UINT64_MAX;
	volatile uint64_t x248 = 557155LLU;

	t61 = (x245<((x246|x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static uint16_t x250 = 0U;
	volatile uint64_t x251 = 54LLU;
	uint8_t x252 = 42U;
	volatile int32_t t62 = -50;

	t62 = (x249<((x250|x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 1006U;
	static int64_t x254 = INT64_MIN;
	uint32_t x256 = 35659858U;
	volatile int32_t t63 = -2332656;

	t63 = (x253<((x254|x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MAX;
	uint64_t x259 = 88382886036LLU;
	volatile int32_t t64 = -501;

	t64 = (x257<((x258|x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	static int16_t x264 = -1;

	t65 = (x261<((x262|x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x267 = -1;

	t66 = (x265<((x266|x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MAX;
	static volatile uint16_t x271 = UINT16_MAX;
	static uint8_t x272 = 106U;
	int32_t t67 = -3566307;

	t67 = (x269<((x270|x271)|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 10U;
	static int64_t x274 = 5583192277758718LL;
	static uint64_t x275 = UINT64_MAX;
	uint8_t x276 = 12U;
	int32_t t68 = -715286;

	t68 = (x273<((x274|x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	volatile int32_t t69 = 50;

	t69 = (x277<((x278|x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 5U;
	int16_t x282 = -1595;
	volatile int32_t x284 = -101;

	t70 = (x281<((x282|x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -6;
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 5U;

	t71 = (x285<((x286|x287)|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	static uint8_t x290 = 3U;
	uint32_t x291 = 5487U;
	uint64_t x292 = 6LLU;
	volatile int32_t t72 = 87;

	t72 = (x289<((x290|x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x294 = 0;
	volatile int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t73 = -242805;

	t73 = (x293<((x294|x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	static uint64_t x298 = 61507415983731419LLU;
	int16_t x299 = INT16_MAX;
	int8_t x300 = -2;
	volatile int32_t t74 = -3383932;

	t74 = (x297<((x298|x299)|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 31U;
	static int16_t x302 = 1;
	static int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = -345;

	t75 = (x301<((x302|x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 28U;
	volatile uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MAX;
	volatile int16_t x308 = -6;
	int32_t t76 = 9662530;

	t76 = (x305<((x306|x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = UINT32_MAX;
	static int8_t x311 = -1;
	int32_t t77 = -27152561;

	t77 = (x309<((x310|x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t78 = 13185;

	t78 = (x313<((x314|x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MAX;
	int64_t x318 = INT64_MIN;

	t79 = (x317<((x318|x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int8_t x323 = -1;
	int32_t x324 = -1;
	volatile int32_t t80 = -3698978;

	t80 = (x321<((x322|x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	static int64_t x327 = 74393LL;
	volatile int32_t t81 = 0;

	t81 = (x325<((x326|x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = 394884763997207509LL;
	int16_t x331 = INT16_MAX;
	volatile int32_t t82 = -15672156;

	t82 = (x329<((x330|x331)|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 868U;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -108;

	t83 = (x333<((x334|x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 0;
	uint64_t x338 = UINT64_MAX;
	volatile int64_t x340 = -1LL;
	volatile int32_t t84 = 321;

	t84 = (x337<((x338|x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -32207;

	t85 = (x341<((x342|x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	static int8_t x346 = INT8_MAX;
	static uint32_t x347 = 16222031U;
	int32_t x348 = -1;
	static volatile int32_t t86 = 1;

	t86 = (x345<((x346|x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int16_t x351 = -113;
	uint16_t x352 = 34U;
	static int32_t t87 = 227;

	t87 = (x349<((x350|x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1U;
	static int32_t x354 = -1;
	static int8_t x355 = -1;
	volatile int32_t t88 = 83717145;

	t88 = (x353<((x354|x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 1003551;

	t89 = (x357<((x358|x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 0;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 1073647165U;
	int32_t t90 = 223382;

	t90 = (x361<((x362|x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = INT16_MAX;
	static volatile int16_t x368 = -28;
	static volatile int32_t t91 = 3653;

	t91 = (x365<((x366|x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x370 = 19U;
	int32_t x371 = -13904874;
	int32_t t92 = -318;

	t92 = (x369<((x370|x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 790U;
	static int64_t x374 = INT64_MIN;
	uint8_t x375 = UINT8_MAX;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -185;

	t93 = (x373<((x374|x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = 0;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	volatile int16_t x380 = -1;
	int32_t t94 = -32176;

	t94 = (x377<((x378|x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 27;
	volatile int8_t x382 = 1;
	int32_t x384 = INT32_MAX;
	int32_t t95 = -2;

	t95 = (x381<((x382|x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = 132987038;
	static int32_t x387 = 523507;
	int8_t x388 = INT8_MAX;
	int32_t t96 = -688;

	t96 = (x385<((x386|x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 0U;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = 1170;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = 130870;

	t97 = (x389<((x390|x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -30;
	uint32_t x396 = 238437U;
	int32_t t98 = 47763688;

	t98 = (x393<((x394|x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x397 = INT8_MIN;
	static uint64_t x398 = UINT64_MAX;
	volatile uint32_t x399 = UINT32_MAX;

	t99 = (x397<((x398|x399)|x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

