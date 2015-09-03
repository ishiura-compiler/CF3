#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -1;
uint16_t x5 = UINT16_MAX;
int32_t x8 = -1;
int16_t x9 = INT16_MIN;
static int64_t x13 = 108918652998LL;
int64_t t3 = -429566255765LL;
int16_t x20 = INT16_MIN;
volatile uint8_t x27 = UINT8_MAX;
volatile int32_t x28 = -1;
volatile int64_t x31 = INT64_MIN;
static int32_t x32 = 0;
static uint64_t x36 = 21128921484311877LLU;
static volatile int16_t x38 = INT16_MAX;
static int64_t x39 = 1879627896698699LL;
uint32_t t9 = UINT32_MAX;
uint16_t x41 = 12U;
int8_t x42 = INT8_MIN;
static int8_t x49 = INT8_MIN;
static uint8_t x51 = UINT8_MAX;
int8_t x52 = INT8_MIN;
int32_t t11 = -9049;
int64_t x66 = -188608825598LL;
volatile int32_t t16 = 431;
int32_t t18 = INT32_MIN;
int64_t x94 = 302696801717LL;
int32_t x107 = INT32_MAX;
static int16_t x108 = INT16_MIN;
int16_t x121 = INT16_MIN;
volatile int16_t x130 = INT16_MIN;
int8_t x131 = INT8_MIN;
int16_t x136 = -1;
uint64_t x137 = UINT64_MAX;
int16_t x146 = INT16_MIN;
int8_t x151 = INT8_MAX;
volatile uint8_t x153 = 31U;
static int32_t x154 = 10;
static int64_t x161 = -1LL;
volatile int32_t t37 = -580287171;
volatile uint8_t x192 = 55U;
int32_t x199 = INT32_MIN;
int8_t x208 = INT8_MAX;
uint64_t x221 = 697645257LLU;
int64_t x224 = INT64_MIN;
uint64_t x225 = 32461LLU;
volatile uint64_t t48 = 156217LLU;
int64_t x237 = -471530835220LL;
static int16_t x238 = -7;
int16_t x242 = INT16_MIN;
static uint32_t x249 = UINT32_MAX;
volatile uint16_t x256 = UINT16_MAX;
static int32_t x258 = -1;
static volatile int32_t t56 = 193;
int32_t t58 = 1043784;
uint64_t x269 = 35109941LLU;
static int8_t x270 = -21;
volatile int8_t x274 = INT8_MIN;
int32_t x278 = -1;
static uint32_t x290 = 62820647U;
static int64_t x296 = 33341835382LL;
static int8_t x300 = INT8_MAX;
int8_t x307 = -1;
int32_t t67 = -222;
static uint8_t x315 = UINT8_MAX;
uint16_t x321 = 430U;
int32_t x324 = -282;
int16_t x326 = INT16_MIN;
static uint64_t x328 = 3647085410156988LLU;
volatile int32_t t73 = 596073;
int16_t x335 = INT16_MIN;
volatile uint64_t t74 = UINT64_MAX;
int64_t x344 = INT64_MIN;
static int32_t t76 = -235791492;
static uint64_t x345 = 421693301764343559LLU;
uint32_t x350 = 10468025U;
int64_t x361 = -1LL;
int8_t x362 = INT8_MIN;
uint8_t x363 = 4U;
static volatile uint8_t x364 = UINT8_MAX;
static int64_t x369 = 3414451776580739LL;
int16_t x383 = INT16_MIN;
uint64_t x398 = UINT64_MAX;
static int8_t x399 = 1;
static int16_t x407 = INT16_MAX;
int8_t x412 = 48;
int64_t t94 = -68832214143363871LL;
volatile uint64_t t95 = 31828889490789LLU;
int32_t t96 = -114100;
volatile int64_t x445 = 31LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = -53928;
	int32_t t0 = 448131;

	t0 = (x1|(x2<=(x3+x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	int32_t t1 = 298;

	t1 = (x5|(x6<=(x7+x8)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -48880702545180LL;
	int16_t x11 = 335;
	int32_t x12 = -1;
	int32_t t2 = -124898;

	t2 = (x9|(x10<=(x11+x12)));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int8_t x15 = -1;
	uint64_t x16 = 333881927LLU;

	t3 = (x13|(x14<=(x15+x16)));

	if (t3 != 108918652998LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 180211;
	volatile int64_t x18 = -5LL;
	int16_t x19 = INT16_MAX;
	int32_t t4 = 85098196;

	t4 = (x17|(x18<=(x19+x20)));

	if (t4 != 180211) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	int32_t x22 = -1;
	volatile int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	volatile int32_t t5 = -954789295;

	t5 = (x21|(x22<=(x23+x24)));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MAX;
	static int32_t t6 = -1;

	t6 = (x25|(x26<=(x27+x28)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MAX;
	int32_t t7 = 27;

	t7 = (x29|(x30<=(x31+x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int32_t t8 = 206786;

	t8 = (x33|(x34<=(x35+x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	volatile uint64_t x40 = 1471324494167LLU;

	t9 = (x37|(x38<=(x39+x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x43 = -1;
	int16_t x44 = -28;
	int32_t t10 = 11027758;

	t10 = (x41|(x42<=(x43+x44)));

	if (t10 != 13) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x50 = 17673U;

	t11 = (x49|(x50<=(x51+x52)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -21;
	int64_t x54 = INT64_MAX;
	static volatile int32_t x55 = INT32_MIN;
	uint16_t x56 = 32259U;
	static int32_t t12 = 7401066;

	t12 = (x53|(x54<=(x55+x56)));

	if (t12 != -21) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int32_t x62 = 997305627;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t x64 = -1;
	volatile int32_t t13 = -30208;

	t13 = (x61|(x62<=(x63+x64)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	int16_t x67 = INT16_MAX;
	int16_t x68 = 2;
	volatile int64_t t14 = -11994753LL;

	t14 = (x65|(x66<=(x67+x68)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -1;
	static uint8_t x70 = 2U;
	int16_t x71 = INT16_MAX;
	int32_t x72 = -1;
	volatile int32_t t15 = 14;

	t15 = (x69|(x70<=(x71+x72)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int32_t x74 = -1;
	uint16_t x75 = 9U;
	uint8_t x76 = 0U;

	t16 = (x73|(x74<=(x75+x76)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int64_t x78 = INT64_MAX;
	uint64_t x79 = 751233241921610370LLU;
	volatile uint32_t x80 = 8564U;
	static int32_t t17 = -39811894;

	t17 = (x77|(x78<=(x79+x80)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	static int8_t x83 = 23;
	uint32_t x84 = 249090U;

	t18 = (x81|(x82<=(x83+x84)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MAX;
	volatile uint8_t x86 = 8U;
	static int64_t x87 = -1LL;
	volatile int8_t x88 = -1;
	int32_t t19 = INT32_MAX;

	t19 = (x85|(x86<=(x87+x88)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 199042219440LL;
	int8_t x90 = 24;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	volatile int64_t t20 = 636LL;

	t20 = (x89|(x90<=(x91+x92)));

	if (t20 != 199042219440LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 154371U;
	uint16_t x95 = 1143U;
	static int32_t x96 = -7061065;
	uint32_t t21 = 196289105U;

	t21 = (x93|(x94<=(x95+x96)));

	if (t21 != 154371U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = 712441994LL;
	volatile int32_t x102 = INT32_MAX;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = 14;
	volatile int64_t t22 = 2891155775LL;

	t22 = (x101|(x102<=(x103+x104)));

	if (t22 != 712441994LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MAX;
	int32_t t23 = -8531407;

	t23 = (x105|(x106<=(x107+x108)));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = -1LL;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 56U;
	int32_t t24 = -37874391;

	t24 = (x109|(x110<=(x111+x112)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x122 = -1LL;
	int16_t x123 = INT16_MAX;
	int32_t x124 = 360899883;
	int32_t t25 = 123677;

	t25 = (x121|(x122<=(x123+x124)));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	int32_t x128 = -1;
	static volatile int64_t t26 = INT64_MAX;

	t26 = (x125|(x126<=(x127+x128)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	volatile int16_t x132 = 5278;
	volatile int32_t t27 = -7916194;

	t27 = (x129|(x130<=(x131+x132)));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = 1310076U;
	static int8_t x134 = INT8_MIN;
	volatile uint16_t x135 = 8653U;
	uint32_t t28 = 927U;

	t28 = (x133|(x134<=(x135+x136)));

	if (t28 != 1310077U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x137|(x138<=(x139+x140)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 8203108U;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MAX;
	int16_t x144 = -57;
	volatile uint32_t t30 = 63689U;

	t30 = (x141|(x142<=(x143+x144)));

	if (t30 != 8203109U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 1395148551831283LLU;
	volatile int16_t x147 = INT16_MIN;
	uint16_t x148 = 0U;
	volatile uint64_t t31 = 420LLU;

	t31 = (x145|(x146<=(x147+x148)));

	if (t31 != 1395148551831283LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MAX;
	static volatile int8_t x150 = -1;
	int8_t x152 = 41;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x149|(x150<=(x151+x152)));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x155 = 2809LLU;
	uint32_t x156 = 2968320U;
	static int32_t t33 = -243;

	t33 = (x153|(x154<=(x155+x156)));

	if (t33 != 31) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 5905162036802LLU;
	static uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 6U;
	uint32_t x160 = UINT32_MAX;
	static uint64_t t34 = 75LLU;

	t34 = (x157|(x158<=(x159+x160)));

	if (t34 != 5905162036802LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x162 = INT64_MAX;
	static volatile int64_t x163 = -474917758740LL;
	int16_t x164 = -1;
	volatile int64_t t35 = -3885474124LL;

	t35 = (x161|(x162<=(x163+x164)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x169 = -1LL;
	static int32_t x170 = 0;
	static int8_t x171 = -1;
	int8_t x172 = INT8_MIN;
	int64_t t36 = -91LL;

	t36 = (x169|(x170<=(x171+x172)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MAX;
	volatile int8_t x174 = INT8_MIN;
	static volatile int32_t x175 = INT32_MIN;
	static uint32_t x176 = UINT32_MAX;

	t37 = (x173|(x174<=(x175+x176)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MAX;
	uint16_t x186 = 1U;
	uint32_t x187 = 3431198U;
	volatile int8_t x188 = -1;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x185|(x186<=(x187+x188)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = UINT32_MAX;
	int32_t x191 = -1;
	static volatile int64_t t39 = INT64_MIN;

	t39 = (x189|(x190<=(x191+x192)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x193 = UINT64_MAX;
	int8_t x194 = -1;
	int8_t x195 = -1;
	int16_t x196 = 6952;
	uint64_t t40 = UINT64_MAX;

	t40 = (x193|(x194<=(x195+x196)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = INT8_MIN;
	uint16_t x198 = 170U;
	uint64_t x200 = UINT64_MAX;
	int32_t t41 = 1618;

	t41 = (x197|(x198<=(x199+x200)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x201 = -8350248;
	uint16_t x202 = 1195U;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t42 = -140297786;

	t42 = (x201|(x202<=(x203+x204)));

	if (t42 != -8350248) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	uint8_t x206 = 9U;
	int16_t x207 = INT16_MIN;
	static int32_t t43 = -171966;

	t43 = (x205|(x206<=(x207+x208)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = 224;
	static volatile int16_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t44 = -60;

	t44 = (x209|(x210<=(x211+x212)));

	if (t44 != 224) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x213 = -1LL;
	int16_t x214 = 2;
	static int32_t x215 = INT32_MIN;
	volatile int64_t x216 = 250LL;
	int64_t t45 = -2795LL;

	t45 = (x213|(x214<=(x215+x216)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = 4340;
	int32_t x218 = -458936243;
	volatile int8_t x219 = INT8_MIN;
	static uint16_t x220 = 14175U;
	volatile int32_t t46 = 95244;

	t46 = (x217|(x218<=(x219+x220)));

	if (t46 != 4341) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	volatile uint64_t t47 = 121188LLU;

	t47 = (x221|(x222<=(x223+x224)));

	if (t47 != 697645257LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x226 = 281101893557459LLU;
	uint16_t x227 = 48U;
	int64_t x228 = INT64_MIN;

	t48 = (x225|(x226<=(x227+x228)));

	if (t48 != 32461LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x229 = INT64_MAX;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 9987LLU;
	uint8_t x232 = 5U;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x229|(x230<=(x231+x232)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 4U;
	int8_t x234 = 40;
	uint8_t x235 = UINT8_MAX;
	volatile int64_t x236 = -7334561857171779LL;
	volatile uint32_t t50 = 111974511U;

	t50 = (x233|(x234<=(x235+x236)));

	if (t50 != 4U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x239 = -1;
	uint32_t x240 = 990990U;
	static volatile int64_t t51 = -50001115146577236LL;

	t51 = (x237|(x238<=(x239+x240)));

	if (t51 != -471530835220LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = 649;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = -1LL;
	int32_t t52 = -1;

	t52 = (x241|(x242<=(x243+x244)));

	if (t52 != 649) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = 0;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -2629;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x245|(x246<=(x247+x248)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x250 = -1LL;
	uint64_t x251 = 461283067LLU;
	static int16_t x252 = INT16_MAX;
	uint32_t t54 = UINT32_MAX;

	t54 = (x249|(x250<=(x251+x252)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -7824LL;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = -1;
	static volatile int64_t t55 = -1976343554942LL;

	t55 = (x253|(x254<=(x255+x256)));

	if (t55 != -7823LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x257 = 1U;
	volatile int32_t x259 = -1;
	static int16_t x260 = -1;

	t56 = (x257|(x258<=(x259+x260)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x262 = UINT32_MAX;
	static int64_t x263 = INT64_MIN;
	static uint8_t x264 = UINT8_MAX;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x261|(x262<=(x263+x264)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = 6970324;
	volatile int32_t x266 = INT32_MIN;
	int64_t x267 = -2030673164421LL;
	uint16_t x268 = 5U;

	t58 = (x265|(x266<=(x267+x268)));

	if (t58 != 6970324) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x271 = 1U;
	int32_t x272 = INT32_MIN;
	uint64_t t59 = 100436870045LLU;

	t59 = (x269|(x270<=(x271+x272)));

	if (t59 != 35109941LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = 5U;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -1;
	uint32_t t60 = 470870U;

	t60 = (x273|(x274<=(x275+x276)));

	if (t60 != 5U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x277|(x278<=(x279+x280)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x285 = 735U;
	int32_t x286 = INT32_MIN;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MAX;
	static int32_t t62 = -12466039;

	t62 = (x285|(x286<=(x287+x288)));

	if (t62 != 735) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x289 = INT16_MAX;
	int8_t x291 = -1;
	static uint8_t x292 = 2U;
	volatile int32_t t63 = 320130830;

	t63 = (x289|(x290<=(x291+x292)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 45430706U;
	int8_t x294 = 40;
	int8_t x295 = INT8_MIN;
	volatile uint32_t t64 = 22978U;

	t64 = (x293|(x294<=(x295+x296)));

	if (t64 != 45430707U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x297 = -55;
	int64_t x298 = INT64_MIN;
	uint8_t x299 = 11U;
	int32_t t65 = 459256379;

	t65 = (x297|(x298<=(x299+x300)));

	if (t65 != -55) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 105U;
	static int64_t x302 = 1560707716LL;
	volatile uint8_t x303 = 0U;
	uint32_t x304 = 1U;
	volatile int32_t t66 = 0;

	t66 = (x301|(x302<=(x303+x304)));

	if (t66 != 105) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	volatile uint64_t x306 = 249LLU;
	uint32_t x308 = 3U;

	t67 = (x305|(x306<=(x307+x308)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x309 = UINT16_MAX;
	uint8_t x310 = 86U;
	uint64_t x311 = 55LLU;
	static int8_t x312 = -1;
	static volatile int32_t t68 = 29304758;

	t68 = (x309|(x310<=(x311+x312)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	int32_t x316 = -184584;
	int32_t t69 = -10;

	t69 = (x313|(x314<=(x315+x316)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	int64_t t70 = 673LL;

	t70 = (x317|(x318<=(x319+x320)));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x322 = UINT8_MAX;
	volatile int32_t x323 = INT32_MAX;
	int32_t t71 = 301138;

	t71 = (x321|(x322<=(x323+x324)));

	if (t71 != 431) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	volatile uint32_t x327 = 65429U;
	volatile int32_t t72 = -148144;

	t72 = (x325|(x326<=(x327+x328)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -163;
	volatile int16_t x330 = INT16_MIN;
	static int32_t x331 = 48269063;
	int64_t x332 = -1LL;

	t73 = (x329|(x330<=(x331+x332)));

	if (t73 != -163) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x333 = UINT64_MAX;
	static int32_t x334 = INT32_MAX;
	int8_t x336 = INT8_MIN;

	t74 = (x333|(x334<=(x335+x336)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x337 = 716736102LL;
	int16_t x338 = -1;
	int16_t x339 = 12;
	static int16_t x340 = INT16_MIN;
	static volatile int64_t t75 = -1019297927555LL;

	t75 = (x337|(x338<=(x339+x340)));

	if (t75 != 716736102LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = -1;
	int16_t x342 = 1;
	uint32_t x343 = 78U;

	t76 = (x341|(x342<=(x343+x344)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x346 = INT32_MIN;
	volatile int16_t x347 = -1;
	static int32_t x348 = -66826962;
	static uint64_t t77 = 10635662000812LLU;

	t77 = (x345|(x346<=(x347+x348)));

	if (t77 != 421693301764343559LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 74U;
	volatile int16_t x351 = 938;
	int32_t x352 = 55087882;
	volatile int32_t t78 = -1;

	t78 = (x349|(x350<=(x351+x352)));

	if (t78 != 75) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 48U;
	int32_t x355 = -1;
	static int32_t x356 = -1;
	uint32_t t79 = UINT32_MAX;

	t79 = (x353|(x354<=(x355+x356)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x357 = -60;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	volatile int32_t x360 = 238544;
	volatile int32_t t80 = -233;

	t80 = (x357|(x358<=(x359+x360)));

	if (t80 != -59) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t t81 = -5069116700LL;

	t81 = (x361|(x362<=(x363+x364)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MAX;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 60362011744487LLU;
	static int32_t t82 = INT32_MAX;

	t82 = (x365|(x366<=(x367+x368)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x370 = 92U;
	uint8_t x371 = 104U;
	int32_t x372 = -1;
	volatile int64_t t83 = 6LL;

	t83 = (x369|(x370<=(x371+x372)));

	if (t83 != 3414451776580739LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 2272824LLU;
	int64_t x374 = INT64_MIN;
	volatile int16_t x375 = 1255;
	static uint16_t x376 = 23382U;
	volatile uint64_t t84 = 13LLU;

	t84 = (x373|(x374<=(x375+x376)));

	if (t84 != 2272825LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x377 = 98U;
	int8_t x378 = -1;
	int64_t x379 = -13174578744LL;
	int8_t x380 = -1;
	static volatile int32_t t85 = -15;

	t85 = (x377|(x378<=(x379+x380)));

	if (t85 != 98) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x381 = -31;
	int32_t x382 = INT32_MAX;
	uint16_t x384 = UINT16_MAX;
	static int32_t t86 = 31754685;

	t86 = (x381|(x382<=(x383+x384)));

	if (t86 != -31) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = -1;
	static int8_t x394 = -1;
	int32_t x395 = -1;
	static uint64_t x396 = 4940927526199232LLU;
	int32_t t87 = -36;

	t87 = (x393|(x394<=(x395+x396)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x397|(x398<=(x399+x400)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = 1;
	uint32_t x402 = 108866U;
	int16_t x403 = -1;
	int64_t x404 = 184022868097LL;
	int32_t t89 = -1;

	t89 = (x401|(x402<=(x403+x404)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x405 = UINT32_MAX;
	static uint32_t x406 = 58U;
	static volatile uint16_t x408 = 2809U;
	uint32_t t90 = UINT32_MAX;

	t90 = (x405|(x406<=(x407+x408)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x409 = 19U;
	static uint32_t x410 = UINT32_MAX;
	static volatile uint16_t x411 = 0U;
	int32_t t91 = 81;

	t91 = (x409|(x410<=(x411+x412)));

	if (t91 != 19) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x413 = 240762U;
	uint16_t x414 = 134U;
	static uint32_t x415 = 5355U;
	uint16_t x416 = 439U;
	uint32_t t92 = 766510944U;

	t92 = (x413|(x414<=(x415+x416)));

	if (t92 != 240763U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = 679142091095171516LL;
	int32_t x418 = -1;
	volatile int32_t x419 = -729556;
	int64_t x420 = INT64_MAX;
	int64_t t93 = -2089007185424339LL;

	t93 = (x417|(x418<=(x419+x420)));

	if (t93 != 679142091095171517LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = INT64_MIN;
	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 262907U;

	t94 = (x421|(x422<=(x423+x424)));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 78LLU;
	int16_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	static volatile int16_t x432 = INT16_MIN;

	t95 = (x429|(x430<=(x431+x432)));

	if (t95 != 78LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x433 = -1;
	uint8_t x434 = 7U;
	uint32_t x435 = 13U;
	int32_t x436 = -538;

	t96 = (x433|(x434<=(x435+x436)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x437 = UINT64_MAX;
	int64_t x438 = INT64_MIN;
	int8_t x439 = -1;
	int16_t x440 = 0;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x437|(x438<=(x439+x440)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x441 = -1;
	volatile int8_t x442 = INT8_MIN;
	static uint16_t x443 = 729U;
	volatile uint8_t x444 = 19U;
	volatile int32_t t98 = -83038;

	t98 = (x441|(x442<=(x443+x444)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x446 = -21801506698817359LL;
	volatile uint16_t x447 = UINT16_MAX;
	int64_t x448 = -1LL;
	int64_t t99 = 21081409942LL;

	t99 = (x445|(x446<=(x447+x448)));

	if (t99 != 31LL) { NG(); } else { ; }
	
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

