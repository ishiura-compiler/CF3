#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static volatile int8_t x5 = INT8_MIN;
int32_t t1 = -8783940;
uint64_t x12 = 10653009083678LLU;
int32_t x19 = -1;
uint8_t x25 = 2U;
static int8_t x26 = INT8_MAX;
int32_t t4 = -6;
int16_t x31 = INT16_MAX;
int16_t x34 = -1;
uint8_t x36 = 58U;
static volatile int64_t t6 = 12LL;
volatile uint64_t x43 = 762LLU;
int8_t x45 = INT8_MIN;
static volatile int16_t x50 = INT16_MIN;
uint16_t x53 = 961U;
static uint8_t x56 = UINT8_MAX;
uint8_t x61 = UINT8_MAX;
int32_t x62 = 31;
int16_t x65 = INT16_MAX;
int64_t x72 = -1336LL;
volatile uint64_t t14 = 4963659LLU;
uint8_t x75 = 11U;
static volatile int64_t x78 = 17LL;
int16_t x81 = INT16_MIN;
volatile uint16_t x83 = 33U;
int16_t x88 = -1;
uint32_t x91 = 889775929U;
int8_t x92 = 1;
volatile uint32_t t19 = 135387U;
volatile int64_t x93 = INT64_MIN;
int16_t x98 = INT16_MIN;
uint32_t x107 = 96560U;
static volatile int64_t x113 = INT64_MIN;
volatile int8_t x115 = INT8_MAX;
static int32_t x127 = INT32_MIN;
volatile int16_t x129 = INT16_MIN;
static int64_t t29 = 699667499673427LL;
uint16_t x133 = 0U;
static int16_t x134 = INT16_MIN;
uint8_t x136 = 102U;
static int64_t x140 = INT64_MIN;
int64_t x149 = -1LL;
volatile int64_t t34 = 187409193326LL;
static int16_t x161 = INT16_MAX;
static int32_t x165 = INT32_MIN;
uint64_t x166 = 8228565464373LLU;
static int8_t x169 = -1;
volatile int32_t t38 = -365;
static int64_t x173 = INT64_MIN;
uint16_t x178 = UINT16_MAX;
static int8_t x179 = -10;
static uint64_t x180 = 172273892771LLU;
int8_t x182 = 20;
volatile int64_t t41 = 1LL;
int64_t x185 = INT64_MIN;
static uint16_t x187 = UINT16_MAX;
static volatile int64_t t42 = -3461140208074900LL;
int64_t x192 = 1LL;
uint32_t x194 = 5459235U;
int8_t x206 = -1;
int64_t x209 = INT64_MIN;
int16_t x210 = INT16_MAX;
volatile int64_t t48 = -56332944696500LL;
uint64_t x222 = 11871001558LLU;
uint64_t x225 = 156407LLU;
uint64_t t51 = 986LLU;
static uint8_t x229 = UINT8_MAX;
uint32_t x234 = 22U;
int16_t x251 = INT16_MIN;
static uint16_t x252 = 100U;
int32_t t57 = 618814;
static uint8_t x256 = UINT8_MAX;
static volatile int64_t t63 = -319919178260192349LL;
volatile int32_t t64 = -127006;
volatile int8_t x282 = 1;
int16_t x283 = INT16_MIN;
static uint32_t x292 = UINT32_MAX;
int16_t x304 = -1;
int32_t x308 = -1;
volatile int64_t t71 = -130533LL;
int8_t x312 = INT8_MIN;
int32_t x318 = INT32_MIN;
int32_t x319 = -1;
int8_t x324 = INT8_MIN;
static int32_t x326 = INT32_MIN;
uint16_t x327 = UINT16_MAX;
int16_t x339 = INT16_MIN;
static uint64_t x341 = 61197285129LLU;
int32_t x346 = -1;
int32_t x348 = -1;
int64_t x350 = -51226338786203LL;
int8_t x357 = 0;
uint8_t x358 = UINT8_MAX;
volatile int16_t x359 = -1;
volatile int32_t t84 = 4074;
volatile uint64_t x370 = UINT64_MAX;
int8_t x391 = -1;
uint16_t x396 = 4U;
int32_t x403 = INT32_MIN;
volatile int64_t t95 = -1036841LL;
int16_t x406 = INT16_MAX;
int8_t x409 = INT8_MIN;
static uint16_t x411 = 9U;
static volatile uint64_t t97 = 267LLU;
static int64_t x414 = 224059LL;


void f0(void) {
	int8_t x1 = -3;
	static int16_t x2 = INT16_MAX;
	volatile int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 368293;

	t0 = ((x1|(x2|x3))+x4);

	if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	static uint8_t x7 = UINT8_MAX;
	int32_t x8 = -30218611;

	t1 = ((x5|(x6|x7))+x8);

	if (t1 != -30218612) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = INT32_MIN;
	volatile uint64_t t2 = 3LLU;

	t2 = ((x9|(x10|x11))+x12);

	if (t2 != 10657304050973LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MAX;
	uint8_t x20 = 0U;
	int32_t t3 = -10;

	t3 = ((x17|(x18|x19))+x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x27 = -2;
	int16_t x28 = INT16_MIN;

	t4 = ((x25|(x26|x27))+x28);

	if (t4 != -32769) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	static int16_t x32 = -8280;
	volatile int64_t t5 = -1LL;

	t5 = ((x29|(x30|x31))+x32);

	if (t5 != -9223372036854751321LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = -1;
	int64_t x35 = 23069422LL;

	t6 = ((x33|(x34|x35))+x36);

	if (t6 != 57LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int64_t x44 = -1LL;
	uint64_t t7 = 208LLU;

	t7 = ((x41|(x42|x43))+x44);

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x46 = INT8_MAX;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = -1911507;
	static int64_t t8 = 2456191262LL;

	t8 = ((x45|(x46|x47))+x48);

	if (t8 != -1911508LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x51 = 2U;
	volatile uint32_t x52 = UINT32_MAX;
	uint32_t t9 = 166525U;

	t9 = ((x49|(x50|x51))+x52);

	if (t9 != 4294934654U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x54 = -8LL;
	volatile int32_t x55 = 3511901;
	static int64_t t10 = 6409847LL;

	t10 = ((x53|(x54|x55))+x56);

	if (t10 != 252LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 26U;
	volatile int64_t x59 = 47LL;
	static uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 5492435642365745LLU;

	t11 = ((x57|(x58|x59))+x60);

	if (t11 != 18446744071562068030LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x63 = -56314;
	static int8_t x64 = INT8_MIN;
	int32_t t12 = -3049558;

	t12 = ((x61|(x62|x63))+x64);

	if (t12 != -56193) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	static int16_t x68 = -518;
	int32_t t13 = -257888;

	t13 = ((x65|(x66|x67))+x68);

	if (t13 != -519) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = INT16_MIN;

	t14 = ((x69|(x70|x71))+x72);

	if (t14 != 18446744073709550279LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x73 = 12U;
	uint32_t x74 = 1511041U;
	uint64_t x76 = UINT64_MAX;
	uint64_t t15 = 5651427LLU;

	t15 = ((x73|(x74|x75))+x76);

	if (t15 != 1511054LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	volatile int8_t x79 = 7;
	int64_t x80 = INT64_MAX;
	volatile int64_t t16 = -340183613LL;

	t16 = ((x77|(x78|x79))+x80);

	if (t16 != 9223372036854775702LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x82 = INT32_MIN;
	static int32_t x84 = 49829;
	int32_t t17 = 6495277;

	t17 = ((x81|(x82|x83))+x84);

	if (t17 != 17094) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1260;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;
	volatile int64_t t18 = 127LL;

	t18 = ((x85|(x86|x87))+x88);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x90 = 0U;

	t19 = ((x89|(x90|x91))+x92);

	if (t19 != 4294967226U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = INT32_MAX;
	int64_t x95 = 3LL;
	int8_t x96 = 3;
	int64_t t20 = 255418484803776763LL;

	t20 = ((x93|(x94|x95))+x96);

	if (t20 != -9223372034707292158LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 0;
	uint32_t x99 = 1149312U;
	volatile int64_t x100 = -1LL;
	int64_t t21 = -12265177310353LL;

	t21 = ((x97|(x98|x99))+x100);

	if (t21 != 4294936959LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = 2837;
	int8_t x103 = -1;
	uint8_t x104 = 15U;
	static uint32_t t22 = 139064U;

	t22 = ((x101|(x102|x103))+x104);

	if (t22 != 14U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = INT16_MAX;
	volatile int8_t x106 = 1;
	static int32_t x108 = INT32_MIN;
	volatile uint32_t t23 = 224778U;

	t23 = ((x105|(x106|x107))+x108);

	if (t23 != 2147581951U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile int16_t x110 = 5629;
	static int32_t x111 = -293;
	int8_t x112 = INT8_MIN;
	static int32_t t24 = -1435208;

	t24 = ((x109|(x110|x111))+x112);

	if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = INT64_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int64_t t25 = -30LL;

	t25 = ((x113|(x114|x115))+x116);

	if (t25 != 65534LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	int32_t x120 = INT32_MIN;
	uint32_t t26 = 2001403793U;

	t26 = ((x117|(x118|x119))+x120);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	volatile int64_t x123 = INT64_MAX;
	volatile int8_t x124 = -1;
	int64_t t27 = -125353816LL;

	t27 = ((x121|(x122|x123))+x124);

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = -1;
	int16_t x128 = INT16_MAX;
	static int64_t t28 = -11653143LL;

	t28 = ((x125|(x126|x127))+x128);

	if (t28 != 32766LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x130 = -15635475232LL;
	volatile int16_t x131 = -1;
	int64_t x132 = INT64_MAX;

	t29 = ((x129|(x130|x131))+x132);

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x135 = 467342522751626216LLU;
	volatile uint64_t t30 = 1265401LLU;

	t30 = ((x133|(x134|x135))+x136);

	if (t30 != 18446744073709530190LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 122U;
	uint64_t x138 = 462950LLU;
	int64_t x139 = -6012LL;
	static uint64_t t31 = 727179361648058LLU;

	t31 = ((x137|(x138|x139))+x140);

	if (t31 != 9223372036854774014LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	static int8_t x146 = 5;
	int32_t x147 = INT32_MIN;
	int32_t x148 = 0;
	static int32_t t32 = 0;

	t32 = ((x145|(x146|x147))+x148);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = -18924894235117LL;
	volatile int16_t x151 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	volatile int64_t t33 = -44LL;

	t33 = ((x149|(x150|x151))+x152);

	if (t33 != -129LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 238982540U;
	static int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	int64_t x156 = -18683LL;

	t34 = ((x153|(x154|x155))+x156);

	if (t34 != -18684LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MIN;
	int8_t x159 = 1;
	volatile uint16_t x160 = 4697U;
	int32_t t35 = -49034252;

	t35 = ((x157|(x158|x159))+x160);

	if (t35 != 4570) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x162 = -1;
	int32_t x163 = -1;
	int16_t x164 = -752;
	volatile int32_t t36 = -1380;

	t36 = ((x161|(x162|x163))+x164);

	if (t36 != -753) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x167 = 4425410;
	uint32_t x168 = 2414U;
	volatile uint64_t t37 = 297563007662054LLU;

	t37 = ((x165|(x166|x167))+x168);

	if (t37 != 18446744073122070885LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = -1;
	static volatile int16_t x171 = -10083;
	volatile int32_t x172 = INT32_MAX;

	t38 = ((x169|(x170|x171))+x172);

	if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = 25974608;
	int64_t x175 = INT64_MIN;
	volatile uint32_t x176 = 8U;
	int64_t t39 = -85930318LL;

	t39 = ((x173|(x174|x175))+x176);

	if (t39 != -9223372036828801192LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = UINT32_MAX;
	uint64_t t40 = 105548768175692LLU;

	t40 = ((x177|(x178|x179))+x180);

	if (t40 != 176568860066LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = 25759;
	static int64_t x183 = 17205384794824LL;
	static int64_t x184 = INT64_MIN;

	t41 = ((x181|(x182|x183))+x184);

	if (t41 != -9223354831469971745LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = INT64_MIN;
	static volatile uint32_t x188 = 33U;

	t42 = ((x185|(x186|x187))+x188);

	if (t42 != -9223372036854710240LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 3U;
	uint32_t x190 = 31760092U;
	int64_t x191 = -41027LL;
	int64_t t43 = 3316737084501LL;

	t43 = ((x189|(x190|x191))+x192);

	if (t43 != -8192LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x193 = INT64_MIN;
	int16_t x195 = -5;
	int64_t x196 = 58272548353128133LL;
	int64_t t44 = -480286783560LL;

	t44 = ((x193|(x194|x195))+x196);

	if (t44 != -9165099484206680384LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 20159712U;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	int8_t x200 = 1;
	volatile uint32_t t45 = 203451563U;

	t45 = ((x197|(x198|x199))+x200);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	static uint64_t x202 = 271392843029289LLU;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t46 = 556116001696609773LLU;

	t46 = ((x201|(x202|x203))+x204);

	if (t46 != 18446744071562058537LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 64U;
	int32_t t47 = -35648;

	t47 = ((x205|(x206|x207))+x208);

	if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x211 = -1;
	uint8_t x212 = 87U;

	t48 = ((x209|(x210|x211))+x212);

	if (t48 != 86LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 8U;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	static volatile uint32_t t49 = 395897U;

	t49 = ((x217|(x218|x219))+x220);

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	int32_t x223 = -819;
	int32_t x224 = INT32_MAX;
	volatile uint64_t t50 = 36575647180LLU;

	t50 = ((x221|(x222|x223))+x224);

	if (t50 != 2147483614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MIN;

	t51 = ((x225|(x226|x227))+x228);

	if (t51 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x230 = 54774732462LLU;
	static volatile int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	static uint64_t t52 = 1567712239LLU;

	t52 = ((x229|(x230|x231))+x232);

	if (t52 != 9223372035794933503LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	uint64_t x235 = 0LLU;
	int8_t x236 = INT8_MAX;
	volatile uint64_t t53 = 33634999LLU;

	t53 = ((x233|(x234|x235))+x236);

	if (t53 != 126LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x237 = UINT64_MAX;
	static uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;
	static int64_t x240 = -1LL;
	uint64_t t54 = 1079389035LLU;

	t54 = ((x237|(x238|x239))+x240);

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MAX;
	static volatile int32_t x242 = -168890;
	uint16_t x243 = 243U;
	int32_t x244 = INT32_MAX;
	static int32_t t55 = 55965744;

	t55 = ((x241|(x242|x243))+x244);

	if (t55 != 2147314942) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = 103;
	uint64_t x248 = 10LLU;
	uint64_t t56 = 13LLU;

	t56 = ((x245|(x246|x247))+x248);

	if (t56 != 18446744073709518961LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = 1;
	volatile uint8_t x250 = 7U;

	t57 = ((x249|(x250|x251))+x252);

	if (t57 != -32661) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MIN;
	static uint64_t x255 = 8208615748LLU;
	uint64_t t58 = 16498429163357878LLU;

	t58 = ((x253|(x254|x255))+x256);

	if (t58 != 9223372045444710654LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x257 = -1LL;
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = -1LL;
	volatile int16_t x260 = 8565;
	volatile int64_t t59 = 55879LL;

	t59 = ((x257|(x258|x259))+x260);

	if (t59 != 8564LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x262 = -33;
	uint64_t x263 = 209032087963063391LLU;
	uint8_t x264 = 111U;
	uint64_t t60 = 1LLU;

	t60 = ((x261|(x262|x263))+x264);

	if (t60 != 78LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	static volatile uint32_t x268 = UINT32_MAX;
	int64_t t61 = -6470LL;

	t61 = ((x265|(x266|x267))+x268);

	if (t61 != 4294967294LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -1;
	static int32_t x271 = 11867693;
	volatile int16_t x272 = INT16_MAX;
	static int32_t t62 = -1;

	t62 = ((x269|(x270|x271))+x272);

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 0U;
	int64_t x274 = 171667668944807LL;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = 1;

	t63 = ((x273|(x274|x275))+x276);

	if (t63 != 171669842821120LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = 2;
	uint8_t x279 = 11U;
	int32_t x280 = INT32_MAX;

	t64 = ((x277|(x278|x279))+x280);

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = 33177LLU;
	int64_t x284 = -4899535921518895LL;
	uint64_t t65 = 896841537830316359LLU;

	t65 = ((x281|(x282|x283))+x284);

	if (t65 != 18441844537788000362LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = INT16_MAX;
	static int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = -1;
	volatile int64_t t66 = 3283062180561993660LL;

	t66 = ((x285|(x286|x287))+x288);

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	static uint64_t x290 = 67031126LLU;
	int32_t x291 = INT32_MIN;
	volatile uint64_t t67 = 718756505358016LLU;

	t67 = ((x289|(x290|x291))+x292);

	if (t67 != 2214514773LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -164;
	volatile int8_t x296 = 42;
	volatile uint32_t t68 = 1313656U;

	t68 = ((x293|(x294|x295))+x296);

	if (t68 != 41U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	static int64_t x298 = INT64_MIN;
	static int8_t x299 = -1;
	uint16_t x300 = 1U;
	volatile uint64_t t69 = 878828083213LLU;

	t69 = ((x297|(x298|x299))+x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -1;
	int64_t x302 = 679014039LL;
	int64_t x303 = -1LL;
	static volatile int64_t t70 = -1386392LL;

	t70 = ((x301|(x302|x303))+x304);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -12028LL;
	uint16_t x306 = 40U;
	int32_t x307 = 6851168;

	t71 = ((x305|(x306|x307))+x308);

	if (t71 != -9365LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x309 = 914U;
	int32_t x310 = 24;
	volatile int32_t x311 = -1;
	static volatile int32_t t72 = -3860;

	t72 = ((x309|(x310|x311))+x312);

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = 147083061U;
	static volatile int32_t x314 = INT32_MIN;
	int16_t x315 = -1;
	static volatile int64_t x316 = INT64_MIN;
	static volatile int64_t t73 = 299802493454LL;

	t73 = ((x313|(x314|x315))+x316);

	if (t73 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int32_t x320 = INT32_MAX;
	int32_t t74 = 656279786;

	t74 = ((x317|(x318|x319))+x320);

	if (t74 != 2147483646) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = INT8_MIN;
	volatile uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	uint64_t t75 = 3122138714108LLU;

	t75 = ((x321|(x322|x323))+x324);

	if (t75 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x328 = -1;
	volatile int64_t t76 = 54535253LL;

	t76 = ((x325|(x326|x327))+x328);

	if (t76 != -2147418114LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = 8356661;
	int32_t x330 = -1874;
	static int16_t x331 = 7387;
	volatile int64_t x332 = -9013LL;
	int64_t t77 = -251936797724LL;

	t77 = ((x329|(x330|x331))+x332);

	if (t77 != -9014LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 29077273341LLU;
	uint32_t x335 = 6667U;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t78 = 194495447LLU;

	t78 = ((x333|(x334|x335))+x336);

	if (t78 != 26929789695LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = INT32_MAX;
	uint16_t x338 = 78U;
	volatile int16_t x340 = -1;
	int32_t t79 = 249382;

	t79 = ((x337|(x338|x339))+x340);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x342 = -87254468128057528LL;
	static int16_t x343 = -1;
	volatile uint8_t x344 = UINT8_MAX;
	static uint64_t t80 = 1583457462678186LLU;

	t80 = ((x341|(x342|x343))+x344);

	if (t80 != 254LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 1U;
	static int8_t x347 = -11;
	int32_t t81 = 125225462;

	t81 = ((x345|(x346|x347))+x348);

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	static int32_t x351 = 234287;
	uint64_t x352 = UINT64_MAX;
	uint64_t t82 = 495686LLU;

	t82 = ((x349|(x350|x351))+x352);

	if (t82 != 18446692847370895358LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = -196969009;
	uint8_t x354 = 6U;
	static int8_t x355 = -1;
	volatile uint64_t x356 = 6LLU;
	static uint64_t t83 = 1LLU;

	t83 = ((x353|(x354|x355))+x356);

	if (t83 != 5LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x360 = -2507;

	t84 = ((x357|(x358|x359))+x360);

	if (t84 != -2508) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = 8228U;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = -22;
	uint32_t x364 = 212638U;
	static uint32_t t85 = 95696632U;

	t85 = ((x361|(x362|x363))+x364);

	if (t85 != 212637U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = INT8_MAX;
	volatile int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t86 = 14359U;

	t86 = ((x365|(x366|x367))+x368);

	if (t86 != 4294967167U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x369 = 5U;
	int32_t x371 = 1;
	int8_t x372 = 2;
	uint64_t t87 = 131LLU;

	t87 = ((x369|(x370|x371))+x372);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	volatile uint64_t x376 = 19814338LLU;
	volatile uint64_t t88 = 288484318963051078LLU;

	t88 = ((x373|(x374|x375))+x376);

	if (t88 != 19814337LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 54342733136LLU;
	int32_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t89 = 3972778672LLU;

	t89 = ((x377|(x378|x379))+x380);

	if (t89 != 60129542142LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x381 = -1;
	int64_t x382 = 42LL;
	static volatile uint16_t x383 = 7901U;
	static int8_t x384 = INT8_MAX;
	int64_t t90 = -5415693042316573LL;

	t90 = ((x381|(x382|x383))+x384);

	if (t90 != 126LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -12359;
	volatile uint16_t x386 = UINT16_MAX;
	int32_t x387 = 1344;
	static volatile uint16_t x388 = 46U;
	int32_t t91 = -88916;

	t91 = ((x385|(x386|x387))+x388);

	if (t91 != 45) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x389 = INT32_MAX;
	static uint32_t x390 = 1506278U;
	static int64_t x392 = -1LL;
	int64_t t92 = -1409668682496197LL;

	t92 = ((x389|(x390|x391))+x392);

	if (t92 != 4294967294LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = 6;
	static volatile uint32_t x394 = 63865649U;
	volatile int16_t x395 = 7268;
	static volatile uint32_t t93 = 259722U;

	t93 = ((x393|(x394|x395))+x396);

	if (t93 != 63872891U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MAX;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = 40726361;
	static volatile uint32_t x400 = 41257016U;
	uint32_t t94 = 1U;

	t94 = ((x397|(x398|x399))+x400);

	if (t94 != 41257015U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MAX;
	volatile int16_t x404 = INT16_MAX;

	t95 = ((x401|(x402|x403))+x404);

	if (t95 != -2147418114LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 1;
	static volatile uint64_t x407 = UINT64_MAX;
	int8_t x408 = 4;
	volatile uint64_t t96 = 25LLU;

	t96 = ((x405|(x406|x407))+x408);

	if (t96 != 3LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x410 = 1696162LLU;
	uint32_t x412 = UINT32_MAX;

	t97 = ((x409|(x410|x411))+x412);

	if (t97 != 4294967210LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x415 = INT16_MAX;
	int32_t x416 = -401480;
	static volatile int64_t t98 = 579524LL;

	t98 = ((x413|(x414|x415))+x416);

	if (t98 != -139337LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int32_t x418 = 8242473;
	volatile uint64_t x419 = 5178488579377356104LLU;
	int16_t x420 = -1;
	uint64_t t99 = 70514714374104970LLU;

	t99 = ((x417|(x418|x419))+x420);

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

