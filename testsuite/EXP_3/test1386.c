#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
uint64_t x6 = 7794LLU;
uint16_t x7 = 1544U;
int32_t x9 = INT32_MAX;
int32_t x14 = -247;
int16_t x17 = -1;
static volatile int32_t x22 = -7912;
uint16_t x31 = 199U;
static int32_t x36 = -1;
uint32_t x45 = 0U;
uint32_t x50 = UINT32_MAX;
int16_t x51 = -42;
volatile int32_t t11 = 146;
int64_t x65 = -53LL;
int64_t x67 = -970104910000LL;
static volatile int32_t x68 = -1;
static int8_t x76 = -1;
uint32_t x78 = UINT32_MAX;
int64_t x81 = -7856LL;
volatile int32_t t15 = -1;
volatile int32_t t17 = -28363;
static int8_t x93 = INT8_MIN;
volatile uint32_t x94 = 326342021U;
int16_t x96 = -3;
int32_t x109 = -1;
int16_t x113 = INT16_MIN;
int8_t x116 = -1;
volatile int8_t x127 = INT8_MIN;
static volatile int32_t t23 = -1915897;
volatile int32_t t25 = -701542453;
int8_t x137 = INT8_MAX;
static int32_t x140 = -29;
int32_t t26 = 8567133;
uint32_t x148 = UINT32_MAX;
uint8_t x150 = UINT8_MAX;
volatile int32_t t29 = 444825;
uint8_t x153 = 1U;
int32_t t30 = 62;
static uint8_t x160 = 27U;
volatile int32_t t33 = 5;
static int16_t x173 = -1;
static volatile uint16_t x192 = 3192U;
volatile int32_t t38 = -1351912;
volatile int16_t x206 = -1;
volatile uint64_t x208 = 3589158370206622498LLU;
static int16_t x212 = -1;
volatile int32_t t40 = 19097919;
int64_t x216 = 220222511056LL;
int32_t t41 = -1;
static uint8_t x219 = UINT8_MAX;
int16_t x232 = -29;
uint16_t x234 = 0U;
int8_t x241 = INT8_MAX;
int32_t t48 = -9412;
int16_t x252 = INT16_MIN;
volatile int8_t x253 = INT8_MIN;
int64_t x265 = INT64_MIN;
uint64_t x282 = 15411LLU;
int32_t t54 = -689;
volatile int32_t t55 = 803754;
int16_t x293 = 502;
uint16_t x295 = UINT16_MAX;
volatile int8_t x296 = -4;
int32_t t57 = 43;
static int16_t x297 = INT16_MAX;
int8_t x299 = INT8_MAX;
int32_t t58 = -11;
uint32_t x305 = 1U;
uint8_t x307 = 12U;
volatile int32_t t59 = 2608;
static int16_t x309 = INT16_MAX;
int64_t x312 = INT64_MAX;
int32_t t60 = 13;
uint8_t x318 = UINT8_MAX;
volatile int16_t x322 = -5116;
uint16_t x323 = 3451U;
int32_t t66 = 16;
uint8_t x345 = UINT8_MAX;
int8_t x347 = -1;
int32_t t70 = -213747927;
static int8_t x370 = 2;
volatile int32_t t72 = 0;
static uint32_t x381 = UINT32_MAX;
int32_t x385 = 14964;
int32_t t74 = -1;
int64_t x391 = INT64_MIN;
uint64_t x392 = 259578152LLU;
static int16_t x395 = INT16_MIN;
int16_t x396 = INT16_MAX;
int32_t x399 = INT32_MIN;
static int32_t t77 = -28941;
static volatile int32_t t78 = 26889;
int16_t x410 = INT16_MIN;
volatile int16_t x411 = INT16_MAX;
uint32_t x414 = 16176U;
int16_t x416 = INT16_MIN;
static volatile uint32_t x421 = 18259450U;
volatile int16_t x423 = INT16_MIN;
int32_t t82 = 1033949232;
volatile int16_t x429 = INT16_MAX;
volatile int32_t t84 = 101410965;
int32_t t86 = -803;
uint8_t x446 = UINT8_MAX;
int32_t x448 = 3;
int64_t x462 = -126028589002504LL;
int64_t x475 = INT64_MAX;
static int32_t t92 = -7223397;
static int32_t x483 = 1;
int64_t x492 = INT64_MAX;
int64_t x495 = -341081202774LL;
static volatile int16_t x496 = INT16_MAX;
int16_t x499 = INT16_MIN;
int32_t t98 = 3989779;
int16_t x504 = INT16_MAX;


void f0(void) {
	volatile int8_t x8 = -1;
	volatile int32_t t0 = 3;

	t0 = ((x5*x6)==(x7<x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 9987159431722LLU;
	static volatile uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 0U;
	volatile int32_t t1 = 1102;

	t1 = ((x9*x10)==(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = 1983186;

	t2 = ((x13*x14)==(x15<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = 14722;
	int16_t x19 = INT16_MAX;
	int8_t x20 = 1;
	volatile int32_t t3 = 0;

	t3 = ((x17*x18)==(x19<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static uint64_t x23 = 1425LLU;
	volatile int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 122234702;

	t4 = ((x21*x22)==(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 5U;
	volatile int16_t x30 = INT16_MAX;
	volatile int32_t x32 = INT32_MAX;
	volatile int32_t t5 = 326;

	t5 = ((x29*x30)==(x31<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x33 = 163U;
	int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	static volatile int32_t t6 = 924709217;

	t6 = ((x33*x34)==(x35<x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = 94;
	uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	int8_t x44 = -48;
	volatile int32_t t7 = 2654885;

	t7 = ((x41*x42)==(x43<x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x46 = -1281061LL;
	volatile uint16_t x47 = 94U;
	int64_t x48 = INT64_MAX;
	volatile int32_t t8 = 645981;

	t8 = ((x45*x46)==(x47<x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x49 = 44550U;
	static int64_t x52 = -1LL;
	static volatile int32_t t9 = -3;

	t9 = ((x49*x50)==(x51<x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 17514992915142LLU;
	uint8_t x58 = UINT8_MAX;
	uint64_t x59 = 22425850LLU;
	int16_t x60 = INT16_MIN;
	int32_t t10 = -212170;

	t10 = ((x57*x58)==(x59<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x61 = 4U;
	uint16_t x62 = 1U;
	uint16_t x63 = 0U;
	volatile int8_t x64 = -1;

	t11 = ((x61*x62)==(x63<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x66 = -1LL;
	int32_t t12 = 181943;

	t12 = ((x65*x66)==(x67<x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = 19300963U;
	volatile int16_t x75 = INT16_MIN;
	volatile int32_t t13 = 134;

	t13 = ((x73*x74)==(x75<x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -10;
	volatile int8_t x79 = INT8_MAX;
	uint64_t x80 = 215991557LLU;
	volatile int32_t t14 = 0;

	t14 = ((x77*x78)==(x79<x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x82 = 27;
	static volatile int8_t x83 = INT8_MIN;
	uint16_t x84 = 20U;

	t15 = ((x81*x82)==(x83<x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 1LLU;
	int16_t x86 = -22;
	int64_t x87 = -1LL;
	int32_t x88 = -1;
	volatile int32_t t16 = -107354589;

	t16 = ((x85*x86)==(x87<x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -1LL;
	int16_t x90 = -1;
	int16_t x91 = -1;
	static int32_t x92 = INT32_MIN;

	t17 = ((x89*x90)==(x91<x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x95 = INT8_MAX;
	int32_t t18 = -1;

	t18 = ((x93*x94)==(x95<x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x110 = UINT16_MAX;
	uint16_t x111 = 44U;
	static uint32_t x112 = 3861U;
	volatile int32_t t19 = 382;

	t19 = ((x109*x110)==(x111<x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x114 = 96U;
	int64_t x115 = 13815459585715LL;
	int32_t t20 = -51;

	t20 = ((x113*x114)==(x115<x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x117 = -13;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 45U;
	int32_t x120 = INT32_MIN;
	volatile int32_t t21 = 37;

	t21 = ((x117*x118)==(x119<x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x121 = 113123LLU;
	volatile uint64_t x122 = 1075386668978870LLU;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t22 = 14717;

	t22 = ((x121*x122)==(x123<x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x125 = 7U;
	int64_t x126 = -1487618067765299LL;
	static int16_t x128 = -1;

	t23 = ((x125*x126)==(x127<x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 2U;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = UINT32_MAX;
	int32_t t24 = -403655;

	t24 = ((x129*x130)==(x131<x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x133 = 62150155027LLU;
	volatile int8_t x134 = -1;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -1LL;

	t25 = ((x133*x134)==(x135<x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x138 = 227739630150914LL;
	uint16_t x139 = 4881U;

	t26 = ((x137*x138)==(x139<x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x141 = 8U;
	static int64_t x142 = 44669899386561LL;
	int16_t x143 = -1;
	int16_t x144 = 0;
	volatile int32_t t27 = -186685209;

	t27 = ((x141*x142)==(x143<x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = 17U;
	uint8_t x147 = 20U;
	int32_t t28 = -132097704;

	t28 = ((x145*x146)==(x147<x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x149 = -1;
	uint8_t x151 = 9U;
	volatile int8_t x152 = 3;

	t29 = ((x149*x150)==(x151<x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x154 = UINT16_MAX;
	static int8_t x155 = -1;
	static volatile int32_t x156 = INT32_MIN;

	t30 = ((x153*x154)==(x155<x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	volatile int32_t t31 = 2966;

	t31 = ((x157*x158)==(x159<x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x161 = -1;
	static uint8_t x162 = 20U;
	uint64_t x163 = 4420LLU;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t32 = -1;

	t32 = ((x161*x162)==(x163<x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x169 = 0U;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	int8_t x172 = -1;

	t33 = ((x169*x170)==(x171<x172));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x174 = 0;
	uint16_t x175 = 13U;
	static volatile int16_t x176 = -990;
	int32_t t34 = 0;

	t34 = ((x173*x174)==(x175<x176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x177 = INT16_MIN;
	uint32_t x178 = 98U;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = 1LL;
	int32_t t35 = 119761;

	t35 = ((x177*x178)==(x179<x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 4U;
	static int64_t x184 = INT64_MAX;
	volatile int32_t t36 = -64136763;

	t36 = ((x181*x182)==(x183<x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -17;
	static int8_t x190 = -2;
	uint16_t x191 = 8034U;
	volatile int32_t t37 = 405;

	t37 = ((x189*x190)==(x191<x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x201 = INT32_MIN;
	uint64_t x202 = 85007LLU;
	volatile int32_t x203 = INT32_MIN;
	volatile int8_t x204 = -2;

	t38 = ((x201*x202)==(x203<x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	volatile uint16_t x207 = 1U;
	static volatile int32_t t39 = -26604191;

	t39 = ((x205*x206)==(x207<x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 5969830U;
	static uint8_t x210 = UINT8_MAX;
	int8_t x211 = 1;

	t40 = ((x209*x210)==(x211<x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x213 = -1;
	int16_t x214 = -9;
	static uint32_t x215 = 991U;

	t41 = ((x213*x214)==(x215<x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	int64_t x220 = -1837948720942899LL;
	volatile int32_t t42 = 144;

	t42 = ((x217*x218)==(x219<x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = 13LLU;
	static int32_t x226 = -1;
	int32_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int32_t t43 = -276086;

	t43 = ((x225*x226)==(x227<x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x229 = INT16_MAX;
	uint32_t x230 = 997U;
	int32_t x231 = 8;
	int32_t t44 = -97;

	t44 = ((x229*x230)==(x231<x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -1;
	static int8_t x235 = 1;
	static uint64_t x236 = 461379LLU;
	static int32_t t45 = 1657;

	t45 = ((x233*x234)==(x235<x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x237 = INT32_MAX;
	int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	static int32_t x240 = INT32_MIN;
	int32_t t46 = -1805;

	t46 = ((x237*x238)==(x239<x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x242 = INT16_MIN;
	uint16_t x243 = 15U;
	volatile uint32_t x244 = 3527600U;
	static int32_t t47 = -32181584;

	t47 = ((x241*x242)==(x243<x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x245 = UINT32_MAX;
	static int8_t x246 = INT8_MIN;
	int16_t x247 = -14;
	static uint16_t x248 = UINT16_MAX;

	t48 = ((x245*x246)==(x247<x248));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x249 = 443972412091358516LLU;
	volatile uint16_t x250 = 1680U;
	static uint32_t x251 = UINT32_MAX;
	int32_t t49 = -197218169;

	t49 = ((x249*x250)==(x251<x252));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x254 = INT8_MAX;
	int64_t x255 = INT64_MAX;
	static uint16_t x256 = 2U;
	volatile int32_t t50 = 16207;

	t50 = ((x253*x254)==(x255<x256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x261 = 28U;
	uint16_t x262 = 234U;
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = INT8_MAX;
	int32_t t51 = 3905912;

	t51 = ((x261*x262)==(x263<x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x266 = 895LLU;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t52 = -132;

	t52 = ((x265*x266)==(x267<x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x269 = 1U;
	uint64_t x270 = 13260032506308LLU;
	static int16_t x271 = INT16_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	volatile int32_t t53 = -5810035;

	t53 = ((x269*x270)==(x271<x272));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x281 = INT16_MIN;
	int16_t x283 = -1;
	static int64_t x284 = -1LL;

	t54 = ((x281*x282)==(x283<x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = -1;
	int16_t x286 = -1;
	uint8_t x287 = 23U;
	int64_t x288 = 978LL;

	t55 = ((x285*x286)==(x287<x288));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	uint16_t x290 = 1046U;
	static uint64_t x291 = 3648981LLU;
	int32_t x292 = 19776418;
	static int32_t t56 = -62940171;

	t56 = ((x289*x290)==(x291<x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x294 = 480U;

	t57 = ((x293*x294)==(x295<x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x298 = INT16_MIN;
	volatile uint8_t x300 = UINT8_MAX;

	t58 = ((x297*x298)==(x299<x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x306 = 169LL;
	int16_t x308 = 10;

	t59 = ((x305*x306)==(x307<x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x310 = 15469U;
	volatile int32_t x311 = 2;

	t60 = ((x309*x310)==(x311<x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = 3U;
	int8_t x314 = 41;
	int32_t x315 = 4759;
	int8_t x316 = INT8_MIN;
	int32_t t61 = -294;

	t61 = ((x313*x314)==(x315<x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = -1LL;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t62 = 10160634;

	t62 = ((x317*x318)==(x319<x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x321 = -1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t63 = 14236517;

	t63 = ((x321*x322)==(x323<x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x325 = 83U;
	int16_t x326 = 36;
	static int8_t x327 = INT8_MIN;
	static int8_t x328 = -1;
	volatile int32_t t64 = 28926;

	t64 = ((x325*x326)==(x327<x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MAX;
	static uint32_t x335 = UINT32_MAX;
	int16_t x336 = -2;
	int32_t t65 = -111;

	t65 = ((x333*x334)==(x335<x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = -1;
	static int32_t x338 = -1;
	static volatile uint32_t x339 = 13206096U;
	uint32_t x340 = 4615453U;

	t66 = ((x337*x338)==(x339<x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -13;
	volatile int32_t x344 = INT32_MIN;
	int32_t t67 = 81;

	t67 = ((x341*x342)==(x343<x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x346 = 441812218742388LLU;
	int32_t x348 = -1;
	int32_t t68 = 7884034;

	t68 = ((x345*x346)==(x347<x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = 4U;
	static uint8_t x354 = 9U;
	static volatile uint16_t x355 = 4U;
	int8_t x356 = INT8_MIN;
	int32_t t69 = 223352036;

	t69 = ((x353*x354)==(x355<x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = -682598;
	uint64_t x358 = 265819974927LLU;
	int16_t x359 = 614;
	static uint16_t x360 = 22U;

	t70 = ((x357*x358)==(x359<x360));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 0U;
	volatile uint64_t x367 = UINT64_MAX;
	int8_t x368 = -54;
	static int32_t t71 = -2117665;

	t71 = ((x365*x366)==(x367<x368));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = UINT8_MAX;
	static int16_t x371 = INT16_MAX;
	uint16_t x372 = UINT16_MAX;

	t72 = ((x369*x370)==(x371<x372));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x382 = INT8_MIN;
	static int16_t x383 = INT16_MIN;
	volatile int8_t x384 = -26;
	static volatile int32_t t73 = 2015934;

	t73 = ((x381*x382)==(x383<x384));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x386 = UINT16_MAX;
	static volatile int64_t x387 = INT64_MIN;
	int8_t x388 = 1;

	t74 = ((x385*x386)==(x387<x388));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x389 = 23U;
	static int32_t x390 = -1;
	volatile int32_t t75 = -38;

	t75 = ((x389*x390)==(x391<x392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = 45U;
	volatile int32_t x394 = INT32_MIN;
	int32_t t76 = 10862423;

	t76 = ((x393*x394)==(x395<x396));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MAX;
	int32_t x400 = -81;

	t77 = ((x397*x398)==(x399<x400));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = -1;
	volatile int16_t x402 = -1;
	int64_t x403 = -1LL;
	int16_t x404 = INT16_MAX;

	t78 = ((x401*x402)==(x403<x404));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x405 = 16834699624LLU;
	volatile int8_t x406 = INT8_MAX;
	volatile int16_t x407 = -1;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t79 = 1;

	t79 = ((x405*x406)==(x407<x408));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x412 = 1;
	volatile int32_t t80 = 482771943;

	t80 = ((x409*x410)==(x411<x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x413 = 1409559432344433810LLU;
	static uint64_t x415 = 196LLU;
	volatile int32_t t81 = 13;

	t81 = ((x413*x414)==(x415<x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x422 = 1U;
	uint32_t x424 = 108U;

	t82 = ((x421*x422)==(x423<x424));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x425 = 2;
	static uint32_t x426 = 3748483U;
	uint16_t x427 = 0U;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t83 = 68;

	t83 = ((x425*x426)==(x427<x428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x430 = 8719U;
	volatile int64_t x431 = -143LL;
	static volatile int8_t x432 = INT8_MIN;

	t84 = ((x429*x430)==(x431<x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x433 = 4701LLU;
	uint8_t x434 = 10U;
	volatile int64_t x435 = 12715294114827LL;
	int32_t x436 = -1;
	int32_t t85 = -1105;

	t85 = ((x433*x434)==(x435<x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x437 = 20207U;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MIN;
	static int64_t x440 = -37569862386315LL;

	t86 = ((x437*x438)==(x439<x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x445 = 1728LLU;
	volatile uint8_t x447 = 2U;
	volatile int32_t t87 = -5501804;

	t87 = ((x445*x446)==(x447<x448));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x449 = INT64_MIN;
	uint64_t x450 = 58202213575953652LLU;
	volatile int16_t x451 = INT16_MIN;
	uint32_t x452 = 364U;
	int32_t t88 = 1;

	t88 = ((x449*x450)==(x451<x452));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x457 = UINT64_MAX;
	uint32_t x458 = 30046293U;
	volatile int64_t x459 = INT64_MIN;
	int8_t x460 = 2;
	volatile int32_t t89 = 15486791;

	t89 = ((x457*x458)==(x459<x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x461 = 49242U;
	int64_t x463 = INT64_MIN;
	volatile int64_t x464 = -33715LL;
	volatile int32_t t90 = 18;

	t90 = ((x461*x462)==(x463<x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x469 = 11379U;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 111LLU;
	int16_t x472 = INT16_MIN;
	volatile int32_t t91 = -1160935;

	t91 = ((x469*x470)==(x471<x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x473 = UINT16_MAX;
	volatile int32_t x474 = 3;
	volatile int8_t x476 = -1;

	t92 = ((x473*x474)==(x475<x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x477 = INT8_MAX;
	static int16_t x478 = INT16_MIN;
	static int16_t x479 = -2978;
	int8_t x480 = INT8_MIN;
	volatile int32_t t93 = 38078100;

	t93 = ((x477*x478)==(x479<x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x481 = 980U;
	int8_t x482 = INT8_MIN;
	static volatile uint32_t x484 = 67977072U;
	int32_t t94 = -7574028;

	t94 = ((x481*x482)==(x483<x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x485 = UINT16_MAX;
	volatile uint8_t x486 = 5U;
	int64_t x487 = INT64_MAX;
	int16_t x488 = INT16_MAX;
	volatile int32_t t95 = 173400;

	t95 = ((x485*x486)==(x487<x488));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x489 = -1;
	int8_t x490 = INT8_MAX;
	int64_t x491 = INT64_MIN;
	volatile int32_t t96 = 36453225;

	t96 = ((x489*x490)==(x491<x492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x493 = 31157561;
	int8_t x494 = -1;
	static int32_t t97 = 16018;

	t97 = ((x493*x494)==(x495<x496));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x497 = 13435881U;
	static int8_t x498 = INT8_MIN;
	int16_t x500 = INT16_MAX;

	t98 = ((x497*x498)==(x499<x500));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x501 = -1;
	uint32_t x502 = 39025197U;
	int64_t x503 = -1542834499416LL;
	int32_t t99 = 111;

	t99 = ((x501*x502)==(x503<x504));

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

