#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = UINT8_MAX;
int32_t x4 = INT32_MIN;
int8_t x13 = -1;
volatile int32_t t4 = 3049;
static int64_t x28 = INT64_MAX;
int16_t x29 = 0;
volatile int32_t t9 = 25479889;
static volatile int64_t x46 = -1LL;
volatile uint16_t x48 = 12U;
uint8_t x58 = 20U;
static uint32_t x59 = 3412364U;
static uint32_t x60 = 815U;
int16_t x61 = INT16_MIN;
int32_t t15 = -12206;
int64_t x66 = -1LL;
static int64_t x69 = INT64_MIN;
static int64_t x74 = -96023757349675630LL;
int8_t x80 = -13;
int32_t t19 = 331422;
static int64_t x92 = INT64_MIN;
int32_t t22 = -425;
int32_t t24 = -1;
int32_t x103 = INT32_MIN;
int32_t t26 = -480;
uint32_t x115 = UINT32_MAX;
static volatile int32_t t28 = -7690191;
static int64_t x120 = 270465006243LL;
static int64_t x123 = INT64_MIN;
static volatile uint8_t x138 = UINT8_MAX;
int32_t x139 = INT32_MIN;
uint64_t x146 = 419225316490228028LLU;
int16_t x147 = INT16_MAX;
int8_t x156 = 37;
volatile int32_t t41 = 57328;
uint64_t x202 = 1014847948151LLU;
static uint64_t x213 = 1989793727186LLU;
int64_t x224 = 0LL;
volatile int32_t t55 = -1;
int64_t x225 = INT64_MIN;
volatile int8_t x228 = -21;
int16_t x231 = INT16_MIN;
int8_t x232 = -49;
uint32_t x236 = 0U;
volatile int32_t t58 = 6044839;
int16_t x243 = -1;
uint8_t x244 = 98U;
static volatile int32_t t60 = 1;
uint8_t x245 = UINT8_MAX;
uint32_t x249 = 165U;
int16_t x252 = 14715;
static volatile int32_t t63 = 1995;
static uint64_t x260 = 0LLU;
volatile uint64_t x262 = 115LLU;
int8_t x268 = -7;
int32_t t66 = 126;
volatile int32_t x272 = INT32_MIN;
volatile int32_t t67 = -85;
volatile int32_t x274 = 54;
volatile int32_t t68 = -1069;
int32_t x278 = 7;
static uint32_t x279 = UINT32_MAX;
int64_t x287 = INT64_MAX;
uint64_t x289 = 2LLU;
volatile int8_t x298 = INT8_MIN;
volatile int32_t x299 = 0;
static int32_t t74 = -67085150;
volatile int32_t t75 = -33387866;
int64_t x307 = INT64_MAX;
int32_t t76 = 1;
int8_t x313 = 32;
static int64_t x315 = 44860193559869476LL;
static volatile uint64_t x316 = 4345706574336691LLU;
int32_t x317 = 123;
int16_t x320 = -1;
int32_t t79 = 2;
int64_t x327 = -444803534653297LL;
volatile uint64_t x329 = 230432931108460371LLU;
int64_t x338 = INT64_MIN;
volatile int32_t t85 = 0;
uint16_t x348 = 853U;
int16_t x350 = 1;
uint16_t x352 = 101U;
volatile int8_t x354 = -1;
static int16_t x360 = INT16_MIN;
int32_t x362 = 1456842;
uint64_t x364 = 1077662285855LLU;
volatile int32_t t91 = 291;
int8_t x370 = INT8_MIN;
volatile int32_t t93 = -78559;
uint16_t x379 = 3U;
static int16_t x387 = INT16_MIN;
uint64_t x388 = 91LLU;
static uint32_t x389 = UINT32_MAX;
static int32_t x392 = INT32_MIN;
uint32_t x395 = 121036185U;
int8_t x396 = INT8_MIN;
static uint8_t x397 = UINT8_MAX;
int16_t x398 = -1676;


void f0(void) {
	int32_t x2 = 65311379;
	uint8_t x3 = UINT8_MAX;
	int32_t t0 = -5171;

	t0 = (x1<=((x2&x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int16_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = 73564;
	int32_t t1 = -78540704;

	t1 = (x5<=((x6&x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x10 = 99U;
	volatile uint64_t x11 = 163397353LLU;
	static uint8_t x12 = 12U;
	volatile int32_t t2 = 3000464;

	t2 = (x9<=((x10&x11)<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	volatile uint8_t x15 = 1U;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = 751457;

	t3 = (x13<=((x14&x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int16_t x18 = 2;
	int64_t x19 = 2LL;
	int16_t x20 = -1;

	t4 = (x17<=((x18&x19)<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = 0;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -21707;

	t5 = (x21<=((x22&x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -962677921;
	int8_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int32_t t6 = -30768;

	t6 = (x25<=((x26&x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 670358;
	static int64_t x31 = -205742761885LL;
	volatile int16_t x32 = INT16_MAX;
	static volatile int32_t t7 = 988769;

	t7 = (x29<=((x30&x31)<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	volatile int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = 67374078U;
	static volatile int32_t t8 = 40202;

	t8 = (x33<=((x34&x35)<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1902U;
	static int64_t x38 = INT64_MIN;
	int8_t x39 = 42;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37<=((x38&x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 37;
	int32_t x42 = -1;
	static int8_t x43 = 0;
	static volatile uint64_t x44 = 1557910071733905874LLU;
	volatile int32_t t10 = 832;

	t10 = (x41<=((x42&x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static uint8_t x47 = 14U;
	int32_t t11 = 6;

	t11 = (x45<=((x46&x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static volatile int16_t x50 = -1;
	int64_t x51 = 233609856851624087LL;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -129;

	t12 = (x49<=((x50&x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -4;
	uint32_t x54 = 804028U;
	uint8_t x55 = 3U;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = -536669;

	t13 = (x53<=((x54&x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	int32_t t14 = 14575;

	t14 = (x57<=((x58&x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 1U;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = 105U;

	t15 = (x61<=((x62&x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x67 = -467934LL;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 62127;

	t16 = (x65<=((x66&x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	int8_t x71 = 1;
	volatile uint16_t x72 = UINT16_MAX;
	int32_t t17 = 4403824;

	t17 = (x69<=((x70&x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	volatile uint8_t x75 = UINT8_MAX;
	static uint8_t x76 = UINT8_MAX;
	int32_t t18 = -6211;

	t18 = (x73<=((x74&x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = UINT16_MAX;

	t19 = (x77<=((x78&x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -14;
	static uint32_t x82 = 14109696U;
	static int32_t x83 = 0;
	int8_t x84 = -1;
	volatile int32_t t20 = -612814493;

	t20 = (x81<=((x82&x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 7711122;
	int8_t x86 = -1;
	uint8_t x87 = 7U;
	int64_t x88 = -1LL;
	static volatile int32_t t21 = -202;

	t21 = (x85<=((x86&x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	int8_t x91 = INT8_MAX;

	t22 = (x89<=((x90&x91)<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 1611043837579LL;
	uint64_t x94 = 131209120816LLU;
	volatile uint16_t x95 = 4963U;
	uint16_t x96 = 12U;
	int32_t t23 = -8;

	t23 = (x93<=((x94&x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = 12369740;
	int64_t x99 = -1LL;
	uint8_t x100 = UINT8_MAX;

	t24 = (x97<=((x98&x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int16_t x104 = -1;
	int32_t t25 = -4831620;

	t25 = (x101<=((x102&x103)<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 1U;

	t26 = (x105<=((x106&x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = 2;
	volatile int16_t x111 = 0;
	static int16_t x112 = -1;
	int32_t t27 = 40;

	t27 = (x109<=((x110&x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = 12241;
	int8_t x116 = 6;

	t28 = (x113<=((x114&x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static int8_t x118 = -1;
	int64_t x119 = INT64_MAX;
	int32_t t29 = -1;

	t29 = (x117<=((x118&x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -61;

	t30 = (x121<=((x122&x123)<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = -1;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 1967;

	t31 = (x125<=((x126&x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	uint64_t x130 = 19804LLU;
	volatile int16_t x131 = -5371;
	static int16_t x132 = 120;
	int32_t t32 = 646957492;

	t32 = (x129<=((x130&x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	volatile uint64_t x134 = UINT64_MAX;
	int16_t x135 = -1;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t33 = -250;

	t33 = (x133<=((x134&x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = 2057473174140547726LL;
	int32_t x140 = -1;
	volatile int32_t t34 = -1;

	t34 = (x137<=((x138&x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 2678U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -911418565;

	t35 = (x141<=((x142&x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = UINT64_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = 2720;

	t36 = (x145<=((x146&x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint8_t x150 = 6U;
	volatile int64_t x151 = INT64_MAX;
	volatile uint64_t x152 = UINT64_MAX;
	static volatile int32_t t37 = -144;

	t37 = (x149<=((x150&x151)<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	int32_t x155 = -1;
	int32_t t38 = -8213;

	t38 = (x153<=((x154&x155)<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = UINT32_MAX;
	static volatile uint16_t x158 = 5281U;
	uint16_t x159 = 1U;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 189;

	t39 = (x157<=((x158&x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile uint16_t x162 = UINT16_MAX;
	static int8_t x163 = -3;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 7316;

	t40 = (x161<=((x162&x163)<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -11;
	int16_t x166 = -1;
	uint64_t x167 = 432996984050720LLU;
	int8_t x168 = INT8_MAX;

	t41 = (x165<=((x166&x167)<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	static uint32_t x170 = UINT32_MAX;
	int8_t x171 = -1;
	int8_t x172 = -14;
	static int32_t t42 = 10461;

	t42 = (x169<=((x170&x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = -11594LL;
	uint64_t x175 = 328298520LLU;
	int64_t x176 = -1LL;
	volatile int32_t t43 = -1;

	t43 = (x173<=((x174&x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -19468;

	t44 = (x177<=((x178&x179)<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = 750373179195603LLU;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = 8;

	t45 = (x181<=((x182&x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 40U;
	int32_t t46 = 11024853;

	t46 = (x185<=((x186&x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 1751444243225LLU;
	volatile int64_t x190 = -1LL;
	uint32_t x191 = 12U;
	volatile uint32_t x192 = 38827555U;
	int32_t t47 = 1683;

	t47 = (x189<=((x190&x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 22U;
	volatile int32_t t48 = -1231;

	t48 = (x193<=((x194&x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -28LL;
	int32_t x198 = -1;
	static uint8_t x199 = UINT8_MAX;
	int64_t x200 = INT64_MIN;
	int32_t t49 = -123588851;

	t49 = (x197<=((x198&x199)<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 4155;
	volatile int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = -291039608;

	t50 = (x201<=((x202&x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int8_t x206 = INT8_MAX;
	int8_t x207 = -1;
	uint8_t x208 = 0U;
	volatile int32_t t51 = -767;

	t51 = (x205<=((x206&x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -227;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -789043135641096821LL;
	volatile int16_t x212 = INT16_MIN;
	static int32_t t52 = -287800;

	t52 = (x209<=((x210&x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	int64_t x216 = -239696369817011257LL;
	static int32_t t53 = 18709181;

	t53 = (x213<=((x214&x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 5U;
	volatile int64_t x218 = INT64_MAX;
	uint8_t x219 = 4U;
	static uint32_t x220 = 0U;
	int32_t t54 = 7470536;

	t54 = (x217<=((x218&x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 0;
	int32_t x222 = -308;
	static uint64_t x223 = 260280746950031LLU;

	t55 = (x221<=((x222&x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = 42419429700840763LL;
	int16_t x227 = 14948;
	volatile int32_t t56 = -15489087;

	t56 = (x225<=((x226&x227)<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	int32_t t57 = 34850397;

	t57 = (x229<=((x230&x231)<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint8_t x234 = 10U;
	uint16_t x235 = UINT16_MAX;

	t58 = (x233<=((x234&x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	volatile uint64_t x238 = 106LLU;
	volatile int16_t x239 = -3;
	static volatile int16_t x240 = -410;
	int32_t t59 = -2933455;

	t59 = (x237<=((x238&x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MAX;

	t60 = (x241<=((x242&x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x246 = INT8_MIN;
	uint16_t x247 = 14U;
	static int8_t x248 = 0;
	int32_t t61 = -52037151;

	t61 = (x245<=((x246&x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	uint64_t x251 = 3022134582812LLU;
	int32_t t62 = -1;

	t62 = (x249<=((x250&x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int32_t x254 = -1;
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;

	t63 = (x253<=((x254&x255)<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MAX;
	volatile int32_t x259 = INT32_MIN;
	int32_t t64 = 485;

	t64 = (x257<=((x258&x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 1;

	t65 = (x261<=((x262&x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	int64_t x266 = INT64_MIN;
	volatile uint64_t x267 = 1089102975LLU;

	t66 = (x265<=((x266&x267)<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 192078153631312329LLU;
	int64_t x270 = 821LL;
	uint32_t x271 = 0U;

	t67 = (x269<=((x270&x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = UINT8_MAX;
	volatile int16_t x275 = INT16_MIN;
	int64_t x276 = -422110041599644LL;

	t68 = (x273<=((x274&x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -776681LL;
	int8_t x280 = -2;
	int32_t t69 = 12876172;

	t69 = (x277<=((x278&x279)<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int64_t x282 = -1506095947057605781LL;
	volatile int8_t x283 = INT8_MIN;
	uint32_t x284 = 229674U;
	int32_t t70 = -466;

	t70 = (x281<=((x282&x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	int64_t x286 = -1612798250LL;
	int8_t x288 = -1;
	int32_t t71 = -1;

	t71 = (x285<=((x286&x287)<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = 397U;
	int8_t x292 = INT8_MAX;
	int32_t t72 = 26556;

	t72 = (x289<=((x290&x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -1271LL;
	int32_t x294 = 623383;
	int8_t x295 = -9;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -143;

	t73 = (x293<=((x294&x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	volatile uint16_t x300 = UINT16_MAX;

	t74 = (x297<=((x298&x299)<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	int16_t x302 = 85;
	uint16_t x303 = 959U;
	uint64_t x304 = UINT64_MAX;

	t75 = (x301<=((x302&x303)<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MAX;
	uint16_t x306 = UINT16_MAX;
	int8_t x308 = INT8_MIN;

	t76 = (x305<=((x306&x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	uint32_t x311 = 999U;
	int64_t x312 = 768853985LL;
	int32_t t77 = -147;

	t77 = (x309<=((x310&x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	int32_t t78 = 527750;

	t78 = (x313<=((x314&x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x318 = UINT8_MAX;
	int64_t x319 = -1LL;

	t79 = (x317<=((x318&x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -1LL;
	static int32_t t80 = 52;

	t80 = (x321<=((x322&x323)<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 61U;
	static int32_t x326 = INT32_MIN;
	int16_t x328 = 469;
	volatile int32_t t81 = 83474002;

	t81 = (x325<=((x326&x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MAX;
	uint32_t x332 = 48276U;
	static int32_t t82 = -6370435;

	t82 = (x329<=((x330&x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MAX;
	int32_t t83 = 206435783;

	t83 = (x333<=((x334&x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int64_t x339 = -339945908160415088LL;
	volatile int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = -12148;

	t84 = (x337<=((x338&x339)<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	static uint16_t x342 = UINT16_MAX;
	static int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;

	t85 = (x341<=((x342&x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	static volatile int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	int32_t t86 = 20;

	t86 = (x345<=((x346&x347)<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -2289489;
	static uint32_t x351 = 2982U;
	int32_t t87 = 61278399;

	t87 = (x349<=((x350&x351)<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -1;
	volatile int32_t t88 = -334186;

	t88 = (x353<=((x354&x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = 65LLU;
	volatile int32_t t89 = 15;

	t89 = (x357<=((x358&x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile int16_t x363 = -1;
	int32_t t90 = -711152094;

	t90 = (x361<=((x362&x363)<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	volatile int64_t x366 = -509996566722LL;
	uint16_t x367 = 17U;
	int32_t x368 = INT32_MIN;

	t91 = (x365<=((x366&x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	static uint16_t x372 = 5328U;
	static volatile int32_t t92 = 176;

	t92 = (x369<=((x370&x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint64_t x374 = 1879636LLU;
	uint16_t x375 = 1490U;
	int16_t x376 = -2222;

	t93 = (x373<=((x374&x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x378 = UINT32_MAX;
	int64_t x380 = 280110LL;
	static volatile int32_t t94 = 3;

	t94 = (x377<=((x378&x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = 46U;
	int16_t x384 = -7249;
	volatile int32_t t95 = 167;

	t95 = (x381<=((x382&x383)<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 1;
	uint32_t x386 = UINT32_MAX;
	static volatile int32_t t96 = -14519285;

	t96 = (x385<=((x386&x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = 49407944LLU;
	static uint8_t x391 = 1U;
	int32_t t97 = -5;

	t97 = (x389<=((x390&x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 2;
	volatile int8_t x394 = 23;
	volatile int32_t t98 = -114999;

	t98 = (x393<=((x394&x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 1043074;

	t99 = (x397<=((x398&x399)<x400));

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

