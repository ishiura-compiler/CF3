#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
uint32_t x7 = 3686036U;
uint32_t x16 = 1203480582U;
int32_t t3 = -130125287;
static int32_t x18 = -130054201;
int32_t t5 = -336;
uint8_t x27 = UINT8_MAX;
int32_t x31 = -1;
int32_t x32 = INT32_MIN;
int64_t x36 = -6715524280084900LL;
int64_t x40 = 42437LL;
volatile int32_t t9 = 2892515;
static volatile uint32_t x41 = UINT32_MAX;
uint16_t x48 = UINT16_MAX;
volatile int32_t t11 = -16857;
static int32_t x50 = INT32_MAX;
int16_t x52 = 7120;
static uint16_t x57 = 1U;
uint64_t x58 = 107640317813316LLU;
static int8_t x59 = -1;
int32_t x62 = -1;
volatile int32_t t15 = -56879833;
int32_t x66 = INT32_MAX;
volatile int8_t x69 = INT8_MAX;
static int32_t x70 = 56962;
int8_t x75 = -1;
int64_t x80 = INT64_MIN;
volatile int32_t t19 = -89;
uint16_t x83 = UINT16_MAX;
volatile int32_t t23 = 61;
int32_t x97 = -1;
static volatile uint8_t x98 = 12U;
int64_t x101 = 227708752174053LL;
int8_t x104 = INT8_MIN;
int32_t t27 = -140;
int64_t x117 = -1LL;
static uint64_t x119 = UINT64_MAX;
static volatile int8_t x120 = INT8_MAX;
int32_t t29 = -91956936;
static int32_t x122 = 16282369;
int16_t x128 = 6938;
int8_t x130 = INT8_MIN;
uint16_t x131 = 111U;
static volatile int32_t x138 = INT32_MAX;
uint32_t x145 = 51856220U;
static volatile uint16_t x150 = 360U;
int64_t x151 = 61191284488596LL;
static uint32_t x153 = UINT32_MAX;
uint64_t x154 = 174LLU;
int16_t x155 = INT16_MAX;
volatile int32_t t38 = 132747;
volatile int32_t t40 = 235681;
int16_t x172 = -44;
static volatile int32_t t44 = -7;
int8_t x199 = 23;
int32_t x202 = -1;
volatile uint64_t x204 = UINT64_MAX;
volatile int32_t t51 = 131;
int64_t x211 = INT64_MAX;
int64_t x212 = INT64_MAX;
uint8_t x214 = UINT8_MAX;
uint8_t x222 = 0U;
int32_t x223 = 7508;
volatile uint64_t x224 = 37205559626437LLU;
static volatile int32_t t55 = -38838;
volatile uint64_t x225 = 214LLU;
volatile uint8_t x226 = UINT8_MAX;
uint64_t x243 = UINT64_MAX;
volatile int32_t x250 = -1;
volatile uint32_t x254 = UINT32_MAX;
volatile int32_t x259 = INT32_MIN;
uint16_t x260 = UINT16_MAX;
uint16_t x268 = 1547U;
int32_t t66 = 3262881;
int64_t x270 = INT64_MIN;
int32_t x279 = -1053103;
volatile int16_t x281 = -1;
int32_t x284 = INT32_MIN;
int16_t x288 = -1;
int32_t x292 = -302713;
static uint16_t x304 = 421U;
int32_t t75 = -2474566;
int32_t x308 = 14192691;
int32_t x313 = 103986383;
int64_t x315 = INT64_MAX;
int32_t t78 = 2036705;
uint16_t x318 = 2U;
volatile int32_t t79 = 91;
int16_t x329 = -1;
uint32_t x331 = UINT32_MAX;
volatile int32_t t84 = -7638;
uint16_t x343 = 2364U;
int32_t t85 = 226179;
int64_t x345 = -1LL;
volatile int32_t t89 = -80704883;
uint8_t x362 = 0U;
static int32_t t90 = 183417217;
int32_t x367 = INT32_MAX;
int32_t x369 = 3260;
uint8_t x370 = 1U;
int32_t x371 = -1;
static int32_t t92 = -1287;
volatile uint8_t x373 = 5U;
volatile int32_t x375 = INT32_MIN;
uint64_t x376 = 27086073LLU;
uint64_t x383 = 96326541352771LLU;
int32_t t95 = -254361427;
volatile int64_t x385 = 2062237LL;
int32_t x387 = -2192;
uint16_t x392 = 18015U;
int32_t x393 = INT32_MIN;
uint8_t x395 = 104U;
int32_t t99 = -181480887;


void f0(void) {
	static uint8_t x1 = 1U;
	int8_t x3 = 30;
	int32_t x4 = 1;
	volatile int32_t t0 = 3709891;

	t0 = ((x1<=x2)*(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint32_t x6 = 3U;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 34511;

	t1 = ((x5<=x6)*(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = 52;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = -417827679;

	t2 = ((x9<=x10)*(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MIN;
	static int32_t x15 = INT32_MIN;

	t3 = ((x13<=x14)*(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -39;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = 50149135874393346LLU;
	int32_t t4 = -3;

	t4 = ((x17<=x18)*(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MIN;
	static int16_t x23 = -1;
	uint32_t x24 = 1523U;

	t5 = ((x21<=x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	static int64_t x26 = -69767458LL;
	static int64_t x28 = -1LL;
	int32_t t6 = -109405;

	t6 = ((x25<=x26)*(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static uint16_t x30 = 1U;
	volatile int32_t t7 = -80166860;

	t7 = ((x29<=x30)*(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 199U;
	int16_t x34 = INT16_MIN;
	static int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -145717766;

	t8 = ((x33<=x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -43;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = 478317356U;

	t9 = ((x37<=x38)*(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 1159;

	t10 = ((x41<=x42)*(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -1LL;
	volatile int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MIN;

	t11 = ((x45<=x46)*(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 2181;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t t12 = -22;

	t12 = ((x49<=x50)*(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MAX;
	static uint32_t x56 = UINT32_MAX;
	static volatile int32_t t13 = 2;

	t13 = ((x53<=x54)*(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x60 = 38567210576LL;
	int32_t t14 = 118861;

	t14 = ((x57<=x58)*(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -7849;
	volatile int64_t x63 = INT64_MIN;
	int64_t x64 = -10LL;

	t15 = ((x61<=x62)*(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1U;
	int16_t x67 = 5;
	volatile int8_t x68 = 28;
	int32_t t16 = 4959665;

	t16 = ((x65<=x66)*(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x71 = 55U;
	int16_t x72 = -1;
	volatile int32_t t17 = -1631523;

	t17 = ((x69<=x70)*(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static int8_t x74 = INT8_MIN;
	int16_t x76 = -16236;
	int32_t t18 = 976;

	t18 = ((x73<=x74)*(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = INT64_MIN;
	volatile int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MIN;

	t19 = ((x77<=x78)*(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = INT8_MIN;
	int8_t x84 = -1;
	int32_t t20 = 27;

	t20 = ((x81<=x82)*(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 43572197871825LLU;
	uint32_t x86 = 3658U;
	static int64_t x87 = 89102362894567877LL;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = 262655519;

	t21 = ((x85<=x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint64_t x90 = UINT64_MAX;
	static uint8_t x91 = 18U;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 19729;

	t22 = ((x89<=x90)*(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 204U;
	int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	int8_t x96 = 1;

	t23 = ((x93<=x94)*(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x99 = -47901300LL;
	static volatile uint16_t x100 = 41U;
	volatile int32_t t24 = 354982;

	t24 = ((x97<=x98)*(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = -104;
	int64_t x103 = INT64_MAX;
	static volatile int32_t t25 = 2518112;

	t25 = ((x101<=x102)*(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	volatile uint32_t x106 = 6554929U;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MAX;
	int32_t t26 = -20723372;

	t26 = ((x105<=x106)*(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 7584U;
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = UINT16_MAX;

	t27 = ((x109<=x110)*(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	int32_t x115 = 3636181;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 74713;

	t28 = ((x113<=x114)*(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = 225;

	t29 = ((x117<=x118)*(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int64_t x123 = INT64_MAX;
	static uint16_t x124 = 15129U;
	static int32_t t30 = -171;

	t30 = ((x121<=x122)*(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	static volatile uint8_t x126 = 7U;
	volatile uint32_t x127 = UINT32_MAX;
	static volatile int32_t t31 = 99834686;

	t31 = ((x125<=x126)*(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 0;

	t32 = ((x129<=x130)*(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	uint32_t x134 = 725738291U;
	int8_t x135 = INT8_MIN;
	static volatile uint64_t x136 = UINT64_MAX;
	static volatile int32_t t33 = 20121;

	t33 = ((x133<=x134)*(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static int64_t x139 = -1LL;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -1633438;

	t34 = ((x137<=x138)*(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 5;
	volatile uint32_t x142 = UINT32_MAX;
	volatile int16_t x143 = 7;
	static volatile int16_t x144 = 1760;
	int32_t t35 = 21315742;

	t35 = ((x141<=x142)*(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	int8_t x147 = 1;
	uint64_t x148 = 106432760323777832LLU;
	int32_t t36 = -3680840;

	t36 = ((x145<=x146)*(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = INT64_MAX;
	static int16_t x152 = INT16_MIN;
	int32_t t37 = -15479722;

	t37 = ((x149<=x150)*(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x156 = INT32_MAX;

	t38 = ((x153<=x154)*(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 51;
	int64_t x158 = INT64_MAX;
	uint16_t x159 = 2721U;
	static volatile uint64_t x160 = 182840136LLU;
	volatile int32_t t39 = -12697393;

	t39 = ((x157<=x158)*(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = 725221U;
	int8_t x163 = 6;
	static int8_t x164 = INT8_MIN;

	t40 = ((x161<=x162)*(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	volatile int8_t x167 = INT8_MAX;
	int8_t x168 = -1;
	static int32_t t41 = -1487;

	t41 = ((x165<=x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = UINT16_MAX;
	int32_t t42 = 10;

	t42 = ((x169<=x170)*(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x174 = 7U;
	uint32_t x175 = 197950U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -3;

	t43 = ((x173<=x174)*(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 1U;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = UINT8_MAX;

	t44 = ((x177<=x178)*(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = UINT32_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	static uint16_t x183 = UINT16_MAX;
	int16_t x184 = 678;
	int32_t t45 = -29182350;

	t45 = ((x181<=x182)*(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 37U;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 24744324;

	t46 = ((x185<=x186)*(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -8260;
	static int8_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 2667436637299LLU;
	volatile int32_t t47 = 24937;

	t47 = ((x189<=x190)*(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 7311U;
	uint64_t x194 = 3660942LLU;
	uint32_t x195 = 199077U;
	uint64_t x196 = 71475303LLU;
	int32_t t48 = -29575;

	t48 = ((x193<=x194)*(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -7;
	int64_t x198 = -1LL;
	int32_t x200 = INT32_MIN;
	static int32_t t49 = -25373148;

	t49 = ((x197<=x198)*(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile uint32_t x203 = 1U;
	volatile int32_t t50 = -701144711;

	t50 = ((x201<=x202)*(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 5458007559923486793LLU;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 1U;

	t51 = ((x205<=x206)*(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	int32_t t52 = 194274;

	t52 = ((x209<=x210)*(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	volatile int8_t x216 = INT8_MAX;
	static volatile int32_t t53 = -160492969;

	t53 = ((x213<=x214)*(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 10;
	volatile int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = -60;
	int32_t t54 = -1990091;

	t54 = ((x217<=x218)*(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 69;

	t55 = ((x221<=x222)*(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x227 = -1;
	int16_t x228 = -1;
	static int32_t t56 = 104082;

	t56 = ((x225<=x226)*(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1026U;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 628U;
	int32_t x232 = -1;
	int32_t t57 = -5;

	t57 = ((x229<=x230)*(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 49398791U;
	volatile int8_t x234 = 14;
	static int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MAX;
	int32_t t58 = -73374;

	t58 = ((x233<=x234)*(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 1039712095414LLU;
	volatile uint64_t x238 = 969564037090405LLU;
	int32_t x239 = 223;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 459292956;

	t59 = ((x237<=x238)*(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 868926945LL;
	int32_t x242 = INT32_MIN;
	static int16_t x244 = -1983;
	int32_t t60 = 0;

	t60 = ((x241<=x242)*(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 208301127U;
	int64_t x246 = INT64_MIN;
	volatile int32_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -1;

	t61 = ((x245<=x246)*(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile int64_t x251 = -1LL;
	int8_t x252 = -1;
	volatile int32_t t62 = 207;

	t62 = ((x249<=x250)*(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 27;
	int8_t x255 = 2;
	int64_t x256 = INT64_MAX;
	int32_t t63 = -768;

	t63 = ((x253<=x254)*(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = 1755;
	volatile int32_t t64 = 10602;

	t64 = ((x257<=x258)*(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	static volatile int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MAX;
	int64_t x264 = -1LL;
	volatile int32_t t65 = 5833;

	t65 = ((x261<=x262)*(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;

	t66 = ((x265<=x266)*(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x269 = 28186U;
	static int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t67 = 6;

	t67 = ((x269<=x270)*(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 6714;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	static int16_t x276 = 353;
	int32_t t68 = -1;

	t68 = ((x273<=x274)*(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	static uint16_t x278 = UINT16_MAX;
	uint32_t x280 = 22417745U;
	int32_t t69 = 172103;

	t69 = ((x277<=x278)*(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x282 = INT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	static volatile int32_t t70 = 15759515;

	t70 = ((x281<=x282)*(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = 42;
	volatile int64_t x287 = INT64_MIN;
	int32_t t71 = -13;

	t71 = ((x285<=x286)*(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 990039LLU;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	volatile int32_t t72 = -78001;

	t72 = ((x289<=x290)*(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	uint32_t x294 = 26686U;
	uint16_t x295 = 2U;
	int32_t x296 = 8112524;
	static volatile int32_t t73 = 4642262;

	t73 = ((x293<=x294)*(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MAX;
	volatile uint8_t x299 = 28U;
	int32_t x300 = -1;
	volatile int32_t t74 = -10919943;

	t74 = ((x297<=x298)*(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static uint8_t x302 = UINT8_MAX;
	int64_t x303 = -1LL;

	t75 = ((x301<=x302)*(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int32_t x306 = 404;
	int32_t x307 = -3163;
	int32_t t76 = 792362;

	t76 = ((x305<=x306)*(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x309 = 254642756U;
	volatile uint32_t x310 = UINT32_MAX;
	static int64_t x311 = -1LL;
	int32_t x312 = -39507;
	volatile int32_t t77 = 485;

	t77 = ((x309<=x310)*(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = 7U;
	static int64_t x316 = -1LL;

	t78 = ((x313<=x314)*(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	static uint16_t x320 = UINT16_MAX;

	t79 = ((x317<=x318)*(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = UINT16_MAX;
	int16_t x322 = 16033;
	static volatile uint8_t x323 = UINT8_MAX;
	int8_t x324 = 7;
	static int32_t t80 = -35886415;

	t80 = ((x321<=x322)*(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	uint16_t x326 = 2355U;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -93;

	t81 = ((x325<=x326)*(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	volatile int64_t x332 = 901LL;
	int32_t t82 = 988662;

	t82 = ((x329<=x330)*(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 13100LL;
	int32_t x334 = 333;
	uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 50U;
	volatile int32_t t83 = 12;

	t83 = ((x333<=x334)*(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 366U;
	int16_t x338 = 8;
	uint64_t x339 = 1671675883937LLU;
	int64_t x340 = INT64_MIN;

	t84 = ((x337<=x338)*(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -24330727LL;
	int8_t x342 = INT8_MIN;
	int64_t x344 = INT64_MAX;

	t85 = ((x341<=x342)*(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x346 = INT8_MAX;
	volatile uint8_t x347 = 8U;
	uint8_t x348 = 68U;
	volatile int32_t t86 = -17409617;

	t86 = ((x345<=x346)*(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	uint16_t x352 = 68U;
	int32_t t87 = 7937440;

	t87 = ((x349<=x350)*(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	int64_t x354 = -1LL;
	volatile int64_t x355 = INT64_MAX;
	volatile int8_t x356 = 16;
	volatile int32_t t88 = 223563;

	t88 = ((x353<=x354)*(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = -1;
	volatile uint8_t x358 = 1U;
	uint8_t x359 = 9U;
	int16_t x360 = INT16_MIN;

	t89 = ((x357<=x358)*(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 10U;
	volatile int64_t x363 = INT64_MIN;
	static int16_t x364 = 398;

	t90 = ((x361<=x362)*(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MIN;
	uint32_t x368 = 6322589U;
	int32_t t91 = 416734242;

	t91 = ((x365<=x366)*(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x372 = -1;

	t92 = ((x369<=x370)*(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = 51;
	int32_t t93 = -629;

	t93 = ((x373<=x374)*(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MAX;
	volatile uint32_t x378 = 15757067U;
	volatile uint32_t x379 = UINT32_MAX;
	int64_t x380 = 0LL;
	static volatile int32_t t94 = -1;

	t94 = ((x377<=x378)*(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -57;
	uint8_t x382 = 13U;
	uint64_t x384 = 7744885LLU;

	t95 = ((x381<=x382)*(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x386 = 47U;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = 1;

	t96 = ((x385<=x386)*(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = 1LL;
	uint8_t x390 = UINT8_MAX;
	static int8_t x391 = -1;
	volatile int32_t t97 = -413008;

	t97 = ((x389<=x390)*(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = UINT16_MAX;
	int16_t x396 = 16306;
	static int32_t t98 = -8664;

	t98 = ((x393<=x394)*(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -371001783;
	uint8_t x398 = 8U;
	volatile int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MAX;

	t99 = ((x397<=x398)*(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

