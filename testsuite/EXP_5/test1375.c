#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x11 = 215U;
volatile int64_t x12 = INT64_MAX;
int16_t x13 = 1;
int16_t x32 = -347;
int32_t t6 = 1156;
volatile uint32_t x39 = 1U;
static volatile uint32_t x44 = 3U;
volatile int32_t t10 = 0;
uint32_t x54 = 899048U;
static volatile int32_t t12 = 10877;
int32_t x57 = -1;
static volatile int32_t t14 = -232294065;
int32_t x69 = INT32_MIN;
uint16_t x71 = UINT16_MAX;
int16_t x84 = -1;
int16_t x98 = INT16_MIN;
static int32_t t21 = 1029253;
static volatile uint8_t x102 = 0U;
int16_t x104 = -1;
int32_t x106 = INT32_MAX;
int8_t x107 = 8;
int16_t x119 = INT16_MAX;
uint64_t x120 = UINT64_MAX;
int64_t x125 = 129066184345928569LL;
static int16_t x126 = -1;
uint8_t x128 = 29U;
volatile int32_t t25 = -25;
static volatile int8_t x161 = INT8_MAX;
int32_t t31 = 2346529;
int32_t x166 = 77;
volatile int32_t x174 = INT32_MAX;
int32_t x180 = -655115628;
uint8_t x192 = UINT8_MAX;
volatile int32_t t37 = 2004;
volatile int32_t t38 = 0;
static volatile int32_t t39 = 29;
int8_t x207 = -1;
int32_t t42 = -947754;
int64_t x225 = -4930513872322071LL;
int32_t t44 = 7;
uint64_t x230 = 56646205LLU;
static int16_t x235 = INT16_MIN;
volatile int8_t x237 = -1;
int64_t x239 = INT64_MIN;
volatile int32_t t47 = -2779;
static int16_t x241 = INT16_MAX;
static int8_t x243 = INT8_MIN;
int64_t x251 = INT64_MAX;
int64_t x255 = -1LL;
volatile int32_t t51 = 1857547;
static int8_t x257 = -31;
static volatile int32_t t52 = -17166339;
static int32_t x261 = 18223;
uint64_t x264 = 44537590590109LLU;
int8_t x266 = -1;
int64_t x268 = INT64_MAX;
static int8_t x280 = INT8_MAX;
int32_t x285 = 9429;
int8_t x289 = 27;
uint64_t x290 = 1508LLU;
volatile int32_t t62 = -94479;
int32_t t63 = 79;
static volatile uint16_t x317 = UINT16_MAX;
int16_t x318 = -132;
uint16_t x334 = 245U;
int8_t x351 = -48;
volatile int8_t x354 = INT8_MAX;
int32_t t72 = 0;
uint8_t x365 = 14U;
static volatile int32_t t74 = -67478081;
static volatile int32_t x371 = -1;
static int32_t t76 = 814184;
uint8_t x378 = 10U;
int32_t t77 = -401;
static uint64_t x382 = 4302409069993LLU;
uint64_t x387 = 415903LLU;
static volatile int32_t t79 = -11279;
int32_t x390 = INT32_MIN;
uint64_t x391 = UINT64_MAX;
uint32_t x396 = 2956866U;
volatile int32_t t81 = 219;
volatile int16_t x403 = INT16_MIN;
uint64_t x407 = UINT64_MAX;
volatile int32_t t84 = 600499031;
static uint16_t x412 = UINT16_MAX;
static uint64_t x419 = 371LLU;
int64_t x426 = INT64_MIN;
int8_t x429 = INT8_MIN;
static int64_t x430 = INT64_MAX;
uint16_t x431 = UINT16_MAX;
uint32_t x432 = UINT32_MAX;
int64_t x442 = INT64_MIN;
int64_t x447 = -1LL;
static uint16_t x455 = UINT16_MAX;
static uint32_t x460 = 2U;
uint64_t x462 = 80876630926LLU;
uint32_t x466 = 7726U;
static uint32_t x469 = 87660U;


void f0(void) {
	uint16_t x1 = 2284U;
	int32_t x2 = INT32_MAX;
	int8_t x3 = INT8_MAX;
	int8_t x4 = -1;
	int32_t t0 = -2;

	t0 = (x1<=((x2<x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	int8_t x6 = -1;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -191699;

	t1 = (x5<=((x6<x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	static int32_t x10 = 146697096;
	static int32_t t2 = 88;

	t2 = (x9<=((x10<x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x14 = INT32_MAX;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = 12890LL;
	int32_t t3 = -858;

	t3 = (x13<=((x14<x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int8_t x18 = 2;
	static int64_t x19 = -109LL;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -295;

	t4 = (x17<=((x18<x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 6;
	int8_t x22 = 0;
	static volatile uint8_t x23 = 0U;
	volatile uint16_t x24 = 22162U;
	volatile int32_t t5 = -1807196;

	t5 = (x21<=((x22<x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -188054423LL;
	int16_t x30 = -1;
	uint64_t x31 = 239463568LLU;

	t6 = (x29<=((x30<x31)-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 134040153;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	int32_t x36 = 1670;
	static int32_t t7 = 113852;

	t7 = (x33<=((x34<x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x37 = 17U;
	static volatile uint16_t x38 = 447U;
	static int8_t x40 = -1;
	int32_t t8 = 2827782;

	t8 = (x37<=((x38<x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 13;
	static volatile int8_t x42 = -1;
	uint64_t x43 = 5LLU;
	volatile int32_t t9 = -72;

	t9 = (x41<=((x42<x43)-x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 3903121128LLU;
	volatile uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = INT32_MAX;

	t10 = (x45<=((x46<x47)-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile int64_t x50 = -11393098724LL;
	int32_t x51 = -1;
	uint64_t x52 = 8797330119968848161LLU;
	static int32_t t11 = 0;

	t11 = (x49<=((x50<x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1711938133LL;
	int8_t x55 = -1;
	static int32_t x56 = INT32_MAX;

	t12 = (x53<=((x54<x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t13 = 5407378;

	t13 = (x57<=((x58<x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static volatile int8_t x66 = -9;
	int16_t x67 = -1;
	int16_t x68 = -1;

	t14 = (x65<=((x66<x67)-x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = 115;
	volatile int64_t x72 = -1LL;
	volatile int32_t t15 = 466;

	t15 = (x69<=((x70<x71)-x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t16 = 29350;

	t16 = (x73<=((x74<x75)-x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 0;
	uint8_t x78 = 1U;
	static int64_t x79 = INT64_MIN;
	volatile int16_t x80 = 2771;
	static int32_t t17 = 2279799;

	t17 = (x77<=((x78<x79)-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 121U;
	int64_t x82 = 79637766161691469LL;
	int64_t x83 = -1LL;
	volatile int32_t t18 = -8671;

	t18 = (x81<=((x82<x83)-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 6;
	static volatile int8_t x86 = INT8_MIN;
	uint64_t x87 = 3113687460LLU;
	uint32_t x88 = 0U;
	int32_t t19 = -2770;

	t19 = (x85<=((x86<x87)-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int8_t x94 = INT8_MAX;
	uint64_t x95 = 282461459005LLU;
	uint32_t x96 = 2023813U;
	volatile int32_t t20 = 1;

	t20 = (x93<=((x94<x95)-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MAX;
	static int16_t x99 = INT16_MAX;
	int16_t x100 = 41;

	t21 = (x97<=((x98<x99)-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x101 = 0U;
	static int16_t x103 = -6;
	volatile int32_t t22 = 913;

	t22 = (x101<=((x102<x103)-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -1LL;
	int16_t x108 = 11;
	int32_t t23 = -35651;

	t23 = (x105<=((x106<x107)-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	static int16_t x118 = -7;
	int32_t t24 = -44;

	t24 = (x117<=((x118<x119)-x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x127 = INT64_MIN;

	t25 = (x125<=((x126<x127)-x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 59U;
	volatile int8_t x132 = 1;
	int32_t t26 = -1;

	t26 = (x129<=((x130<x131)-x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	volatile uint32_t x136 = 46121U;
	int32_t t27 = 11407;

	t27 = (x133<=((x134<x135)-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = INT8_MIN;
	static int32_t x138 = INT32_MAX;
	int8_t x139 = 0;
	int16_t x140 = -134;
	int32_t t28 = -154368;

	t28 = (x137<=((x138<x139)-x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x141 = -1;
	int32_t x142 = INT32_MIN;
	uint16_t x143 = 38U;
	int16_t x144 = INT16_MAX;
	static int32_t t29 = -836297;

	t29 = (x141<=((x142<x143)-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -1LL;
	static int16_t x154 = -1;
	static uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 2U;
	int32_t t30 = 3740;

	t30 = (x153<=((x154<x155)-x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -1;

	t31 = (x161<=((x162<x163)-x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x165 = 15U;
	int32_t x167 = INT32_MIN;
	static uint8_t x168 = 2U;
	int32_t t32 = 284398;

	t32 = (x165<=((x166<x167)-x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x169 = -1LL;
	int32_t x170 = -8;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = 195095U;
	volatile int32_t t33 = 0;

	t33 = (x169<=((x170<x171)-x172));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x173 = 1710U;
	static uint64_t x175 = 960LLU;
	uint16_t x176 = 268U;
	volatile int32_t t34 = 98;

	t34 = (x173<=((x174<x175)-x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x177 = 0U;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 289886U;
	int32_t t35 = -61;

	t35 = (x177<=((x178<x179)-x180));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x185 = INT8_MIN;
	int8_t x186 = -22;
	volatile uint16_t x187 = UINT16_MAX;
	int32_t x188 = 0;
	static volatile int32_t t36 = -1321447;

	t36 = (x185<=((x186<x187)-x188));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	static volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 10439342426647294LLU;

	t37 = (x189<=((x190<x191)-x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x193 = 95943262048260LLU;
	uint8_t x194 = 8U;
	int64_t x195 = -1LL;
	int32_t x196 = -110247525;

	t38 = (x193<=((x194<x195)-x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x197 = 1;
	volatile uint16_t x198 = 24767U;
	uint16_t x199 = 7071U;
	int32_t x200 = -1;

	t39 = (x197<=((x198<x199)-x200));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = INT64_MAX;
	uint64_t x206 = UINT64_MAX;
	uint32_t x208 = 12068U;
	int32_t t40 = 8;

	t40 = (x205<=((x206<x207)-x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x209 = INT32_MIN;
	static int16_t x210 = -1;
	uint16_t x211 = 0U;
	int32_t x212 = -10802;
	volatile int32_t t41 = 7;

	t41 = (x209<=((x210<x211)-x212));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = UINT64_MAX;
	uint32_t x218 = 167819U;
	volatile int8_t x219 = INT8_MAX;
	static int32_t x220 = -8;

	t42 = (x217<=((x218<x219)-x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x221 = INT32_MIN;
	volatile int8_t x222 = -1;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	static volatile int32_t t43 = -24933421;

	t43 = (x221<=((x222<x223)-x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x226 = -1LL;
	static int32_t x227 = -1;
	static volatile int8_t x228 = 0;

	t44 = (x225<=((x226<x227)-x228));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x229 = -1;
	int32_t x231 = -1;
	volatile int16_t x232 = INT16_MAX;
	int32_t t45 = -244129;

	t45 = (x229<=((x230<x231)-x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = INT64_MIN;
	uint32_t x234 = 233566214U;
	uint32_t x236 = 14406U;
	int32_t t46 = 377;

	t46 = (x233<=((x234<x235)-x236));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x238 = 11221033U;
	int8_t x240 = -1;

	t47 = (x237<=((x238<x239)-x240));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x242 = 47258LL;
	uint16_t x244 = 6228U;
	static int32_t t48 = -1;

	t48 = (x241<=((x242<x243)-x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = 13U;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = -1LL;
	int8_t x248 = -14;
	int32_t t49 = 52477;

	t49 = (x245<=((x246<x247)-x248));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = INT32_MAX;
	static int32_t x250 = INT32_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t50 = 12273098;

	t50 = (x249<=((x250<x251)-x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = -1;
	volatile uint16_t x254 = UINT16_MAX;
	static int8_t x256 = INT8_MIN;

	t51 = (x253<=((x254<x255)-x256));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x258 = INT32_MIN;
	uint64_t x259 = 2615617786343LLU;
	int16_t x260 = INT16_MAX;

	t52 = (x257<=((x258<x259)-x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	int32_t t53 = -440;

	t53 = (x261<=((x262<x263)-x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x265 = INT8_MIN;
	static volatile int16_t x267 = -1;
	int32_t t54 = -312839460;

	t54 = (x265<=((x266<x267)-x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x269 = 3U;
	uint8_t x270 = 0U;
	int8_t x271 = -1;
	volatile uint8_t x272 = UINT8_MAX;
	volatile int32_t t55 = -29;

	t55 = (x269<=((x270<x271)-x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = -427;
	static int64_t x278 = 1525833466470618LL;
	int8_t x279 = -1;
	volatile int32_t t56 = 2;

	t56 = (x277<=((x278<x279)-x280));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = INT32_MAX;
	static uint8_t x282 = 0U;
	volatile int8_t x283 = -26;
	volatile uint16_t x284 = 167U;
	volatile int32_t t57 = -361494;

	t57 = (x281<=((x282<x283)-x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = 1710987LLU;
	static volatile int32_t t58 = 117040207;

	t58 = (x285<=((x286<x287)-x288));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x291 = 5820U;
	uint16_t x292 = 28785U;
	volatile int32_t t59 = 580475;

	t59 = (x289<=((x290<x291)-x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x293 = 6U;
	int32_t x294 = INT32_MAX;
	int8_t x295 = 6;
	volatile uint32_t x296 = UINT32_MAX;
	static int32_t t60 = -350;

	t60 = (x293<=((x294<x295)-x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x297 = 2856LL;
	int8_t x298 = -1;
	static uint16_t x299 = 1U;
	static volatile int8_t x300 = -1;
	int32_t t61 = 104;

	t61 = (x297<=((x298<x299)-x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	int32_t x302 = -1;
	uint32_t x303 = 10989U;
	static int32_t x304 = -392607113;

	t62 = (x301<=((x302<x303)-x304));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x305 = 1U;
	static int16_t x306 = -1;
	static int16_t x307 = INT16_MAX;
	int32_t x308 = INT32_MAX;

	t63 = (x305<=((x306<x307)-x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	volatile int32_t x311 = -1;
	int16_t x312 = -6;
	int32_t t64 = 919872178;

	t64 = (x309<=((x310<x311)-x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t65 = -10;

	t65 = (x317<=((x318<x319)-x320));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x321 = -1LL;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int8_t x324 = -5;
	static volatile int32_t t66 = 22;

	t66 = (x321<=((x322<x323)-x324));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = 44637515LLU;
	uint64_t x327 = 1449202851888LLU;
	static uint8_t x328 = 2U;
	volatile int32_t t67 = 56316;

	t67 = (x325<=((x326<x327)-x328));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = -9;
	uint8_t x330 = 69U;
	int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MAX;
	static volatile int32_t t68 = -1;

	t68 = (x329<=((x330<x331)-x332));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x335 = INT32_MIN;
	static int8_t x336 = -1;
	volatile int32_t t69 = 134224268;

	t69 = (x333<=((x334<x335)-x336));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x349 = INT64_MIN;
	uint64_t x350 = 397457LLU;
	uint32_t x352 = 1590745780U;
	int32_t t70 = 42;

	t70 = (x349<=((x350<x351)-x352));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x353 = INT32_MIN;
	uint32_t x355 = 25409241U;
	static uint32_t x356 = 0U;
	volatile int32_t t71 = 433712;

	t71 = (x353<=((x354<x355)-x356));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = 52;
	static int64_t x358 = -10612922351161LL;
	int64_t x359 = INT64_MAX;
	volatile int16_t x360 = INT16_MIN;

	t72 = (x357<=((x358<x359)-x360));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x361 = -216;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t73 = -295694850;

	t73 = (x361<=((x362<x363)-x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x366 = -1;
	int32_t x367 = INT32_MAX;
	uint32_t x368 = 3794584U;

	t74 = (x365<=((x366<x367)-x368));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x369 = 316971777777LLU;
	int8_t x370 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t75 = 121;

	t75 = (x369<=((x370<x371)-x372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x373 = -1;
	int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

	t76 = (x373<=((x374<x375)-x376));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x377 = 0;
	int16_t x379 = 699;
	volatile uint8_t x380 = UINT8_MAX;

	t77 = (x377<=((x378<x379)-x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = 2U;
	int32_t x383 = INT32_MAX;
	int64_t x384 = -1LL;
	static int32_t t78 = 8326895;

	t78 = (x381<=((x382<x383)-x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x385 = 1575105025094770586LLU;
	static volatile uint64_t x386 = 19237132232678LLU;
	volatile int32_t x388 = -1;

	t79 = (x385<=((x386<x387)-x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = INT32_MIN;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t80 = -24010707;

	t80 = (x389<=((x390<x391)-x392));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x393 = INT32_MIN;
	volatile uint16_t x394 = UINT16_MAX;
	static uint8_t x395 = 8U;

	t81 = (x393<=((x394<x395)-x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int32_t t82 = 20954090;

	t82 = (x397<=((x398<x399)-x400));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x401 = -1257;
	static int16_t x402 = INT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	static volatile int32_t t83 = 11063494;

	t83 = (x401<=((x402<x403)-x404));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x405 = -1;
	int64_t x406 = INT64_MIN;
	volatile uint16_t x408 = 208U;

	t84 = (x405<=((x406<x407)-x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = 11;
	uint32_t x410 = 145U;
	int32_t x411 = INT32_MIN;
	int32_t t85 = 1;

	t85 = (x409<=((x410<x411)-x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = INT16_MAX;
	uint16_t x414 = 1U;
	static int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t86 = -344;

	t86 = (x413<=((x414<x415)-x416));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = -2;
	static int32_t x420 = -104;
	int32_t t87 = 527665678;

	t87 = (x417<=((x418<x419)-x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x421 = -1LL;
	int32_t x422 = INT32_MIN;
	static volatile uint64_t x423 = UINT64_MAX;
	uint16_t x424 = 2U;
	volatile int32_t t88 = 453861;

	t88 = (x421<=((x422<x423)-x424));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = -13196103762887LL;
	volatile int32_t x427 = INT32_MAX;
	volatile int16_t x428 = INT16_MIN;
	int32_t t89 = -25898;

	t89 = (x425<=((x426<x427)-x428));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t t90 = -14987397;

	t90 = (x429<=((x430<x431)-x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = -26;
	static int64_t x435 = 7079871173LL;
	volatile int8_t x436 = 13;
	volatile int32_t t91 = 1;

	t91 = (x433<=((x434<x435)-x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MAX;
	int32_t x439 = INT32_MIN;
	static uint64_t x440 = UINT64_MAX;
	int32_t t92 = -457;

	t92 = (x437<=((x438<x439)-x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x441 = 3U;
	int16_t x443 = 10081;
	int32_t x444 = -1;
	int32_t t93 = -3708;

	t93 = (x441<=((x442<x443)-x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MAX;
	uint32_t x446 = 41693137U;
	int32_t x448 = 192328;
	volatile int32_t t94 = 211;

	t94 = (x445<=((x446<x447)-x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = INT16_MIN;
	static int8_t x454 = INT8_MIN;
	static int16_t x456 = -12;
	int32_t t95 = -64057;

	t95 = (x453<=((x454<x455)-x456));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x457 = 42U;
	volatile int8_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	int32_t t96 = 272053;

	t96 = (x457<=((x458<x459)-x460));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = -2;
	static int8_t x463 = INT8_MAX;
	int64_t x464 = 5LL;
	static volatile int32_t t97 = -62460765;

	t97 = (x461<=((x462<x463)-x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = -1;
	int16_t x467 = -1;
	static uint32_t x468 = 1U;
	volatile int32_t t98 = 414673462;

	t98 = (x465<=((x466<x467)-x468));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x470 = -12;
	int16_t x471 = INT16_MIN;
	static int64_t x472 = 320LL;
	static volatile int32_t t99 = -119425;

	t99 = (x469<=((x470<x471)-x472));

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

