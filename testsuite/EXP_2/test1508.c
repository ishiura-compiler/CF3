#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MAX;
int16_t x12 = INT16_MAX;
int64_t x14 = 20342514920LL;
uint32_t x17 = 5742U;
int8_t x20 = INT8_MIN;
volatile uint32_t t4 = 1576U;
int64_t t5 = -281315155170917820LL;
int32_t x27 = 11702380;
int64_t x40 = INT64_MAX;
uint32_t x41 = UINT32_MAX;
static uint16_t x42 = 15413U;
static int64_t x51 = -1LL;
int64_t x57 = INT64_MIN;
int16_t x61 = INT16_MAX;
int64_t x63 = INT64_MIN;
int64_t x67 = -33834272747LL;
uint8_t x69 = 5U;
int32_t x71 = INT32_MAX;
static int16_t x73 = INT16_MIN;
static int16_t x78 = INT16_MIN;
static uint16_t x88 = UINT16_MAX;
int64_t x90 = 0LL;
static uint8_t x91 = 14U;
int8_t x93 = INT8_MAX;
int8_t x100 = -1;
volatile int8_t x103 = -1;
int32_t x107 = 801092;
static uint64_t x109 = UINT64_MAX;
uint64_t x116 = UINT64_MAX;
static uint64_t t28 = 3761798863879262LLU;
static uint16_t x135 = 207U;
volatile uint64_t t33 = 29517LLU;
int32_t x137 = 7450;
uint64_t x143 = 1459LLU;
uint64_t t35 = 1597473178687912LLU;
uint32_t x150 = UINT32_MAX;
uint32_t x155 = 12U;
int8_t x156 = INT8_MIN;
volatile uint64_t x157 = 1461812755852LLU;
int64_t x159 = INT64_MIN;
int32_t x160 = -1;
uint64_t t39 = 1LLU;
int64_t x165 = INT64_MAX;
int32_t x170 = INT32_MAX;
volatile int32_t t42 = INT32_MIN;
volatile uint16_t x178 = 3U;
static volatile uint16_t x186 = UINT16_MAX;
int64_t x190 = 510168148LL;
uint64_t x192 = UINT64_MAX;
uint32_t x195 = 9964709U;
static int64_t t49 = -1148538728405704518LL;
int8_t x206 = INT8_MAX;
static int64_t x212 = INT64_MIN;
uint32_t t53 = 3131U;
volatile int32_t x217 = INT32_MIN;
int8_t x218 = INT8_MIN;
int32_t t54 = 229716687;
volatile uint8_t x222 = 15U;
static int64_t t55 = INT64_MAX;
uint16_t x226 = 0U;
static int32_t x231 = 4653695;
static uint16_t x234 = 530U;
int32_t t59 = 2;
uint32_t t60 = 4019U;
static volatile int32_t x248 = INT32_MIN;
int32_t t61 = -66084;
int64_t x250 = -1LL;
uint32_t x252 = 127267672U;
int16_t x256 = INT16_MIN;
static int32_t x262 = 1;
static int32_t t65 = -20081432;
uint64_t t66 = 3204LLU;
int32_t x283 = INT32_MAX;
volatile int32_t x288 = 8325776;
volatile int64_t t72 = -1226539905079369856LL;
int64_t t73 = -3LL;
volatile uint64_t x301 = 61649578LLU;
int64_t x302 = -1LL;
uint64_t x306 = UINT64_MAX;
uint64_t x307 = 25540LLU;
static int32_t x314 = INT32_MAX;
volatile int16_t x324 = 1;
static int16_t x326 = -56;
uint32_t x328 = UINT32_MAX;
int8_t x331 = INT8_MIN;
uint32_t t82 = 1039209U;
uint16_t x334 = 3187U;
volatile int64_t t83 = -15946706429230LL;
uint32_t x344 = UINT32_MAX;
static uint32_t t85 = 811825101U;
static int32_t x345 = INT32_MIN;
volatile uint16_t x349 = 272U;
int32_t t88 = INT32_MAX;
volatile uint32_t x360 = 4512U;
int64_t t89 = 0LL;
int16_t x363 = INT16_MAX;
int32_t x371 = -1;
int64_t x372 = INT64_MAX;
static int64_t t92 = -42048365LL;
uint32_t x375 = UINT32_MAX;
int16_t x376 = -1;
uint16_t x384 = 1388U;
int32_t t95 = -3782644;
int64_t x387 = INT64_MIN;
int16_t x388 = INT16_MIN;
static int16_t x389 = -1;
uint16_t x392 = 8171U;
volatile uint64_t x396 = 3781987424955LLU;
int64_t x400 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint32_t x2 = UINT32_MAX;
	volatile int8_t x4 = 0;
	int64_t t0 = -3646LL;

	t0 = ((x1|(x2<x3))^x4);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	uint32_t x6 = 8201U;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 1961242573LLU;

	t1 = ((x5|(x6<x7))^x8);

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = -16;
	int16_t x11 = INT16_MAX;
	uint64_t t2 = 111224629408LLU;

	t2 = ((x9|(x10<x11))^x12);

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = 7U;
	uint32_t t3 = 11678783U;

	t3 = ((x13|(x14<x15))^x16);

	if (t3 != 65528U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int32_t x19 = INT32_MIN;

	t4 = ((x17|(x18<x19))^x20);

	if (t4 != 4294961646U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -6530285LL;
	static int16_t x22 = -1;
	uint32_t x23 = 2U;
	int32_t x24 = -18;

	t5 = ((x21|(x22<x23))^x24);

	if (t5 != 6530301LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int8_t x26 = -1;
	int64_t x28 = 41371129295LL;
	volatile int64_t t6 = 26039124660972765LL;

	t6 = ((x25|(x26<x27))^x28);

	if (t6 != 41371129136LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 4853;
	static volatile uint16_t x30 = 10889U;
	int64_t x31 = 1647LL;
	uint64_t x32 = 2902926686795787LLU;
	uint64_t t7 = 35487425674957960LLU;

	t7 = ((x29|(x30<x31))^x32);

	if (t7 != 2902926686792446LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2929565U;
	uint64_t x34 = 9789LLU;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = 78U;

	t8 = ((x33|(x34<x35))^x36);

	if (t8 != 4292031389U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static uint8_t x38 = UINT8_MAX;
	uint16_t x39 = UINT16_MAX;
	volatile int64_t t9 = -326049LL;

	t9 = ((x37|(x38<x39))^x40);

	if (t9 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x43 = -10LL;
	static int8_t x44 = 2;
	uint32_t t10 = 22819U;

	t10 = ((x41|(x42<x43))^x44);

	if (t10 != 4294967293U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint8_t x46 = 5U;
	volatile int8_t x47 = 14;
	uint16_t x48 = 31906U;
	static volatile int32_t t11 = 13748273;

	t11 = ((x45|(x46<x47))^x48);

	if (t11 != -2147451741) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = -1;
	volatile int8_t x52 = INT8_MAX;
	int32_t t12 = -35025890;

	t12 = ((x49|(x50<x51))^x52);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	volatile uint16_t x55 = 479U;
	uint32_t x56 = 216U;
	volatile int64_t t13 = -1LL;

	t13 = ((x53|(x54<x55))^x56);

	if (t13 != -9223372036854775591LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 13U;
	int32_t x60 = -1;
	static volatile int64_t t14 = 36773LL;

	t14 = ((x57|(x58<x59))^x60);

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = 1023U;
	volatile int8_t x64 = 3;
	static volatile int32_t t15 = 73224587;

	t15 = ((x61|(x62<x63))^x64);

	if (t15 != 32764) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -17;
	uint32_t x66 = UINT32_MAX;
	static volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -93;

	t16 = ((x65|(x66<x67))^x68);

	if (t16 != -112) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MAX;
	volatile uint32_t x72 = 459U;
	volatile uint32_t t17 = 9U;

	t17 = ((x69|(x70<x71))^x72);

	if (t17 != 462U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x74 = INT32_MAX;
	int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 65045181;

	t18 = ((x73|(x74<x75))^x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = -38476432593LL;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	volatile int64_t t19 = 562355LL;

	t19 = ((x77|(x78<x79))^x80);

	if (t19 != -38476430128LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int8_t x82 = 3;
	int32_t x83 = -1243;
	uint8_t x84 = UINT8_MAX;
	static volatile uint64_t t20 = 1LLU;

	t20 = ((x81|(x82<x83))^x84);

	if (t20 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x86 = 0U;
	int16_t x87 = -1;
	volatile int64_t t21 = -4086153LL;

	t21 = ((x85|(x86<x87))^x88);

	if (t21 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 20LLU;
	uint8_t x92 = 3U;
	uint64_t t22 = 386367LLU;

	t22 = ((x89|(x90<x91))^x92);

	if (t22 != 22LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = UINT16_MAX;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	static volatile int64_t t23 = -660492LL;

	t23 = ((x93|(x94<x95))^x96);

	if (t23 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 16021;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	int32_t t24 = 0;

	t24 = ((x97|(x98<x99))^x100);

	if (t24 != -16022) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 0;
	static volatile int32_t x102 = -1;
	uint64_t x104 = 27444906139677328LLU;
	volatile uint64_t t25 = 8104LLU;

	t25 = ((x101|(x102<x103))^x104);

	if (t25 != 27444906139677328LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t26 = 1964;

	t26 = ((x105|(x106<x107))^x108);

	if (t26 != 2147483392) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = -1;
	int16_t x111 = INT16_MIN;
	volatile int64_t x112 = -1LL;
	volatile uint64_t t27 = 1LLU;

	t27 = ((x109|(x110<x111))^x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile int32_t x114 = -4193114;
	int16_t x115 = 1440;

	t28 = ((x113|(x114<x115))^x116);

	if (t28 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -8234;

	t29 = ((x117|(x118<x119))^x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 7954679653LLU;
	static volatile int16_t x122 = INT16_MIN;
	int64_t x123 = -113833951LL;
	volatile int16_t x124 = INT16_MIN;
	static uint64_t t30 = 6LLU;

	t30 = ((x121|(x122<x123))^x124);

	if (t30 != 18446744065754875749LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile uint8_t x126 = 0U;
	uint64_t x127 = 28931880451LLU;
	int32_t x128 = INT32_MIN;
	int32_t t31 = INT32_MAX;

	t31 = ((x125|(x126<x127))^x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = 310955682572453LL;
	volatile int8_t x130 = 1;
	int8_t x131 = INT8_MIN;
	static volatile uint16_t x132 = 3U;
	int64_t t32 = -25175998815790LL;

	t32 = ((x129|(x130<x131))^x132);

	if (t32 != 310955682572454LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 411812193488LLU;
	volatile int64_t x134 = INT64_MIN;
	volatile uint16_t x136 = UINT16_MAX;

	t33 = ((x133|(x134<x135))^x136);

	if (t33 != 411812207406LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 460357LLU;
	uint8_t x139 = 4U;
	int32_t x140 = -1;
	int32_t t34 = 1821;

	t34 = ((x137|(x138<x139))^x140);

	if (t34 != -7451) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -36;
	uint32_t x142 = 2134U;
	static uint64_t x144 = UINT64_MAX;

	t35 = ((x141|(x142<x143))^x144);

	if (t35 != 35LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -479628270272LL;
	int16_t x146 = 3;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = -8953870;
	static volatile int64_t t36 = -175296550317659227LL;

	t36 = ((x145|(x146<x147))^x148);

	if (t36 != 479637158579LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = 520221;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 34;

	t37 = ((x149|(x150<x151))^x152);

	if (t37 != -32513) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -52;
	int8_t x154 = -30;
	volatile int32_t t38 = 128;

	t38 = ((x153|(x154<x155))^x156);

	if (t38 != 76) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = INT16_MAX;

	t39 = ((x157|(x158<x159))^x160);

	if (t39 != 18446742611896795763LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 15U;
	static uint8_t x163 = 2U;
	volatile uint32_t x164 = 478337443U;
	uint32_t t40 = 3U;

	t40 = ((x161|(x162<x163))^x164);

	if (t40 != 3816642979U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 43U;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -1;
	int64_t t41 = INT64_MIN;

	t41 = ((x165|(x166<x167))^x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = -1;

	t42 = ((x169|(x170<x171))^x172);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	static int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t43 = INT64_MIN;

	t43 = ((x173|(x174<x175))^x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	uint64_t x179 = 31990LLU;
	int64_t x180 = 64429559LL;
	int64_t t44 = -455289609779861763LL;

	t44 = ((x177|(x178<x179))^x180);

	if (t44 != 64429448LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 1942804636612603LLU;
	static volatile int64_t x182 = INT64_MIN;
	static uint8_t x183 = 4U;
	static int64_t x184 = INT64_MIN;
	static volatile uint64_t t45 = 534749008608LLU;

	t45 = ((x181|(x182<x183))^x184);

	if (t45 != 9225314841491388411LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int32_t x187 = 12;
	static int32_t x188 = -118;
	int32_t t46 = -91293163;

	t46 = ((x185|(x186<x187))^x188);

	if (t46 != -2147483531) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 732U;
	uint32_t x191 = UINT32_MAX;
	static volatile uint64_t t47 = 240954LLU;

	t47 = ((x189|(x190<x191))^x192);

	if (t47 != 18446744073709550882LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = -1;
	volatile int64_t x196 = -3317261019970636248LL;
	volatile int64_t t48 = -3111130380439LL;

	t48 = ((x193|(x194<x195))^x196);

	if (t48 != -3317261019970636201LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = -4292522501LL;

	t49 = ((x197|(x198<x199))^x200);

	if (t49 != 9223372032562253307LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint32_t x202 = 0U;
	int64_t x203 = 1881670208LL;
	int16_t x204 = 1230;
	int64_t t50 = -37594298871781LL;

	t50 = ((x201|(x202<x203))^x204);

	if (t50 != -9223372036854774577LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -74;

	t51 = ((x205|(x206<x207))^x208);

	if (t51 != -2147418113) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	uint16_t x210 = 14476U;
	volatile int16_t x211 = INT16_MIN;
	volatile int64_t t52 = INT64_MAX;

	t52 = ((x209|(x210<x211))^x212);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = -1;
	volatile int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MIN;

	t53 = ((x213|(x214<x215))^x216);

	if (t53 != 127U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x219 = 63524;
	uint16_t x220 = UINT16_MAX;

	t54 = ((x217|(x218<x219))^x220);

	if (t54 != -2147418114) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -1LL;
	int16_t x223 = INT16_MIN;
	static int64_t x224 = INT64_MIN;

	t55 = ((x221|(x222<x223))^x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 5;
	uint16_t x227 = 3U;
	uint32_t x228 = UINT32_MAX;
	uint32_t t56 = 7111U;

	t56 = ((x225|(x226<x227))^x228);

	if (t56 != 4294967290U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int16_t x230 = -5;
	int16_t x232 = 104;
	uint64_t t57 = 95265628041087300LLU;

	t57 = ((x229|(x230<x231))^x232);

	if (t57 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = UINT32_MAX;
	int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	uint32_t t58 = 14335U;

	t58 = ((x233|(x234<x235))^x236);

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MIN;

	t59 = ((x237|(x238<x239))^x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 4571U;
	int32_t x242 = -1;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;

	t60 = ((x241|(x242<x243))^x244);

	if (t60 != 4294962724U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 25698U;
	volatile int8_t x246 = INT8_MIN;
	static int32_t x247 = -84013135;

	t61 = ((x245|(x246<x247))^x248);

	if (t61 != -2147457950) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 35357074324470470LLU;
	static uint16_t x251 = 13U;
	uint64_t t62 = 1418LLU;

	t62 = ((x249|(x250<x251))^x252);

	if (t62 != 35357074216831391LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -2366LL;
	int8_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	static int64_t t63 = 5155943711810497LL;

	t63 = ((x253|(x254<x255))^x256);

	if (t63 != 30402LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = 6;
	static uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = 27462019;

	t64 = ((x257|(x258<x259))^x260);

	if (t64 != -130) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -1;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;

	t65 = ((x261|(x262<x263))^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 118373U;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	volatile uint64_t x268 = UINT64_MAX;

	t66 = ((x265|(x266<x267))^x268);

	if (t66 != 18446744073709433242LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = 240924LL;
	uint64_t x270 = 4796101416643212LLU;
	static int8_t x271 = INT8_MIN;
	volatile int8_t x272 = -1;
	int64_t t67 = 0LL;

	t67 = ((x269|(x270<x271))^x272);

	if (t67 != -240926LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = -1LL;
	volatile int64_t x275 = -1LL;
	static int32_t x276 = INT32_MAX;
	static int32_t t68 = -248752;

	t68 = ((x273|(x274<x275))^x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 188;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MAX;
	static int64_t x280 = -823114557900988LL;
	volatile int64_t t69 = -884LL;

	t69 = ((x277|(x278<x279))^x280);

	if (t69 != -823114557900807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	static int16_t x282 = -1;
	int8_t x284 = -1;
	int32_t t70 = 725;

	t70 = ((x281|(x282<x283))^x284);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static uint16_t x286 = UINT16_MAX;
	int8_t x287 = -1;
	volatile int32_t t71 = -1;

	t71 = ((x285|(x286<x287))^x288);

	if (t71 != -8325872) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 10LL;
	volatile int32_t x290 = -1949;
	volatile int32_t x291 = 6295;
	int32_t x292 = INT32_MIN;

	t72 = ((x289|(x290<x291))^x292);

	if (t72 != -2147483637LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x293 = 380501914772774862LL;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 313777067215195883LLU;
	int16_t x296 = INT16_MIN;

	t73 = ((x293|(x294<x295))^x296);

	if (t73 != -380501914772791346LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 59598LLU;
	static volatile uint32_t x298 = 13195U;
	int16_t x299 = -1;
	int64_t x300 = INT64_MAX;
	volatile uint64_t t74 = 0LLU;

	t74 = ((x297|(x298<x299))^x300);

	if (t74 != 9223372036854716208LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 138337705U;
	volatile uint64_t t75 = 5LLU;

	t75 = ((x301|(x302<x303))^x304);

	if (t75 != 194146050LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static int16_t x308 = -1;
	volatile uint32_t t76 = 8U;

	t76 = ((x305|(x306<x307))^x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MAX;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = -1;
	volatile int64_t t77 = 94493911067719LL;

	t77 = ((x309|(x310<x311))^x312);

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	static uint16_t x315 = 316U;
	int32_t x316 = 1884;
	int64_t t78 = 57LL;

	t78 = ((x313|(x314<x315))^x316);

	if (t78 != 9223372036854773923LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile uint32_t x318 = UINT32_MAX;
	static uint64_t x319 = 259024198523056046LLU;
	volatile int32_t x320 = -1;
	volatile int64_t t79 = -128814LL;

	t79 = ((x317|(x318<x319))^x320);

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MIN;
	int32_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t80 = -4036704;

	t80 = ((x321|(x322<x323))^x324);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 2U;
	int8_t x327 = 5;
	static volatile uint32_t t81 = 118U;

	t81 = ((x325|(x326<x327))^x328);

	if (t81 != 4294967292U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 80U;
	static volatile int16_t x330 = 14448;
	int16_t x332 = -1;

	t82 = ((x329|(x330<x331))^x332);

	if (t82 != 4294967215U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 21U;
	int64_t x335 = 546056135270409726LL;
	int64_t x336 = -935781132189134LL;

	t83 = ((x333|(x334<x335))^x336);

	if (t83 != -935781132189145LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	uint8_t x338 = 0U;
	volatile uint64_t x339 = 236220669LLU;
	int8_t x340 = 12;
	volatile int32_t t84 = 725733;

	t84 = ((x337|(x338<x339))^x340);

	if (t84 != -13) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;

	t85 = ((x341|(x342<x343))^x344);

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -12;
	uint8_t x347 = UINT8_MAX;
	volatile int16_t x348 = -9;
	static volatile int32_t t86 = 338324446;

	t86 = ((x345|(x346<x347))^x348);

	if (t86 != 2147483638) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 1U;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = 8644;
	int32_t t87 = 20;

	t87 = ((x349|(x350<x351))^x352);

	if (t87 != 8404) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = INT16_MIN;
	int64_t x355 = 54797LL;
	uint16_t x356 = 0U;

	t88 = ((x353|(x354<x355))^x356);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -2381062986388975LL;
	int64_t x358 = -1248LL;
	volatile uint16_t x359 = 77U;

	t89 = ((x357|(x358<x359))^x360);

	if (t89 != -2381062986384463LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	int64_t x364 = -1879874042956606LL;
	volatile int64_t t90 = -5985905385LL;

	t90 = ((x361|(x362<x363))^x364);

	if (t90 != 1879874042956611LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 66U;
	int16_t x366 = 11333;
	volatile uint16_t x367 = UINT16_MAX;
	int16_t x368 = -4;
	int32_t t91 = 5966008;

	t91 = ((x365|(x366<x367))^x368);

	if (t91 != -65) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 804345;
	int16_t x370 = INT16_MIN;

	t92 = ((x369|(x370<x371))^x372);

	if (t92 != 9223372036853971462LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int16_t x374 = 4484;
	volatile uint32_t t93 = 2703U;

	t93 = ((x373|(x374<x375))^x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	uint16_t x378 = 12U;
	uint64_t x379 = 249386LLU;
	static volatile int16_t x380 = -1;
	int32_t t94 = 1246335;

	t94 = ((x377|(x378<x379))^x380);

	if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 3;
	int64_t x382 = -1LL;
	int64_t x383 = -2085971LL;

	t95 = ((x381|(x382<x383))^x384);

	if (t95 != 1391) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 10231161513160002LL;
	static int64_t x386 = 3LL;
	volatile int64_t t96 = -1LL;

	t96 = ((x385|(x386<x387))^x388);

	if (t96 != -10231161513169598LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile int32_t t97 = 11;

	t97 = ((x389|(x390<x391))^x392);

	if (t97 != -8172) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	static int64_t x394 = 961544716146170LL;
	volatile uint16_t x395 = UINT16_MAX;
	static uint64_t t98 = 33449568405666LLU;

	t98 = ((x393|(x394<x395))^x396);

	if (t98 != 18446740290112084667LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	static int64_t x398 = -46920LL;
	int32_t x399 = INT32_MIN;
	int64_t t99 = INT64_MAX;

	t99 = ((x397|(x398<x399))^x400);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

