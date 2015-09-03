#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MAX;
uint16_t x14 = 10U;
static uint16_t x28 = UINT16_MAX;
static int32_t t6 = -2411;
uint64_t x30 = UINT64_MAX;
uint16_t x31 = 82U;
int16_t x33 = -1576;
int16_t x36 = INT16_MAX;
int32_t t8 = 30668581;
int32_t x37 = INT32_MAX;
static int32_t x40 = 45278541;
int32_t x42 = INT32_MIN;
int32_t x45 = -100;
int32_t x46 = -1;
int16_t x47 = -1;
uint8_t x48 = 1U;
int8_t x51 = -3;
int32_t x56 = -72747695;
int32_t t15 = -56483703;
int64_t x68 = -1LL;
static int64_t x71 = INT64_MIN;
volatile int16_t x73 = -191;
uint16_t x76 = UINT16_MAX;
int16_t x79 = 0;
uint64_t x80 = UINT64_MAX;
int16_t x84 = INT16_MAX;
int64_t x85 = -1354238067060LL;
volatile uint8_t x86 = 27U;
int8_t x89 = INT8_MIN;
uint64_t x91 = 35LLU;
int32_t t22 = 600215;
static uint8_t x93 = UINT8_MAX;
int8_t x95 = INT8_MIN;
int8_t x103 = INT8_MIN;
volatile int32_t t25 = -1;
static int16_t x114 = INT16_MIN;
uint16_t x123 = UINT16_MAX;
int32_t t30 = -154530713;
uint64_t x130 = 10460471062LLU;
volatile int32_t t32 = 14;
int8_t x133 = 0;
int16_t x137 = INT16_MIN;
int64_t x146 = INT64_MIN;
volatile int32_t x154 = 0;
volatile int16_t x172 = -1;
uint16_t x178 = UINT16_MAX;
int16_t x189 = INT16_MAX;
int32_t t50 = 60;
static int32_t x206 = -1;
int32_t x209 = 4902206;
int64_t x210 = INT64_MIN;
volatile int64_t x218 = INT64_MIN;
uint32_t x220 = 506733U;
volatile int32_t t54 = 1271345;
volatile int16_t x221 = INT16_MIN;
static volatile int32_t x222 = INT32_MAX;
int32_t t55 = 790;
int32_t t56 = -4871;
uint32_t x241 = 387U;
int32_t x252 = -1;
int8_t x260 = INT8_MAX;
uint16_t x267 = UINT16_MAX;
volatile int32_t x272 = INT32_MAX;
int32_t t67 = 454394;
volatile int32_t t68 = 3;
uint8_t x278 = 15U;
int32_t x281 = INT32_MIN;
int32_t x284 = -24472173;
int8_t x285 = -12;
int32_t x286 = INT32_MAX;
int32_t x287 = 1;
volatile int32_t t71 = 1328940;
uint16_t x296 = 0U;
int8_t x300 = INT8_MIN;
volatile int32_t t74 = 120762;
int64_t x301 = 56LL;
uint32_t x303 = 2008U;
int32_t t75 = 189;
uint8_t x305 = UINT8_MAX;
int64_t x314 = -2LL;
static volatile uint16_t x316 = 5U;
int64_t x327 = INT64_MIN;
int32_t t81 = 320;
volatile uint8_t x333 = 4U;
static uint64_t x334 = UINT64_MAX;
uint8_t x336 = 2U;
int16_t x342 = 59;
int8_t x348 = INT8_MIN;
volatile uint8_t x351 = 1U;
int16_t x354 = INT16_MIN;
uint32_t x355 = UINT32_MAX;
int16_t x359 = INT16_MIN;
volatile int64_t x360 = INT64_MIN;
int32_t x366 = INT32_MAX;
int32_t x368 = INT32_MAX;
uint32_t x369 = UINT32_MAX;
uint8_t x372 = 98U;
uint8_t x384 = UINT8_MAX;
static uint64_t x387 = UINT64_MAX;
int8_t x388 = -1;
volatile int32_t t96 = 1244125;
int8_t x393 = INT8_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	int16_t x4 = 8322;
	volatile int32_t t0 = 1;

	t0 = (x1==((x2^x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = 100;
	volatile int32_t x7 = -78617876;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = -362600;

	t1 = (x5==((x6^x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 219;
	static volatile uint16_t x10 = 0U;
	static uint16_t x11 = 7248U;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -13639802;

	t2 = (x9==((x10^x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 0;
	static int64_t x15 = -4080108991LL;
	volatile int16_t x16 = -1;
	static volatile int32_t t3 = -352622345;

	t3 = (x13==((x14^x15)==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 30743U;
	static int8_t x18 = 59;
	int8_t x19 = INT8_MAX;
	int32_t x20 = -80385;
	int32_t t4 = -71094978;

	t4 = (x17==((x18^x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 15402U;
	static int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MIN;
	int8_t x24 = 8;
	volatile int32_t t5 = 3050199;

	t5 = (x21==((x22^x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static int32_t x26 = INT32_MIN;
	int8_t x27 = -33;

	t6 = (x25==((x26^x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -1677077;

	t7 = (x29==((x30^x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MAX;

	t8 = (x33==((x34^x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 249973314343762974LLU;
	int64_t x39 = INT64_MAX;
	volatile int32_t t9 = 0;

	t9 = (x37==((x38^x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int32_t x43 = INT32_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 62515;

	t10 = (x41==((x42^x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t t11 = 10;

	t11 = (x45==((x46^x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MIN;
	int32_t x52 = 5;
	static int32_t t12 = 2;

	t12 = (x49==((x50^x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1201LLU;
	int16_t x54 = -1;
	int32_t x55 = 0;
	static int32_t t13 = 32991223;

	t13 = (x53==((x54^x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 10U;
	int64_t x58 = INT64_MAX;
	uint32_t x59 = 939654U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 792968300;

	t14 = (x57==((x58^x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static int32_t x62 = INT32_MAX;
	volatile uint16_t x63 = 9U;
	uint16_t x64 = 6306U;

	t15 = (x61==((x62^x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	volatile uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = 793U;
	volatile int32_t t16 = 52080;

	t16 = (x65==((x66^x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	volatile uint32_t x72 = 315030704U;
	int32_t t17 = -56380441;

	t17 = (x69==((x70^x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 5;

	t18 = (x73==((x74^x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile int8_t x78 = 1;
	volatile int32_t t19 = -3638;

	t19 = (x77==((x78^x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 1305U;
	int64_t x82 = INT64_MIN;
	static int16_t x83 = INT16_MIN;
	int32_t t20 = -22425;

	t20 = (x81==((x82^x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x87 = -1;
	int32_t x88 = -1;
	int32_t t21 = 2;

	t21 = (x85==((x86^x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = INT8_MIN;
	int64_t x92 = INT64_MIN;

	t22 = (x89==((x90^x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 22623116564664024LLU;
	volatile uint32_t x96 = UINT32_MAX;
	int32_t t23 = 51558;

	t23 = (x93==((x94^x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 0U;
	volatile int32_t x99 = -1;
	uint16_t x100 = 2U;
	int32_t t24 = -6575;

	t24 = (x97==((x98^x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	int64_t x104 = INT64_MIN;

	t25 = (x101==((x102^x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 0U;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 1;

	t26 = (x105==((x106^x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MAX;
	volatile int8_t x112 = INT8_MAX;
	int32_t t27 = -107;

	t27 = (x109==((x110^x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 7538U;
	static int8_t x115 = 16;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 114728;

	t28 = (x113==((x114^x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = 10731;
	volatile int32_t x118 = 1;
	int64_t x119 = INT64_MIN;
	int32_t x120 = -25;
	volatile int32_t t29 = -8167;

	t29 = (x117==((x118^x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -744443484993922LL;
	volatile int8_t x122 = 42;
	volatile int64_t x124 = INT64_MIN;

	t30 = (x121==((x122^x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -14545;
	static int32_t x126 = 43914;
	int16_t x127 = INT16_MAX;
	volatile int32_t x128 = -1;
	volatile int32_t t31 = 6312;

	t31 = (x125==((x126^x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x131 = 1U;
	int32_t x132 = -9412;

	t32 = (x129==((x130^x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	static int8_t x135 = -6;
	uint8_t x136 = 5U;
	int32_t t33 = 851083;

	t33 = (x133==((x134^x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	volatile uint16_t x139 = 13285U;
	int32_t x140 = -1084666;
	volatile int32_t t34 = 104;

	t34 = (x137==((x138^x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 1395;
	int32_t x142 = -91;
	static uint16_t x143 = 437U;
	volatile int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -661;

	t35 = (x141==((x142^x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	int32_t t36 = 275;

	t36 = (x145==((x146^x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	static volatile uint32_t x152 = UINT32_MAX;
	static int32_t t37 = 158;

	t37 = (x149==((x150^x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 17U;
	static volatile uint16_t x155 = 414U;
	uint32_t x156 = 247510368U;
	volatile int32_t t38 = 17;

	t38 = (x153==((x154^x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MIN;
	static volatile int8_t x159 = -59;
	uint64_t x160 = 7488847289250LLU;
	static int32_t t39 = -29014697;

	t39 = (x157==((x158^x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 41768U;
	static uint8_t x162 = 6U;
	uint64_t x163 = 1478298196611393LLU;
	int64_t x164 = -132671LL;
	static int32_t t40 = 1425611;

	t40 = (x161==((x162^x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 40U;
	int32_t x166 = INT32_MIN;
	static uint8_t x167 = UINT8_MAX;
	volatile uint8_t x168 = 1U;
	int32_t t41 = 11488460;

	t41 = (x165==((x166^x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int32_t x170 = -1;
	uint16_t x171 = 4665U;
	volatile int32_t t42 = -598768723;

	t42 = (x169==((x170^x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = UINT32_MAX;
	int32_t x174 = 1020522;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -439754975;

	t43 = (x173==((x174^x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 4U;
	volatile int16_t x179 = INT16_MIN;
	int32_t x180 = 5715;
	static int32_t t44 = -10;

	t44 = (x177==((x178^x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 13U;
	volatile uint8_t x182 = 0U;
	uint64_t x183 = 4140597466595LLU;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 808050998;

	t45 = (x181==((x182^x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -10;
	int64_t x186 = 653773244662LL;
	int64_t x187 = -1LL;
	int32_t x188 = -44881548;
	volatile int32_t t46 = -176;

	t46 = (x185==((x186^x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -141;

	t47 = (x189==((x190^x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 104U;
	int8_t x194 = -1;
	int16_t x195 = -12;
	volatile uint32_t x196 = 27U;
	int32_t t48 = -134078;

	t48 = (x193==((x194^x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 0U;
	uint8_t x198 = UINT8_MAX;
	static int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	int32_t t49 = -12799346;

	t49 = (x197==((x198^x199)==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	int16_t x202 = INT16_MIN;
	volatile int32_t x203 = -1;
	static int16_t x204 = INT16_MAX;

	t50 = (x201==((x202^x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 0;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -71024;

	t51 = (x205==((x206^x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x211 = -1LL;
	int64_t x212 = INT64_MIN;
	int32_t t52 = -5;

	t52 = (x209==((x210^x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 411085LLU;
	volatile int32_t x214 = -313867357;
	uint32_t x215 = 2788U;
	static int64_t x216 = INT64_MIN;
	int32_t t53 = -30444;

	t53 = (x213==((x214^x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 75371753727373LLU;
	volatile int16_t x219 = -1;

	t54 = (x217==((x218^x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 8622U;

	t55 = (x221==((x222^x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = 36422176944909227LL;
	volatile uint16_t x226 = 638U;
	int64_t x227 = INT64_MAX;
	uint16_t x228 = 0U;

	t56 = (x225==((x226^x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	uint64_t x230 = 1598LLU;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = 0;
	int32_t t57 = 938799;

	t57 = (x229==((x230^x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MAX;
	static int16_t x235 = INT16_MIN;
	static int64_t x236 = -1LL;
	static int32_t t58 = -32939;

	t58 = (x233==((x234^x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = UINT64_MAX;
	static uint64_t x238 = 393074025858LLU;
	static uint8_t x239 = 22U;
	uint16_t x240 = 0U;
	int32_t t59 = 3;

	t59 = (x237==((x238^x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 2U;
	volatile int16_t x243 = 108;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = 264281;

	t60 = (x241==((x242^x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = -324418LL;
	volatile int8_t x247 = INT8_MAX;
	static int8_t x248 = 2;
	int32_t t61 = -9438329;

	t61 = (x245==((x246^x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = 0U;
	int32_t t62 = -46;

	t62 = (x249==((x250^x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	static uint64_t x254 = 3LLU;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = INT16_MIN;
	int32_t t63 = -323;

	t63 = (x253==((x254^x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int16_t x258 = 0;
	volatile int8_t x259 = 19;
	volatile int32_t t64 = -40375;

	t64 = (x257==((x258^x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 11815893;
	int32_t x262 = -159963896;
	volatile uint16_t x263 = 6U;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -454;

	t65 = (x261==((x262^x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = 0U;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 100613203;

	t66 = (x265==((x266^x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MIN;
	uint16_t x270 = 7703U;
	int64_t x271 = -20LL;

	t67 = (x269==((x270^x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 4430562U;
	static int64_t x274 = INT64_MAX;
	int8_t x275 = -1;
	static int16_t x276 = INT16_MIN;

	t68 = (x273==((x274^x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 2;
	int32_t x279 = -88998;
	int32_t x280 = -1;
	static volatile int32_t t69 = 107665067;

	t69 = (x277==((x278^x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 368;
	int64_t x283 = INT64_MAX;
	volatile int32_t t70 = -93;

	t70 = (x281==((x282^x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x288 = 26;

	t71 = (x285==((x286^x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	volatile uint64_t x290 = 4205529441739861LLU;
	static int32_t x291 = 253937915;
	volatile int16_t x292 = -768;
	int32_t t72 = 64681167;

	t72 = (x289==((x290^x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	volatile int8_t x294 = INT8_MAX;
	volatile int32_t x295 = INT32_MIN;
	int32_t t73 = -349785213;

	t73 = (x293==((x294^x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 181;
	volatile uint32_t x298 = 25U;
	static int64_t x299 = INT64_MAX;

	t74 = (x297==((x298^x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	int16_t x304 = INT16_MIN;

	t75 = (x301==((x302^x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	static int32_t x307 = 53007885;
	int64_t x308 = -1LL;
	volatile int32_t t76 = 39669218;

	t76 = (x305==((x306^x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	int64_t x310 = INT64_MIN;
	static int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 4;

	t77 = (x309==((x310^x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 85429U;
	int64_t x315 = 256196082864719LL;
	int32_t t78 = -996;

	t78 = (x313==((x314^x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	static int64_t x318 = INT64_MIN;
	volatile int32_t x319 = -12894657;
	uint64_t x320 = 151617757208239457LLU;
	int32_t t79 = -259297;

	t79 = (x317==((x318^x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = 8555;
	uint16_t x322 = 565U;
	uint64_t x323 = 8347267079258LLU;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -481075654;

	t80 = (x321==((x322^x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 1411478536U;
	uint64_t x326 = UINT64_MAX;
	int16_t x328 = INT16_MIN;

	t81 = (x325==((x326^x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -16;
	int64_t x330 = -2045504581LL;
	uint64_t x331 = UINT64_MAX;
	int16_t x332 = -1;
	int32_t t82 = 291;

	t82 = (x329==((x330^x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x335 = INT32_MIN;
	int32_t t83 = 135755918;

	t83 = (x333==((x334^x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = 49;
	volatile int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	int32_t t84 = 240609;

	t84 = (x337==((x338^x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 914257592592LLU;
	int16_t x343 = 15;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 13905;

	t85 = (x341==((x342^x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = INT64_MAX;
	static int32_t x347 = INT32_MIN;
	int32_t t86 = 20928;

	t86 = (x345==((x346^x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 14200241917098674LLU;
	int64_t x350 = INT64_MAX;
	int64_t x352 = INT64_MAX;
	volatile int32_t t87 = -192;

	t87 = (x349==((x350^x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -543436529190LL;
	int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -1;

	t88 = (x353==((x354^x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int64_t x358 = -2941LL;
	volatile int32_t t89 = 184059;

	t89 = (x357==((x358^x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	volatile uint64_t x363 = 2008821LLU;
	static volatile int8_t x364 = INT8_MIN;
	int32_t t90 = 957080;

	t90 = (x361==((x362^x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 1U;
	int32_t x367 = INT32_MIN;
	int32_t t91 = -13731719;

	t91 = (x365==((x366^x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = -1;
	volatile uint8_t x371 = UINT8_MAX;
	volatile int32_t t92 = -2033;

	t92 = (x369==((x370^x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 78826;
	int64_t x374 = 534220918LL;
	static uint8_t x375 = 2U;
	volatile uint64_t x376 = 134735320LLU;
	int32_t t93 = 38;

	t93 = (x373==((x374^x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = 2861;
	volatile uint16_t x380 = 32U;
	volatile int32_t t94 = 494;

	t94 = (x377==((x378^x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 22U;
	uint8_t x382 = 20U;
	uint8_t x383 = 2U;
	volatile int32_t t95 = -62636600;

	t95 = (x381==((x382^x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;

	t96 = (x385==((x386^x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	static uint8_t x390 = 13U;
	static volatile uint16_t x391 = 1U;
	volatile int32_t x392 = -130733;
	volatile int32_t t97 = 192231;

	t97 = (x389==((x390^x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 216U;
	static volatile uint64_t x395 = 3458859123323382LLU;
	uint8_t x396 = 20U;
	volatile int32_t t98 = -112061562;

	t98 = (x393==((x394^x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -6;
	int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint64_t x400 = UINT64_MAX;
	static volatile int32_t t99 = -23;

	t99 = (x397==((x398^x399)==x400));

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

