#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = -99955314;
static volatile int32_t x20 = -1;
static int64_t x22 = INT64_MAX;
uint16_t x23 = 428U;
uint8_t x25 = 1U;
static volatile int64_t t6 = 129LL;
volatile uint32_t t7 = 1978552U;
static uint32_t t8 = 12U;
int64_t x42 = INT64_MAX;
int32_t x51 = INT32_MIN;
int16_t x53 = -1923;
int32_t x54 = -1;
volatile int64_t x63 = 60LL;
volatile int32_t x64 = INT32_MIN;
volatile int64_t t15 = 152765743058909LL;
int8_t x76 = INT8_MIN;
int16_t x85 = INT16_MIN;
uint16_t x92 = 180U;
int64_t x106 = INT64_MAX;
volatile int64_t x109 = INT64_MIN;
int64_t t23 = INT64_MIN;
volatile int8_t x118 = -1;
int32_t x122 = -1;
volatile int8_t x135 = INT8_MIN;
int8_t x137 = INT8_MIN;
uint32_t x139 = UINT32_MAX;
int64_t x143 = -1LL;
int16_t x145 = INT16_MIN;
static volatile int8_t x146 = 17;
int16_t x147 = INT16_MAX;
int64_t x151 = 5308680LL;
uint8_t x160 = 3U;
int64_t t33 = -1698151754526093422LL;
static volatile int16_t x166 = -150;
static int64_t t35 = -3220LL;
uint32_t t36 = 21U;
static uint64_t x184 = 17758031866LLU;
int64_t t40 = -238675751LL;
uint8_t x206 = 0U;
static int64_t x209 = INT64_MIN;
uint16_t x210 = UINT16_MAX;
static int32_t x216 = -1;
int8_t x221 = 1;
volatile uint32_t x224 = UINT32_MAX;
static int32_t x237 = INT32_MIN;
volatile int16_t x239 = 53;
int32_t x240 = 734;
volatile uint8_t x252 = UINT8_MAX;
volatile int32_t t55 = -818603;
volatile int16_t x257 = -1;
static volatile int32_t t57 = 3738;
static uint8_t x261 = 63U;
static int64_t x265 = 57444992394340189LL;
uint64_t t61 = 3LLU;
volatile uint64_t t62 = 927853239LLU;
int64_t x288 = INT64_MIN;
volatile uint64_t t63 = 34233343LLU;
int64_t x289 = INT64_MIN;
int64_t x290 = INT64_MIN;
int16_t x292 = INT16_MIN;
volatile int64_t t64 = INT64_MIN;
int32_t x301 = -603360;
int8_t x302 = -1;
int16_t x305 = -181;
uint64_t x308 = UINT64_MAX;
static int32_t x316 = -1;
uint64_t t69 = UINT64_MAX;
static int64_t x335 = INT64_MAX;
int8_t x336 = -1;
int8_t x337 = INT8_MIN;
int32_t t74 = -12306;
volatile int16_t x344 = -16;
static int64_t x345 = INT64_MIN;
uint32_t x347 = 50U;
uint8_t x349 = 34U;
static volatile int32_t t77 = -410404;
int64_t x354 = -1LL;
int32_t x356 = 824155280;
static int16_t x371 = 1;
volatile int8_t x373 = INT8_MIN;
int16_t x374 = INT16_MIN;
int16_t x385 = 0;
int64_t x387 = -116LL;
int8_t x395 = -1;
volatile uint64_t x406 = 3191101362750008LLU;
uint64_t t90 = 501872299872LLU;
uint8_t x409 = 13U;
volatile int64_t x418 = -1LL;
int8_t x420 = 48;
int64_t t93 = -15145833773974LL;
static int64_t t95 = 9447LL;
volatile int64_t t96 = -956LL;
int32_t x439 = INT32_MAX;
volatile int64_t t98 = -7859LL;
uint8_t x445 = UINT8_MAX;


void f0(void) {
	int8_t x1 = 0;
	volatile int8_t x2 = -1;
	volatile uint16_t x3 = 3U;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -477992;

	t0 = (x1&((x2/x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int8_t x6 = -12;
	static int32_t x7 = INT32_MIN;
	static uint16_t x8 = 6808U;
	volatile int64_t t1 = 176019154LL;

	t1 = (x5&((x6/x7)/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -4060;
	static volatile int64_t x10 = -1LL;
	int8_t x11 = INT8_MIN;
	volatile int64_t t2 = 268438421379977073LL;

	t2 = (x9&((x10/x11)/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = -1;
	static int16_t x15 = 780;
	uint8_t x16 = 86U;
	int32_t t3 = -474265;

	t3 = (x13&((x14/x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = INT8_MAX;
	int32_t t4 = -13990;

	t4 = (x17&((x18/x19)/x20));

	if (t4 != 258) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int16_t x24 = INT16_MAX;
	static int64_t t5 = 40616270027339153LL;

	t5 = (x21&((x22/x23)/x24));

	if (t5 != 241LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = 3;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;

	t6 = (x25&((x26/x27)/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 5801U;
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = 4976483;
	int16_t x32 = INT16_MIN;

	t7 = (x29&((x30/x31)/x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MIN;

	t8 = (x33&((x34/x35)/x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -296928;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MAX;
	static volatile int64_t t9 = 229727295767456LL;

	t9 = (x41&((x42/x43)/x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 14822940644LLU;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1;
	static int64_t x48 = INT64_MIN;
	volatile uint64_t t10 = 2096657LLU;

	t10 = (x45&((x46/x47)/x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1994457628LL;
	volatile int16_t x50 = INT16_MIN;
	volatile int8_t x52 = INT8_MIN;
	int64_t t11 = -875775834578LL;

	t11 = (x49&((x50/x51)/x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MIN;
	int64_t t12 = -18341936269284LL;

	t12 = (x53&((x54/x55)/x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 3674U;
	int64_t x58 = INT64_MIN;
	volatile uint32_t x59 = 2570803U;
	static volatile uint32_t x60 = 1024058U;
	static int64_t t13 = 883742598291431LL;

	t13 = (x57&((x58/x59)/x60));

	if (t13 != 2562LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -169752517147LL;
	int8_t x62 = 14;
	int64_t t14 = -247971993982872LL;

	t14 = (x61&((x62/x63)/x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -5;
	int64_t x66 = 54102LL;
	static int64_t x67 = -2071706638308371264LL;
	static uint8_t x68 = 7U;

	t15 = (x65&((x66/x67)/x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 1U;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = 1965096;
	static uint64_t t16 = 74768424LLU;

	t16 = (x69&((x70/x71)/x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MAX;
	int64_t x75 = 1LL;
	volatile int64_t t17 = 1313629692715LL;

	t17 = (x73&((x74/x75)/x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x82 = UINT64_MAX;
	uint16_t x83 = 3U;
	int8_t x84 = 3;
	volatile uint64_t t18 = 380326124914511999LLU;

	t18 = (x81&((x82/x83)/x84));

	if (t18 != 7281LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x86 = 77673657839335462LL;
	int64_t x87 = INT64_MAX;
	static int64_t x88 = INT64_MIN;
	static int64_t t19 = -62791250217LL;

	t19 = (x85&((x86/x87)/x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 1U;
	static uint32_t t20 = 15733U;

	t20 = (x89&((x90/x91)/x92));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 3U;
	volatile uint16_t x95 = 7316U;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = -13673;

	t21 = (x93&((x94/x95)/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MAX;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 6U;
	int64_t t22 = -800669597966LL;

	t22 = (x105&((x106/x107)/x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	volatile int32_t x112 = -1;

	t23 = (x109&((x110/x111)/x112));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	uint64_t t24 = 27806053948LLU;

	t24 = (x117&((x118/x119)/x120));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	volatile int64_t x123 = 238LL;
	int32_t x124 = -1;
	volatile int64_t t25 = 17786LL;

	t25 = (x121&((x122/x123)/x124));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = UINT16_MAX;
	static int64_t x126 = INT64_MIN;
	int8_t x127 = 12;
	volatile int32_t x128 = -1;
	static int64_t t26 = 165591884039LL;

	t26 = (x125&((x126/x127)/x128));

	if (t26 != 43690LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = 3;
	static uint64_t x131 = UINT64_MAX;
	int32_t x132 = 3589728;
	volatile uint64_t t27 = 7101438658328LLU;

	t27 = (x129&((x130/x131)/x132));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = 0;
	uint8_t x136 = 3U;
	int64_t t28 = 717036LL;

	t28 = (x133&((x134/x135)/x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x138 = INT16_MAX;
	int32_t x140 = -1;
	uint32_t t29 = 4435849U;

	t29 = (x137&((x138/x139)/x140));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x141 = -1;
	uint8_t x142 = 2U;
	int16_t x144 = -1;
	int64_t t30 = -7621087495881581LL;

	t30 = (x141&((x142/x143)/x144));

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x148 = INT16_MAX;
	static int32_t t31 = 76475179;

	t31 = (x145&((x146/x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	volatile int8_t x150 = 1;
	int16_t x152 = -1;
	volatile int64_t t32 = -389579LL;

	t32 = (x149&((x150/x151)/x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x157 = INT64_MIN;
	static uint8_t x158 = 0U;
	int8_t x159 = -1;

	t33 = (x157&((x158/x159)/x160));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MAX;
	int32_t x167 = 86;
	static uint64_t x168 = 1954515124979351LLU;
	volatile uint64_t t34 = 730LLU;

	t34 = (x165&((x166/x167)/x168));

	if (t34 != 9438LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = -1;
	static int32_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = -1;

	t35 = (x169&((x170/x171)/x172));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = -1;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 838809U;
	int32_t x176 = -1;

	t36 = (x173&((x174/x175)/x176));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = INT16_MIN;
	static volatile uint8_t x178 = 2U;
	static int32_t x179 = -1;
	static int16_t x180 = 25;
	volatile int32_t t37 = 1725410;

	t37 = (x177&((x178/x179)/x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x181 = 0U;
	int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MAX;
	volatile uint64_t t38 = 47124825LLU;

	t38 = (x181&((x182/x183)/x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t39 = 1325321107U;

	t39 = (x185&((x186/x187)/x188));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 2;
	int16_t x190 = INT16_MAX;
	int32_t x191 = -1;
	int64_t x192 = -1LL;

	t40 = (x189&((x190/x191)/x192));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = -1;
	int64_t x194 = INT64_MIN;
	volatile int32_t x195 = 445997;
	volatile int64_t x196 = INT64_MIN;
	int64_t t41 = -2036577571557796LL;

	t41 = (x193&((x194/x195)/x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = 27U;
	int8_t x198 = -1;
	volatile uint32_t x199 = 46U;
	volatile int64_t x200 = INT64_MIN;
	int64_t t42 = -1545LL;

	t42 = (x197&((x198/x199)/x200));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 473U;
	volatile int32_t x204 = 130426;
	uint64_t t43 = 132904768120349LLU;

	t43 = (x201&((x202/x203)/x204));

	if (t43 != 298500227072LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = -1LL;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = INT32_MAX;
	volatile int64_t t44 = -2016173LL;

	t44 = (x205&((x206/x207)/x208));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x211 = -56738855034598LL;
	uint16_t x212 = 7426U;
	volatile int64_t t45 = 30248LL;

	t45 = (x209&((x210/x211)/x212));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int16_t x214 = -102;
	int8_t x215 = INT8_MIN;
	uint32_t t46 = 54628678U;

	t46 = (x213&((x214/x215)/x216));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x217 = UINT16_MAX;
	volatile uint16_t x218 = 5U;
	static int16_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int64_t t47 = 455677267625522LL;

	t47 = (x217&((x218/x219)/x220));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x222 = INT32_MAX;
	static int16_t x223 = INT16_MAX;
	uint32_t t48 = 6117249U;

	t48 = (x221&((x222/x223)/x224));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -1;
	uint32_t x226 = 3803783U;
	int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;
	int64_t t49 = -56625LL;

	t49 = (x225&((x226/x227)/x228));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = -314;
	int32_t x230 = -3962653;
	int64_t x231 = -85577LL;
	static volatile int16_t x232 = INT16_MIN;
	int64_t t50 = -126648369855580LL;

	t50 = (x229&((x230/x231)/x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	static int16_t x234 = -1;
	int32_t x235 = INT32_MAX;
	int16_t x236 = -1;
	volatile int32_t t51 = -192;

	t51 = (x233&((x234/x235)/x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x238 = INT16_MIN;
	int32_t t52 = -174004411;

	t52 = (x237&((x238/x239)/x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MAX;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = -405565407867814815LL;
	volatile int64_t t53 = -1584279295569102007LL;

	t53 = (x241&((x242/x243)/x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 24U;
	int32_t x246 = -157278959;
	int32_t x247 = INT32_MIN;
	static int8_t x248 = 59;
	volatile int32_t t54 = 1;

	t54 = (x245&((x246/x247)/x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	static uint8_t x250 = 4U;
	int16_t x251 = INT16_MIN;

	t55 = (x249&((x250/x251)/x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = -17350942;
	uint8_t x254 = 11U;
	uint64_t x255 = 314872961LLU;
	static uint16_t x256 = UINT16_MAX;
	uint64_t t56 = 35707869LLU;

	t56 = (x253&((x254/x255)/x256));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x258 = -1;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 237U;

	t57 = (x257&((x258/x259)/x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x262 = -6466379111LL;
	int32_t x263 = -1;
	int8_t x264 = INT8_MIN;
	static volatile int64_t t58 = 371193LL;

	t58 = (x261&((x262/x263)/x264));

	if (t58 != 6LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x266 = -1;
	int32_t x267 = 372;
	int64_t x268 = -3923LL;
	volatile int64_t t59 = 52694745LL;

	t59 = (x265&((x266/x267)/x268));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	volatile int8_t x270 = INT8_MAX;
	int8_t x271 = 1;
	int32_t x272 = -1;
	int32_t t60 = -1;

	t60 = (x269&((x270/x271)/x272));

	if (t60 != 32641) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = -82;
	static int64_t x278 = INT64_MAX;
	int64_t x279 = -1LL;
	uint64_t x280 = UINT64_MAX;

	t61 = (x277&((x278/x279)/x280));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = -253029015;

	t62 = (x281&((x282/x283)/x284));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 4761549LLU;
	int16_t x286 = -1;
	int32_t x287 = INT32_MIN;

	t63 = (x285&((x286/x287)/x288));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x291 = INT16_MIN;

	t64 = (x289&((x290/x291)/x292));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;
	volatile int64_t t65 = 151587601289846LL;

	t65 = (x297&((x298/x299)/x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x303 = 21;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t66 = -11668702;

	t66 = (x301&((x302/x303)/x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = -1LL;
	int8_t x307 = INT8_MIN;
	uint64_t t67 = 594587937LLU;

	t67 = (x305&((x306/x307)/x308));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x309 = -30;
	static int16_t x310 = -1;
	int16_t x311 = -1;
	static uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t68 = 65101210U;

	t68 = (x309&((x310/x311)/x312));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;

	t69 = (x313&((x314/x315)/x316));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = 23158LL;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = -1LL;
	volatile int64_t t70 = -1LL;

	t70 = (x317&((x318/x319)/x320));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 28576251U;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = INT8_MAX;
	static int32_t x324 = INT32_MAX;
	uint32_t t71 = 2U;

	t71 = (x321&((x322/x323)/x324));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = -1;
	int32_t x331 = -509;
	int64_t x332 = INT64_MIN;
	int64_t t72 = 13420912811445115LL;

	t72 = (x329&((x330/x331)/x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = -977LL;
	static uint8_t x334 = 52U;
	volatile int64_t t73 = 29852008LL;

	t73 = (x333&((x334/x335)/x336));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x338 = -1;
	static volatile uint16_t x339 = 21U;
	int32_t x340 = INT32_MIN;

	t74 = (x337&((x338/x339)/x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = UINT8_MAX;
	static int8_t x343 = INT8_MAX;
	int32_t t75 = -1118;

	t75 = (x341&((x342/x343)/x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x346 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	static volatile int64_t t76 = INT64_MIN;

	t76 = (x345&((x346/x347)/x348));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x350 = 7U;
	static int16_t x351 = INT16_MAX;
	static int32_t x352 = INT32_MAX;

	t77 = (x349&((x350/x351)/x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = 1;
	int16_t x355 = 9525;
	int64_t t78 = -13559956075435LL;

	t78 = (x353&((x354/x355)/x356));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = -1;
	int64_t x363 = INT64_MIN;
	static volatile uint32_t x364 = UINT32_MAX;
	int64_t t79 = 337503284635LL;

	t79 = (x361&((x362/x363)/x364));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = INT8_MIN;
	uint8_t x366 = 14U;
	int64_t x367 = INT64_MIN;
	static uint8_t x368 = UINT8_MAX;
	volatile int64_t t80 = 2761LL;

	t80 = (x365&((x366/x367)/x368));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = -1;
	static volatile int32_t x370 = -1;
	int32_t x372 = 61;
	static int32_t t81 = 13829751;

	t81 = (x369&((x370/x371)/x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x375 = INT64_MIN;
	uint8_t x376 = UINT8_MAX;
	int64_t t82 = 17431064LL;

	t82 = (x373&((x374/x375)/x376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x377 = 1373309782LLU;
	volatile int64_t x378 = 14466795307LL;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = 5U;
	volatile uint64_t t83 = 182784918398LLU;

	t83 = (x377&((x378/x379)/x380));

	if (t83 != 1373242134LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x381 = INT64_MAX;
	int32_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	static int8_t x384 = 1;
	volatile int64_t t84 = 1484880LL;

	t84 = (x381&((x382/x383)/x384));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x386 = INT64_MIN;
	int32_t x388 = INT32_MAX;
	volatile int64_t t85 = -63007360646254LL;

	t85 = (x385&((x386/x387)/x388));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x389 = INT32_MAX;
	int32_t x390 = -1;
	int16_t x391 = -1;
	volatile int32_t x392 = 509371774;
	int32_t t86 = 3;

	t86 = (x389&((x390/x391)/x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 8U;
	int16_t x396 = INT16_MIN;
	int32_t t87 = -2;

	t87 = (x393&((x394/x395)/x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = 8;
	static uint64_t x398 = 196202638150818LLU;
	int16_t x399 = -315;
	static int16_t x400 = INT16_MAX;
	volatile uint64_t t88 = 303032771085011862LLU;

	t88 = (x397&((x398/x399)/x400));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x401 = 102U;
	static uint64_t x402 = UINT64_MAX;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t89 = 1588631088LLU;

	t89 = (x401&((x402/x403)/x404));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x405 = 1369211853620897LLU;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;

	t90 = (x405&((x406/x407)/x408));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x410 = INT8_MIN;
	uint32_t x411 = 5715461U;
	uint64_t x412 = 117274LLU;
	uint64_t t91 = 162654LLU;

	t91 = (x409&((x410/x411)/x412));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MAX;
	int8_t x414 = 1;
	int32_t x415 = -1;
	int8_t x416 = INT8_MAX;
	int64_t t92 = 139235151LL;

	t92 = (x413&((x414/x415)/x416));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = -295463121188714LL;
	int32_t x419 = INT32_MIN;

	t93 = (x417&((x418/x419)/x420));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MIN;
	static uint64_t x422 = 12LLU;
	int64_t x423 = 708205912008223078LL;
	int8_t x424 = INT8_MIN;
	static uint64_t t94 = 1281694261185LLU;

	t94 = (x421&((x422/x423)/x424));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = INT64_MIN;
	static int64_t x431 = INT64_MIN;
	uint16_t x432 = UINT16_MAX;

	t95 = (x429&((x430/x431)/x432));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x433 = UINT16_MAX;
	int32_t x434 = INT32_MIN;
	static int64_t x435 = -4149999681799799LL;
	int64_t x436 = INT64_MIN;

	t96 = (x433&((x434/x435)/x436));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x437 = INT32_MIN;
	static int32_t x438 = -1;
	volatile uint8_t x440 = UINT8_MAX;
	int32_t t97 = 94268195;

	t97 = (x437&((x438/x439)/x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = -8438;
	int8_t x442 = 0;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MAX;

	t98 = (x441&((x442/x443)/x444));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x446 = 681U;
	uint32_t x447 = 2114U;
	int16_t x448 = -431;
	volatile uint32_t t99 = 103314659U;

	t99 = (x445&((x446/x447)/x448));

	if (t99 != 0U) { NG(); } else { ; }
	
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

