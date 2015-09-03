#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = 288785106910LL;
int8_t x19 = INT8_MAX;
uint32_t x34 = 977151489U;
static int16_t x51 = INT16_MAX;
int32_t t5 = 29;
static int8_t x66 = INT8_MIN;
static int8_t x67 = 4;
int8_t x68 = INT8_MAX;
uint64_t x71 = UINT64_MAX;
volatile uint64_t t7 = 138825402483379075LLU;
volatile uint8_t x77 = 12U;
int8_t x78 = INT8_MIN;
uint64_t x79 = UINT64_MAX;
int16_t x84 = -1;
static volatile uint64_t x99 = UINT64_MAX;
volatile uint64_t t10 = 5668790056934LLU;
uint32_t t11 = 73U;
volatile int32_t t12 = 35258307;
int8_t x112 = INT8_MIN;
static volatile int32_t t13 = -1;
int64_t x116 = -1LL;
volatile uint32_t x120 = 116825U;
uint32_t x124 = UINT32_MAX;
static uint32_t x136 = UINT32_MAX;
volatile uint64_t t19 = 41115761212223281LLU;
volatile int8_t x144 = INT8_MIN;
int32_t t21 = 54107428;
uint16_t x163 = 40U;
uint32_t x164 = 6765124U;
int64_t t23 = -94LL;
static int8_t x176 = -1;
int64_t x178 = -1LL;
volatile uint16_t x181 = 7U;
static int32_t x187 = 5431;
int16_t x211 = INT16_MAX;
uint16_t x220 = 11U;
uint64_t x221 = UINT64_MAX;
static uint64_t x222 = UINT64_MAX;
volatile uint64_t t33 = 1777342183LLU;
int8_t x225 = -9;
int32_t t35 = -2103;
int8_t x248 = -1;
int64_t x287 = -14LL;
volatile int32_t t41 = 2634614;
uint16_t x304 = 117U;
int32_t x305 = 10;
int8_t x306 = -1;
int64_t x329 = -42LL;
int32_t x349 = INT32_MIN;
int32_t x359 = INT32_MIN;
static uint32_t t49 = 10766U;
uint8_t x366 = UINT8_MAX;
int64_t x371 = -304994312399LL;
volatile uint64_t t51 = 248916490165312LLU;
volatile int8_t x380 = INT8_MIN;
uint8_t x390 = UINT8_MAX;
int64_t x391 = -1LL;
static volatile int32_t x392 = INT32_MAX;
int8_t x399 = INT8_MIN;
int8_t x405 = -1;
uint32_t x406 = UINT32_MAX;
static uint64_t x408 = 9197868510244170773LLU;
uint64_t t56 = 467316LLU;
int32_t x417 = INT32_MIN;
volatile int8_t x418 = -1;
int64_t x421 = INT64_MIN;
int32_t x422 = 137318906;
volatile int16_t x433 = -1;
volatile int32_t t60 = -8170225;
volatile int8_t x439 = INT8_MIN;
volatile uint64_t t61 = 8269653902249184246LLU;
uint64_t x446 = 9622732LLU;
uint16_t x453 = UINT16_MAX;
uint64_t x455 = 2961138216636271LLU;
int64_t x471 = 414803339091313LL;
static int32_t x472 = INT32_MAX;
int16_t x485 = -123;
static volatile uint64_t t69 = 361719926177877888LLU;
static volatile uint64_t t70 = 15LLU;
int8_t x509 = -1;
uint64_t x510 = UINT64_MAX;
int16_t x511 = INT16_MIN;
volatile int8_t x513 = 15;
uint16_t x514 = 7756U;
volatile uint8_t x515 = 4U;
volatile uint8_t x531 = 0U;
int32_t t75 = 1034130;
int8_t x540 = -37;
uint64_t x560 = 2756979936LLU;
int64_t x565 = 173046823LL;
static uint32_t x568 = 1642057U;
static int64_t x573 = INT64_MIN;
int8_t x575 = INT8_MIN;
uint64_t x582 = 69510326502LLU;
volatile uint64_t t86 = 0LLU;
static uint32_t x590 = 21U;
int32_t x597 = INT32_MIN;
int16_t x601 = 1967;
uint8_t x609 = 17U;
volatile int32_t t90 = -65795494;
int8_t x615 = INT8_MIN;
volatile int64_t t91 = 326743821540944LL;
int16_t x625 = 6;
int8_t x630 = INT8_MIN;
uint32_t x631 = UINT32_MAX;
volatile uint32_t t94 = 62083218U;
uint64_t x646 = 3617374LLU;
static int64_t x648 = INT64_MIN;
int64_t x649 = INT64_MIN;
volatile uint32_t x655 = 1637669425U;
static int16_t x666 = INT16_MIN;


void f0(void) {
	uint8_t x9 = 15U;
	uint8_t x10 = 7U;
	int8_t x12 = -24;
	int64_t t0 = 3934405LL;

	t0 = (x9%(x10*(x11-x12)));

	if (t0 != 15LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = -1;
	uint8_t x18 = UINT8_MAX;
	uint64_t x20 = 605LLU;
	uint64_t t1 = 26810902819168171LLU;

	t1 = (x17%(x18*(x19-x20)));

	if (t1 != 121889LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x35 = -6176740187LL;
	int32_t x36 = INT32_MIN;
	int64_t t2 = -232313552924845LL;

	t2 = (x33%(x34*(x35-x36)));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x41 = -41;
	int64_t x42 = -1984LL;
	int8_t x43 = -6;
	int32_t x44 = 529877143;
	static int64_t t3 = 89373324589LL;

	t3 = (x41%(x42*(x43-x44)));

	if (t3 != -41LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = INT16_MIN;
	static uint64_t x46 = 1394344LLU;
	static uint16_t x47 = 335U;
	static int64_t x48 = -904632131495595LL;
	uint64_t t4 = 6LLU;

	t4 = (x45%(x46*(x47-x48)));

	if (t4 != 4467168581086498784LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x49 = INT32_MIN;
	int32_t x50 = -33;
	int8_t x52 = INT8_MAX;

	t5 = (x49%(x50*(x51-x52)));

	if (t5 != -783488) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x65 = -1;
	volatile int32_t t6 = -112;

	t6 = (x65%(x66*(x67-x68)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = 111U;
	volatile uint64_t x70 = 28697360191LLU;
	int16_t x72 = INT16_MAX;

	t7 = (x69%(x70*(x71-x72)));

	if (t7 != 111LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x80 = -11317;
	volatile uint64_t t8 = 386LLU;

	t8 = (x77%(x78*(x79-x80)));

	if (t8 != 12LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	static volatile int32_t t9 = 0;

	t9 = (x81%(x82*(x83-x84)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x97 = 0;
	volatile int64_t x98 = INT64_MAX;
	static int64_t x100 = INT64_MIN;

	t10 = (x97%(x98*(x99-x100)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x101 = -2203;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 933U;
	volatile uint32_t x104 = 1U;

	t11 = (x101%(x102*(x103-x104)));

	if (t11 != 30537573U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static int16_t x108 = INT16_MAX;

	t12 = (x105%(x106*(x107-x108)));

	if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	int16_t x111 = 284;

	t13 = (x109%(x110*(x111-x112)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = 159921;
	int8_t x115 = INT8_MAX;
	volatile int64_t t14 = 118263877LL;

	t14 = (x113%(x114*(x115-x116)));

	if (t14 != -18615296LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x117 = INT8_MIN;
	uint8_t x118 = 1U;
	int64_t x119 = -1LL;
	static volatile int64_t t15 = 723LL;

	t15 = (x117%(x118*(x119-x120)));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x121 = 3265U;
	uint8_t x122 = 12U;
	static int32_t x123 = -132874774;
	static uint32_t t16 = 25194713U;

	t16 = (x121%(x122*(x123-x124)));

	if (t16 != 3265U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x125 = -1LL;
	int16_t x126 = 689;
	int64_t x127 = -1LL;
	uint8_t x128 = 29U;
	volatile int64_t t17 = -4043LL;

	t17 = (x125%(x126*(x127-x128)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = 1;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 0U;
	int64_t t18 = -520995892852LL;

	t18 = (x129%(x130*(x131-x132)));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x133 = 547LLU;
	uint16_t x134 = UINT16_MAX;
	uint16_t x135 = 16U;

	t19 = (x133%(x134*(x135-x136)));

	if (t19 != 547LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x137 = UINT32_MAX;
	int32_t x138 = 22;
	volatile int8_t x139 = -1;
	static int16_t x140 = 5;
	uint32_t t20 = 7U;

	t20 = (x137%(x138*(x139-x140)));

	if (t20 != 131U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x141 = 71U;
	volatile uint16_t x142 = 4U;
	int16_t x143 = INT16_MAX;

	t21 = (x141%(x142*(x143-x144)));

	if (t21 != 71) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x149 = INT8_MAX;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1LL;
	volatile uint16_t x152 = 2279U;
	volatile int64_t t22 = 214992271LL;

	t22 = (x149%(x150*(x151-x152)));

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x161 = -5708794895854244LL;
	volatile int32_t x162 = 2243864;

	t23 = (x161%(x162*(x163-x164)));

	if (t23 != -594936228LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x169 = INT16_MIN;
	volatile int8_t x170 = -7;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 7694909U;
	static uint32_t t24 = 29741042U;

	t24 = (x169%(x170*(x171-x172)));

	if (t24 != 39649298U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x173 = -1LL;
	int64_t x174 = -11LL;
	uint64_t x175 = 110LLU;
	volatile uint64_t t25 = 14713LLU;

	t25 = (x173%(x174*(x175-x176)));

	if (t25 != 1220LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x177 = 7LLU;
	uint8_t x179 = 9U;
	static int32_t x180 = -117584185;
	volatile uint64_t t26 = 311LLU;

	t26 = (x177%(x178*(x179-x180)));

	if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = -2448LL;
	uint32_t x184 = UINT32_MAX;
	uint64_t t27 = 56781LLU;

	t27 = (x181%(x182*(x183-x184)));

	if (t27 != 7LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 1U;
	static int32_t x188 = INT32_MAX;
	volatile int32_t t28 = -1980771;

	t28 = (x185%(x186*(x187-x188)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x197 = 63LL;
	static uint64_t x198 = 2117LLU;
	static uint64_t x199 = 95654664738542LLU;
	int16_t x200 = INT16_MAX;
	uint64_t t29 = 10765579LLU;

	t29 = (x197%(x198*(x199-x200)));

	if (t29 != 63LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = -1LL;
	static int32_t x203 = 3898880;
	static int8_t x204 = INT8_MAX;
	volatile int64_t t30 = 578121171609LL;

	t30 = (x201%(x202*(x203-x204)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -20;
	uint32_t x212 = 176267469U;
	uint32_t t31 = 1U;

	t31 = (x209%(x210*(x211-x212)));

	if (t31 != 770273128U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x217 = -1LL;
	static uint32_t x218 = 89U;
	uint32_t x219 = 500105786U;
	volatile int64_t t32 = 755410164284LL;

	t32 = (x217%(x218*(x219-x220)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x223 = 1;
	int16_t x224 = INT16_MAX;

	t33 = (x221%(x222*(x223-x224)));

	if (t33 != 255LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	volatile int16_t x228 = INT16_MIN;
	int32_t t34 = 0;

	t34 = (x225%(x226*(x227-x228)));

	if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x233 = -1688;
	int16_t x234 = -1;
	int8_t x235 = 3;
	int32_t x236 = -1;

	t35 = (x233%(x234*(x235-x236)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x245 = INT32_MIN;
	volatile int32_t x246 = INT32_MAX;
	uint64_t x247 = 2433569829LLU;
	volatile uint64_t t36 = 24792031429651LLU;

	t36 = (x245%(x246*(x247-x248)));

	if (t36 != 2768589830289357938LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x261 = -17977977;
	uint32_t x262 = 2U;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -1;
	volatile uint32_t t37 = 7428828U;

	t37 = (x261%(x262*(x263-x264)));

	if (t37 != 4276989319U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x277 = -23;
	int8_t x278 = INT8_MAX;
	uint8_t x279 = 1U;
	uint16_t x280 = 6U;
	volatile int32_t t38 = -32;

	t38 = (x277%(x278*(x279-x280)));

	if (t38 != -23) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x281 = 51;
	static volatile int8_t x282 = -1;
	int8_t x283 = -1;
	int32_t x284 = 4179919;
	volatile int32_t t39 = 6524;

	t39 = (x281%(x282*(x283-x284)));

	if (t39 != 51) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x285 = 2U;
	static volatile int8_t x286 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t40 = 644LL;

	t40 = (x285%(x286*(x287-x288)));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MAX;
	volatile int16_t x291 = -1;
	volatile int8_t x292 = INT8_MAX;

	t41 = (x289%(x290*(x291-x292)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int64_t t42 = 6085459390715LL;

	t42 = (x301%(x302*(x303-x304)));

	if (t42 != -27848LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	int64_t t43 = 172132663207569LL;

	t43 = (x305%(x306*(x307-x308)));

	if (t43 != 10LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = 17953670737449994LL;
	uint16_t x315 = 1U;
	uint8_t x316 = UINT8_MAX;
	int64_t t44 = 1015734075053944239LL;

	t44 = (x313%(x314*(x315-x316)));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x330 = -43498964232LL;
	uint8_t x331 = 1U;
	uint8_t x332 = 30U;
	int64_t t45 = 41LL;

	t45 = (x329%(x330*(x331-x332)));

	if (t45 != -42LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x333 = 60U;
	uint64_t x334 = UINT64_MAX;
	static int64_t x335 = -1LL;
	volatile int32_t x336 = INT32_MIN;
	static uint64_t t46 = 189LLU;

	t46 = (x333%(x334*(x335-x336)));

	if (t46 != 60LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x345 = -1LL;
	uint64_t x346 = 1743360226496391893LLU;
	uint16_t x347 = 2578U;
	int8_t x348 = -1;
	volatile uint64_t t47 = 11971389138008897LLU;

	t47 = (x345%(x346*(x347-x348)));

	if (t47 != 4879529850935902256LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x350 = UINT64_MAX;
	static volatile uint16_t x351 = 405U;
	uint32_t x352 = 189253U;
	static uint64_t t48 = 17047686403999980LLU;

	t48 = (x349%(x350*(x351-x352)));

	if (t48 != 2147294800LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x357 = 7U;
	int8_t x358 = INT8_MAX;
	uint32_t x360 = 24209373U;

	t49 = (x357%(x358*(x359-x360)));

	if (t49 != 7U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = -1;
	uint8_t x368 = 2U;
	int32_t t50 = -317;

	t50 = (x365%(x366*(x367-x368)));

	if (t50 != -638) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x369 = 5525U;
	uint64_t x370 = 1697995530LLU;
	static int8_t x372 = INT8_MIN;

	t51 = (x369%(x370*(x371-x372)));

	if (t51 != 5525LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x373 = -455LL;
	int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	static int16_t x376 = 47;
	int64_t t52 = 4002620LL;

	t52 = (x373%(x374*(x375-x376)));

	if (t52 != -105LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	int64_t t53 = -13471759641LL;

	t53 = (x377%(x378*(x379-x380)));

	if (t53 != 58980607LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x389 = 1379;
	int64_t t54 = -3LL;

	t54 = (x389%(x390*(x391-x392)));

	if (t54 != 1379LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = -1;
	int8_t x400 = INT8_MAX;
	int32_t t55 = 191;

	t55 = (x397%(x398*(x399-x400)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x407 = -8;

	t56 = (x405%(x406*(x407-x408)));

	if (t56 != 144803686729921640LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x419 = 91U;
	uint16_t x420 = 1U;
	static int32_t t57 = -141878010;

	t57 = (x417%(x418*(x419-x420)));

	if (t57 != -38) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x423 = 10U;
	int8_t x424 = -1;
	volatile int64_t t58 = -8055579455919LL;

	t58 = (x421%(x422*(x423-x424)));

	if (t58 != -825207600LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x429 = -2;
	static int32_t x430 = INT32_MIN;
	static uint64_t x431 = 479923841LLU;
	int16_t x432 = -2;
	uint64_t t59 = 9988747LLU;

	t59 = (x429%(x430*(x431-x432)));

	if (t59 != 1030628605127819262LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x434 = -5018;
	uint16_t x435 = 115U;
	int8_t x436 = -1;

	t60 = (x433%(x434*(x435-x436)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x437 = 23932234LL;
	volatile uint64_t x438 = UINT64_MAX;
	static int16_t x440 = -2063;

	t61 = (x437%(x438*(x439-x440)));

	if (t61 != 23932234LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x445 = 16519359U;
	static uint64_t x447 = 634208098359515337LLU;
	static int32_t x448 = -246501101;
	volatile uint64_t t62 = 1722198311966275LLU;

	t62 = (x445%(x446*(x447-x448)));

	if (t62 != 16519359LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x454 = 3721230;
	int16_t x456 = -1;
	static volatile uint64_t t63 = 337430109LLU;

	t63 = (x453%(x454*(x455-x456)));

	if (t63 != 65535LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x465 = UINT64_MAX;
	int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t64 = 762278LLU;

	t64 = (x465%(x466*(x467-x468)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x469 = 164U;
	volatile int8_t x470 = INT8_MAX;
	volatile int64_t t65 = -555938LL;

	t65 = (x469%(x470*(x471-x472)));

	if (t65 != 164LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	static int16_t x476 = INT16_MAX;
	volatile int32_t t66 = -12;

	t66 = (x473%(x474*(x475-x476)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x481 = 31794U;
	uint64_t x482 = 371174124600087801LLU;
	uint64_t x483 = UINT64_MAX;
	int8_t x484 = -2;
	uint64_t t67 = 4589145699430749485LLU;

	t67 = (x481%(x482*(x483-x484)));

	if (t67 != 31794LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x486 = -47LL;
	uint64_t x487 = 13530763744392007LLU;
	static uint32_t x488 = 5U;
	volatile uint64_t t68 = 3533790LLU;

	t68 = (x485%(x486*(x487-x488)));

	if (t68 != 635945895986423971LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x489 = UINT32_MAX;
	int64_t x490 = INT64_MAX;
	int64_t x491 = INT64_MIN;
	static uint64_t x492 = 11615886LLU;

	t69 = (x489%(x490*(x491-x492)));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x501 = INT8_MIN;
	int16_t x502 = INT16_MAX;
	int16_t x503 = INT16_MAX;
	uint64_t x504 = 1012117LLU;

	t70 = (x501%(x502*(x503-x504)));

	if (t70 != 32090361322LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x512 = -1;
	static volatile uint64_t t71 = 7764030613561919LLU;

	t71 = (x509%(x510*(x511-x512)));

	if (t71 != 15LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x516 = 1U;
	static int32_t t72 = 31094721;

	t72 = (x513%(x514*(x515-x516)));

	if (t72 != 15) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x517 = -1LL;
	uint64_t x518 = 15627470LLU;
	int8_t x519 = 0;
	uint8_t x520 = 1U;
	uint64_t t73 = 930043320710887LLU;

	t73 = (x517%(x518*(x519-x520)));

	if (t73 != 15627469LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x521 = 31106U;
	static volatile int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = 32042743U;
	static uint32_t t74 = 124U;

	t74 = (x521%(x522*(x523-x524)));

	if (t74 != 31106U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x529 = 1;
	volatile uint16_t x530 = UINT16_MAX;
	volatile uint16_t x532 = 4773U;

	t75 = (x529%(x530*(x531-x532)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x533 = -1;
	int16_t x534 = -5602;
	volatile int16_t x535 = 23;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t76 = 109601LLU;

	t76 = (x533%(x534*(x535-x536)));

	if (t76 != 134447LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x537 = 1U;
	uint16_t x538 = UINT16_MAX;
	uint32_t x539 = 47637678U;
	volatile uint32_t t77 = 9319U;

	t77 = (x537%(x538*(x539-x540)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x541 = INT16_MIN;
	static int64_t x542 = -89612143641LL;
	uint32_t x543 = 62520U;
	static uint8_t x544 = 1U;
	volatile int64_t t78 = 514099548775109LL;

	t78 = (x541%(x542*(x543-x544)));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x549 = UINT32_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	int8_t x551 = INT8_MIN;
	static uint64_t x552 = 7LLU;
	static volatile uint64_t t79 = 9023337391LLU;

	t79 = (x549%(x550*(x551-x552)));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x557 = -1;
	int64_t x558 = -1LL;
	int64_t x559 = INT64_MIN;
	volatile uint64_t t80 = 88050733363638567LLU;

	t80 = (x557%(x558*(x559-x560)));

	if (t80 != 9223372034097795871LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x561 = INT32_MIN;
	static uint64_t x562 = 133217LLU;
	int16_t x563 = INT16_MAX;
	uint16_t x564 = 14546U;
	volatile uint64_t t81 = 9LLU;

	t81 = (x561%(x562*(x563-x564)));

	if (t81 != 2098844153LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x566 = 73U;
	int64_t x567 = -1LL;
	int64_t t82 = 7756525687208LL;

	t82 = (x565%(x566*(x567-x568)));

	if (t82 != 53176589LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x569 = -343;
	uint16_t x570 = 4U;
	uint32_t x571 = 4151U;
	int32_t x572 = -1;
	uint32_t t83 = 1U;

	t83 = (x569%(x570*(x571-x572)));

	if (t83 != 5289U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x574 = 926U;
	volatile int64_t x576 = -59LL;
	static int64_t t84 = -2798629LL;

	t84 = (x573%(x574*(x575-x576)));

	if (t84 != -33698LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MAX;
	uint8_t x579 = UINT8_MAX;
	int32_t x580 = -1;
	volatile int32_t t85 = 0;

	t85 = (x577%(x578*(x579-x580)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x581 = -1LL;
	static int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MIN;

	t86 = (x581%(x582*(x583-x584)));

	if (t86 != 6877721317119LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x589 = 22725U;
	int8_t x591 = -1;
	static uint16_t x592 = 2654U;
	static volatile uint32_t t87 = 26U;

	t87 = (x589%(x590*(x591-x592)));

	if (t87 != 22725U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x598 = -39792366;
	uint32_t x599 = 1796403U;
	int16_t x600 = -1;
	static volatile uint32_t t88 = 0U;

	t88 = (x597%(x598*(x599-x600)));

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x602 = UINT16_MAX;
	int16_t x603 = 13338;
	int32_t x604 = 89;
	volatile int32_t t89 = 28;

	t89 = (x601%(x602*(x603-x604)));

	if (t89 != 1967) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x610 = UINT16_MAX;
	int8_t x611 = INT8_MAX;
	volatile uint16_t x612 = 2U;

	t90 = (x609%(x610*(x611-x612)));

	if (t90 != 17) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x613 = 494U;
	int64_t x614 = -1LL;
	static int32_t x616 = INT32_MIN;

	t91 = (x613%(x614*(x615-x616)));

	if (t91 != 494LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x621 = -3;
	uint16_t x622 = 19U;
	uint8_t x623 = 4U;
	int8_t x624 = -1;
	int32_t t92 = 490280239;

	t92 = (x621%(x622*(x623-x624)));

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x626 = INT32_MIN;
	static int16_t x627 = INT16_MIN;
	volatile uint32_t x628 = 36059U;
	volatile uint32_t t93 = 13540U;

	t93 = (x625%(x626*(x627-x628)));

	if (t93 != 6U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x629 = -1;
	uint16_t x632 = 2U;

	t94 = (x629%(x630*(x631-x632)));

	if (t94 != 255U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x645 = 1629809LLU;
	int16_t x647 = -6;
	uint64_t t95 = 3992267070LLU;

	t95 = (x645%(x646*(x647-x648)));

	if (t95 != 1629809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x650 = 19U;
	static int16_t x651 = INT16_MAX;
	int8_t x652 = INT8_MAX;
	static volatile int64_t t96 = -212805786164237LL;

	t96 = (x649%(x650*(x651-x652)));

	if (t96 != -555008LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x653 = UINT8_MAX;
	static int16_t x654 = -1;
	int16_t x656 = INT16_MAX;
	uint32_t t97 = 0U;

	t97 = (x653%(x654*(x655-x656)));

	if (t97 != 255U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x665 = 3;
	int16_t x667 = -1;
	int32_t x668 = 139;
	volatile int32_t t98 = 10970;

	t98 = (x665%(x666*(x667-x668)));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x669 = UINT32_MAX;
	int32_t x670 = INT32_MIN;
	int8_t x671 = INT8_MIN;
	static uint32_t x672 = UINT32_MAX;
	static volatile uint32_t t99 = 57577U;

	t99 = (x669%(x670*(x671-x672)));

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

