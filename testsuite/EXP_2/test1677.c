#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 38U;
static volatile uint64_t t2 = 32889529LLU;
static int16_t x16 = INT16_MAX;
int32_t t5 = -799;
uint8_t x28 = 2U;
static uint16_t x29 = 23249U;
volatile int32_t t7 = -698;
int64_t x36 = INT64_MIN;
int64_t t8 = INT64_MAX;
static uint32_t x41 = 504U;
uint64_t x49 = 25LLU;
volatile uint32_t x50 = 105U;
static volatile uint64_t t12 = 22098LLU;
volatile uint32_t x65 = 21U;
int32_t x67 = INT32_MIN;
int64_t x72 = 245795715907456LL;
int8_t x73 = INT8_MIN;
int64_t x84 = INT64_MIN;
uint16_t x88 = UINT16_MAX;
volatile int16_t x90 = INT16_MIN;
int64_t x92 = -15714131LL;
int32_t x93 = INT32_MIN;
int64_t x95 = INT64_MIN;
uint64_t x97 = 1610293100549329434LLU;
uint16_t x101 = 77U;
int32_t x111 = INT32_MIN;
uint32_t x112 = 1979U;
volatile int64_t t27 = 3026522377483LL;
int32_t x116 = INT32_MIN;
volatile int16_t x119 = INT16_MIN;
int16_t x123 = -5899;
uint16_t x126 = 7220U;
static volatile uint32_t t31 = 398U;
int64_t x131 = -3437LL;
int64_t x132 = 2847475LL;
static int32_t t33 = -4784;
int64_t x138 = INT64_MIN;
volatile int8_t x139 = INT8_MIN;
uint32_t x140 = 1553495U;
uint32_t t34 = 29U;
uint8_t x146 = 38U;
int32_t x151 = -1;
volatile uint32_t t37 = 13527U;
volatile int32_t x153 = INT32_MIN;
static volatile int32_t t38 = -3;
volatile int32_t t41 = 50790;
volatile uint32_t x184 = 414102648U;
static int64_t x186 = INT64_MIN;
static volatile int16_t x191 = INT16_MIN;
int16_t x197 = INT16_MIN;
uint8_t x199 = UINT8_MAX;
volatile uint64_t t49 = 2569183074LLU;
int32_t t53 = 22875038;
uint64_t x218 = 1684LLU;
uint8_t x221 = UINT8_MAX;
uint32_t x222 = 104558U;
volatile int64_t x226 = 245360LL;
uint8_t x230 = 35U;
static volatile int32_t x232 = INT32_MIN;
int32_t x240 = INT32_MIN;
int64_t x245 = INT64_MIN;
volatile int32_t t62 = 75;
int32_t x259 = INT32_MAX;
volatile uint64_t t64 = 285228703489773140LLU;
int64_t x261 = -31LL;
static uint32_t x264 = 454801U;
int32_t x266 = -1223051;
int32_t x271 = -1;
static uint16_t x279 = 192U;
int64_t x280 = INT64_MAX;
volatile uint32_t x290 = 144422650U;
int8_t x292 = INT8_MIN;
int8_t x299 = INT8_MIN;
int64_t x304 = 1608003921468094LL;
uint64_t x307 = 0LLU;
static int8_t x309 = INT8_MIN;
static int32_t x313 = INT32_MIN;
int32_t x315 = -29;
int32_t x316 = INT32_MAX;
static int64_t x328 = INT64_MIN;
volatile int64_t x333 = INT64_MIN;
int64_t t83 = -1507731028LL;
uint64_t t90 = 16076362684LLU;
int16_t x365 = INT16_MAX;
int16_t x370 = -1;
volatile uint32_t t92 = 432150U;
uint64_t x377 = UINT64_MAX;
static int32_t x399 = -523094503;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = INT16_MAX;
	uint8_t x3 = 27U;
	volatile int64_t x4 = INT64_MAX;
	static volatile int64_t t0 = 1LL;

	t0 = ((x1|(x2<=x3))^x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static int64_t x6 = -800550473325126LL;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 129053992;

	t1 = ((x5|(x6<=x7))^x8);

	if (t1 != 65280) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = UINT8_MAX;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9|(x10<=x11))^x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = 0U;
	static int8_t x15 = INT8_MIN;
	int32_t t3 = -115249;

	t3 = ((x13|(x14<=x15))^x16);

	if (t3 != 32640) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 3U;
	int8_t x18 = INT8_MAX;
	static volatile int64_t x19 = INT64_MAX;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 6202604814600LLU;

	t4 = ((x17|(x18<=x19))^x20);

	if (t4 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 294U;
	uint8_t x22 = UINT8_MAX;
	static uint16_t x23 = UINT16_MAX;
	static uint16_t x24 = 9448U;

	t5 = ((x21|(x22<=x23))^x24);

	if (t5 != 9679) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	static uint64_t x26 = UINT64_MAX;
	int16_t x27 = INT16_MIN;
	int32_t t6 = -1;

	t6 = ((x25|(x26<=x27))^x28);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x30 = 1LLU;
	uint32_t x31 = UINT32_MAX;
	static volatile int8_t x32 = INT8_MIN;

	t7 = ((x29|(x30<=x31))^x32);

	if (t7 != -23215) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -1;

	t8 = ((x33|(x34<=x35))^x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = -1;
	volatile int32_t t9 = 36622;

	t9 = ((x37|(x38<=x39))^x40);

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -99LL;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile uint32_t t10 = 892U;

	t10 = ((x41|(x42<=x43))^x44);

	if (t10 != 263U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static uint64_t x46 = 6442608800LLU;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = 1LLU;
	volatile uint64_t t11 = 47024LLU;

	t11 = ((x45|(x46<=x47))^x48);

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x51 = INT8_MAX;
	uint32_t x52 = 10744U;

	t12 = ((x49|(x50<=x51))^x52);

	if (t12 != 10721LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	int16_t x54 = 2731;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 48U;
	int32_t t13 = 104;

	t13 = ((x53|(x54<=x55))^x56);

	if (t13 != 32719) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	int16_t x58 = -1;
	int64_t x59 = INT64_MAX;
	static uint8_t x60 = 15U;
	int64_t t14 = -185LL;

	t14 = ((x57|(x58<=x59))^x60);

	if (t14 != -16LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static volatile uint64_t x62 = 9730739645092LLU;
	int64_t x63 = INT64_MAX;
	static int8_t x64 = INT8_MIN;
	volatile int64_t t15 = 842950543673229LL;

	t15 = ((x61|(x62<=x63))^x64);

	if (t15 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x66 = UINT8_MAX;
	volatile uint32_t x68 = 50U;
	uint32_t t16 = 5U;

	t16 = ((x65|(x66<=x67))^x68);

	if (t16 != 39U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	int64_t t17 = 3894962LL;

	t17 = ((x69|(x70<=x71))^x72);

	if (t17 != 245795715907455LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	static int32_t x75 = -268075894;
	static int32_t x76 = INT32_MIN;
	int32_t t18 = -10079395;

	t18 = ((x73|(x74<=x75))^x76);

	if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	volatile int32_t x80 = -1;
	int32_t t19 = -2;

	t19 = ((x77|(x78<=x79))^x80);

	if (t19 != -65536) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	volatile int64_t t20 = 1534417461215888256LL;

	t20 = ((x81|(x82<=x83))^x84);

	if (t20 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int64_t t21 = -1293513642LL;

	t21 = ((x85|(x86<=x87))^x88);

	if (t21 != -65536LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static volatile int32_t x91 = INT32_MAX;
	static int64_t t22 = 3LL;

	t22 = ((x89|(x90<=x91))^x92);

	if (t22 != -15677614LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	static int8_t x96 = -22;
	static volatile int32_t t23 = -13;

	t23 = ((x93|(x94<=x95))^x96);

	if (t23 != 2147483626) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	int16_t x99 = 733;
	int8_t x100 = -1;
	uint64_t t24 = 2497LLU;

	t24 = ((x97|(x98<=x99))^x100);

	if (t24 != 16836450973160222180LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = -12;
	volatile int16_t x103 = INT16_MIN;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 124LLU;

	t25 = ((x101|(x102<=x103))^x104);

	if (t25 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	static int64_t x106 = INT64_MIN;
	volatile int64_t x107 = -17863321436646236LL;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -1;

	t26 = ((x105|(x106<=x107))^x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 29241448346LL;
	int8_t x110 = -1;

	t27 = ((x109|(x110<=x111))^x112);

	if (t27 != 29241446433LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = 32520U;
	int8_t x114 = INT8_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	volatile int32_t t28 = 85;

	t28 = ((x113|(x114<=x115))^x116);

	if (t28 != -2147451127) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 61408U;
	uint16_t x118 = 314U;
	int16_t x120 = INT16_MIN;
	static volatile uint32_t t29 = 155680U;

	t29 = ((x117|(x118<=x119))^x120);

	if (t29 != 4294930400U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 1;

	t30 = ((x121|(x122<=x123))^x124);

	if (t30 != 2147450880) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = 20U;

	t31 = ((x125|(x126<=x127))^x128);

	if (t31 != 4294967275U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	int16_t x130 = 0;
	int64_t t32 = 275682975LL;

	t32 = ((x129|(x130<=x131))^x132);

	if (t32 != -2847476LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = -1164;
	int64_t x135 = -1LL;
	uint16_t x136 = UINT16_MAX;

	t33 = ((x133|(x134<=x135))^x136);

	if (t33 != -65410) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;

	t34 = ((x137|(x138<=x139))^x140);

	if (t34 != 1553448U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = -258177630110LL;
	int8_t x144 = -1;
	static volatile int32_t t35 = INT32_MAX;

	t35 = ((x141|(x142<=x143))^x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 20;
	uint64_t x147 = UINT64_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 2093052314929LLU;

	t36 = ((x145|(x146<=x147))^x148);

	if (t36 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 437979057U;
	int64_t x150 = 7683255LL;
	volatile int32_t x152 = -1;

	t37 = ((x149|(x150<=x151))^x152);

	if (t37 != 3856988238U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MAX;
	uint16_t x155 = UINT16_MAX;
	uint16_t x156 = 1U;

	t38 = ((x153|(x154<=x155))^x156);

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	static uint8_t x159 = UINT8_MAX;
	static volatile uint32_t x160 = 14001U;
	static volatile int64_t t39 = -1126305799061409168LL;

	t39 = ((x157|(x158<=x159))^x160);

	if (t39 != -9223372036854761807LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MAX;
	int32_t x163 = -1;
	int64_t x164 = INT64_MAX;
	int64_t t40 = -309590LL;

	t40 = ((x161|(x162<=x163))^x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	static int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = 59U;
	volatile int16_t x168 = INT16_MIN;

	t41 = ((x165|(x166<=x167))^x168);

	if (t41 != 32641) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int32_t x170 = INT32_MIN;
	volatile uint32_t x171 = 13U;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 29788024;

	t42 = ((x169|(x170<=x171))^x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = -185;
	static int32_t x175 = -1;
	volatile int8_t x176 = -1;
	int32_t t43 = 0;

	t43 = ((x173|(x174<=x175))^x176);

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x178 = 1440487491857787390LLU;
	int64_t x179 = INT64_MIN;
	volatile uint8_t x180 = UINT8_MAX;
	int32_t t44 = 3;

	t44 = ((x177|(x178<=x179))^x180);

	if (t44 != -32514) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	uint32_t t45 = 1757U;

	t45 = ((x181|(x182<=x183))^x184);

	if (t45 != 3880864761U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 1;
	int64_t x187 = INT64_MIN;
	static int16_t x188 = -1;
	volatile int32_t t46 = 770;

	t46 = ((x185|(x186<=x187))^x188);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	volatile int8_t x192 = -1;
	volatile int32_t t47 = -32;

	t47 = ((x189|(x190<=x191))^x192);

	if (t47 != 2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 5847;
	volatile int8_t x194 = INT8_MAX;
	uint32_t x195 = 5028511U;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -500;

	t48 = ((x193|(x194<=x195))^x196);

	if (t48 != 2147477800) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 3141U;
	volatile uint64_t x200 = UINT64_MAX;

	t49 = ((x197|(x198<=x199))^x200);

	if (t49 != 32767LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 3749187U;
	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = -1LL;
	volatile int16_t x204 = -1;
	static volatile uint32_t t50 = 9U;

	t50 = ((x201|(x202<=x203))^x204);

	if (t50 != 4291218108U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -3531;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	int8_t x208 = -62;
	int32_t t51 = 0;

	t51 = ((x205|(x206<=x207))^x208);

	if (t51 != 3575) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 8940124890494406813LLU;
	uint32_t x211 = 64U;
	uint16_t x212 = 29134U;
	uint64_t t52 = 78555001987LLU;

	t52 = ((x209|(x210<=x211))^x212);

	if (t52 != 18446744073709522481LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 24464U;
	static int8_t x214 = INT8_MAX;
	uint64_t x215 = UINT64_MAX;
	uint8_t x216 = 80U;

	t53 = ((x213|(x214<=x215))^x216);

	if (t53 != 24513) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = 403107953U;
	volatile uint32_t t54 = 1592U;

	t54 = ((x217|(x218<=x219))^x220);

	if (t54 != 403050382U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x223 = -1LL;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = 1854564;

	t55 = ((x221|(x222<=x223))^x224);

	if (t55 != 32512) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 230450;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -16058;
	static int32_t t56 = -17733;

	t56 = ((x225|(x226<=x227))^x228);

	if (t56 != -244363) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	volatile int64_t x231 = INT64_MIN;
	int32_t t57 = -3031257;

	t57 = ((x229|(x230<=x231))^x232);

	if (t57 != -2147483521) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;
	volatile uint64_t t58 = 8146LLU;

	t58 = ((x233|(x234<=x235))^x236);

	if (t58 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 16330707U;
	uint64_t x238 = UINT64_MAX;
	static volatile int32_t x239 = INT32_MIN;
	uint32_t t59 = 701U;

	t59 = ((x237|(x238<=x239))^x240);

	if (t59 != 2163814355U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 15U;
	static int8_t x242 = INT8_MIN;
	static volatile int8_t x243 = 1;
	int8_t x244 = -3;
	static volatile int32_t t60 = 0;

	t60 = ((x241|(x242<=x243))^x244);

	if (t60 != -14) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 46717613359105054LLU;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 220U;
	static volatile int64_t t61 = -17465364144LL;

	t61 = ((x245|(x246<=x247))^x248);

	if (t61 != -9223372036854775587LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MAX;
	int64_t x250 = 2187062LL;
	int64_t x251 = 47930774742LL;
	uint8_t x252 = UINT8_MAX;

	t62 = ((x249|(x250<=x251))^x252);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -2197;
	uint8_t x254 = 104U;
	int8_t x255 = INT8_MIN;
	int32_t x256 = -27;
	int32_t t63 = -8;

	t63 = ((x253|(x254<=x255))^x256);

	if (t63 != 2190) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 110398177286930623LLU;
	static int8_t x258 = 5;
	uint16_t x260 = 204U;

	t64 = ((x257|(x258<=x259))^x260);

	if (t64 != 110398177286930547LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MIN;
	volatile int16_t x263 = -1;
	static volatile int64_t t65 = -807LL;

	t65 = ((x261|(x262<=x263))^x264);

	if (t65 != -454800LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 244380606999LLU;
	int8_t x267 = -2;
	int16_t x268 = -1;
	uint64_t t66 = 915210LLU;

	t66 = ((x265|(x266<=x267))^x268);

	if (t66 != 18446743829328944616LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	uint32_t x270 = 1793U;
	int8_t x272 = -1;
	int32_t t67 = -283201749;

	t67 = ((x269|(x270<=x271))^x272);

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 12U;
	int16_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t x276 = -1342220986034LL;
	volatile int64_t t68 = -7016948LL;

	t68 = ((x273|(x274<=x275))^x276);

	if (t68 != -1342220986045LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 45;
	int64_t x278 = 12LL;
	volatile int64_t t69 = 37320949LL;

	t69 = ((x277|(x278<=x279))^x280);

	if (t69 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int64_t x282 = -1LL;
	volatile int8_t x283 = -1;
	volatile int8_t x284 = -1;
	volatile int64_t t70 = 1359LL;

	t70 = ((x281|(x282<=x283))^x284);

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1804U;
	int32_t x286 = -1;
	static uint32_t x287 = UINT32_MAX;
	uint32_t x288 = 93U;
	volatile uint32_t t71 = 1606419U;

	t71 = ((x285|(x286<=x287))^x288);

	if (t71 != 1872U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int32_t x291 = 38;
	volatile int32_t t72 = -211628;

	t72 = ((x289|(x290<=x291))^x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 1;
	int64_t x294 = 97276940722LL;
	uint16_t x295 = 467U;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t73 = -42712449LL;

	t73 = ((x293|(x294<=x295))^x296);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	volatile uint8_t x298 = UINT8_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t74 = INT64_MAX;

	t74 = ((x297|(x298<=x299))^x300);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 1;
	static uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile int64_t t75 = -87LL;

	t75 = ((x301|(x302<=x303))^x304);

	if (t75 != 1608003921468095LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 2U;
	volatile int8_t x306 = 31;
	int64_t x308 = INT64_MAX;
	int64_t t76 = -6LL;

	t76 = ((x305|(x306<=x307))^x308);

	if (t76 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x310 = 2U;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t77 = 35081649676LLU;

	t77 = ((x309|(x310<=x311))^x312);

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -310;
	volatile int32_t t78 = -45501;

	t78 = ((x313|(x314<=x315))^x316);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = UINT16_MAX;
	int32_t x318 = -1;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 0;

	t79 = ((x317|(x318<=x319))^x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 57390LLU;
	int64_t x322 = INT64_MIN;
	volatile int32_t x323 = 2063;
	int64_t x324 = -1LL;
	uint64_t t80 = 28831LLU;

	t80 = ((x321|(x322<=x323))^x324);

	if (t80 != 18446744073709494224LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -15762534368721LL;
	uint32_t x326 = UINT32_MAX;
	volatile int32_t x327 = -409;
	volatile int64_t t81 = -40757752031LL;

	t81 = ((x325|(x326<=x327))^x328);

	if (t81 != 9223356274320407087LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	static int64_t x330 = -1LL;
	volatile uint32_t x331 = 3850U;
	uint64_t x332 = 394094438LLU;
	volatile uint64_t t82 = 290561503698495828LLU;

	t82 = ((x329|(x330<=x331))^x332);

	if (t82 != 9223372037248870247LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = INT32_MIN;
	static int32_t x335 = 3372;
	int64_t x336 = -1LL;

	t83 = ((x333|(x334<=x335))^x336);

	if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MAX;
	volatile uint16_t x339 = 1U;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t84 = 165276455172063LLU;

	t84 = ((x337|(x338<=x339))^x340);

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static uint8_t x342 = 123U;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t85 = -121874099321500939LL;

	t85 = ((x341|(x342<=x343))^x344);

	if (t85 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 31499U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = 2250951082766LL;
	int64_t x348 = -1LL;
	int64_t t86 = 8423678286949572LL;

	t86 = ((x345|(x346<=x347))^x348);

	if (t86 != -31500LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint8_t x350 = 4U;
	int64_t x351 = -10735999LL;
	int16_t x352 = -1;
	volatile int64_t t87 = 0LL;

	t87 = ((x349|(x350<=x351))^x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile int8_t x354 = -1;
	uint32_t x355 = 47828U;
	static int64_t x356 = INT64_MAX;
	static volatile int64_t t88 = -2162692612648960LL;

	t88 = ((x353|(x354<=x355))^x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -11290;
	static int8_t x358 = -6;
	static int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t89 = 331;

	t89 = ((x357|(x358<=x359))^x360);

	if (t89 != -11367) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	uint16_t x362 = 68U;
	int8_t x363 = INT8_MIN;
	static uint64_t x364 = 10860523651317LLU;

	t90 = ((x361|(x362<=x363))^x364);

	if (t90 != 18446733213185900405LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x366 = 740U;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 15639508;

	t91 = ((x365|(x366<=x367))^x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x371 = INT8_MIN;
	static int32_t x372 = INT32_MAX;

	t92 = ((x369|(x370<=x371))^x372);

	if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 8081325195181277LLU;
	int16_t x374 = -1595;
	volatile int64_t x375 = INT64_MAX;
	uint8_t x376 = 88U;
	volatile uint64_t t93 = 3520LLU;

	t93 = ((x373|(x374<=x375))^x376);

	if (t93 != 8081325195181189LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = INT64_MIN;
	int32_t x379 = -1;
	volatile uint32_t x380 = 1480587804U;
	uint64_t t94 = 11598156800923035LLU;

	t94 = ((x377|(x378<=x379))^x380);

	if (t94 != 18446744072228963811LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x381 = -1;
	static int32_t x382 = -1;
	uint32_t x383 = 124750U;
	int32_t x384 = -52;
	int32_t t95 = 188370;

	t95 = ((x381|(x382<=x383))^x384);

	if (t95 != 51) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = -15;
	volatile uint16_t x388 = 750U;
	static volatile int32_t t96 = -1578;

	t96 = ((x385|(x386<=x387))^x388);

	if (t96 != 2147482897) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 1LL;
	uint8_t x390 = 27U;
	static uint16_t x391 = 109U;
	int32_t x392 = 0;
	volatile int64_t t97 = 44012118439461884LL;

	t97 = ((x389|(x390<=x391))^x392);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 795U;
	volatile int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	static uint32_t x396 = 160526069U;
	static uint32_t t98 = 11752130U;

	t98 = ((x393|(x394<=x395))^x396);

	if (t98 != 160525806U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	uint64_t x398 = 303649525LLU;
	static uint16_t x400 = 12U;
	volatile int64_t t99 = -1273882LL;

	t99 = ((x397|(x398<=x399))^x400);

	if (t99 != -13LL) { NG(); } else { ; }
	
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

