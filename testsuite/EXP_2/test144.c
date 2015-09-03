#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 14436067LL;
uint32_t x8 = 15U;
int64_t x13 = -1LL;
volatile int32_t x14 = INT32_MAX;
static int8_t x15 = INT8_MIN;
int32_t x17 = 11;
int16_t x24 = INT16_MIN;
int32_t x32 = INT32_MIN;
int8_t x33 = 10;
uint16_t x40 = UINT16_MAX;
volatile uint8_t x41 = UINT8_MAX;
int32_t x49 = INT32_MIN;
volatile uint32_t x50 = UINT32_MAX;
static volatile int32_t x69 = INT32_MIN;
int64_t x70 = -1LL;
uint64_t x72 = UINT64_MAX;
uint8_t x86 = 1U;
volatile uint64_t x101 = 17167511573641LLU;
uint16_t x111 = 2502U;
volatile int64_t x120 = INT64_MIN;
volatile int64_t t23 = 203904LL;
static int64_t x126 = -1LL;
volatile int64_t t25 = -116602042392LL;
static uint64_t x129 = 1346556518915423310LLU;
int64_t x134 = -1LL;
uint8_t x145 = 1U;
int32_t x146 = 1762819;
volatile int32_t t30 = -392620895;
volatile uint64_t t31 = 22047LLU;
int8_t x162 = 1;
int32_t x164 = -405014;
static volatile int32_t t33 = -145155681;
static uint64_t x185 = 61728569377LLU;
volatile int8_t x187 = -1;
int32_t x188 = INT32_MIN;
int64_t t37 = 0LL;
int32_t x197 = -219909;
int16_t x200 = INT16_MIN;
volatile int64_t x203 = INT64_MIN;
static volatile uint64_t t40 = 9417LLU;
static uint32_t x214 = UINT32_MAX;
volatile uint64_t x215 = 39058102LLU;
volatile uint64_t t42 = 1LLU;
int8_t x221 = INT8_MIN;
uint8_t x222 = UINT8_MAX;
int8_t x229 = INT8_MIN;
uint32_t x237 = 26U;
int16_t x242 = INT16_MAX;
int32_t x244 = INT32_MAX;
uint8_t x248 = 1U;
volatile uint16_t x252 = 12709U;
uint64_t t50 = 309LLU;
uint64_t x256 = UINT64_MAX;
int8_t x257 = -1;
int16_t x259 = INT16_MAX;
uint32_t x261 = 421982034U;
int64_t x287 = INT64_MIN;
int64_t x293 = INT64_MAX;
static int64_t x294 = INT64_MAX;
volatile uint64_t x295 = UINT64_MAX;
uint16_t x300 = 162U;
static int8_t x303 = 0;
uint64_t t59 = 81165067673LLU;
volatile uint32_t t60 = 32589512U;
uint8_t x319 = 12U;
volatile int8_t x325 = INT8_MIN;
int16_t x329 = INT16_MAX;
static uint8_t x331 = 40U;
volatile int32_t t65 = -9;
static int32_t x339 = -1811782;
volatile int32_t x354 = INT32_MIN;
int32_t x356 = INT32_MIN;
static volatile uint64_t x360 = 1113036587630200LLU;
uint8_t x361 = 25U;
int16_t x365 = INT16_MIN;
volatile int64_t t73 = -7590LL;
int64_t t74 = 2LL;
uint32_t x376 = 1334764U;
uint16_t x379 = 5U;
static volatile int64_t x382 = INT64_MAX;
static int32_t x393 = -1;
int32_t t80 = 16313089;
volatile int32_t x414 = -1;
int32_t x415 = 10;
volatile int32_t t85 = 614015107;
volatile int8_t x434 = INT8_MIN;
int8_t x438 = -1;
static uint16_t x446 = 11526U;
int32_t x448 = -1;
int32_t x450 = -313;
int16_t x454 = INT16_MAX;
volatile int64_t t93 = 151266LL;
int32_t x457 = INT32_MAX;
volatile int16_t x460 = INT16_MIN;
uint32_t x462 = 1U;
int32_t x464 = INT32_MAX;
volatile uint32_t t95 = 1478288U;
volatile int8_t x468 = INT8_MAX;
uint8_t x479 = UINT8_MAX;
static int64_t x481 = -1LL;
uint32_t x484 = 156635856U;


void f0(void) {
	int8_t x6 = INT8_MAX;
	static uint8_t x7 = 2U;
	volatile int64_t t0 = -421LL;

	t0 = ((x5|(x6+x7))+x8);

	if (t0 != 14436082LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -389LL;
	int64_t x10 = INT64_MAX;
	uint64_t x11 = 2953970924542LLU;
	int16_t x12 = -1;
	volatile uint64_t t1 = 3204906881954529LLU;

	t1 = ((x9|(x10+x11))+x12);

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x16 = UINT16_MAX;
	int64_t t2 = 7522884091LL;

	t2 = ((x13|(x14+x15))+x16);

	if (t2 != 65534LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = 5LL;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = -1;
	static volatile int64_t t3 = -49799509LL;

	t3 = ((x17|(x18+x19))+x20);

	if (t3 != 65550LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MAX;
	volatile int8_t x22 = INT8_MIN;
	static volatile int32_t x23 = -128;
	volatile int64_t t4 = 6157241LL;

	t4 = ((x21|(x22+x23))+x24);

	if (t4 != -32769LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x26 = INT64_MAX;
	static int8_t x27 = INT8_MIN;
	volatile int16_t x28 = INT16_MIN;
	static volatile int64_t t5 = 1LL;

	t5 = ((x25|(x26+x27))+x28);

	if (t5 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = -99LL;
	volatile int64_t t6 = -1559310850329LL;

	t6 = ((x29|(x30+x31))+x32);

	if (t6 != -4294967395LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x34 = -12;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 12883LLU;

	t7 = ((x33|(x34+x35))+x36);

	if (t7 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = -1LL;
	volatile int32_t x39 = INT32_MIN;
	int64_t t8 = -18765281774LL;

	t8 = ((x37|(x38+x39))+x40);

	if (t8 != -2147418114LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x42 = 496U;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 1U;
	volatile uint32_t t9 = 2064179127U;

	t9 = ((x41|(x42+x43))+x44);

	if (t9 != 4294935040U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x51 = INT8_MAX;
	int32_t x52 = -41;
	uint32_t t10 = 3U;

	t10 = ((x49|(x50+x51))+x52);

	if (t10 != 2147483733U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 522996880U;
	int16_t x62 = INT16_MAX;
	uint8_t x63 = 7U;
	uint32_t x64 = 1908906U;
	volatile uint32_t t11 = 119U;

	t11 = ((x61|(x62+x63))+x64);

	if (t11 != 524938560U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x65 = 15U;
	uint16_t x66 = 14619U;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	int32_t t12 = 94435622;

	t12 = ((x65|(x66+x67))+x68);

	if (t12 != 47390) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x71 = INT64_MAX;
	volatile uint64_t t13 = 2741LLU;

	t13 = ((x69|(x70+x71))+x72);

	if (t13 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = UINT16_MAX;
	uint16_t x78 = 4U;
	volatile int64_t x79 = INT64_MIN;
	static volatile uint32_t x80 = UINT32_MAX;
	static int64_t t14 = 340990443781369LL;

	t14 = ((x77|(x78+x79))+x80);

	if (t14 != -9223372032559742978LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -243065;
	static volatile int64_t t15 = -10554218160LL;

	t15 = ((x81|(x82+x83))+x84);

	if (t15 != -9223372032560084346LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = -979;
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = -1;
	volatile int32_t t16 = -276744984;

	t16 = ((x85|(x86+x87))+x88);

	if (t16 != -724) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x89 = 2U;
	int64_t x90 = INT64_MIN;
	static uint8_t x91 = 18U;
	static uint64_t x92 = UINT64_MAX;
	static uint64_t t17 = 594252328064628LLU;

	t17 = ((x89|(x90+x91))+x92);

	if (t17 != 9223372036854775825LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	static int32_t x95 = INT32_MIN;
	static uint64_t x96 = 27LLU;
	volatile uint64_t t18 = 7533LLU;

	t18 = ((x93|(x94+x95))+x96);

	if (t18 != 26LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = -1;
	static uint16_t x98 = 181U;
	static int64_t x99 = -1LL;
	uint8_t x100 = 52U;
	volatile int64_t t19 = 448752027504LL;

	t19 = ((x97|(x98+x99))+x100);

	if (t19 != 51LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x102 = INT8_MAX;
	static uint32_t x103 = 15505U;
	int64_t x104 = -1LL;
	static uint64_t t20 = 103830LLU;

	t20 = ((x101|(x102+x103))+x104);

	if (t20 != 17167511584152LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	volatile uint64_t x110 = 7085011144LLU;
	int16_t x112 = -1;
	volatile uint64_t t21 = 1531LLU;

	t21 = ((x109|(x110+x111))+x112);

	if (t21 != 9223372043939789453LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MAX;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = 6;
	int16_t x116 = INT16_MAX;
	volatile int32_t t22 = 3536;

	t22 = ((x113|(x114+x115))+x116);

	if (t22 != 33150) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = -7625;
	int32_t x118 = INT32_MIN;
	static uint32_t x119 = 88342U;

	t23 = ((x117|(x118+x119))+x120);

	if (t23 != -9223372032559809737LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 732U;
	uint8_t x122 = UINT8_MAX;
	static uint32_t x123 = 4276034U;
	int8_t x124 = INT8_MAX;
	uint32_t t24 = 1822096109U;

	t24 = ((x121|(x122+x123))+x124);

	if (t24 != 4277084U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = 7U;
	uint32_t x127 = 21286U;
	uint8_t x128 = UINT8_MAX;

	t25 = ((x125|(x126+x127))+x128);

	if (t25 != 21542LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x130 = 6555773406LLU;
	uint8_t x131 = 44U;
	int64_t x132 = 14801680262LL;
	uint64_t t26 = 75312684839LLU;

	t26 = ((x129|(x130+x131))+x132);

	if (t26 != 1346556535931762132LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile int64_t t27 = -1LL;

	t27 = ((x133|(x134+x135))+x136);

	if (t27 != -257LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x137 = 2LLU;
	static uint8_t x138 = 24U;
	volatile uint16_t x139 = 6U;
	volatile int8_t x140 = 0;
	volatile uint64_t t28 = 150082512694667LLU;

	t28 = ((x137|(x138+x139))+x140);

	if (t28 != 30LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x147 = 1U;
	volatile int16_t x148 = INT16_MAX;
	int32_t t29 = 19;

	t29 = ((x145|(x146+x147))+x148);

	if (t29 != 1795588) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MIN;
	volatile uint16_t x155 = 8060U;
	static uint16_t x156 = 26U;

	t30 = ((x153|(x154+x155))+x156);

	if (t30 != -2147475690) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x157 = -2;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = 596515LL;
	uint64_t x160 = UINT64_MAX;

	t31 = ((x157|(x158+x159))+x160);

	if (t31 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	int32_t t32 = 68596;

	t32 = ((x161|(x162+x163))+x164);

	if (t32 != -405142) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = 1U;
	uint8_t x172 = 1U;

	t33 = ((x169|(x170+x171))+x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -991;
	int8_t x174 = 1;
	int8_t x175 = -16;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t34 = -55983899;

	t34 = ((x173|(x174+x175))+x176);

	if (t34 != 240) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MIN;
	static int32_t x178 = INT32_MIN;
	uint64_t x179 = 28892134LLU;
	int32_t x180 = -1;
	volatile uint64_t t35 = 207366039483509LLU;

	t35 = ((x177|(x178+x179))+x180);

	if (t35 != 18446744071590960101LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x186 = 11U;
	uint64_t t36 = 6991729328LLU;

	t36 = ((x185|(x186+x187))+x188);

	if (t36 != 59581085739LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = -1LL;
	uint16_t x190 = 97U;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MIN;

	t37 = ((x189|(x190+x191))+x192);

	if (t37 != -2147483649LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x193 = 4U;
	uint64_t x194 = 13523285LLU;
	uint16_t x195 = 4U;
	int16_t x196 = 158;
	static uint64_t t38 = 37936158767330LLU;

	t38 = ((x193|(x194+x195))+x196);

	if (t38 != 13523451LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x198 = -32;
	int16_t x199 = -6;
	volatile int32_t t39 = -14534026;

	t39 = ((x197|(x198+x199))+x200);

	if (t39 != -32773) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = -1;
	static volatile uint64_t x202 = UINT64_MAX;
	uint16_t x204 = 26U;

	t40 = ((x201|(x202+x203))+x204);

	if (t40 != 25LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = -1;
	int8_t x207 = -1;
	int16_t x208 = INT16_MAX;
	volatile int64_t t41 = 325442975931LL;

	t41 = ((x205|(x206+x207))+x208);

	if (t41 != 32765LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x216 = 7847;

	t42 = ((x213|(x214+x215))+x216);

	if (t42 != 7772LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = 2070659U;
	int64_t x218 = -1LL;
	volatile int64_t x219 = -1LL;
	uint64_t x220 = 200LLU;
	volatile uint64_t t43 = 62158LLU;

	t43 = ((x217|(x218+x219))+x220);

	if (t43 != 199LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x223 = -1LL;
	volatile int8_t x224 = 0;
	volatile int64_t t44 = 155618826763LL;

	t44 = ((x221|(x222+x223))+x224);

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x230 = 9;
	int32_t x231 = -50;
	static volatile int8_t x232 = INT8_MIN;
	volatile int32_t t45 = 21466537;

	t45 = ((x229|(x230+x231))+x232);

	if (t45 != -169) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x233 = -14;
	volatile int32_t x234 = 12221;
	uint32_t x235 = 2310U;
	uint16_t x236 = 18311U;
	uint32_t t46 = 52097661U;

	t46 = ((x233|(x234+x235))+x236);

	if (t46 != 18298U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x238 = -1;
	int64_t x239 = 16LL;
	int64_t x240 = -1LL;
	int64_t t47 = 915538011156LL;

	t47 = ((x237|(x238+x239))+x240);

	if (t47 != 30LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x241 = 522639512677067LLU;
	int32_t x243 = INT32_MIN;
	uint64_t t48 = 1336LLU;

	t48 = ((x241|(x242+x243))+x244);

	if (t48 != 2122317822LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 13U;
	int64_t x247 = INT64_MIN;
	int64_t t49 = 772615LL;

	t49 = ((x245|(x246+x247))+x248);

	if (t49 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = 62289862318LLU;

	t50 = ((x249|(x250+x251))+x252);

	if (t50 != 12708LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = UINT64_MAX;
	static volatile uint64_t t51 = 208LLU;

	t51 = ((x253|(x254+x255))+x256);

	if (t51 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x258 = 1U;
	static int64_t x260 = -86517836923LL;
	static volatile int64_t t52 = -14738470931588LL;

	t52 = ((x257|(x258+x259))+x260);

	if (t52 != -86517836924LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x262 = 530176165U;
	static uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MIN;
	uint32_t t53 = 213U;

	t53 = ((x261|(x262+x263))+x264);

	if (t53 != 532676470U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x277 = -1LL;
	int32_t x278 = INT32_MAX;
	static uint32_t x279 = 132805U;
	uint32_t x280 = UINT32_MAX;
	static int64_t t54 = 30LL;

	t54 = ((x277|(x278+x279))+x280);

	if (t54 != 4294967294LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = INT16_MAX;
	uint32_t x286 = 331U;
	int8_t x288 = INT8_MIN;
	int64_t t55 = -222148941028239497LL;

	t55 = ((x285|(x286+x287))+x288);

	if (t55 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = 1;
	int32_t x291 = -3;
	uint32_t x292 = 28360371U;
	volatile uint32_t t56 = 191209158U;

	t56 = ((x289|(x290+x291))+x292);

	if (t56 != 28360369U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x296 = -1;
	uint64_t t57 = 43580340LLU;

	t57 = ((x293|(x294+x295))+x296);

	if (t57 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int16_t x299 = 0;
	int32_t t58 = 220666;

	t58 = ((x297|(x298+x299))+x300);

	if (t58 != 161) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = 105173074997458LL;
	static volatile uint64_t x302 = UINT64_MAX;
	int32_t x304 = INT32_MIN;

	t59 = ((x301|(x302+x303))+x304);

	if (t59 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x305 = UINT8_MAX;
	static volatile int16_t x306 = 54;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = UINT8_MAX;

	t60 = ((x305|(x306+x307))+x308);

	if (t60 != 510U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t61 = 15843050;

	t61 = ((x309|(x310+x311))+x312);

	if (t61 != -32770) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = 29;
	int64_t x315 = -114LL;
	int32_t x316 = INT32_MIN;
	static int64_t t62 = -1149LL;

	t62 = ((x313|(x314+x315))+x316);

	if (t62 != -2147483649LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = -1;
	static volatile int8_t x318 = -1;
	volatile uint8_t x320 = 32U;
	volatile int32_t t63 = -62540;

	t63 = ((x317|(x318+x319))+x320);

	if (t63 != 31) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	static int64_t x328 = -2436923556563239183LL;
	int64_t t64 = 231694767032921109LL;

	t64 = ((x325|(x326+x327))+x328);

	if (t64 != -2436923556563239311LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x330 = UINT16_MAX;
	volatile int32_t x332 = INT32_MIN;

	t65 = ((x329|(x330+x331))+x332);

	if (t65 != -2147385345) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = -1LL;
	volatile uint8_t x334 = 3U;
	int64_t x335 = -1LL;
	uint8_t x336 = 56U;
	int64_t t66 = 153287920171949LL;

	t66 = ((x333|(x334+x335))+x336);

	if (t66 != 55LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = INT16_MAX;
	uint8_t x338 = 103U;
	uint8_t x340 = 0U;
	int32_t t67 = -50;

	t67 = ((x337|(x338+x339))+x340);

	if (t67 != -1802241) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	static int32_t x342 = -1;
	volatile int8_t x343 = INT8_MIN;
	volatile int64_t x344 = 488LL;
	static volatile int64_t t68 = -639LL;

	t68 = ((x341|(x342+x343))+x344);

	if (t68 != 487LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MAX;
	static uint8_t x351 = 15U;
	int32_t x352 = INT32_MIN;
	int32_t t69 = 442051;

	t69 = ((x349|(x350+x351))+x352);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = UINT16_MAX;
	static int64_t x355 = 15709125252175LL;
	volatile int64_t t70 = 43LL;

	t70 = ((x353|(x354+x355))+x356);

	if (t70 != 15704830312447LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x357 = INT64_MIN;
	int32_t x358 = 14;
	int16_t x359 = 11;
	uint64_t t71 = 1237779LLU;

	t71 = ((x357|(x358+x359))+x360);

	if (t71 != 9224485073442406033LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x362 = -6;
	int16_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t72 = 761665;

	t72 = ((x361|(x362+x363))+x364);

	if (t72 != 32760) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x366 = -592;
	int16_t x367 = INT16_MIN;
	int64_t x368 = 59993LL;

	t73 = ((x365|(x366+x367))+x368);

	if (t73 != 59401LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x369 = INT64_MIN;
	int16_t x370 = -7;
	int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MAX;

	t74 = ((x369|(x370+x371))+x372);

	if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x373 = 265110265681LLU;
	static uint32_t x374 = UINT32_MAX;
	int32_t x375 = -59;
	static volatile uint64_t t75 = 1016468000LLU;

	t75 = ((x373|(x374+x375))+x376);

	if (t75 != 266289307073LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x377 = INT32_MAX;
	int8_t x378 = 11;
	volatile uint64_t x380 = 33904240739LLU;
	volatile uint64_t t76 = 145557735469LLU;

	t76 = ((x377|(x378+x379))+x380);

	if (t76 != 36051724386LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = 20LL;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = -1282018117842LL;
	int64_t t77 = -2113165414612520322LL;

	t77 = ((x381|(x382+x383))+x384);

	if (t77 != 9223370754836657837LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x385 = -1LL;
	volatile int8_t x386 = -12;
	int8_t x387 = -1;
	uint32_t x388 = UINT32_MAX;
	static int64_t t78 = -821838341494LL;

	t78 = ((x385|(x386+x387))+x388);

	if (t78 != 4294967294LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x389 = UINT32_MAX;
	static int32_t x390 = INT32_MAX;
	int32_t x391 = -1;
	static uint16_t x392 = 3132U;
	uint32_t t79 = 70061U;

	t79 = ((x389|(x390+x391))+x392);

	if (t79 != 3131U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x394 = 3;
	volatile int8_t x395 = 7;
	int8_t x396 = INT8_MAX;

	t80 = ((x393|(x394+x395))+x396);

	if (t80 != 126) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 9311228LLU;
	uint8_t x399 = UINT8_MAX;
	volatile uint16_t x400 = 87U;
	volatile uint64_t t81 = 8259358371418LLU;

	t81 = ((x397|(x398+x399))+x400);

	if (t81 != 4294967382LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x401 = UINT8_MAX;
	int16_t x402 = 96;
	int8_t x403 = -62;
	int16_t x404 = INT16_MAX;
	int32_t t82 = 1;

	t82 = ((x401|(x402+x403))+x404);

	if (t82 != 33022) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MIN;
	int64_t x407 = -701681339LL;
	int64_t x408 = 0LL;
	int64_t t83 = 98LL;

	t83 = ((x405|(x406+x407))+x408);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x413 = 5U;
	volatile int16_t x416 = INT16_MAX;
	uint32_t t84 = 32U;

	t84 = ((x413|(x414+x415))+x416);

	if (t84 != 32780U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = -4923;
	int16_t x418 = -358;
	uint8_t x419 = UINT8_MAX;
	static int16_t x420 = 5087;

	t85 = ((x417|(x418+x419))+x420);

	if (t85 != 5052) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = -1557;
	volatile uint16_t x422 = UINT16_MAX;
	int16_t x423 = -1;
	int16_t x424 = INT16_MIN;
	volatile int32_t t86 = -1398;

	t86 = ((x421|(x422+x423))+x424);

	if (t86 != -32769) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x425 = UINT8_MAX;
	int8_t x426 = 1;
	int64_t x427 = 13661LL;
	static uint16_t x428 = UINT16_MAX;
	volatile int64_t t87 = 14810324621LL;

	t87 = ((x425|(x426+x427))+x428);

	if (t87 != 79358LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = 23U;
	uint32_t x435 = UINT32_MAX;
	static volatile int64_t x436 = 163807186LL;
	int64_t t88 = -1435LL;

	t88 = ((x433|(x434+x435))+x436);

	if (t88 != 4458774353LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = INT8_MAX;
	uint64_t x439 = 830491716651LLU;
	int16_t x440 = -1;
	uint64_t t89 = 346113LLU;

	t89 = ((x437|(x438+x439))+x440);

	if (t89 != 830491716734LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x441 = INT8_MIN;
	volatile int8_t x442 = -1;
	uint8_t x443 = UINT8_MAX;
	static int64_t x444 = -3273003LL;
	volatile int64_t t90 = 47LL;

	t90 = ((x441|(x442+x443))+x444);

	if (t90 != -3273005LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = INT64_MIN;
	int8_t x447 = INT8_MAX;
	static volatile int64_t t91 = 830525198LL;

	t91 = ((x445|(x446+x447))+x448);

	if (t91 != -9223372036854764156LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x449 = 2323684745430704047LLU;
	static int16_t x451 = INT16_MAX;
	volatile int16_t x452 = -1;
	static volatile uint64_t t92 = 752547543493043LLU;

	t92 = ((x449|(x450+x451))+x452);

	if (t92 != 2323684745430728686LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x453 = 90U;
	static volatile int64_t x455 = INT64_MIN;
	static uint16_t x456 = 4U;

	t93 = ((x453|(x454+x455))+x456);

	if (t93 != -9223372036854743037LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x458 = INT8_MIN;
	uint16_t x459 = 40U;
	int32_t t94 = 29775;

	t94 = ((x457|(x458+x459))+x460);

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x461 = 20125U;
	int32_t x463 = INT32_MIN;

	t95 = ((x461|(x462+x463))+x464);

	if (t95 != 20124U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 268U;
	int8_t x466 = INT8_MAX;
	uint16_t x467 = 39U;
	static int32_t t96 = -279339412;

	t96 = ((x465|(x466+x467))+x468);

	if (t96 != 557) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x469 = 5312;
	int16_t x470 = INT16_MIN;
	uint64_t x471 = 92463420800935512LLU;
	volatile uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t97 = 1690LLU;

	t97 = ((x469|(x470+x471))+x472);

	if (t97 != 92463420800906967LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = -1;
	uint16_t x478 = 7U;
	int32_t x480 = 304249537;
	volatile int32_t t98 = 1;

	t98 = ((x477|(x478+x479))+x480);

	if (t98 != 304249536) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x482 = 1U;
	int64_t x483 = -1LL;
	volatile int64_t t99 = -62297697LL;

	t99 = ((x481|(x482+x483))+x484);

	if (t99 != 156635855LL) { NG(); } else { ; }
	
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

