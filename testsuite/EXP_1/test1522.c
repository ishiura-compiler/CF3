#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
volatile int8_t x6 = -1;
static volatile int16_t x8 = -1498;
static int32_t x22 = INT32_MIN;
static int64_t x27 = 0LL;
int8_t x28 = -23;
volatile int64_t x30 = INT64_MIN;
int64_t x32 = 204682624734761LL;
volatile int64_t t6 = -258221765016367734LL;
volatile uint8_t x37 = 30U;
int64_t x38 = -1085527LL;
uint8_t x42 = 0U;
int16_t x46 = INT16_MIN;
static int8_t x48 = INT8_MIN;
static int32_t x55 = 325400997;
int8_t x56 = INT8_MIN;
int32_t t12 = -92;
static uint64_t x64 = UINT64_MAX;
static uint16_t x68 = 1280U;
static int8_t x69 = -1;
int32_t x71 = INT32_MIN;
static volatile int64_t x73 = -1LL;
int16_t x75 = INT16_MIN;
static uint64_t x79 = 1054799984798947LLU;
int16_t x80 = INT16_MIN;
volatile int64_t x83 = INT64_MIN;
uint32_t x86 = 0U;
static int32_t x87 = 3426811;
uint32_t x90 = 8U;
int8_t x101 = -3;
volatile uint64_t x108 = UINT64_MAX;
volatile uint64_t t24 = 18720533186978LLU;
int8_t x111 = -1;
int64_t x113 = INT64_MIN;
uint8_t x117 = UINT8_MAX;
volatile int8_t x118 = INT8_MIN;
uint16_t x119 = 83U;
static volatile int16_t x123 = INT16_MIN;
volatile int8_t x129 = -1;
static volatile uint32_t t30 = 2443700U;
uint8_t x134 = 107U;
static int8_t x140 = 5;
uint8_t x141 = UINT8_MAX;
int64_t x145 = 2681012754147062543LL;
int8_t x146 = -7;
int16_t x150 = INT16_MIN;
volatile uint64_t x152 = UINT64_MAX;
int8_t x154 = 29;
uint64_t t36 = 170198544860882LLU;
uint64_t t37 = 182606742565662LLU;
static volatile int16_t x162 = -1;
volatile int8_t x166 = INT8_MIN;
int8_t x168 = INT8_MIN;
int32_t t40 = 1620;
int32_t t41 = -1662511;
uint16_t x182 = UINT16_MAX;
int32_t x185 = INT32_MAX;
volatile int32_t x195 = INT32_MIN;
int64_t t46 = 1778LL;
static int16_t x201 = 1;
volatile uint16_t x210 = 22507U;
int64_t x211 = INT64_MIN;
int32_t x212 = -1;
int64_t t48 = INT64_MIN;
static volatile uint32_t x217 = 239U;
uint16_t x228 = 1U;
static int16_t x234 = 183;
static uint8_t x236 = UINT8_MAX;
static int64_t x248 = INT64_MIN;
int64_t t57 = 10LL;
int16_t x255 = INT16_MAX;
int32_t x261 = INT32_MIN;
int32_t x264 = INT32_MIN;
uint8_t x268 = UINT8_MAX;
int8_t x269 = INT8_MIN;
int8_t x271 = -1;
int32_t t62 = -115831236;
uint16_t x280 = 8U;
volatile int32_t t63 = -1;
int16_t x281 = INT16_MAX;
uint16_t x284 = 617U;
static uint64_t x293 = 329LLU;
static uint64_t x314 = 513101LLU;
int64_t x323 = 94501506877674LL;
volatile int64_t x324 = INT64_MIN;
uint64_t x326 = UINT64_MAX;
int16_t x329 = INT16_MIN;
static uint8_t x330 = UINT8_MAX;
int8_t x337 = 10;
volatile int32_t t76 = -10;
volatile uint64_t x351 = 979243685734551784LLU;
static volatile int8_t x352 = INT8_MIN;
int64_t x361 = INT64_MIN;
uint64_t x373 = 2645428LLU;
static uint8_t x374 = 1U;
int64_t x377 = INT64_MIN;
static int32_t x379 = 0;
int64_t x380 = -127217137456982LL;
int64_t t82 = 5563670LL;
int32_t x389 = INT32_MIN;
volatile int16_t x390 = -1;
uint32_t x393 = UINT32_MAX;
volatile int32_t x405 = INT32_MIN;
static int64_t x420 = 1083013599065947897LL;
volatile int32_t t90 = -4780;
int32_t x429 = -9;
uint32_t x432 = 467758U;
static uint32_t t91 = 18480U;
volatile int64_t x433 = INT64_MIN;
volatile int8_t x442 = INT8_MIN;
int64_t x446 = INT64_MAX;
volatile int16_t x452 = INT16_MAX;
volatile int8_t x459 = -1;
uint32_t x462 = UINT32_MAX;
static int64_t x466 = INT64_MIN;
uint32_t x467 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MIN;
	static int64_t x3 = INT64_MIN;
	volatile int64_t t0 = -46LL;

	t0 = (((x1<=x2)+x3)+x4);

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	volatile int8_t x7 = -14;
	int32_t t1 = 3358;

	t1 = (((x5<=x6)+x7)+x8);

	if (t1 != -1511) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 36LLU;
	static int64_t x10 = INT64_MIN;
	int64_t x11 = INT64_MIN;
	volatile uint32_t x12 = UINT32_MAX;
	static int64_t t2 = -6LL;

	t2 = (((x9<=x10)+x11)+x12);

	if (t2 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x18 = 26U;
	int32_t x19 = 2;
	uint64_t x20 = 64792387LLU;
	volatile uint64_t t3 = 98646LLU;

	t3 = (((x17<=x18)+x19)+x20);

	if (t3 != 64792390LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -4993045;

	t4 = (((x21<=x22)+x23)+x24);

	if (t4 != 32639) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 8U;
	uint64_t x26 = 235917LLU;
	volatile int64_t t5 = -24256077125904LL;

	t5 = (((x25<=x26)+x27)+x28);

	if (t5 != -22LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -1;
	volatile int64_t x31 = -1LL;

	t6 = (((x29<=x30)+x31)+x32);

	if (t6 != 204682624734760LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x39 = -1;
	volatile uint64_t x40 = 451764572546584LLU;
	uint64_t t7 = 14529491LLU;

	t7 = (((x37<=x38)+x39)+x40);

	if (t7 != 451764572546583LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 8800480222845488LLU;
	static int8_t x43 = -3;
	int32_t x44 = 457740;
	int32_t t8 = 1027582;

	t8 = (((x41<=x42)+x43)+x44);

	if (t8 != 457737) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x47 = 6;
	static volatile int32_t t9 = -1;

	t9 = (((x45<=x46)+x47)+x48);

	if (t9 != -122) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MAX;
	static int16_t x51 = 0;
	static uint8_t x52 = 15U;
	static volatile int32_t t10 = -3109;

	t10 = (((x49<=x50)+x51)+x52);

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 252985994343654950LLU;
	uint16_t x54 = 1281U;
	volatile int32_t t11 = 1995926;

	t11 = (((x53<=x54)+x55)+x56);

	if (t11 != 325400869) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 3U;
	uint32_t x58 = 54925U;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = 14870;

	t12 = (((x57<=x58)+x59)+x60);

	if (t12 != 80406) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = 0;
	static int16_t x62 = -1;
	volatile int32_t x63 = INT32_MIN;
	uint64_t t13 = 27196110535LLU;

	t13 = (((x61<=x62)+x63)+x64);

	if (t13 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = -1;
	int32_t t14 = -832;

	t14 = (((x65<=x66)+x67)+x68);

	if (t14 != 1280) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MAX;
	int8_t x72 = -1;
	int32_t t15 = INT32_MIN;

	t15 = (((x69<=x70)+x71)+x72);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x74 = 129066LLU;
	uint16_t x76 = UINT16_MAX;
	static int32_t t16 = 586;

	t16 = (((x73<=x74)+x75)+x76);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 167059114U;
	uint16_t x78 = UINT16_MAX;
	uint64_t t17 = 0LLU;

	t17 = (((x77<=x78)+x79)+x80);

	if (t17 != 1054799984766179LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MIN;
	int64_t x82 = -234786581399LL;
	int16_t x84 = INT16_MAX;
	static volatile int64_t t18 = 61657754755LL;

	t18 = (((x81<=x82)+x83)+x84);

	if (t18 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	int32_t x88 = -1;
	volatile int32_t t19 = 1;

	t19 = (((x85<=x86)+x87)+x88);

	if (t19 != 3426810) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int16_t x91 = -1;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t20 = -1615300;

	t20 = (((x89<=x90)+x91)+x92);

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = -54256;
	volatile int8_t x96 = -1;
	int32_t t21 = 226;

	t21 = (((x93<=x94)+x95)+x96);

	if (t21 != -54256) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 3U;
	uint8_t x100 = 1U;
	volatile int32_t t22 = -2830;

	t22 = (((x97<=x98)+x99)+x100);

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	volatile int64_t x104 = -1LL;
	volatile int64_t t23 = -1153462613265564355LL;

	t23 = (((x101<=x102)+x103)+x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = -5530;
	int16_t x106 = 1;
	volatile int8_t x107 = INT8_MIN;

	t24 = (((x105<=x106)+x107)+x108);

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = -5737;
	static int16_t x112 = 46;
	int32_t t25 = 9812845;

	t25 = (((x109<=x110)+x111)+x112);

	if (t25 != 45) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x114 = -626870154LL;
	uint16_t x115 = 700U;
	int64_t x116 = -1LL;
	int64_t t26 = -3563117142441661248LL;

	t26 = (((x113<=x114)+x115)+x116);

	if (t26 != 700LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 93;

	t27 = (((x117<=x118)+x119)+x120);

	if (t27 != -45) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -150511726;
	int32_t x122 = INT32_MIN;
	uint64_t x124 = 107084LLU;
	volatile uint64_t t28 = 258LLU;

	t28 = (((x121<=x122)+x123)+x124);

	if (t28 != 74316LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 1590;
	static int64_t t29 = 1435144297867502168LL;

	t29 = (((x125<=x126)+x127)+x128);

	if (t29 != -9223372036854774218LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 111U;
	int8_t x131 = 5;
	uint32_t x132 = 71216U;

	t30 = (((x129<=x130)+x131)+x132);

	if (t30 != 71222U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	static int32_t t31 = -1;

	t31 = (((x133<=x134)+x135)+x136);

	if (t31 != 2147450880) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	volatile int32_t x138 = INT32_MAX;
	volatile int32_t x139 = 0;
	int32_t t32 = 7;

	t32 = (((x137<=x138)+x139)+x140);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = INT64_MIN;
	int8_t x143 = 1;
	uint32_t x144 = 2118779U;
	uint32_t t33 = 91349560U;

	t33 = (((x141<=x142)+x143)+x144);

	if (t33 != 2118780U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x147 = 463312U;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t34 = 230523LLU;

	t34 = (((x145<=x146)+x147)+x148);

	if (t34 != 463311LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x151 = -1784035359LL;
	uint64_t t35 = 25125449361LLU;

	t35 = (((x149<=x150)+x151)+x152);

	if (t35 != 18446744071925516257LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	uint64_t x155 = 1131103671LLU;
	int32_t x156 = INT32_MAX;

	t36 = (((x153<=x154)+x155)+x156);

	if (t36 != 3278587319LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -371583LL;
	volatile uint32_t x158 = 649U;
	int8_t x159 = -3;
	static uint64_t x160 = UINT64_MAX;

	t37 = (((x157<=x158)+x159)+x160);

	if (t37 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = 0;
	uint16_t x163 = 32375U;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t38 = 347782823704764LL;

	t38 = (((x161<=x162)+x163)+x164);

	if (t38 != -9223372036854743433LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MAX;
	int8_t x167 = INT8_MIN;
	volatile int32_t t39 = 52049;

	t39 = (((x165<=x166)+x167)+x168);

	if (t39 != -256) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 78;
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 1707U;
	int8_t x172 = -1;

	t40 = (((x169<=x170)+x171)+x172);

	if (t40 != 1707) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 23105024857LL;
	volatile int64_t x174 = INT64_MIN;
	uint8_t x175 = UINT8_MAX;
	static int8_t x176 = 0;

	t41 = (((x173<=x174)+x175)+x176);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = -1;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = 118;
	static int16_t x180 = 7927;
	int32_t t42 = -15514;

	t42 = (((x177<=x178)+x179)+x180);

	if (t42 != 8045) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 578442264013163031LL;
	static int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	int32_t t43 = -132773762;

	t43 = (((x181<=x182)+x183)+x184);

	if (t43 != 32639) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x186 = 189LLU;
	int8_t x187 = -1;
	static int8_t x188 = -1;
	int32_t t44 = -4349;

	t44 = (((x185<=x186)+x187)+x188);

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int64_t x191 = -1LL;
	int16_t x192 = -1;
	volatile int64_t t45 = 99195014934LL;

	t45 = (((x189<=x190)+x191)+x192);

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = -1LL;
	int64_t x196 = INT64_MAX;

	t46 = (((x193<=x194)+x195)+x196);

	if (t46 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x202 = UINT64_MAX;
	volatile int32_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	static uint32_t t47 = UINT32_MAX;

	t47 = (((x201<=x202)+x203)+x204);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;

	t48 = (((x209<=x210)+x211)+x212);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x218 = 2801701U;
	int8_t x219 = 0;
	int32_t x220 = -5100;
	volatile int32_t t49 = 44719;

	t49 = (((x217<=x218)+x219)+x220);

	if (t49 != -5099) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = UINT32_MAX;
	static int16_t x222 = INT16_MIN;
	uint8_t x223 = UINT8_MAX;
	uint64_t x224 = 233282112306641LLU;
	volatile uint64_t t50 = 84836643LLU;

	t50 = (((x221<=x222)+x223)+x224);

	if (t50 != 233282112306896LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x225 = 1241;
	int64_t x226 = INT64_MAX;
	static int32_t x227 = 63;
	static int32_t t51 = -5401762;

	t51 = (((x225<=x226)+x227)+x228);

	if (t51 != 65) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MIN;
	static int16_t x231 = 1;
	int16_t x232 = INT16_MIN;
	int32_t t52 = -146931891;

	t52 = (((x229<=x230)+x231)+x232);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MAX;
	int8_t x235 = INT8_MIN;
	int32_t t53 = 603;

	t53 = (((x233<=x234)+x235)+x236);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = 11761U;
	uint16_t x238 = 1337U;
	uint8_t x239 = 26U;
	uint64_t x240 = UINT64_MAX;
	uint64_t t54 = 944LLU;

	t54 = (((x237<=x238)+x239)+x240);

	if (t54 != 25LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 3738U;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = 3582;
	uint8_t x244 = 1U;
	volatile int32_t t55 = -5;

	t55 = (((x241<=x242)+x243)+x244);

	if (t55 != 3584) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int64_t t56 = -2245147157619763507LL;

	t56 = (((x245<=x246)+x247)+x248);

	if (t56 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = INT64_MAX;
	int16_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	static int64_t x252 = -1LL;

	t57 = (((x249<=x250)+x251)+x252);

	if (t57 != 65534LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = 9326402LL;
	uint32_t x254 = 669095U;
	volatile int8_t x256 = -1;
	int32_t t58 = -603505100;

	t58 = (((x253<=x254)+x255)+x256);

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x262 = 367U;
	volatile uint8_t x263 = 1U;
	int32_t t59 = 98053869;

	t59 = (((x261<=x262)+x263)+x264);

	if (t59 != -2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 11U;
	volatile uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 3U;
	static int32_t t60 = -11871919;

	t60 = (((x265<=x266)+x267)+x268);

	if (t60 != 259) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x270 = INT64_MIN;
	static int16_t x272 = -1;
	static int32_t t61 = -18941844;

	t61 = (((x269<=x270)+x271)+x272);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = 0;
	static uint32_t x274 = 42358U;
	uint16_t x275 = UINT16_MAX;
	static int32_t x276 = -1;

	t62 = (((x273<=x274)+x275)+x276);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = 3437755LLU;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = 28U;

	t63 = (((x277<=x278)+x279)+x280);

	if (t63 != 37) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x282 = INT16_MIN;
	int64_t x283 = 82630526819886LL;
	volatile int64_t t64 = 1885197524864LL;

	t64 = (((x281<=x282)+x283)+x284);

	if (t64 != 82630526820503LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = -1;
	uint32_t x287 = 5114107U;
	int16_t x288 = INT16_MAX;
	static volatile uint32_t t65 = 3U;

	t65 = (((x285<=x286)+x287)+x288);

	if (t65 != 5146874U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = UINT8_MAX;
	volatile int8_t x292 = 30;
	int32_t t66 = -1;

	t66 = (((x289<=x290)+x291)+x292);

	if (t66 != 286) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x294 = INT16_MIN;
	static int16_t x295 = 509;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t67 = 67;

	t67 = (((x293<=x294)+x295)+x296);

	if (t67 != 382) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 1829654821765747056LLU;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 13495546;
	volatile int32_t t68 = 869012735;

	t68 = (((x297<=x298)+x299)+x300);

	if (t68 != 13528313) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x301 = INT32_MIN;
	uint8_t x302 = 1U;
	int64_t x303 = -6LL;
	volatile uint32_t x304 = 90548U;
	volatile int64_t t69 = -155191754806497032LL;

	t69 = (((x301<=x302)+x303)+x304);

	if (t69 != 90543LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = -2449;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 266100U;
	uint8_t x312 = 59U;
	static uint32_t t70 = 0U;

	t70 = (((x309<=x310)+x311)+x312);

	if (t70 != 266159U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint8_t x315 = 2U;
	volatile int64_t x316 = -1LL;
	int64_t t71 = 67930061245347874LL;

	t71 = (((x313<=x314)+x315)+x316);

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = -1;
	uint64_t x319 = 391013920LLU;
	int32_t x320 = -189210268;
	uint64_t t72 = 575228LLU;

	t72 = (((x317<=x318)+x319)+x320);

	if (t72 != 201803653LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = 6202505;
	static int64_t x322 = -1LL;
	int64_t t73 = -322LL;

	t73 = (((x321<=x322)+x323)+x324);

	if (t73 != -9223277535347898134LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x325 = 1U;
	int16_t x327 = -1;
	uint64_t x328 = 91096078451LLU;
	uint64_t t74 = 268706LLU;

	t74 = (((x325<=x326)+x327)+x328);

	if (t74 != 91096078451LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x331 = 9274756854081LL;
	uint16_t x332 = UINT16_MAX;
	static volatile int64_t t75 = -21121621291769LL;

	t75 = (((x329<=x330)+x331)+x332);

	if (t75 != 9274756919617LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x338 = UINT16_MAX;
	volatile int8_t x339 = INT8_MIN;
	volatile int8_t x340 = 1;

	t76 = (((x337<=x338)+x339)+x340);

	if (t76 != -126) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = 21454;
	static int16_t x350 = INT16_MIN;
	volatile uint64_t t77 = 319956944LLU;

	t77 = (((x349<=x350)+x351)+x352);

	if (t77 != 979243685734551656LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = INT8_MAX;
	static volatile uint16_t x358 = 12031U;
	volatile uint32_t x359 = 86577624U;
	int32_t x360 = -16;
	uint32_t t78 = 94555937U;

	t78 = (((x357<=x358)+x359)+x360);

	if (t78 != 86577609U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x362 = -1;
	int8_t x363 = -1;
	volatile int64_t x364 = INT64_MIN;
	int64_t t79 = INT64_MIN;

	t79 = (((x361<=x362)+x363)+x364);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x369 = -171901675;
	uint64_t x370 = UINT64_MAX;
	static int8_t x371 = -1;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t80 = 30250;

	t80 = (((x369<=x370)+x371)+x372);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t81 = 2116673U;

	t81 = (((x373<=x374)+x375)+x376);

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x378 = 2LLU;

	t82 = (((x377<=x378)+x379)+x380);

	if (t82 != -127217137456982LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 156343U;
	int32_t x382 = -78947;
	static int8_t x383 = -27;
	static volatile uint32_t x384 = 4229567U;
	uint32_t t83 = 1655U;

	t83 = (((x381<=x382)+x383)+x384);

	if (t83 != 4229541U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 60U;
	volatile int64_t x386 = INT64_MIN;
	volatile int16_t x387 = 241;
	int64_t x388 = -1LL;
	static int64_t t84 = -20227836570LL;

	t84 = (((x385<=x386)+x387)+x388);

	if (t84 != 240LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x391 = UINT8_MAX;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t85 = 751;

	t85 = (((x389<=x390)+x391)+x392);

	if (t85 != 65791) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x394 = 1754U;
	static uint32_t x395 = 488193U;
	int64_t x396 = INT64_MIN;
	int64_t t86 = -443992541LL;

	t86 = (((x393<=x394)+x395)+x396);

	if (t86 != -9223372036854287615LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = INT32_MIN;
	volatile int64_t x402 = 1056317602436LL;
	uint16_t x403 = UINT16_MAX;
	static volatile uint16_t x404 = UINT16_MAX;
	volatile int32_t t87 = 434;

	t87 = (((x401<=x402)+x403)+x404);

	if (t87 != 131071) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x406 = 42501;
	uint64_t x407 = 33088LLU;
	int8_t x408 = -1;
	volatile uint64_t t88 = 6029338LLU;

	t88 = (((x405<=x406)+x407)+x408);

	if (t88 != 33088LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = 1;
	int16_t x419 = 0;
	static int64_t t89 = -1727549LL;

	t89 = (((x417<=x418)+x419)+x420);

	if (t89 != 1083013599065947898LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = 5;
	int16_t x422 = -80;
	uint8_t x423 = 36U;
	int16_t x424 = INT16_MIN;

	t90 = (((x421<=x422)+x423)+x424);

	if (t90 != -32732) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x430 = 21LLU;
	volatile int32_t x431 = -1576762;

	t91 = (((x429<=x430)+x431)+x432);

	if (t91 != 4293858292U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x434 = 307622476778851LLU;
	int16_t x435 = INT16_MIN;
	static int8_t x436 = INT8_MAX;
	static int32_t t92 = -3359;

	t92 = (((x433<=x434)+x435)+x436);

	if (t92 != -32641) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = 3;
	int32_t x438 = INT32_MIN;
	volatile int16_t x439 = -1;
	int8_t x440 = INT8_MAX;
	int32_t t93 = -4515699;

	t93 = (((x437<=x438)+x439)+x440);

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MIN;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;
	int32_t t94 = -398;

	t94 = (((x441<=x442)+x443)+x444);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x445 = -30210LL;
	static uint64_t x447 = UINT64_MAX;
	uint8_t x448 = 25U;
	volatile uint64_t t95 = 8LLU;

	t95 = (((x445<=x446)+x447)+x448);

	if (t95 != 25LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = 114178834;
	static uint32_t x450 = 28207032U;
	volatile int64_t x451 = INT64_MIN;
	int64_t t96 = 1094531709684260324LL;

	t96 = (((x449<=x450)+x451)+x452);

	if (t96 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x457 = 429;
	int16_t x458 = INT16_MIN;
	int64_t x460 = -1LL;
	volatile int64_t t97 = 1012927284324LL;

	t97 = (((x457<=x458)+x459)+x460);

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = 109395970;
	static int8_t x463 = INT8_MIN;
	uint64_t x464 = 256019593LLU;
	uint64_t t98 = 7484052289LLU;

	t98 = (((x461<=x462)+x463)+x464);

	if (t98 != 256019466LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = INT64_MAX;
	volatile int16_t x468 = -1;
	uint32_t t99 = 32328U;

	t99 = (((x465<=x466)+x467)+x468);

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

