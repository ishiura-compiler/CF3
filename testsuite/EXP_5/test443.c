#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 1597785LLU;
uint16_t x16 = 160U;
int32_t x20 = INT32_MIN;
volatile int64_t x24 = 618973521940811LL;
volatile int16_t x33 = -5600;
static uint32_t x36 = 11909U;
volatile int32_t t8 = 3262364;
int8_t x41 = -1;
int64_t x46 = -1LL;
volatile int32_t t10 = -1848;
int32_t x57 = -5;
static volatile int32_t t11 = 1592590;
int64_t x64 = INT64_MIN;
int32_t x70 = 2;
int32_t x75 = -1;
int32_t t15 = -35349387;
static uint16_t x82 = UINT16_MAX;
int64_t x85 = -1740217284699LL;
uint32_t x90 = 0U;
static int16_t x103 = INT16_MIN;
int8_t x110 = 62;
volatile uint16_t x117 = 119U;
int8_t x126 = INT8_MAX;
int16_t x131 = INT16_MIN;
int32_t x132 = INT32_MAX;
static volatile int32_t x133 = INT32_MAX;
int64_t t28 = 31715795874LL;
uint8_t x144 = 23U;
volatile int32_t x171 = -2526930;
volatile int32_t t35 = 484408;
uint64_t x180 = 1994093LLU;
volatile uint16_t x187 = UINT16_MAX;
int8_t x191 = 12;
volatile int32_t t39 = -630;
static uint64_t x213 = 53072417950865LLU;
volatile uint8_t x215 = UINT8_MAX;
volatile uint64_t t43 = 64252LLU;
static uint32_t x218 = UINT32_MAX;
int32_t t44 = 91783889;
int8_t x242 = INT8_MAX;
int32_t x243 = -1;
int16_t x247 = INT16_MAX;
static int64_t x254 = INT64_MIN;
uint32_t x258 = 7507805U;
int16_t x261 = 2909;
static volatile int32_t x262 = INT32_MIN;
int32_t x274 = -1;
int64_t x275 = INT64_MAX;
volatile uint64_t t55 = 8991696LLU;
static int32_t x279 = 23;
static int8_t x285 = INT8_MIN;
int8_t x286 = -1;
int16_t x287 = 0;
uint64_t x288 = 585762497LLU;
volatile int64_t x289 = 17517214469064459LL;
int16_t x293 = INT16_MIN;
int32_t x298 = -4;
volatile int32_t t63 = 1886;
int32_t x325 = INT32_MIN;
int8_t x327 = -1;
uint32_t x342 = 7U;
uint16_t x343 = 1364U;
uint8_t x347 = 0U;
static int16_t x348 = INT16_MIN;
int64_t x357 = 1639457858042387423LL;
volatile int16_t x365 = INT16_MIN;
int16_t x367 = 263;
int8_t x372 = INT8_MIN;
int32_t x382 = 47833;
static int64_t x393 = -482879351855563LL;
volatile int8_t x398 = INT8_MIN;
volatile int32_t x404 = -1;
volatile int32_t t81 = -927;
uint64_t x429 = 1363634LLU;
static int32_t t86 = 788519;
uint32_t x446 = UINT32_MAX;
int32_t t88 = 26077291;
int64_t x459 = -1LL;
uint8_t x460 = UINT8_MAX;
uint32_t x466 = 50724U;
int8_t x475 = 31;
static uint8_t x488 = 0U;
static int16_t x489 = -1;
uint64_t x491 = 10776636LLU;
uint32_t x493 = UINT32_MAX;
static uint64_t x496 = 6702004875682119LLU;


void f0(void) {
	volatile uint64_t x5 = 15LLU;
	volatile int8_t x6 = -12;
	volatile int16_t x7 = INT16_MIN;
	static volatile int32_t x8 = INT32_MIN;

	t0 = (x5+((x6*x7)<x8));

	if (t0 != 15LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -78650697128150266LL;
	uint8_t x10 = 7U;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = INT16_MIN;
	volatile int64_t t1 = -1891119295676612466LL;

	t1 = (x9+((x10*x11)<x12));

	if (t1 != -78650697128150266LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 31U;
	static int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MAX;
	int32_t t2 = 3101409;

	t2 = (x13+((x14*x15)<x16));

	if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = -1;
	uint64_t x19 = 31743556797744634LLU;
	volatile int64_t t3 = 25509198454LL;

	t3 = (x17+((x18*x19)<x20));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	static int16_t x22 = INT16_MIN;
	uint8_t x23 = UINT8_MAX;
	volatile int64_t t4 = 670LL;

	t4 = (x21+((x22*x23)<x24));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	int32_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 0U;
	volatile int32_t t5 = -224;

	t5 = (x25+((x26*x27)<x28));

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 78U;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = 94396650416LLU;
	static volatile uint32_t x32 = 101U;
	static int32_t t6 = 2;

	t6 = (x29+((x30*x31)<x32));

	if (t6 != 78) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = -7152;
	int16_t x35 = -9;
	volatile int32_t t7 = -12267;

	t7 = (x33+((x34*x35)<x36));

	if (t7 != -5600) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = UINT32_MAX;
	uint16_t x40 = 9579U;

	t8 = (x37+((x38*x39)<x40));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -6903;
	volatile int64_t x43 = -1LL;
	int64_t x44 = -4080984741287163090LL;
	volatile int32_t t9 = -12982915;

	t9 = (x41+((x42*x43)<x44));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int64_t x47 = -195021499942LL;
	int64_t x48 = -15961167514110829LL;

	t10 = (x45+((x46*x47)<x48));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x58 = -1;
	int16_t x59 = -1;
	uint32_t x60 = 34751U;

	t11 = (x57+((x58*x59)<x60));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -813954;
	volatile int32_t x62 = 452;
	int32_t x63 = -1;
	volatile int32_t t12 = -21683;

	t12 = (x61+((x62*x63)<x64));

	if (t12 != -813954) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 1;
	int8_t x66 = INT8_MIN;
	int8_t x67 = 0;
	int32_t x68 = 12;
	volatile int32_t t13 = 15556697;

	t13 = (x65+((x66*x67)<x68));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MIN;
	int8_t x71 = 0;
	uint8_t x72 = 52U;
	int64_t t14 = -1282580106154117LL;

	t14 = (x69+((x70*x71)<x72));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 5U;
	uint8_t x74 = UINT8_MAX;
	int8_t x76 = -61;

	t15 = (x73+((x74*x75)<x76));

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = INT64_MAX;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x81+((x82*x83)<x84));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 182U;
	int64_t x87 = -1LL;
	uint64_t x88 = 343348964171LLU;
	int64_t t17 = -262146026LL;

	t17 = (x85+((x86*x87)<x88));

	if (t17 != -1740217284699LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 99U;
	int16_t x91 = -1;
	int64_t x92 = INT64_MAX;
	uint32_t t18 = 37263629U;

	t18 = (x89+((x90*x91)<x92));

	if (t18 != 100U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = INT32_MIN;
	volatile uint8_t x95 = 1U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t19 = 1074;

	t19 = (x93+((x94*x95)<x96));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 18U;
	int8_t x102 = -1;
	static volatile uint32_t x104 = 606832100U;
	uint32_t t20 = 10U;

	t20 = (x101+((x102*x103)<x104));

	if (t20 != 19U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x109 = 447U;
	uint8_t x111 = 8U;
	int32_t x112 = INT32_MIN;
	volatile uint32_t t21 = 7U;

	t21 = (x109+((x110*x111)<x112));

	if (t21 != 447U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x113 = -1LL;
	static int8_t x114 = -1;
	volatile uint8_t x115 = 5U;
	volatile int32_t x116 = INT32_MIN;
	volatile int64_t t22 = 220103191405515LL;

	t22 = (x113+((x114*x115)<x116));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x118 = -5084782LL;
	static uint8_t x119 = 33U;
	int16_t x120 = -1;
	int32_t t23 = 117742;

	t23 = (x117+((x118*x119)<x120));

	if (t23 != 120) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MIN;
	volatile uint32_t x122 = 73U;
	uint8_t x123 = UINT8_MAX;
	static volatile int64_t x124 = 61074196146031LL;
	static int32_t t24 = 172351;

	t24 = (x121+((x122*x123)<x124));

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x127 = 2U;
	uint8_t x128 = UINT8_MAX;
	int32_t t25 = -1;

	t25 = (x125+((x126*x127)<x128));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -29;
	static volatile int8_t x130 = 0;
	volatile int32_t t26 = -3;

	t26 = (x129+((x130*x131)<x132));

	if (t26 != -28) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = 1;
	uint8_t x135 = 2U;
	int16_t x136 = -1;
	static int32_t t27 = INT32_MAX;

	t27 = (x133+((x134*x135)<x136));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	int64_t x139 = -1LL;
	int64_t x140 = -1LL;

	t28 = (x137+((x138*x139)<x140));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = 5382444;
	static volatile int32_t x143 = -1;
	volatile int32_t t29 = 20645525;

	t29 = (x141+((x142*x143)<x144));

	if (t29 != 65536) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 40U;
	static uint64_t x146 = UINT64_MAX;
	int16_t x147 = -1;
	int8_t x148 = 55;
	int32_t t30 = 2043;

	t30 = (x145+((x146*x147)<x148));

	if (t30 != 41) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 0U;
	volatile uint8_t x150 = 0U;
	static uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 6593U;
	volatile int32_t t31 = -91098;

	t31 = (x149+((x150*x151)<x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -31166745679501086LL;
	uint32_t x154 = UINT32_MAX;
	static uint8_t x155 = 35U;
	int16_t x156 = INT16_MAX;
	volatile int64_t t32 = -2961LL;

	t32 = (x153+((x154*x155)<x156));

	if (t32 != -31166745679501086LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = -14;
	volatile int64_t x158 = -1LL;
	static int32_t x159 = 1766;
	uint8_t x160 = 20U;
	int32_t t33 = 141;

	t33 = (x157+((x158*x159)<x160));

	if (t33 != -13) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -3LL;
	uint64_t x166 = 1991158LLU;
	static int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MIN;
	volatile int64_t t34 = 453LL;

	t34 = (x165+((x166*x167)<x168));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x169 = 75U;
	volatile int8_t x170 = 3;
	uint64_t x172 = 66160295466130253LLU;

	t35 = (x169+((x170*x171)<x172));

	if (t35 != 75) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = INT64_MIN;
	static int32_t x178 = INT32_MIN;
	uint32_t x179 = 40U;
	int64_t t36 = -78077258361924929LL;

	t36 = (x177+((x178*x179)<x180));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 0U;
	volatile uint8_t x183 = 3U;
	uint16_t x184 = 8423U;
	static int32_t t37 = -1;

	t37 = (x181+((x182*x183)<x184));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x185 = 18U;
	uint32_t x186 = 989578556U;
	int8_t x188 = 16;
	static volatile uint32_t t38 = 80288064U;

	t38 = (x185+((x186*x187)<x188));

	if (t38 != 18U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MAX;
	static volatile int32_t x190 = -6;
	int16_t x192 = -3;

	t39 = (x189+((x190*x191)<x192));

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x201 = -1;
	int64_t x202 = -1LL;
	uint8_t x203 = UINT8_MAX;
	volatile int64_t x204 = INT64_MAX;
	volatile int32_t t40 = 284575866;

	t40 = (x201+((x202*x203)<x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x205 = INT32_MIN;
	volatile int8_t x206 = 1;
	int64_t x207 = 12537503261LL;
	volatile uint64_t x208 = 32084631660LLU;
	int32_t t41 = -397774;

	t41 = (x205+((x206*x207)<x208));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = 3;
	int8_t x210 = INT8_MIN;
	volatile uint64_t x211 = 1873662234916919932LLU;
	volatile uint16_t x212 = 0U;
	int32_t t42 = 1;

	t42 = (x209+((x210*x211)<x212));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x214 = -1;
	int32_t x216 = INT32_MAX;

	t43 = (x213+((x214*x215)<x216));

	if (t43 != 53072417950866LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x217 = 0U;
	int8_t x219 = 2;
	uint16_t x220 = 7U;

	t44 = (x217+((x218*x219)<x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 0U;
	int32_t x223 = -18625459;
	int8_t x224 = INT8_MIN;
	int32_t t45 = -89709937;

	t45 = (x221+((x222*x223)<x224));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MIN;
	static int64_t x226 = -202582194LL;
	uint32_t x227 = 253034840U;
	uint8_t x228 = 3U;
	int64_t t46 = 425027774689994088LL;

	t46 = (x225+((x226*x227)<x228));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = 1;
	int8_t x230 = INT8_MAX;
	uint8_t x231 = 2U;
	int32_t x232 = -1;
	static int32_t t47 = 1;

	t47 = (x229+((x230*x231)<x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = 77U;
	int16_t x235 = INT16_MIN;
	int64_t x236 = -1LL;
	int32_t t48 = -384894;

	t48 = (x233+((x234*x235)<x236));

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = -11LL;
	int8_t x244 = 0;
	static int64_t t49 = 5LL;

	t49 = (x241+((x242*x243)<x244));

	if (t49 != -10LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x245 = INT64_MIN;
	uint16_t x246 = 10196U;
	uint16_t x248 = UINT16_MAX;
	int64_t t50 = INT64_MIN;

	t50 = (x245+((x246*x247)<x248));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -1LL;
	int16_t x250 = -6;
	volatile uint32_t x251 = UINT32_MAX;
	int16_t x252 = -1;
	volatile int64_t t51 = -15353071328LL;

	t51 = (x249+((x250*x251)<x252));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x253 = 132676120050930LLU;
	uint64_t x255 = UINT64_MAX;
	uint32_t x256 = 550416U;
	volatile uint64_t t52 = 95565250LLU;

	t52 = (x253+((x254*x255)<x256));

	if (t52 != 132676120050930LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = 514108U;
	uint64_t x259 = 98LLU;
	volatile uint32_t x260 = 18U;
	static uint32_t t53 = 1212051697U;

	t53 = (x257+((x258*x259)<x260));

	if (t53 != 514108U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x263 = UINT32_MAX;
	int32_t x264 = 104518840;
	volatile int32_t t54 = 10240;

	t54 = (x261+((x262*x263)<x264));

	if (t54 != 2909) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x273 = 1122047855694LLU;
	int16_t x276 = -1;

	t55 = (x273+((x274*x275)<x276));

	if (t55 != 1122047855695LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	int32_t x280 = -172850;
	volatile int32_t t56 = 87996578;

	t56 = (x277+((x278*x279)<x280));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = -13498;

	t57 = (x285+((x286*x287)<x288));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	volatile int32_t x292 = INT32_MIN;
	static int64_t t58 = 879646LL;

	t58 = (x289+((x290*x291)<x292));

	if (t58 != 17517214469064459LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x294 = INT64_MAX;
	int8_t x295 = -1;
	static volatile uint32_t x296 = UINT32_MAX;
	int32_t t59 = 82933;

	t59 = (x293+((x294*x295)<x296));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = 1011536;
	volatile uint16_t x299 = UINT16_MAX;
	int16_t x300 = -1;
	int32_t t60 = -192;

	t60 = (x297+((x298*x299)<x300));

	if (t60 != 1011537) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = 41;
	int16_t x302 = -1;
	volatile int64_t x303 = -1LL;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t61 = 2451;

	t61 = (x301+((x302*x303)<x304));

	if (t61 != 42) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = 1337804728U;
	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile uint32_t t62 = 3U;

	t62 = (x305+((x306*x307)<x308));

	if (t62 != 1337804728U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x309 = 24;
	volatile int8_t x310 = -51;
	int16_t x311 = 5;
	int16_t x312 = INT16_MIN;

	t63 = (x309+((x310*x311)<x312));

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x326 = 345356382U;
	volatile int64_t x328 = INT64_MAX;
	volatile int32_t t64 = 4514;

	t64 = (x325+((x326*x327)<x328));

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = 1;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = -6;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t65 = 129;

	t65 = (x329+((x330*x331)<x332));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MAX;
	volatile int16_t x334 = -29;
	int64_t x335 = -410689883645306LL;
	int8_t x336 = INT8_MAX;
	int32_t t66 = 44867586;

	t66 = (x333+((x334*x335)<x336));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x337 = 1;
	int16_t x338 = -1;
	int32_t x339 = 942;
	int16_t x340 = INT16_MIN;
	volatile int32_t t67 = 0;

	t67 = (x337+((x338*x339)<x340));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x341 = 0U;
	volatile int64_t x344 = -185118LL;
	int32_t t68 = 48924;

	t68 = (x341+((x342*x343)<x344));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = -119;
	int64_t x346 = -1LL;
	volatile int32_t t69 = 8235;

	t69 = (x345+((x346*x347)<x348));

	if (t69 != -119) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 10397462844705LLU;
	static int16_t x354 = 28;
	uint16_t x355 = 56U;
	volatile uint16_t x356 = UINT16_MAX;
	uint64_t t70 = 910109LLU;

	t70 = (x353+((x354*x355)<x356));

	if (t70 != 10397462844706LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 24229U;
	int8_t x360 = -1;
	static int64_t t71 = -106LL;

	t71 = (x357+((x358*x359)<x360));

	if (t71 != 1639457858042387424LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = -475730203094LL;
	uint32_t x362 = 0U;
	int32_t x363 = -56228876;
	int8_t x364 = 30;
	int64_t t72 = 1710945856926261LL;

	t72 = (x361+((x362*x363)<x364));

	if (t72 != -475730203093LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x366 = -1;
	volatile int8_t x368 = INT8_MIN;
	int32_t t73 = 41726;

	t73 = (x365+((x366*x367)<x368));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = -17496504548072941LL;
	volatile int32_t x370 = INT32_MIN;
	uint64_t x371 = 211661024891LLU;
	static int64_t t74 = -2028114662626759977LL;

	t74 = (x369+((x370*x371)<x372));

	if (t74 != -17496504548072940LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x377 = -64;
	volatile int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	volatile uint8_t x380 = 21U;
	static int32_t t75 = 143357;

	t75 = (x377+((x378*x379)<x380));

	if (t75 != -64) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x381 = 31U;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = 212LL;
	int32_t t76 = 2;

	t76 = (x381+((x382*x383)<x384));

	if (t76 != 31) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = -1;
	volatile uint64_t x390 = 1675687284768802646LLU;
	int16_t x391 = INT16_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t77 = -1899204;

	t77 = (x389+((x390*x391)<x392));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x394 = 7U;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 12LLU;
	volatile int64_t t78 = 3081942309LL;

	t78 = (x393+((x394*x395)<x396));

	if (t78 != -482879351855563LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x397 = INT8_MAX;
	int64_t x399 = -1LL;
	uint64_t x400 = 204LLU;
	int32_t t79 = 148403473;

	t79 = (x397+((x398*x399)<x400));

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x401 = 256U;
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = UINT32_MAX;
	uint32_t t80 = 1366571U;

	t80 = (x401+((x402*x403)<x404));

	if (t80 != 257U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x405 = 1973U;
	int32_t x406 = 2146;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = 31619190529LLU;

	t81 = (x405+((x406*x407)<x408));

	if (t81 != 1973) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = INT64_MIN;
	static int32_t x410 = INT32_MIN;
	volatile uint16_t x411 = 0U;
	int32_t x412 = INT32_MAX;
	volatile int64_t t82 = -9865610965LL;

	t82 = (x409+((x410*x411)<x412));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x417 = -1;
	static int16_t x418 = -998;
	int32_t x419 = -202747;
	int32_t x420 = -1;
	int32_t t83 = 101;

	t83 = (x417+((x418*x419)<x420));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = INT32_MIN;
	uint64_t t84 = 20320294LLU;

	t84 = (x429+((x430*x431)<x432));

	if (t84 != 1363635LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x433 = UINT32_MAX;
	int16_t x434 = INT16_MAX;
	int8_t x435 = 0;
	uint16_t x436 = UINT16_MAX;
	volatile uint32_t t85 = 432U;

	t85 = (x433+((x434*x435)<x436));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x437 = INT16_MIN;
	int16_t x438 = 141;
	int16_t x439 = 316;
	int8_t x440 = 1;

	t86 = (x437+((x438*x439)<x440));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x445 = 44U;
	uint16_t x447 = 3U;
	static volatile uint64_t x448 = 3426288866427628LLU;
	static volatile int32_t t87 = -119;

	t87 = (x445+((x446*x447)<x448));

	if (t87 != 45) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x449 = INT8_MIN;
	uint32_t x450 = UINT32_MAX;
	static uint16_t x451 = 446U;
	int16_t x452 = INT16_MAX;

	t88 = (x449+((x450*x451)<x452));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x457 = -29822;
	static int32_t x458 = 1753;
	volatile int32_t t89 = 1809;

	t89 = (x457+((x458*x459)<x460));

	if (t89 != -29821) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x461 = 104U;
	uint16_t x462 = 97U;
	uint64_t x463 = 433511723248LLU;
	int32_t x464 = 3;
	static volatile uint32_t t90 = 8793U;

	t90 = (x461+((x462*x463)<x464));

	if (t90 != 104U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x465 = 8079U;
	static uint16_t x467 = UINT16_MAX;
	static uint64_t x468 = 6029987836524573LLU;
	int32_t t91 = 23;

	t91 = (x465+((x466*x467)<x468));

	if (t91 != 8080) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x469 = 1U;
	int32_t x470 = INT32_MIN;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = INT64_MIN;
	int32_t t92 = 972113;

	t92 = (x469+((x470*x471)<x472));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x473 = 6U;
	uint8_t x474 = 3U;
	volatile int16_t x476 = INT16_MIN;
	int32_t t93 = 373;

	t93 = (x473+((x474*x475)<x476));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x477 = 2404282U;
	uint8_t x478 = 96U;
	int16_t x479 = -1;
	volatile int16_t x480 = INT16_MIN;
	volatile uint32_t t94 = 8974861U;

	t94 = (x477+((x478*x479)<x480));

	if (t94 != 2404282U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x485 = INT64_MIN;
	uint64_t x486 = 157890720558493LLU;
	uint32_t x487 = 79U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x485+((x486*x487)<x488));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x490 = -1LL;
	volatile uint32_t x492 = 33U;
	volatile int32_t t96 = 66807998;

	t96 = (x489+((x490*x491)<x492));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x494 = INT16_MIN;
	uint32_t x495 = 102832U;
	volatile uint32_t t97 = 30742392U;

	t97 = (x493+((x494*x495)<x496));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x501 = INT64_MIN;
	volatile int8_t x502 = INT8_MAX;
	int16_t x503 = INT16_MIN;
	volatile uint8_t x504 = 5U;
	static int64_t t98 = -51157LL;

	t98 = (x501+((x502*x503)<x504));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = 2091LL;
	int16_t x506 = INT16_MAX;
	int8_t x507 = 1;
	int64_t x508 = INT64_MAX;
	int64_t t99 = 48LL;

	t99 = (x505+((x506*x507)<x508));

	if (t99 != 2092LL) { NG(); } else { ; }
	
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

