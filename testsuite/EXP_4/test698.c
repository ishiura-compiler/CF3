#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 33132U;
uint64_t x2 = UINT64_MAX;
int16_t x3 = INT16_MIN;
static volatile int32_t t0 = -2;
int32_t x9 = INT32_MAX;
volatile uint64_t x27 = 908231205473LLU;
static int32_t t5 = 0;
uint32_t x30 = 3U;
volatile uint64_t x52 = UINT64_MAX;
static uint32_t x62 = 656841U;
int8_t x76 = INT8_MIN;
int32_t x77 = 383598;
int16_t x79 = -1;
uint16_t x80 = 13120U;
volatile uint8_t x83 = UINT8_MAX;
int32_t x85 = INT32_MIN;
int32_t x86 = 9397;
static volatile int32_t t20 = -10121473;
int32_t x98 = INT32_MAX;
int64_t x102 = INT64_MAX;
int8_t x106 = 6;
int32_t x111 = INT32_MIN;
volatile int32_t t25 = -379;
volatile uint16_t x115 = 8046U;
volatile uint32_t x123 = 647718U;
int32_t t27 = 5925;
int16_t x132 = 1;
int64_t x133 = INT64_MAX;
static uint8_t x155 = 1U;
static int8_t x156 = -3;
static volatile int32_t t36 = -6840;
int64_t x171 = INT64_MIN;
uint64_t x178 = UINT64_MAX;
int8_t x180 = -57;
int8_t x186 = INT8_MIN;
volatile int8_t x187 = INT8_MAX;
static volatile uint64_t x189 = 12730LLU;
int64_t x199 = INT64_MIN;
uint64_t x205 = 229LLU;
int32_t x206 = INT32_MIN;
int16_t x208 = 398;
volatile int16_t x209 = 863;
int32_t x211 = -5757457;
volatile int32_t t47 = -1020960;
uint8_t x223 = 1U;
int16_t x227 = -1;
volatile int32_t t50 = 9269059;
uint8_t x236 = UINT8_MAX;
uint64_t x242 = 30147451381465779LLU;
int32_t t54 = -28553539;
uint64_t x245 = 412003698876297LLU;
static int16_t x246 = INT16_MIN;
int8_t x255 = 1;
int16_t x259 = 1332;
uint64_t x268 = UINT64_MAX;
uint8_t x272 = 4U;
int64_t x277 = INT64_MAX;
int32_t x286 = -1;
int16_t x293 = 252;
static int64_t x298 = INT64_MAX;
volatile int32_t t67 = 122644232;
volatile uint32_t x315 = 24U;
int32_t t71 = 3002263;
int16_t x324 = INT16_MIN;
int32_t x330 = INT32_MIN;
int64_t x339 = INT64_MAX;
uint16_t x344 = UINT16_MAX;
int8_t x347 = INT8_MAX;
volatile int16_t x350 = 6;
int32_t t79 = 69972825;
int64_t x359 = INT64_MIN;
volatile int32_t x367 = -20268;
int32_t x379 = -1;
volatile int16_t x384 = INT16_MAX;
int32_t x389 = 30466;
uint64_t x417 = 197684LLU;
int32_t x420 = 8408129;


void f0(void) {
	int32_t x4 = INT32_MIN;

	t0 = (x1<(x2-(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 11097U;
	uint16_t x7 = 6U;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 3560962;

	t1 = (x5<(x6-(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 23;
	uint16_t x11 = 49U;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 62447438;

	t2 = (x9<(x10-(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = -1;
	int8_t x15 = -1;
	int32_t x16 = 21;
	int32_t t3 = -18596;

	t3 = (x13<(x14-(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 1999051;
	static uint64_t x18 = 1417050376542LLU;
	int8_t x19 = 41;
	static volatile int8_t x20 = INT8_MAX;
	static int32_t t4 = 426446057;

	t4 = (x17<(x18-(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 1LL;
	volatile int32_t x26 = INT32_MIN;
	uint32_t x28 = 38410U;

	t5 = (x25<(x26-(x27%x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -5562;
	int32_t x31 = -1;
	static int16_t x32 = -1;
	static volatile int32_t t6 = 1230711;

	t6 = (x29<(x30-(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 2U;
	volatile uint8_t x34 = 0U;
	int32_t x35 = -1;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = -95078;

	t7 = (x33<(x34-(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 954602206920724894LLU;
	int8_t x42 = 3;
	int8_t x43 = INT8_MIN;
	static volatile uint8_t x44 = 27U;
	volatile int32_t t8 = 1629;

	t8 = (x41<(x42-(x43%x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	volatile int16_t x46 = INT16_MIN;
	static int64_t x47 = INT64_MIN;
	int64_t x48 = 2801982584718657LL;
	volatile int32_t t9 = 243301;

	t9 = (x45<(x46-(x47%x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -1;
	volatile int16_t x50 = 1;
	int8_t x51 = INT8_MIN;
	volatile int32_t t10 = -5109;

	t10 = (x49<(x50-(x51%x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -2907;
	int16_t x54 = INT16_MAX;
	static int8_t x55 = INT8_MIN;
	volatile int64_t x56 = 7388415628832783LL;
	int32_t t11 = -1712229;

	t11 = (x53<(x54-(x55%x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	static int32_t x58 = -1;
	static int64_t x59 = INT64_MIN;
	int64_t x60 = -1LL;
	volatile int32_t t12 = 114646055;

	t12 = (x57<(x58-(x59%x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int32_t x63 = -1;
	uint16_t x64 = 301U;
	static int32_t t13 = 9347680;

	t13 = (x61<(x62-(x63%x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 516111580U;
	int8_t x66 = 0;
	int8_t x67 = INT8_MIN;
	volatile uint8_t x68 = 1U;
	int32_t t14 = -25946317;

	t14 = (x65<(x66-(x67%x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 31U;
	static int32_t x70 = -91;
	volatile int64_t x71 = INT64_MIN;
	int64_t x72 = -1LL;
	volatile int32_t t15 = -3942;

	t15 = (x69<(x70-(x71%x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 608419LLU;
	int16_t x75 = 61;
	static volatile int32_t t16 = -7;

	t16 = (x73<(x74-(x75%x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = -757;
	volatile int32_t t17 = 2;

	t17 = (x77<(x78-(x79%x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = -1;
	static int16_t x82 = INT16_MAX;
	static uint64_t x84 = 7LLU;
	int32_t t18 = -11;

	t18 = (x81<(x82-(x83%x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t19 = -6;

	t19 = (x85<(x86-(x87%x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	volatile uint8_t x92 = UINT8_MAX;

	t20 = (x89<(x90-(x91%x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x94 = 179341U;
	int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t21 = -4;

	t21 = (x93<(x94-(x95%x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 4;
	uint8_t x99 = 60U;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t22 = 5443;

	t22 = (x97<(x98-(x99%x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 3U;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t23 = 13982868;

	t23 = (x101<(x102-(x103%x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 55U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -976LL;
	int32_t t24 = 2895;

	t24 = (x105<(x106-(x107%x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MIN;
	static int16_t x110 = INT16_MIN;
	uint32_t x112 = UINT32_MAX;

	t25 = (x109<(x110-(x111%x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -126037950LL;
	static uint64_t x116 = 6698006LLU;
	static volatile int32_t t26 = -376196;

	t26 = (x113<(x114-(x115%x116)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = -1LL;
	volatile int32_t x122 = INT32_MAX;
	int8_t x124 = INT8_MIN;

	t27 = (x121<(x122-(x123%x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	uint32_t x126 = 9646260U;
	static volatile int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t28 = 260564639;

	t28 = (x125<(x126-(x127%x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -5;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MAX;
	int32_t t29 = 150;

	t29 = (x129<(x130-(x131%x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = -1;
	uint64_t x135 = 246647104542058103LLU;
	int64_t x136 = -1LL;
	volatile int32_t t30 = 67354138;

	t30 = (x133<(x134-(x135%x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 482U;
	uint8_t x138 = 3U;
	int32_t x139 = INT32_MIN;
	static int32_t x140 = 10136;
	volatile int32_t t31 = 2094860;

	t31 = (x137<(x138-(x139%x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = -3439;
	int16_t x143 = INT16_MIN;
	volatile int64_t x144 = INT64_MAX;
	static int32_t t32 = 245786;

	t32 = (x141<(x142-(x143%x144)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	volatile int16_t x146 = INT16_MIN;
	static uint8_t x147 = 1U;
	volatile int16_t x148 = 1;
	int32_t t33 = 12315765;

	t33 = (x145<(x146-(x147%x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile int32_t x150 = 10447;
	static int16_t x151 = -1;
	int32_t x152 = 53923;
	static volatile int32_t t34 = 13783;

	t34 = (x149<(x150-(x151%x152)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = -1;
	int64_t x154 = -22404973143LL;
	volatile int32_t t35 = 70;

	t35 = (x153<(x154-(x155%x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 1U;
	static volatile int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;

	t36 = (x157<(x158-(x159%x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -469545661;
	int64_t x166 = -1LL;
	uint64_t x167 = UINT64_MAX;
	uint16_t x168 = 4U;
	int32_t t37 = 105195333;

	t37 = (x165<(x166-(x167%x168)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	static int64_t x172 = 66284336301058027LL;
	int32_t t38 = -6799496;

	t38 = (x169<(x170-(x171%x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -23;
	uint8_t x179 = 100U;
	static volatile int32_t t39 = -180301033;

	t39 = (x177<(x178-(x179%x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = -12LL;
	static uint8_t x182 = 19U;
	uint32_t x183 = 443U;
	int64_t x184 = 664419LL;
	static volatile int32_t t40 = 9414692;

	t40 = (x181<(x182-(x183%x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = 43410;
	int16_t x188 = -22;
	int32_t t41 = -1;

	t41 = (x185<(x186-(x187%x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x190 = INT8_MIN;
	volatile int8_t x191 = -1;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t42 = 104083;

	t42 = (x189<(x190-(x191%x192)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x193 = 13966LL;
	static int8_t x194 = INT8_MAX;
	int32_t x195 = -1;
	int64_t x196 = 18485LL;
	static volatile int32_t t43 = -44660;

	t43 = (x193<(x194-(x195%x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = -1LL;
	uint16_t x200 = 24036U;
	int32_t t44 = -46557256;

	t44 = (x197<(x198-(x199%x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = UINT16_MAX;
	static int8_t x202 = INT8_MAX;
	int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t45 = 7537793;

	t45 = (x201<(x202-(x203%x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x207 = 2859010U;
	static int32_t t46 = -796553;

	t46 = (x205<(x206-(x207%x208)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = INT32_MAX;
	volatile int64_t x212 = INT64_MAX;

	t47 = (x209<(x210-(x211%x212)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x217 = INT16_MAX;
	volatile int32_t x218 = 839722;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t48 = 3311699;

	t48 = (x217<(x218-(x219%x220)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MIN;
	static uint64_t x222 = 5LLU;
	int32_t x224 = INT32_MIN;
	static int32_t t49 = 353877369;

	t49 = (x221<(x222-(x223%x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	int64_t x228 = INT64_MIN;

	t50 = (x225<(x226-(x227%x228)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = 34486120U;
	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = 0;
	int64_t x232 = INT64_MIN;
	int32_t t51 = 162004;

	t51 = (x229<(x230-(x231%x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x233 = 103U;
	static int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MAX;
	volatile int32_t t52 = 109364054;

	t52 = (x233<(x234-(x235%x236)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	uint32_t x238 = 15087413U;
	int64_t x239 = -1LL;
	int32_t x240 = 29;
	volatile int32_t t53 = 111;

	t53 = (x237<(x238-(x239%x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = UINT8_MAX;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = INT32_MIN;

	t54 = (x241<(x242-(x243%x244)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x247 = -1;
	int8_t x248 = -8;
	volatile int32_t t55 = 162448813;

	t55 = (x245<(x246-(x247%x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	static int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	volatile int64_t x252 = -2320966LL;
	volatile int32_t t56 = -27762037;

	t56 = (x249<(x250-(x251%x252)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile uint32_t x254 = 599U;
	uint64_t x256 = 165776190202091LLU;
	int32_t t57 = 1130;

	t57 = (x253<(x254-(x255%x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x257 = 1734LL;
	static uint32_t x258 = 5032U;
	static int64_t x260 = 8311817LL;
	static int32_t t58 = 1268941;

	t58 = (x257<(x258-(x259%x260)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x261 = 1936U;
	int16_t x262 = INT16_MAX;
	volatile int8_t x263 = -24;
	uint64_t x264 = 24652723981LLU;
	volatile int32_t t59 = -46065;

	t59 = (x261<(x262-(x263%x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = 1;
	uint32_t x266 = UINT32_MAX;
	volatile int16_t x267 = INT16_MAX;
	int32_t t60 = 496;

	t60 = (x265<(x266-(x267%x268)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MAX;
	volatile int32_t x270 = -1;
	uint16_t x271 = 4002U;
	static volatile int32_t t61 = -20700612;

	t61 = (x269<(x270-(x271%x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x278 = 2U;
	volatile uint8_t x279 = 25U;
	volatile int32_t x280 = INT32_MAX;
	int32_t t62 = 156939025;

	t62 = (x277<(x278-(x279%x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 40U;
	int32_t t63 = -26;

	t63 = (x281<(x282-(x283%x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x285 = 1U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = -733750;
	int32_t t64 = 0;

	t64 = (x285<(x286-(x287%x288)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static int32_t x291 = INT32_MIN;
	int32_t x292 = -81360;
	volatile int32_t t65 = -10787995;

	t65 = (x289<(x290-(x291%x292)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x294 = INT32_MIN;
	static volatile uint16_t x295 = 1U;
	int16_t x296 = -1;
	volatile int32_t t66 = 204266;

	t66 = (x293<(x294-(x295%x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x297 = 873286677950429625LLU;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t x300 = INT32_MIN;

	t67 = (x297<(x298-(x299%x300)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 3184U;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -946021139569503607LL;
	int64_t x304 = 1087543499478349162LL;
	volatile int32_t t68 = -110519;

	t68 = (x301<(x302-(x303%x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = 7265449616LL;
	volatile int32_t t69 = 3832;

	t69 = (x305<(x306-(x307%x308)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -5;
	uint64_t x310 = 284898415318184986LLU;
	int16_t x311 = INT16_MAX;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int32_t t70 = 3504378;

	t70 = (x309<(x310-(x311%x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = INT32_MIN;
	static int32_t x314 = -1;
	uint16_t x316 = 76U;

	t71 = (x313<(x314-(x315%x316)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x321 = 26U;
	static int8_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int32_t t72 = -16;

	t72 = (x321<(x322-(x323%x324)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x325 = 115723087118LLU;
	int32_t x326 = -1567841;
	static volatile uint8_t x327 = 3U;
	static int32_t x328 = -1;
	volatile int32_t t73 = -70;

	t73 = (x325<(x326-(x327%x328)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x329 = UINT32_MAX;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -25149LL;
	volatile int32_t t74 = -263897;

	t74 = (x329<(x330-(x331%x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x333 = 774661;
	int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MIN;
	int32_t x336 = 252;
	int32_t t75 = 315378;

	t75 = (x333<(x334-(x335%x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x337 = -2;
	volatile int8_t x338 = -10;
	static uint8_t x340 = 44U;
	volatile int32_t t76 = -2833;

	t76 = (x337<(x338-(x339%x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	static uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 43U;
	int32_t t77 = 981605380;

	t77 = (x341<(x342-(x343%x344)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = -1;
	volatile int64_t x348 = 315844LL;
	int32_t t78 = -209213686;

	t78 = (x345<(x346-(x347%x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x349 = INT32_MAX;
	uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;

	t79 = (x349<(x350-(x351%x352)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MIN;
	static int64_t x355 = -1LL;
	int16_t x356 = -1;
	int32_t t80 = -5131643;

	t80 = (x353<(x354-(x355%x356)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x358 = 105U;
	int16_t x360 = -1;
	static volatile int32_t t81 = -44713323;

	t81 = (x357<(x358-(x359%x360)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x365 = 0U;
	int16_t x366 = INT16_MIN;
	volatile uint16_t x368 = 1390U;
	int32_t t82 = -293246183;

	t82 = (x365<(x366-(x367%x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x369 = INT64_MAX;
	volatile int32_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	int8_t x372 = 1;
	int32_t t83 = -6;

	t83 = (x369<(x370-(x371%x372)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = -33886633805273LL;
	volatile uint16_t x376 = 336U;
	volatile int32_t t84 = -147;

	t84 = (x373<(x374-(x375%x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -43;
	static int32_t x378 = INT32_MAX;
	int64_t x380 = INT64_MAX;
	volatile int32_t t85 = -140501608;

	t85 = (x377<(x378-(x379%x380)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int64_t x382 = -326LL;
	uint8_t x383 = 4U;
	volatile int32_t t86 = 667;

	t86 = (x381<(x382-(x383%x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = INT8_MIN;
	int64_t x386 = -1LL;
	static int8_t x387 = INT8_MIN;
	static uint16_t x388 = 88U;
	static volatile int32_t t87 = 16;

	t87 = (x385<(x386-(x387%x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x390 = -25;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t88 = 38;

	t88 = (x389<(x390-(x391%x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = -1LL;
	uint64_t x394 = 2353760302218LLU;
	uint64_t x395 = 129353160947218833LLU;
	int64_t x396 = INT64_MAX;
	int32_t t89 = 979696735;

	t89 = (x393<(x394-(x395%x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = -16162110;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	int32_t t90 = 245485;

	t90 = (x397<(x398-(x399%x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int32_t x404 = -3563720;
	volatile int32_t t91 = -7;

	t91 = (x401<(x402-(x403%x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x405 = INT8_MIN;
	static int16_t x406 = INT16_MIN;
	static int64_t x407 = 40681LL;
	volatile uint8_t x408 = UINT8_MAX;
	static int32_t t92 = 0;

	t92 = (x405<(x406-(x407%x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = 0U;
	int16_t x416 = -857;
	int32_t t93 = -420;

	t93 = (x413<(x414-(x415%x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x418 = INT32_MIN;
	uint32_t x419 = UINT32_MAX;
	volatile int32_t t94 = 63;

	t94 = (x417<(x418-(x419%x420)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = 1213LLU;
	uint16_t x422 = 29458U;
	int32_t x423 = 11653921;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t95 = 57;

	t95 = (x421<(x422-(x423%x424)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	static int32_t x426 = -1;
	volatile uint32_t x427 = 41U;
	int64_t x428 = 230998070LL;
	static volatile int32_t t96 = -3389;

	t96 = (x425<(x426-(x427%x428)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = UINT16_MAX;
	uint8_t x430 = 67U;
	volatile int16_t x431 = INT16_MAX;
	int16_t x432 = -8;
	volatile int32_t t97 = 941272;

	t97 = (x429<(x430-(x431%x432)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x433 = -1LL;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = 9U;
	uint32_t x436 = UINT32_MAX;
	int32_t t98 = 678;

	t98 = (x433<(x434-(x435%x436)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x437 = 1507U;
	uint32_t x438 = 21U;
	volatile uint16_t x439 = 14U;
	int16_t x440 = INT16_MIN;
	int32_t t99 = 22425161;

	t99 = (x437<(x438-(x439%x440)));

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

