#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MAX;
int32_t t0 = 449;
static int32_t x5 = -6;
int8_t x8 = -1;
int64_t x17 = -1LL;
int32_t x21 = INT32_MIN;
uint16_t x26 = 559U;
uint64_t x30 = 4888426LLU;
int16_t x35 = INT16_MIN;
volatile int16_t x39 = INT16_MIN;
int32_t t10 = -246;
volatile uint64_t x45 = UINT64_MAX;
static int8_t x48 = -6;
static int8_t x50 = -23;
int32_t t12 = -12512;
int8_t x55 = INT8_MAX;
volatile int16_t x56 = 14265;
static int8_t x65 = INT8_MAX;
int32_t t16 = 276272268;
int8_t x73 = -1;
int16_t x77 = INT16_MAX;
uint16_t x84 = 11U;
uint16_t x88 = UINT16_MAX;
int32_t t21 = 1;
uint8_t x89 = UINT8_MAX;
volatile uint32_t x97 = UINT32_MAX;
uint8_t x99 = UINT8_MAX;
uint64_t x100 = 309624269145646LLU;
int32_t x101 = -1;
int32_t t25 = -310981405;
int64_t x106 = -25LL;
int16_t x107 = -1;
int64_t x108 = INT64_MIN;
int32_t t30 = -57697189;
int64_t x137 = INT64_MIN;
static uint32_t x138 = 41U;
volatile int32_t x140 = 62526;
int32_t t36 = 7998;
static int64_t x153 = -1LL;
int32_t x156 = INT32_MAX;
volatile int32_t t40 = -21177852;
int16_t x168 = INT16_MIN;
static volatile int32_t t42 = 2;
static int16_t x175 = -2;
static int16_t x179 = -8;
int8_t x189 = INT8_MIN;
int64_t x191 = INT64_MIN;
static int32_t t47 = -18760167;
int32_t x198 = INT32_MAX;
int32_t t50 = 1386;
int32_t x207 = INT32_MAX;
volatile int32_t x212 = INT32_MIN;
int32_t x215 = INT32_MIN;
uint16_t x221 = 233U;
static uint16_t x224 = 25U;
int64_t x227 = 29LL;
int32_t x242 = 1;
volatile int32_t t60 = 24369;
int8_t x246 = INT8_MIN;
uint16_t x248 = UINT16_MAX;
int32_t t64 = 825262871;
static int64_t x270 = -1215LL;
volatile int32_t t68 = 130113;
int32_t x278 = -2465055;
volatile int32_t t69 = -879;
int16_t x281 = 0;
int32_t x282 = -1;
volatile int32_t t71 = 243;
volatile int8_t x296 = -1;
volatile int32_t t73 = -110920407;
int16_t x297 = 407;
volatile int32_t x299 = INT32_MIN;
volatile int64_t x300 = 2433LL;
int64_t x321 = 116220293LL;
int32_t x324 = INT32_MAX;
volatile int32_t t80 = -1;
int64_t x335 = INT64_MIN;
int16_t x336 = -1;
volatile int16_t x338 = INT16_MAX;
static volatile int16_t x343 = 3;
int64_t x347 = -505513LL;
uint16_t x348 = 709U;
uint64_t x355 = UINT64_MAX;
int32_t x362 = -1;
int32_t t90 = 22710908;
static uint32_t x366 = 28U;
int16_t x368 = -1;
uint32_t x371 = 74927U;
int32_t t92 = 8;
uint16_t x381 = 7486U;
static int32_t t95 = -85;
volatile int64_t x385 = -209016099210LL;
int16_t x390 = -46;
int32_t x393 = INT32_MAX;
int64_t x398 = 1696957167512480LL;


void f0(void) {
	static volatile int32_t x1 = INT32_MIN;
	static int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;

	t0 = ((x1==x2)&(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = 0;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = 14015;

	t1 = ((x5==x6)&(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MAX;
	int16_t x11 = 2778;
	int64_t x12 = -599LL;
	volatile int32_t t2 = -1847;

	t2 = ((x9==x10)&(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 25U;
	int8_t x15 = -1;
	uint32_t x16 = 1178352U;
	static volatile int32_t t3 = 423;

	t3 = ((x13==x14)&(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 31U;
	int32_t t4 = 40356;

	t4 = ((x17==x18)&(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 354LLU;
	int32_t x23 = INT32_MAX;
	uint16_t x24 = 1U;
	volatile int32_t t5 = -2472871;

	t5 = ((x21==x22)&(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -246437463;
	uint32_t x27 = 142624U;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 1339648;

	t6 = ((x25==x26)&(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int8_t x31 = 1;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -6522726;

	t7 = ((x29==x30)&(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	uint64_t x34 = 1LLU;
	uint64_t x36 = 2506944975266401LLU;
	static volatile int32_t t8 = -2978917;

	t8 = ((x33==x34)&(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = 9905;
	static volatile uint16_t x38 = 40U;
	int64_t x40 = 11565277658902LL;
	volatile int32_t t9 = -226104026;

	t9 = ((x37==x38)&(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -11;
	int16_t x42 = -6579;
	int64_t x43 = -414738683831067865LL;
	uint16_t x44 = 21U;

	t10 = ((x41==x42)&(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	static int64_t x47 = -9516904LL;
	int32_t t11 = 49088;

	t11 = ((x45==x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int64_t x51 = INT64_MIN;
	uint32_t x52 = UINT32_MAX;

	t12 = ((x49==x50)&(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = INT8_MAX;
	volatile int32_t t13 = -14909210;

	t13 = ((x53==x54)&(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	uint8_t x58 = 52U;
	volatile uint8_t x59 = 19U;
	int64_t x60 = -1LL;
	volatile int32_t t14 = -4123737;

	t14 = ((x57==x58)&(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile uint16_t x62 = UINT16_MAX;
	static volatile int64_t x63 = -214LL;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 56;

	t15 = ((x61==x62)&(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = 328584U;
	uint16_t x68 = UINT16_MAX;

	t16 = ((x65==x66)&(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	uint32_t x70 = 122184U;
	volatile int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 6178141;

	t17 = ((x69==x70)&(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 4U;
	static uint16_t x75 = UINT16_MAX;
	static uint16_t x76 = 62U;
	static volatile int32_t t18 = 490877;

	t18 = ((x73==x74)&(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	static int8_t x80 = 16;
	volatile int32_t t19 = 7747011;

	t19 = ((x77==x78)&(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static volatile int16_t x82 = INT16_MIN;
	int8_t x83 = -21;
	static int32_t t20 = 25292739;

	t20 = ((x81==x82)&(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 12452;
	int32_t x86 = 3660649;
	uint64_t x87 = UINT64_MAX;

	t21 = ((x85==x86)&(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x90 = 38LLU;
	int16_t x91 = 1;
	uint32_t x92 = 112U;
	static volatile int32_t t22 = -904;

	t22 = ((x89==x90)&(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -5;
	volatile int64_t x94 = INT64_MAX;
	static uint8_t x95 = UINT8_MAX;
	static uint16_t x96 = 776U;
	volatile int32_t t23 = -1069577;

	t23 = ((x93==x94)&(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = 61;
	static volatile int32_t t24 = -13470038;

	t24 = ((x97==x98)&(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MIN;
	static volatile int64_t x103 = -1LL;
	volatile int32_t x104 = INT32_MAX;

	t25 = ((x101==x102)&(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t t26 = 24;

	t26 = ((x105==x106)&(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -56;
	static int32_t x110 = INT32_MAX;
	int64_t x111 = -7849083LL;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 15692463;

	t27 = ((x109==x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = -418;
	int64_t x115 = -34820449052319LL;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -3;

	t28 = ((x113==x114)&(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 80;
	static int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 101;

	t29 = ((x117==x118)&(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 20LLU;
	uint64_t x122 = UINT64_MAX;
	static int16_t x123 = INT16_MIN;
	volatile int64_t x124 = INT64_MIN;

	t30 = ((x121==x122)&(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	uint16_t x126 = 1977U;
	int32_t x127 = INT32_MAX;
	uint32_t x128 = 1653296U;
	static volatile int32_t t31 = 4;

	t31 = ((x125==x126)&(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 20;
	int32_t x130 = INT32_MAX;
	int32_t x131 = -387109;
	static uint32_t x132 = 1381135377U;
	static int32_t t32 = 4;

	t32 = ((x129==x130)&(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 6775086191965552LLU;
	uint32_t x134 = UINT32_MAX;
	static uint64_t x135 = 70LLU;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 0;

	t33 = ((x133==x134)&(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x139 = -1;
	volatile int32_t t34 = 52;

	t34 = ((x137==x138)&(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 1216454863414406LLU;
	static int64_t x143 = -1LL;
	uint64_t x144 = 278795994296963LLU;
	static volatile int32_t t35 = 6338;

	t35 = ((x141==x142)&(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 17086422609LL;
	static int64_t x146 = INT64_MIN;
	volatile uint8_t x147 = 1U;
	int32_t x148 = INT32_MAX;

	t36 = ((x145==x146)&(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1826533;
	static int64_t x152 = -1485000021309795114LL;
	volatile int32_t t37 = 50603232;

	t37 = ((x149==x150)&(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x154 = -1LL;
	int64_t x155 = -408856LL;
	volatile int32_t t38 = -91;

	t38 = ((x153==x154)&(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = -731;
	static volatile uint8_t x159 = 3U;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = -501;

	t39 = ((x157==x158)&(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 12U;
	static int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	uint16_t x164 = UINT16_MAX;

	t40 = ((x161==x162)&(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static int8_t x166 = -1;
	volatile int32_t x167 = INT32_MAX;
	static volatile int32_t t41 = -146643;

	t41 = ((x165==x166)&(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 339;
	volatile uint8_t x170 = UINT8_MAX;
	int32_t x171 = 50565;
	int32_t x172 = 140153;

	t42 = ((x169==x170)&(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 1;
	uint8_t x174 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = -98;

	t43 = ((x173==x174)&(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 5U;
	static int16_t x178 = INT16_MAX;
	static uint16_t x180 = 0U;
	int32_t t44 = 14;

	t44 = ((x177==x178)&(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	volatile int32_t x182 = -120;
	uint64_t x183 = 56921886490363LLU;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 492;

	t45 = ((x181==x182)&(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 14505710;
	uint8_t x186 = 44U;
	int16_t x187 = 7;
	int8_t x188 = 21;
	volatile int32_t t46 = 59;

	t46 = ((x185==x186)&(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MIN;
	static uint16_t x192 = UINT16_MAX;

	t47 = ((x189==x190)&(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 99510U;
	int64_t x194 = 132LL;
	int32_t x195 = INT32_MAX;
	int64_t x196 = INT64_MIN;
	static volatile int32_t t48 = 1;

	t48 = ((x193==x194)&(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 30063260;

	t49 = ((x197==x198)&(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 726061509622LLU;
	int8_t x202 = -1;
	static uint16_t x203 = 27U;
	int8_t x204 = -1;

	t50 = ((x201==x202)&(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 748256479LLU;
	uint32_t x206 = UINT32_MAX;
	int8_t x208 = INT8_MIN;
	static int32_t t51 = 6337;

	t51 = ((x205==x206)&(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	int8_t x211 = 0;
	static int32_t t52 = -6569;

	t52 = ((x209==x210)&(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x214 = -1;
	int64_t x216 = INT64_MAX;
	volatile int32_t t53 = -4411734;

	t53 = ((x213==x214)&(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 7762U;
	static uint16_t x218 = 1019U;
	volatile uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 2U;
	volatile int32_t t54 = -234884615;

	t54 = ((x217==x218)&(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x222 = 509U;
	static uint8_t x223 = 107U;
	int32_t t55 = -1;

	t55 = ((x221==x222)&(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = 28;
	volatile uint32_t x226 = UINT32_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = 1817179;

	t56 = ((x225==x226)&(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 2LL;
	int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	static int32_t x232 = INT32_MIN;
	int32_t t57 = 1;

	t57 = ((x229==x230)&(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	static uint16_t x235 = 1067U;
	int64_t x236 = INT64_MAX;
	volatile int32_t t58 = 1222;

	t58 = ((x233==x234)&(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static volatile int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = 100797533;

	t59 = ((x237==x238)&(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 154468;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;

	t60 = ((x241==x242)&(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t61 = 286;

	t61 = ((x245==x246)&(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static volatile uint32_t x250 = 3974007U;
	int8_t x251 = INT8_MIN;
	int16_t x252 = 340;
	int32_t t62 = -1553;

	t62 = ((x249==x250)&(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	volatile int8_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	static uint32_t x256 = 118779703U;
	static volatile int32_t t63 = 707045;

	t63 = ((x253==x254)&(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 22098362LLU;
	static volatile int64_t x258 = INT64_MAX;
	int16_t x259 = INT16_MAX;
	volatile int8_t x260 = INT8_MAX;

	t64 = ((x257==x258)&(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint8_t x262 = UINT8_MAX;
	int32_t x263 = -8;
	int64_t x264 = 6LL;
	int32_t t65 = -201;

	t65 = ((x261==x262)&(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -411;
	uint64_t x266 = UINT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	volatile uint32_t x268 = 22616U;
	volatile int32_t t66 = -538219532;

	t66 = ((x265==x266)&(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -94;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MAX;
	int32_t t67 = -45897;

	t67 = ((x269==x270)&(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	int8_t x276 = -51;

	t68 = ((x273==x274)&(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 29830U;
	static uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MAX;

	t69 = ((x277==x278)&(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x283 = INT8_MAX;
	volatile uint32_t x284 = UINT32_MAX;
	int32_t t70 = 1;

	t70 = ((x281==x282)&(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	static int32_t x286 = -7842;
	uint8_t x287 = UINT8_MAX;
	uint16_t x288 = 6U;

	t71 = ((x285==x286)&(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 140;
	volatile int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MAX;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 404103612;

	t72 = ((x289==x290)&(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;

	t73 = ((x293==x294)&(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 3690303704233704LLU;
	volatile int32_t t74 = -77589323;

	t74 = ((x297==x298)&(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MAX;
	volatile int8_t x302 = INT8_MIN;
	uint32_t x303 = 358U;
	int16_t x304 = -1;
	volatile int32_t t75 = 62236;

	t75 = ((x301==x302)&(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = -2;
	int8_t x307 = 1;
	volatile uint8_t x308 = 2U;
	int32_t t76 = 1;

	t76 = ((x305==x306)&(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	int8_t x311 = 13;
	static uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = 0;

	t77 = ((x309==x310)&(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 13297;

	t78 = ((x313==x314)&(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = -3;
	int16_t x320 = INT16_MAX;
	int32_t t79 = -1;

	t79 = ((x317==x318)&(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x322 = INT32_MAX;
	static uint16_t x323 = 59U;

	t80 = ((x321==x322)&(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1783U;
	uint32_t x326 = 1U;
	uint16_t x327 = 109U;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = -1;

	t81 = ((x325==x326)&(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MAX;
	volatile uint64_t x331 = 6056LLU;
	static int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 345;

	t82 = ((x329==x330)&(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = -1;
	int32_t t83 = -251852741;

	t83 = ((x333==x334)&(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	static int8_t x339 = -7;
	uint64_t x340 = UINT64_MAX;
	int32_t t84 = 29430;

	t84 = ((x337==x338)&(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 2513U;
	volatile int16_t x342 = 1855;
	int16_t x344 = INT16_MIN;
	int32_t t85 = -25;

	t85 = ((x341==x342)&(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = 54;
	int16_t x346 = 498;
	static int32_t t86 = -54693132;

	t86 = ((x345==x346)&(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int16_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	volatile uint64_t x352 = 132359657LLU;
	volatile int32_t t87 = -134;

	t87 = ((x349==x350)&(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int64_t x356 = -1LL;
	int32_t t88 = -41018;

	t88 = ((x353==x354)&(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -531606910;
	static uint64_t x358 = 3531059LLU;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -677681;

	t89 = ((x357==x358)&(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	int8_t x363 = INT8_MAX;
	uint32_t x364 = UINT32_MAX;

	t90 = ((x361==x362)&(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t t91 = -1985;

	t91 = ((x365==x366)&(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int16_t x370 = -1;
	int32_t x372 = -198711;

	t92 = ((x369==x370)&(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int16_t x374 = -1;
	int64_t x375 = -1LL;
	int32_t x376 = -93;
	int32_t t93 = -92556305;

	t93 = ((x373==x374)&(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MAX;
	volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = -65930580;

	t94 = ((x377==x378)&(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = 30LL;

	t95 = ((x381==x382)&(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x386 = 2U;
	static volatile int8_t x387 = 21;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = 2;

	t96 = ((x385==x386)&(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 644LLU;
	int8_t x391 = -13;
	int64_t x392 = INT64_MIN;
	int32_t t97 = 37954987;

	t97 = ((x389==x390)&(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x394 = INT16_MAX;
	static uint32_t x395 = UINT32_MAX;
	static uint8_t x396 = 0U;
	int32_t t98 = -188515;

	t98 = ((x393==x394)&(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	static volatile int32_t t99 = -35;

	t99 = ((x397==x398)&(x399==x400));

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

