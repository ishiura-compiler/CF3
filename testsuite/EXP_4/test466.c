#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
static int32_t t0 = 39243949;
int32_t x25 = INT32_MIN;
volatile uint32_t x27 = 1422970U;
uint32_t x31 = 2830U;
uint16_t x32 = UINT16_MAX;
int32_t x42 = -253513;
static int32_t x46 = 440;
static int8_t x52 = -1;
volatile int64_t x57 = 7071724364LL;
static volatile int64_t t8 = 1784LL;
static volatile int32_t x65 = INT32_MIN;
volatile int32_t t9 = 2;
volatile uint16_t x77 = 5U;
int16_t x98 = INT16_MIN;
int32_t t15 = -110750;
uint64_t x124 = 2397651LLU;
static int16_t x134 = 0;
static int8_t x139 = 0;
volatile int16_t x141 = -74;
static uint16_t x162 = 27U;
static int32_t t25 = -8192;
uint16_t x177 = 348U;
volatile int8_t x184 = INT8_MIN;
uint32_t x201 = 9U;
volatile int16_t x203 = -1;
uint8_t x206 = 97U;
uint64_t t33 = 3606754812366292LLU;
static int32_t x221 = INT32_MIN;
volatile int32_t t35 = -377;
int16_t x225 = INT16_MAX;
static uint64_t x227 = 62LLU;
int8_t x229 = INT8_MIN;
uint64_t x231 = 5LLU;
int32_t t37 = 285478414;
static uint64_t x250 = UINT64_MAX;
volatile uint8_t x252 = UINT8_MAX;
int16_t x259 = -1;
int8_t x270 = INT8_MIN;
int32_t t43 = -42;
volatile int8_t x276 = -24;
int32_t t45 = 4969;
static int64_t x284 = INT64_MIN;
uint8_t x285 = 6U;
int8_t x287 = INT8_MAX;
static volatile int8_t x293 = INT8_MAX;
static volatile int32_t t49 = -63;
int64_t x300 = -245249LL;
static uint8_t x301 = 19U;
int8_t x306 = 39;
uint64_t x326 = UINT64_MAX;
static uint32_t x330 = 1240202055U;
static int16_t x331 = 3908;
int8_t x332 = -1;
volatile int32_t t56 = -48181598;
static volatile int16_t x359 = INT16_MIN;
static int64_t x368 = 135713363641LL;
int16_t x380 = INT16_MIN;
int8_t x381 = INT8_MIN;
uint8_t x382 = 32U;
uint32_t x404 = 1155U;
uint32_t x411 = 60144U;
int32_t x414 = INT32_MIN;
uint64_t t68 = 4219517378LLU;
int64_t x429 = INT64_MIN;
uint64_t x430 = 60987598LLU;
volatile int64_t t69 = 1821757315913623LL;
int32_t t70 = 0;
int64_t x441 = INT64_MAX;
int16_t x446 = INT16_MAX;
uint64_t x461 = 15702317LLU;
uint64_t x462 = 86297577051LLU;
int16_t x472 = 2918;
volatile uint32_t t76 = 103881U;
int64_t x474 = INT64_MIN;
uint32_t x478 = UINT32_MAX;
int32_t t79 = 821277;
int8_t x486 = INT8_MIN;
int8_t x502 = INT8_MIN;
int16_t x503 = -21;
int32_t x504 = -1;
int32_t t82 = 67780750;
volatile int16_t x507 = -1;
static int8_t x511 = 0;
static int32_t x513 = INT32_MIN;
int32_t x514 = INT32_MIN;
volatile uint16_t x516 = UINT16_MAX;
volatile int8_t x519 = INT8_MIN;
uint64_t x522 = UINT64_MAX;
int64_t x534 = INT64_MAX;
int32_t t89 = 137024;
volatile int32_t x546 = -1;
int16_t x550 = INT16_MIN;
int32_t x551 = -6825;
volatile int32_t t92 = -6;
int32_t x554 = -1;
uint64_t x555 = UINT64_MAX;
int32_t x556 = INT32_MIN;
int32_t t93 = 4410255;
uint16_t x558 = 0U;
int32_t x561 = INT32_MIN;
uint64_t x569 = 448825123009580LLU;
uint16_t x578 = 12U;
static int64_t x579 = 2317618809516LL;
int64_t x582 = 202847181741LL;
uint64_t x583 = 97071686926466328LLU;
uint16_t x584 = 227U;


void f0(void) {
	int32_t x6 = -1;
	uint16_t x7 = 1U;
	int64_t x8 = INT64_MIN;

	t0 = (x5&(x6<=(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = 118966047LLU;
	static int8_t x20 = -1;
	volatile int32_t t1 = 47;

	t1 = (x17&(x18<=(x19*x20)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x26 = 2;
	int16_t x28 = -9;
	int32_t t2 = 523252;

	t2 = (x25&(x26<=(x27*x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = -342;
	static volatile int32_t t3 = 8;

	t3 = (x29&(x30<=(x31*x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x37 = 124493U;
	uint8_t x38 = 45U;
	uint8_t x39 = 117U;
	int16_t x40 = -1;
	volatile uint32_t t4 = 36140018U;

	t4 = (x37&(x38<=(x39*x40)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 3251385941463LLU;
	volatile uint64_t x43 = 2830LLU;
	static uint32_t x44 = UINT32_MAX;
	uint64_t t5 = 31308727884LLU;

	t5 = (x41&(x42<=(x43*x44)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	static uint16_t x47 = 17U;
	static int32_t x48 = -1;
	volatile int32_t t6 = -4;

	t6 = (x45&(x46<=(x47*x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	static int32_t t7 = 111056;

	t7 = (x49&(x50<=(x51*x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x58 = 0U;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = UINT32_MAX;

	t8 = (x57&(x58<=(x59*x60)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x66 = INT64_MAX;
	volatile int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;

	t9 = (x65&(x66<=(x67*x68)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -6;
	uint8_t x71 = 19U;
	uint32_t x72 = 14848255U;
	static int32_t t10 = 15302;

	t10 = (x69&(x70<=(x71*x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x73 = UINT64_MAX;
	static int8_t x74 = INT8_MIN;
	volatile uint8_t x75 = 32U;
	uint32_t x76 = 1U;
	static volatile uint64_t t11 = 64012LLU;

	t11 = (x73&(x74<=(x75*x76)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x78 = 482215058;
	int32_t x79 = -289;
	static uint16_t x80 = 10U;
	int32_t t12 = -512766;

	t12 = (x77&(x78<=(x79*x80)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x85 = INT16_MIN;
	static int32_t x86 = -1;
	int8_t x87 = INT8_MAX;
	static volatile uint64_t x88 = 102211318887LLU;
	volatile int32_t t13 = 1;

	t13 = (x85&(x86<=(x87*x88)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = 2445107;
	static uint8_t x90 = 109U;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = -1LL;
	int32_t t14 = 35736860;

	t14 = (x89&(x90<=(x91*x92)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MIN;
	int64_t x99 = -513772LL;
	volatile uint64_t x100 = UINT64_MAX;

	t15 = (x97&(x98<=(x99*x100)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = -1;
	int32_t x116 = -59947678;
	volatile int32_t t16 = 95941;

	t16 = (x113&(x114<=(x115*x116)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x121 = INT16_MIN;
	uint64_t x122 = 8491527783203477165LLU;
	static int8_t x123 = -7;
	static int32_t t17 = -4624;

	t17 = (x121&(x122<=(x123*x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x125 = INT16_MIN;
	static uint8_t x126 = 1U;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t18 = -106673274;

	t18 = (x125&(x126<=(x127*x128)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x129 = -1;
	uint16_t x130 = 6U;
	uint16_t x131 = 446U;
	int32_t x132 = -1;
	volatile int32_t t19 = -9;

	t19 = (x129&(x130<=(x131*x132)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x133 = INT64_MIN;
	uint32_t x135 = UINT32_MAX;
	volatile uint64_t x136 = 1124943364651114LLU;
	static volatile int64_t t20 = -441341488540813577LL;

	t20 = (x133&(x134<=(x135*x136)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x137 = -122291;
	int16_t x138 = -1;
	volatile int8_t x140 = INT8_MAX;
	static int32_t t21 = -2020808;

	t21 = (x137&(x138<=(x139*x140)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x142 = INT64_MIN;
	int32_t x143 = 65127192;
	int8_t x144 = 1;
	int32_t t22 = 7362;

	t22 = (x141&(x142<=(x143*x144)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x149 = INT32_MAX;
	static uint64_t x150 = 2LLU;
	static int16_t x151 = 3222;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t23 = -43537;

	t23 = (x149&(x150<=(x151*x152)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x161 = 115561LLU;
	int8_t x163 = 1;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t24 = 4131902031044713LLU;

	t24 = (x161&(x162<=(x163*x164)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = 14U;
	static int32_t x166 = -4008857;
	volatile uint64_t x167 = 45971092LLU;
	static volatile int16_t x168 = -1;

	t25 = (x165&(x166<=(x167*x168)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x178 = -1;
	int8_t x179 = -38;
	static volatile int32_t x180 = -2;
	int32_t t26 = 5;

	t26 = (x177&(x178<=(x179*x180)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int64_t x183 = 107037981LL;
	volatile int64_t t27 = -245821LL;

	t27 = (x181&(x182<=(x183*x184)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x189 = UINT8_MAX;
	uint16_t x190 = 5U;
	static uint64_t x191 = UINT64_MAX;
	int16_t x192 = 471;
	int32_t t28 = -900530;

	t28 = (x189&(x190<=(x191*x192)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = -1LL;
	uint16_t x195 = 3151U;
	uint64_t x196 = 2882875792911LLU;
	volatile int32_t t29 = 3844;

	t29 = (x193&(x194<=(x195*x196)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x197 = INT32_MIN;
	int64_t x198 = -1LL;
	volatile uint16_t x199 = 5U;
	uint32_t x200 = 476410538U;
	int32_t t30 = 44369400;

	t30 = (x197&(x198<=(x199*x200)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x202 = 1309079047LL;
	static int16_t x204 = INT16_MIN;
	uint32_t t31 = 107520U;

	t31 = (x201&(x202<=(x203*x204)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -1LL;
	volatile uint32_t t32 = 3U;

	t32 = (x205&(x206<=(x207*x208)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x209 = 2LLU;
	volatile int16_t x210 = -1;
	volatile int64_t x211 = 1640210096482712LL;
	uint16_t x212 = 3U;

	t33 = (x209&(x210<=(x211*x212)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	volatile int16_t x215 = INT16_MIN;
	static uint8_t x216 = 7U;
	static int64_t t34 = -260466234452235695LL;

	t34 = (x213&(x214<=(x215*x216)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x222 = INT64_MIN;
	uint32_t x223 = UINT32_MAX;
	static int16_t x224 = INT16_MIN;

	t35 = (x221&(x222<=(x223*x224)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x226 = INT32_MIN;
	uint64_t x228 = 459087301LLU;
	int32_t t36 = 5;

	t36 = (x225&(x226<=(x227*x228)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x230 = 4832U;
	int32_t x232 = INT32_MIN;

	t37 = (x229&(x230<=(x231*x232)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x245 = 9;
	int8_t x246 = INT8_MAX;
	volatile uint16_t x247 = UINT16_MAX;
	volatile uint16_t x248 = 5U;
	int32_t t38 = -156220;

	t38 = (x245&(x246<=(x247*x248)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x249 = 1LLU;
	static int8_t x251 = -1;
	uint64_t t39 = 1LLU;

	t39 = (x249&(x250<=(x251*x252)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x257 = -1LL;
	static volatile uint16_t x258 = UINT16_MAX;
	int8_t x260 = INT8_MAX;
	volatile int64_t t40 = 153755LL;

	t40 = (x257&(x258<=(x259*x260)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x261 = 28145LL;
	int16_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t41 = -14LL;

	t41 = (x261&(x262<=(x263*x264)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x265 = 1398U;
	int64_t x266 = -981591LL;
	uint64_t x267 = 86872570489198LLU;
	volatile int32_t x268 = -2009092;
	volatile int32_t t42 = 2;

	t42 = (x265&(x266<=(x267*x268)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = 40172958;
	uint16_t x271 = UINT16_MAX;
	volatile int8_t x272 = 0;

	t43 = (x269&(x270<=(x271*x272)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MAX;
	int64_t t44 = 7896472357LL;

	t44 = (x273&(x274<=(x275*x276)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x277 = 0U;
	static int8_t x278 = 0;
	uint8_t x279 = 7U;
	int32_t x280 = -1;

	t45 = (x277&(x278<=(x279*x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	int8_t x283 = 0;
	volatile int32_t t46 = -2023;

	t46 = (x281&(x282<=(x283*x284)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x286 = 111006;
	int16_t x288 = INT16_MIN;
	volatile int32_t t47 = -7;

	t47 = (x285&(x286<=(x287*x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x289 = -662LL;
	int32_t x290 = -1;
	uint16_t x291 = 776U;
	static int8_t x292 = INT8_MAX;
	volatile int64_t t48 = -5752LL;

	t48 = (x289&(x290<=(x291*x292)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x294 = 1U;
	int8_t x295 = INT8_MAX;
	volatile int64_t x296 = -1LL;

	t49 = (x293&(x294<=(x295*x296)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	int64_t x298 = -37041LL;
	int64_t x299 = -1LL;
	int32_t t50 = 1;

	t50 = (x297&(x298<=(x299*x300)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x302 = 16U;
	static int8_t x303 = -1;
	static volatile int8_t x304 = 1;
	int32_t t51 = -13;

	t51 = (x301&(x302<=(x303*x304)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x305 = -7;
	static uint32_t x307 = 17630U;
	uint32_t x308 = 168720208U;
	int32_t t52 = 900369;

	t52 = (x305&(x306<=(x307*x308)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x321 = -1;
	volatile int64_t x322 = -803958LL;
	uint8_t x323 = 4U;
	uint8_t x324 = 14U;
	int32_t t53 = -31496505;

	t53 = (x321&(x322<=(x323*x324)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x325 = INT16_MIN;
	uint32_t x327 = 4U;
	volatile int32_t x328 = INT32_MAX;
	volatile int32_t t54 = 115;

	t54 = (x325&(x326<=(x327*x328)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x329 = INT64_MIN;
	int64_t t55 = 53686125274LL;

	t55 = (x329&(x330<=(x331*x332)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x349 = 13;
	volatile int8_t x350 = -15;
	uint32_t x351 = 90062269U;
	uint64_t x352 = 2399945460710217540LLU;

	t56 = (x349&(x350<=(x351*x352)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x354 = 107594894791773LL;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -31;
	static uint32_t t57 = 48406U;

	t57 = (x353&(x354<=(x355*x356)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x357 = 0;
	int64_t x358 = 141817925751132LL;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t58 = 148;

	t58 = (x357&(x358<=(x359*x360)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x365 = 1;
	uint32_t x366 = 6279U;
	int8_t x367 = INT8_MIN;
	static volatile int32_t t59 = 125732;

	t59 = (x365&(x366<=(x367*x368)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x373 = -84;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -7;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t60 = -9085613;

	t60 = (x373&(x374<=(x375*x376)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = -58;
	int8_t x379 = INT8_MIN;
	volatile int32_t t61 = -1;

	t61 = (x377&(x378<=(x379*x380)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x383 = -1;
	static volatile int16_t x384 = INT16_MIN;
	int32_t t62 = 15;

	t62 = (x381&(x382<=(x383*x384)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x397 = 6U;
	static int64_t x398 = INT64_MAX;
	uint64_t x399 = 636094LLU;
	volatile int32_t x400 = INT32_MAX;
	int32_t t63 = 758954940;

	t63 = (x397&(x398<=(x399*x400)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x401 = INT32_MAX;
	int8_t x402 = 9;
	static int32_t x403 = INT32_MAX;
	volatile int32_t t64 = -2916066;

	t64 = (x401&(x402<=(x403*x404)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x405 = INT32_MIN;
	static int16_t x406 = 18;
	int64_t x407 = 2617164LL;
	static int8_t x408 = -1;
	volatile int32_t t65 = -15015;

	t65 = (x405&(x406<=(x407*x408)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x409 = INT8_MAX;
	int32_t x410 = INT32_MIN;
	uint16_t x412 = 57U;
	volatile int32_t t66 = 1638;

	t66 = (x409&(x410<=(x411*x412)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x413 = 255U;
	int16_t x415 = -1;
	volatile uint32_t x416 = 141739419U;
	uint32_t t67 = 454123U;

	t67 = (x413&(x414<=(x415*x416)));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x425 = 464315LLU;
	int32_t x426 = -121945632;
	uint8_t x427 = 0U;
	uint32_t x428 = 0U;

	t68 = (x425&(x426<=(x427*x428)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x431 = -1;
	static uint16_t x432 = 39U;

	t69 = (x429&(x430<=(x431*x432)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x433 = INT32_MIN;
	static uint16_t x434 = UINT16_MAX;
	uint16_t x435 = 164U;
	static int8_t x436 = -1;

	t70 = (x433&(x434<=(x435*x436)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x442 = -1;
	int8_t x443 = 1;
	volatile uint8_t x444 = 20U;
	volatile int64_t t71 = -14951243915355616LL;

	t71 = (x441&(x442<=(x443*x444)));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x445 = -1;
	uint16_t x447 = UINT16_MAX;
	volatile int8_t x448 = INT8_MIN;
	volatile int32_t t72 = 3795;

	t72 = (x445&(x446<=(x447*x448)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x449 = INT16_MIN;
	static int8_t x450 = 6;
	int64_t x451 = -6407440659116LL;
	volatile uint8_t x452 = 3U;
	static int32_t t73 = -1;

	t73 = (x449&(x450<=(x451*x452)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x463 = 6LLU;
	int64_t x464 = -1LL;
	volatile uint64_t t74 = 8087694781979564124LLU;

	t74 = (x461&(x462<=(x463*x464)));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x465 = UINT16_MAX;
	volatile int16_t x466 = 102;
	int8_t x467 = INT8_MIN;
	int8_t x468 = INT8_MIN;
	volatile int32_t t75 = -126719826;

	t75 = (x465&(x466<=(x467*x468)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x469 = 262U;
	int16_t x470 = INT16_MAX;
	uint32_t x471 = 23U;

	t76 = (x469&(x470<=(x471*x472)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x473 = 22U;
	uint16_t x475 = UINT16_MAX;
	uint64_t x476 = 424975LLU;
	volatile int32_t t77 = -4027424;

	t77 = (x473&(x474<=(x475*x476)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x477 = 2275U;
	int16_t x479 = -46;
	int8_t x480 = -1;
	volatile int32_t t78 = 3;

	t78 = (x477&(x478<=(x479*x480)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x481 = 0;
	int64_t x482 = -1LL;
	int32_t x483 = -922;
	volatile int16_t x484 = 100;

	t79 = (x481&(x482<=(x483*x484)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x485 = INT64_MIN;
	int32_t x487 = 1900303;
	uint32_t x488 = 57943482U;
	static volatile int64_t t80 = 93152402LL;

	t80 = (x485&(x486<=(x487*x488)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x497 = -1LL;
	int64_t x498 = INT64_MIN;
	volatile int64_t x499 = 948577715204LL;
	uint16_t x500 = 8085U;
	volatile int64_t t81 = -4717712928LL;

	t81 = (x497&(x498<=(x499*x500)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x501 = -1;

	t82 = (x501&(x502<=(x503*x504)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x505 = -3;
	int8_t x506 = -1;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t83 = 174387;

	t83 = (x505&(x506<=(x507*x508)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x509 = 58;
	static uint8_t x510 = 17U;
	int16_t x512 = INT16_MAX;
	volatile int32_t t84 = 477;

	t84 = (x509&(x510<=(x511*x512)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x515 = 651;
	volatile int32_t t85 = 7340;

	t85 = (x513&(x514<=(x515*x516)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x517 = -93;
	int8_t x518 = -4;
	int8_t x520 = 15;
	static volatile int32_t t86 = 2166;

	t86 = (x517&(x518<=(x519*x520)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x521 = INT32_MAX;
	int32_t x523 = -1;
	uint32_t x524 = 389U;
	static int32_t t87 = -57754;

	t87 = (x521&(x522<=(x523*x524)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x525 = 0U;
	volatile int16_t x526 = -1;
	static int32_t x527 = 19;
	volatile int64_t x528 = -1LL;
	volatile int32_t t88 = 0;

	t88 = (x525&(x526<=(x527*x528)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x533 = -1;
	uint8_t x535 = 27U;
	int8_t x536 = -11;

	t89 = (x533&(x534<=(x535*x536)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x541 = -89;
	static uint8_t x542 = UINT8_MAX;
	volatile int64_t x543 = 11164917518LL;
	static uint32_t x544 = 446026705U;
	volatile int32_t t90 = 300614;

	t90 = (x541&(x542<=(x543*x544)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x545 = 2U;
	uint8_t x547 = 41U;
	uint16_t x548 = UINT16_MAX;
	int32_t t91 = 3;

	t91 = (x545&(x546<=(x547*x548)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x549 = INT16_MIN;
	uint8_t x552 = 1U;

	t92 = (x549&(x550<=(x551*x552)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x553 = -1;

	t93 = (x553&(x554<=(x555*x556)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x557 = INT64_MIN;
	static int8_t x559 = INT8_MIN;
	static int8_t x560 = 31;
	int64_t t94 = 3LL;

	t94 = (x557&(x558<=(x559*x560)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x562 = 36U;
	uint64_t x563 = 131918LLU;
	uint32_t x564 = UINT32_MAX;
	int32_t t95 = -60;

	t95 = (x561&(x562<=(x563*x564)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x570 = 30U;
	int64_t x571 = -1LL;
	int8_t x572 = 0;
	volatile uint64_t t96 = 772495LLU;

	t96 = (x569&(x570<=(x571*x572)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x577 = 40U;
	int64_t x580 = -14561LL;
	int32_t t97 = -8;

	t97 = (x577&(x578<=(x579*x580)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x581 = INT64_MIN;
	int64_t t98 = 482LL;

	t98 = (x581&(x582<=(x583*x584)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x585 = -1LL;
	int64_t x586 = INT64_MIN;
	uint16_t x587 = 0U;
	volatile int16_t x588 = 4470;
	int64_t t99 = 122716582LL;

	t99 = (x585&(x586<=(x587*x588)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

