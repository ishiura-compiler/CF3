#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x10 = UINT8_MAX;
uint8_t x12 = UINT8_MAX;
volatile int32_t t2 = -102930952;
uint8_t x15 = 119U;
volatile int32_t t3 = -97655;
uint16_t x19 = UINT16_MAX;
uint8_t x21 = 1U;
int8_t x27 = -2;
int16_t x28 = INT16_MIN;
int32_t x30 = -4705;
static int32_t t7 = -110;
uint16_t x33 = 4U;
volatile int32_t t10 = 23347473;
int32_t t11 = 53;
int8_t x51 = -30;
int16_t x54 = INT16_MIN;
static int32_t x63 = INT32_MAX;
int32_t t15 = 15;
uint32_t x66 = UINT32_MAX;
int8_t x78 = 1;
volatile int32_t x80 = -1;
static volatile int64_t x81 = INT64_MAX;
volatile int16_t x91 = INT16_MAX;
static int32_t t23 = -1;
int32_t x104 = 15725283;
int32_t x107 = -1;
uint16_t x116 = 5U;
int64_t x117 = INT64_MIN;
volatile uint32_t x123 = 38454U;
int32_t x137 = INT32_MIN;
uint64_t x138 = UINT64_MAX;
static int64_t x146 = INT64_MAX;
int32_t x147 = 7941710;
uint32_t x148 = 105474905U;
int32_t t37 = 2518464;
int16_t x153 = -1;
volatile int32_t t38 = -247;
volatile int32_t x159 = INT32_MIN;
int64_t x161 = -1LL;
uint8_t x173 = 2U;
int8_t x178 = INT8_MIN;
int8_t x180 = -1;
int32_t x184 = 18358;
volatile int32_t t46 = -4032;
volatile int32_t x193 = INT32_MAX;
static int32_t x194 = 848;
int32_t t48 = 21759;
volatile uint8_t x199 = 1U;
uint64_t x202 = 75942LLU;
uint8_t x208 = UINT8_MAX;
volatile int16_t x217 = -1;
int8_t x224 = 52;
volatile int32_t t56 = 407907;
volatile int32_t t57 = -18162069;
int8_t x234 = INT8_MIN;
int16_t x235 = -517;
int32_t t59 = 73549;
uint16_t x241 = UINT16_MAX;
uint64_t x242 = UINT64_MAX;
static int64_t x248 = 52497814896308856LL;
volatile int64_t x249 = -64668764726362LL;
int64_t x258 = -25102290533177LL;
static int32_t x263 = INT32_MAX;
static int64_t x278 = INT64_MIN;
int16_t x282 = INT16_MIN;
int32_t x288 = INT32_MIN;
uint8_t x292 = UINT8_MAX;
int32_t x294 = INT32_MIN;
static volatile uint64_t x296 = UINT64_MAX;
int32_t x298 = 15198;
int8_t x299 = -1;
int16_t x308 = INT16_MIN;
uint64_t x312 = 356851944332871865LLU;
static int32_t t77 = 1119074;
int16_t x317 = 1459;
volatile uint8_t x322 = UINT8_MAX;
static volatile int32_t t80 = -128115372;
int32_t t81 = 6357;
int32_t x329 = -1;
uint64_t x330 = 8887604736915097521LLU;
uint64_t x331 = 54489611812951LLU;
int32_t t82 = 3631135;
int64_t x335 = -13575983585678562LL;
static int64_t x336 = -1LL;
static uint64_t x340 = 22LLU;
static int32_t t84 = -729860;
int64_t x344 = -1LL;
volatile int32_t t85 = -36824523;
uint32_t x354 = 54U;
static int32_t x355 = INT32_MAX;
int64_t x358 = INT64_MAX;
uint16_t x360 = 15U;
int8_t x361 = INT8_MAX;
volatile uint64_t x364 = 32396006434LLU;
static volatile int32_t t92 = 6801;
uint64_t x374 = UINT64_MAX;
volatile int8_t x377 = -4;
uint64_t x380 = 7LLU;
volatile int32_t t94 = -253;
int32_t x382 = -1;
static volatile uint16_t x385 = 14U;
volatile int64_t x392 = -1LL;
volatile int32_t t97 = 0;
int8_t x393 = 12;
int32_t x394 = INT32_MIN;
uint16_t x399 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = 538731143LLU;
	int64_t x2 = INT64_MIN;
	volatile int8_t x3 = -38;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 16176;

	t0 = (x1<((x2|x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 159089U;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 1U;
	uint8_t x8 = 2U;
	int32_t t1 = -1;

	t1 = (x5<((x6|x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint32_t x11 = UINT32_MAX;

	t2 = (x9<((x10|x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint8_t x14 = 1U;
	volatile int16_t x16 = -13575;

	t3 = (x13<((x14|x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static int64_t x18 = INT64_MAX;
	volatile int32_t x20 = -67371854;
	int32_t t4 = 26386552;

	t4 = (x17<((x18|x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 535U;
	static int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 975135457;

	t5 = (x21<((x22|x23)/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static uint32_t x26 = UINT32_MAX;
	int32_t t6 = 9613;

	t6 = (x25<((x26|x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 25U;
	static int8_t x31 = -1;
	int16_t x32 = INT16_MAX;

	t7 = (x29<((x30|x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1380457836U;
	int32_t x35 = -3372454;
	uint64_t x36 = 13150261888LLU;
	volatile int32_t t8 = -54;

	t8 = (x33<((x34|x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x38 = -41;
	int16_t x39 = -12542;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -37;

	t9 = (x37<((x38|x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	volatile int8_t x42 = -50;
	volatile int32_t x43 = 0;
	uint8_t x44 = 1U;

	t10 = (x41<((x42|x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	volatile uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;

	t11 = (x45<((x46|x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = -1;
	uint16_t x52 = 500U;
	static int32_t t12 = 0;

	t12 = (x49<((x50|x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	uint16_t x55 = UINT16_MAX;
	uint32_t x56 = 496U;
	volatile int32_t t13 = -150471883;

	t13 = (x53<((x54|x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 2202;
	volatile uint8_t x58 = UINT8_MAX;
	volatile int8_t x59 = INT8_MAX;
	volatile uint16_t x60 = 4U;
	int32_t t14 = -827356;

	t14 = (x57<((x58|x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1385;
	int64_t x62 = -4236437034762047LL;
	uint16_t x64 = 21U;

	t15 = (x61<((x62|x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int8_t x67 = -6;
	uint16_t x68 = 131U;
	volatile int32_t t16 = 1;

	t16 = (x65<((x66|x67)/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	static int64_t x70 = 2407070LL;
	uint16_t x71 = 84U;
	int16_t x72 = 1;
	volatile int32_t t17 = -79872;

	t17 = (x69<((x70|x71)/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 16654684LLU;
	uint32_t x74 = 1U;
	static int32_t x75 = 81;
	uint8_t x76 = 67U;
	volatile int32_t t18 = 426972786;

	t18 = (x73<((x74|x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = 2;
	volatile int16_t x79 = -1;
	volatile int32_t t19 = -53154;

	t19 = (x77<((x78|x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = -56;
	int8_t x83 = INT8_MAX;
	int16_t x84 = -98;
	int32_t t20 = 213;

	t20 = (x81<((x82|x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 52;
	int8_t x86 = 0;
	uint16_t x87 = 42U;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = 407;

	t21 = (x85<((x86|x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	volatile uint64_t x90 = 6385433404LLU;
	static int32_t x92 = -753;
	int32_t t22 = 13788268;

	t22 = (x89<((x90|x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -5535070;
	int32_t x94 = -109240;
	int8_t x95 = 1;
	uint8_t x96 = 1U;

	t23 = (x93<((x94|x95)/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MAX;
	uint32_t x98 = 1203351U;
	volatile uint16_t x99 = 1743U;
	int64_t x100 = 1LL;
	int32_t t24 = 0;

	t24 = (x97<((x98|x99)/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	volatile int8_t x102 = -1;
	static int16_t x103 = INT16_MAX;
	static int32_t t25 = 1355;

	t25 = (x101<((x102|x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	volatile int16_t x106 = -1;
	int16_t x108 = 109;
	int32_t t26 = 929028;

	t26 = (x105<((x106|x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	static int32_t x110 = INT32_MIN;
	volatile int32_t x111 = INT32_MIN;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = -8070;

	t27 = (x109<((x110|x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MAX;
	int32_t t28 = 232592582;

	t28 = (x113<((x114|x115)/x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 0U;
	int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;
	static int32_t t29 = 498;

	t29 = (x117<((x118|x119)/x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -586902LL;
	uint16_t x122 = UINT16_MAX;
	static int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -1;

	t30 = (x121<((x122|x123)/x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	static uint32_t x126 = 12U;
	volatile int32_t x127 = -1;
	uint64_t x128 = 62076791613702LLU;
	int32_t t31 = -1;

	t31 = (x125<((x126|x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 33U;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 44099U;
	static int32_t t32 = -34880;

	t32 = (x129<((x130|x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 96;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	static int64_t x136 = 194380609862635LL;
	volatile int32_t t33 = 741773;

	t33 = (x133<((x134|x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x139 = -1;
	volatile uint64_t x140 = UINT64_MAX;
	int32_t t34 = 29829;

	t34 = (x137<((x138|x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	uint64_t x142 = UINT64_MAX;
	static uint16_t x143 = 3739U;
	static int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = 442014;

	t35 = (x141<((x142|x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 63;
	volatile int32_t t36 = 212;

	t36 = (x145<((x146|x147)/x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	volatile uint64_t x150 = 196081715LLU;
	int32_t x151 = 79168258;
	static uint32_t x152 = 32U;

	t37 = (x149<((x150|x151)/x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = 4;
	int64_t x156 = -13022098925287322LL;

	t38 = (x153<((x154|x155)/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1191;
	uint32_t x158 = 35343U;
	int16_t x160 = -1;
	static volatile int32_t t39 = 0;

	t39 = (x157<((x158|x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 157421;

	t40 = (x161<((x162|x163)/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = 72756U;
	int64_t x167 = INT64_MIN;
	volatile int32_t x168 = INT32_MAX;
	int32_t t41 = -3580024;

	t41 = (x165<((x166|x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int32_t x170 = -1;
	static uint8_t x171 = 1U;
	volatile int8_t x172 = INT8_MAX;
	static int32_t t42 = -34404195;

	t42 = (x169<((x170|x171)/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = UINT8_MAX;
	int16_t x176 = -1;
	int32_t t43 = -984700;

	t43 = (x173<((x174|x175)/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int16_t x179 = -1718;
	static int32_t t44 = -372865707;

	t44 = (x177<((x178|x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -51LL;
	uint32_t x182 = 617373U;
	volatile int16_t x183 = -1;
	volatile int32_t t45 = 144905;

	t45 = (x181<((x182|x183)/x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 74556204;
	static uint64_t x186 = 2151682954955514LLU;
	uint32_t x187 = 6393622U;
	static int8_t x188 = INT8_MIN;

	t46 = (x185<((x186|x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 14LLU;
	int64_t x190 = INT64_MIN;
	int64_t x191 = -1LL;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -14431;

	t47 = (x189<((x190|x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x195 = -1;
	uint16_t x196 = 2U;

	t48 = (x193<((x194|x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	static int8_t x198 = 0;
	int64_t x200 = INT64_MAX;
	int32_t t49 = -7;

	t49 = (x197<((x198|x199)/x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x203 = 10U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 1;

	t50 = (x201<((x202|x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -506952961411LL;
	int32_t t51 = -4141;

	t51 = (x205<((x206|x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 14U;
	volatile int8_t x210 = INT8_MAX;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = -1;
	int32_t t52 = -333862;

	t52 = (x209<((x210|x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -26669587124325LL;
	static volatile int16_t x214 = INT16_MIN;
	int8_t x215 = 11;
	volatile uint8_t x216 = 1U;
	volatile int32_t t53 = -11;

	t53 = (x213<((x214|x215)/x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = 14;
	int16_t x219 = INT16_MIN;
	static int8_t x220 = INT8_MIN;
	int32_t t54 = -119;

	t54 = (x217<((x218|x219)/x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1593251568LLU;
	int32_t x222 = INT32_MAX;
	int64_t x223 = -1LL;
	int32_t t55 = -21282351;

	t55 = (x221<((x222|x223)/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int32_t x226 = INT32_MIN;
	volatile uint32_t x227 = 373U;
	int16_t x228 = 111;

	t56 = (x225<((x226|x227)/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 662478328LLU;
	int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MIN;
	int64_t x232 = -224005LL;

	t57 = (x229<((x230|x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 112007;
	static uint16_t x236 = UINT16_MAX;
	static volatile int32_t t58 = -826;

	t58 = (x233<((x234|x235)/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = 831LL;
	static volatile int64_t x239 = -1LL;
	static int32_t x240 = INT32_MIN;

	t59 = (x237<((x238|x239)/x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x243 = UINT32_MAX;
	int64_t x244 = 238452881859LL;
	int32_t t60 = -5534067;

	t60 = (x241<((x242|x243)/x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 1036U;
	uint8_t x246 = 14U;
	volatile int8_t x247 = INT8_MAX;
	static volatile int32_t t61 = 300;

	t61 = (x245<((x246|x247)/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	static int32_t x251 = -2327458;
	static volatile int64_t x252 = -587LL;
	volatile int32_t t62 = -153929436;

	t62 = (x249<((x250|x251)/x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 22U;
	static int32_t t63 = 221;

	t63 = (x253<((x254|x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 109393LLU;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 8045587;

	t64 = (x257<((x258|x259)/x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x262 = -1;
	uint16_t x264 = UINT16_MAX;
	int32_t t65 = -492;

	t65 = (x261<((x262|x263)/x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	static int8_t x266 = INT8_MIN;
	volatile int16_t x267 = 196;
	int64_t x268 = 1129792775504151942LL;
	static int32_t t66 = 1;

	t66 = (x265<((x266|x267)/x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 760055970955LLU;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 4359619;

	t67 = (x269<((x270|x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	static int32_t x274 = INT32_MIN;
	static uint16_t x275 = 5208U;
	int32_t x276 = -1;
	volatile int32_t t68 = 2190213;

	t68 = (x273<((x274|x275)/x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = -2;
	int32_t x279 = INT32_MAX;
	int32_t x280 = -1;
	int32_t t69 = -16914512;

	t69 = (x277<((x278|x279)/x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static uint64_t x283 = 1213744047870308LLU;
	int8_t x284 = INT8_MAX;
	int32_t t70 = 126;

	t70 = (x281<((x282|x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = 148LL;
	static volatile int8_t x286 = INT8_MAX;
	static uint8_t x287 = 0U;
	static int32_t t71 = -78351271;

	t71 = (x285<((x286|x287)/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int64_t x291 = -1LL;
	volatile int32_t t72 = -6610750;

	t72 = (x289<((x290|x291)/x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 0LLU;
	static volatile uint64_t x295 = 14416LLU;
	int32_t t73 = 1;

	t73 = (x293<((x294|x295)/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MAX;
	static int32_t x300 = 18893597;
	static int32_t t74 = 1226224;

	t74 = (x297<((x298|x299)/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint16_t x302 = 25U;
	uint8_t x303 = 6U;
	static int64_t x304 = 42LL;
	volatile int32_t t75 = 458810295;

	t75 = (x301<((x302|x303)/x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 5U;
	volatile int32_t x306 = INT32_MAX;
	uint32_t x307 = 197U;
	static int32_t t76 = -1;

	t76 = (x305<((x306|x307)/x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = 18U;
	int32_t x311 = INT32_MIN;

	t77 = (x309<((x310|x311)/x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -965;
	volatile int32_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = -1;
	volatile int32_t t78 = 0;

	t78 = (x313<((x314|x315)/x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	int8_t x319 = INT8_MIN;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 284;

	t79 = (x317<((x318|x319)/x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	volatile int8_t x323 = -1;
	int32_t x324 = -61216964;

	t80 = (x321<((x322|x323)/x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	static int16_t x327 = -1;
	int16_t x328 = -457;

	t81 = (x325<((x326|x327)/x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x332 = INT32_MIN;

	t82 = (x329<((x330|x331)/x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	uint64_t x334 = 129779630286457942LLU;
	volatile int32_t t83 = 31;

	t83 = (x333<((x334|x335)/x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 12589437U;
	int32_t x338 = -1;
	static int16_t x339 = INT16_MIN;

	t84 = (x337<((x338|x339)/x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	static int32_t x342 = 160;
	int32_t x343 = INT32_MIN;

	t85 = (x341<((x342|x343)/x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 4478130450723LLU;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 493225U;
	volatile uint8_t x348 = 3U;
	static int32_t t86 = 243981173;

	t86 = (x345<((x346|x347)/x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 16001U;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = -1LL;
	int16_t x352 = -1;
	volatile int32_t t87 = -108712990;

	t87 = (x349<((x350|x351)/x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	static int8_t x356 = -62;
	int32_t t88 = -134;

	t88 = (x353<((x354|x355)/x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t t89 = 1318;

	t89 = (x357<((x358|x359)/x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = 1539;
	volatile uint16_t x363 = 4839U;
	volatile int32_t t90 = -563170;

	t90 = (x361<((x362|x363)/x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 325028491301059LLU;
	volatile uint32_t x366 = 129U;
	static uint8_t x367 = 4U;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 323430;

	t91 = (x365<((x366|x367)/x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 2481896U;
	int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	volatile int64_t x372 = 126011980457LL;

	t92 = (x369<((x370|x371)/x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -43943;

	t93 = (x373<((x374|x375)/x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = INT8_MIN;
	static int8_t x379 = INT8_MIN;

	t94 = (x377<((x378|x379)/x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 297;
	volatile int32_t x383 = INT32_MIN;
	static uint8_t x384 = 3U;
	volatile int32_t t95 = -228;

	t95 = (x381<((x382|x383)/x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x386 = UINT8_MAX;
	int64_t x387 = 10423332697157831LL;
	static volatile uint32_t x388 = 31U;
	int32_t t96 = -312327014;

	t96 = (x385<((x386|x387)/x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MIN;

	t97 = (x389<((x390|x391)/x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x395 = INT32_MIN;
	uint8_t x396 = 1U;
	volatile int32_t t98 = 11455;

	t98 = (x393<((x394|x395)/x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int64_t x398 = INT64_MAX;
	static int32_t x400 = INT32_MAX;
	int32_t t99 = -585369;

	t99 = (x397<((x398|x399)/x400));

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

