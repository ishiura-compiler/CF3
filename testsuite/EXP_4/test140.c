#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
int8_t x3 = INT8_MIN;
volatile uint64_t x20 = 215LLU;
int16_t x23 = INT16_MAX;
int64_t x27 = 119045986LL;
static uint64_t x44 = UINT64_MAX;
volatile int32_t t7 = 462784858;
static volatile int8_t x47 = -15;
int8_t x49 = INT8_MIN;
volatile int64_t x67 = -1LL;
volatile int8_t x73 = INT8_MIN;
int16_t x82 = -1;
int16_t x86 = 4;
static int16_t x87 = INT16_MIN;
uint8_t x106 = UINT8_MAX;
int8_t x108 = 1;
static int32_t t21 = -150165443;
uint32_t x111 = 183U;
int64_t x115 = 1940606829072459LL;
int8_t x118 = -1;
static volatile int32_t t26 = 66;
uint8_t x136 = 58U;
static uint16_t x145 = UINT16_MAX;
uint32_t x148 = 47719614U;
static volatile uint16_t x149 = 11U;
int8_t x150 = INT8_MIN;
int64_t x158 = 92432583922149410LL;
int8_t x163 = INT8_MAX;
int32_t t33 = -89787;
int32_t t35 = -1;
uint8_t x176 = 2U;
volatile int16_t x177 = -1;
int8_t x178 = 3;
static int32_t x192 = INT32_MAX;
volatile uint8_t x193 = UINT8_MAX;
int16_t x194 = INT16_MAX;
int32_t x209 = -1;
uint32_t x211 = UINT32_MAX;
static uint32_t x214 = UINT32_MAX;
uint16_t x216 = 149U;
int64_t x217 = INT64_MAX;
uint64_t x218 = 22258005303803LLU;
static int8_t x224 = -1;
volatile int32_t t49 = -6642;
int16_t x241 = INT16_MAX;
int32_t x252 = -348;
int64_t x253 = INT64_MIN;
volatile int32_t t52 = 1068165660;
volatile uint32_t x259 = UINT32_MAX;
uint32_t x261 = 6U;
static int16_t x263 = -5;
static volatile int8_t x264 = INT8_MAX;
int32_t t54 = -516302;
int8_t x266 = -1;
uint16_t x282 = 17U;
static volatile int32_t t58 = 514824;
int32_t x297 = INT32_MIN;
int64_t x298 = INT64_MIN;
uint8_t x306 = UINT8_MAX;
uint8_t x316 = 10U;
int32_t t65 = -58;
volatile int32_t x319 = INT32_MIN;
static int32_t t67 = -8681;
int16_t x328 = INT16_MIN;
static int8_t x330 = INT8_MIN;
static int16_t x332 = INT16_MAX;
static volatile uint64_t x334 = UINT64_MAX;
static uint16_t x340 = 2U;
volatile uint32_t x342 = 32311U;
int64_t x343 = 6182LL;
static int32_t x345 = INT32_MIN;
int64_t x351 = 1234482964LL;
uint32_t x352 = 163968U;
int32_t x357 = INT32_MIN;
int64_t x361 = -55617093773LL;
int8_t x363 = 1;
uint16_t x366 = UINT16_MAX;
int16_t x371 = INT16_MIN;
static int64_t x380 = 60163910735370446LL;
static uint32_t x381 = UINT32_MAX;
static uint64_t x384 = UINT64_MAX;
static int32_t x385 = -1;
int16_t x388 = 11282;
volatile int32_t t83 = -639229330;
uint16_t x389 = 1392U;
uint32_t x395 = 5U;
int64_t x396 = INT64_MIN;
int32_t x397 = -1;
int8_t x398 = INT8_MIN;
int32_t t86 = 2689;
volatile int32_t x413 = -1;
uint16_t x415 = 3666U;
int32_t x440 = -1;
int8_t x442 = INT8_MIN;
int8_t x443 = INT8_MIN;
int32_t x446 = -2844;
int32_t t94 = -798;
uint32_t x451 = 84135395U;
volatile int8_t x453 = -1;
int32_t t96 = 0;
int16_t x470 = 1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x4 = -1LL;
	static volatile int32_t t0 = -1;

	t0 = (x1<=(x2&(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 97988U;
	volatile uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = 20433765;

	t1 = (x9<=(x10&(x11+x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = 0U;
	static int16_t x19 = INT16_MAX;
	static int32_t t2 = 30;

	t2 = (x17<=(x18&(x19+x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	static volatile int8_t x22 = INT8_MIN;
	int16_t x24 = 2;
	volatile int32_t t3 = 432;

	t3 = (x21<=(x22&(x23+x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = -242642503018LL;
	int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t4 = -54;

	t4 = (x25<=(x26&(x27+x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 30;
	static int32_t x30 = INT32_MIN;
	volatile int8_t x31 = INT8_MIN;
	volatile int64_t x32 = -1LL;
	int32_t t5 = 199592215;

	t5 = (x29<=(x30&(x31+x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -2;
	int64_t x34 = INT64_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = 7647096327LLU;
	static volatile int32_t t6 = -26823;

	t6 = (x33<=(x34&(x35+x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = INT16_MAX;
	int32_t x42 = 5;
	volatile int16_t x43 = INT16_MIN;

	t7 = (x41<=(x42&(x43+x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int64_t x46 = INT64_MAX;
	int64_t x48 = -267422LL;
	int32_t t8 = 138386;

	t8 = (x45<=(x46&(x47+x48)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = INT64_MIN;
	static int16_t x51 = 36;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t9 = 104;

	t9 = (x49<=(x50&(x51+x52)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	static volatile int32_t x54 = 195017422;
	uint16_t x55 = 620U;
	int8_t x56 = -1;
	volatile int32_t t10 = 20971;

	t10 = (x53<=(x54&(x55+x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 3629U;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	int32_t x60 = 6182584;
	static int32_t t11 = 27;

	t11 = (x57<=(x58&(x59+x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile int16_t x68 = INT16_MAX;
	volatile int32_t t12 = 4778271;

	t12 = (x65<=(x66&(x67+x68)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	uint16_t x70 = UINT16_MAX;
	static volatile int8_t x71 = INT8_MIN;
	volatile int8_t x72 = INT8_MAX;
	int32_t t13 = 57881;

	t13 = (x69<=(x70&(x71+x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = 2606916;
	int8_t x75 = 2;
	int64_t x76 = INT64_MIN;
	static int32_t t14 = 3;

	t14 = (x73<=(x74&(x75+x76)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = 1117;
	int16_t x78 = 1753;
	static int32_t x79 = -1;
	static volatile uint8_t x80 = 3U;
	volatile int32_t t15 = -601379169;

	t15 = (x77<=(x78&(x79+x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 74U;
	int64_t x83 = 16019993833554LL;
	static int32_t x84 = 42343060;
	int32_t t16 = 19075;

	t16 = (x81<=(x82&(x83+x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	int16_t x88 = -1;
	volatile int32_t t17 = 843630;

	t17 = (x85<=(x86&(x87+x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	static int32_t x90 = INT32_MIN;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = UINT64_MAX;
	int32_t t18 = -53767;

	t18 = (x89<=(x90&(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = INT32_MIN;
	static volatile uint32_t x98 = UINT32_MAX;
	static int8_t x99 = -1;
	int8_t x100 = INT8_MIN;
	volatile int32_t t19 = 473916;

	t19 = (x97<=(x98&(x99+x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x101 = INT8_MAX;
	uint64_t x102 = UINT64_MAX;
	static uint16_t x103 = 304U;
	int32_t x104 = -1;
	int32_t t20 = 6095008;

	t20 = (x101<=(x102&(x103+x104)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x105 = -75326562862477152LL;
	int16_t x107 = 1;

	t21 = (x105<=(x106&(x107+x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -1LL;
	static int32_t x110 = 126;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t22 = 62096;

	t22 = (x109<=(x110&(x111+x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MIN;
	uint32_t x116 = 3U;
	volatile int32_t t23 = 948806;

	t23 = (x113<=(x114&(x115+x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	uint8_t x119 = UINT8_MAX;
	static int8_t x120 = INT8_MIN;
	int32_t t24 = 167;

	t24 = (x117<=(x118&(x119+x120)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = 1U;
	uint16_t x123 = UINT16_MAX;
	static uint64_t x124 = 33474179064780204LLU;
	int32_t t25 = 737124;

	t25 = (x121<=(x122&(x123+x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = -1;
	int32_t x127 = INT32_MAX;
	volatile uint64_t x128 = 368708810194823LLU;

	t26 = (x125<=(x126&(x127+x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = 13233441050006LL;
	int64_t x135 = 2620219408903102578LL;
	int32_t t27 = -6021580;

	t27 = (x133<=(x134&(x135+x136)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = -1;
	static volatile int8_t x138 = 55;
	static volatile int16_t x139 = INT16_MIN;
	volatile int64_t x140 = INT64_MAX;
	volatile int32_t t28 = -1837;

	t28 = (x137<=(x138&(x139+x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = INT16_MAX;
	int64_t x142 = -1LL;
	uint64_t x143 = 64528043840LLU;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t29 = 7956;

	t29 = (x141<=(x142&(x143+x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x146 = -6;
	static int64_t x147 = -908870334183871328LL;
	int32_t t30 = -11;

	t30 = (x145<=(x146&(x147+x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x151 = INT8_MIN;
	static int32_t x152 = INT32_MAX;
	int32_t t31 = 42;

	t31 = (x149<=(x150&(x151+x152)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x157 = 21U;
	uint8_t x159 = 54U;
	int32_t x160 = 184894932;
	volatile int32_t t32 = 0;

	t32 = (x157<=(x158&(x159+x160)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = UINT32_MAX;
	int8_t x164 = -1;

	t33 = (x161<=(x162&(x163+x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 3301367487LLU;
	uint16_t x166 = 642U;
	uint64_t x167 = 108996488LLU;
	volatile int16_t x168 = -1;
	static volatile int32_t t34 = 81;

	t34 = (x165<=(x166&(x167+x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 1544U;
	uint16_t x170 = 117U;
	int16_t x171 = 192;
	int64_t x172 = -1LL;

	t35 = (x169<=(x170&(x171+x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x173 = INT8_MIN;
	uint64_t x174 = 646161327870LLU;
	int16_t x175 = -1;
	volatile int32_t t36 = 12;

	t36 = (x173<=(x174&(x175+x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t37 = -7;

	t37 = (x177<=(x178&(x179+x180)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = 2991;
	volatile uint64_t x191 = 1388LLU;
	static volatile int32_t t38 = 2641;

	t38 = (x189<=(x190&(x191+x192)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x195 = 710U;
	static volatile uint8_t x196 = 4U;
	volatile int32_t t39 = 34152469;

	t39 = (x193<=(x194&(x195+x196)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x197 = 14;
	int32_t x198 = -1;
	int16_t x199 = 0;
	uint64_t x200 = UINT64_MAX;
	int32_t t40 = -6;

	t40 = (x197<=(x198&(x199+x200)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = 4808541633LL;
	volatile int16_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t41 = 59010150;

	t41 = (x201<=(x202&(x203+x204)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x210 = -385;
	uint8_t x212 = 0U;
	int32_t t42 = 674050328;

	t42 = (x209<=(x210&(x211+x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = UINT8_MAX;
	uint32_t x215 = 1U;
	static volatile int32_t t43 = -240495201;

	t43 = (x213<=(x214&(x215+x216)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x219 = INT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	int32_t t44 = 1208;

	t44 = (x217<=(x218&(x219+x220)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	static int16_t x222 = INT16_MIN;
	int32_t x223 = 533370;
	static int32_t t45 = -267434;

	t45 = (x221<=(x222&(x223+x224)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x225 = UINT16_MAX;
	uint64_t x226 = 3LLU;
	int8_t x227 = -1;
	int16_t x228 = -2569;
	volatile int32_t t46 = 22;

	t46 = (x225<=(x226&(x227+x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = -1;
	uint16_t x230 = 7U;
	static uint64_t x231 = 6231316LLU;
	uint32_t x232 = 474512632U;
	int32_t t47 = 159;

	t47 = (x229<=(x230&(x231+x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = 24257109;
	static uint64_t x234 = 568LLU;
	static volatile uint16_t x235 = 178U;
	uint16_t x236 = 12U;
	volatile int32_t t48 = 6532;

	t48 = (x233<=(x234&(x235+x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 0U;
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	static uint64_t x240 = 52017105206355504LLU;

	t49 = (x237<=(x238&(x239+x240)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x242 = INT8_MIN;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = 7882055844486076LLU;
	volatile int32_t t50 = -5141384;

	t50 = (x241<=(x242&(x243+x244)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MIN;
	volatile int8_t x250 = INT8_MIN;
	int64_t x251 = -1LL;
	volatile int32_t t51 = 9107831;

	t51 = (x249<=(x250&(x251+x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x254 = INT32_MIN;
	static volatile int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;

	t52 = (x253<=(x254&(x255+x256)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = -1;
	uint32_t x260 = 615U;
	int32_t t53 = -648570;

	t53 = (x257<=(x258&(x259+x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x262 = -1;

	t54 = (x261<=(x262&(x263+x264)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = -1;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;
	int32_t t55 = 1563;

	t55 = (x265<=(x266&(x267+x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x274 = 409LLU;
	uint16_t x275 = 25U;
	int64_t x276 = 994312673618925LL;
	int32_t t56 = -32294412;

	t56 = (x273<=(x274&(x275+x276)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x278 = UINT64_MAX;
	static volatile int32_t x279 = -1;
	uint8_t x280 = 4U;
	int32_t t57 = 355;

	t57 = (x277<=(x278&(x279+x280)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -1;
	static uint16_t x283 = 615U;
	uint32_t x284 = 440935573U;

	t58 = (x281<=(x282&(x283+x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MIN;
	static int16_t x286 = INT16_MIN;
	int8_t x287 = 0;
	int32_t x288 = INT32_MIN;
	int32_t t59 = -23982201;

	t59 = (x285<=(x286&(x287+x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x290 = UINT32_MAX;
	static int8_t x291 = INT8_MIN;
	uint32_t x292 = 58488703U;
	volatile int32_t t60 = 12981;

	t60 = (x289<=(x290&(x291+x292)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = -4;
	int32_t x295 = 37;
	int16_t x296 = -7;
	int32_t t61 = -828999790;

	t61 = (x293<=(x294&(x295+x296)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t62 = 1452;

	t62 = (x297<=(x298&(x299+x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int64_t x307 = INT64_MIN;
	static int8_t x308 = INT8_MAX;
	static int32_t t63 = 802702182;

	t63 = (x305<=(x306&(x307+x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = INT64_MAX;
	volatile int32_t x310 = INT32_MAX;
	static int16_t x311 = -1;
	uint32_t x312 = 1517542732U;
	volatile int32_t t64 = -968534756;

	t64 = (x309<=(x310&(x311+x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x313 = 0U;
	volatile uint16_t x314 = UINT16_MAX;
	volatile int8_t x315 = -1;

	t65 = (x313<=(x314&(x315+x316)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x317 = 6625U;
	int32_t x318 = INT32_MIN;
	static uint8_t x320 = 12U;
	int32_t t66 = -2720;

	t66 = (x317<=(x318&(x319+x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 3U;
	int64_t x322 = INT64_MAX;
	uint16_t x323 = 64U;
	int8_t x324 = INT8_MAX;

	t67 = (x321<=(x322&(x323+x324)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	volatile int32_t t68 = 2;

	t68 = (x325<=(x326&(x327+x328)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x329 = INT16_MAX;
	static volatile int64_t x331 = INT64_MIN;
	int32_t t69 = -3;

	t69 = (x329<=(x330&(x331+x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x333 = INT64_MAX;
	uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = UINT16_MAX;
	int32_t t70 = -7;

	t70 = (x333<=(x334&(x335+x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = 1;
	uint32_t x338 = UINT32_MAX;
	static volatile uint16_t x339 = UINT16_MAX;
	volatile int32_t t71 = 5141154;

	t71 = (x337<=(x338&(x339+x340)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x341 = 8;
	uint32_t x344 = 35294056U;
	volatile int32_t t72 = -628;

	t72 = (x341<=(x342&(x343+x344)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x346 = -5344033;
	uint8_t x347 = UINT8_MAX;
	uint32_t x348 = 86477717U;
	volatile int32_t t73 = 200816668;

	t73 = (x345<=(x346&(x347+x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 4727832LLU;
	uint16_t x350 = 1U;
	volatile int32_t t74 = -19;

	t74 = (x349<=(x350&(x351+x352)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x353 = 1;
	static uint32_t x354 = UINT32_MAX;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = -8;
	static volatile int32_t t75 = 2542305;

	t75 = (x353<=(x354&(x355+x356)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x358 = 2934351;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	int32_t t76 = 47;

	t76 = (x357<=(x358&(x359+x360)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x362 = -1;
	int8_t x364 = -1;
	volatile int32_t t77 = 10484;

	t77 = (x361<=(x362&(x363+x364)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x365 = INT32_MIN;
	volatile int16_t x367 = -1;
	volatile int16_t x368 = INT16_MAX;
	static volatile int32_t t78 = -884548;

	t78 = (x365<=(x366&(x367+x368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x369 = -19;
	uint8_t x370 = 30U;
	static volatile uint64_t x372 = 6938131LLU;
	int32_t t79 = -271546;

	t79 = (x369<=(x370&(x371+x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = 2U;
	static uint64_t x375 = 345185811298LLU;
	uint16_t x376 = 148U;
	static volatile int32_t t80 = -518798777;

	t80 = (x373<=(x374&(x375+x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x377 = 0U;
	static uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	volatile int32_t t81 = 1;

	t81 = (x377<=(x378&(x379+x380)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x382 = INT32_MIN;
	static int8_t x383 = INT8_MIN;
	int32_t t82 = 155861455;

	t82 = (x381<=(x382&(x383+x384)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x386 = 7LLU;
	uint8_t x387 = 52U;

	t83 = (x385<=(x386&(x387+x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x390 = 39;
	static volatile int16_t x391 = INT16_MAX;
	uint16_t x392 = 2816U;
	int32_t t84 = -23;

	t84 = (x389<=(x390&(x391+x392)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 783482115LLU;
	static volatile int32_t t85 = -97591850;

	t85 = (x393<=(x394&(x395+x396)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x399 = 769;
	int8_t x400 = INT8_MIN;

	t86 = (x397<=(x398&(x399+x400)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -3;
	uint8_t x402 = 2U;
	int8_t x403 = -1;
	int8_t x404 = 0;
	int32_t t87 = 76;

	t87 = (x401<=(x402&(x403+x404)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint64_t x406 = 72557433612LLU;
	uint8_t x407 = 105U;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t88 = 10915179;

	t88 = (x405<=(x406&(x407+x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x414 = UINT32_MAX;
	int32_t x416 = -1;
	static volatile int32_t t89 = -1534;

	t89 = (x413<=(x414&(x415+x416)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x421 = 11;
	static volatile int32_t x422 = -3038;
	static int16_t x423 = INT16_MAX;
	static int16_t x424 = INT16_MIN;
	int32_t t90 = 1;

	t90 = (x421<=(x422&(x423+x424)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x433 = 889243252822779LLU;
	uint64_t x434 = UINT64_MAX;
	uint16_t x435 = UINT16_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t91 = 458212;

	t91 = (x433<=(x434&(x435+x436)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -1LL;
	int32_t x438 = -1;
	volatile int64_t x439 = -1LL;
	volatile int32_t t92 = -2124984;

	t92 = (x437<=(x438&(x439+x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x441 = INT64_MAX;
	uint16_t x444 = 7211U;
	volatile int32_t t93 = -206233010;

	t93 = (x441<=(x442&(x443+x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = INT8_MIN;
	volatile uint32_t x447 = 113U;
	int16_t x448 = -1;

	t94 = (x445<=(x446&(x447+x448)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MAX;
	uint16_t x452 = 0U;
	static int32_t t95 = 23756850;

	t95 = (x449<=(x450&(x451+x452)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x454 = 0U;
	volatile int64_t x455 = 2041LL;
	int64_t x456 = 51518197232LL;

	t96 = (x453<=(x454&(x455+x456)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x457 = 1U;
	volatile uint32_t x458 = 930045U;
	volatile int16_t x459 = -1;
	uint64_t x460 = 49596LLU;
	int32_t t97 = 1961;

	t97 = (x457<=(x458&(x459+x460)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = -628255;
	static uint32_t x466 = 1964047U;
	int8_t x467 = -1;
	uint16_t x468 = 402U;
	volatile int32_t t98 = -26;

	t98 = (x465<=(x466&(x467+x468)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x469 = -1LL;
	volatile int32_t x471 = -1;
	int16_t x472 = INT16_MAX;
	volatile int32_t t99 = 1061;

	t99 = (x469<=(x470&(x471+x472)));

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

