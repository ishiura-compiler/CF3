#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x2 = INT8_MIN;
static int16_t x11 = 4;
uint16_t x22 = 21U;
int32_t x27 = -1;
volatile int8_t x33 = INT8_MAX;
static uint8_t x47 = 98U;
static uint16_t x48 = 3U;
int32_t t8 = -549048749;
volatile int32_t t9 = INT32_MIN;
volatile int16_t x61 = 0;
int8_t x64 = -1;
volatile int32_t t11 = -2142051;
static uint8_t x77 = 2U;
int16_t x80 = -2731;
int32_t t14 = 108048;
int32_t x82 = -1;
static volatile int32_t t16 = -12333004;
uint32_t x95 = UINT32_MAX;
static volatile int8_t x103 = -1;
int64_t x105 = INT64_MAX;
int64_t x106 = -1LL;
int32_t x112 = -4;
volatile int64_t x129 = 0LL;
int32_t t24 = -660099566;
uint64_t x149 = 29045981114719LLU;
volatile int8_t x150 = 7;
int8_t x163 = 0;
int64_t x175 = -1LL;
int8_t x180 = 4;
int32_t t30 = 33652;
int16_t x183 = 1;
static int16_t x184 = 7496;
static int64_t x191 = -1002566195088LL;
uint64_t x192 = 484522374420631316LLU;
int64_t x197 = -1LL;
volatile uint16_t x201 = UINT16_MAX;
int16_t x211 = 651;
uint32_t x214 = 25183U;
uint16_t x222 = 22U;
uint32_t x223 = 1031142U;
static uint64_t x225 = 63164435503LLU;
int8_t x228 = INT8_MIN;
int64_t x248 = 5008LL;
uint32_t x255 = 882U;
volatile int32_t x262 = 1272589;
volatile int64_t t45 = 92469317007970LL;
uint16_t x275 = UINT16_MAX;
int64_t x277 = INT64_MIN;
static int32_t x278 = INT32_MAX;
static uint8_t x279 = UINT8_MAX;
int64_t x280 = -4200067856087224LL;
int8_t x289 = 5;
uint64_t x290 = UINT64_MAX;
int32_t t50 = -5;
static int8_t x302 = -40;
int32_t x314 = INT32_MAX;
uint64_t x316 = 4340872251LLU;
static uint64_t x327 = UINT64_MAX;
volatile uint8_t x328 = 102U;
int16_t x334 = INT16_MIN;
int32_t t57 = 2;
volatile uint32_t x347 = UINT32_MAX;
int16_t x357 = -1;
int32_t x363 = -1;
uint16_t x369 = 8589U;
uint32_t x375 = 1U;
int32_t x385 = INT32_MIN;
volatile int16_t x391 = 9638;
volatile int8_t x399 = 0;
volatile uint16_t x400 = 3565U;
int64_t t71 = 29223LL;
int32_t x407 = 534;
int16_t x409 = INT16_MAX;
uint32_t x411 = 2474U;
static uint8_t x412 = 3U;
static uint16_t x416 = UINT16_MAX;
uint8_t x423 = 1U;
int32_t x426 = INT32_MAX;
int32_t x429 = 538636439;
volatile int32_t x431 = -1;
int64_t x432 = -1LL;
volatile int16_t x434 = INT16_MIN;
volatile uint32_t x436 = 5586U;
int8_t x447 = -1;
volatile uint64_t t82 = 3031443008825LLU;
volatile int64_t x466 = INT64_MIN;
volatile int64_t x475 = -1LL;
int8_t x481 = INT8_MIN;
int8_t x486 = INT8_MAX;
static volatile int32_t x510 = INT32_MAX;
volatile int64_t x512 = -1LL;
int32_t t88 = 7692;
uint32_t x521 = 20538U;
volatile int64_t t91 = -107454LL;
uint16_t x548 = 0U;
volatile int32_t t94 = -14849;
static int32_t x551 = -1;
int16_t x552 = INT16_MIN;
volatile uint8_t x557 = 5U;
static int32_t t96 = 13023;
int32_t x569 = INT32_MIN;
int32_t t99 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	int16_t x3 = INT16_MIN;
	static int64_t x4 = -3794329480134LL;
	int32_t t0 = 1197701;

	t0 = (x1-(x2<=(x3*x4)));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 86U;
	uint64_t x6 = 3LLU;
	uint16_t x7 = UINT16_MAX;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

	t1 = (x5-(x6<=(x7*x8)));

	if (t1 != 85) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2033619086U;
	int16_t x10 = INT16_MIN;
	int64_t x12 = -14LL;
	volatile uint32_t t2 = 1272981709U;

	t2 = (x9-(x10<=(x11*x12)));

	if (t2 != 2033619085U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = 6;
	static uint16_t x23 = 16334U;
	uint8_t x24 = 0U;
	int32_t t3 = -34035402;

	t3 = (x21-(x22<=(x23*x24)));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 138113367LLU;
	uint64_t x26 = 1281942990073701LLU;
	static volatile int8_t x28 = 1;
	volatile uint64_t t4 = 764024341796614LLU;

	t4 = (x25-(x26<=(x27*x28)));

	if (t4 != 138113366LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = INT64_MAX;
	volatile uint16_t x35 = 289U;
	static int8_t x36 = -1;
	int32_t t5 = -34169;

	t5 = (x33-(x34<=(x35*x36)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = -1;
	static int64_t x39 = 318658816212872LL;
	volatile uint16_t x40 = 13U;
	static uint32_t t6 = 58554U;

	t6 = (x37-(x38<=(x39*x40)));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 16317U;
	int32_t t7 = INT32_MIN;

	t7 = (x45-(x46<=(x47*x48)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	volatile int32_t x50 = -1;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 11192314392644LLU;

	t8 = (x49-(x50<=(x51*x52)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = 4LLU;
	int8_t x55 = 0;
	int8_t x56 = INT8_MIN;

	t9 = (x53-(x54<=(x55*x56)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MAX;
	uint32_t x58 = 2359U;
	uint64_t x59 = 3440626318809LLU;
	static volatile int16_t x60 = 0;
	int32_t t10 = -12297;

	t10 = (x57-(x58<=(x59*x60)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x62 = INT16_MIN;
	int16_t x63 = 1698;

	t11 = (x61-(x62<=(x63*x64)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -19154669;
	volatile int16_t x70 = INT16_MAX;
	int32_t x71 = -1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t12 = 2966018;

	t12 = (x69-(x70<=(x71*x72)));

	if (t12 != -19154669) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	volatile int64_t x74 = -1LL;
	uint64_t x75 = UINT64_MAX;
	static uint8_t x76 = 3U;
	volatile int32_t t13 = -19;

	t13 = (x73-(x74<=(x75*x76)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x78 = INT64_MIN;
	volatile uint16_t x79 = UINT16_MAX;

	t14 = (x77-(x78<=(x79*x80)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 918U;
	static uint64_t x83 = 88986155627351035LLU;
	static int8_t x84 = -43;
	int32_t t15 = 23810;

	t15 = (x81-(x82<=(x83*x84)));

	if (t15 != 918) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = -2;
	static uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 83575031487309034LLU;
	int8_t x92 = INT8_MAX;

	t16 = (x89-(x90<=(x91*x92)));

	if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = 507;
	uint16_t x94 = UINT16_MAX;
	volatile int8_t x96 = INT8_MIN;
	static int32_t t17 = -2300988;

	t17 = (x93-(x94<=(x95*x96)));

	if (t17 != 507) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = 8149856;
	uint32_t x102 = 3U;
	uint64_t x104 = 6758685334LLU;
	int32_t t18 = 1123;

	t18 = (x101-(x102<=(x103*x104)));

	if (t18 != 8149855) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x107 = 0U;
	uint16_t x108 = 71U;
	volatile int64_t t19 = -1653972310497282LL;

	t19 = (x105-(x106<=(x107*x108)));

	if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = -1;
	int16_t x111 = INT16_MIN;
	uint64_t t20 = 12713866847567LLU;

	t20 = (x109-(x110<=(x111*x112)));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	int32_t x120 = 27320449;
	int32_t t21 = -254991;

	t21 = (x117-(x118<=(x119*x120)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	volatile int64_t t22 = -65728LL;

	t22 = (x129-(x130<=(x131*x132)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 2683U;
	int32_t t23 = -946567;

	t23 = (x141-(x142<=(x143*x144)));

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = 60U;
	static volatile uint64_t x146 = 7467LLU;
	int8_t x147 = -21;
	static int32_t x148 = 3095443;

	t24 = (x145-(x146<=(x147*x148)));

	if (t24 != 59) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x151 = -1;
	static volatile uint16_t x152 = UINT16_MAX;
	uint64_t t25 = 1888810065987345LLU;

	t25 = (x149-(x150<=(x151*x152)));

	if (t25 != 29045981114719LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x157 = -19476944037168647LL;
	static int32_t x158 = -1;
	static uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = INT64_MIN;
	int64_t t26 = 718916172523960534LL;

	t26 = (x157-(x158<=(x159*x160)));

	if (t26 != -19476944037168647LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x161 = 57U;
	uint16_t x162 = 23U;
	uint16_t x164 = 212U;
	int32_t t27 = -957;

	t27 = (x161-(x162<=(x163*x164)));

	if (t27 != 57) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = 0;
	static volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -1233;
	volatile int32_t t28 = 515768;

	t28 = (x169-(x170<=(x171*x172)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	uint32_t x176 = 11068954U;
	int32_t t29 = INT32_MAX;

	t29 = (x173-(x174<=(x175*x176)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -3;
	int8_t x179 = INT8_MAX;

	t30 = (x177-(x178<=(x179*x180)));

	if (t30 != -129) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = -1;
	int8_t x182 = -1;
	volatile int32_t t31 = 236;

	t31 = (x181-(x182<=(x183*x184)));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x189 = INT8_MAX;
	int32_t x190 = 15943233;
	volatile int32_t t32 = 10981474;

	t32 = (x189-(x190<=(x191*x192)));

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 115U;
	volatile uint64_t x194 = 55LLU;
	int8_t x195 = -1;
	static uint32_t x196 = 3362999U;
	int32_t t33 = 0;

	t33 = (x193-(x194<=(x195*x196)));

	if (t33 != 114) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x198 = INT32_MIN;
	int32_t x199 = -1;
	int64_t x200 = 23LL;
	volatile int64_t t34 = 1050777LL;

	t34 = (x197-(x198<=(x199*x200)));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x202 = -1LL;
	uint8_t x203 = 8U;
	int8_t x204 = 0;
	int32_t t35 = -38;

	t35 = (x201-(x202<=(x203*x204)));

	if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = 516541U;
	uint8_t x208 = 86U;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x205-(x206<=(x207*x208)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x209 = -13;
	static int8_t x210 = 4;
	int8_t x212 = INT8_MIN;
	volatile int32_t t37 = 5;

	t37 = (x209-(x210<=(x211*x212)));

	if (t37 != -13) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x213 = 24U;
	uint8_t x215 = 28U;
	uint8_t x216 = 1U;
	static volatile int32_t t38 = 529254867;

	t38 = (x213-(x214<=(x215*x216)));

	if (t38 != 24) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	static volatile int32_t t39 = 3;

	t39 = (x221-(x222<=(x223*x224)));

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = -2438;
	int16_t x227 = INT16_MAX;
	uint64_t t40 = 14386912LLU;

	t40 = (x225-(x226<=(x227*x228)));

	if (t40 != 63164435503LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = -1;
	volatile int16_t x230 = INT16_MIN;
	static uint32_t x231 = 57122427U;
	static int16_t x232 = -1;
	int32_t t41 = 3501089;

	t41 = (x229-(x230<=(x231*x232)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x233 = 14273LL;
	uint8_t x234 = 45U;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	volatile int64_t t42 = -185430350LL;

	t42 = (x233-(x234<=(x235*x236)));

	if (t42 != 14273LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = INT8_MIN;
	volatile int64_t x246 = -24228301131974762LL;
	static volatile uint64_t x247 = 13920841079LLU;
	int32_t t43 = 25835486;

	t43 = (x245-(x246<=(x247*x248)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x253 = -1;
	static int8_t x254 = INT8_MAX;
	static int16_t x256 = -8;
	volatile int32_t t44 = -2097823;

	t44 = (x253-(x254<=(x255*x256)));

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x261 = 1008122973LL;
	int8_t x263 = 13;
	volatile int64_t x264 = 6LL;

	t45 = (x261-(x262<=(x263*x264)));

	if (t45 != 1008122973LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x273 = UINT8_MAX;
	uint8_t x274 = 1U;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t46 = 281;

	t46 = (x273-(x274<=(x275*x276)));

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t t47 = INT64_MIN;

	t47 = (x277-(x278<=(x279*x280)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x281 = -1;
	int32_t x282 = -498521;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = 2;
	static int32_t t48 = 1289;

	t48 = (x281-(x282<=(x283*x284)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x285 = -1;
	volatile int64_t x286 = -4LL;
	volatile int8_t x287 = -1;
	int8_t x288 = -1;
	volatile int32_t t49 = -223;

	t49 = (x285-(x286<=(x287*x288)));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x291 = INT16_MAX;
	int8_t x292 = 0;

	t50 = (x289-(x290<=(x291*x292)));

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = 41U;
	int32_t x298 = INT32_MAX;
	int64_t x299 = 378914LL;
	int8_t x300 = INT8_MIN;
	static int32_t t51 = -123402258;

	t51 = (x297-(x298<=(x299*x300)));

	if (t51 != 41) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x301 = 64556U;
	int32_t x303 = -34234;
	volatile uint64_t x304 = 4532808LLU;
	uint32_t t52 = 17706461U;

	t52 = (x301-(x302<=(x303*x304)));

	if (t52 != 64556U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x305 = 2U;
	volatile int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = 3U;
	static int32_t t53 = -7323971;

	t53 = (x305-(x306<=(x307*x308)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x313 = -1;
	int64_t x315 = INT64_MIN;
	int32_t t54 = -206;

	t54 = (x313-(x314<=(x315*x316)));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x325 = INT8_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	volatile int32_t t55 = 866310498;

	t55 = (x325-(x326<=(x327*x328)));

	if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = 31;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t56 = -7429;

	t56 = (x333-(x334<=(x335*x336)));

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x337 = INT16_MIN;
	static int8_t x338 = 52;
	uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = INT8_MIN;

	t57 = (x337-(x338<=(x339*x340)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	static int8_t x342 = 4;
	uint16_t x343 = UINT16_MAX;
	static int16_t x344 = INT16_MIN;
	int32_t t58 = -27;

	t58 = (x341-(x342<=(x343*x344)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x345 = 5U;
	static volatile uint32_t x346 = 56365U;
	int16_t x348 = -48;
	static int32_t t59 = -1;

	t59 = (x345-(x346<=(x347*x348)));

	if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x349 = INT32_MAX;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = -15;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x349-(x350<=(x351*x352)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x353 = -1;
	volatile uint16_t x354 = 9534U;
	static volatile uint64_t x355 = 7892137736511LLU;
	uint16_t x356 = 1161U;
	volatile int32_t t61 = 12065313;

	t61 = (x353-(x354<=(x355*x356)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	volatile int8_t x360 = INT8_MIN;
	int32_t t62 = -9;

	t62 = (x357-(x358<=(x359*x360)));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 7U;
	uint8_t x364 = 98U;
	int32_t t63 = 49;

	t63 = (x361-(x362<=(x363*x364)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 21U;
	int32_t x366 = INT32_MAX;
	int16_t x367 = -564;
	int8_t x368 = INT8_MIN;
	int32_t t64 = -15015;

	t64 = (x365-(x366<=(x367*x368)));

	if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x370 = 413;
	int32_t x371 = -61;
	uint8_t x372 = 88U;
	static int32_t t65 = 671753;

	t65 = (x369-(x370<=(x371*x372)));

	if (t65 != 8589) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 59U;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t66 = 557620;

	t66 = (x373-(x374<=(x375*x376)));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = UINT64_MAX;
	static uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 769840LLU;
	static int32_t t67 = INT32_MIN;

	t67 = (x381-(x382<=(x383*x384)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x385-(x386<=(x387*x388)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x389 = 82065679;
	int64_t x390 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	volatile int32_t t69 = 0;

	t69 = (x389-(x390<=(x391*x392)));

	if (t69 != 82065678) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x397 = INT16_MIN;
	volatile int32_t x398 = INT32_MIN;
	static volatile int32_t t70 = 174;

	t70 = (x397-(x398<=(x399*x400)));

	if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x401 = INT64_MAX;
	int8_t x402 = 22;
	uint16_t x403 = 6763U;
	static volatile uint64_t x404 = 1865982LLU;

	t71 = (x401-(x402<=(x403*x404)));

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x405 = 14384;
	static int32_t x406 = 872758;
	uint16_t x408 = UINT16_MAX;
	int32_t t72 = 0;

	t72 = (x405-(x406<=(x407*x408)));

	if (t72 != 14383) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x410 = 1788LLU;
	volatile int32_t t73 = 2682091;

	t73 = (x409-(x410<=(x411*x412)));

	if (t73 != 32766) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x413 = -1;
	static int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	volatile int32_t t74 = -671203191;

	t74 = (x413-(x414<=(x415*x416)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x417 = -459;
	static uint8_t x418 = 8U;
	uint8_t x419 = 7U;
	static uint16_t x420 = 44U;
	volatile int32_t t75 = -190;

	t75 = (x417-(x418<=(x419*x420)));

	if (t75 != -460) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x421 = -1LL;
	volatile int64_t x422 = 45878482LL;
	uint64_t x424 = UINT64_MAX;
	static int64_t t76 = -12984522201LL;

	t76 = (x421-(x422<=(x423*x424)));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -5947;
	static volatile uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 3895U;
	volatile int32_t t77 = -6563;

	t77 = (x425-(x426<=(x427*x428)));

	if (t77 != -5948) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x430 = -1;
	int32_t t78 = -21276504;

	t78 = (x429-(x430<=(x431*x432)));

	if (t78 != 538636438) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x433 = UINT32_MAX;
	uint8_t x435 = 0U;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (x433-(x434<=(x435*x436)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x441 = INT32_MIN;
	int16_t x442 = -1;
	int8_t x443 = -1;
	int32_t x444 = 896798846;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x441-(x442<=(x443*x444)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x445 = INT8_MIN;
	static int64_t x446 = INT64_MIN;
	int8_t x448 = -1;
	volatile int32_t t81 = 1;

	t81 = (x445-(x446<=(x447*x448)));

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x453 = 1878LLU;
	int8_t x454 = INT8_MIN;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = 3U;

	t82 = (x453-(x454<=(x455*x456)));

	if (t82 != 1878LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x465 = 6U;
	volatile int32_t x467 = -68744;
	int64_t x468 = -1LL;
	volatile int32_t t83 = 13;

	t83 = (x465-(x466<=(x467*x468)));

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x473 = UINT32_MAX;
	static uint32_t x474 = 1251870905U;
	int16_t x476 = -1;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x473-(x474<=(x475*x476)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x482 = INT8_MAX;
	int8_t x483 = -49;
	static volatile uint64_t x484 = UINT64_MAX;
	volatile int32_t t85 = -1843688;

	t85 = (x481-(x482<=(x483*x484)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x485 = 0;
	volatile uint16_t x487 = 5U;
	uint16_t x488 = UINT16_MAX;
	int32_t t86 = -4334;

	t86 = (x485-(x486<=(x487*x488)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x493 = 1087220;
	int64_t x494 = -1LL;
	int8_t x495 = INT8_MIN;
	volatile int8_t x496 = INT8_MIN;
	volatile int32_t t87 = -1005790;

	t87 = (x493-(x494<=(x495*x496)));

	if (t87 != 1087219) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x509 = INT8_MIN;
	static uint16_t x511 = 2716U;

	t88 = (x509-(x510<=(x511*x512)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x522 = -1;
	volatile int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MIN;
	volatile uint32_t t89 = 13U;

	t89 = (x521-(x522<=(x523*x524)));

	if (t89 != 20537U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x529 = 602020053;
	int16_t x530 = INT16_MIN;
	volatile int16_t x531 = INT16_MIN;
	uint8_t x532 = UINT8_MAX;
	static int32_t t90 = -506;

	t90 = (x529-(x530<=(x531*x532)));

	if (t90 != 602020053) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x533 = INT64_MAX;
	static int32_t x534 = 0;
	int64_t x535 = 3496703273025LL;
	uint16_t x536 = 1U;

	t91 = (x533-(x534<=(x535*x536)));

	if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x537 = -248162;
	uint64_t x538 = 8261394331LLU;
	static int32_t x539 = INT32_MIN;
	uint32_t x540 = 1762588U;
	volatile int32_t t92 = 41351;

	t92 = (x537-(x538<=(x539*x540)));

	if (t92 != -248162) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x541 = INT64_MAX;
	static int64_t x542 = -1LL;
	int8_t x543 = 35;
	uint64_t x544 = UINT64_MAX;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x541-(x542<=(x543*x544)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x545 = INT8_MIN;
	uint64_t x546 = UINT64_MAX;
	static int8_t x547 = -1;

	t94 = (x545-(x546<=(x547*x548)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x549 = 2848U;
	uint64_t x550 = 4776958932050LLU;
	static int32_t t95 = -480250473;

	t95 = (x549-(x550<=(x551*x552)));

	if (t95 != 2848) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x558 = 16302U;
	int64_t x559 = INT64_MAX;
	int32_t x560 = -1;

	t96 = (x557-(x558<=(x559*x560)));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x561 = -1;
	int64_t x562 = INT64_MIN;
	int32_t x563 = 50;
	int64_t x564 = -1LL;
	static volatile int32_t t97 = 286926;

	t97 = (x561-(x562<=(x563*x564)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x565 = 14;
	uint64_t x566 = 74351511481520LLU;
	int64_t x567 = -1LL;
	int64_t x568 = 168914835559LL;
	int32_t t98 = 9116;

	t98 = (x565-(x566<=(x567*x568)));

	if (t98 != 13) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x570 = INT16_MIN;
	int64_t x571 = -75128826117LL;
	uint32_t x572 = 115U;

	t99 = (x569-(x570<=(x571*x572)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

