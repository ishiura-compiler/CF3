#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 26U;
int16_t x13 = INT16_MIN;
static volatile uint16_t x21 = 7U;
volatile uint16_t x23 = UINT16_MAX;
uint64_t x25 = UINT64_MAX;
int16_t x31 = INT16_MIN;
int16_t x37 = -53;
uint8_t x38 = 3U;
static volatile int8_t x39 = -1;
static uint32_t x44 = 1865U;
uint32_t x49 = UINT32_MAX;
int8_t x61 = INT8_MAX;
int32_t x62 = 186850763;
int64_t x71 = -7736813716214020LL;
volatile int64_t x75 = INT64_MIN;
static int16_t x88 = -1;
int32_t t17 = 1;
volatile int8_t x92 = INT8_MIN;
volatile int64_t x95 = -636491LL;
static uint16_t x99 = 11U;
int64_t x103 = -1LL;
int16_t x108 = 81;
volatile int32_t t22 = 18172317;
static int8_t x112 = 59;
static int8_t x117 = INT8_MIN;
static uint8_t x118 = 80U;
volatile int32_t x122 = INT32_MIN;
int32_t x135 = -1;
int32_t x136 = INT32_MIN;
static uint64_t x144 = 249495420LLU;
int32_t t30 = 50289371;
uint32_t x146 = 163U;
uint8_t x147 = UINT8_MAX;
volatile int32_t x152 = -3538;
int32_t t32 = 1;
volatile int32_t t35 = -12570;
volatile int32_t t36 = 58666534;
int8_t x183 = -58;
int32_t t40 = -125;
volatile int32_t t42 = 31149733;
uint64_t x198 = UINT64_MAX;
static int32_t t43 = 5;
uint32_t x203 = UINT32_MAX;
int16_t x219 = 16;
static int32_t x227 = -1;
uint8_t x228 = UINT8_MAX;
static int8_t x233 = INT8_MAX;
int32_t x237 = INT32_MIN;
static volatile int32_t t53 = -43;
int64_t x249 = -982836066LL;
int32_t t54 = 1;
uint64_t x256 = UINT64_MAX;
static int16_t x257 = -14;
uint32_t x265 = UINT32_MAX;
int64_t x267 = INT64_MAX;
int8_t x268 = -1;
static int64_t x269 = 86535LL;
uint16_t x271 = 9U;
int32_t t59 = 641;
static int16_t x274 = INT16_MIN;
volatile int32_t t62 = 409749;
int32_t x290 = INT32_MIN;
uint64_t x295 = UINT64_MAX;
uint32_t x301 = 11358660U;
uint32_t x307 = UINT32_MAX;
int64_t x308 = INT64_MIN;
int8_t x311 = -1;
volatile int32_t x323 = INT32_MIN;
uint32_t x325 = 354U;
int8_t x336 = INT8_MIN;
int8_t x342 = 0;
int32_t t79 = -2;
uint64_t x366 = 2LLU;
static int32_t t81 = 8828185;
int16_t x370 = -1;
int8_t x372 = -1;
static uint16_t x374 = UINT16_MAX;
volatile uint8_t x375 = UINT8_MAX;
volatile int8_t x376 = INT8_MAX;
uint32_t x378 = 6438693U;
volatile int32_t t86 = -8872563;
int32_t x392 = -1;
static uint64_t x394 = UINT64_MAX;
int64_t x398 = -1LL;
static uint8_t x401 = 45U;
static int8_t x420 = -1;
static volatile int32_t t94 = -3084330;
int64_t x436 = 197676614LL;


void f0(void) {
	uint64_t x1 = 1051LLU;
	int8_t x3 = 1;
	uint16_t x4 = 3108U;
	volatile int32_t t0 = -20;

	t0 = (x1<((x2/x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2847U;
	volatile int32_t x6 = INT32_MIN;
	static volatile int32_t x7 = -52293;
	volatile int8_t x8 = -25;
	volatile int32_t t1 = -36656180;

	t1 = (x5<((x6/x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 20U;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -36349445;

	t2 = (x9<((x10/x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = 166;

	t3 = (x13<((x14/x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = -7262928;

	t4 = (x21<((x22/x23)/x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MAX;
	uint32_t x27 = UINT32_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = 273744149;

	t5 = (x25<((x26/x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = 3;
	int8_t x30 = INT8_MIN;
	static int32_t x32 = -1;
	volatile int32_t t6 = -16629056;

	t6 = (x29<((x30/x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int8_t x34 = -7;
	static int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MIN;
	int32_t t7 = -22;

	t7 = (x33<((x34/x35)/x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -43092;

	t8 = (x37<((x38/x39)/x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 2U;
	int32_t x42 = INT32_MAX;
	uint32_t x43 = 86U;
	volatile int32_t t9 = -40024;

	t9 = (x41<((x42/x43)/x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 2936031U;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = 15;
	uint64_t x48 = 4310592105LLU;
	volatile int32_t t10 = 0;

	t10 = (x45<((x46/x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = 12U;
	static volatile int32_t x51 = INT32_MIN;
	static volatile uint8_t x52 = 1U;
	int32_t t11 = 3622822;

	t11 = (x49<((x50/x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x63 = INT16_MIN;
	volatile int8_t x64 = INT8_MIN;
	static volatile int32_t t12 = 419338230;

	t12 = (x61<((x62/x63)/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 105U;
	uint16_t x66 = 1U;
	uint16_t x67 = 21616U;
	uint64_t x68 = 6LLU;
	volatile int32_t t13 = 1473;

	t13 = (x65<((x66/x67)/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int32_t x70 = -1;
	int8_t x72 = INT8_MIN;
	int32_t t14 = -27;

	t14 = (x69<((x70/x71)/x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	uint32_t x76 = 91136218U;
	static int32_t t15 = -3;

	t15 = (x73<((x74/x75)/x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x81 = 49U;
	static uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = INT32_MAX;
	uint32_t x84 = 723002437U;
	static int32_t t16 = 516236224;

	t16 = (x81<((x82/x83)/x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -3260999173488LL;
	uint8_t x86 = 16U;
	int32_t x87 = INT32_MAX;

	t17 = (x85<((x86/x87)/x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = -1;
	static uint8_t x90 = 10U;
	uint64_t x91 = 20417461246LLU;
	static volatile int32_t t18 = 658087653;

	t18 = (x89<((x90/x91)/x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MAX;
	uint16_t x94 = 27U;
	int8_t x96 = INT8_MAX;
	volatile int32_t t19 = -761976;

	t19 = (x93<((x94/x95)/x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	uint32_t x100 = 198087U;
	static volatile int32_t t20 = 10511;

	t20 = (x97<((x98/x99)/x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = 514206492803240LLU;
	uint32_t x104 = 2266898U;
	volatile int32_t t21 = 49732;

	t21 = (x101<((x102/x103)/x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = 381;
	int32_t x107 = INT32_MIN;

	t22 = (x105<((x106/x107)/x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 9715947LL;
	uint8_t x110 = 24U;
	uint64_t x111 = 133LLU;
	int32_t t23 = -99591;

	t23 = (x109<((x110/x111)/x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 6U;
	static int16_t x114 = INT16_MIN;
	volatile int64_t x115 = -1LL;
	int16_t x116 = INT16_MAX;
	volatile int32_t t24 = 29;

	t24 = (x113<((x114/x115)/x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MAX;
	int32_t t25 = -3051290;

	t25 = (x117<((x118/x119)/x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 103202650113LLU;
	int32_t x123 = INT32_MAX;
	uint32_t x124 = 52174846U;
	volatile int32_t t26 = -154;

	t26 = (x121<((x122/x123)/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 7556802;
	int32_t x130 = INT32_MIN;
	volatile int8_t x131 = 1;
	int64_t x132 = INT64_MIN;
	volatile int32_t t27 = -3;

	t27 = (x129<((x130/x131)/x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 103U;
	static volatile int32_t t28 = -581806;

	t28 = (x133<((x134/x135)/x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 469068LLU;
	int32_t x138 = INT32_MIN;
	static int64_t x139 = -1LL;
	int64_t x140 = -109LL;
	volatile int32_t t29 = -41338924;

	t29 = (x137<((x138/x139)/x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 57U;
	static int16_t x142 = INT16_MIN;
	volatile uint16_t x143 = UINT16_MAX;

	t30 = (x141<((x142/x143)/x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	static int32_t x148 = INT32_MIN;
	int32_t t31 = -31026;

	t31 = (x145<((x146/x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MAX;
	int64_t x151 = 1810699315611LL;

	t32 = (x149<((x150/x151)/x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 114726098LL;
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = 16194U;
	int32_t x156 = INT32_MIN;
	int32_t t33 = -1;

	t33 = (x153<((x154/x155)/x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	static uint32_t x159 = 1322321U;
	int16_t x160 = -5258;
	static volatile int32_t t34 = 50183;

	t34 = (x157<((x158/x159)/x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = 4121;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MAX;

	t35 = (x161<((x162/x163)/x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = UINT16_MAX;
	static uint32_t x170 = UINT32_MAX;
	volatile uint64_t x171 = 157179389LLU;
	uint32_t x172 = UINT32_MAX;

	t36 = (x169<((x170/x171)/x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 58345554LLU;
	static uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t37 = -41;

	t37 = (x173<((x174/x175)/x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	uint16_t x179 = 1U;
	int16_t x180 = -75;
	volatile int32_t t38 = 1;

	t38 = (x177<((x178/x179)/x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MAX;
	uint64_t x182 = 16389667195411LLU;
	volatile int8_t x184 = INT8_MIN;
	int32_t t39 = -17189;

	t39 = (x181<((x182/x183)/x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 17U;
	static uint16_t x186 = 8U;
	uint16_t x187 = UINT16_MAX;
	static int64_t x188 = INT64_MIN;

	t40 = (x185<((x186/x187)/x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 7U;
	static int32_t x190 = INT32_MAX;
	int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t41 = 11617;

	t41 = (x189<((x190/x191)/x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x193 = 26135U;
	uint64_t x194 = 431584678286153LLU;
	int8_t x195 = 50;
	volatile uint64_t x196 = 393869485853451589LLU;

	t42 = (x193<((x194/x195)/x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -1LL;
	static int16_t x199 = -1;
	int16_t x200 = INT16_MAX;

	t43 = (x197<((x198/x199)/x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = INT8_MAX;
	int16_t x204 = -4999;
	volatile int32_t t44 = 13;

	t44 = (x201<((x202/x203)/x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = -1;
	static int16_t x206 = 31;
	int8_t x207 = INT8_MAX;
	static uint32_t x208 = 3700500U;
	volatile int32_t t45 = 186880;

	t45 = (x205<((x206/x207)/x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 200LLU;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	static int64_t x212 = INT64_MAX;
	static volatile int32_t t46 = 3;

	t46 = (x209<((x210/x211)/x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x213 = INT16_MAX;
	int32_t x214 = 914311003;
	volatile int8_t x215 = INT8_MAX;
	int8_t x216 = -3;
	volatile int32_t t47 = 9276;

	t47 = (x213<((x214/x215)/x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = UINT8_MAX;
	int32_t x218 = INT32_MAX;
	int32_t x220 = -1;
	int32_t t48 = 1;

	t48 = (x217<((x218/x219)/x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MAX;
	volatile uint8_t x226 = UINT8_MAX;
	volatile int32_t t49 = -766;

	t49 = (x225<((x226/x227)/x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	static int64_t x230 = INT64_MIN;
	int64_t x231 = -516LL;
	uint32_t x232 = UINT32_MAX;
	int32_t t50 = 399284270;

	t50 = (x229<((x230/x231)/x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x234 = INT64_MAX;
	int16_t x235 = 23;
	uint16_t x236 = 3359U;
	static int32_t t51 = 3;

	t51 = (x233<((x234/x235)/x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x238 = -3252991271LL;
	uint8_t x239 = 2U;
	static volatile uint16_t x240 = UINT16_MAX;
	static volatile int32_t t52 = 94953394;

	t52 = (x237<((x238/x239)/x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -4;
	static uint32_t x242 = 25416493U;
	volatile int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;

	t53 = (x241<((x242/x243)/x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x250 = INT32_MAX;
	static int64_t x251 = INT64_MIN;
	int32_t x252 = 15;

	t54 = (x249<((x250/x251)/x252));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = 26704818LLU;
	static volatile uint8_t x255 = 1U;
	static int32_t t55 = -771;

	t55 = (x253<((x254/x255)/x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x258 = 8496928752LL;
	static volatile int8_t x259 = -2;
	volatile uint32_t x260 = 572421079U;
	volatile int32_t t56 = -27;

	t56 = (x257<((x258/x259)/x260));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = -1;
	uint16_t x262 = 10755U;
	int8_t x263 = 1;
	int32_t x264 = INT32_MAX;
	int32_t t57 = 85248402;

	t57 = (x261<((x262/x263)/x264));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x266 = UINT8_MAX;
	int32_t t58 = -132917266;

	t58 = (x265<((x266/x267)/x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x270 = 1265763;
	int64_t x272 = -12958918730192LL;

	t59 = (x269<((x270/x271)/x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x273 = 118117786448346LLU;
	uint8_t x275 = 3U;
	uint8_t x276 = 19U;
	int32_t t60 = 1112;

	t60 = (x273<((x274/x275)/x276));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x277 = INT32_MIN;
	static volatile uint64_t x278 = 6343270624LLU;
	uint64_t x279 = 84LLU;
	int8_t x280 = -1;
	volatile int32_t t61 = -5;

	t61 = (x277<((x278/x279)/x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 3747;
	static int32_t x282 = 55730;
	int32_t x283 = -1;
	static uint8_t x284 = 1U;

	t62 = (x281<((x282/x283)/x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 1;
	static volatile int8_t x286 = -1;
	uint64_t x287 = 31434933LLU;
	static int64_t x288 = -3969352948087LL;
	static int32_t t63 = -3572217;

	t63 = (x285<((x286/x287)/x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MAX;
	int32_t x291 = INT32_MAX;
	volatile int16_t x292 = -1;
	static int32_t t64 = 4802;

	t64 = (x289<((x290/x291)/x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -4;
	int16_t x294 = INT16_MIN;
	static int16_t x296 = -1;
	int32_t t65 = 6161;

	t65 = (x293<((x294/x295)/x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = 16;
	volatile int8_t x299 = 1;
	static int16_t x300 = -1115;
	volatile int32_t t66 = 2836;

	t66 = (x297<((x298/x299)/x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x302 = INT8_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t67 = -7050;

	t67 = (x301<((x302/x303)/x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = 2U;
	int32_t x306 = INT32_MIN;
	volatile int32_t t68 = 45;

	t68 = (x305<((x306/x307)/x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x309 = 8242645U;
	static int8_t x310 = INT8_MAX;
	volatile uint32_t x312 = 26488099U;
	volatile int32_t t69 = 4401;

	t69 = (x309<((x310/x311)/x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = 3420U;
	static uint64_t x316 = 73928481661965LLU;
	volatile int32_t t70 = 26;

	t70 = (x313<((x314/x315)/x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MIN;
	int32_t x319 = 267;
	int64_t x320 = -77998034986428LL;
	volatile int32_t t71 = -185;

	t71 = (x317<((x318/x319)/x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x321 = 1685U;
	int64_t x322 = INT64_MAX;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t72 = 2826;

	t72 = (x321<((x322/x323)/x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x326 = -1;
	volatile int32_t x327 = INT32_MAX;
	volatile int32_t x328 = -1;
	int32_t t73 = 1671787;

	t73 = (x325<((x326/x327)/x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int16_t x330 = -1;
	volatile int8_t x331 = INT8_MAX;
	int64_t x332 = 14126661178737LL;
	static volatile int32_t t74 = -36;

	t74 = (x329<((x330/x331)/x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -3158380042270801321LL;
	int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	static int32_t t75 = 0;

	t75 = (x333<((x334/x335)/x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = 28;
	int32_t x343 = -1;
	int8_t x344 = 47;
	volatile int32_t t76 = 1;

	t76 = (x341<((x342/x343)/x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MAX;
	uint64_t x347 = 1791241445880460LLU;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t77 = 72247;

	t77 = (x345<((x346/x347)/x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	int32_t t78 = -91303591;

	t78 = (x349<((x350/x351)/x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = UINT16_MAX;
	static int64_t x358 = INT64_MIN;
	uint8_t x359 = UINT8_MAX;
	volatile int16_t x360 = INT16_MIN;

	t79 = (x357<((x358/x359)/x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MIN;
	volatile int32_t x362 = -1;
	int64_t x363 = -1LL;
	int16_t x364 = INT16_MAX;
	int32_t t80 = -1;

	t80 = (x361<((x362/x363)/x364));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x367 = 986455737U;
	uint64_t x368 = 777125293147301LLU;

	t81 = (x365<((x366/x367)/x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = 34U;
	static int16_t x371 = INT16_MIN;
	volatile int32_t t82 = -12815;

	t82 = (x369<((x370/x371)/x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x373 = INT32_MIN;
	static volatile int32_t t83 = 17080050;

	t83 = (x373<((x374/x375)/x376));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x377 = -1;
	volatile uint8_t x379 = 3U;
	static uint64_t x380 = 47904446606370219LLU;
	volatile int32_t t84 = -244;

	t84 = (x377<((x378/x379)/x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = 35;
	uint8_t x382 = 64U;
	int64_t x383 = INT64_MIN;
	int16_t x384 = -2;
	volatile int32_t t85 = 282881035;

	t85 = (x381<((x382/x383)/x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x385 = UINT16_MAX;
	uint16_t x386 = 1U;
	uint16_t x387 = 7U;
	int8_t x388 = INT8_MAX;

	t86 = (x385<((x386/x387)/x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	uint8_t x390 = 1U;
	uint32_t x391 = 1243313U;
	int32_t t87 = -955467;

	t87 = (x389<((x390/x391)/x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x393 = INT32_MIN;
	uint64_t x395 = 1233721167299LLU;
	int8_t x396 = -4;
	int32_t t88 = -101073448;

	t88 = (x393<((x394/x395)/x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t89 = 61821;

	t89 = (x397<((x398/x399)/x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x402 = UINT32_MAX;
	static int32_t x403 = INT32_MIN;
	int16_t x404 = -1;
	volatile int32_t t90 = -644419;

	t90 = (x401<((x402/x403)/x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x405 = UINT16_MAX;
	static volatile uint8_t x406 = 98U;
	uint16_t x407 = 16406U;
	int16_t x408 = 53;
	int32_t t91 = -3924;

	t91 = (x405<((x406/x407)/x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x413 = 2LL;
	volatile int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MIN;
	int32_t t92 = -761;

	t92 = (x413<((x414/x415)/x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x417 = 2U;
	uint16_t x418 = 1U;
	uint64_t x419 = UINT64_MAX;
	static volatile int32_t t93 = -1;

	t93 = (x417<((x418/x419)/x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x422 = 5U;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;

	t94 = (x421<((x422/x423)/x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MAX;
	volatile uint64_t x426 = 164696637094LLU;
	static int32_t x427 = INT32_MIN;
	static int64_t x428 = -1LL;
	int32_t t95 = -7651;

	t95 = (x425<((x426/x427)/x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	volatile int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	int32_t t96 = -223030;

	t96 = (x429<((x430/x431)/x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x433 = UINT8_MAX;
	static int16_t x434 = INT16_MAX;
	volatile uint16_t x435 = UINT16_MAX;
	int32_t t97 = 17319004;

	t97 = (x433<((x434/x435)/x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 45U;
	volatile int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MAX;
	uint32_t x440 = 22773U;
	int32_t t98 = 132047;

	t98 = (x437<((x438/x439)/x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x441 = 17LLU;
	int32_t x442 = INT32_MIN;
	uint32_t x443 = 35U;
	int8_t x444 = INT8_MIN;
	int32_t t99 = -6284861;

	t99 = (x441<((x442/x443)/x444));

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

