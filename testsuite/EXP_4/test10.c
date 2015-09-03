#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
static volatile int8_t x6 = -6;
uint16_t x15 = 12105U;
volatile int32_t t3 = -63;
volatile int32_t t5 = -89977;
int32_t x30 = -46122886;
volatile int32_t t6 = -907;
int32_t t7 = -1;
int32_t x42 = -3548177;
uint16_t x49 = 1U;
volatile int16_t x56 = 13;
int32_t t12 = -7;
int16_t x64 = INT16_MAX;
int8_t x79 = INT8_MAX;
uint16_t x82 = 57U;
int32_t x88 = -17214;
int8_t x93 = INT8_MIN;
int32_t x95 = -1;
volatile int64_t x97 = -1LL;
static int8_t x112 = INT8_MIN;
static uint8_t x119 = 4U;
uint64_t x120 = UINT64_MAX;
int8_t x123 = 6;
volatile int32_t t25 = 939;
volatile int8_t x131 = INT8_MAX;
static int8_t x139 = -1;
volatile int32_t t28 = 14913;
int32_t x146 = -1;
int32_t x148 = -1;
uint16_t x151 = UINT16_MAX;
volatile int64_t x153 = INT64_MIN;
int32_t t32 = -1758200;
volatile int32_t x157 = -280;
static int32_t x164 = INT32_MAX;
int32_t t34 = -510657962;
int8_t x168 = INT8_MIN;
uint16_t x169 = 1U;
int32_t x171 = -974231056;
uint32_t x173 = 1300U;
int16_t x198 = -1;
int16_t x204 = INT16_MIN;
int32_t x206 = INT32_MIN;
uint64_t x208 = 3704621289LLU;
static int32_t t45 = 3969;
int16_t x220 = INT16_MIN;
volatile int16_t x234 = 9;
uint8_t x242 = 13U;
static int32_t x244 = 117;
int16_t x269 = INT16_MIN;
int64_t x273 = 16396859502784LL;
int64_t x277 = -1LL;
int8_t x282 = INT8_MAX;
int32_t t59 = -7;
static int32_t t61 = -988;
int64_t x293 = INT64_MIN;
uint8_t x294 = 25U;
int32_t t62 = -3;
static volatile uint64_t x302 = UINT64_MAX;
int32_t x303 = -5792;
volatile int8_t x310 = INT8_MIN;
volatile int32_t t65 = 1150531;
int16_t x313 = INT16_MAX;
int32_t x315 = INT32_MAX;
volatile int32_t t68 = 413607333;
static int16_t x331 = INT16_MIN;
int32_t x333 = INT32_MIN;
int64_t x334 = -1LL;
int32_t x336 = 328216;
volatile uint64_t x344 = UINT64_MAX;
static volatile int32_t t73 = 710865;
int32_t x359 = INT32_MIN;
static int16_t x361 = 5;
int32_t x378 = INT32_MIN;
int64_t x390 = 509107801274LL;
int32_t t81 = 25155728;
volatile int8_t x404 = 12;
int32_t x406 = INT32_MIN;
int8_t x415 = INT8_MAX;
int8_t x422 = INT8_MIN;
volatile uint16_t x425 = UINT16_MAX;
static int64_t x428 = -1LL;
int8_t x449 = INT8_MIN;
uint8_t x451 = 60U;
int8_t x453 = INT8_MIN;
uint8_t x456 = 22U;
int32_t t92 = 788500;
volatile int32_t x457 = INT32_MIN;
volatile int32_t x473 = -36637;
uint32_t x475 = 297287695U;
volatile int32_t x481 = INT32_MIN;
volatile int32_t t97 = -499380516;
int64_t x487 = INT64_MAX;
static uint8_t x490 = UINT8_MAX;


void f0(void) {
	uint8_t x1 = 109U;
	int64_t x2 = -13294159608LL;
	static int64_t x4 = -263563LL;
	volatile int32_t t0 = -98486;

	t0 = (x1<=(x2+(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x7 = 3;
	uint32_t x8 = 46179043U;
	int32_t t1 = 20;

	t1 = (x5<=(x6+(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 291U;
	static int8_t x10 = INT8_MIN;
	volatile int16_t x11 = 0;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 104628;

	t2 = (x9<=(x10+(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 494293721LLU;
	int64_t x14 = INT64_MIN;
	int32_t x16 = -1;

	t3 = (x13<=(x14+(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 12312U;
	int64_t x18 = INT64_MIN;
	int64_t x19 = 9241508708LL;
	int64_t x20 = 1122645812623560LL;
	static int32_t t4 = -23345;

	t4 = (x17<=(x18+(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 4584429222LL;
	int8_t x22 = -12;
	volatile int8_t x23 = 1;
	volatile uint16_t x24 = 22U;

	t5 = (x21<=(x22+(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -493;
	volatile int64_t x31 = -3864LL;
	int16_t x32 = INT16_MIN;

	t6 = (x29<=(x30+(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = 7U;
	uint16_t x38 = 1308U;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;

	t7 = (x37<=(x38+(x39+x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int32_t x43 = 4109;
	static volatile int8_t x44 = INT8_MIN;
	int32_t t8 = 1;

	t8 = (x41<=(x42+(x43+x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1782511LL;
	int8_t x46 = INT8_MIN;
	volatile uint16_t x47 = 59U;
	uint8_t x48 = UINT8_MAX;
	int32_t t9 = 175;

	t9 = (x45<=(x46+(x47+x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x50 = -1LL;
	int64_t x51 = INT64_MAX;
	int32_t x52 = -1;
	int32_t t10 = 151370180;

	t10 = (x49<=(x50+(x51+x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 1408U;
	volatile int16_t x55 = -220;
	volatile int32_t t11 = 48;

	t11 = (x53<=(x54+(x55+x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x57 = 58U;
	int64_t x58 = -253LL;
	int32_t x59 = INT32_MIN;
	static uint64_t x60 = 656772408485147533LLU;

	t12 = (x57<=(x58+(x59+x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = 254494293U;
	uint64_t x62 = 823923668035990634LLU;
	int8_t x63 = INT8_MAX;
	int32_t t13 = -19;

	t13 = (x61<=(x62+(x63+x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = UINT16_MAX;
	static uint32_t x75 = 54438U;
	int16_t x76 = -1;
	int32_t t14 = 90049;

	t14 = (x73<=(x74+(x75+x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -1;
	static int32_t x78 = -1;
	int64_t x80 = 5215LL;
	volatile int32_t t15 = 113932;

	t15 = (x77<=(x78+(x79+x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int32_t x83 = 4438704;
	volatile uint32_t x84 = 333U;
	int32_t t16 = 31;

	t16 = (x81<=(x82+(x83+x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = -1971;
	static int32_t x86 = INT32_MAX;
	int64_t x87 = -507686LL;
	volatile int32_t t17 = 755159;

	t17 = (x85<=(x86+(x87+x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x94 = 1U;
	int64_t x96 = INT64_MAX;
	static volatile int32_t t18 = -8003228;

	t18 = (x93<=(x94+(x95+x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 0U;
	int32_t x100 = INT32_MAX;
	volatile int32_t t19 = -30624236;

	t19 = (x97<=(x98+(x99+x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = 12063146620176543LL;
	int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	int32_t t20 = -415062923;

	t20 = (x105<=(x106+(x107+x108)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	int32_t t21 = -83551557;

	t21 = (x109<=(x110+(x111+x112)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x113 = -22;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	int32_t t22 = 16;

	t22 = (x113<=(x114+(x115+x116)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x117 = 224272LL;
	int32_t x118 = INT32_MIN;
	volatile int32_t t23 = 21979020;

	t23 = (x117<=(x118+(x119+x120)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 449U;
	int32_t x124 = 30051465;
	int32_t t24 = -16952;

	t24 = (x121<=(x122+(x123+x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x125 = 13U;
	static volatile int16_t x126 = INT16_MAX;
	static int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;

	t25 = (x125<=(x126+(x127+x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x129 = 1760959477U;
	static volatile int64_t x130 = 29845653049360071LL;
	int8_t x132 = INT8_MAX;
	int32_t t26 = 106508174;

	t26 = (x129<=(x130+(x131+x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	volatile int8_t x135 = INT8_MAX;
	uint16_t x136 = 1U;
	int32_t t27 = 7622;

	t27 = (x133<=(x134+(x135+x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 7U;
	uint64_t x138 = 99606320932336LLU;
	int16_t x140 = -1;

	t28 = (x137<=(x138+(x139+x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x141 = 14U;
	uint16_t x142 = 679U;
	static int8_t x143 = INT8_MIN;
	static volatile int8_t x144 = -51;
	int32_t t29 = -26;

	t29 = (x141<=(x142+(x143+x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = INT64_MAX;
	int16_t x147 = -1;
	int32_t t30 = 1;

	t30 = (x145<=(x146+(x147+x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	volatile uint8_t x150 = 0U;
	static uint16_t x152 = 20U;
	int32_t t31 = 29394;

	t31 = (x149<=(x150+(x151+x152)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = -241;
	int8_t x155 = -7;
	static int8_t x156 = 3;

	t32 = (x153<=(x154+(x155+x156)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x158 = UINT8_MAX;
	static uint8_t x159 = 29U;
	int64_t x160 = -1LL;
	volatile int32_t t33 = 486;

	t33 = (x157<=(x158+(x159+x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x161 = INT64_MAX;
	static int64_t x162 = -1LL;
	int16_t x163 = -1;

	t34 = (x161<=(x162+(x163+x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 2U;
	uint8_t x166 = 14U;
	int32_t x167 = -37;
	int32_t t35 = -10995;

	t35 = (x165<=(x166+(x167+x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x170 = UINT32_MAX;
	uint8_t x172 = 0U;
	int32_t t36 = -66;

	t36 = (x169<=(x170+(x171+x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x174 = INT8_MIN;
	static uint64_t x175 = 767679LLU;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t37 = -1;

	t37 = (x173<=(x174+(x175+x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	int16_t x179 = -1;
	int8_t x180 = INT8_MIN;
	volatile int32_t t38 = 245711364;

	t38 = (x177<=(x178+(x179+x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x182 = 31773U;
	uint64_t x183 = UINT64_MAX;
	volatile uint64_t x184 = 7LLU;
	int32_t t39 = -378769146;

	t39 = (x181<=(x182+(x183+x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = 2420755;
	int8_t x195 = -1;
	static volatile int16_t x196 = INT16_MAX;
	volatile int32_t t40 = -193220268;

	t40 = (x193<=(x194+(x195+x196)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = 787;
	int32_t x199 = 322;
	int16_t x200 = INT16_MIN;
	int32_t t41 = -45207551;

	t41 = (x197<=(x198+(x199+x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 138602677668759LLU;
	int32_t x202 = INT32_MAX;
	uint32_t x203 = 261834805U;
	int32_t t42 = 51186366;

	t42 = (x201<=(x202+(x203+x204)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MIN;
	static volatile int64_t x207 = INT64_MIN;
	int32_t t43 = 794;

	t43 = (x205<=(x206+(x207+x208)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MIN;
	static int64_t x210 = INT64_MAX;
	static int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t44 = -437730;

	t44 = (x209<=(x210+(x211+x212)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x213 = 47U;
	uint32_t x214 = 5345127U;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = 25U;

	t45 = (x213<=(x214+(x215+x216)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x217 = INT32_MIN;
	int64_t x218 = 47LL;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t46 = -7;

	t46 = (x217<=(x218+(x219+x220)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = 12;
	volatile uint32_t x223 = UINT32_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t47 = -17377714;

	t47 = (x221<=(x222+(x223+x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MAX;
	int32_t x230 = -1;
	static int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t48 = 215;

	t48 = (x229<=(x230+(x231+x232)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x233 = -1;
	uint32_t x235 = 1U;
	volatile int32_t x236 = -1;
	volatile int32_t t49 = 2770499;

	t49 = (x233<=(x234+(x235+x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = -44342LL;
	uint32_t x238 = 6748U;
	uint32_t x239 = 65895253U;
	volatile uint32_t x240 = 4U;
	int32_t t50 = 1979599;

	t50 = (x237<=(x238+(x239+x240)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x241 = 9;
	static volatile int64_t x243 = -1LL;
	volatile int32_t t51 = -5503;

	t51 = (x241<=(x242+(x243+x244)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 224824810949161LLU;
	int8_t x250 = INT8_MAX;
	int64_t x251 = 4495317090541302581LL;
	static volatile int8_t x252 = INT8_MIN;
	int32_t t52 = 1570742;

	t52 = (x249<=(x250+(x251+x252)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x257 = UINT8_MAX;
	uint64_t x258 = 69426844667051LLU;
	volatile uint8_t x259 = 7U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t53 = -869320;

	t53 = (x257<=(x258+(x259+x260)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -29679573863LL;
	uint64_t x262 = UINT64_MAX;
	volatile uint8_t x263 = 1U;
	uint64_t x264 = 316594LLU;
	static int32_t t54 = 35781;

	t54 = (x261<=(x262+(x263+x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = 2U;
	int32_t x266 = 36579;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	int32_t t55 = 796;

	t55 = (x265<=(x266+(x267+x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x270 = 33246;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t56 = 271242374;

	t56 = (x269<=(x270+(x271+x272)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x274 = 40U;
	volatile uint8_t x275 = 5U;
	static volatile uint32_t x276 = UINT32_MAX;
	static volatile int32_t t57 = 83;

	t57 = (x273<=(x274+(x275+x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x278 = UINT16_MAX;
	int64_t x279 = 212449LL;
	int32_t x280 = 1434726;
	volatile int32_t t58 = 1;

	t58 = (x277<=(x278+(x279+x280)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x281 = 5575U;
	volatile int16_t x283 = 755;
	uint32_t x284 = UINT32_MAX;

	t59 = (x281<=(x282+(x283+x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -687;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t60 = 4;

	t60 = (x285<=(x286+(x287+x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = -28;
	static volatile int16_t x290 = INT16_MIN;
	int64_t x291 = -1LL;
	int8_t x292 = -1;

	t61 = (x289<=(x290+(x291+x292)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x295 = INT32_MAX;
	static int32_t x296 = -6466419;

	t62 = (x293<=(x294+(x295+x296)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	volatile uint8_t x298 = 10U;
	int32_t x299 = INT32_MAX;
	uint64_t x300 = 2262330466425373LLU;
	static volatile int32_t t63 = 4886829;

	t63 = (x297<=(x298+(x299+x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = -1;
	static int8_t x304 = INT8_MAX;
	int32_t t64 = -7;

	t64 = (x301<=(x302+(x303+x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x309 = 8U;
	uint64_t x311 = 854444LLU;
	static int16_t x312 = INT16_MAX;

	t65 = (x309<=(x310+(x311+x312)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x314 = -1;
	volatile uint64_t x316 = 35879165099327388LLU;
	volatile int32_t t66 = -1825881;

	t66 = (x313<=(x314+(x315+x316)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -1;
	uint16_t x318 = 411U;
	uint8_t x319 = 0U;
	int64_t x320 = 11081845503329038LL;
	int32_t t67 = -9;

	t67 = (x317<=(x318+(x319+x320)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x325 = -119612386;
	int16_t x326 = 5;
	volatile int32_t x327 = -59714709;
	uint64_t x328 = UINT64_MAX;

	t68 = (x325<=(x326+(x327+x328)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x329 = INT32_MIN;
	uint64_t x330 = 370779LLU;
	static int64_t x332 = -55282970080LL;
	static int32_t t69 = 129001260;

	t69 = (x329<=(x330+(x331+x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x335 = 1635161738LLU;
	int32_t t70 = -63;

	t70 = (x333<=(x334+(x335+x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = 15720004079335LL;
	static int16_t x339 = 567;
	static int16_t x340 = INT16_MIN;
	static volatile int32_t t71 = -35037;

	t71 = (x337<=(x338+(x339+x340)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x341 = 3854226184LLU;
	volatile int64_t x342 = -1LL;
	int32_t x343 = -2045965;
	int32_t t72 = 0;

	t72 = (x341<=(x342+(x343+x344)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x345 = UINT64_MAX;
	static int16_t x346 = INT16_MIN;
	volatile int32_t x347 = INT32_MIN;
	volatile uint32_t x348 = 16275U;

	t73 = (x345<=(x346+(x347+x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x349 = INT16_MAX;
	int64_t x350 = 192224350087376538LL;
	static uint8_t x351 = 107U;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t74 = 33263331;

	t74 = (x349<=(x350+(x351+x352)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MAX;
	uint16_t x358 = 11983U;
	int16_t x360 = 24;
	volatile int32_t t75 = 10063;

	t75 = (x357<=(x358+(x359+x360)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x362 = INT64_MIN;
	int64_t x363 = -30304LL;
	uint64_t x364 = UINT64_MAX;
	int32_t t76 = 31497;

	t76 = (x361<=(x362+(x363+x364)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = -1;
	uint8_t x366 = 2U;
	int8_t x367 = 1;
	uint64_t x368 = 58206163899253941LLU;
	static volatile int32_t t77 = -5;

	t77 = (x365<=(x366+(x367+x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x377 = INT64_MIN;
	uint64_t x379 = 6138173974466798LLU;
	int32_t x380 = INT32_MAX;
	int32_t t78 = -22631195;

	t78 = (x377<=(x378+(x379+x380)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x381 = 36U;
	int32_t x382 = 6;
	int8_t x383 = -1;
	int64_t x384 = -228LL;
	volatile int32_t t79 = -10;

	t79 = (x381<=(x382+(x383+x384)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x389 = 1;
	static uint16_t x391 = 1U;
	volatile uint32_t x392 = 2750048U;
	static int32_t t80 = -11410772;

	t80 = (x389<=(x390+(x391+x392)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = INT8_MIN;
	uint8_t x394 = 1U;
	volatile uint64_t x395 = 28LLU;
	static int64_t x396 = INT64_MAX;

	t81 = (x393<=(x394+(x395+x396)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x401 = 18691LLU;
	uint8_t x402 = 92U;
	int16_t x403 = INT16_MIN;
	int32_t t82 = -221739;

	t82 = (x401<=(x402+(x403+x404)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = -28108;
	uint32_t x407 = UINT32_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t83 = -88738;

	t83 = (x405<=(x406+(x407+x408)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = INT32_MIN;
	int8_t x416 = 26;
	volatile int32_t t84 = -454660;

	t84 = (x413<=(x414+(x415+x416)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x417 = UINT64_MAX;
	static volatile int8_t x418 = INT8_MAX;
	volatile int32_t x419 = -213;
	uint16_t x420 = 1480U;
	static int32_t t85 = 72514513;

	t85 = (x417<=(x418+(x419+x420)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x421 = 67353986598971267LLU;
	int8_t x423 = INT8_MIN;
	volatile uint8_t x424 = UINT8_MAX;
	static volatile int32_t t86 = -3630;

	t86 = (x421<=(x422+(x423+x424)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x426 = 458;
	uint64_t x427 = UINT64_MAX;
	int32_t t87 = -149016010;

	t87 = (x425<=(x426+(x427+x428)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x433 = 7;
	static int32_t x434 = -1;
	volatile int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MIN;
	volatile int32_t t88 = 411;

	t88 = (x433<=(x434+(x435+x436)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x441 = -693463LL;
	volatile int64_t x442 = 2713748319907LL;
	static volatile int32_t x443 = -1;
	volatile int16_t x444 = 1;
	volatile int32_t t89 = -649135466;

	t89 = (x441<=(x442+(x443+x444)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = INT32_MAX;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 0U;
	int16_t x448 = -1;
	int32_t t90 = -18904802;

	t90 = (x445<=(x446+(x447+x448)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x450 = 216840LLU;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t91 = -5;

	t91 = (x449<=(x450+(x451+x452)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x454 = 42;
	volatile uint16_t x455 = 5U;

	t92 = (x453<=(x454+(x455+x456)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x458 = 0;
	int8_t x459 = INT8_MIN;
	static volatile uint16_t x460 = 34U;
	volatile int32_t t93 = -1;

	t93 = (x457<=(x458+(x459+x460)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x461 = -1370862899202060687LL;
	static uint32_t x462 = UINT32_MAX;
	volatile int16_t x463 = INT16_MIN;
	volatile uint32_t x464 = UINT32_MAX;
	static int32_t t94 = 78418345;

	t94 = (x461<=(x462+(x463+x464)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x469 = INT32_MIN;
	uint64_t x470 = 27787LLU;
	int16_t x471 = 13;
	int64_t x472 = INT64_MIN;
	volatile int32_t t95 = -91056284;

	t95 = (x469<=(x470+(x471+x472)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x474 = UINT8_MAX;
	uint8_t x476 = 39U;
	volatile int32_t t96 = 735;

	t96 = (x473<=(x474+(x475+x476)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x482 = 483299211;
	int8_t x483 = INT8_MAX;
	static int64_t x484 = -1LL;

	t97 = (x481<=(x482+(x483+x484)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = -1;
	int32_t x486 = -1;
	static int8_t x488 = INT8_MIN;
	static int32_t t98 = -2149;

	t98 = (x485<=(x486+(x487+x488)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x489 = -243192273;
	int32_t x491 = -222859;
	int8_t x492 = INT8_MAX;
	int32_t t99 = 23938;

	t99 = (x489<=(x490+(x491+x492)));

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

