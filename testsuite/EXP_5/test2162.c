#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = UINT16_MAX;
static uint16_t x4 = 2U;
uint16_t x9 = 4125U;
volatile uint64_t t2 = 117965095747LLU;
volatile int32_t t3 = 2;
int32_t t4 = INT32_MIN;
volatile uint64_t t7 = 13467881454LLU;
int64_t x55 = INT64_MIN;
static int32_t t10 = 4783430;
volatile uint64_t t11 = 19899955876LLU;
static uint16_t x76 = 25U;
uint16_t x84 = UINT16_MAX;
int8_t x93 = 1;
uint64_t x97 = UINT64_MAX;
int64_t x99 = 4LL;
volatile uint64_t t18 = 8380840LLU;
volatile uint64_t t19 = 6LLU;
static volatile int64_t t20 = -136433347277809488LL;
uint64_t x134 = 1404828629582618109LLU;
static int8_t x136 = INT8_MIN;
int32_t x148 = INT32_MAX;
int64_t t25 = -122870100111LL;
int64_t t26 = -1537LL;
static int16_t x169 = -1;
static uint16_t x179 = 16525U;
volatile int32_t x180 = INT32_MAX;
static uint64_t x186 = 6LLU;
uint64_t x188 = UINT64_MAX;
static int32_t x191 = INT32_MIN;
volatile int8_t x194 = -9;
int64_t x214 = INT64_MIN;
int64_t x217 = INT64_MIN;
static volatile uint8_t x227 = 114U;
volatile uint8_t x228 = 3U;
int16_t x230 = INT16_MAX;
int64_t x235 = 16138LL;
int16_t x242 = INT16_MAX;
volatile uint64_t t43 = 481929178393LLU;
volatile int32_t x245 = INT32_MAX;
uint64_t t44 = 2194155894801567LLU;
volatile int32_t x257 = -1;
static uint32_t x262 = 1305U;
int64_t x263 = INT64_MIN;
uint8_t x265 = 1U;
uint8_t x270 = 4U;
static volatile int64_t t51 = 8862507935LL;
int64_t x301 = INT64_MIN;
volatile int32_t x310 = INT32_MAX;
static int8_t x316 = INT8_MIN;
int64_t x325 = INT64_MIN;
uint8_t x326 = 75U;
volatile uint64_t t60 = 34204147662813131LLU;
int64_t x329 = 552900052246LL;
int16_t x330 = 2;
static int64_t x331 = INT64_MIN;
uint64_t t62 = 39704313LLU;
int64_t x345 = -1467642425682LL;
int64_t t65 = -250LL;
int16_t x358 = INT16_MAX;
uint32_t t67 = 99U;
uint16_t x370 = UINT16_MAX;
uint8_t x374 = 25U;
static uint64_t x384 = UINT64_MAX;
static volatile uint16_t x390 = UINT16_MAX;
int32_t x397 = INT32_MIN;
static int8_t x410 = INT8_MIN;
int16_t x412 = -28;
int8_t x414 = INT8_MIN;
static volatile uint32_t t79 = 209502021U;
volatile uint16_t x432 = 8717U;
uint16_t x443 = 24602U;
static volatile int64_t t83 = -90LL;
static int32_t t84 = 5;
int32_t x454 = -1;
uint8_t x455 = 12U;
int8_t x462 = 1;
int16_t x480 = -1;
static int64_t t90 = -795344LL;
volatile int16_t x486 = 355;
int64_t x488 = -10LL;
int64_t t91 = 13LL;
uint32_t x489 = 5900U;
int16_t x491 = INT16_MAX;
int32_t x492 = 186007;
uint16_t x495 = 803U;
int16_t x505 = INT16_MAX;
int16_t x506 = -3494;
static int16_t x507 = 0;
static int8_t x508 = -1;
int32_t t96 = 5935;
uint16_t x512 = 390U;
volatile uint32_t x516 = UINT32_MAX;
int64_t x523 = -1LL;


void f0(void) {
	volatile uint32_t x2 = 797307U;
	static int16_t x3 = INT16_MIN;
	static uint32_t t0 = 10073U;

	t0 = (x1/((x2^x3)&x4));

	if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = -8;
	uint32_t t1 = 75U;

	t1 = (x9/((x10^x11)&x12));

	if (t1 != 34U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = 1;
	static volatile int64_t x23 = -1088057620687975LL;
	uint64_t x24 = UINT64_MAX;

	t2 = (x21/((x22^x23)&x24));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MIN;
	volatile uint16_t x26 = 617U;
	uint8_t x27 = UINT8_MAX;
	volatile uint8_t x28 = UINT8_MAX;

	t3 = (x25/((x26^x27)&x28));

	if (t3 != -218) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = 2;
	int8_t x35 = INT8_MAX;
	static uint8_t x36 = 3U;

	t4 = (x33/((x34^x35)&x36));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 37U;
	int64_t x42 = INT64_MAX;
	static volatile uint32_t x43 = 428975U;
	int32_t x44 = INT32_MAX;
	volatile int64_t t5 = -7726183LL;

	t5 = (x41/((x42^x43)&x44));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = 71;
	int16_t x47 = INT16_MAX;
	static int8_t x48 = -6;
	int32_t t6 = 181162917;

	t6 = (x45/((x46^x47)&x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = 0;
	static uint32_t x50 = 31U;
	int16_t x51 = -8404;
	uint64_t x52 = 16LLU;

	t7 = (x49/((x50^x51)&x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 31897501632967078LLU;
	uint64_t x54 = UINT64_MAX;
	static volatile uint8_t x56 = 1U;
	volatile uint64_t t8 = 17058151832LLU;

	t8 = (x53/((x54^x55)&x56));

	if (t8 != 31897501632967078LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = -1;
	static int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MAX;
	uint32_t x60 = 641072U;
	static volatile uint32_t t9 = 38U;

	t9 = (x57/((x58^x59)&x60));

	if (t9 != 233016U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x61 = INT8_MIN;
	static int32_t x62 = 167066;
	static uint16_t x63 = 1833U;
	int16_t x64 = INT16_MIN;

	t10 = (x61/((x62^x63)&x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x65 = -8121349LL;
	uint64_t x66 = 23806918LLU;
	int16_t x67 = INT16_MIN;
	static int16_t x68 = -868;

	t11 = (x65/((x66^x67)&x68));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	static int32_t x74 = 320719;
	static int16_t x75 = -1;
	int32_t t12 = 47263728;

	t12 = (x73/((x74^x75)&x76));

	if (t12 != -2048) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int64_t t13 = -4494112195LL;

	t13 = (x77/((x78^x79)&x80));

	if (t13 != -281483566907400LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x81 = -1;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 59093U;
	volatile int64_t t14 = -56400481145LL;

	t14 = (x81/((x82^x83)&x84));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x94 = INT64_MAX;
	static int8_t x95 = -1;
	static int16_t x96 = -18;
	volatile int64_t t15 = 428949098566LL;

	t15 = (x93/((x94^x95)&x96));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x98 = INT8_MAX;
	static uint16_t x100 = UINT16_MAX;
	static uint64_t t16 = 46634LLU;

	t16 = (x97/((x98^x99)&x100));

	if (t16 != 149973529054549200LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 170031335U;
	static volatile int8_t x108 = INT8_MIN;
	volatile uint32_t t17 = 2803580U;

	t17 = (x105/((x106^x107)&x108));

	if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x109 = 116345310;
	uint16_t x110 = 1U;
	uint64_t x111 = UINT64_MAX;
	static int32_t x112 = -100451746;

	t18 = (x109/((x110^x111)&x112));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x113 = UINT64_MAX;
	static int64_t x114 = INT64_MIN;
	uint32_t x115 = 252769U;
	uint64_t x116 = 430672993LLU;

	t19 = (x113/((x114^x115)&x116));

	if (t19 != 79676332055016LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x117 = 2U;
	int16_t x118 = -1;
	int64_t x119 = 921342566298LL;
	uint8_t x120 = 81U;

	t20 = (x117/((x118^x119)&x120));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -657715LL;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	static volatile int64_t t21 = 2608201332LL;

	t21 = (x125/((x126^x127)&x128));

	if (t21 != -3131LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = INT16_MAX;
	int32_t x135 = INT32_MAX;
	static uint64_t t22 = 712365279248324683LLU;

	t22 = (x133/((x134^x135)&x136));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x137 = 1;
	uint32_t x138 = 408309U;
	int8_t x139 = INT8_MIN;
	volatile uint16_t x140 = 1U;
	uint32_t t23 = 0U;

	t23 = (x137/((x138^x139)&x140));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int32_t x146 = -38;
	int16_t x147 = 107;
	static volatile int32_t t24 = -227;

	t24 = (x145/((x146^x147)&x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x153 = -825423041483LL;
	volatile int32_t x154 = -1;
	int64_t x155 = 3050877533578188LL;
	int64_t x156 = -8421083LL;

	t25 = (x153/((x154^x155)&x156));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x157 = -1LL;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MAX;

	t26 = (x157/((x158^x159)&x160));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x161 = 0U;
	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = INT32_MIN;
	uint16_t x164 = 19277U;
	int32_t t27 = -2931;

	t27 = (x161/((x162^x163)&x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x170 = INT64_MAX;
	uint64_t x171 = 473417841LLU;
	volatile int16_t x172 = -9;
	uint64_t t28 = 19383720212242226LLU;

	t28 = (x169/((x170^x171)&x172));

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	static uint64_t t29 = 17191LLU;

	t29 = (x177/((x178^x179)&x180));

	if (t29 != 4295000348LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x185 = 15U;
	volatile uint32_t x187 = 14U;
	volatile uint64_t t30 = 2109280493LLU;

	t30 = (x185/((x186^x187)&x188));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x189 = 7U;
	volatile int32_t x190 = -352764;
	uint16_t x192 = 6933U;
	static volatile int32_t t31 = 5222;

	t31 = (x189/((x190^x191)&x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = INT64_MIN;
	static int32_t x195 = INT32_MAX;
	int32_t x196 = INT32_MIN;
	int64_t t32 = 2379251716567810LL;

	t32 = (x193/((x194^x195)&x196));

	if (t32 != 4294967296LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = -17;
	uint8_t x198 = 11U;
	uint32_t x199 = 27663263U;
	int32_t x200 = -1;
	uint32_t t33 = 655627U;

	t33 = (x197/((x198^x199)&x200));

	if (t33 != 155U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int8_t x203 = 0;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t34 = 997390224012280321LLU;

	t34 = (x201/((x202^x203)&x204));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = 13459561703172487LL;
	int8_t x208 = -1;
	volatile int64_t t35 = -65822LL;

	t35 = (x205/((x206^x207)&x208));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = INT16_MAX;
	static int64_t x210 = -1LL;
	uint8_t x211 = 6U;
	volatile uint64_t x212 = 39LLU;
	static volatile uint64_t t36 = 13318LLU;

	t36 = (x209/((x210^x211)&x212));

	if (t36 != 992LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = -6;
	volatile uint16_t x215 = UINT16_MAX;
	static int8_t x216 = INT8_MIN;
	volatile int64_t t37 = -24565442635LL;

	t37 = (x213/((x214^x215)&x216));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x218 = INT8_MIN;
	static int32_t x219 = -1;
	static int16_t x220 = -1;
	int64_t t38 = -14875336212329LL;

	t38 = (x217/((x218^x219)&x220));

	if (t38 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = INT8_MAX;
	uint16_t x222 = UINT16_MAX;
	volatile uint64_t x223 = 0LLU;
	volatile uint32_t x224 = 272U;
	volatile uint64_t t39 = 25922020158862LLU;

	t39 = (x221/((x222^x223)&x224));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x225 = 1LLU;
	int32_t x226 = INT32_MIN;
	volatile uint64_t t40 = 1268334179772434709LLU;

	t40 = (x225/((x226^x227)&x228));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x229 = 558U;
	uint32_t x231 = UINT32_MAX;
	static int64_t x232 = -1LL;
	static volatile int64_t t41 = 494854832835442780LL;

	t41 = (x229/((x230^x231)&x232));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x233 = 3U;
	int64_t x234 = -7030037990608LL;
	int64_t x236 = -652206600438714LL;
	volatile int64_t t42 = 11LL;

	t42 = (x233/((x234^x235)&x236));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = INT16_MAX;
	static int16_t x243 = -1;
	static volatile uint64_t x244 = UINT64_MAX;

	t43 = (x241/((x242^x243)&x244));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	uint64_t x248 = 52562835486766LLU;

	t44 = (x245/((x246^x247)&x248));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = -1;
	static volatile uint32_t x250 = 19482U;
	static uint16_t x251 = 1017U;
	int16_t x252 = INT16_MAX;
	volatile uint32_t t45 = 514706886U;

	t45 = (x249/((x250^x251)&x252));

	if (t45 != 210012U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = INT64_MIN;
	volatile int32_t x254 = INT32_MAX;
	uint32_t x255 = 39246145U;
	static uint64_t x256 = 19973377389328LLU;
	static uint64_t t46 = 174123313286LLU;

	t46 = (x253/((x254^x255)&x256));

	if (t46 != 5286087177LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile uint32_t x260 = 328009262U;
	volatile uint32_t t47 = 2560U;

	t47 = (x257/((x258^x259)&x260));

	if (t47 != 13U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 36U;
	int32_t x264 = INT32_MIN;
	int64_t t48 = 5282972524LL;

	t48 = (x261/((x262^x263)&x264));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x266 = UINT16_MAX;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t49 = 7528;

	t49 = (x265/((x266^x267)&x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x269 = UINT8_MAX;
	static uint16_t x271 = UINT16_MAX;
	volatile int16_t x272 = -1;
	volatile int32_t t50 = -41;

	t50 = (x269/((x270^x271)&x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x285 = -1;
	int32_t x286 = INT32_MIN;
	int64_t x287 = -1LL;
	int64_t x288 = -1LL;

	t51 = (x285/((x286^x287)&x288));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint16_t x291 = 124U;
	uint16_t x292 = UINT16_MAX;
	uint64_t t52 = 30LLU;

	t52 = (x289/((x290^x291)&x292));

	if (t52 != 148764065110560900LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x293 = INT64_MAX;
	uint16_t x294 = UINT16_MAX;
	static volatile int32_t x295 = -1;
	static volatile uint64_t x296 = 964893999504LLU;
	static volatile uint64_t t53 = 14879LLU;

	t53 = (x293/((x294^x295)&x296));

	if (t53 != 9558948LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x297 = 24U;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = 7245U;
	volatile uint32_t x300 = 12U;
	int64_t t54 = -21125187234LL;

	t54 = (x297/((x298^x299)&x300));

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MAX;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t55 = -3LL;

	t55 = (x301/((x302^x303)&x304));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = -1LL;
	int16_t x306 = -1;
	uint16_t x307 = 23U;
	volatile int64_t x308 = 422729061967LL;
	static volatile int64_t t56 = 78264LL;

	t56 = (x305/((x306^x307)&x308));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = INT32_MAX;
	volatile uint8_t x311 = 7U;
	int8_t x312 = 12;
	int32_t t57 = -521093437;

	t57 = (x309/((x310^x311)&x312));

	if (t57 != 268435455) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x313 = -1LL;
	static int64_t x314 = -1LL;
	int32_t x315 = INT32_MAX;
	int64_t t58 = -20240905LL;

	t58 = (x313/((x314^x315)&x316));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x321 = 21U;
	volatile int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int64_t x324 = 53318047402880LL;
	volatile int64_t t59 = -3603285002321249LL;

	t59 = (x321/((x322^x323)&x324));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x327 = 1113538005968243530LLU;
	int8_t x328 = INT8_MAX;

	t60 = (x325/((x326^x327)&x328));

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x332 = INT16_MAX;
	int64_t t61 = 964748013249388933LL;

	t61 = (x329/((x330^x331)&x332));

	if (t61 != 276450026123LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 245016U;
	uint64_t x335 = 15LLU;
	uint16_t x336 = UINT16_MAX;

	t62 = (x333/((x334^x335)&x336));

	if (t62 != 381075961611121LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x337 = UINT16_MAX;
	static int32_t x338 = -30;
	int8_t x339 = -1;
	volatile uint32_t x340 = 104980051U;
	uint32_t t63 = 47U;

	t63 = (x337/((x338^x339)&x340));

	if (t63 != 3855U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x341 = 32390U;
	int8_t x342 = INT8_MAX;
	uint8_t x343 = 9U;
	int64_t x344 = -1LL;
	int64_t t64 = 5257321659LL;

	t64 = (x341/((x342^x343)&x344));

	if (t64 != 274LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x346 = 9U;
	int64_t x347 = -1LL;
	uint32_t x348 = 26811199U;

	t65 = (x345/((x346^x347)&x348));

	if (t65 != -54739LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x357 = -12;
	int64_t x359 = 4048962205205LL;
	uint16_t x360 = 508U;
	int64_t t66 = 959964099306025LL;

	t66 = (x357/((x358^x359)&x360));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x361 = 239947U;
	static int32_t x362 = 7485135;
	static int32_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;

	t67 = (x361/((x362^x363)&x364));

	if (t67 != 12U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x365 = -1;
	volatile int16_t x366 = 19;
	uint8_t x367 = 3U;
	int16_t x368 = -72;
	int32_t t68 = 12;

	t68 = (x365/((x366^x367)&x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x369 = 9002U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t69 = 262837241;

	t69 = (x369/((x370^x371)&x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x373 = INT64_MIN;
	int32_t x375 = -664054148;
	uint16_t x376 = 4422U;
	volatile int64_t t70 = 1917825909506LL;

	t70 = (x373/((x374^x375)&x376));

	if (t70 != -2215026906065027LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x377 = INT64_MIN;
	uint16_t x378 = 21883U;
	volatile int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;
	int64_t t71 = -26059575429013LL;

	t71 = (x377/((x378^x379)&x380));

	if (t71 != 281474976710656LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile int32_t x382 = INT32_MAX;
	volatile uint16_t x383 = 83U;
	uint64_t t72 = 54607LLU;

	t72 = (x381/((x382^x383)&x384));

	if (t72 != 8589934927LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x389 = 29LLU;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	static volatile uint64_t t73 = 525691194LLU;

	t73 = (x389/((x390^x391)&x392));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -1;
	int64_t x394 = -254662LL;
	uint32_t x395 = 378132263U;
	static volatile int8_t x396 = INT8_MAX;
	volatile int64_t t74 = -43890217986696LL;

	t74 = (x393/((x394^x395)&x396));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x398 = INT16_MIN;
	static uint32_t x399 = UINT32_MAX;
	static volatile uint32_t x400 = 648134649U;
	static volatile uint32_t t75 = 1532U;

	t75 = (x397/((x398^x399)&x400));

	if (t75 != 131128U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x401 = INT32_MIN;
	int8_t x402 = 45;
	static uint64_t x403 = 125341983729768LLU;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t76 = 23196LLU;

	t76 = (x401/((x402^x403)&x404));

	if (t76 != 267344116979160405LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x405 = 136778514;
	int64_t x406 = INT64_MIN;
	int64_t x407 = INT64_MAX;
	int32_t x408 = -1;
	int64_t t77 = -369019969848LL;

	t77 = (x405/((x406^x407)&x408));

	if (t77 != -136778514LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x409 = INT64_MIN;
	uint32_t x411 = 36720U;
	static int64_t t78 = 344581LL;

	t78 = (x409/((x410^x411)&x412));

	if (t78 != -2147501968LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	int32_t x416 = -1;

	t79 = (x413/((x414^x415)&x416));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x421 = INT8_MAX;
	static int32_t x422 = INT32_MIN;
	int8_t x423 = INT8_MIN;
	volatile uint32_t x424 = UINT32_MAX;
	static volatile uint32_t t80 = 134322U;

	t80 = (x421/((x422^x423)&x424));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x429 = INT32_MIN;
	int32_t x430 = -1;
	uint16_t x431 = 14U;
	volatile int32_t t81 = 733701527;

	t81 = (x429/((x430^x431)&x432));

	if (t81 != -246695) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = INT16_MIN;
	uint8_t x438 = 1U;
	uint32_t x439 = 505482746U;
	uint32_t x440 = 1509940354U;
	uint32_t t82 = 6U;

	t82 = (x437/((x438^x439)&x440));

	if (t82 != 10U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x441 = INT64_MIN;
	int32_t x442 = -554;
	int32_t x444 = -1;

	t83 = (x441/((x442^x443)&x444));

	if (t83 != 366880351505758LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = INT8_MIN;
	static volatile uint8_t x450 = 3U;
	static volatile int32_t x451 = INT32_MIN;
	static uint16_t x452 = 13U;

	t84 = (x449/((x450^x451)&x452));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 1636U;
	int8_t x456 = -3;
	uint32_t t85 = 42381462U;

	t85 = (x453/((x454^x455)&x456));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x461 = -1;
	uint8_t x463 = 25U;
	uint16_t x464 = UINT16_MAX;
	int32_t t86 = -7718;

	t86 = (x461/((x462^x463)&x464));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x465 = 4U;
	static uint8_t x466 = 0U;
	static uint64_t x467 = 6534854397LLU;
	volatile int16_t x468 = INT16_MIN;
	uint64_t t87 = 99815LLU;

	t87 = (x465/((x466^x467)&x468));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x469 = -55;
	static uint8_t x470 = 61U;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = 2297965069LL;
	volatile uint64_t t88 = 286049821774LLU;

	t88 = (x469/((x470^x471)&x472));

	if (t88 != 8027425841LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = -1;
	uint64_t x478 = UINT64_MAX;
	static int64_t x479 = INT64_MIN;
	volatile uint64_t t89 = 2478727002268302477LLU;

	t89 = (x477/((x478^x479)&x480));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x481 = INT8_MAX;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = 2U;
	int64_t x484 = INT64_MIN;

	t90 = (x481/((x482^x483)&x484));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x485 = UINT32_MAX;
	static uint32_t x487 = UINT32_MAX;

	t91 = (x485/((x486^x487)&x488));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x490 = 1105U;
	static uint32_t t92 = 17U;

	t92 = (x489/((x490^x491)&x492));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x493 = -1;
	int16_t x494 = INT16_MIN;
	uint16_t x496 = 24398U;
	static int32_t t93 = 381717;

	t93 = (x493/((x494^x495)&x496));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x497 = UINT16_MAX;
	static int64_t x498 = 13610LL;
	uint64_t x499 = 468093237158353LLU;
	int32_t x500 = INT32_MIN;
	static volatile uint64_t t94 = 3431418LLU;

	t94 = (x497/((x498^x499)&x500));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x501 = INT8_MIN;
	int8_t x502 = INT8_MIN;
	volatile uint32_t x503 = UINT32_MAX;
	uint16_t x504 = 10139U;
	volatile uint32_t t95 = 0U;

	t95 = (x501/((x502^x503)&x504));

	if (t95 != 159072858U) { NG(); } else { ; }
	
}

void f96(void) {


	t96 = (x505/((x506^x507)&x508));

	if (t96 != -9) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = INT8_MIN;
	uint64_t x510 = 2427847753486919446LLU;
	uint8_t x511 = UINT8_MAX;
	static uint64_t t97 = 1075630734180676549LLU;

	t97 = (x509/((x510^x511)&x512));

	if (t97 != 48038396025285290LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x513 = UINT8_MAX;
	volatile int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MAX;
	volatile uint32_t t98 = 2780U;

	t98 = (x513/((x514^x515)&x516));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x521 = -1;
	uint64_t x522 = 418859086610495LLU;
	uint8_t x524 = UINT8_MAX;
	static uint64_t t99 = 102704677621LLU;

	t99 = (x521/((x522^x523)&x524));

	if (t99 != 96076792050570581LLU) { NG(); } else { ; }
	
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

