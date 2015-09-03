#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 8U;
volatile int32_t t0 = 107248;
int8_t x15 = INT8_MIN;
volatile uint8_t x16 = UINT8_MAX;
static int32_t t1 = 5340;
int16_t x32 = -204;
volatile uint16_t x45 = 6867U;
uint32_t x49 = UINT32_MAX;
int16_t x54 = INT16_MIN;
volatile uint64_t x56 = 16773283639LLU;
static int16_t x59 = INT16_MIN;
static uint32_t x66 = 13759220U;
static uint32_t x68 = UINT32_MAX;
uint16_t x76 = UINT16_MAX;
int8_t x94 = INT8_MAX;
uint16_t x96 = 352U;
volatile uint32_t t13 = UINT32_MAX;
int8_t x99 = 49;
int32_t x101 = 92529009;
uint8_t x103 = UINT8_MAX;
volatile int64_t x104 = INT64_MIN;
static int32_t x121 = 956438886;
static uint32_t x122 = 0U;
int32_t x123 = INT32_MIN;
volatile int32_t t17 = 2;
static int16_t x128 = -1;
volatile int32_t t18 = -30;
static volatile uint8_t x141 = UINT8_MAX;
uint64_t x142 = 19600195289760134LLU;
static volatile int16_t x143 = 0;
volatile int16_t x146 = 31;
int16_t x154 = -22;
static int8_t x160 = INT8_MIN;
int8_t x168 = INT8_MAX;
uint8_t x172 = UINT8_MAX;
uint16_t x198 = 784U;
volatile int16_t x217 = 0;
static volatile int32_t t31 = 2259528;
int8_t x250 = -1;
static uint64_t x265 = 12LLU;
uint64_t x279 = UINT64_MAX;
uint8_t x288 = 2U;
static volatile uint32_t x309 = 1U;
volatile int16_t x311 = INT16_MIN;
uint32_t t38 = 577357480U;
static int8_t x314 = INT8_MIN;
static uint32_t x332 = 34501131U;
volatile int64_t x334 = INT64_MIN;
int32_t t42 = 1;
volatile uint32_t x337 = UINT32_MAX;
static int32_t x338 = INT32_MIN;
int16_t x341 = INT16_MAX;
volatile uint16_t x343 = 353U;
uint64_t x354 = 1744654LLU;
volatile int8_t x355 = 10;
volatile int16_t x362 = INT16_MIN;
static uint16_t x371 = 3766U;
volatile int64_t x379 = 2909390244496LL;
int16_t x394 = INT16_MAX;
static uint64_t x395 = UINT64_MAX;
int16_t x396 = -1;
uint8_t x398 = UINT8_MAX;
static uint32_t t54 = 7344U;
volatile int8_t x420 = -4;
volatile int32_t t55 = -1073484598;
volatile uint32_t t56 = 207809U;
uint8_t x437 = UINT8_MAX;
uint32_t x445 = UINT32_MAX;
uint32_t t59 = 1129U;
int32_t x456 = -11;
uint32_t x466 = UINT32_MAX;
int32_t x468 = -1;
int8_t x470 = INT8_MIN;
uint32_t t62 = UINT32_MAX;
int8_t x473 = 2;
static volatile int64_t x478 = -950115492LL;
uint64_t x495 = 15087LLU;
volatile int32_t t67 = 168385;
static volatile uint8_t x502 = UINT8_MAX;
uint32_t t69 = 10634U;
uint64_t x535 = 5188962804272LLU;
uint64_t x536 = 1893539777686684146LLU;
uint64_t x540 = 2815660LLU;
uint32_t x553 = 2580966U;
volatile int32_t t74 = 3;
static int16_t x577 = 2;
volatile int32_t t75 = -535847504;
static int32_t x587 = INT32_MIN;
uint8_t x588 = 2U;
int8_t x597 = INT8_MAX;
int32_t t81 = -233732;
int64_t x639 = -1LL;
volatile uint32_t t83 = 2U;
volatile uint16_t x670 = 0U;
int8_t x672 = -1;
static int32_t x676 = 12576;
volatile int32_t x705 = INT32_MAX;
volatile int16_t x707 = INT16_MAX;
int64_t x709 = 1743576656114436LL;
int64_t x713 = INT64_MAX;
uint16_t x737 = 57U;
int32_t x738 = INT32_MIN;
static int64_t x739 = INT64_MAX;
volatile int32_t t94 = 44;
volatile uint32_t x741 = 480743812U;
volatile uint64_t x761 = UINT64_MAX;
static uint64_t t98 = UINT64_MAX;


void f0(void) {
	volatile int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	static int32_t x12 = INT32_MAX;

	t0 = (x9<<(x10<(x11%x12)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = UINT8_MAX;
	uint32_t x14 = UINT32_MAX;

	t1 = (x13<<(x14<(x15%x16)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x29 = 141059756772308782LLU;
	volatile int16_t x30 = 13;
	volatile uint16_t x31 = 3U;
	volatile uint64_t t2 = 27304734453584LLU;

	t2 = (x29<<(x30<(x31%x32)));

	if (t2 != 141059756772308782LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x33 = 7;
	int32_t x34 = 1;
	int64_t x35 = -1LL;
	int8_t x36 = INT8_MIN;
	volatile int32_t t3 = 350986;

	t3 = (x33<<(x34<(x35%x36)));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = 9;
	int32_t x39 = -147190803;
	volatile int64_t x40 = 1LL;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x37<<(x38<(x39%x40)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MAX;
	uint32_t x43 = 980142841U;
	int8_t x44 = -19;
	int32_t t5 = -4;

	t5 = (x41<<(x42<(x43%x44)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x46 = 3U;
	static int32_t x47 = INT32_MAX;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t6 = -1053793804;

	t6 = (x45<<(x46<(x47%x48)));

	if (t6 != 13734) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = 22;
	int8_t x51 = -37;
	int64_t x52 = -3LL;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x49<<(x50<(x51%x52)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = INT64_MAX;
	int64_t x55 = 15035276516LL;
	volatile int64_t t8 = INT64_MAX;

	t8 = (x53<<(x54<(x55%x56)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = 5183U;
	uint64_t x58 = UINT64_MAX;
	uint32_t x60 = UINT32_MAX;
	int32_t t9 = -134996;

	t9 = (x57<<(x58<(x59%x60)));

	if (t9 != 5183) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 2;
	static int16_t x67 = -10;
	volatile int32_t t10 = 29;

	t10 = (x65<<(x66<(x67%x68)));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = 1043U;
	int8_t x74 = INT8_MIN;
	static uint32_t x75 = 1330350437U;
	int32_t t11 = -4260487;

	t11 = (x73<<(x74<(x75%x76)));

	if (t11 != 1043) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x85 = 0LLU;
	volatile int16_t x86 = -1;
	uint8_t x87 = 1U;
	int64_t x88 = 8378LL;
	volatile uint64_t t12 = 727480778LLU;

	t12 = (x85<<(x86<(x87%x88)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x95 = -1;

	t13 = (x93<<(x94<(x95%x96)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x97 = 156044675U;
	uint64_t x98 = 3681669229LLU;
	uint8_t x100 = 4U;
	volatile uint32_t t14 = 62807U;

	t14 = (x97<<(x98<(x99%x100)));

	if (t14 != 156044675U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x102 = -1LL;
	volatile int32_t t15 = 592;

	t15 = (x101<<(x102<(x103%x104)));

	if (t15 != 185058018) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x109 = UINT8_MAX;
	static volatile int64_t x110 = 7856389951891LL;
	static int16_t x111 = -301;
	static volatile int16_t x112 = INT16_MIN;
	static int32_t t16 = -55191571;

	t16 = (x109<<(x110<(x111%x112)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x124 = INT16_MAX;

	t17 = (x121<<(x122<(x123%x124)));

	if (t17 != 1912877772) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = UINT8_MAX;
	static uint64_t x126 = 77408388LLU;
	uint8_t x127 = 8U;

	t18 = (x125<<(x126<(x127%x128)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = 7176062737913146LL;
	static int64_t x131 = INT64_MAX;
	uint16_t x132 = UINT16_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (x129<<(x130<(x131%x132)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x133 = UINT64_MAX;
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = 2399;
	static uint8_t x136 = 1U;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x133<<(x134<(x135%x136)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x144 = INT32_MAX;
	volatile int32_t t21 = 737040;

	t21 = (x141<<(x142<(x143%x144)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = INT64_MAX;
	volatile int8_t x147 = INT8_MIN;
	int8_t x148 = 1;
	int64_t t22 = INT64_MAX;

	t22 = (x145<<(x146<(x147%x148)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = UINT16_MAX;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t23 = -145;

	t23 = (x153<<(x154<(x155%x156)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x157 = 6893110189LLU;
	static int64_t x158 = 1928232LL;
	volatile int64_t x159 = INT64_MIN;
	static uint64_t t24 = 20381706536606LLU;

	t24 = (x157<<(x158<(x159%x160)));

	if (t24 != 6893110189LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x165 = 12U;
	static int16_t x166 = INT16_MAX;
	volatile uint32_t x167 = 86U;
	volatile int32_t t25 = 463;

	t25 = (x165<<(x166<(x167%x168)));

	if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 14U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -11;
	int32_t t26 = -159371;

	t26 = (x169<<(x170<(x171%x172)));

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x173 = 1058857154U;
	uint16_t x174 = 17515U;
	int16_t x175 = -1;
	uint16_t x176 = 100U;
	static volatile uint32_t t27 = 157U;

	t27 = (x173<<(x174<(x175%x176)));

	if (t27 != 1058857154U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x181 = 20U;
	int16_t x182 = -1;
	static int64_t x183 = -9162303086LL;
	volatile int16_t x184 = -1;
	static int32_t t28 = 62435908;

	t28 = (x181<<(x182<(x183%x184)));

	if (t28 != 40) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x185 = UINT8_MAX;
	int32_t x186 = -177252316;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = 8419U;
	static int32_t t29 = 9102598;

	t29 = (x185<<(x186<(x187%x188)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x197 = 490U;
	int16_t x199 = 31;
	uint64_t x200 = UINT64_MAX;
	uint32_t t30 = 216060U;

	t30 = (x197<<(x198<(x199%x200)));

	if (t30 != 490U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;

	t31 = (x217<<(x218<(x219%x220)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x249 = 48U;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = -1;
	int32_t t32 = -84;

	t32 = (x249<<(x250<(x251%x252)));

	if (t32 != 48) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x266 = 27;
	int64_t x267 = -1LL;
	volatile int32_t x268 = INT32_MAX;
	uint64_t t33 = 3551LLU;

	t33 = (x265<<(x266<(x267%x268)));

	if (t33 != 12LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x273 = UINT8_MAX;
	int16_t x274 = -1;
	volatile int32_t x275 = INT32_MAX;
	static int32_t x276 = -1;
	int32_t t34 = 66495;

	t34 = (x273<<(x274<(x275%x276)));

	if (t34 != 510) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = 218;
	static int8_t x280 = -1;
	int32_t t35 = -14254605;

	t35 = (x277<<(x278<(x279%x280)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x285 = 1U;
	int8_t x286 = 8;
	static volatile uint8_t x287 = 5U;
	volatile int32_t t36 = 180;

	t36 = (x285<<(x286<(x287%x288)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x305 = 226;
	int64_t x306 = INT64_MAX;
	int16_t x307 = -1;
	volatile int64_t x308 = INT64_MAX;
	static volatile int32_t t37 = 3;

	t37 = (x305<<(x306<(x307%x308)));

	if (t37 != 226) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x310 = INT64_MIN;
	int8_t x312 = -1;

	t38 = (x309<<(x310<(x311%x312)));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x313 = 843797;
	uint16_t x315 = 22U;
	int32_t x316 = INT32_MIN;
	int32_t t39 = -124039540;

	t39 = (x313<<(x314<(x315%x316)));

	if (t39 != 1687594) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x325 = 165402304;
	static int16_t x326 = INT16_MIN;
	static uint16_t x327 = 1324U;
	static int8_t x328 = -1;
	volatile int32_t t40 = 1659;

	t40 = (x325<<(x326<(x327%x328)));

	if (t40 != 330804608) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x329 = 75721212U;
	uint64_t x330 = 283087027174085LLU;
	int8_t x331 = INT8_MAX;
	uint32_t t41 = 11929U;

	t41 = (x329<<(x330<(x331%x332)));

	if (t41 != 75721212U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x333 = 1502U;
	static uint32_t x335 = 7358U;
	uint8_t x336 = UINT8_MAX;

	t42 = (x333<<(x334<(x335%x336)));

	if (t42 != 3004) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x339 = 16U;
	static volatile int32_t x340 = -1;
	volatile uint32_t t43 = 15780220U;

	t43 = (x337<<(x338<(x339%x340)));

	if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x342 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	static int32_t t44 = -490250166;

	t44 = (x341<<(x342<(x343%x344)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x353 = UINT8_MAX;
	int64_t x356 = INT64_MIN;
	volatile int32_t t45 = -34086;

	t45 = (x353<<(x354<(x355%x356)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x361 = UINT32_MAX;
	static uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	uint32_t t46 = UINT32_MAX;

	t46 = (x361<<(x362<(x363%x364)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x365 = 22;
	int32_t x366 = 67256215;
	uint64_t x367 = 10109077188371878LLU;
	uint32_t x368 = UINT32_MAX;
	int32_t t47 = 104015448;

	t47 = (x365<<(x366<(x367%x368)));

	if (t47 != 44) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x369 = UINT8_MAX;
	static int16_t x370 = INT16_MIN;
	volatile int64_t x372 = INT64_MIN;
	int32_t t48 = -56;

	t48 = (x369<<(x370<(x371%x372)));

	if (t48 != 510) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = -2391;
	volatile int32_t x376 = INT32_MAX;
	static uint64_t t49 = 910LLU;

	t49 = (x373<<(x374<(x375%x376)));

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x377 = UINT16_MAX;
	static int64_t x378 = INT64_MIN;
	uint32_t x380 = 86540U;
	int32_t t50 = 2;

	t50 = (x377<<(x378<(x379%x380)));

	if (t50 != 131070) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x381 = 3314;
	int16_t x382 = INT16_MIN;
	int8_t x383 = -1;
	static volatile uint16_t x384 = 2U;
	volatile int32_t t51 = 60;

	t51 = (x381<<(x382<(x383%x384)));

	if (t51 != 6628) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x393 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (x393<<(x394<(x395%x396)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x397 = UINT64_MAX;
	static int64_t x399 = -1LL;
	volatile uint16_t x400 = 2217U;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x397<<(x398<(x399%x400)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x409 = 185044363U;
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MAX;

	t54 = (x409<<(x410<(x411%x412)));

	if (t54 != 185044363U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x417 = 1;
	uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = -45;

	t55 = (x417<<(x418<(x419%x420)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x433 = 29494U;
	volatile int8_t x434 = INT8_MIN;
	int8_t x435 = INT8_MIN;
	volatile int8_t x436 = INT8_MIN;

	t56 = (x433<<(x434<(x435%x436)));

	if (t56 != 58988U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x438 = INT64_MIN;
	int32_t x439 = -1;
	int16_t x440 = -1;
	int32_t t57 = -26753870;

	t57 = (x437<<(x438<(x439%x440)));

	if (t57 != 510) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x446 = UINT16_MAX;
	volatile int16_t x447 = 1184;
	int32_t x448 = -7427971;
	static volatile uint32_t t58 = UINT32_MAX;

	t58 = (x445<<(x446<(x447%x448)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x449 = 555906709U;
	volatile int64_t x450 = -1LL;
	static int64_t x451 = -1LL;
	static uint64_t x452 = 128405880LLU;

	t59 = (x449<<(x450<(x451%x452)));

	if (t59 != 555906709U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x453 = 67U;
	int8_t x454 = INT8_MAX;
	static uint8_t x455 = UINT8_MAX;
	volatile int32_t t60 = 61;

	t60 = (x453<<(x454<(x455%x456)));

	if (t60 != 67) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x465 = UINT64_MAX;
	static volatile uint64_t x467 = 71690436868672LLU;
	uint64_t t61 = 681089132LLU;

	t61 = (x465<<(x466<(x467%x468)));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x469 = UINT32_MAX;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = 480726311U;

	t62 = (x469<<(x470<(x471%x472)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x474 = INT32_MAX;
	volatile int32_t x475 = -17978;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t63 = -49;

	t63 = (x473<<(x474<(x475%x476)));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x477 = 59475561021LL;
	int8_t x479 = INT8_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile int64_t t64 = 584787041656LL;

	t64 = (x477<<(x478<(x479%x480)));

	if (t64 != 118951122042LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int8_t x482 = INT8_MIN;
	volatile int16_t x483 = -367;
	int16_t x484 = -1;
	static volatile uint64_t t65 = 4813440752LLU;

	t65 = (x481<<(x482<(x483%x484)));

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x493 = INT8_MAX;
	int64_t x494 = INT64_MIN;
	int8_t x496 = INT8_MAX;
	volatile int32_t t66 = -2921367;

	t66 = (x493<<(x494<(x495%x496)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x497 = 988;
	volatile uint64_t x498 = 449463LLU;
	volatile uint16_t x499 = 12090U;
	int8_t x500 = 1;

	t67 = (x497<<(x498<(x499%x500)));

	if (t67 != 988) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x501 = 430802354LLU;
	int8_t x503 = -1;
	int64_t x504 = -1LL;
	uint64_t t68 = 5820107789LLU;

	t68 = (x501<<(x502<(x503%x504)));

	if (t68 != 430802354LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x517 = 5127U;
	int32_t x518 = INT32_MIN;
	int32_t x519 = -1;
	volatile int32_t x520 = INT32_MAX;

	t69 = (x517<<(x518<(x519%x520)));

	if (t69 != 10254U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x533 = 257780U;
	static uint64_t x534 = 482164313260LLU;
	uint32_t t70 = 473548157U;

	t70 = (x533<<(x534<(x535%x536)));

	if (t70 != 515560U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x537 = 125177221;
	int32_t x538 = -13;
	int32_t x539 = INT32_MIN;
	int32_t t71 = -98422;

	t71 = (x537<<(x538<(x539%x540)));

	if (t71 != 125177221) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x554 = INT32_MIN;
	int64_t x555 = INT64_MAX;
	int16_t x556 = INT16_MIN;
	volatile uint32_t t72 = 8U;

	t72 = (x553<<(x554<(x555%x556)));

	if (t72 != 5161932U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x565 = 7465335;
	int64_t x566 = -75119487LL;
	uint16_t x567 = 2090U;
	int64_t x568 = INT64_MIN;
	int32_t t73 = 12115;

	t73 = (x565<<(x566<(x567%x568)));

	if (t73 != 14930670) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x573 = 25U;
	uint32_t x574 = UINT32_MAX;
	int8_t x575 = -60;
	int32_t x576 = INT32_MIN;

	t74 = (x573<<(x574<(x575%x576)));

	if (t74 != 25) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x578 = INT32_MIN;
	volatile int16_t x579 = 0;
	static uint16_t x580 = UINT16_MAX;

	t75 = (x577<<(x578<(x579%x580)));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x585 = 0U;
	int32_t x586 = -36508448;
	int32_t t76 = -575585;

	t76 = (x585<<(x586<(x587%x588)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x589 = 2U;
	static int16_t x590 = INT16_MIN;
	uint8_t x591 = 3U;
	int32_t x592 = 5;
	int32_t t77 = 247;

	t77 = (x589<<(x590<(x591%x592)));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x598 = INT16_MIN;
	uint32_t x599 = 366U;
	static volatile int16_t x600 = -43;
	int32_t t78 = 157200;

	t78 = (x597<<(x598<(x599%x600)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x605 = 1U;
	int32_t x606 = 24;
	int8_t x607 = INT8_MIN;
	int8_t x608 = 1;
	volatile int32_t t79 = 1020;

	t79 = (x605<<(x606<(x607%x608)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x621 = 29LLU;
	int32_t x622 = INT32_MAX;
	static uint16_t x623 = 1U;
	int32_t x624 = 313755;
	uint64_t t80 = 108568LLU;

	t80 = (x621<<(x622<(x623%x624)));

	if (t80 != 29LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x625 = INT16_MAX;
	static int32_t x626 = INT32_MAX;
	int8_t x627 = 0;
	uint32_t x628 = UINT32_MAX;

	t81 = (x625<<(x626<(x627%x628)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x629 = 268105370026351290LLU;
	static uint8_t x630 = 7U;
	volatile uint16_t x631 = 474U;
	uint16_t x632 = UINT16_MAX;
	uint64_t t82 = 185816089955301303LLU;

	t82 = (x629<<(x630<(x631%x632)));

	if (t82 != 536210740052702580LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x637 = UINT32_MAX;
	int64_t x638 = INT64_MIN;
	int32_t x640 = 35;

	t83 = (x637<<(x638<(x639%x640)));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x657 = UINT16_MAX;
	uint8_t x658 = UINT8_MAX;
	volatile int8_t x659 = INT8_MIN;
	uint64_t x660 = 15564958702517320LLU;
	int32_t t84 = -137691;

	t84 = (x657<<(x658<(x659%x660)));

	if (t84 != 131070) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x669 = 112;
	uint16_t x671 = 11U;
	int32_t t85 = -415;

	t85 = (x669<<(x670<(x671%x672)));

	if (t85 != 112) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x673 = 2U;
	uint8_t x674 = 2U;
	int16_t x675 = INT16_MIN;
	volatile int32_t t86 = 509284;

	t86 = (x673<<(x674<(x675%x676)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x685 = UINT64_MAX;
	static uint64_t x686 = 6240925396663604LLU;
	int64_t x687 = INT64_MIN;
	volatile uint64_t x688 = UINT64_MAX;
	uint64_t t87 = 7109824170934LLU;

	t87 = (x685<<(x686<(x687%x688)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x697 = 2;
	int64_t x698 = 3423331951LL;
	uint64_t x699 = 1008626LLU;
	int16_t x700 = INT16_MIN;
	int32_t t88 = 13545323;

	t88 = (x697<<(x698<(x699%x700)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x701 = 128LLU;
	int64_t x702 = -1LL;
	int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MIN;
	static uint64_t t89 = 46495085534735321LLU;

	t89 = (x701<<(x702<(x703%x704)));

	if (t89 != 256LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x706 = INT16_MAX;
	uint64_t x708 = 3977625641117596LLU;
	int32_t t90 = INT32_MAX;

	t90 = (x705<<(x706<(x707%x708)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x710 = INT8_MIN;
	static int32_t x711 = INT32_MAX;
	int32_t x712 = INT32_MIN;
	static volatile int64_t t91 = -899640830LL;

	t91 = (x709<<(x710<(x711%x712)));

	if (t91 != 3487153312228872LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x714 = 1;
	uint8_t x715 = 0U;
	static int16_t x716 = 1630;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x713<<(x714<(x715%x716)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x717 = 1LL;
	int8_t x718 = INT8_MIN;
	static uint8_t x719 = 29U;
	int64_t x720 = INT64_MIN;
	volatile int64_t t93 = 939LL;

	t93 = (x717<<(x718<(x719%x720)));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x740 = INT64_MAX;

	t94 = (x737<<(x738<(x739%x740)));

	if (t94 != 114) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MAX;
	uint32_t x744 = 850264157U;
	uint32_t t95 = 33569593U;

	t95 = (x741<<(x742<(x743%x744)));

	if (t95 != 480743812U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x745 = UINT64_MAX;
	volatile int16_t x746 = 4909;
	int8_t x747 = INT8_MIN;
	int16_t x748 = -1;
	static volatile uint64_t t96 = UINT64_MAX;

	t96 = (x745<<(x746<(x747%x748)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x753 = 11055U;
	int8_t x754 = 1;
	int64_t x755 = -474205LL;
	volatile int64_t x756 = -1LL;
	static uint32_t t97 = 944U;

	t97 = (x753<<(x754<(x755%x756)));

	if (t97 != 11055U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x762 = INT32_MIN;
	uint32_t x763 = UINT32_MAX;
	static int32_t x764 = -1;

	t98 = (x761<<(x762<(x763%x764)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x765 = 117185274522LLU;
	volatile int32_t x766 = -490;
	volatile int16_t x767 = INT16_MIN;
	volatile uint8_t x768 = UINT8_MAX;
	volatile uint64_t t99 = 231223934537980322LLU;

	t99 = (x765<<(x766<(x767%x768)));

	if (t99 != 234370549044LLU) { NG(); } else { ; }
	
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

