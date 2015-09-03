#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -380580187LL;
int32_t x8 = INT32_MIN;
static int32_t x10 = INT32_MAX;
uint16_t x15 = UINT16_MAX;
uint32_t x16 = 94168U;
volatile uint8_t x17 = UINT8_MAX;
int64_t x20 = INT64_MAX;
int64_t x22 = INT64_MIN;
int32_t x23 = -37;
volatile int16_t x25 = INT16_MAX;
volatile uint8_t x28 = 57U;
volatile int16_t x29 = -2082;
volatile int32_t t9 = 1798284;
static volatile int32_t x42 = -521379;
static int32_t t12 = 4644;
int32_t x57 = INT32_MIN;
static int16_t x59 = INT16_MAX;
volatile int32_t t14 = 7280312;
volatile int64_t x61 = INT64_MIN;
static volatile uint16_t x62 = 3U;
uint32_t x63 = 1487U;
int8_t x67 = INT8_MIN;
static volatile uint64_t x69 = 8LLU;
uint8_t x70 = UINT8_MAX;
volatile int16_t x72 = INT16_MIN;
static int64_t x76 = -1428LL;
int32_t x81 = 2074264;
int16_t x83 = -1;
uint8_t x90 = 0U;
volatile int32_t x92 = INT32_MIN;
int16_t x93 = -1;
int64_t x99 = INT64_MAX;
int32_t x105 = 0;
static int16_t x118 = -1;
volatile int32_t x120 = INT32_MAX;
int32_t t29 = -384457851;
int32_t t30 = -87269;
volatile int16_t x136 = -8;
static uint32_t t33 = 121155U;
int8_t x143 = -3;
int8_t x147 = INT8_MIN;
static volatile int32_t t36 = -19;
int16_t x152 = -1;
int16_t x153 = INT16_MIN;
uint8_t x158 = 7U;
volatile int8_t x166 = INT8_MIN;
uint8_t x171 = UINT8_MAX;
static int32_t t42 = 222243969;
uint16_t x173 = 4717U;
volatile int32_t x181 = 15589488;
volatile int8_t x182 = INT8_MIN;
int16_t x185 = INT16_MAX;
volatile uint8_t x192 = 0U;
static int32_t x195 = -2;
int8_t x207 = INT8_MAX;
volatile int64_t x208 = -3197669666439404LL;
uint16_t x210 = 467U;
int16_t x216 = INT16_MIN;
volatile uint16_t x222 = 5U;
int16_t x223 = INT16_MIN;
int64_t x227 = -1LL;
int8_t x231 = 1;
volatile int32_t t59 = 1;
uint16_t x242 = 265U;
volatile int32_t x245 = 1061901229;
static int32_t t61 = -111346215;
int32_t x252 = -130008835;
volatile int64_t x256 = INT64_MIN;
int32_t t63 = 143;
int64_t x258 = -1LL;
volatile int16_t x259 = INT16_MIN;
volatile uint16_t x268 = 4501U;
uint64_t x270 = 914698116LLU;
int8_t x272 = INT8_MIN;
static int64_t x276 = INT64_MIN;
volatile int32_t x283 = 15584;
static int8_t x284 = INT8_MIN;
int32_t x292 = -1;
int8_t x293 = INT8_MIN;
volatile int32_t t73 = -163880;
int8_t x299 = INT8_MAX;
uint16_t x301 = UINT16_MAX;
int64_t x307 = 105691661LL;
volatile int32_t t76 = -48083;
int32_t x309 = -1;
int16_t x311 = 157;
uint32_t x312 = 27166459U;
static uint8_t x318 = 1U;
int16_t x320 = INT16_MAX;
int64_t x323 = INT64_MIN;
static volatile uint8_t x328 = UINT8_MAX;
int16_t x329 = -49;
volatile int8_t x330 = -1;
volatile int8_t x332 = INT8_MAX;
volatile int32_t t82 = -195;
int64_t x336 = INT64_MAX;
int16_t x338 = INT16_MIN;
uint16_t x346 = 20711U;
int32_t x348 = -1;
int64_t x350 = 89806230422LL;
int32_t x351 = INT32_MIN;
uint8_t x355 = UINT8_MAX;
static int32_t x358 = INT32_MIN;
int64_t x359 = 1LL;
static volatile uint8_t x361 = 0U;
volatile int8_t x366 = -1;
int8_t x367 = INT8_MAX;
volatile int8_t x372 = -1;
int64_t x374 = -70251767765LL;
uint64_t x376 = 1LLU;
volatile int8_t x380 = -63;
volatile uint16_t x382 = 3807U;
static int32_t x388 = -1;
volatile int32_t t96 = 8602;
int32_t x392 = 4988;


void f0(void) {
	int32_t x1 = -1;
	static int16_t x2 = INT16_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = -249;

	t0 = (x1^((x2<x3)<x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2U;
	volatile int8_t x6 = 3;
	static uint32_t x7 = 2059310U;
	uint32_t t1 = 99178U;

	t1 = (x5^((x6<x7)<x8));

	if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 1LL;
	volatile uint8_t x11 = 1U;
	uint64_t x12 = 282434649913825164LLU;
	volatile int64_t t2 = 2775LL;

	t2 = (x9^((x10<x11)<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint8_t x14 = UINT8_MAX;
	int32_t t3 = -26701253;

	t3 = (x13^((x14<x15)<x16));

	if (t3 != 2147483646) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 159730U;
	int32_t x19 = INT32_MAX;
	volatile int32_t t4 = 56;

	t4 = (x17^((x18<x19)<x20));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	int16_t x24 = 1;
	static volatile int32_t t5 = -1604015;

	t5 = (x21^((x22<x23)<x24));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	int16_t x27 = 0;
	int32_t t6 = -11;

	t6 = (x25^((x26<x27)<x28));

	if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = 498U;
	int8_t x31 = INT8_MAX;
	static uint32_t x32 = 563U;
	int32_t t7 = 3;

	t7 = (x29^((x30<x31)<x32));

	if (t7 != -2081) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	volatile uint32_t x34 = 0U;
	static int16_t x35 = 2;
	int32_t x36 = 1758;
	volatile uint64_t t8 = 2225902LLU;

	t8 = (x33^((x34<x35)<x36));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x38 = 13U;
	volatile uint32_t x39 = 31704659U;
	static int16_t x40 = -1;

	t9 = (x37^((x38<x39)<x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -29698726429LL;
	int64_t x43 = -1373570451591LL;
	uint64_t x44 = 57727298LLU;
	volatile int64_t t10 = 37673816338631LL;

	t10 = (x41^((x42<x43)<x44));

	if (t10 != -29698726430LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	static volatile int8_t x46 = 0;
	int16_t x47 = 9;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 516475;

	t11 = (x45^((x46<x47)<x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 36U;
	int8_t x52 = INT8_MAX;

	t12 = (x49^((x50<x51)<x52));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	uint16_t x54 = 69U;
	uint64_t x55 = 270218882654711LLU;
	int16_t x56 = -168;
	volatile int32_t t13 = 531550;

	t13 = (x53^((x54<x55)<x56));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 595057300812193LLU;
	int64_t x60 = 176LL;

	t14 = (x57^((x58<x59)<x60));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x64 = INT8_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x61^((x62<x63)<x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = 0U;
	int64_t x66 = -1LL;
	static int16_t x68 = -4136;
	volatile int32_t t16 = -311523;

	t16 = (x65^((x66<x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = -11;
	volatile uint64_t t17 = 942LLU;

	t17 = (x69^((x70<x71)<x72));

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static volatile uint16_t x74 = 15965U;
	uint16_t x75 = 857U;
	volatile int32_t t18 = 5142082;

	t18 = (x73^((x74<x75)<x76));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint32_t x78 = 80U;
	static int64_t x79 = 1LL;
	static int64_t x80 = 436956951255473131LL;
	static int32_t t19 = -306;

	t19 = (x77^((x78<x79)<x80));

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -1804;

	t20 = (x81^((x82<x83)<x84));

	if (t20 != 2074264) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 63414710U;
	static volatile int32_t t21 = 564229077;

	t21 = (x85^((x86<x87)<x88));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 34U;
	volatile uint8_t x91 = UINT8_MAX;
	int32_t t22 = -4182074;

	t22 = (x89^((x90<x91)<x92));

	if (t22 != 34) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x94 = UINT64_MAX;
	volatile int16_t x95 = -1;
	int64_t x96 = 1024721868798LL;
	static int32_t t23 = -178341154;

	t23 = (x93^((x94<x95)<x96));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint8_t x98 = 5U;
	static int64_t x100 = -1LL;
	static volatile int32_t t24 = INT32_MAX;

	t24 = (x97^((x98<x99)<x100));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 5U;
	static uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint32_t t25 = 238553025U;

	t25 = (x101^((x102<x103)<x104));

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x106 = 6399U;
	static uint32_t x107 = 659983525U;
	uint32_t x108 = 76706504U;
	volatile int32_t t26 = 18584;

	t26 = (x105^((x106<x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -12;
	int16_t x110 = INT16_MAX;
	static int32_t x111 = INT32_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = -5313749;

	t27 = (x109^((x110<x111)<x112));

	if (t27 != -11) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	uint64_t x114 = 36886123LLU;
	int32_t x115 = INT32_MIN;
	int16_t x116 = 1;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x113^((x114<x115)<x116));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint16_t x119 = 335U;

	t29 = (x117^((x118<x119)<x120));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 192287335;
	static int32_t x122 = 2037889;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MIN;

	t30 = (x121^((x122<x123)<x124));

	if (t30 != 192287335) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	uint64_t x127 = 49466946804793094LLU;
	volatile int8_t x128 = INT8_MIN;
	volatile int64_t t31 = INT64_MIN;

	t31 = (x125^((x126<x127)<x128));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	uint32_t x130 = 199457U;
	static volatile uint64_t x131 = 916LLU;
	static uint64_t x132 = 6868LLU;
	volatile int32_t t32 = -1;

	t32 = (x129^((x130<x131)<x132));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 14976450U;
	volatile uint32_t x134 = 14U;
	volatile uint16_t x135 = 333U;

	t33 = (x133^((x134<x135)<x136));

	if (t33 != 14976450U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = 516;
	int32_t x138 = -1;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	int32_t t34 = 989;

	t34 = (x137^((x138<x139)<x140));

	if (t34 != 516) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 1629U;
	static int64_t x142 = -36795427LL;
	uint64_t x144 = 74915LLU;
	volatile uint32_t t35 = 12U;

	t35 = (x141^((x142<x143)<x144));

	if (t35 != 1628U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MAX;
	volatile uint8_t x148 = UINT8_MAX;

	t36 = (x145^((x146<x147)<x148));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	volatile uint8_t x150 = 59U;
	int64_t x151 = -9703512976288961LL;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x149^((x150<x151)<x152));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	uint64_t x155 = 42755653970765916LLU;
	uint16_t x156 = 1796U;
	volatile int32_t t38 = -44788;

	t38 = (x153^((x154<x155)<x156));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	int64_t x159 = 17577679572197LL;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -171585;

	t39 = (x157^((x158<x159)<x160));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile int16_t x162 = -1;
	static volatile int8_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 16360;

	t40 = (x161^((x162<x163)<x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = -2759;
	int16_t x167 = INT16_MIN;
	static volatile int8_t x168 = -2;
	int32_t t41 = -139;

	t41 = (x165^((x166<x167)<x168));

	if (t41 != -2759) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -156738949;
	volatile uint16_t x170 = 31U;
	int32_t x172 = INT32_MIN;

	t42 = (x169^((x170<x171)<x172));

	if (t42 != -156738949) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 2U;
	volatile uint16_t x175 = UINT16_MAX;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t43 = -79373;

	t43 = (x173^((x174<x175)<x176));

	if (t43 != 4716) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	static volatile int8_t x180 = -1;
	volatile int32_t t44 = -62;

	t44 = (x177^((x178<x179)<x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x183 = 29U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 16;

	t45 = (x181^((x182<x183)<x184));

	if (t45 != 15589488) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = -2;
	int64_t x187 = -31276122028310450LL;
	uint8_t x188 = 30U;
	volatile int32_t t46 = 148639;

	t46 = (x185^((x186<x187)<x188));

	if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint16_t x190 = 150U;
	static int8_t x191 = 3;
	volatile int32_t t47 = -91;

	t47 = (x189^((x190<x191)<x192));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 2692492733597443LLU;
	static uint64_t x194 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	uint64_t t48 = 1LLU;

	t48 = (x193^((x194<x195)<x196));

	if (t48 != 2692492733597443LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 4;
	uint64_t x198 = 1416598540789392LLU;
	int16_t x199 = 213;
	uint8_t x200 = 3U;
	int32_t t49 = 49;

	t49 = (x197^((x198<x199)<x200));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -2142543500837352697LL;
	volatile int64_t x202 = INT64_MAX;
	int8_t x203 = 1;
	volatile uint32_t x204 = UINT32_MAX;
	int64_t t50 = -2LL;

	t50 = (x201^((x202<x203)<x204));

	if (t50 != -2142543500837352698LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 1U;
	static int16_t x206 = INT16_MIN;
	int32_t t51 = -82098247;

	t51 = (x205^((x206<x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 1402234U;
	static int16_t x211 = INT16_MIN;
	uint32_t x212 = 12U;
	uint32_t t52 = 15U;

	t52 = (x209^((x210<x211)<x212));

	if (t52 != 1402235U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -8646;
	uint16_t x214 = 2U;
	int16_t x215 = 0;
	static volatile int32_t t53 = -3282;

	t53 = (x213^((x214<x215)<x216));

	if (t53 != -8646) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = 148;
	int16_t x218 = 12860;
	uint16_t x219 = 33U;
	uint64_t x220 = 0LLU;
	volatile int32_t t54 = -311711722;

	t54 = (x217^((x218<x219)<x220));

	if (t54 != 148) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = -48259;

	t55 = (x221^((x222<x223)<x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	volatile uint8_t x226 = 32U;
	static int32_t x228 = -4003097;
	volatile int32_t t56 = -239229060;

	t56 = (x225^((x226<x227)<x228));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -81;
	uint16_t x230 = 5924U;
	uint16_t x232 = 10U;
	volatile int32_t t57 = 107380427;

	t57 = (x229^((x230<x231)<x232));

	if (t57 != -82) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 240U;
	uint64_t x234 = 1LLU;
	int32_t x235 = -57193279;
	int64_t x236 = -3372210608585310019LL;
	volatile int32_t t58 = -1;

	t58 = (x233^((x234<x235)<x236));

	if (t58 != 240) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 1U;
	static int32_t x238 = INT32_MAX;
	static int8_t x239 = INT8_MIN;
	int8_t x240 = 11;

	t59 = (x237^((x238<x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -1;
	static uint16_t x243 = 27468U;
	static int64_t x244 = -1076038845003LL;
	volatile int32_t t60 = -156512662;

	t60 = (x241^((x242<x243)<x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x246 = 0U;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -773529514;

	t61 = (x245^((x246<x247)<x248));

	if (t61 != 1061901229) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 15673639358LL;
	static uint64_t x250 = 582LLU;
	uint32_t x251 = UINT32_MAX;
	static volatile int64_t t62 = 21LL;

	t62 = (x249^((x250<x251)<x252));

	if (t62 != 15673639358LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MAX;

	t63 = (x253^((x254<x255)<x256));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 45U;
	uint16_t x260 = 298U;
	int32_t t64 = 46;

	t64 = (x257^((x258<x259)<x260));

	if (t64 != 44) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 17134762671LLU;
	static uint32_t x262 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 12798297147339LLU;
	volatile uint64_t t65 = 81297527189LLU;

	t65 = (x261^((x262<x263)<x264));

	if (t65 != 17134762670LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int8_t x266 = -1;
	static int32_t x267 = -1;
	volatile int32_t t66 = 1583;

	t66 = (x265^((x266<x267)<x268));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 76218620621250256LLU;
	int64_t x271 = -1466134553137LL;
	static volatile uint64_t t67 = 1649293394LLU;

	t67 = (x269^((x270<x271)<x272));

	if (t67 != 76218620621250256LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint8_t x274 = UINT8_MAX;
	int32_t x275 = INT32_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = (x273^((x274<x275)<x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 815245U;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 7U;
	static uint32_t t69 = 2065U;

	t69 = (x277^((x278<x279)<x280));

	if (t69 != 815244U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -367;
	static int64_t x282 = INT64_MIN;
	int32_t t70 = 547;

	t70 = (x281^((x282<x283)<x284));

	if (t70 != -367) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 32294U;
	uint64_t x286 = 39LLU;
	volatile uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	volatile uint32_t t71 = 2864U;

	t71 = (x285^((x286<x287)<x288));

	if (t71 != 32294U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 933941U;
	volatile uint16_t x290 = 0U;
	int64_t x291 = INT64_MIN;
	uint32_t t72 = 5541953U;

	t72 = (x289^((x290<x291)<x292));

	if (t72 != 933941U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 9U;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;

	t73 = (x293^((x294<x295)<x296));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 102U;
	static volatile uint8_t x298 = 14U;
	volatile int8_t x300 = INT8_MIN;
	uint32_t t74 = 486U;

	t74 = (x297^((x298<x299)<x300));

	if (t74 != 102U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = 1029609245397992LLU;
	int64_t x303 = -1LL;
	volatile uint32_t x304 = 42241U;
	volatile int32_t t75 = -10684;

	t75 = (x301^((x302<x303)<x304));

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 1U;
	uint16_t x306 = UINT16_MAX;
	uint64_t x308 = 1127595LLU;

	t76 = (x305^((x306<x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MAX;
	volatile int32_t t77 = 40826;

	t77 = (x309^((x310<x311)<x312));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 2714U;
	static uint16_t x314 = UINT16_MAX;
	uint8_t x315 = UINT8_MAX;
	uint16_t x316 = 9U;
	int32_t t78 = 156;

	t78 = (x313^((x314<x315)<x316));

	if (t78 != 2715) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	volatile uint16_t x319 = 0U;
	volatile int32_t t79 = 3506660;

	t79 = (x317^((x318<x319)<x320));

	if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	uint16_t x322 = 687U;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -457;

	t80 = (x321^((x322<x323)<x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = -46;
	uint8_t x327 = 2U;
	volatile int32_t t81 = -530296412;

	t81 = (x325^((x326<x327)<x328));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x331 = 11219U;

	t82 = (x329^((x330<x331)<x332));

	if (t82 != -50) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 125U;
	uint16_t x334 = 12U;
	volatile uint16_t x335 = UINT16_MAX;
	volatile int32_t t83 = 24766;

	t83 = (x333^((x334<x335)<x336));

	if (t83 != 124) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 7U;
	int32_t x339 = 170;
	uint32_t x340 = UINT32_MAX;
	static int32_t t84 = -12;

	t84 = (x337^((x338<x339)<x340));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = -1082;

	t85 = (x341^((x342<x343)<x344));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 1U;
	static uint16_t x347 = UINT16_MAX;
	int32_t t86 = 679058766;

	t86 = (x345^((x346<x347)<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -122723;
	static int64_t x352 = -1LL;
	volatile int32_t t87 = 1611493;

	t87 = (x349^((x350<x351)<x352));

	if (t87 != -122723) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint64_t x354 = UINT64_MAX;
	uint64_t x356 = 10479753079935758LLU;
	volatile uint32_t t88 = 268702U;

	t88 = (x353^((x354<x355)<x356));

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 5U;
	int32_t x360 = INT32_MAX;
	int32_t t89 = -57922169;

	t89 = (x357^((x358<x359)<x360));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x362 = 0U;
	int64_t x363 = -122LL;
	int8_t x364 = INT8_MIN;
	int32_t t90 = -8023785;

	t90 = (x361^((x362<x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x365 = 1507LLU;
	int64_t x368 = -4837239889551886LL;
	uint64_t t91 = 21268LLU;

	t91 = (x365^((x366<x367)<x368));

	if (t91 != 1507LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -459425972;
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = 3808064LL;
	volatile int32_t t92 = 0;

	t92 = (x369^((x370<x371)<x372));

	if (t92 != -459425972) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -111444150;
	static int16_t x375 = -87;
	static int32_t t93 = 0;

	t93 = (x373^((x374<x375)<x376));

	if (t93 != -111444150) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -1LL;
	uint16_t x379 = UINT16_MAX;
	static volatile int32_t t94 = 0;

	t94 = (x377^((x378<x379)<x380));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 23U;
	uint16_t x383 = 1U;
	int32_t x384 = INT32_MIN;
	static int32_t t95 = 1583;

	t95 = (x381^((x382<x383)<x384));

	if (t95 != 23) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 0U;
	int64_t x386 = INT64_MAX;
	static uint32_t x387 = 1U;

	t96 = (x385^((x386<x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int16_t x390 = 148;
	uint16_t x391 = 2U;
	volatile int32_t t97 = -46626121;

	t97 = (x389^((x390<x391)<x392));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = 1475003LL;
	uint8_t x395 = 2U;
	int32_t x396 = -15;
	int32_t t98 = -1;

	t98 = (x393^((x394<x395)<x396));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = -1;
	int32_t x399 = -580;
	static uint32_t x400 = 1U;
	volatile int32_t t99 = -1;

	t99 = (x397^((x398<x399)<x400));

	if (t99 != 126) { NG(); } else { ; }
	
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

