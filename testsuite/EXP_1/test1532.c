#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = 490807U;
int8_t x18 = INT8_MAX;
volatile int8_t x20 = 2;
int64_t x28 = -2616512LL;
volatile int64_t t6 = 9195318436LL;
uint64_t x43 = 35LLU;
int16_t x54 = INT16_MIN;
uint16_t x56 = UINT16_MAX;
volatile int32_t t15 = INT32_MIN;
int64_t t18 = 505589LL;
uint16_t x77 = UINT16_MAX;
int16_t x83 = INT16_MAX;
uint64_t x85 = UINT64_MAX;
static uint8_t x88 = 3U;
int64_t x89 = -11404583268517LL;
int16_t x92 = INT16_MIN;
volatile int64_t t22 = -3LL;
int8_t x95 = INT8_MAX;
int32_t x96 = INT32_MIN;
int16_t x104 = 7220;
uint64_t x108 = UINT64_MAX;
volatile int16_t x109 = -1;
int32_t x110 = INT32_MIN;
volatile int32_t t27 = 449;
uint64_t x115 = 281LLU;
volatile uint64_t t28 = 441278LLU;
uint8_t x121 = 27U;
volatile uint32_t x124 = UINT32_MAX;
uint32_t x126 = 31572U;
uint32_t x130 = 1638036U;
int64_t x131 = INT64_MIN;
volatile uint32_t x136 = 3U;
int16_t x141 = 0;
static volatile int8_t x143 = -53;
int8_t x145 = -47;
volatile int32_t t36 = -8;
static uint64_t x149 = 1213716LLU;
int64_t x152 = 258497904978LL;
uint64_t t38 = 1135237762252LLU;
volatile uint64_t x158 = 8249341LLU;
int16_t x163 = -383;
int16_t x165 = -102;
static volatile uint64_t t42 = 5008722030135LLU;
int64_t t43 = 3218665286443355471LL;
int64_t t46 = -1356676521942524565LL;
int16_t x200 = INT16_MAX;
int16_t x204 = INT16_MIN;
volatile int16_t x211 = INT16_MIN;
int64_t t51 = -971561064031536319LL;
int64_t x226 = -1LL;
uint32_t x227 = 8643U;
volatile int8_t x239 = -1;
int64_t x244 = INT64_MAX;
static volatile int64_t t59 = -127LL;
uint32_t x250 = 149U;
static uint64_t t60 = 1607170993441LLU;
static int64_t x254 = -178121054LL;
int64_t x256 = -1866LL;
static int16_t x257 = -30;
int32_t x258 = -1;
int16_t x259 = -15188;
int16_t x263 = INT16_MIN;
uint32_t x264 = 552989315U;
int16_t x280 = INT16_MIN;
uint32_t t66 = 2509U;
int32_t x283 = INT32_MIN;
volatile int32_t t68 = -726172709;
volatile int32_t t69 = 1;
int8_t x293 = 13;
int8_t x295 = -5;
uint32_t x296 = 154778451U;
static int32_t x298 = 7987;
volatile uint32_t x304 = 29751454U;
uint8_t x307 = 0U;
int32_t t73 = 3;
int32_t x309 = INT32_MAX;
int8_t x313 = 2;
int16_t x316 = INT16_MAX;
int64_t x320 = INT64_MIN;
uint8_t x324 = 6U;
static int16_t x326 = INT16_MIN;
uint16_t x327 = 146U;
int64_t x328 = -4874LL;
int16_t x329 = INT16_MIN;
static volatile int16_t x332 = -1;
uint64_t x334 = 733296955955438LLU;
static uint32_t t82 = 60U;
int64_t x345 = INT64_MIN;
int8_t x355 = -1;
uint16_t x357 = UINT16_MAX;
static int8_t x359 = INT8_MAX;
volatile int32_t x362 = -1;
int32_t x366 = INT32_MIN;
volatile int8_t x367 = -21;
int16_t x368 = INT16_MAX;
int32_t t88 = -85102;
int16_t x374 = -13487;
uint64_t x382 = UINT64_MAX;
uint8_t x388 = 7U;
int32_t t92 = -167;
int64_t x393 = INT64_MIN;
uint64_t x395 = UINT64_MAX;
volatile int32_t x396 = 0;
volatile int8_t x400 = INT8_MIN;
static volatile int32_t t95 = 84784;
volatile int16_t x401 = -345;
int32_t x407 = -182179;
static int64_t t97 = INT64_MIN;
static int8_t x409 = -1;
int8_t x415 = -3;


void f0(void) {
	int8_t x1 = -7;
	int8_t x2 = -19;
	volatile int64_t x3 = 3442091LL;
	uint64_t x4 = 1860142LLU;
	uint64_t t0 = 1286252906716LLU;

	t0 = (((x1<=x2)+x3)&x4);

	if (t0 != 1310762LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 1859921947U;
	static volatile uint8_t x6 = 1U;
	static volatile int32_t x7 = INT32_MIN;
	static int64_t t1 = -89042230988621LL;

	t1 = (((x5<=x6)+x7)&x8);

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 9U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	static uint16_t x12 = 121U;
	volatile int32_t t2 = -1;

	t2 = (((x9<=x10)+x11)&x12);

	if (t2 != 121) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MAX;
	int8_t x14 = -23;
	int32_t x15 = INT32_MAX;

	t3 = (((x13<=x14)+x15)&x16);

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 13U;
	int32_t x19 = -10813;
	int32_t t4 = -4950;

	t4 = (((x17<=x18)+x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -99366;

	t5 = (((x21<=x22)+x23)&x24);

	if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int8_t x26 = INT8_MIN;
	static uint8_t x27 = UINT8_MAX;

	t6 = (((x25<=x26)+x27)&x28);

	if (t6 != 64LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 5U;
	static volatile int64_t x30 = 51313718286614LL;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 676U;
	static volatile uint64_t t7 = 2913585LLU;

	t7 = (((x29<=x30)+x31)&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static uint32_t x34 = 106U;
	int8_t x35 = 0;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = -2015;

	t8 = (((x33<=x34)+x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -133829709LL;
	volatile int16_t x38 = -352;
	volatile int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t9 = INT64_MIN;

	t9 = (((x37<=x38)+x39)&x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	int8_t x44 = -1;
	volatile uint64_t t10 = 64520LLU;

	t10 = (((x41<=x42)+x43)&x44);

	if (t10 != 35LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int16_t x47 = 124;
	volatile int8_t x48 = INT8_MAX;
	int32_t t11 = -44660;

	t11 = (((x45<=x46)+x47)&x48);

	if (t11 != 125) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static uint64_t x50 = UINT64_MAX;
	static uint32_t x51 = 0U;
	int16_t x52 = 393;
	uint32_t t12 = 393286U;

	t12 = (((x49<=x50)+x51)&x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static uint8_t x55 = 88U;
	volatile int32_t t13 = 762;

	t13 = (((x53<=x54)+x55)&x56);

	if (t13 != 89) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 10LL;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -960;

	t14 = (((x57<=x58)+x59)&x60);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -1LL;
	volatile uint64_t x62 = 102550059729301828LLU;
	int32_t x63 = INT32_MIN;
	volatile int32_t x64 = INT32_MIN;

	t15 = (((x61<=x62)+x63)&x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -49851;
	int32_t x66 = INT32_MIN;
	static uint64_t x67 = 147773051749424LLU;
	int32_t x68 = INT32_MIN;
	uint64_t t16 = 71688308253LLU;

	t16 = (((x65<=x66)+x67)&x68);

	if (t16 != 147772644786176LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x70 = -1;
	int32_t x71 = -1;
	uint8_t x72 = 2U;
	static volatile int32_t t17 = -396456;

	t17 = (((x69<=x70)+x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 1;
	int32_t x74 = 1500852;
	int16_t x75 = 108;
	int64_t x76 = -1LL;

	t18 = (((x73<=x74)+x75)&x76);

	if (t18 != 109LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 1375976U;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 8724652U;
	uint32_t t19 = 8335U;

	t19 = (((x77<=x78)+x79)&x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -13;
	uint16_t x82 = 15970U;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t20 = 48157LL;

	t20 = (((x81<=x82)+x83)&x84);

	if (t20 != 32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = INT32_MIN;
	static int32_t x87 = 1;
	int32_t t21 = 684585;

	t21 = (((x85<=x86)+x87)&x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x90 = -847;
	int64_t x91 = 298833LL;

	t22 = (((x89<=x90)+x91)&x92);

	if (t22 != 294912LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 2911U;
	uint8_t x94 = UINT8_MAX;
	static volatile int32_t t23 = 52226660;

	t23 = (((x93<=x94)+x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = -33;
	uint32_t t24 = 207U;

	t24 = (((x97<=x98)+x99)&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int32_t x102 = -1;
	volatile uint8_t x103 = 5U;
	volatile int32_t t25 = 247565;

	t25 = (((x101<=x102)+x103)&x104);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 236484U;
	volatile int32_t x106 = INT32_MAX;
	uint32_t x107 = 127686331U;
	static uint64_t t26 = 9781LLU;

	t26 = (((x105<=x106)+x107)&x108);

	if (t26 != 127686332LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x111 = -6;
	int8_t x112 = INT8_MIN;

	t27 = (((x109<=x110)+x111)&x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 369416800LLU;
	int16_t x116 = INT16_MAX;

	t28 = (((x113<=x114)+x115)&x116);

	if (t28 != 281LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 31U;
	static int32_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 128;

	t29 = (((x117<=x118)+x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 29U;
	uint16_t x123 = 632U;
	volatile uint32_t t30 = 169U;

	t30 = (((x121<=x122)+x123)&x124);

	if (t30 != 633U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 115210LLU;
	int8_t x127 = INT8_MAX;
	int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = 235;

	t31 = (((x125<=x126)+x127)&x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -9;
	int8_t x132 = INT8_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (((x129<=x130)+x131)&x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	volatile int8_t x135 = 0;
	volatile uint32_t t33 = 5U;

	t33 = (((x133<=x134)+x135)&x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	static int16_t x140 = INT16_MAX;
	uint64_t t34 = 0LLU;

	t34 = (((x137<=x138)+x139)&x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = UINT32_MAX;
	int32_t x144 = INT32_MAX;
	int32_t t35 = -38370;

	t35 = (((x141<=x142)+x143)&x144);

	if (t35 != 2147483596) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 551100U;
	uint8_t x147 = 15U;
	uint16_t x148 = UINT16_MAX;

	t36 = (((x145<=x146)+x147)&x148);

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = 3018U;
	int64_t x151 = INT64_MIN;
	int64_t t37 = -11709608LL;

	t37 = (((x149<=x150)+x151)&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 7;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 10LLU;
	uint32_t x156 = 880090U;

	t38 = (((x153<=x154)+x155)&x156);

	if (t38 != 10LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1010772675285LLU;
	uint32_t x159 = 325U;
	static int64_t x160 = 1717799581044129701LL;
	int64_t t39 = 20LL;

	t39 = (((x157<=x158)+x159)&x160);

	if (t39 != 261LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 447;
	volatile uint64_t x162 = 656929516LLU;
	volatile int32_t x164 = 31975;
	int32_t t40 = -6605368;

	t40 = (((x161<=x162)+x163)&x164);

	if (t40 != 31874) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -2;
	static int32_t x167 = -2878;
	uint8_t x168 = 81U;
	volatile int32_t t41 = -7;

	t41 = (((x165<=x166)+x167)&x168);

	if (t41 != 65) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 4U;
	volatile int8_t x170 = -1;
	uint8_t x171 = 3U;
	uint64_t x172 = 7703582LLU;

	t42 = (((x169<=x170)+x171)&x172);

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	uint32_t x174 = 92037U;
	uint32_t x175 = 145834U;
	int64_t x176 = -1LL;

	t43 = (((x173<=x174)+x175)&x176);

	if (t43 != 145834LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -1LL;
	static uint8_t x178 = 0U;
	int16_t x179 = 3;
	static volatile uint16_t x180 = UINT16_MAX;
	int32_t t44 = -1195;

	t44 = (((x177<=x178)+x179)&x180);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 3;
	static int8_t x182 = -1;
	volatile uint16_t x183 = 1760U;
	uint64_t x184 = 27303993826785LLU;
	static uint64_t t45 = 94587148681LLU;

	t45 = (((x181<=x182)+x183)&x184);

	if (t45 != 1248LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 54539;
	static int64_t x186 = -162579107411350908LL;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -642495414119LL;

	t46 = (((x185<=x186)+x187)&x188);

	if (t46 != -642495414272LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 3360451307656812102LLU;
	volatile int32_t x190 = 58222246;
	int32_t x191 = -1;
	volatile uint8_t x192 = 18U;
	volatile int32_t t47 = -51407;

	t47 = (((x189<=x190)+x191)&x192);

	if (t47 != 18) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	static uint16_t x199 = 3644U;
	static int32_t t48 = 24921;

	t48 = (((x197<=x198)+x199)&x200);

	if (t48 != 3644) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = -452694973;
	static int32_t x202 = -1;
	int8_t x203 = -1;
	volatile int32_t t49 = -45332;

	t49 = (((x201<=x202)+x203)&x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	volatile int8_t x212 = 0;
	static volatile int32_t t50 = 1134;

	t50 = (((x209<=x210)+x211)&x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = 5009;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	static uint8_t x216 = 9U;

	t51 = (((x213<=x214)+x215)&x216);

	if (t51 != 9LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MAX;
	int64_t x218 = INT64_MAX;
	int32_t x219 = -1;
	uint64_t x220 = 140402542775678668LLU;
	uint64_t t52 = 183675358108LLU;

	t52 = (((x217<=x218)+x219)&x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = 1U;
	uint64_t x222 = 1LLU;
	int16_t x223 = INT16_MAX;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t53 = -2532;

	t53 = (((x221<=x222)+x223)&x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = 2639531738LL;
	int16_t x228 = -1;
	volatile uint32_t t54 = 455U;

	t54 = (((x225<=x226)+x227)&x228);

	if (t54 != 8643U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1679;
	int8_t x230 = INT8_MAX;
	uint16_t x231 = 1104U;
	int32_t x232 = INT32_MIN;
	volatile int32_t t55 = -31037253;

	t55 = (((x229<=x230)+x231)&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	static int8_t x235 = 1;
	static int16_t x236 = 1;
	volatile int32_t t56 = 13040889;

	t56 = (((x233<=x234)+x235)&x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t57 = 214140177;

	t57 = (((x237<=x238)+x239)&x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 2;
	uint16_t x242 = 136U;
	volatile int8_t x243 = INT8_MIN;
	volatile int64_t t58 = 1289673109971873LL;

	t58 = (((x241<=x242)+x243)&x244);

	if (t58 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x245 = 6946U;
	uint32_t x246 = 3U;
	uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = -1LL;

	t59 = (((x245<=x246)+x247)&x248);

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = INT16_MIN;
	static uint64_t x251 = UINT64_MAX;
	uint64_t x252 = 915350329460446157LLU;

	t60 = (((x249<=x250)+x251)&x252);

	if (t60 != 915350329460446157LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x253 = INT32_MAX;
	uint16_t x255 = 12U;
	static volatile int64_t t61 = -117142LL;

	t61 = (((x253<=x254)+x255)&x256);

	if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x260 = 2322723LL;
	volatile int64_t t62 = 1622596010190LL;

	t62 = (((x257<=x258)+x259)&x260);

	if (t62 != 2310177LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	uint8_t x262 = 4U;
	uint32_t t63 = 173U;

	t63 = (((x261<=x262)+x263)&x264);

	if (t63 != 552960001U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -16;
	int16_t x270 = -1;
	uint8_t x271 = 0U;
	volatile int32_t x272 = INT32_MIN;
	int32_t t64 = 132;

	t64 = (((x269<=x270)+x271)&x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x274 = 15U;
	int8_t x275 = -49;
	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t65 = 18;

	t65 = (((x273<=x274)+x275)&x276);

	if (t65 != 65488) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x277 = -27654444914432LL;
	int64_t x278 = 167390572LL;
	uint32_t x279 = 30678U;

	t66 = (((x277<=x278)+x279)&x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x281 = -1;
	uint32_t x282 = 583481722U;
	static int32_t x284 = INT32_MAX;
	static volatile int32_t t67 = 27982;

	t67 = (((x281<=x282)+x283)&x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = 61;
	volatile int32_t x286 = 7587;
	int8_t x287 = INT8_MAX;
	int16_t x288 = 777;

	t68 = (((x285<=x286)+x287)&x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x289 = 3865481056405788240LLU;
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 5U;

	t69 = (((x289<=x290)+x291)&x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x294 = -28;
	volatile uint32_t t70 = 1U;

	t70 = (((x293<=x294)+x295)&x296);

	if (t70 != 154778451U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	int16_t x299 = -1;
	static int8_t x300 = 0;
	volatile int32_t t71 = -4166470;

	t71 = (((x297<=x298)+x299)&x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	static uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MIN;
	int64_t t72 = 745910853LL;

	t72 = (((x301<=x302)+x303)&x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	uint64_t x306 = 33868756LLU;
	int32_t x308 = 351;

	t73 = (((x305<=x306)+x307)&x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x310 = -3582;
	uint16_t x311 = UINT16_MAX;
	volatile int16_t x312 = 887;
	volatile int32_t t74 = -8;

	t74 = (((x309<=x310)+x311)&x312);

	if (t74 != 887) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = -1;
	int64_t x315 = INT64_MAX;
	volatile int64_t t75 = 402937421568447627LL;

	t75 = (((x313<=x314)+x315)&x316);

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = 0U;
	volatile int8_t x318 = INT8_MAX;
	static volatile int8_t x319 = 59;
	volatile int64_t t76 = -4986167254089LL;

	t76 = (((x317<=x318)+x319)&x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = UINT64_MAX;
	static uint16_t x322 = 2008U;
	static int64_t x323 = 227801174LL;
	volatile int64_t t77 = 83169311750LL;

	t77 = (((x321<=x322)+x323)&x324);

	if (t77 != 6LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x325 = INT8_MAX;
	int64_t t78 = -138831624917691LL;

	t78 = (((x325<=x326)+x327)&x328);

	if (t78 != 146LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 5899U;
	int8_t x331 = -1;
	volatile int32_t t79 = 14323;

	t79 = (((x329<=x330)+x331)&x332);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 1345416388U;
	int64_t x335 = -977LL;
	int8_t x336 = INT8_MIN;
	int64_t t80 = 16806843316LL;

	t80 = (((x333<=x334)+x335)&x336);

	if (t80 != -1024LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x337 = 952220185U;
	uint64_t x338 = 1948791481LLU;
	int64_t x339 = 368705465061431655LL;
	int16_t x340 = -1;
	volatile int64_t t81 = 1130076026919352LL;

	t81 = (((x337<=x338)+x339)&x340);

	if (t81 != 368705465061431656LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = -1747976773932269861LL;
	volatile uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 26234U;

	t82 = (((x341<=x342)+x343)&x344);

	if (t82 != 26234U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x346 = INT16_MAX;
	static uint16_t x347 = 6U;
	static volatile int64_t x348 = INT64_MAX;
	int64_t t83 = -7527693130444314LL;

	t83 = (((x345<=x346)+x347)&x348);

	if (t83 != 7LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 0U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = -57;
	volatile uint64_t t84 = 130135719LLU;

	t84 = (((x349<=x350)+x351)&x352);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 23183U;
	static int64_t x354 = -1LL;
	static int32_t x356 = INT32_MAX;
	int32_t t85 = INT32_MAX;

	t85 = (((x353<=x354)+x355)&x356);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x358 = 559U;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t86 = 5158;

	t86 = (((x357<=x358)+x359)&x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = UINT32_MAX;
	static uint16_t x363 = 43U;
	volatile uint32_t x364 = 220762U;
	uint32_t t87 = 154511U;

	t87 = (((x361<=x362)+x363)&x364);

	if (t87 != 8U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x365 = 12192U;

	t88 = (((x365<=x366)+x367)&x368);

	if (t88 != 32747) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = -97;
	uint32_t x375 = 558026996U;
	static int32_t x376 = -1426;
	volatile uint32_t t89 = 21131310U;

	t89 = (((x373<=x374)+x375)&x376);

	if (t89 != 558026852U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -6115LL;
	uint32_t x378 = 1U;
	int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t90 = -2973916;

	t90 = (((x377<=x378)+x379)&x380);

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x381<=x382)+x383)&x384);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = 3786;
	uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = 0U;

	t92 = (((x385<=x386)+x387)&x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	volatile int32_t x390 = INT32_MIN;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = 2664LL;
	int64_t t93 = -3967452575216LL;

	t93 = (((x389<=x390)+x391)&x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x394 = -1;
	uint64_t t94 = 3865674321LLU;

	t94 = (((x393<=x394)+x395)&x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x397 = 1948776LLU;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = -380;

	t95 = (((x397<=x398)+x399)&x400);

	if (t95 != -384) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = -1;
	uint64_t x403 = 215951607910158778LLU;
	volatile int8_t x404 = -62;
	static volatile uint64_t t96 = 49269LLU;

	t96 = (((x401<=x402)+x403)&x404);

	if (t96 != 215951607910158722LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 488U;
	int16_t x406 = -1;
	volatile int64_t x408 = INT64_MIN;

	t97 = (((x405<=x406)+x407)&x408);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = INT16_MIN;
	int8_t x411 = 1;
	static int32_t x412 = -236593;
	static volatile int32_t t98 = 26411149;

	t98 = (((x409<=x410)+x411)&x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x413 = -1;
	int16_t x414 = -387;
	int8_t x416 = -1;
	volatile int32_t t99 = -13741;

	t99 = (((x413<=x414)+x415)&x416);

	if (t99 != -3) { NG(); } else { ; }
	
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

