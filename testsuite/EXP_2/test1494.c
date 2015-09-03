#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -701910;
static uint64_t x6 = 4210720LLU;
int32_t x8 = -4091;
static int32_t t1 = -76;
int8_t x13 = INT8_MAX;
static uint64_t x16 = 273223035705357LLU;
int32_t x17 = INT32_MIN;
int8_t x20 = INT8_MAX;
int32_t t4 = 123084;
int16_t x21 = -1614;
static uint64_t x38 = 101144LLU;
uint8_t x39 = 61U;
int8_t x43 = -14;
volatile int32_t x47 = INT32_MAX;
static int8_t x58 = INT8_MAX;
static int8_t x59 = INT8_MIN;
static uint32_t x61 = 306438957U;
volatile uint64_t x65 = 72074071LLU;
static int8_t x71 = -18;
volatile int64_t x72 = 7957903755165647LL;
int64_t t17 = 7141LL;
static int32_t t18 = 3796;
static int32_t t19 = -1433793;
volatile uint8_t x87 = UINT8_MAX;
volatile int32_t t22 = -40205374;
volatile uint16_t x96 = 7U;
volatile int64_t t23 = -705319609198530LL;
int32_t x103 = -99242;
int32_t t25 = -3543;
static int32_t x111 = INT32_MIN;
volatile int64_t t27 = 34907589015391410LL;
int8_t x115 = INT8_MAX;
volatile int64_t t29 = -7595LL;
volatile int8_t x128 = INT8_MAX;
int16_t x130 = INT16_MAX;
static int32_t t33 = 3974951;
int64_t x137 = 4201LL;
uint16_t x138 = UINT16_MAX;
int64_t t34 = -57882LL;
static int16_t x146 = -1;
int32_t x147 = INT32_MIN;
volatile uint32_t t36 = 0U;
int64_t x149 = INT64_MAX;
uint16_t x152 = UINT16_MAX;
static int64_t x157 = INT64_MIN;
static int32_t x158 = -223326;
uint32_t x159 = 324U;
int32_t x162 = INT32_MIN;
volatile int32_t x165 = INT32_MAX;
static uint8_t x172 = 17U;
volatile uint64_t t44 = UINT64_MAX;
volatile int32_t x182 = 0;
static uint64_t x187 = 14689955LLU;
int32_t t48 = 1637371;
int16_t x206 = -12;
volatile int16_t x213 = -1;
uint32_t x220 = 987U;
int32_t t55 = 0;
int16_t x225 = 89;
static volatile int64_t x228 = 117912111LL;
int64_t x232 = -281422LL;
uint64_t t57 = 111930546472LLU;
volatile uint16_t x238 = 179U;
static uint64_t t59 = 852846756183913LLU;
int16_t x241 = INT16_MIN;
int32_t x244 = -1;
int8_t x250 = 12;
int64_t x265 = 32LL;
uint16_t x267 = 536U;
int32_t x268 = INT32_MIN;
int64_t x271 = INT64_MAX;
uint8_t x275 = UINT8_MAX;
int64_t x281 = -1LL;
int64_t t70 = 1361LL;
volatile int32_t x285 = -1;
volatile uint64_t x286 = 8107671LLU;
uint16_t x287 = 1596U;
volatile int64_t x289 = INT64_MAX;
uint64_t t73 = 289179359416616862LLU;
int32_t x298 = -1;
int16_t x301 = INT16_MIN;
static int16_t x302 = INT16_MIN;
int64_t x308 = 11LL;
uint64_t t78 = 0LLU;
int64_t x338 = INT64_MIN;
int32_t x339 = -1;
static int8_t x346 = -4;
static int16_t x353 = INT16_MIN;
int64_t x355 = INT64_MAX;
int32_t t88 = -5489612;
static uint8_t x362 = UINT8_MAX;
int32_t x365 = 2553415;
volatile int32_t t92 = -202576407;
int16_t x373 = INT16_MIN;
int64_t x375 = -47737088820LL;
int64_t x378 = INT64_MIN;
int64_t t94 = INT64_MIN;
uint32_t x384 = UINT32_MAX;
int64_t x386 = INT64_MIN;
uint8_t x389 = 1U;
static int32_t t97 = 12360;
uint32_t x393 = 7819U;
int16_t x396 = INT16_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	static volatile int64_t x3 = -2LL;
	volatile int16_t x4 = 6161;

	t0 = ((x1&(x2<x3))|x4);

	if (t0 != 6161) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x7 = 39U;

	t1 = ((x5&(x6<x7))|x8);

	if (t1 != -4091) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MAX;
	int8_t x11 = 0;
	int8_t x12 = -1;
	volatile int64_t t2 = 113602311268087364LL;

	t2 = ((x9&(x10<x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	uint64_t t3 = 12471771468407803LLU;

	t3 = ((x13&(x14<x15))|x16);

	if (t3 != 273223035705357LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 8U;

	t4 = ((x17&(x18<x19))|x20);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = 15U;
	static uint64_t x23 = 2298244980389444782LLU;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 0;

	t5 = ((x21&(x22<x23))|x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -582592815;
	int16_t x26 = -1;
	static uint8_t x27 = 4U;
	volatile int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = -874986482LL;

	t6 = ((x25&(x26<x27))|x28);

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static uint16_t x30 = 97U;
	int32_t x31 = 45354390;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x29&(x30<x31))|x32);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 35296;
	int16_t x34 = INT16_MIN;
	volatile int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 789;

	t8 = ((x33&(x34<x35))|x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1659236U;
	int16_t x40 = -410;
	volatile uint32_t t9 = 806136796U;

	t9 = ((x37&(x38<x39))|x40);

	if (t9 != 4294966886U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1071371103956LLU;
	static uint8_t x42 = 1U;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 316LLU;

	t10 = ((x41&(x42<x43))|x44);

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 2380LLU;
	int32_t x46 = -1;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x45&(x46<x47))|x48);

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -17490364907104LL;
	int32_t x50 = INT32_MAX;
	int8_t x51 = INT8_MAX;
	static volatile int8_t x52 = INT8_MAX;
	volatile int64_t t12 = -3579328669344045653LL;

	t12 = ((x49&(x50<x51))|x52);

	if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -2LL;
	int8_t x54 = INT8_MAX;
	int32_t x55 = 18554;
	static int32_t x56 = -1;
	volatile int64_t t13 = 240LL;

	t13 = ((x53&(x54<x55))|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 850;
	int64_t x60 = -1LL;
	int64_t t14 = -1623660035875LL;

	t14 = ((x57&(x58<x59))|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = -1886435900657776LL;
	uint8_t x63 = 0U;
	volatile int8_t x64 = -1;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = ((x61&(x62<x63))|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 397U;
	int16_t x67 = -15;
	int32_t x68 = INT32_MIN;
	uint64_t t16 = 7157468640217LLU;

	t16 = ((x65&(x66<x67))|x68);

	if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 6537427LL;
	uint64_t x70 = UINT64_MAX;

	t17 = ((x69&(x70<x71))|x72);

	if (t17 != 7957903755165647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	volatile int32_t x75 = -13;
	int8_t x76 = INT8_MIN;

	t18 = ((x73&(x74<x75))|x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 2;
	int8_t x78 = 14;
	int16_t x79 = -13157;
	int16_t x80 = -1;

	t19 = ((x77&(x78<x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 34U;
	uint8_t x82 = 5U;
	int64_t x83 = 8153795175LL;
	volatile uint8_t x84 = UINT8_MAX;
	static volatile int32_t t20 = 23419333;

	t20 = ((x81&(x82<x83))|x84);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 409U;
	int64_t x86 = -1LL;
	int16_t x88 = 1156;
	uint32_t t21 = 4U;

	t21 = ((x85&(x86<x87))|x88);

	if (t21 != 1157U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 6U;
	int8_t x90 = INT8_MIN;
	static volatile int8_t x91 = -1;
	int16_t x92 = INT16_MIN;

	t22 = ((x89&(x90<x91))|x92);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	uint16_t x94 = 59U;
	int32_t x95 = -1;

	t23 = ((x93&(x94<x95))|x96);

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 283791081233972152LLU;
	uint32_t x100 = 35513U;
	uint32_t t24 = 498U;

	t24 = ((x97&(x98<x99))|x100);

	if (t24 != 35513U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	static int32_t x102 = -10;
	int8_t x104 = INT8_MIN;

	t25 = ((x101&(x102<x103))|x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 187738295408460LLU;
	static int64_t x106 = -696351023LL;
	uint16_t x107 = 6U;
	volatile int8_t x108 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x105&(x106<x107))|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = 2160092415028LLU;
	static uint16_t x112 = 219U;

	t27 = ((x109&(x110<x111))|x112);

	if (t27 != 219LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	int32_t x116 = -51;
	static int64_t t28 = 16461908LL;

	t28 = ((x113&(x114<x115))|x116);

	if (t28 != -51LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = INT64_MAX;
	static int64_t x120 = -1767516LL;

	t29 = ((x117&(x118<x119))|x120);

	if (t29 != -1767516LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int16_t x122 = -139;
	static int32_t x123 = 75220659;
	volatile int64_t x124 = INT64_MAX;
	static volatile int64_t t30 = INT64_MAX;

	t30 = ((x121&(x122<x123))|x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	static int16_t x126 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t t31 = 22U;

	t31 = ((x125&(x126<x127))|x128);

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	static int8_t x131 = -1;
	uint8_t x132 = 6U;
	static volatile int32_t t32 = 244;

	t32 = ((x129&(x130<x131))|x132);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -10024;
	int16_t x134 = INT16_MAX;
	uint64_t x135 = 11177364LLU;
	uint16_t x136 = UINT16_MAX;

	t33 = ((x133&(x134<x135))|x136);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = 4;
	volatile uint8_t x140 = UINT8_MAX;

	t34 = ((x137&(x138<x139))|x140);

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = -766269;
	int64_t x142 = -1LL;
	static int8_t x143 = 15;
	int32_t x144 = -4;
	int32_t t35 = 10;

	t35 = ((x141&(x142<x143))|x144);

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 386829455;
	uint32_t x148 = 942676U;

	t36 = ((x145&(x146<x147))|x148);

	if (t36 != 942676U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 748062737704LLU;
	int64_t t37 = -2885467LL;

	t37 = ((x149&(x150<x151))|x152);

	if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 25475958375998842LL;
	volatile uint64_t x154 = 203875LLU;
	uint64_t x155 = 262390258LLU;
	int64_t x156 = -1LL;
	static int64_t t38 = -359412595LL;

	t38 = ((x153&(x154<x155))|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x160 = 1;
	static int64_t t39 = -41953097517415289LL;

	t39 = ((x157&(x158<x159))|x160);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 126U;
	static int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -1;

	t40 = ((x161&(x162<x163))|x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MAX;
	int8_t x167 = 3;
	volatile int32_t x168 = -103817;
	int32_t t41 = -27;

	t41 = ((x165&(x166<x167))|x168);

	if (t41 != -103817) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 12LLU;
	int8_t x170 = 17;
	int64_t x171 = INT64_MAX;
	volatile uint64_t t42 = 2857LLU;

	t42 = ((x169&(x170<x171))|x172);

	if (t42 != 17LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	static int8_t x175 = -1;
	int32_t x176 = -1;
	static int32_t t43 = -519518;

	t43 = ((x173&(x174<x175))|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = 8345;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	static uint64_t x180 = UINT64_MAX;

	t44 = ((x177&(x178<x179))|x180);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	static int64_t x183 = INT64_MIN;
	volatile int8_t x184 = INT8_MIN;
	int64_t t45 = -3684146804397895LL;

	t45 = ((x181&(x182<x183))|x184);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	volatile int32_t x186 = 2496;
	volatile int64_t x188 = -1LL;
	int64_t t46 = 349009200425787LL;

	t46 = ((x185&(x186<x187))|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 13;
	static int64_t x190 = 545746398LL;
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = ((x189&(x190<x191))|x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int64_t x194 = 323359649LL;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;

	t48 = ((x193&(x194<x195))|x196);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = -1;
	int32_t x199 = INT32_MAX;
	volatile uint64_t x200 = 661048305LLU;
	uint64_t t49 = 2LLU;

	t49 = ((x197&(x198<x199))|x200);

	if (t49 != 661048305LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = -7;
	int32_t x203 = -14836493;
	uint16_t x204 = 2U;
	volatile uint64_t t50 = 1335184506059LLU;

	t50 = ((x201&(x202<x203))|x204);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x207 = 1U;
	static volatile uint32_t x208 = 3672818U;
	uint32_t t51 = 1U;

	t51 = ((x205&(x206<x207))|x208);

	if (t51 != 3672818U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -476017344;
	uint8_t x210 = 1U;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MAX;
	int32_t t52 = INT32_MAX;

	t52 = ((x209&(x210<x211))|x212);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = -1;
	int64_t x215 = INT64_MAX;
	volatile int32_t x216 = 1;
	volatile int32_t t53 = -10818539;

	t53 = ((x213&(x214<x215))|x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -65248171;
	int32_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	uint32_t t54 = 693825U;

	t54 = ((x217&(x218<x219))|x220);

	if (t54 != 987U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = 199U;
	volatile uint64_t x222 = UINT64_MAX;
	volatile int16_t x223 = INT16_MAX;
	volatile uint8_t x224 = 6U;

	t55 = ((x221&(x222<x223))|x224);

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x226 = 0U;
	int8_t x227 = INT8_MIN;
	int64_t t56 = 725179136LL;

	t56 = ((x225&(x226<x227))|x228);

	if (t56 != 117912111LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 2LLU;
	int16_t x230 = -1;
	uint8_t x231 = 4U;

	t57 = ((x229&(x230<x231))|x232);

	if (t57 != 18446744073709270194LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int16_t x234 = 13989;
	int32_t x235 = INT32_MIN;
	int32_t x236 = 213660;
	int32_t t58 = 5208;

	t58 = ((x233&(x234<x235))|x236);

	if (t58 != 213660) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -18;
	volatile int8_t x239 = 2;
	uint64_t x240 = 520080672LLU;

	t59 = ((x237&(x238<x239))|x240);

	if (t59 != 520080672LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = 2419U;
	int16_t x243 = INT16_MIN;
	volatile int32_t t60 = -7896291;

	t60 = ((x241&(x242<x243))|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t61 = INT32_MAX;

	t61 = ((x245&(x246<x247))|x248);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static uint32_t x251 = 23013939U;
	static uint16_t x252 = 1U;
	int32_t t62 = 13487107;

	t62 = ((x249&(x250<x251))|x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MIN;
	static uint16_t x255 = 710U;
	int64_t x256 = INT64_MIN;
	uint64_t t63 = 386305LLU;

	t63 = ((x253&(x254<x255))|x256);

	if (t63 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = INT64_MIN;
	static volatile int8_t x258 = INT8_MIN;
	static uint32_t x259 = UINT32_MAX;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = INT64_MIN;

	t64 = ((x257&(x258<x259))|x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	static volatile uint8_t x262 = UINT8_MAX;
	uint8_t x263 = 18U;
	static volatile int64_t x264 = INT64_MAX;
	int64_t t65 = INT64_MAX;

	t65 = ((x261&(x262<x263))|x264);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MIN;
	static int64_t t66 = -2165523260648523LL;

	t66 = ((x265&(x266<x267))|x268);

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 30U;
	int16_t x270 = -25;
	uint16_t x272 = 92U;
	static volatile int32_t t67 = -9638910;

	t67 = ((x269&(x270<x271))|x272);

	if (t67 != 92) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = UINT32_MAX;
	static volatile int8_t x274 = 0;
	volatile int32_t x276 = 16;
	volatile uint32_t t68 = 62478962U;

	t68 = ((x273&(x274<x275))|x276);

	if (t68 != 17U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -11;
	int32_t x278 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	static volatile int16_t x280 = -27;
	static int32_t t69 = -328;

	t69 = ((x277&(x278<x279))|x280);

	if (t69 != -27) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -1LL;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = 7785634;

	t70 = ((x281&(x282<x283))|x284);

	if (t70 != 7785634LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = ((x285&(x286<x287))|x288);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 61U;
	volatile int16_t x291 = -13;
	uint8_t x292 = 11U;
	static volatile int64_t t72 = -1LL;

	t72 = ((x289&(x290<x291))|x292);

	if (t72 != 11LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 202LLU;
	static uint8_t x294 = 119U;
	static int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;

	t73 = ((x293&(x294<x295))|x296);

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	int32_t x299 = INT32_MAX;
	volatile uint16_t x300 = 603U;
	int64_t t74 = 24LL;

	t74 = ((x297&(x298<x299))|x300);

	if (t74 != 603LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MIN;
	int32_t t75 = 214052786;

	t75 = ((x301&(x302<x303))|x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	volatile int16_t x306 = INT16_MAX;
	uint16_t x307 = UINT16_MAX;
	int64_t t76 = 8186705054505332LL;

	t76 = ((x305&(x306<x307))|x308);

	if (t76 != 11LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 51U;
	int64_t x310 = -1LL;
	volatile int64_t x311 = INT64_MIN;
	static int32_t x312 = INT32_MIN;
	volatile uint32_t t77 = 722031U;

	t77 = ((x309&(x310<x311))|x312);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 9455LLU;
	uint64_t x314 = 446072304LLU;
	int32_t x315 = -60;
	uint16_t x316 = 167U;

	t78 = ((x313&(x314<x315))|x316);

	if (t78 != 167LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	static int64_t x319 = INT64_MIN;
	volatile uint8_t x320 = 21U;
	volatile int32_t t79 = 88512;

	t79 = ((x317&(x318<x319))|x320);

	if (t79 != 21) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 288U;
	int64_t x322 = -14113327474650LL;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 12777;

	t80 = ((x321&(x322<x323))|x324);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -1698;
	int8_t x326 = -37;
	static int16_t x327 = -1;
	uint16_t x328 = 8482U;
	volatile int32_t t81 = 271;

	t81 = ((x325&(x326<x327))|x328);

	if (t81 != 8482) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 185LLU;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 1977;
	int32_t x332 = INT32_MIN;
	uint64_t t82 = 40932LLU;

	t82 = ((x329&(x330<x331))|x332);

	if (t82 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 429U;
	int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = 139;
	uint32_t t83 = 39834500U;

	t83 = ((x333&(x334<x335))|x336);

	if (t83 != 139U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x337 = 8U;
	uint32_t x340 = 327828U;
	uint32_t t84 = 10486306U;

	t84 = ((x337&(x338<x339))|x340);

	if (t84 != 327828U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int32_t x342 = 766120356;
	int32_t x343 = -110518;
	int8_t x344 = -1;
	volatile int32_t t85 = 9;

	t85 = ((x341&(x342<x343))|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	int16_t x347 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -31607834;

	t86 = ((x345&(x346<x347))|x348);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = INT32_MAX;
	int32_t x350 = -1;
	uint8_t x351 = 1U;
	int16_t x352 = 63;
	int32_t t87 = 20;

	t87 = ((x349&(x350<x351))|x352);

	if (t87 != 63) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = 0;
	uint16_t x356 = 430U;

	t88 = ((x353&(x354<x355))|x356);

	if (t88 != 430) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MIN;
	static uint64_t x359 = UINT64_MAX;
	volatile int16_t x360 = -1;
	int32_t t89 = -980152;

	t89 = ((x357&(x358<x359))|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int8_t x363 = 1;
	int32_t x364 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = ((x361&(x362<x363))|x364);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MAX;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -5382;

	t91 = ((x365&(x366<x367))|x368);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 0U;
	int32_t x370 = 295;
	int16_t x371 = -1;
	static uint16_t x372 = 49U;

	t92 = ((x369&(x370<x371))|x372);

	if (t92 != 49) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = 3296149512LLU;
	volatile int8_t x376 = -1;
	int32_t t93 = 35178;

	t93 = ((x373&(x374<x375))|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 0U;
	uint8_t x379 = 49U;
	int64_t x380 = INT64_MIN;

	t94 = ((x377&(x378<x379))|x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MAX;
	uint64_t t95 = 980124790486812089LLU;

	t95 = ((x381&(x382<x383))|x384);

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -13065900;
	static int16_t x387 = INT16_MAX;
	static uint32_t x388 = 4500U;
	static uint32_t t96 = 2104796U;

	t96 = ((x385&(x386<x387))|x388);

	if (t96 != 4500U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	int16_t x391 = -1;
	uint16_t x392 = 3U;

	t97 = ((x389&(x390<x391))|x392);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	static uint64_t x395 = UINT64_MAX;
	volatile uint32_t t98 = 47937U;

	t98 = ((x393&(x394<x395))|x396);

	if (t98 != 32767U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = 998855143;
	static int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 389U;
	volatile int32_t t99 = -7;

	t99 = ((x397&(x398<x399))|x400);

	if (t99 != 389) { NG(); } else { ; }
	
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

