#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 66U;
uint64_t x13 = 543929361398LLU;
volatile int32_t x14 = 12062;
uint64_t x15 = UINT64_MAX;
int64_t x41 = -1LL;
volatile int8_t x42 = 52;
int64_t x55 = INT64_MAX;
volatile int64_t x56 = INT64_MAX;
uint64_t x69 = 144767347LLU;
static int32_t x75 = -6011113;
int16_t x81 = 38;
int64_t x82 = INT64_MIN;
int16_t x85 = 1;
int32_t t11 = -17959341;
volatile int32_t x94 = -98530427;
int32_t x103 = INT32_MIN;
volatile uint16_t x113 = UINT16_MAX;
volatile int32_t t16 = 26464;
int32_t x143 = INT32_MIN;
static int32_t x150 = INT32_MAX;
volatile int32_t t18 = 315;
static int32_t t19 = 169168195;
static uint16_t x175 = 433U;
uint8_t x179 = UINT8_MAX;
volatile uint8_t x190 = 12U;
int8_t x198 = 7;
int32_t t26 = 0;
int16_t x222 = INT16_MIN;
volatile int32_t t28 = -22607227;
int16_t x226 = INT16_MIN;
int32_t x227 = -3;
int8_t x231 = INT8_MAX;
volatile uint8_t x234 = 3U;
static int32_t x235 = 2;
int32_t x243 = 379310;
uint16_t x244 = UINT16_MAX;
uint64_t x252 = 644527217LLU;
uint16_t x254 = UINT16_MAX;
volatile int32_t t35 = -5218;
int64_t t37 = -208334LL;
uint32_t x281 = 520004U;
static int64_t x301 = -24561794438353687LL;
volatile int64_t t40 = -7192581779154LL;
int8_t x322 = INT8_MAX;
int32_t x328 = -96921870;
int16_t x341 = INT16_MIN;
int16_t x361 = INT16_MAX;
uint8_t x363 = 22U;
uint32_t t48 = 614932564U;
volatile uint64_t t49 = 48942836LLU;
uint8_t x411 = 3U;
uint8_t x419 = UINT8_MAX;
int32_t t52 = 2;
int64_t x453 = -1LL;
int32_t t56 = 59428;
volatile int64_t x498 = -1LL;
uint16_t x499 = UINT16_MAX;
volatile int8_t x500 = INT8_MIN;
static volatile uint8_t x534 = UINT8_MAX;
uint32_t x554 = 3U;
volatile int16_t x563 = INT16_MIN;
volatile int64_t t63 = -42232865229LL;
int64_t x566 = INT64_MIN;
int32_t t64 = 28699670;
volatile int16_t x575 = -398;
uint32_t x576 = 387538U;
int8_t x578 = INT8_MIN;
int64_t x580 = -19022639LL;
volatile int32_t x608 = INT32_MIN;
int16_t x641 = -1;
uint8_t x644 = 0U;
static int32_t t71 = 241;
uint16_t x670 = 12U;
uint16_t x671 = 300U;
int8_t x672 = INT8_MIN;
int32_t x674 = INT32_MIN;
int32_t x684 = -129;
volatile uint32_t x707 = 129147U;
static int8_t x716 = INT8_MAX;
volatile int32_t t80 = -402;
int64_t x733 = INT64_MAX;
int64_t x734 = INT64_MIN;
int64_t x735 = -3645926424LL;
int8_t x736 = INT8_MIN;
int32_t x739 = -443;
volatile int16_t x741 = INT16_MIN;
int8_t x744 = INT8_MAX;
volatile int32_t x753 = INT32_MIN;
volatile int16_t x754 = 1724;
uint16_t x756 = 2525U;
uint16_t x764 = UINT16_MAX;
volatile int32_t t87 = 198;
int16_t x775 = -1;
int8_t x777 = 0;
uint64_t x788 = 2839661LLU;
volatile int64_t t90 = 13836599LL;
int64_t x799 = -14LL;
volatile int64_t x805 = INT64_MIN;
volatile uint16_t x807 = 2U;
int64_t t94 = -17547334608742963LL;
int16_t x811 = 2153;
uint8_t x825 = 58U;
volatile int32_t t98 = -255;
int8_t x829 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint8_t x2 = 108U;
	uint64_t x3 = UINT64_MAX;
	static volatile uint8_t x4 = 67U;
	uint32_t t0 = 96U;

	t0 = (x1%(x2<=(x3-x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 4547U;
	volatile uint32_t x10 = 933U;
	uint8_t x11 = 16U;
	uint64_t x12 = 249450918634451790LLU;

	t1 = (x9%(x10<=(x11-x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x16 = 23;
	volatile uint64_t t2 = 87407721LLU;

	t2 = (x13%(x14<=(x15-x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t3 = 0LL;

	t3 = (x41%(x42<=(x43-x44)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MIN;
	static volatile int32_t x51 = INT32_MIN;
	int8_t x52 = -15;
	volatile uint64_t t4 = 23LLU;

	t4 = (x49%(x50<=(x51-x52)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x53 = 59947361LLU;
	int64_t x54 = INT64_MIN;
	volatile uint64_t t5 = 147470002786144LLU;

	t5 = (x53%(x54<=(x55-x56)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x61 = 44U;
	int8_t x62 = -1;
	volatile int16_t x63 = -1;
	int64_t x64 = -107820192373LL;
	volatile uint32_t t6 = 261504038U;

	t6 = (x61%(x62<=(x63-x64)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -1;
	uint32_t x68 = 8546U;
	volatile int32_t t7 = 7;

	t7 = (x65%(x66<=(x67-x68)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x70 = 0;
	int8_t x71 = INT8_MAX;
	static volatile uint32_t x72 = 19409166U;
	uint64_t t8 = 179945LLU;

	t8 = (x69%(x70<=(x71-x72)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x74 = UINT8_MAX;
	static int32_t x76 = INT32_MIN;
	static int32_t t9 = -1;

	t9 = (x73%(x74<=(x75-x76)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x83 = 0;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t10 = 0;

	t10 = (x81%(x82<=(x83-x84)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x86 = INT16_MAX;
	int8_t x87 = -1;
	static int64_t x88 = -354553657214LL;

	t11 = (x85%(x86<=(x87-x88)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = 5U;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = 6;
	static int32_t t12 = 88841000;

	t12 = (x93%(x94<=(x95-x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = 3327928;
	uint64_t x104 = 3LLU;
	volatile int64_t t13 = -6922090141011994LL;

	t13 = (x101%(x102<=(x103-x104)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x114 = 993U;
	volatile int16_t x115 = -1;
	static int64_t x116 = INT64_MIN;
	int32_t t14 = 802497992;

	t14 = (x113%(x114<=(x115-x116)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	int16_t x131 = 35;
	static int8_t x132 = INT8_MIN;
	int64_t t15 = -213846457LL;

	t15 = (x129%(x130<=(x131-x132)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x133 = 16;
	uint32_t x134 = 125605991U;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -1;

	t16 = (x133%(x134<=(x135-x136)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x141 = 17U;
	static uint32_t x142 = 43470662U;
	int32_t x144 = -43625;
	static volatile int32_t t17 = 147;

	t17 = (x141%(x142<=(x143-x144)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x149 = 45416;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = UINT8_MAX;

	t18 = (x149%(x150<=(x151-x152)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x157 = 48U;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = -1;
	static int32_t x160 = -134138158;

	t19 = (x157%(x158<=(x159-x160)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = -1LL;
	int64_t x162 = INT64_MIN;
	volatile int8_t x163 = INT8_MIN;
	uint64_t x164 = UINT64_MAX;
	volatile int64_t t20 = -589884013866402LL;

	t20 = (x161%(x162<=(x163-x164)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x173 = 18;
	static int16_t x174 = -1;
	static int16_t x176 = -181;
	int32_t t21 = 0;

	t21 = (x173%(x174<=(x175-x176)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x177 = UINT16_MAX;
	uint16_t x178 = 1U;
	uint64_t x180 = 142327385LLU;
	static int32_t t22 = -720703882;

	t22 = (x177%(x178<=(x179-x180)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x181 = 0;
	static int64_t x182 = INT64_MIN;
	static int8_t x183 = -1;
	int64_t x184 = INT64_MAX;
	static int32_t t23 = 3;

	t23 = (x181%(x182<=(x183-x184)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x189 = 469U;
	uint64_t x191 = 14207311685001LLU;
	static int32_t x192 = 321;
	static volatile int32_t t24 = 733415690;

	t24 = (x189%(x190<=(x191-x192)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x197 = 1;
	static int32_t x199 = INT32_MAX;
	uint32_t x200 = UINT32_MAX;
	static volatile int32_t t25 = -85418452;

	t25 = (x197%(x198<=(x199-x200)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x205 = INT32_MAX;
	static volatile int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	volatile uint64_t x208 = 89LLU;

	t26 = (x205%(x206<=(x207-x208)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x209 = -1;
	uint32_t x210 = 1506751650U;
	int8_t x211 = -4;
	volatile int32_t x212 = 1084;
	int32_t t27 = -54;

	t27 = (x209%(x210<=(x211-x212)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x221 = -1;
	int16_t x223 = -1;
	int8_t x224 = 2;

	t28 = (x221%(x222<=(x223-x224)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x228 = -1;
	volatile int32_t t29 = 851504;

	t29 = (x225%(x226<=(x227-x228)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x229 = INT64_MIN;
	volatile int64_t x230 = INT64_MIN;
	uint32_t x232 = 1U;
	static volatile int64_t t30 = 8127524311LL;

	t30 = (x229%(x230<=(x231-x232)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x233 = -1;
	uint64_t x236 = UINT64_MAX;
	int32_t t31 = 13;

	t31 = (x233%(x234<=(x235-x236)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = INT8_MIN;
	static int64_t t32 = -247311807LL;

	t32 = (x241%(x242<=(x243-x244)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x245 = INT32_MIN;
	uint8_t x246 = 6U;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = -1;
	volatile int32_t t33 = 904146060;

	t33 = (x245%(x246<=(x247-x248)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x249 = 611802972;
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 987981U;
	volatile int32_t t34 = 8334773;

	t34 = (x249%(x250<=(x251-x252)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	volatile uint64_t x256 = 118229LLU;

	t35 = (x253%(x254<=(x255-x256)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x257 = INT16_MAX;
	int32_t x258 = 5760586;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int32_t t36 = 50212605;

	t36 = (x257%(x258<=(x259-x260)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x261 = INT64_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	uint32_t x263 = UINT32_MAX;
	static int16_t x264 = INT16_MIN;

	t37 = (x261%(x262<=(x263-x264)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x282 = INT64_MIN;
	int8_t x283 = 44;
	static volatile int16_t x284 = INT16_MIN;
	volatile uint32_t t38 = 566519538U;

	t38 = (x281%(x282<=(x283-x284)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x289 = 358;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 62U;
	volatile int8_t x292 = -1;
	int32_t t39 = 339795;

	t39 = (x289%(x290<=(x291-x292)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x302 = 2965;
	static int32_t x303 = 2586026;
	static uint64_t x304 = 1810201LLU;

	t40 = (x301%(x302<=(x303-x304)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x313 = 8;
	int16_t x314 = -1;
	int64_t x315 = 435737LL;
	int8_t x316 = -1;
	static volatile int32_t t41 = 838667;

	t41 = (x313%(x314<=(x315-x316)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x321 = 1;
	uint8_t x323 = 115U;
	static int64_t x324 = -37432417LL;
	int32_t t42 = -6;

	t42 = (x321%(x322<=(x323-x324)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;
	static int8_t x327 = -1;
	int32_t t43 = -20154;

	t43 = (x325%(x326<=(x327-x328)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x337 = 2U;
	volatile int64_t x338 = -945LL;
	int8_t x339 = 31;
	int16_t x340 = INT16_MIN;
	volatile int32_t t44 = 9519543;

	t44 = (x337%(x338<=(x339-x340)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x342 = INT32_MAX;
	uint64_t x343 = 1060278613830334LLU;
	int8_t x344 = INT8_MIN;
	volatile int32_t t45 = -1;

	t45 = (x341%(x342<=(x343-x344)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x362 = -6;
	static int16_t x364 = -1;
	volatile int32_t t46 = -451;

	t46 = (x361%(x362<=(x363-x364)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x373 = -5337625953383LL;
	int8_t x374 = INT8_MAX;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	int64_t t47 = -119377145726952LL;

	t47 = (x373%(x374<=(x375-x376)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x393 = 13U;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -3067;
	uint64_t x396 = UINT64_MAX;

	t48 = (x393%(x394<=(x395-x396)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x401 = 4501LLU;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	uint16_t x404 = 16U;

	t49 = (x401%(x402<=(x403-x404)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x409 = 36;
	static int8_t x410 = INT8_MIN;
	int16_t x412 = -3767;
	volatile int32_t t50 = 48;

	t50 = (x409%(x410<=(x411-x412)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x417 = 1;
	uint64_t x418 = 156LLU;
	int32_t x420 = -841;
	volatile int32_t t51 = 157778675;

	t51 = (x417%(x418<=(x419-x420)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x429 = 81U;
	int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MIN;
	int8_t x432 = -1;

	t52 = (x429%(x430<=(x431-x432)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x454 = INT16_MAX;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MAX;
	volatile int64_t t53 = 96064089LL;

	t53 = (x453%(x454<=(x455-x456)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x465 = INT8_MAX;
	static int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MIN;
	volatile uint64_t x468 = 9175120LLU;
	static int32_t t54 = -645765379;

	t54 = (x465%(x466<=(x467-x468)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x469 = 1;
	static int64_t x470 = INT64_MIN;
	volatile uint32_t x471 = 66565U;
	volatile int64_t x472 = -539254680214456LL;
	int32_t t55 = -957;

	t55 = (x469%(x470<=(x471-x472)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x489 = INT32_MIN;
	int32_t x490 = -173;
	uint16_t x491 = UINT16_MAX;
	static int8_t x492 = INT8_MIN;

	t56 = (x489%(x490<=(x491-x492)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x497 = UINT8_MAX;
	int32_t t57 = 44026;

	t57 = (x497%(x498<=(x499-x500)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x525 = -5;
	static volatile int8_t x526 = INT8_MIN;
	int16_t x527 = 4;
	int8_t x528 = INT8_MAX;
	static volatile int32_t t58 = -3082995;

	t58 = (x525%(x526<=(x527-x528)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x533 = 0U;
	static uint8_t x535 = UINT8_MAX;
	static uint32_t x536 = UINT32_MAX;
	int32_t t59 = 8661687;

	t59 = (x533%(x534<=(x535-x536)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x549 = 4258U;
	static uint64_t x550 = 1330581534LLU;
	int32_t x551 = 9;
	int32_t x552 = INT32_MAX;
	uint32_t t60 = 657344537U;

	t60 = (x549%(x550<=(x551-x552)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x553 = INT16_MIN;
	int16_t x555 = -9;
	volatile int16_t x556 = INT16_MIN;
	static int32_t t61 = 15903;

	t61 = (x553%(x554<=(x555-x556)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x557 = INT8_MAX;
	int64_t x558 = -32284990266LL;
	volatile int32_t x559 = INT32_MIN;
	uint64_t x560 = 84147529LLU;
	int32_t t62 = -51100;

	t62 = (x557%(x558<=(x559-x560)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x561 = -312112459664975LL;
	int64_t x562 = -2121089LL;
	int16_t x564 = INT16_MAX;

	t63 = (x561%(x562<=(x563-x564)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x565 = UINT16_MAX;
	int8_t x567 = INT8_MIN;
	static int32_t x568 = INT32_MIN;

	t64 = (x565%(x566<=(x567-x568)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x573 = INT32_MIN;
	static int32_t x574 = INT32_MAX;
	static int32_t t65 = -5832;

	t65 = (x573%(x574<=(x575-x576)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x577 = INT32_MAX;
	volatile uint32_t x579 = 6U;
	volatile int32_t t66 = 4215;

	t66 = (x577%(x578<=(x579-x580)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x605 = INT16_MAX;
	static int8_t x606 = INT8_MAX;
	int64_t x607 = -1456LL;
	volatile int32_t t67 = -11690;

	t67 = (x605%(x606<=(x607-x608)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x613 = 515463U;
	int64_t x614 = INT64_MIN;
	volatile int64_t x615 = 1752714413009LL;
	int16_t x616 = 104;
	volatile uint32_t t68 = 1278150137U;

	t68 = (x613%(x614<=(x615-x616)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x617 = INT64_MIN;
	int32_t x618 = -1;
	uint8_t x619 = UINT8_MAX;
	int64_t x620 = -1LL;
	volatile int64_t t69 = -947925564914590LL;

	t69 = (x617%(x618<=(x619-x620)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x633 = 1;
	volatile int8_t x634 = INT8_MIN;
	volatile int64_t x635 = -187150084280LL;
	int64_t x636 = INT64_MIN;
	volatile int32_t t70 = -92450;

	t70 = (x633%(x634<=(x635-x636)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x642 = -1;
	int16_t x643 = INT16_MAX;

	t71 = (x641%(x642<=(x643-x644)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x661 = INT64_MAX;
	volatile uint16_t x662 = UINT16_MAX;
	uint64_t x663 = UINT64_MAX;
	int16_t x664 = 936;
	int64_t t72 = 7386673LL;

	t72 = (x661%(x662<=(x663-x664)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x665 = INT64_MAX;
	static volatile uint64_t x666 = 37477506LLU;
	int64_t x667 = -81LL;
	volatile int8_t x668 = INT8_MAX;
	int64_t t73 = -180873712LL;

	t73 = (x665%(x666<=(x667-x668)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x669 = UINT32_MAX;
	uint32_t t74 = 45125U;

	t74 = (x669%(x670<=(x671-x672)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x673 = 5;
	static int64_t x675 = -1432126766436LL;
	int64_t x676 = INT64_MIN;
	int32_t t75 = 85060;

	t75 = (x673%(x674<=(x675-x676)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x681 = INT8_MIN;
	static volatile uint32_t x682 = 0U;
	int16_t x683 = INT16_MAX;
	static int32_t t76 = 76553131;

	t76 = (x681%(x682<=(x683-x684)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x697 = INT64_MIN;
	int16_t x698 = INT16_MIN;
	int8_t x699 = -1;
	volatile uint16_t x700 = 193U;
	volatile int64_t t77 = -3411037027838LL;

	t77 = (x697%(x698<=(x699-x700)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x705 = 6843036403855462LL;
	int64_t x706 = -1LL;
	int8_t x708 = INT8_MIN;
	volatile int64_t t78 = -5346763050743LL;

	t78 = (x705%(x706<=(x707-x708)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x709 = 10U;
	static int32_t x710 = INT32_MIN;
	int16_t x711 = INT16_MAX;
	volatile uint8_t x712 = UINT8_MAX;
	int32_t t79 = 7701523;

	t79 = (x709%(x710<=(x711-x712)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x713 = 0;
	int64_t x714 = -3558864595362498LL;
	int16_t x715 = INT16_MAX;

	t80 = (x713%(x714<=(x715-x716)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x717 = INT32_MIN;
	static int16_t x718 = INT16_MAX;
	uint32_t x719 = 266U;
	static volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t81 = -1884208;

	t81 = (x717%(x718<=(x719-x720)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x729 = 15;
	int16_t x730 = INT16_MIN;
	volatile int16_t x731 = -1;
	volatile uint8_t x732 = UINT8_MAX;
	volatile int32_t t82 = -3876;

	t82 = (x729%(x730<=(x731-x732)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t t83 = 36054LL;

	t83 = (x733%(x734<=(x735-x736)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x737 = -86212855LL;
	static uint32_t x738 = 369512U;
	int8_t x740 = INT8_MIN;
	volatile int64_t t84 = 2208703643LL;

	t84 = (x737%(x738<=(x739-x740)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x742 = -92765318LL;
	int16_t x743 = -1;
	volatile int32_t t85 = -198410602;

	t85 = (x741%(x742<=(x743-x744)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x755 = UINT16_MAX;
	static volatile int32_t t86 = 12084853;

	t86 = (x753%(x754<=(x755-x756)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x761 = INT8_MIN;
	uint64_t x762 = 73431791LLU;
	volatile uint8_t x763 = UINT8_MAX;

	t87 = (x761%(x762<=(x763-x764)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x773 = -37;
	int32_t x774 = -1;
	static volatile int32_t x776 = INT32_MIN;
	int32_t t88 = 1;

	t88 = (x773%(x774<=(x775-x776)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x778 = 0U;
	int64_t x779 = -2LL;
	int8_t x780 = -8;
	static volatile int32_t t89 = -10500727;

	t89 = (x777%(x778<=(x779-x780)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x785 = 344659014596765226LL;
	uint32_t x786 = UINT32_MAX;
	uint8_t x787 = 2U;

	t90 = (x785%(x786<=(x787-x788)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x793 = -1;
	int64_t x794 = -1LL;
	volatile int8_t x795 = 5;
	uint32_t x796 = 205996U;
	volatile int32_t t91 = -1;

	t91 = (x793%(x794<=(x795-x796)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x797 = 3134618792969781133LLU;
	static uint8_t x798 = 1U;
	uint64_t x800 = 2876634529791LLU;
	static uint64_t t92 = 262854607694921LLU;

	t92 = (x797%(x798<=(x799-x800)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x801 = -1393777750098LL;
	int8_t x802 = -5;
	int16_t x803 = -1;
	static int64_t x804 = 1LL;
	volatile int64_t t93 = -1LL;

	t93 = (x801%(x802<=(x803-x804)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x806 = 992;
	int32_t x808 = -24194;

	t94 = (x805%(x806<=(x807-x808)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x809 = INT16_MAX;
	int64_t x810 = INT64_MIN;
	static uint32_t x812 = 628224669U;
	int32_t t95 = 53255;

	t95 = (x809%(x810<=(x811-x812)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x813 = INT32_MIN;
	static uint64_t x814 = 28692264528982LLU;
	int64_t x815 = -1704792398770LL;
	static volatile uint16_t x816 = 2008U;
	int32_t t96 = -2601;

	t96 = (x813%(x814<=(x815-x816)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x817 = INT32_MAX;
	int32_t x818 = INT32_MIN;
	static uint16_t x819 = UINT16_MAX;
	uint8_t x820 = UINT8_MAX;
	static volatile int32_t t97 = -15803513;

	t97 = (x817%(x818<=(x819-x820)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x826 = INT8_MIN;
	int64_t x827 = 771516927310LL;
	int8_t x828 = -1;

	t98 = (x825%(x826<=(x827-x828)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x830 = INT32_MIN;
	int64_t x831 = 172LL;
	static int8_t x832 = -1;
	volatile int32_t t99 = -11519153;

	t99 = (x829%(x830<=(x831-x832)));

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

