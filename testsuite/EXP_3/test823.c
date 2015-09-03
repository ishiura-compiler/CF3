#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
volatile int64_t t3 = -2551123843519LL;
int32_t x34 = INT32_MAX;
static int32_t x35 = -66;
uint32_t x44 = UINT32_MAX;
static volatile uint32_t x55 = 432920877U;
int64_t t10 = 240614159LL;
uint64_t x61 = 117835492270401LLU;
uint8_t x65 = UINT8_MAX;
int32_t x66 = INT32_MIN;
int32_t t12 = -104971;
int16_t x70 = -1;
uint32_t t14 = 5076453U;
volatile int8_t x81 = INT8_MAX;
uint32_t x83 = UINT32_MAX;
uint32_t t16 = 31102984U;
int16_t x85 = INT16_MAX;
volatile int32_t x90 = INT32_MAX;
volatile uint8_t x98 = 20U;
static int16_t x99 = -7002;
uint64_t x100 = 440576LLU;
static volatile int32_t x102 = 8474;
int64_t x104 = -675107LL;
int16_t x109 = 7829;
int8_t x120 = -29;
static int64_t t24 = 5196310192241LL;
volatile int64_t x134 = -1LL;
int16_t x135 = 9230;
static uint64_t x137 = 17241172080618LLU;
int8_t x144 = INT8_MAX;
volatile uint32_t t29 = 11035U;
uint8_t x149 = UINT8_MAX;
static uint8_t x154 = 65U;
static uint8_t x159 = 2U;
volatile int32_t x167 = -1;
uint64_t x170 = 40154442965600LLU;
int8_t x171 = INT8_MIN;
uint32_t x177 = 34U;
uint32_t x180 = UINT32_MAX;
static uint32_t t37 = 44098686U;
uint16_t x182 = 282U;
int16_t x185 = INT16_MIN;
uint32_t x192 = 4560437U;
static uint32_t t40 = 110990368U;
static int8_t x197 = -1;
int8_t x220 = 5;
volatile int64_t t46 = -37LL;
int32_t x225 = INT32_MIN;
int16_t x226 = -1;
uint32_t x238 = 1674U;
uint64_t x240 = 63140043879607LLU;
volatile uint64_t x241 = UINT64_MAX;
int32_t x249 = -1203612;
static uint64_t t53 = 16585043LLU;
uint64_t x263 = UINT64_MAX;
uint32_t x264 = 44510635U;
int64_t x270 = INT64_MIN;
uint16_t x271 = 3U;
uint64_t t56 = 269LLU;
int8_t x284 = INT8_MIN;
uint16_t x289 = UINT16_MAX;
volatile uint64_t x291 = UINT64_MAX;
int32_t x293 = INT32_MIN;
uint64_t x299 = 7LLU;
static volatile int32_t x314 = -1;
uint64_t t66 = 111109511LLU;
int16_t x326 = INT16_MIN;
volatile int64_t t70 = -386LL;
volatile int8_t x333 = INT8_MAX;
static int32_t x359 = -82005577;
int64_t t73 = 41268288030785205LL;
uint32_t x366 = 246233U;
int32_t x368 = INT32_MIN;
uint32_t t74 = 9U;
static int64_t x370 = 54219581LL;
int32_t x371 = INT32_MIN;
int8_t x381 = INT8_MAX;
static volatile int64_t t77 = -89LL;
volatile int8_t x394 = INT8_MAX;
static int64_t x400 = INT64_MIN;
int64_t t79 = 85063367506614807LL;
int32_t x401 = INT32_MIN;
int32_t x407 = -1;
static uint32_t x423 = 7U;
uint32_t t82 = 1499U;
int64_t x433 = -1LL;
static volatile int64_t t84 = 20LL;
int16_t x448 = -435;
volatile int32_t x453 = INT32_MIN;
int16_t x462 = -1;
int32_t x469 = -1;
static volatile uint64_t t89 = 6335252100LLU;
static int32_t x474 = INT32_MAX;
static uint64_t x475 = 8425929LLU;
int64_t t91 = -52633LL;
int32_t x481 = INT32_MAX;
int8_t x483 = -1;
int32_t x485 = INT32_MIN;
static int64_t x486 = INT64_MIN;
static volatile int64_t x487 = -1LL;
int64_t t93 = 704130382LL;
volatile uint64_t t94 = 249165703702777317LLU;
static uint32_t t96 = 93U;
int64_t x508 = INT64_MIN;
uint8_t x509 = 48U;
int16_t x510 = -1;
volatile int32_t t99 = 184884523;


void f0(void) {
	uint8_t x6 = UINT8_MAX;
	uint64_t x7 = 235LLU;
	static int8_t x8 = INT8_MAX;
	volatile uint64_t t0 = 165293676904306LLU;

	t0 = ((x5|x6)/(x7%x8));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x13 = 13;
	volatile int8_t x14 = -7;
	static uint16_t x15 = 4U;
	int16_t x16 = INT16_MAX;
	volatile int32_t t1 = 4792217;

	t1 = ((x13|x14)/(x15%x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = 117;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	static uint64_t x20 = 118561644790061190LLU;
	volatile uint64_t t2 = 148LLU;

	t2 = ((x17|x18)/(x19%x20));

	if (t2 != 264LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 1;
	int8_t x22 = INT8_MAX;
	volatile uint8_t x23 = 3U;
	int64_t x24 = INT64_MIN;

	t3 = ((x21|x22)/(x23%x24));

	if (t3 != 42LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	volatile int8_t x26 = -1;
	int8_t x27 = -1;
	int32_t x28 = INT32_MAX;
	int32_t t4 = 1724;

	t4 = ((x25|x26)/(x27%x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 426;
	uint64_t x36 = 13LLU;
	static volatile uint64_t t5 = 4422LLU;

	t5 = ((x33|x34)/(x35%x36));

	if (t5 != 1073741823LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -1;
	int16_t x40 = 9;
	volatile uint32_t t6 = 90801993U;

	t6 = ((x37|x38)/(x39%x40));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = -9;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int64_t t7 = 2405LL;

	t7 = ((x41|x42)/(x43%x44));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MAX;
	uint64_t x46 = 12338021207296LLU;
	uint64_t x47 = 58LLU;
	int64_t x48 = INT64_MIN;
	uint64_t t8 = 1203131618LLU;

	t8 = ((x45|x46)/(x47%x48));

	if (t8 != 212748983472LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 1993U;
	volatile int64_t x54 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	int64_t t9 = 2LL;

	t9 = ((x53|x54)/(x55%x56));

	if (t9 != -21304983258LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x57 = -7;
	int64_t x58 = INT64_MIN;
	static uint8_t x59 = 79U;
	int64_t x60 = -6997LL;

	t10 = ((x57|x58)/(x59%x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	int8_t x64 = INT8_MIN;
	uint64_t t11 = 3LLU;

	t11 = ((x61|x62)/(x63%x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MAX;

	t12 = ((x65|x66)/(x67%x68));

	if (t12 != 16777214) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 3U;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	static uint64_t t13 = 8820675343900247525LLU;

	t13 = ((x69|x70)/(x71%x72));

	if (t13 != 8589934596LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	static int32_t x75 = 458269415;
	static volatile uint32_t x76 = 49U;

	t14 = ((x73|x74)/(x75%x76));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x77 = 872776U;
	static uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = -5;
	static int32_t x80 = INT32_MAX;
	uint32_t t15 = 413780891U;

	t15 = ((x77|x78)/(x79%x80));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x82 = INT16_MAX;
	int16_t x84 = INT16_MIN;

	t16 = ((x81|x82)/(x83%x84));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	uint64_t x88 = 5530309168997311LLU;
	volatile uint64_t t17 = 25214061LLU;

	t17 = ((x85|x86)/(x87%x88));

	if (t17 != 4243LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	static int64_t x91 = -1LL;
	volatile int64_t x92 = -258694212604321LL;
	uint64_t t18 = 239768835444166737LLU;

	t18 = ((x89|x90)/(x91%x92));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MIN;
	volatile int16_t x94 = -521;
	int32_t x95 = 117314064;
	uint32_t x96 = 6624U;
	uint32_t t19 = 54943539U;

	t19 = ((x93|x94)/(x95%x96));

	if (t19 != 1420293U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = INT64_MAX;
	uint64_t t20 = 125153639745705LLU;

	t20 = ((x97|x98)/(x99%x100));

	if (t20 != 34721583647124LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	static int8_t x103 = INT8_MAX;
	int64_t t21 = 38068650046LL;

	t21 = ((x101|x102)/(x103%x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x110 = 1;
	volatile uint16_t x111 = 465U;
	uint8_t x112 = 13U;
	static int32_t t22 = -4888385;

	t22 = ((x109|x110)/(x111%x112));

	if (t22 != 782) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -103076992047825686LL;
	int64_t t23 = -1LL;

	t23 = ((x117|x118)/(x119%x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MAX;

	t24 = ((x121|x122)/(x123%x124));

	if (t24 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int64_t x127 = -9189LL;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t25 = 59512769132737LL;

	t25 = ((x125|x126)/(x127%x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	static uint32_t x130 = 6413400U;
	static volatile int16_t x131 = INT16_MIN;
	int16_t x132 = 12416;
	uint32_t t26 = 4U;

	t26 = ((x129|x130)/(x131%x132));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = UINT64_MAX;
	volatile uint64_t x136 = 37LLU;
	volatile uint64_t t27 = 220911LLU;

	t27 = ((x133|x134)/(x135%x136));

	if (t27 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x138 = 18U;
	static int8_t x139 = -1;
	static uint16_t x140 = 3061U;
	static uint64_t t28 = 2081528854870LLU;

	t28 = ((x137|x138)/(x139%x140));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 2541991U;
	volatile int32_t x142 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;

	t29 = ((x141|x142)/(x143%x144));

	if (t29 != 716675213U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -289;
	static int32_t x148 = INT32_MIN;
	static int32_t t30 = -1179;

	t30 = ((x145|x146)/(x147%x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = 78764U;
	volatile uint32_t t31 = 661U;

	t31 = ((x149|x150)/(x151%x152));

	if (t31 != 347149U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = -1;
	int16_t x155 = -6;
	volatile uint32_t x156 = 212765U;
	uint32_t t32 = 37201872U;

	t32 = ((x153|x154)/(x155%x156));

	if (t32 != 46182U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 4;
	volatile uint32_t x158 = 25377826U;
	uint8_t x160 = 3U;
	volatile uint32_t t33 = 807131940U;

	t33 = ((x157|x158)/(x159%x160));

	if (t33 != 12688915U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	uint32_t x163 = 1U;
	static int8_t x164 = -1;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x161|x162)/(x163%x164));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t35 = 87222LL;

	t35 = ((x165|x166)/(x167%x168));

	if (t35 != 2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -941;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile uint64_t t36 = 2011LLU;

	t36 = ((x169|x170)/(x171%x172));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x178 = 6U;
	int8_t x179 = INT8_MAX;

	t37 = ((x177|x178)/(x179%x180));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 279LLU;
	int16_t x183 = 14;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t38 = 40884076504LLU;

	t38 = ((x181|x182)/(x183%x184));

	if (t38 != 20LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x186 = INT32_MIN;
	volatile int16_t x187 = 7716;
	int32_t x188 = INT32_MAX;
	int32_t t39 = 1;

	t39 = ((x185|x186)/(x187%x188));

	if (t39 != -4) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x189 = 12U;
	static uint32_t x190 = UINT32_MAX;
	volatile uint8_t x191 = UINT8_MAX;

	t40 = ((x189|x190)/(x191%x192));

	if (t40 != 16843009U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 6U;
	int64_t x200 = -66342LL;
	volatile uint64_t t41 = 208106955114LLU;

	t41 = ((x197|x198)/(x199%x200));

	if (t41 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t42 = -5;

	t42 = ((x201|x202)/(x203%x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = -5;
	volatile int32_t x207 = 418126018;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t43 = 2329030LL;

	t43 = ((x205|x206)/(x207%x208));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = INT16_MAX;
	uint16_t x210 = 10938U;
	int16_t x211 = -1;
	int16_t x212 = INT16_MIN;
	int32_t t44 = -121;

	t44 = ((x209|x210)/(x211%x212));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	static volatile int32_t x216 = INT32_MIN;
	static volatile int32_t t45 = 14931;

	t45 = ((x213|x214)/(x215%x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	int64_t x219 = 1LL;

	t46 = ((x217|x218)/(x219%x220));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MIN;
	volatile int64_t x222 = -1LL;
	uint16_t x223 = 2290U;
	volatile int64_t x224 = INT64_MIN;
	volatile int64_t t47 = 379LL;

	t47 = ((x221|x222)/(x223%x224));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	int32_t t48 = 25671712;

	t48 = ((x225|x226)/(x227%x228));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -2;
	int8_t x230 = -6;
	int64_t x231 = 31981065LL;
	int64_t x232 = INT64_MAX;
	static volatile int64_t t49 = -444096741395549LL;

	t49 = ((x229|x230)/(x231%x232));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x237 = 25613U;
	int8_t x239 = INT8_MIN;
	volatile uint64_t t50 = 1585LLU;

	t50 = ((x237|x238)/(x239%x240));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x242 = INT32_MAX;
	uint16_t x243 = 2U;
	uint64_t x244 = 24279656LLU;
	uint64_t t51 = 60999424360122LLU;

	t51 = ((x241|x242)/(x243%x244));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 137965081045333LLU;
	uint8_t x246 = 0U;
	int64_t x247 = 13LL;
	volatile uint8_t x248 = UINT8_MAX;
	volatile uint64_t t52 = 2272LLU;

	t52 = ((x245|x246)/(x247%x248));

	if (t52 != 10612698541948LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x250 = INT32_MIN;
	static int64_t x251 = INT64_MIN;
	uint64_t x252 = 2845735LLU;

	t53 = ((x249|x250)/(x251%x252));

	if (t53 != 8646932901883LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 2448035147156035LLU;
	int8_t x258 = 1;
	int8_t x259 = -3;
	volatile int32_t x260 = INT32_MIN;
	uint64_t t54 = 14731774291351LLU;

	t54 = ((x257|x258)/(x259%x260));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = INT64_MIN;
	static int16_t x262 = 579;
	volatile uint64_t t55 = 8712092924417255604LLU;

	t55 = ((x261|x262)/(x263%x264));

	if (t55 != 1713449850565LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x269 = 2945353866937LLU;
	static uint8_t x272 = UINT8_MAX;

	t56 = ((x269|x270)/(x271%x272));

	if (t56 != 3074458327402880915LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MAX;
	int32_t x275 = 9;
	int32_t x276 = INT32_MIN;
	int32_t t57 = -731;

	t57 = ((x273|x274)/(x275%x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = -4;
	static int32_t x279 = -1;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t58 = 2297950;

	t58 = ((x277|x278)/(x279%x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = -1;
	int64_t x282 = -1LL;
	int16_t x283 = 364;
	volatile int64_t t59 = -4239936432LL;

	t59 = ((x281|x282)/(x283%x284));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -1;
	int64_t x286 = -1LL;
	static volatile uint32_t x287 = 45900U;
	int32_t x288 = INT32_MAX;
	volatile int64_t t60 = 14318LL;

	t60 = ((x285|x286)/(x287%x288));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x290 = 13522U;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t61 = 113LLU;

	t61 = ((x289|x290)/(x291%x292));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x294 = -1LL;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	int64_t t62 = 34028268LL;

	t62 = ((x293|x294)/(x295%x296));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x297 = -1;
	volatile uint32_t x298 = 289U;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t63 = 127262424616822LLU;

	t63 = ((x297|x298)/(x299%x300));

	if (t63 != 613566756LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x301 = -1;
	int8_t x302 = INT8_MAX;
	uint16_t x303 = UINT16_MAX;
	static int16_t x304 = INT16_MIN;
	int32_t t64 = -1;

	t64 = ((x301|x302)/(x303%x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	static uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t65 = 806001517;

	t65 = ((x309|x310)/(x311%x312));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x315 = INT32_MAX;
	volatile int64_t x316 = -418LL;

	t66 = ((x313|x314)/(x315%x316));

	if (t66 != 64274369594806800LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x317 = 1775U;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = -1;
	int8_t x320 = -2;
	volatile uint32_t t67 = 898U;

	t67 = ((x317|x318)/(x319%x320));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	static int32_t x323 = INT32_MIN;
	static int16_t x324 = -1865;
	volatile int32_t t68 = -26773;

	t68 = ((x321|x322)/(x323%x324));

	if (t68 != 22) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x325 = 0;
	volatile int32_t x327 = INT32_MIN;
	volatile int32_t x328 = -2917483;
	int32_t t69 = 1217966;

	t69 = ((x325|x326)/(x327%x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 74U;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = INT64_MAX;

	t70 = ((x329|x330)/(x331%x332));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x334 = 0;
	volatile int16_t x335 = INT16_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t71 = 20216994;

	t71 = ((x333|x334)/(x335%x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t72 = -8421;

	t72 = ((x357|x358)/(x359%x360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = 54054521209977517LL;
	volatile int16_t x363 = -1;
	int64_t x364 = INT64_MIN;

	t73 = ((x361|x362)/(x363%x364));

	if (t73 != 1363LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int16_t x367 = INT16_MIN;

	t74 = ((x365|x366)/(x367%x368));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x369 = 40U;
	uint64_t x372 = 1222186469103LLU;
	volatile uint64_t t75 = 110497LLU;

	t75 = ((x369|x370)/(x371%x372));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	int32_t x375 = INT32_MAX;
	uint64_t x376 = 6LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x373|x374)/(x375%x376));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = 27564984119LL;
	uint16_t x384 = 36U;

	t77 = ((x381|x382)/(x383%x384));

	if (t77 != -2967LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x393 = -1;
	int32_t x395 = 376658754;
	uint32_t x396 = UINT32_MAX;
	uint32_t t78 = 1439U;

	t78 = ((x393|x394)/(x395%x396));

	if (t78 != 11U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x397 = 17;
	uint8_t x398 = 5U;
	volatile int64_t x399 = -90566LL;

	t79 = ((x397|x398)/(x399%x400));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x402 = UINT16_MAX;
	static int32_t x403 = -1;
	volatile int32_t x404 = -13609420;
	volatile int32_t t80 = 192;

	t80 = ((x401|x402)/(x403%x404));

	if (t80 != 2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x405 = 19182533U;
	int32_t x406 = 1;
	int32_t x408 = INT32_MIN;
	volatile uint32_t t81 = 238279U;

	t81 = ((x405|x406)/(x407%x408));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x421 = -1;
	volatile uint8_t x422 = 59U;
	static int16_t x424 = INT16_MIN;

	t82 = ((x421|x422)/(x423%x424));

	if (t82 != 613566756U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = 1360U;
	static int32_t x431 = 2;
	int64_t x432 = INT64_MAX;
	int64_t t83 = 422755502014LL;

	t83 = ((x429|x430)/(x431%x432));

	if (t83 != 767LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x434 = 53U;
	int16_t x435 = -1;
	volatile int8_t x436 = INT8_MAX;

	t84 = ((x433|x434)/(x435%x436));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x441 = 29849835LL;
	int64_t x442 = 3731063777LL;
	int64_t x443 = -1LL;
	uint64_t x444 = 398387079328662592LLU;
	uint64_t t85 = 1374LLU;

	t85 = ((x441|x442)/(x443%x444));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x445 = UINT64_MAX;
	volatile int8_t x446 = INT8_MIN;
	static int16_t x447 = -1;
	uint64_t t86 = 4275103540342277LLU;

	t86 = ((x445|x446)/(x447%x448));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x454 = UINT8_MAX;
	static int32_t x455 = 42625170;
	int16_t x456 = INT16_MIN;
	int32_t t87 = 3;

	t87 = ((x453|x454)/(x455%x456));

	if (t87 != -80219) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = 2212224148071863452LL;
	volatile uint64_t x463 = 535883045935214LLU;
	int32_t x464 = INT32_MAX;
	volatile uint64_t t88 = 410443610044LLU;

	t88 = ((x461|x462)/(x463%x464));

	if (t88 != 8684308845LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x470 = 279U;
	static uint64_t x471 = 60092LLU;
	int8_t x472 = -1;

	t89 = ((x469|x470)/(x471%x472));

	if (t89 != 306975039501257LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x473 = 618U;
	int8_t x476 = -2;
	static uint64_t t90 = 30459LLU;

	t90 = ((x473|x474)/(x475%x476));

	if (t90 != 254LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x477 = 6558082U;
	int16_t x478 = -1;
	int32_t x479 = INT32_MIN;
	volatile int64_t x480 = INT64_MIN;

	t91 = ((x477|x478)/(x479%x480));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x482 = 2U;
	volatile int64_t x484 = INT64_MIN;
	static int64_t t92 = -392369772298782LL;

	t92 = ((x481|x482)/(x483%x484));

	if (t92 != -2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x488 = 24U;

	t93 = ((x485|x486)/(x487%x488));

	if (t93 != 2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x489 = 7684U;
	volatile int8_t x490 = -1;
	static int8_t x491 = -33;
	static uint64_t x492 = UINT64_MAX;

	t94 = ((x489|x490)/(x491%x492));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x493 = UINT64_MAX;
	volatile uint8_t x494 = 5U;
	volatile int32_t x495 = -3639;
	volatile int32_t x496 = INT32_MIN;
	uint64_t t95 = 3115635415809640279LLU;

	t95 = ((x493|x494)/(x495%x496));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x497 = -1;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;
	static uint32_t x500 = 987U;

	t96 = ((x497|x498)/(x499%x500));

	if (t96 != 53687091U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x505 = -1;
	int32_t x506 = INT32_MAX;
	int64_t x507 = -1LL;
	int64_t t97 = 141094468574469482LL;

	t97 = ((x505|x506)/(x507%x508));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x511 = INT8_MIN;
	volatile int64_t x512 = 536859163682LL;
	static volatile int64_t t98 = -32103806048LL;

	t98 = ((x509|x510)/(x511%x512));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x521 = UINT16_MAX;
	uint8_t x522 = 1U;
	int32_t x523 = INT32_MIN;
	int16_t x524 = -13;

	t99 = ((x521|x522)/(x523%x524));

	if (t99 != -5957) { NG(); } else { ; }
	
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

