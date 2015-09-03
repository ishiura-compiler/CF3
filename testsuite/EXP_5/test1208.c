#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -43;
uint16_t x2 = 12756U;
uint32_t x5 = UINT32_MAX;
uint64_t x7 = UINT64_MAX;
int64_t t1 = 365LL;
static int8_t x11 = 0;
int64_t t2 = -92895LL;
int32_t x22 = -1;
static int8_t x26 = INT8_MAX;
int64_t x28 = -1LL;
uint8_t x30 = UINT8_MAX;
static int32_t x33 = INT32_MIN;
int16_t x39 = -11;
int16_t x41 = INT16_MIN;
int32_t x43 = -157762299;
uint32_t x46 = UINT32_MAX;
int32_t x47 = -1;
int16_t x53 = -1;
int64_t x63 = INT64_MIN;
volatile int8_t x66 = INT8_MIN;
volatile int32_t t14 = -2232;
int32_t x69 = 17;
int16_t x71 = -1;
static volatile int8_t x72 = INT8_MIN;
volatile uint64_t t16 = UINT64_MAX;
uint64_t x77 = UINT64_MAX;
volatile int64_t x83 = INT64_MIN;
volatile int64_t t18 = 1370560LL;
static uint8_t x87 = 21U;
volatile uint32_t x93 = UINT32_MAX;
int64_t x100 = 68437682953LL;
int16_t x104 = -1;
static uint16_t x105 = UINT16_MAX;
int32_t x108 = -1;
volatile uint64_t t25 = 1322LLU;
uint64_t x115 = 476992LLU;
int32_t x116 = 62153247;
int16_t x121 = INT16_MIN;
uint16_t x125 = 1121U;
uint8_t x130 = 2U;
int32_t x131 = INT32_MIN;
static int8_t x132 = -10;
static volatile int64_t x133 = -1LL;
int32_t x134 = -1;
static int32_t t32 = 17;
int16_t x143 = -1;
uint64_t t34 = 829601004087LLU;
int16_t x149 = INT16_MIN;
int64_t x151 = INT64_MIN;
int32_t t38 = -427507823;
int64_t x167 = -372LL;
int64_t x174 = INT64_MIN;
uint16_t x184 = UINT16_MAX;
volatile uint16_t x188 = 15U;
volatile uint64_t x189 = 311LLU;
uint32_t x193 = 34U;
uint64_t x196 = 337353190293LLU;
int32_t t46 = -18733;
static int8_t x206 = 24;
int32_t x207 = 0;
static volatile uint64_t t48 = 1690201905LLU;
static volatile uint8_t x213 = UINT8_MAX;
uint16_t x215 = 680U;
uint16_t x224 = 1U;
volatile int32_t t51 = -112687;
uint16_t x229 = 14756U;
int8_t x234 = INT8_MIN;
int16_t x235 = -13;
uint32_t x241 = UINT32_MAX;
int32_t x249 = INT32_MAX;
uint32_t x250 = 1038U;
volatile uint32_t x251 = 56823497U;
int8_t x255 = -1;
uint32_t x269 = 12772857U;
uint32_t x271 = UINT32_MAX;
int64_t t62 = 973449585LL;
int16_t x280 = INT16_MIN;
int16_t x293 = -1;
uint8_t x322 = 39U;
uint8_t x332 = 34U;
int64_t x334 = -63969901LL;
uint64_t x336 = 5155079390368LLU;
int8_t x337 = -26;
static uint64_t x339 = 1LLU;
int64_t x342 = INT64_MIN;
volatile int32_t t79 = 1614408;
uint32_t x349 = 7186905U;
int32_t x351 = -1;
volatile uint64_t t80 = 1LLU;
volatile int16_t x360 = INT16_MIN;
int64_t x361 = -1LL;
volatile uint16_t x364 = 376U;
static int8_t x365 = -1;
int32_t x373 = INT32_MAX;
static int32_t x378 = INT32_MAX;
int16_t x379 = 889;
static uint8_t x389 = 44U;
volatile uint64_t x392 = 4358422747LLU;
volatile uint64_t t89 = 3337854LLU;
int16_t x399 = -31;
volatile int32_t x404 = -62;
static volatile int64_t t92 = -55128669LL;
int32_t x408 = -108318;
static int32_t x412 = -1;
volatile int32_t t94 = -109292;
static int64_t x418 = INT64_MIN;
uint64_t x426 = 47052874026LLU;


void f0(void) {
	int64_t x3 = INT64_MAX;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 192;

	t0 = (x1|((x2==x3)-x4));

	if (t0 != -43) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -2;
	int64_t x8 = -1LL;

	t1 = (x5|((x6==x7)-x8));

	if (t1 != 4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -20968066LL;
	int32_t x10 = -1;
	volatile int32_t x12 = -1;

	t2 = (x9|((x10==x11)-x12));

	if (t2 != -20968065LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x21 = 80U;
	volatile int16_t x23 = INT16_MAX;
	volatile int64_t x24 = 25932381LL;
	int64_t t3 = -5690694508LL;

	t3 = (x21|((x22==x23)-x24));

	if (t3 != -25932301LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 177U;
	int8_t x27 = -1;
	volatile int64_t t4 = -170782408493LL;

	t4 = (x25|((x26==x27)-x28));

	if (t4 != 177LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 193833250346LLU;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 43U;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x29|((x30==x31)-x32));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = 0;
	int32_t x35 = 1;
	static uint8_t x36 = UINT8_MAX;
	static int32_t t6 = -519944;

	t6 = (x33|((x34==x35)-x36));

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = -1360;
	int16_t x38 = -1;
	volatile uint8_t x40 = 1U;
	static volatile int32_t t7 = -2008;

	t7 = (x37|((x38==x39)-x40));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 51U;
	int8_t x44 = -62;
	int32_t t8 = -974894655;

	t8 = (x41|((x42==x43)-x44));

	if (t8 != -32706) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = INT32_MIN;
	int32_t x48 = 4504;
	volatile int32_t t9 = -375;

	t9 = (x45|((x46==x47)-x48));

	if (t9 != -4503) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 24U;
	static uint16_t x50 = 23056U;
	static volatile int8_t x51 = 35;
	int16_t x52 = 1184;
	int32_t t10 = -507;

	t10 = (x49|((x50==x51)-x52));

	if (t10 != -1160) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x54 = -880652312841301502LL;
	int64_t x55 = 11572LL;
	int64_t x56 = INT64_MAX;
	volatile int64_t t11 = 163773012LL;

	t11 = (x53|((x54==x55)-x56));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -30;
	static uint16_t x58 = 65U;
	volatile int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	static volatile int32_t t12 = -89427899;

	t12 = (x57|((x58==x59)-x60));

	if (t12 != -29) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 8U;
	int8_t x62 = -1;
	int8_t x64 = INT8_MAX;
	volatile int32_t t13 = -50961;

	t13 = (x61|((x62==x63)-x64));

	if (t13 != -119) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 32U;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 15U;

	t14 = (x65|((x66==x67)-x68));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x70 = 17LL;
	volatile int32_t t15 = 7;

	t15 = (x69|((x70==x71)-x72));

	if (t15 != 145) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 31943817659695922LLU;
	int16_t x74 = 3788;
	static int64_t x75 = -89273980LL;
	int8_t x76 = 1;

	t16 = (x73|((x74==x75)-x76));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x78 = -19965303;
	static int8_t x79 = -1;
	uint8_t x80 = 0U;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x77|((x78==x79)-x80));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = -5188LL;
	static int16_t x82 = 1;
	int8_t x84 = INT8_MIN;

	t18 = (x81|((x82==x83)-x84));

	if (t18 != -5188LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 0U;
	volatile int16_t x86 = INT16_MIN;
	static volatile int8_t x88 = 7;
	uint32_t t19 = 1599U;

	t19 = (x85|((x86==x87)-x88));

	if (t19 != 4294967289U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 98U;
	static int64_t x90 = INT64_MIN;
	volatile uint16_t x91 = 15U;
	static volatile int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 2350813;

	t20 = (x89|((x90==x91)-x92));

	if (t20 != 32866) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x94 = UINT64_MAX;
	volatile int16_t x95 = -1;
	static int16_t x96 = INT16_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x93|((x94==x95)-x96));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = 6157575177LLU;
	uint16_t x98 = 19U;
	int8_t x99 = INT8_MAX;
	volatile uint64_t t22 = 112707313673LLU;

	t22 = (x97|((x98==x99)-x100));

	if (t22 != 18446744011429377279LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	uint64_t x103 = 281154160940LLU;
	static volatile int32_t t23 = -18;

	t23 = (x101|((x102==x103)-x104));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x106 = UINT64_MAX;
	static volatile uint64_t x107 = UINT64_MAX;
	volatile int32_t t24 = -41855815;

	t24 = (x105|((x106==x107)-x108));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x111 = -6251;
	uint64_t x112 = 411LLU;

	t25 = (x109|((x110==x111)-x112));

	if (t25 != 18446744073709551205LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = -13540609092045085LL;
	int8_t x114 = INT8_MIN;
	volatile int64_t t26 = 1025428LL;

	t26 = (x113|((x114==x115)-x116));

	if (t26 != -45105181LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	int16_t x118 = 3787;
	volatile int16_t x119 = 47;
	uint64_t x120 = 90193866226953LLU;
	uint64_t t27 = 1587451824LLU;

	t27 = (x117|((x118==x119)-x120));

	if (t27 != 18446744073709519607LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MAX;
	int16_t x123 = -1;
	static uint8_t x124 = UINT8_MAX;
	int32_t t28 = 23328936;

	t28 = (x121|((x122==x123)-x124));

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x126 = 21647993U;
	uint64_t x127 = UINT64_MAX;
	volatile uint32_t x128 = 292U;
	uint32_t t29 = 590U;

	t29 = (x125|((x126==x127)-x128));

	if (t29 != 4294967037U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int32_t t30 = -104;

	t30 = (x129|((x130==x131)-x132));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x135 = INT8_MAX;
	int16_t x136 = 198;
	static volatile int64_t t31 = 112290LL;

	t31 = (x133|((x134==x135)-x136));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	static volatile int8_t x140 = INT8_MAX;

	t32 = (x137|((x138==x139)-x140));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 203131488812597872LL;
	uint64_t x142 = 2435394LLU;
	int8_t x144 = INT8_MAX;
	static int64_t t33 = -3825023LL;

	t33 = (x141|((x142==x143)-x144));

	if (t33 != -15LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 10655360LLU;
	static int32_t x146 = -3430777;
	volatile int32_t x147 = -536792414;
	int8_t x148 = 3;

	t34 = (x145|((x146==x147)-x148));

	if (t34 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t35 = 9;

	t35 = (x149|((x150==x151)-x152));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = 0;
	volatile int32_t x154 = -2614381;
	uint8_t x155 = UINT8_MAX;
	int64_t x156 = 8257745LL;
	volatile int64_t t36 = 179805681483339085LL;

	t36 = (x153|((x154==x155)-x156));

	if (t36 != -8257745LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = -1;
	uint32_t x159 = 1U;
	static int8_t x160 = 5;
	volatile int32_t t37 = 40;

	t37 = (x157|((x158==x159)-x160));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = -1LL;
	uint8_t x163 = 19U;
	int16_t x164 = 17;

	t38 = (x161|((x162==x163)-x164));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -1;
	int64_t x166 = 13652681322720472LL;
	volatile int32_t x168 = INT32_MAX;
	int32_t t39 = -90698;

	t39 = (x165|((x166==x167)-x168));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	uint16_t x176 = 1130U;
	volatile int32_t t40 = -12823;

	t40 = (x173|((x174==x175)-x176));

	if (t40 != -1130) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -561061229171285LL;
	static volatile int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MIN;
	volatile int8_t x180 = INT8_MIN;
	volatile int64_t t41 = 74LL;

	t41 = (x177|((x178==x179)-x180));

	if (t41 != -561061229171285LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	int8_t x183 = -1;
	int64_t t42 = 9LL;

	t42 = (x181|((x182==x183)-x184));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x185 = INT8_MAX;
	static volatile int32_t x186 = 40293415;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t43 = -220;

	t43 = (x185|((x186==x187)-x188));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = 3;
	volatile int16_t x191 = -1;
	volatile int8_t x192 = 0;
	static volatile uint64_t t44 = 1LLU;

	t44 = (x189|((x190==x191)-x192));

	if (t44 != 311LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x194 = 24U;
	uint64_t x195 = 818136176972LLU;
	volatile uint64_t t45 = 5LLU;

	t45 = (x193|((x194==x195)-x196));

	if (t45 != 18446743736356361323LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = -1;
	static int8_t x200 = INT8_MIN;

	t46 = (x197|((x198==x199)-x200));

	if (t46 != -2147483520) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 15U;
	int8_t x208 = -1;
	int32_t t47 = 200;

	t47 = (x205|((x206==x207)-x208));

	if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 1013918654280LLU;
	int32_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = -261;

	t48 = (x209|((x210==x211)-x212));

	if (t48 != 1013918654285LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = UINT32_MAX;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t49 = 631392343;

	t49 = (x213|((x214==x215)-x216));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 744525759U;
	int64_t x219 = INT64_MIN;
	static volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t50 = -211;

	t50 = (x217|((x218==x219)-x220));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x221 = UINT8_MAX;
	volatile uint8_t x222 = 35U;
	static int64_t x223 = INT64_MIN;

	t51 = (x221|((x222==x223)-x224));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x225 = 20416U;
	int32_t x226 = INT32_MAX;
	int32_t x227 = -1;
	static volatile int16_t x228 = INT16_MIN;
	volatile uint32_t t52 = 237174U;

	t52 = (x225|((x226==x227)-x228));

	if (t52 != 53184U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = -1555728726669882319LL;
	int32_t x231 = 5;
	int32_t x232 = 23;
	int32_t t53 = 840;

	t53 = (x229|((x230==x231)-x232));

	if (t53 != -19) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x233 = INT8_MAX;
	int64_t x236 = INT64_MAX;
	int64_t t54 = 127186458580LL;

	t54 = (x233|((x234==x235)-x236));

	if (t54 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MAX;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t55 = -117152697610092132LL;

	t55 = (x237|((x238==x239)-x240));

	if (t55 != -2147483646LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x242 = INT16_MAX;
	volatile int64_t x243 = INT64_MIN;
	static int8_t x244 = -1;
	uint32_t t56 = UINT32_MAX;

	t56 = (x241|((x242==x243)-x244));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x252 = -1;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x249|((x250==x251)-x252));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MAX;
	uint8_t x254 = 115U;
	static volatile uint16_t x256 = 79U;
	volatile int32_t t58 = -1085792;

	t58 = (x253|((x254==x255)-x256));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 3939901U;
	uint32_t t59 = 341U;

	t59 = (x261|((x262==x263)-x264));

	if (t59 != 4294959555U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = 483722U;
	int8_t x266 = -18;
	int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;
	uint32_t t60 = 1533562U;

	t60 = (x265|((x266==x267)-x268));

	if (t60 != 483722U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x270 = -1098;
	static int8_t x272 = -1;
	uint32_t t61 = 50909U;

	t61 = (x269|((x270==x271)-x272));

	if (t61 != 12772857U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -1;
	int64_t x276 = 1139026830LL;

	t62 = (x273|((x274==x275)-x276));

	if (t62 != -11150LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = 15;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	volatile int32_t t63 = 0;

	t63 = (x277|((x278==x279)-x280));

	if (t63 != 32783) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	static uint64_t x283 = 4637LLU;
	int64_t x284 = -10555248LL;
	volatile int64_t t64 = -3LL;

	t64 = (x281|((x282==x283)-x284));

	if (t64 != -28816LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x285 = 142277241U;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = 6;
	static volatile int32_t x288 = -1;
	uint32_t t65 = 3935264U;

	t65 = (x285|((x286==x287)-x288));

	if (t65 != 142277241U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 0U;
	int16_t x290 = -1;
	volatile int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t66 = 5292699LLU;

	t66 = (x289|((x290==x291)-x292));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x294 = 56;
	uint16_t x295 = 3873U;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x293|((x294==x295)-x296));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x297 = 83U;
	int8_t x298 = 17;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = 1;
	volatile int32_t t68 = -321896582;

	t68 = (x297|((x298==x299)-x300));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MAX;
	uint64_t x306 = UINT64_MAX;
	static int16_t x307 = INT16_MIN;
	uint16_t x308 = 179U;
	int32_t t69 = 80;

	t69 = (x305|((x306==x307)-x308));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x309 = -1;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = 0U;
	volatile int64_t x312 = INT64_MAX;
	volatile int64_t t70 = -48568LL;

	t70 = (x309|((x310==x311)-x312));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = 971U;
	int8_t x314 = 0;
	uint8_t x315 = 1U;
	uint16_t x316 = 3U;
	uint32_t t71 = UINT32_MAX;

	t71 = (x313|((x314==x315)-x316));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = -1322;
	static int32_t x319 = -1;
	int16_t x320 = 2376;
	int32_t t72 = 13;

	t72 = (x317|((x318==x319)-x320));

	if (t72 != -2305) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 0U;
	static int32_t x323 = INT32_MIN;
	uint64_t x324 = 104865326682982469LLU;
	uint64_t t73 = 117282170984LLU;

	t73 = (x321|((x322==x323)-x324));

	if (t73 != 18341878747026569147LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x325 = 678U;
	static volatile int32_t x326 = INT32_MAX;
	volatile int8_t x327 = 7;
	static int8_t x328 = -1;
	int32_t t74 = 431;

	t74 = (x325|((x326==x327)-x328));

	if (t74 != 679) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = 1;
	int32_t x330 = 934020;
	static uint64_t x331 = 40428178489LLU;
	static int32_t t75 = -1;

	t75 = (x329|((x330==x331)-x332));

	if (t75 != -33) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x333 = 4078207423256LLU;
	int32_t x335 = -32365154;
	volatile uint64_t t76 = 1724036LLU;

	t76 = (x333|((x334==x335)-x336));

	if (t76 != 18446739674544929656LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x338 = -1;
	int32_t x340 = INT32_MAX;
	volatile int32_t t77 = 5;

	t77 = (x337|((x338==x339)-x340));

	if (t77 != -25) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = UINT64_MAX;
	uint64_t x343 = 15LLU;
	static int32_t x344 = 0;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x341|((x342==x343)-x344));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = -1;
	volatile uint32_t x346 = 27661303U;
	int32_t x347 = INT32_MAX;
	static int16_t x348 = INT16_MIN;

	t79 = (x345|((x346==x347)-x348));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x350 = 0;
	static uint64_t x352 = 8271141LLU;

	t80 = (x349|((x350==x351)-x352));

	if (t80 != 18446744073708366811LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = INT16_MIN;
	static int16_t x359 = -3932;
	int32_t t81 = 102660;

	t81 = (x357|((x358==x359)-x360));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x362 = -1LL;
	int32_t x363 = -1;
	static int64_t t82 = 10434708680766319LL;

	t82 = (x361|((x362==x363)-x364));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x366 = UINT64_MAX;
	volatile int64_t x367 = -1LL;
	int8_t x368 = -1;
	volatile int32_t t83 = -960286713;

	t83 = (x365|((x366==x367)-x368));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = 25756986;
	volatile int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MAX;
	int32_t t84 = 2270;

	t84 = (x369|((x370==x371)-x372));

	if (t84 != -2121726661) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = -1;
	static int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x373|((x374==x375)-x376));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = -63549330;
	int16_t x380 = INT16_MIN;
	int32_t t86 = 66794483;

	t86 = (x377|((x378==x379)-x380));

	if (t86 != -63516562) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = UINT32_MAX;
	uint64_t x383 = 306470422LLU;
	static uint8_t x384 = 3U;
	volatile int64_t t87 = -129168LL;

	t87 = (x381|((x382==x383)-x384));

	if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 894941LLU;
	int32_t x388 = INT32_MAX;
	static int32_t t88 = -1523;

	t88 = (x385|((x386==x387)-x388));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x390 = 108U;
	int16_t x391 = INT16_MIN;

	t89 = (x389|((x390==x391)-x392));

	if (t89 != 18446744069351128877LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = 565;
	int32_t x394 = INT32_MAX;
	uint8_t x395 = 1U;
	uint8_t x396 = 4U;
	int32_t t90 = 7188436;

	t90 = (x393|((x394==x395)-x396));

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = -1;
	int16_t x398 = 140;
	int16_t x400 = 0;
	volatile int32_t t91 = 0;

	t91 = (x397|((x398==x399)-x400));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x401 = 1LL;
	int8_t x402 = INT8_MIN;
	volatile int64_t x403 = INT64_MIN;

	t92 = (x401|((x402==x403)-x404));

	if (t92 != 63LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = -1LL;
	int32_t x406 = INT32_MAX;
	static volatile int16_t x407 = INT16_MAX;
	static int64_t t93 = 6721LL;

	t93 = (x405|((x406==x407)-x408));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = -1;
	volatile int16_t x410 = INT16_MIN;
	volatile int32_t x411 = INT32_MAX;

	t94 = (x409|((x410==x411)-x412));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x413 = INT64_MIN;
	uint16_t x414 = 5381U;
	uint64_t x415 = 126881969635478199LLU;
	uint32_t x416 = UINT32_MAX;
	volatile int64_t t95 = 13LL;

	t95 = (x413|((x414==x415)-x416));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x417 = 55U;
	static int16_t x419 = -1;
	volatile int16_t x420 = -1;
	int32_t t96 = 3826;

	t96 = (x417|((x418==x419)-x420));

	if (t96 != 55) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x421 = 62U;
	static int32_t x422 = -1;
	static volatile int32_t x423 = INT32_MAX;
	volatile int64_t x424 = 5997977540153888LL;
	volatile int64_t t97 = -8160715981LL;

	t97 = (x421|((x422==x423)-x424));

	if (t97 != -5997977540153858LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x425 = UINT32_MAX;
	uint32_t x427 = 27104638U;
	static int32_t x428 = -24622788;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x425|((x426==x427)-x428));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	static int32_t x430 = INT32_MIN;
	int16_t x431 = 1;
	static uint8_t x432 = UINT8_MAX;
	volatile int32_t t99 = 156895571;

	t99 = (x429|((x430==x431)-x432));

	if (t99 != -1) { NG(); } else { ; }
	
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

