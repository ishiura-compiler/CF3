#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static int8_t x4 = INT8_MAX;
int8_t x8 = INT8_MIN;
int32_t t1 = 4582;
uint16_t x9 = 116U;
static int16_t x10 = INT16_MAX;
uint64_t x23 = UINT64_MAX;
volatile int32_t t8 = 15941837;
int16_t x58 = 339;
int64_t x67 = 15300LL;
static int32_t x69 = 87;
static int8_t x70 = 23;
int8_t x75 = INT8_MAX;
static int32_t x79 = INT32_MAX;
static volatile int32_t t15 = -12476;
volatile uint16_t x81 = 14423U;
uint32_t x82 = 4089U;
uint64_t x95 = UINT64_MAX;
volatile uint64_t t19 = 291010863LLU;
static int16_t x105 = INT16_MIN;
uint64_t x127 = 151721220301369LLU;
uint16_t x135 = 1U;
int32_t t27 = -261911;
volatile uint64_t t28 = 1LLU;
int16_t x160 = -1;
int16_t x161 = INT16_MIN;
volatile int64_t t31 = 429LL;
uint64_t t32 = 105971000121018931LLU;
static uint8_t x170 = UINT8_MAX;
static volatile int64_t x174 = INT64_MIN;
int8_t x177 = INT8_MIN;
volatile int32_t t39 = -9;
static uint64_t x206 = 2734728317273LLU;
volatile int8_t x210 = -1;
int8_t x211 = -1;
static int8_t x213 = INT8_MAX;
int32_t x216 = -1;
int8_t x219 = -14;
static int32_t x229 = -1;
static int32_t x231 = 0;
volatile int32_t x232 = -1;
int32_t t45 = -245;
uint32_t x247 = 156612818U;
static volatile uint32_t x251 = 23930U;
static volatile uint16_t x253 = UINT16_MAX;
uint16_t x267 = 720U;
int64_t x271 = INT64_MAX;
volatile int64_t x275 = -1LL;
int16_t x287 = INT16_MIN;
int32_t t56 = -2;
int32_t x291 = -1;
volatile int64_t t59 = -1LL;
int16_t x304 = INT16_MIN;
static int64_t t60 = -62190LL;
int8_t x311 = INT8_MIN;
uint8_t x317 = UINT8_MAX;
volatile uint32_t x319 = UINT32_MAX;
uint8_t x325 = 0U;
int32_t x328 = INT32_MIN;
int16_t x335 = INT16_MAX;
int64_t x343 = 606LL;
volatile uint64_t x351 = 67070800514LLU;
static uint8_t x352 = 2U;
uint64_t t69 = 168965712902686760LLU;
volatile uint64_t x353 = 746280LLU;
volatile int64_t t71 = 4976572731249LL;
int8_t x361 = -3;
int64_t x362 = INT64_MIN;
int8_t x363 = INT8_MIN;
volatile uint64_t x366 = UINT64_MAX;
int16_t x369 = INT16_MIN;
int8_t x374 = -15;
volatile uint64_t t75 = 675244LLU;
int64_t x382 = -825999751147520196LL;
uint32_t t76 = 502U;
static int16_t x387 = INT16_MIN;
int16_t x400 = INT16_MIN;
volatile int64_t x413 = -1LL;
static uint8_t x420 = 2U;
int8_t x425 = -1;
static int64_t x426 = -1LL;
volatile int64_t x427 = INT64_MAX;
int32_t x433 = 2548;
int32_t x442 = 133380;
uint64_t x443 = UINT64_MAX;
int16_t x446 = -15;
static uint32_t t91 = 215673U;
int32_t t93 = -848312;
static int8_t x470 = INT8_MIN;
int8_t x471 = 2;
static uint32_t t94 = 211371696U;
static int8_t x474 = -1;
volatile int32_t x475 = 7;
static int16_t x476 = INT16_MIN;
volatile int32_t t95 = -18;
static int16_t x479 = -12831;
int64_t x480 = -140LL;
uint16_t x489 = UINT16_MAX;
int8_t x490 = INT8_MIN;
int16_t x492 = INT16_MIN;


void f0(void) {
	int64_t x2 = 4115537LL;
	uint32_t x3 = 13075522U;
	volatile uint32_t t0 = 86522U;

	t0 = (((x1<x2)-x3)+x4);

	if (t0 != 4281891902U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 40359067409696230LLU;
	uint8_t x7 = 57U;

	t1 = (((x5<x6)-x7)+x8);

	if (t1 != -184) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = 28;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 0;

	t2 = (((x9<x10)-x11)+x12);

	if (t2 != 100) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2010560LL;
	volatile int32_t x14 = 1;
	static int64_t x15 = -1LL;
	static int32_t x16 = 4139909;
	int64_t t3 = 19945LL;

	t3 = (((x13<x14)-x15)+x16);

	if (t3 != 4139911LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x18 = 7950U;
	uint16_t x19 = 4U;
	static int8_t x20 = -1;
	int32_t t4 = 28500179;

	t4 = (((x17<x18)-x19)+x20);

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -9778;
	static volatile uint64_t x22 = UINT64_MAX;
	static int8_t x24 = -2;
	static volatile uint64_t t5 = 3173642LLU;

	t5 = (((x21<x22)-x23)+x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 30U;
	int64_t x30 = 20053LL;
	static int8_t x31 = INT8_MAX;
	int16_t x32 = -1;
	int32_t t6 = 21375537;

	t6 = (((x29<x30)-x31)+x32);

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	static int32_t x44 = -1;
	int64_t t7 = -516924762LL;

	t7 = (((x41<x42)-x43)+x44);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = 8873LL;
	volatile int32_t x51 = -1;
	static volatile int8_t x52 = -6;

	t8 = (((x49<x50)-x51)+x52);

	if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MAX;
	uint8_t x54 = 55U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t9 = 15009;

	t9 = (((x53<x54)-x55)+x56);

	if (t9 != -32640) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x57 = INT8_MAX;
	static int32_t x59 = INT32_MAX;
	volatile int64_t x60 = -1LL;
	static int64_t t10 = -380692372146817332LL;

	t10 = (((x57<x58)-x59)+x60);

	if (t10 != -2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = INT16_MAX;
	volatile uint8_t x62 = 44U;
	static uint64_t x63 = 1795405008677LLU;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t11 = 4959LLU;

	t11 = (((x61<x62)-x63)+x64);

	if (t11 != 18446742278304510171LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	int64_t t12 = 28LL;

	t12 = (((x65<x66)-x67)+x68);

	if (t12 != 50235LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x71 = 26534015046125343LL;
	static int8_t x72 = INT8_MAX;
	int64_t t13 = -1881864457LL;

	t13 = (((x69<x70)-x71)+x72);

	if (t13 != -26534015046125216LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 9U;
	uint8_t x74 = UINT8_MAX;
	uint64_t x76 = 44063656554382104LLU;
	static volatile uint64_t t14 = 1923789792244056LLU;

	t14 = (((x73<x74)-x75)+x76);

	if (t14 != 44063656554381978LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int32_t x78 = -33;
	volatile uint16_t x80 = 68U;

	t15 = (((x77<x78)-x79)+x80);

	if (t15 != -2147483579) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x83 = -1;
	static uint8_t x84 = UINT8_MAX;
	static volatile int32_t t16 = 497273568;

	t16 = (((x81<x82)-x83)+x84);

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	static int8_t x86 = 2;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t17 = 20006092;

	t17 = (((x85<x86)-x87)+x88);

	if (t17 != 384) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = 46394LL;
	volatile int8_t x91 = 15;
	int16_t x92 = -1;
	volatile int32_t t18 = -186;

	t18 = (((x89<x90)-x91)+x92);

	if (t18 != -15) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x93 = 119U;
	static int8_t x94 = -3;
	int32_t x96 = INT32_MIN;

	t19 = (((x93<x94)-x95)+x96);

	if (t19 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = 0;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1;
	int32_t t20 = 19564404;

	t20 = (((x97<x98)-x99)+x100);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	uint64_t x102 = 780892LLU;
	static int32_t x103 = 1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t21 = 18;

	t21 = (((x101<x102)-x103)+x104);

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x106 = 1348996LL;
	static uint16_t x107 = UINT16_MAX;
	static int64_t x108 = -1LL;
	int64_t t22 = 12736LL;

	t22 = (((x105<x106)-x107)+x108);

	if (t22 != -65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -11;
	static uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 1959851U;
	uint8_t x120 = UINT8_MAX;
	uint32_t t23 = 108U;

	t23 = (((x117<x118)-x119)+x120);

	if (t23 != 4293007701U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile uint64_t t24 = 10713LLU;

	t24 = (((x125<x126)-x127)+x128);

	if (t24 != 18446592352489217479LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MAX;
	static int64_t x132 = -77132762559LL;
	volatile int64_t t25 = 48LL;

	t25 = (((x129<x130)-x131)+x132);

	if (t25 != -77132795326LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = -1LL;
	static int64_t x134 = 16000343666307726LL;
	volatile int8_t x136 = 0;
	volatile int32_t t26 = -4;

	t26 = (((x133<x134)-x135)+x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -57501874846LL;
	int8_t x143 = INT8_MIN;
	static int8_t x144 = INT8_MAX;

	t27 = (((x141<x142)-x143)+x144);

	if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int16_t x146 = 3833;
	static volatile uint32_t x147 = 44897419U;
	volatile uint64_t x148 = UINT64_MAX;

	t28 = (((x145<x146)-x147)+x148);

	if (t28 != 4250069876LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 0U;
	static int16_t x151 = INT16_MAX;
	static volatile uint64_t x152 = 20956195LLU;
	static uint64_t t29 = 1578LLU;

	t29 = (((x149<x150)-x151)+x152);

	if (t29 != 20923428LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile uint16_t x158 = UINT16_MAX;
	uint16_t x159 = 33U;
	volatile int32_t t30 = -378741;

	t30 = (((x157<x158)-x159)+x160);

	if (t30 != -33) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = -60266599LL;
	volatile int32_t x163 = -1;
	volatile int64_t x164 = INT64_MIN;

	t31 = (((x161<x162)-x163)+x164);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x165 = 5713131329440LLU;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = 55LLU;
	uint32_t x168 = 5U;

	t32 = (((x165<x166)-x167)+x168);

	if (t32 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -1;
	int16_t x171 = INT16_MAX;
	volatile int32_t x172 = 418978632;
	static volatile int32_t t33 = 20;

	t33 = (((x169<x170)-x171)+x172);

	if (t33 != 418945866) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -1;
	static uint32_t x175 = 432194U;
	static uint8_t x176 = 0U;
	uint32_t t34 = 232201U;

	t34 = (((x173<x174)-x175)+x176);

	if (t34 != 4294535102U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x178 = -1LL;
	static volatile int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;
	int32_t t35 = -76936845;

	t35 = (((x177<x178)-x179)+x180);

	if (t35 != 33024) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MAX;
	volatile uint8_t x186 = 1U;
	int64_t x187 = -2082470688400LL;
	volatile uint16_t x188 = 15U;
	volatile int64_t t36 = -94512LL;

	t36 = (((x185<x186)-x187)+x188);

	if (t36 != 2082470688415LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = 3518;
	static int16_t x194 = -1;
	uint64_t x195 = 1458LLU;
	volatile int64_t x196 = -443289504LL;
	volatile uint64_t t37 = 4247550512263LLU;

	t37 = (((x193<x194)-x195)+x196);

	if (t37 != 18446744073266260654LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -952;
	int32_t x200 = INT32_MIN;
	int32_t t38 = -669907;

	t38 = (((x197<x198)-x199)+x200);

	if (t38 != -2147482696) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x201 = 5;
	volatile uint16_t x202 = 3U;
	volatile int16_t x203 = 1656;
	uint16_t x204 = UINT16_MAX;

	t39 = (((x201<x202)-x203)+x204);

	if (t39 != 63879) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 154633927LLU;
	uint8_t x207 = 3U;
	int8_t x208 = INT8_MIN;
	int32_t t40 = -375;

	t40 = (((x205<x206)-x207)+x208);

	if (t40 != -130) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x209 = 0U;
	int64_t x212 = -1LL;
	volatile int64_t t41 = 2251895809LL;

	t41 = (((x209<x210)-x211)+x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;
	volatile int32_t t42 = 27926;

	t42 = (((x213<x214)-x215)+x216);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = 7U;
	static volatile int8_t x220 = 0;
	volatile int32_t t43 = -260831421;

	t43 = (((x217<x218)-x219)+x220);

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x230 = INT32_MIN;
	volatile int32_t t44 = 1280;

	t44 = (((x229<x230)-x231)+x232);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = -2163568291338635LL;
	static int16_t x239 = INT16_MAX;
	volatile int8_t x240 = -1;

	t45 = (((x237<x238)-x239)+x240);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = INT32_MIN;
	static int8_t x242 = 18;
	int32_t x243 = -1;
	static volatile int16_t x244 = INT16_MIN;
	volatile int32_t t46 = -19;

	t46 = (((x241<x242)-x243)+x244);

	if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = 0;
	uint8_t x246 = 0U;
	int8_t x248 = -1;
	volatile uint32_t t47 = 706269811U;

	t47 = (((x245<x246)-x247)+x248);

	if (t47 != 4138354477U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = 0;
	volatile uint32_t x252 = 0U;
	uint32_t t48 = 894899U;

	t48 = (((x249<x250)-x251)+x252);

	if (t48 != 4294943366U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	volatile int32_t x256 = 12169;
	volatile int32_t t49 = 26777346;

	t49 = (((x253<x254)-x255)+x256);

	if (t49 != 12297) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x257 = -7075;
	static int16_t x258 = -1;
	static int16_t x259 = -242;
	int16_t x260 = INT16_MAX;
	volatile int32_t t50 = 39086;

	t50 = (((x257<x258)-x259)+x260);

	if (t50 != 33010) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = 1U;
	volatile int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	int32_t x264 = 13656;
	volatile int32_t t51 = 22;

	t51 = (((x261<x262)-x263)+x264);

	if (t51 != 46424) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	int16_t x268 = INT16_MAX;
	volatile int32_t t52 = -4;

	t52 = (((x265<x266)-x267)+x268);

	if (t52 != 32048) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x269 = INT16_MAX;
	volatile int8_t x270 = 4;
	volatile int64_t x272 = 89619LL;
	int64_t t53 = 3LL;

	t53 = (((x269<x270)-x271)+x272);

	if (t53 != -9223372036854686188LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x273 = 36U;
	static uint8_t x274 = 48U;
	uint8_t x276 = 9U;
	int64_t t54 = 37LL;

	t54 = (((x273<x274)-x275)+x276);

	if (t54 != 11LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	int32_t x279 = -1;
	uint32_t x280 = UINT32_MAX;
	uint32_t t55 = 65U;

	t55 = (((x277<x278)-x279)+x280);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x285 = 59U;
	static uint8_t x286 = 63U;
	int8_t x288 = -1;

	t56 = (((x285<x286)-x287)+x288);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = INT64_MIN;
	volatile int64_t t57 = -60165525664421LL;

	t57 = (((x289<x290)-x291)+x292);

	if (t57 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x293 = INT8_MAX;
	volatile int8_t x294 = 1;
	int8_t x295 = 14;
	volatile uint64_t x296 = 39LLU;
	volatile uint64_t t58 = 11LLU;

	t58 = (((x293<x294)-x295)+x296);

	if (t58 != 25LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 2U;
	static int64_t x299 = 419880917LL;
	static int16_t x300 = INT16_MAX;

	t59 = (((x297<x298)-x299)+x300);

	if (t59 != -419848150LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x301 = INT16_MAX;
	static int32_t x302 = -1;
	volatile int64_t x303 = -1LL;

	t60 = (((x301<x302)-x303)+x304);

	if (t60 != -32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = UINT16_MAX;
	static volatile int16_t x310 = -1;
	int16_t x312 = -3805;
	static volatile int32_t t61 = 13555145;

	t61 = (((x309<x310)-x311)+x312);

	if (t61 != -3677) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x313 = 5U;
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = 1347490;
	static volatile int16_t x316 = INT16_MAX;
	int32_t t62 = 7111361;

	t62 = (((x313<x314)-x315)+x316);

	if (t62 != -1314723) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x318 = -47316875LL;
	int8_t x320 = INT8_MAX;
	volatile uint32_t t63 = 19060U;

	t63 = (((x317<x318)-x319)+x320);

	if (t63 != 128U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x321 = 29U;
	uint16_t x322 = 13148U;
	uint32_t x323 = 895545U;
	int64_t x324 = -1LL;
	int64_t t64 = -11425693338LL;

	t64 = (((x321<x322)-x323)+x324);

	if (t64 != 4294071751LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x326 = -1;
	static int64_t x327 = -4074145447463432885LL;
	static volatile int64_t t65 = -118428316871132768LL;

	t65 = (((x325<x326)-x327)+x328);

	if (t65 != 4074145445315949237LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x329 = -42;
	uint32_t x330 = 726259260U;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 159391795371LLU;
	uint64_t t66 = 428118LLU;

	t66 = (((x329<x330)-x331)+x332);

	if (t66 != 159391795499LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = 15223U;
	volatile int16_t x334 = INT16_MIN;
	volatile int8_t x336 = 19;
	static volatile int32_t t67 = 0;

	t67 = (((x333<x334)-x335)+x336);

	if (t67 != -32747) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x341 = 26U;
	uint64_t x342 = 28935662915LLU;
	volatile int8_t x344 = -1;
	volatile int64_t t68 = -7148617236203943LL;

	t68 = (((x341<x342)-x343)+x344);

	if (t68 != -606LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -2;
	static int8_t x350 = INT8_MIN;

	t69 = (((x349<x350)-x351)+x352);

	if (t69 != 18446744006638751104LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x354 = 7592005;
	static int16_t x355 = -137;
	volatile uint8_t x356 = 5U;
	int32_t t70 = 12635678;

	t70 = (((x353<x354)-x355)+x356);

	if (t70 != 143) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = -2348;
	volatile int16_t x358 = -1;
	uint32_t x359 = 372360743U;
	volatile int64_t x360 = -1LL;

	t71 = (((x357<x358)-x359)+x360);

	if (t71 != 3922606553LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x364 = 19;
	volatile int32_t t72 = -3504;

	t72 = (((x361<x362)-x363)+x364);

	if (t72 != 147) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x365 = -373826LL;
	int8_t x367 = 0;
	int16_t x368 = -1;
	volatile int32_t t73 = -1727;

	t73 = (((x365<x366)-x367)+x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x370 = 3249747310153LLU;
	int32_t x371 = 116162698;
	volatile int8_t x372 = -2;
	volatile int32_t t74 = 248;

	t74 = (((x369<x370)-x371)+x372);

	if (t74 != -116162700) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x373 = -1;
	volatile int32_t x375 = INT32_MAX;
	uint64_t x376 = 218181291688LLU;

	t75 = (((x373<x374)-x375)+x376);

	if (t75 != 216033808041LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x381 = 1U;
	int32_t x383 = 120682297;
	uint32_t x384 = 275934209U;

	t76 = (((x381<x382)-x383)+x384);

	if (t76 != 155251912U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	int8_t x388 = 0;
	volatile int32_t t77 = 10;

	t77 = (((x385<x386)-x387)+x388);

	if (t77 != 32769) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t78 = -3;

	t78 = (((x389<x390)-x391)+x392);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x397 = -1;
	volatile int8_t x398 = -1;
	static uint8_t x399 = 116U;
	int32_t t79 = 512344163;

	t79 = (((x397<x398)-x399)+x400);

	if (t79 != -32884) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = -17;
	int8_t x402 = 2;
	int64_t x403 = 6038312073276LL;
	volatile int8_t x404 = INT8_MIN;
	volatile int64_t t80 = 7261524336809LL;

	t80 = (((x401<x402)-x403)+x404);

	if (t80 != -6038312073403LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = 22;
	static int8_t x406 = -1;
	volatile int64_t x407 = -1LL;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t81 = 556283602409040617LL;

	t81 = (((x405<x406)-x407)+x408);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	static int16_t x411 = -1;
	static int16_t x412 = 1979;
	int32_t t82 = -703960;

	t82 = (((x409<x410)-x411)+x412);

	if (t82 != 1980) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = 6689042402020LL;
	static uint64_t t83 = 1008385865992LLU;

	t83 = (((x413<x414)-x415)+x416);

	if (t83 != 6689042402022LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = INT32_MAX;
	volatile int32_t t84 = -138653;

	t84 = (((x417<x418)-x419)+x420);

	if (t84 != -2147483644) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x428 = 6;
	int64_t t85 = -20019757334LL;

	t85 = (((x425<x426)-x427)+x428);

	if (t85 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int16_t x430 = 489;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 4U;
	static volatile int32_t t86 = 0;

	t86 = (((x429<x430)-x431)+x432);

	if (t86 != 32772) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x434 = 13248U;
	int16_t x435 = INT16_MIN;
	int32_t x436 = -1;
	volatile int32_t t87 = -188;

	t87 = (((x433<x434)-x435)+x436);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = -223894255;
	uint16_t x438 = 2U;
	uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 12262U;
	volatile uint64_t t88 = 73431925LLU;

	t88 = (((x437<x438)-x439)+x440);

	if (t88 != 12264LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = 316117017018548318LLU;
	int8_t x444 = -1;
	uint64_t t89 = 979454871LLU;

	t89 = (((x441<x442)-x443)+x444);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = 2885168636LL;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t90 = 14300;

	t90 = (((x445<x446)-x447)+x448);

	if (t90 != 32640) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x453 = 2U;
	static int16_t x454 = INT16_MIN;
	uint32_t x455 = UINT32_MAX;
	int16_t x456 = -6;

	t91 = (((x453<x454)-x455)+x456);

	if (t91 != 4294967291U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x461 = -1;
	int8_t x462 = -1;
	static uint32_t x463 = UINT32_MAX;
	int16_t x464 = INT16_MIN;
	uint32_t t92 = 4079608U;

	t92 = (((x461<x462)-x463)+x464);

	if (t92 != 4294934529U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x465 = 86U;
	static uint8_t x466 = 2U;
	int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MIN;

	t93 = (((x465<x466)-x467)+x468);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x469 = INT32_MAX;
	uint32_t x472 = 6618123U;

	t94 = (((x469<x470)-x471)+x472);

	if (t94 != 6618121U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x473 = INT64_MIN;

	t95 = (((x473<x474)-x475)+x476);

	if (t95 != -32774) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x477 = -844291648155LL;
	volatile uint64_t x478 = 66155801314149LLU;
	int64_t t96 = 23313LL;

	t96 = (((x477<x478)-x479)+x480);

	if (t96 != 12691LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = INT32_MIN;
	uint64_t x482 = 8696552668340061LLU;
	int64_t x483 = -1LL;
	static int16_t x484 = INT16_MAX;
	int64_t t97 = -177056548LL;

	t97 = (((x481<x482)-x483)+x484);

	if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x485 = INT8_MIN;
	uint32_t x486 = UINT32_MAX;
	int64_t x487 = 58153901451687LL;
	volatile int64_t x488 = -1LL;
	int64_t t98 = -41LL;

	t98 = (((x485<x486)-x487)+x488);

	if (t98 != -58153901451687LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x491 = 4427LLU;
	volatile uint64_t t99 = 366476168826187236LLU;

	t99 = (((x489<x490)-x491)+x492);

	if (t99 != 18446744073709514421LLU) { NG(); } else { ; }
	
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

