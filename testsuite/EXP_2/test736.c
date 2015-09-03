#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
static int16_t x10 = 4923;
int32_t x22 = INT32_MAX;
volatile int64_t x33 = INT64_MIN;
volatile int16_t x35 = 708;
static int8_t x40 = INT8_MIN;
static uint32_t x42 = 2126493344U;
int32_t x43 = INT32_MIN;
int8_t x44 = -1;
int64_t x54 = 98048197003007LL;
uint16_t x61 = 3U;
int64_t x65 = INT64_MIN;
uint16_t x67 = UINT16_MAX;
int16_t x72 = -1;
int32_t x76 = INT32_MIN;
uint8_t x79 = UINT8_MAX;
int32_t t17 = -2188059;
static volatile uint32_t x81 = 296U;
int32_t t18 = 109478578;
int64_t x96 = -1LL;
static uint32_t x99 = 15404U;
static volatile int32_t t21 = 9391;
int16_t x102 = INT16_MAX;
volatile int32_t t23 = 181222193;
int32_t x111 = INT32_MAX;
uint16_t x114 = 15U;
static uint32_t x125 = UINT32_MAX;
int16_t x145 = INT16_MIN;
int16_t x148 = INT16_MIN;
volatile uint16_t x149 = 17U;
static volatile int32_t t33 = 267527615;
volatile int32_t t34 = -1;
int8_t x179 = -1;
uint64_t x181 = UINT64_MAX;
volatile int32_t x184 = 15584;
int32_t x186 = INT32_MIN;
int16_t x187 = -13167;
uint32_t x192 = UINT32_MAX;
volatile int32_t t38 = 9;
volatile uint16_t x204 = 5980U;
volatile int32_t t40 = 4517759;
volatile uint32_t x206 = 206366U;
volatile int32_t x213 = -63913401;
int32_t x214 = INT32_MIN;
int32_t t43 = -321049834;
volatile uint32_t x217 = 3782U;
static volatile int32_t t45 = 246554;
uint8_t x229 = UINT8_MAX;
int64_t x231 = INT64_MIN;
volatile int8_t x240 = -1;
uint8_t x246 = UINT8_MAX;
uint16_t x248 = UINT16_MAX;
int8_t x265 = INT8_MAX;
static int32_t t53 = 5;
int8_t x281 = INT8_MIN;
int16_t x283 = INT16_MAX;
int16_t x302 = 14;
volatile uint32_t x304 = 35388U;
volatile int32_t t58 = 3888705;
static volatile int64_t x313 = -755222LL;
uint64_t x315 = UINT64_MAX;
static volatile int32_t x317 = -1;
int16_t x320 = -7485;
int16_t x324 = INT16_MIN;
int8_t x334 = INT8_MIN;
int64_t x335 = 14LL;
uint32_t x350 = 867U;
int8_t x353 = INT8_MIN;
volatile uint64_t x358 = 2414LLU;
uint32_t x360 = 0U;
volatile int32_t x362 = 2091;
volatile int32_t t69 = 7;
uint8_t x370 = 22U;
volatile int64_t x372 = INT64_MAX;
int8_t x392 = -57;
int32_t x398 = -53931;
static int32_t t72 = 19;
static volatile int16_t x405 = 317;
uint64_t x411 = UINT64_MAX;
int32_t x415 = 4;
static int16_t x422 = -1;
volatile uint32_t x430 = 7U;
int64_t x431 = -2128803370533210LL;
uint32_t x433 = 180435586U;
static uint8_t x448 = UINT8_MAX;
int64_t x450 = -1LL;
volatile int64_t x451 = -54893061354LL;
static uint8_t x465 = 4U;
int8_t x493 = INT8_MAX;
int64_t x498 = INT64_MAX;
static int32_t x499 = 91003;
uint32_t x504 = 2009019320U;
int8_t x512 = -1;
uint32_t x520 = UINT32_MAX;
int32_t x529 = -1;
static uint32_t x531 = 3659620U;
int64_t x540 = INT64_MIN;
volatile int32_t x542 = -1;
int8_t x544 = 0;
int32_t t98 = -443929;
static int8_t x546 = INT8_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = -2793;

	t0 = ((x1%(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 2882;

	t1 = ((x5%(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 20U;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 0;

	t2 = ((x9%(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 30U;
	static int32_t x14 = -1;
	int8_t x15 = 7;
	int8_t x16 = 18;
	volatile int32_t t3 = 3344161;

	t3 = ((x13%(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	volatile uint16_t x23 = UINT16_MAX;
	uint16_t x24 = UINT16_MAX;
	int32_t t4 = -7295;

	t4 = ((x21%(x22%x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	volatile uint16_t x26 = 18U;
	static int16_t x27 = INT16_MAX;
	static int64_t x28 = INT64_MAX;
	int32_t t5 = -85;

	t5 = ((x25%(x26%x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int64_t x30 = -1LL;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 8421U;
	volatile int32_t t6 = -2;

	t6 = ((x29%(x30%x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x34 = UINT64_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t7 = 1;

	t7 = ((x33%(x34%x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = UINT32_MAX;
	int32_t x38 = 59;
	int32_t x39 = INT32_MAX;
	int32_t t8 = 2047;

	t8 = ((x37%(x38%x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static volatile int32_t t9 = -1031348519;

	t9 = ((x41%(x42%x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static int8_t x46 = 3;
	int8_t x47 = INT8_MAX;
	int64_t x48 = INT64_MAX;
	int32_t t10 = -25158027;

	t10 = ((x45%(x46%x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	uint16_t x50 = 85U;
	static uint32_t x51 = 3732U;
	static uint32_t x52 = 58356U;
	int32_t t11 = 89;

	t11 = ((x49%(x50%x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t12 = -1;

	t12 = ((x53%(x54%x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MAX;
	static uint16_t x64 = UINT16_MAX;
	int32_t t13 = 31621;

	t13 = ((x61%(x62%x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = 12394;
	uint8_t x68 = 3U;
	int32_t t14 = 4259;

	t14 = ((x65%(x66%x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 17U;
	volatile uint16_t x70 = UINT16_MAX;
	static volatile int8_t x71 = INT8_MAX;
	volatile int32_t t15 = 2882;

	t15 = ((x69%(x70%x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	static int32_t x75 = -96;
	volatile int32_t t16 = 37;

	t16 = ((x73%(x74%x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = -1;
	int32_t x80 = -1;

	t17 = ((x77%(x78%x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MAX;
	volatile int32_t x84 = INT32_MIN;

	t18 = ((x81%(x82%x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MIN;
	volatile int8_t x92 = -1;
	static int32_t t19 = 301;

	t19 = ((x89%(x90%x91))==x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MAX;
	static uint16_t x94 = 11810U;
	uint32_t x95 = 23268363U;
	volatile int32_t t20 = 1938;

	t20 = ((x93%(x94%x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 193865779U;
	static int32_t x98 = 554983388;
	int32_t x100 = 37951845;

	t21 = ((x97%(x98%x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = 10;
	static int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = 54U;
	static volatile int32_t t22 = -883465914;

	t22 = ((x101%(x102%x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 28U;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MAX;

	t23 = ((x105%(x106%x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x109 = 125463770LLU;
	int64_t x110 = 5670885143801LL;
	int8_t x112 = INT8_MIN;
	int32_t t24 = 11;

	t24 = ((x109%(x110%x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 10349U;
	static int8_t x115 = INT8_MIN;
	static int64_t x116 = -76848842453541LL;
	volatile int32_t t25 = -21538;

	t25 = ((x113%(x114%x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = -1;
	static int8_t x122 = INT8_MIN;
	static int64_t x123 = INT64_MIN;
	int64_t x124 = -1LL;
	volatile int32_t t26 = -62698;

	t26 = ((x121%(x122%x123))==x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x126 = 22017U;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = 1;
	static volatile int32_t t27 = 251479;

	t27 = ((x125%(x126%x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x129 = 15U;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = 7U;
	volatile int32_t t28 = 0;

	t28 = ((x129%(x130%x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -14;
	static volatile int16_t x134 = INT16_MAX;
	int8_t x135 = -3;
	int8_t x136 = INT8_MIN;
	int32_t t29 = -84;

	t29 = ((x133%(x134%x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = 0U;
	int32_t t30 = -738;

	t30 = ((x137%(x138%x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	uint16_t x142 = 2U;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t31 = -3887;

	t31 = ((x141%(x142%x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = 389U;
	volatile int16_t x147 = INT16_MAX;
	static volatile int32_t t32 = -13030;

	t32 = ((x145%(x146%x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x150 = INT32_MIN;
	static int32_t x151 = -3433721;
	volatile uint32_t x152 = 1870704U;

	t33 = ((x149%(x150%x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -9;
	static int8_t x154 = INT8_MIN;
	volatile int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;

	t34 = ((x153%(x154%x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x178 = 8373075LLU;
	uint64_t x180 = 290887215321LLU;
	static int32_t t35 = 3258202;

	t35 = ((x177%(x178%x179))==x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x182 = INT32_MIN;
	volatile int32_t x183 = 389;
	int32_t t36 = 625;

	t36 = ((x181%(x182%x183))==x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint64_t x188 = 22493033436777756LLU;
	volatile int32_t t37 = -31;

	t37 = ((x185%(x186%x187))==x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = 2LL;
	int32_t x190 = -526746;
	int16_t x191 = 9069;

	t38 = ((x189%(x190%x191))==x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x197 = -2;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MAX;
	int32_t t39 = -915302030;

	t39 = ((x197%(x198%x199))==x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x201 = 1U;
	volatile int8_t x202 = -1;
	int64_t x203 = INT64_MIN;

	t40 = ((x201%(x202%x203))==x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x205 = 27;
	uint8_t x207 = 19U;
	int64_t x208 = 39789674LL;
	int32_t t41 = 168879;

	t41 = ((x205%(x206%x207))==x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = -336;
	int16_t x210 = -1;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = -1;
	int32_t t42 = -250546606;

	t42 = ((x209%(x210%x211))==x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = -27024959;

	t43 = ((x213%(x214%x215))==x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t44 = -4217406;

	t44 = ((x217%(x218%x219))==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x225 = INT32_MAX;
	uint16_t x226 = 463U;
	uint8_t x227 = 78U;
	uint64_t x228 = 127145121368941LLU;

	t45 = ((x225%(x226%x227))==x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x230 = INT32_MAX;
	static volatile uint8_t x232 = 101U;
	volatile int32_t t46 = 98540044;

	t46 = ((x229%(x230%x231))==x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x237 = INT16_MAX;
	int8_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	volatile int32_t t47 = 1;

	t47 = ((x237%(x238%x239))==x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x247 = 372237633U;
	static int32_t t48 = 1701;

	t48 = ((x245%(x246%x247))==x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -63;
	static uint8_t x252 = 3U;
	int32_t t49 = -831804400;

	t49 = ((x249%(x250%x251))==x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	static uint16_t x259 = 151U;
	int16_t x260 = INT16_MIN;
	static int32_t t50 = -2737912;

	t50 = ((x257%(x258%x259))==x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x266 = INT64_MIN;
	uint32_t x267 = 133U;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t51 = -15;

	t51 = ((x265%(x266%x267))==x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MIN;
	int32_t x275 = 91407741;
	int64_t x276 = INT64_MAX;
	int32_t t52 = 24713;

	t52 = ((x273%(x274%x275))==x276);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = 197;
	int8_t x278 = INT8_MAX;
	uint64_t x279 = 29478LLU;
	uint16_t x280 = 197U;

	t53 = ((x277%(x278%x279))==x280);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x282 = 165962916906LL;
	uint32_t x284 = 2038635U;
	int32_t t54 = 3;

	t54 = ((x281%(x282%x283))==x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = 3322U;
	uint64_t x287 = 2985157341LLU;
	uint16_t x288 = 3U;
	int32_t t55 = 15;

	t55 = ((x285%(x286%x287))==x288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = 22LL;
	int32_t x298 = INT32_MAX;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = -1;
	volatile int32_t t56 = -33696;

	t56 = ((x297%(x298%x299))==x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x301 = 1U;
	int64_t x303 = -76139LL;
	int32_t t57 = 9503171;

	t57 = ((x301%(x302%x303))==x304);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -1LL;
	static int32_t x310 = INT32_MAX;
	static volatile int8_t x311 = INT8_MIN;
	volatile int8_t x312 = INT8_MIN;

	t58 = ((x309%(x310%x311))==x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x314 = 87LLU;
	static int64_t x316 = INT64_MIN;
	static volatile int32_t t59 = -7;

	t59 = ((x313%(x314%x315))==x316);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x318 = 20478U;
	volatile int8_t x319 = INT8_MAX;
	int32_t t60 = -34;

	t60 = ((x317%(x318%x319))==x320);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x321 = -1;
	static uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 433813468LLU;
	int32_t t61 = 108717;

	t61 = ((x321%(x322%x323))==x324);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = INT64_MAX;
	static int32_t t62 = -1;

	t62 = ((x325%(x326%x327))==x328);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x333 = UINT32_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t63 = -218902;

	t63 = ((x333%(x334%x335))==x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MAX;
	int32_t t64 = 7523587;

	t64 = ((x345%(x346%x347))==x348);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x349 = INT64_MIN;
	static int8_t x351 = 15;
	int8_t x352 = -1;
	int32_t t65 = 3;

	t65 = ((x349%(x350%x351))==x352);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x354 = 1;
	int64_t x355 = 977793LL;
	volatile uint16_t x356 = 17339U;
	int32_t t66 = -309;

	t66 = ((x353%(x354%x355))==x356);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	static int32_t t67 = -91;

	t67 = ((x357%(x358%x359))==x360);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 12U;
	volatile int32_t t68 = 233362929;

	t68 = ((x361%(x362%x363))==x364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x365 = -1778;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = INT64_MAX;

	t69 = ((x365%(x366%x367))==x368);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x369 = INT16_MIN;
	static int64_t x371 = 443663949604LL;
	int32_t t70 = -12;

	t70 = ((x369%(x370%x371))==x372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x389 = 1345265023U;
	int32_t x390 = -1;
	int32_t x391 = 21;
	static int32_t t71 = -46811;

	t71 = ((x389%(x390%x391))==x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x397 = 39U;
	static volatile uint32_t x399 = 359927U;
	int8_t x400 = -1;

	t72 = ((x397%(x398%x399))==x400);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MAX;
	static int8_t x408 = INT8_MIN;
	static int32_t t73 = 1;

	t73 = ((x405%(x406%x407))==x408);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x409 = 3039493620135LLU;
	int64_t x410 = INT64_MIN;
	int64_t x412 = -2612290159980975LL;
	volatile int32_t t74 = -16110;

	t74 = ((x409%(x410%x411))==x412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x413 = INT32_MIN;
	static uint8_t x414 = 7U;
	int8_t x416 = INT8_MAX;
	int32_t t75 = 48592;

	t75 = ((x413%(x414%x415))==x416);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x417 = 0U;
	volatile uint16_t x418 = UINT16_MAX;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -1;
	static int32_t t76 = 1376535;

	t76 = ((x417%(x418%x419))==x420);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = INT32_MIN;
	int64_t x423 = 74083939LL;
	int16_t x424 = INT16_MIN;
	volatile int32_t t77 = -48917;

	t77 = ((x421%(x422%x423))==x424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = INT64_MIN;
	uint16_t x432 = 25U;
	int32_t t78 = 748503767;

	t78 = ((x429%(x430%x431))==x432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x434 = -1;
	static int32_t x435 = INT32_MIN;
	static uint8_t x436 = 79U;
	static int32_t t79 = -3169694;

	t79 = ((x433%(x434%x435))==x436);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x441 = INT16_MAX;
	int32_t x442 = 38;
	uint16_t x443 = 31U;
	int16_t x444 = -1;
	static int32_t t80 = -2;

	t80 = ((x441%(x442%x443))==x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = INT16_MIN;
	static int16_t x446 = INT16_MAX;
	uint64_t x447 = 6066374282125099LLU;
	volatile int32_t t81 = 165019967;

	t81 = ((x445%(x446%x447))==x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x449 = INT32_MIN;
	volatile int8_t x452 = -62;
	int32_t t82 = 387;

	t82 = ((x449%(x450%x451))==x452);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x461 = INT64_MIN;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = INT8_MAX;
	int32_t x464 = 8971;
	int32_t t83 = 510493;

	t83 = ((x461%(x462%x463))==x464);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x465%(x466%x467))==x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x473 = 22U;
	int8_t x474 = -6;
	int32_t x475 = 5373;
	volatile int8_t x476 = INT8_MAX;
	int32_t t85 = 429123714;

	t85 = ((x473%(x474%x475))==x476);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x481 = INT8_MIN;
	volatile uint16_t x482 = 1831U;
	static int64_t x483 = INT64_MAX;
	static volatile int32_t x484 = INT32_MAX;
	static int32_t t86 = 428859837;

	t86 = ((x481%(x482%x483))==x484);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x489 = 1762U;
	uint64_t x490 = UINT64_MAX;
	static int16_t x491 = -52;
	static volatile int8_t x492 = -1;
	int32_t t87 = -1350978;

	t87 = ((x489%(x490%x491))==x492);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x494 = 1466LLU;
	static uint64_t x495 = 817133965564LLU;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t88 = 26241;

	t88 = ((x493%(x494%x495))==x496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x497 = INT64_MIN;
	int64_t x500 = INT64_MIN;
	static volatile int32_t t89 = -25811;

	t89 = ((x497%(x498%x499))==x500);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = -1;
	int64_t x502 = INT64_MIN;
	static volatile uint8_t x503 = 36U;
	int32_t t90 = -1896;

	t90 = ((x501%(x502%x503))==x504);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x509 = 665132214946847800LLU;
	static uint8_t x510 = 3U;
	static uint16_t x511 = 50U;
	volatile int32_t t91 = -2582384;

	t91 = ((x509%(x510%x511))==x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x517 = -1LL;
	uint32_t x518 = 45U;
	int32_t x519 = 381787;
	int32_t t92 = -64306262;

	t92 = ((x517%(x518%x519))==x520);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x521 = 737U;
	static uint16_t x522 = 22335U;
	static uint32_t x523 = UINT32_MAX;
	static int32_t x524 = INT32_MIN;
	int32_t t93 = -569;

	t93 = ((x521%(x522%x523))==x524);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x525 = 72093020LLU;
	static int8_t x526 = 25;
	int64_t x527 = INT64_MAX;
	int64_t x528 = INT64_MAX;
	int32_t t94 = -14859425;

	t94 = ((x525%(x526%x527))==x528);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x530 = -505;
	static int8_t x532 = -1;
	int32_t t95 = 22;

	t95 = ((x529%(x530%x531))==x532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x533 = 16032U;
	uint64_t x534 = 433340114LLU;
	int16_t x535 = -1;
	int8_t x536 = -2;
	volatile int32_t t96 = -686106111;

	t96 = ((x533%(x534%x535))==x536);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x537 = INT32_MIN;
	static int16_t x538 = -1;
	int8_t x539 = 7;
	static int32_t t97 = 15990;

	t97 = ((x537%(x538%x539))==x540);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x541 = INT32_MIN;
	volatile int16_t x543 = INT16_MIN;

	t98 = ((x541%(x542%x543))==x544);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x545 = 1U;
	static int64_t x547 = INT64_MIN;
	volatile int8_t x548 = -1;
	int32_t t99 = -201441256;

	t99 = ((x545%(x546%x547))==x548);

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

