#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x14 = INT32_MAX;
uint64_t x18 = UINT64_MAX;
int64_t x20 = -125LL;
int32_t t3 = 92;
volatile int16_t x21 = INT16_MIN;
int32_t x25 = -1;
static int8_t x27 = -3;
static uint64_t x30 = 124921676203755LLU;
int32_t x40 = -342;
uint8_t x51 = UINT8_MAX;
uint8_t x55 = 0U;
int64_t x61 = INT64_MAX;
static volatile uint16_t x63 = 23457U;
int8_t x74 = 6;
volatile int32_t t12 = 774882;
int64_t x81 = -8814033540472675LL;
int16_t x84 = INT16_MIN;
int32_t t14 = 74;
int32_t x87 = -2;
uint64_t x99 = 282767LLU;
static uint64_t x104 = 1701562452529702LLU;
int32_t t17 = -11863352;
int64_t x125 = INT64_MIN;
static int32_t x127 = INT32_MAX;
int8_t x128 = 10;
uint32_t x134 = 1U;
int8_t x140 = 17;
volatile int32_t t24 = -1712534;
static int8_t x160 = INT8_MAX;
int32_t t25 = 45154;
int64_t x172 = INT64_MAX;
static uint16_t x177 = 10U;
volatile uint16_t x191 = 0U;
volatile uint8_t x196 = UINT8_MAX;
static int32_t t31 = 17481673;
volatile int32_t t32 = 113;
int8_t x201 = 6;
volatile int32_t t33 = 39168180;
uint64_t x208 = 300LLU;
int32_t t35 = 67532;
int64_t x221 = INT64_MIN;
uint16_t x222 = 20169U;
static volatile int32_t t37 = -393;
int16_t x225 = INT16_MAX;
volatile int32_t t38 = 56128;
int8_t x259 = -1;
uint8_t x266 = 2U;
int32_t t42 = -7181933;
int32_t t43 = -13351;
volatile uint8_t x273 = 19U;
int32_t t44 = 2410299;
static int16_t x286 = 11;
uint64_t x293 = 15235267305LLU;
uint64_t x294 = 152601LLU;
volatile int32_t t47 = -13;
static uint64_t x301 = 5407LLU;
volatile int8_t x311 = -1;
int8_t x318 = 0;
uint8_t x320 = UINT8_MAX;
int32_t t52 = -37443412;
static uint8_t x329 = UINT8_MAX;
volatile int8_t x332 = 0;
volatile int32_t t53 = -100259931;
uint8_t x340 = UINT8_MAX;
static uint32_t x343 = UINT32_MAX;
static int32_t t55 = 664953;
static int32_t t56 = 2;
int32_t x365 = -7;
uint16_t x371 = 2U;
int64_t x377 = -2088305604426LL;
static int16_t x380 = INT16_MAX;
uint16_t x382 = 221U;
int32_t x388 = INT32_MIN;
int32_t t61 = -1;
volatile int64_t x391 = INT64_MIN;
int32_t x403 = INT32_MIN;
static int32_t x405 = -1139557;
int16_t x407 = -921;
int8_t x419 = -36;
volatile int32_t t67 = 1;
static volatile int64_t x425 = -1LL;
uint64_t x426 = 86LLU;
volatile int16_t x433 = INT16_MAX;
uint8_t x436 = 72U;
uint32_t x443 = 3U;
volatile int64_t x445 = INT64_MIN;
int16_t x450 = 4363;
int32_t x451 = 2392;
int32_t x453 = -1;
int8_t x454 = 51;
uint8_t x463 = 4U;
int64_t x471 = INT64_MIN;
volatile int32_t t77 = 7581761;
uint32_t x474 = 27U;
int8_t x475 = -4;
int64_t x496 = INT64_MIN;
uint32_t x514 = UINT32_MAX;
int16_t x515 = INT16_MAX;
static int16_t x520 = 8;
uint16_t x523 = 1U;
uint8_t x525 = UINT8_MAX;
int8_t x550 = 0;
int16_t x552 = INT16_MAX;
static volatile uint64_t x556 = UINT64_MAX;
volatile int32_t t91 = 93193;
static volatile uint8_t x566 = 1U;
uint32_t x567 = 8255U;
int64_t x568 = INT64_MIN;
uint16_t x586 = 3810U;
static int64_t x592 = INT64_MIN;
int8_t x597 = -23;
int32_t t96 = 35527;
uint64_t x614 = 465449LLU;


void f0(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x6 = 83LLU;
	uint32_t x7 = 146504U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = -885226125;

	t0 = (x5<=(x6>>(x7==x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 5418375LLU;
	uint16_t x10 = 1600U;
	volatile int64_t x11 = -1LL;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t1 = 7977;

	t1 = (x9<=(x10>>(x11==x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 29U;
	static volatile int16_t x15 = 309;
	static uint64_t x16 = UINT64_MAX;
	int32_t t2 = -1;

	t2 = (x13<=(x14>>(x15==x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 271399LLU;
	int64_t x19 = -96985393534364782LL;

	t3 = (x17<=(x18>>(x19==x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x22 = INT64_MAX;
	int16_t x23 = -1;
	static int32_t x24 = INT32_MIN;
	static volatile int32_t t4 = -10655717;

	t4 = (x21<=(x22>>(x23==x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MAX;
	int32_t x28 = INT32_MIN;
	static int32_t t5 = -16203645;

	t5 = (x25<=(x26>>(x27==x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = 431499901098169LL;
	uint64_t x31 = 247LLU;
	int8_t x32 = -1;
	volatile int32_t t6 = -3228956;

	t6 = (x29<=(x30>>(x31==x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 696686LL;
	static int32_t x38 = INT32_MAX;
	static int64_t x39 = INT64_MIN;
	int32_t t7 = 511;

	t7 = (x37<=(x38>>(x39==x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 349U;
	int32_t x50 = 229016268;
	uint64_t x52 = 124974102421LLU;
	int32_t t8 = -71043058;

	t8 = (x49<=(x50>>(x51==x52)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = 380817;
	static int16_t x56 = -8;
	volatile int32_t t9 = 252241;

	t9 = (x53<=(x54>>(x55==x56)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x62 = UINT16_MAX;
	int32_t x64 = -1;
	static volatile int32_t t10 = 0;

	t10 = (x61<=(x62>>(x63==x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MIN;
	int32_t x68 = -3176296;
	volatile int32_t t11 = 315665;

	t11 = (x65<=(x66>>(x67==x68)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x73 = UINT8_MAX;
	uint64_t x75 = 1635019LLU;
	uint64_t x76 = 551035207458409LLU;

	t12 = (x73<=(x74>>(x75==x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x78 = UINT16_MAX;
	uint16_t x79 = 351U;
	static volatile uint64_t x80 = 2095764463960964993LLU;
	volatile int32_t t13 = 8024;

	t13 = (x77<=(x78>>(x79==x80)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = 2237;
	volatile uint32_t x83 = 3540U;

	t14 = (x81<=(x82>>(x83==x84)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = 529287106LLU;
	int16_t x86 = 53;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t15 = -29022;

	t15 = (x85<=(x86>>(x87==x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MAX;
	int8_t x100 = -11;
	volatile int32_t t16 = 99;

	t16 = (x97<=(x98>>(x99==x100)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = -1;
	int8_t x102 = 0;
	static int64_t x103 = INT64_MIN;

	t17 = (x101<=(x102>>(x103==x104)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x105 = UINT32_MAX;
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = -20;
	int8_t x108 = INT8_MIN;
	static int32_t t18 = 2;

	t18 = (x105<=(x106>>(x107==x108)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x113 = 30;
	volatile int32_t x114 = 49126;
	int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t19 = -738501;

	t19 = (x113<=(x114>>(x115==x116)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x121 = 3605605LLU;
	int16_t x122 = 6008;
	volatile uint16_t x123 = 57U;
	volatile uint16_t x124 = 12345U;
	volatile int32_t t20 = -537;

	t20 = (x121<=(x122>>(x123==x124)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x126 = 2060U;
	volatile int32_t t21 = -1;

	t21 = (x125<=(x126>>(x127==x128)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x130 = INT16_MAX;
	int8_t x131 = 12;
	int16_t x132 = -94;
	int32_t t22 = 419785592;

	t22 = (x129<=(x130>>(x131==x132)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = INT64_MIN;
	static uint8_t x135 = 0U;
	uint64_t x136 = UINT64_MAX;
	int32_t t23 = -278108;

	t23 = (x133<=(x134>>(x135==x136)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MAX;
	int16_t x139 = -1;

	t24 = (x137<=(x138>>(x139==x140)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x157 = -1LL;
	int64_t x158 = 5068433LL;
	int64_t x159 = INT64_MAX;

	t25 = (x157<=(x158>>(x159==x160)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x169 = 17274U;
	uint64_t x170 = UINT64_MAX;
	volatile int32_t x171 = -1;
	volatile int32_t t26 = 256554224;

	t26 = (x169<=(x170>>(x171==x172)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x173 = 124U;
	volatile uint32_t x174 = 9205U;
	int32_t x175 = 976418;
	uint32_t x176 = 263952U;
	int32_t t27 = -62;

	t27 = (x173<=(x174>>(x175==x176)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MAX;
	uint64_t x180 = 11LLU;
	volatile int32_t t28 = -7423467;

	t28 = (x177<=(x178>>(x179==x180)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x185 = -1;
	uint32_t x186 = 217531U;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 90U;
	volatile int32_t t29 = -38756;

	t29 = (x185<=(x186>>(x187==x188)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = INT16_MAX;
	static uint32_t x190 = 1360U;
	static volatile int64_t x192 = INT64_MAX;
	volatile int32_t t30 = 1;

	t30 = (x189<=(x190>>(x191==x192)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = -140950883668LL;
	volatile uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;

	t31 = (x193<=(x194>>(x195==x196)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x197 = 1;
	int64_t x198 = 86212055820627LL;
	int16_t x199 = 39;
	int32_t x200 = -1;

	t32 = (x197<=(x198>>(x199==x200)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x202 = 6U;
	int64_t x203 = INT64_MAX;
	volatile int8_t x204 = 14;

	t33 = (x201<=(x202>>(x203==x204)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x205 = 0;
	volatile uint32_t x206 = 388904U;
	int32_t x207 = INT32_MIN;
	volatile int32_t t34 = -710871346;

	t34 = (x205<=(x206>>(x207==x208)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MAX;
	volatile int16_t x215 = INT16_MAX;
	static int16_t x216 = 3833;

	t35 = (x213<=(x214>>(x215==x216)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = -1LL;
	uint32_t x218 = 17U;
	int8_t x219 = 0;
	int32_t x220 = -1;
	static int32_t t36 = 3;

	t36 = (x217<=(x218>>(x219==x220)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = 0;

	t37 = (x221<=(x222>>(x223==x224)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 2805230068941024881LLU;
	int64_t x228 = 1483452LL;

	t38 = (x225<=(x226>>(x227==x228)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x245 = 2U;
	uint16_t x246 = 4839U;
	int16_t x247 = INT16_MIN;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t39 = 22886886;

	t39 = (x245<=(x246>>(x247==x248)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x253 = -7;
	static int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	volatile int16_t x256 = -1;
	volatile int32_t t40 = -2323;

	t40 = (x253<=(x254>>(x255==x256)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	int16_t x260 = -11;
	int32_t t41 = -189;

	t41 = (x257<=(x258>>(x259==x260)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x265 = INT16_MAX;
	uint8_t x267 = 14U;
	volatile uint16_t x268 = UINT16_MAX;

	t42 = (x265<=(x266>>(x267==x268)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x269 = 415U;
	int16_t x270 = INT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint16_t x272 = 379U;

	t43 = (x269<=(x270>>(x271==x272)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x274 = UINT32_MAX;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = -5;

	t44 = (x273<=(x274>>(x275==x276)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x285 = 0;
	int32_t x287 = INT32_MIN;
	volatile uint8_t x288 = 102U;
	int32_t t45 = -25;

	t45 = (x285<=(x286>>(x287==x288)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x289 = 38390436U;
	uint8_t x290 = 2U;
	uint8_t x291 = 6U;
	int32_t x292 = INT32_MIN;
	int32_t t46 = 3;

	t46 = (x289<=(x290>>(x291==x292)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x295 = -53;
	int8_t x296 = -1;

	t47 = (x293<=(x294>>(x295==x296)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x297 = -1LL;
	static uint64_t x298 = 10578376426299215LLU;
	uint32_t x299 = 233507033U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t48 = 80521966;

	t48 = (x297<=(x298>>(x299==x300)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 25982636U;
	uint16_t x304 = UINT16_MAX;
	int32_t t49 = 7791736;

	t49 = (x301<=(x302>>(x303==x304)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x309 = -1;
	static uint16_t x310 = 21413U;
	volatile int16_t x312 = 8;
	volatile int32_t t50 = 67;

	t50 = (x309<=(x310>>(x311==x312)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x317 = -1;
	int8_t x319 = INT8_MIN;
	int32_t t51 = 16093132;

	t51 = (x317<=(x318>>(x319==x320)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x321 = UINT64_MAX;
	static uint32_t x322 = 1U;
	uint16_t x323 = 1703U;
	static int8_t x324 = INT8_MIN;

	t52 = (x321<=(x322>>(x323==x324)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x330 = 31595222170LL;
	int8_t x331 = 2;

	t53 = (x329<=(x330>>(x331==x332)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x337 = 7389U;
	uint16_t x338 = 112U;
	int32_t x339 = 13;
	volatile int32_t t54 = -66331884;

	t54 = (x337<=(x338>>(x339==x340)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	static int32_t x344 = -1;

	t55 = (x341<=(x342>>(x343==x344)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 2U;

	t56 = (x349<=(x350>>(x351==x352)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x366 = INT64_MAX;
	uint16_t x367 = 201U;
	static int64_t x368 = INT64_MIN;
	int32_t t57 = -18310;

	t57 = (x365<=(x366>>(x367==x368)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x369 = -1;
	static int32_t x370 = 3069352;
	static uint8_t x372 = UINT8_MAX;
	int32_t t58 = 34134098;

	t58 = (x369<=(x370>>(x371==x372)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x378 = 9487580;
	int16_t x379 = -1;
	int32_t t59 = 15856740;

	t59 = (x377<=(x378>>(x379==x380)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x381 = 0U;
	uint8_t x383 = 8U;
	uint8_t x384 = UINT8_MAX;
	static volatile int32_t t60 = -1;

	t60 = (x381<=(x382>>(x383==x384)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x385 = 34U;
	uint8_t x386 = 1U;
	int64_t x387 = INT64_MAX;

	t61 = (x385<=(x386>>(x387==x388)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x389 = -1;
	static uint64_t x390 = 15768859685640810LLU;
	int16_t x392 = -3987;
	int32_t t62 = -1735;

	t62 = (x389<=(x390>>(x391==x392)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = 876;
	int64_t x399 = -1LL;
	static int64_t x400 = INT64_MIN;
	int32_t t63 = -5244956;

	t63 = (x397<=(x398>>(x399==x400)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = 1;
	uint32_t x404 = 44323U;
	int32_t t64 = -1;

	t64 = (x401<=(x402>>(x403==x404)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x406 = INT32_MAX;
	volatile int64_t x408 = INT64_MAX;
	volatile int32_t t65 = -519;

	t65 = (x405<=(x406>>(x407==x408)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x417 = -1LL;
	uint64_t x418 = UINT64_MAX;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t66 = 56808856;

	t66 = (x417<=(x418>>(x419==x420)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x421 = INT64_MIN;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = UINT8_MAX;
	int16_t x424 = INT16_MIN;

	t67 = (x421<=(x422>>(x423==x424)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x427 = UINT16_MAX;
	static int16_t x428 = INT16_MIN;
	int32_t t68 = 44;

	t68 = (x425<=(x426>>(x427==x428)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x434 = 2U;
	int16_t x435 = -1;
	int32_t t69 = -5601014;

	t69 = (x433<=(x434>>(x435==x436)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x437 = INT64_MAX;
	volatile uint8_t x438 = 66U;
	int16_t x439 = -19;
	static uint64_t x440 = UINT64_MAX;
	int32_t t70 = 0;

	t70 = (x437<=(x438>>(x439==x440)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x441 = INT8_MIN;
	int16_t x442 = 2703;
	static uint16_t x444 = 3426U;
	int32_t t71 = -7280862;

	t71 = (x441<=(x442>>(x443==x444)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x446 = 13;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;
	volatile int32_t t72 = 249629282;

	t72 = (x445<=(x446>>(x447==x448)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x449 = 68661;
	static uint32_t x452 = 3998U;
	int32_t t73 = 6003173;

	t73 = (x449<=(x450>>(x451==x452)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x455 = 49U;
	static int16_t x456 = 5;
	static volatile int32_t t74 = -1318371;

	t74 = (x453<=(x454>>(x455==x456)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x457 = UINT32_MAX;
	int16_t x458 = INT16_MAX;
	static int8_t x459 = INT8_MAX;
	static uint32_t x460 = UINT32_MAX;
	volatile int32_t t75 = -811;

	t75 = (x457<=(x458>>(x459==x460)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x461 = UINT16_MAX;
	int64_t x462 = 54476249341470660LL;
	int8_t x464 = INT8_MIN;
	volatile int32_t t76 = 478;

	t76 = (x461<=(x462>>(x463==x464)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x469 = 2007941LLU;
	uint32_t x470 = 681U;
	uint8_t x472 = 18U;

	t77 = (x469<=(x470>>(x471==x472)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x473 = INT64_MIN;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t78 = -51;

	t78 = (x473<=(x474>>(x475==x476)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x477 = 31;
	volatile uint64_t x478 = 17129905091235707LLU;
	int64_t x479 = -1759847LL;
	int64_t x480 = -38070833938119LL;
	volatile int32_t t79 = 40081;

	t79 = (x477<=(x478>>(x479==x480)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x481 = UINT32_MAX;
	static uint8_t x482 = 50U;
	int8_t x483 = INT8_MAX;
	uint8_t x484 = 1U;
	volatile int32_t t80 = 76;

	t80 = (x481<=(x482>>(x483==x484)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x485 = 4U;
	volatile uint16_t x486 = UINT16_MAX;
	int8_t x487 = INT8_MIN;
	volatile int32_t x488 = -7313603;
	static volatile int32_t t81 = -29;

	t81 = (x485<=(x486>>(x487==x488)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x493 = 0U;
	int16_t x494 = INT16_MAX;
	volatile uint32_t x495 = 152947U;
	int32_t t82 = 23030881;

	t82 = (x493<=(x494>>(x495==x496)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x513 = UINT16_MAX;
	int64_t x516 = -1LL;
	int32_t t83 = -133216505;

	t83 = (x513<=(x514>>(x515==x516)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x517 = 1;
	static int32_t x518 = 14228;
	static volatile int16_t x519 = INT16_MIN;
	volatile int32_t t84 = 6;

	t84 = (x517<=(x518>>(x519==x520)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x521 = INT32_MIN;
	uint8_t x522 = 21U;
	volatile int64_t x524 = INT64_MIN;
	int32_t t85 = -200;

	t85 = (x521<=(x522>>(x523==x524)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x526 = INT64_MAX;
	volatile uint64_t x527 = 52LLU;
	static int32_t x528 = -1;
	int32_t t86 = -1218;

	t86 = (x525<=(x526>>(x527==x528)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x529 = 14947LL;
	int64_t x530 = 490895LL;
	uint32_t x531 = 13541U;
	int8_t x532 = INT8_MIN;
	int32_t t87 = 10689481;

	t87 = (x529<=(x530>>(x531==x532)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x537 = INT8_MAX;
	uint16_t x538 = 3U;
	int32_t x539 = INT32_MIN;
	uint8_t x540 = 0U;
	volatile int32_t t88 = -895;

	t88 = (x537<=(x538>>(x539==x540)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x549 = -1;
	int64_t x551 = INT64_MIN;
	int32_t t89 = 374;

	t89 = (x549<=(x550>>(x551==x552)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x553 = 104U;
	uint32_t x554 = UINT32_MAX;
	int32_t x555 = 234;
	int32_t t90 = 21;

	t90 = (x553<=(x554>>(x555==x556)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x557 = INT32_MIN;
	int64_t x558 = INT64_MAX;
	static uint8_t x559 = UINT8_MAX;
	volatile int32_t x560 = -1;

	t91 = (x557<=(x558>>(x559==x560)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x565 = INT16_MIN;
	volatile int32_t t92 = -7;

	t92 = (x565<=(x566>>(x567==x568)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x577 = -1;
	uint32_t x578 = 1119U;
	int64_t x579 = -3509LL;
	uint32_t x580 = 5U;
	volatile int32_t t93 = -26368550;

	t93 = (x577<=(x578>>(x579==x580)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x585 = 5U;
	static int32_t x587 = 5193;
	int32_t x588 = -1;
	static int32_t t94 = -3;

	t94 = (x585<=(x586>>(x587==x588)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x589 = 9368601033759768LL;
	static uint8_t x590 = 46U;
	int64_t x591 = 498LL;
	volatile int32_t t95 = 1798692;

	t95 = (x589<=(x590>>(x591==x592)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x598 = INT64_MAX;
	int64_t x599 = INT64_MAX;
	uint64_t x600 = UINT64_MAX;

	t96 = (x597<=(x598>>(x599==x600)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x609 = INT8_MIN;
	volatile int64_t x610 = INT64_MAX;
	int32_t x611 = 7731;
	uint16_t x612 = 3178U;
	volatile int32_t t97 = -487466912;

	t97 = (x609<=(x610>>(x611==x612)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x613 = 3;
	volatile int8_t x615 = INT8_MIN;
	int8_t x616 = 1;
	int32_t t98 = -252614323;

	t98 = (x613<=(x614>>(x615==x616)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x625 = UINT16_MAX;
	volatile uint32_t x626 = UINT32_MAX;
	int16_t x627 = -15;
	static uint16_t x628 = 2425U;
	static int32_t t99 = 1238420;

	t99 = (x625<=(x626>>(x627==x628)));

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

