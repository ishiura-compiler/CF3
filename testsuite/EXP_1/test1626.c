#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 18498536551240930LLU;
int32_t t3 = 76;
int32_t x19 = -1;
static uint16_t x25 = 3546U;
int8_t x28 = INT8_MAX;
int8_t x29 = INT8_MAX;
int16_t x33 = -1;
int16_t x37 = INT16_MAX;
uint32_t x38 = UINT32_MAX;
volatile int32_t x39 = INT32_MAX;
int64_t x51 = INT64_MIN;
static int64_t x52 = 147424898200110664LL;
int16_t x60 = -1;
uint64_t x64 = UINT64_MAX;
int32_t x66 = INT32_MAX;
volatile uint32_t t17 = 2952469U;
uint32_t x87 = 121U;
int16_t x93 = 30;
static int8_t x96 = INT8_MAX;
static int16_t x101 = INT16_MIN;
int8_t x105 = INT8_MIN;
volatile int64_t x110 = 65065383110LL;
int8_t x112 = INT8_MAX;
int8_t x130 = -1;
volatile int8_t x131 = 3;
int64_t x136 = -257954560LL;
int32_t x144 = 3;
uint32_t x146 = 229U;
static int8_t x149 = INT8_MAX;
uint32_t x154 = 18350U;
volatile int64_t x155 = -38843LL;
uint16_t x156 = UINT16_MAX;
uint8_t x157 = 14U;
static volatile uint32_t t37 = 3U;
int8_t x165 = -1;
int32_t t40 = -628;
int8_t x174 = INT8_MIN;
uint16_t x181 = 841U;
uint64_t t46 = UINT64_MAX;
int32_t x197 = -62;
volatile int32_t x204 = -20459418;
static int32_t t49 = 596;
static volatile int64_t x215 = INT64_MAX;
uint64_t t50 = 114967131LLU;
static uint64_t x218 = 2181869634983916LLU;
static uint8_t x234 = 6U;
volatile int16_t x236 = INT16_MAX;
volatile int32_t t55 = -71868376;
volatile uint32_t x239 = UINT32_MAX;
volatile int32_t t57 = -1;
uint16_t x252 = 564U;
int64_t x258 = INT64_MAX;
int16_t x263 = -7;
int64_t x266 = -1LL;
volatile uint32_t t62 = 14559760U;
volatile uint16_t x269 = 0U;
uint32_t t63 = 1981U;
int32_t t64 = -5511;
uint16_t x279 = 6U;
uint16_t x280 = UINT16_MAX;
int16_t x281 = -1;
int16_t x283 = INT16_MIN;
volatile int64_t t66 = 5466514LL;
int64_t x289 = -334384374LL;
volatile uint64_t x291 = 143LLU;
static int32_t x301 = INT32_MIN;
volatile int64_t t71 = -717908575LL;
int8_t x308 = INT8_MIN;
int8_t x311 = -1;
volatile uint32_t t73 = 2264U;
volatile uint8_t x313 = 1U;
uint64_t x317 = UINT64_MAX;
static uint16_t x332 = 516U;
int64_t x334 = INT64_MIN;
uint16_t x357 = 1U;
int32_t x362 = 9915701;
volatile uint64_t t86 = 12LLU;
int16_t x366 = -17;
static volatile int32_t t87 = 27773541;
uint64_t x374 = UINT64_MAX;
volatile int32_t t91 = 618279;
volatile int8_t x386 = INT8_MIN;
int16_t x388 = -1;
volatile int32_t t92 = 249671467;
static uint32_t x389 = 366141629U;
static int64_t x393 = 2875LL;
int32_t t95 = 1617609;
int64_t t96 = INT64_MAX;
int8_t x405 = INT8_MIN;
int8_t x408 = INT8_MIN;
volatile uint64_t t99 = UINT64_MAX;


void f0(void) {
	int8_t x1 = 8;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	uint64_t x4 = 66522578LLU;

	t0 = (((x1<=x2)<x3)+x4);

	if (t0 != 66522578LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = -130029;
	uint16_t x8 = 5U;
	volatile int32_t t1 = 4628119;

	t1 = (((x5<=x6)<x7)+x8);

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int8_t x10 = INT8_MIN;
	static volatile int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = (((x9<=x10)<x11)+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = 0LL;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;

	t3 = (((x13<=x14)<x15)+x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 240165U;
	int16_t x18 = INT16_MIN;
	int8_t x20 = -1;
	static int32_t t4 = -65;

	t4 = (((x17<=x18)<x19)+x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 1;

	t5 = (((x21<=x22)<x23)+x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = 3240;
	uint32_t x27 = 2605089U;
	int32_t t6 = 601220;

	t6 = (((x25<=x26)<x27)+x28);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	int8_t x31 = -7;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -29;

	t7 = (((x29<=x30)<x31)+x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = -1;
	int32_t x35 = INT32_MIN;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (((x33<=x34)<x35)+x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x40 = 328;
	volatile int32_t t9 = -406702;

	t9 = (((x37<=x38)<x39)+x40);

	if (t9 != 329) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 60U;
	int16_t x42 = INT16_MIN;
	volatile int64_t x43 = INT64_MAX;
	int16_t x44 = 22;
	int32_t t10 = -325953072;

	t10 = (((x41<=x42)<x43)+x44);

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x47 = 1200750604753745LLU;
	uint16_t x48 = 6835U;
	int32_t t11 = -13;

	t11 = (((x45<=x46)<x47)+x48);

	if (t11 != 6836) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int32_t x50 = -1;
	volatile int64_t t12 = 257847LL;

	t12 = (((x49<=x50)<x51)+x52);

	if (t12 != 147424898200110664LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = 9;
	volatile uint8_t x55 = 18U;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = 363775513;

	t13 = (((x53<=x54)<x55)+x56);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 3764967580188123388LLU;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	volatile int32_t t14 = 23910337;

	t14 = (((x57<=x58)<x59)+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile int32_t x62 = -1;
	int32_t x63 = 823853;
	uint64_t t15 = 16315LLU;

	t15 = (((x61<=x62)<x63)+x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = 13138;
	int32_t t16 = -1727106;

	t16 = (((x65<=x66)<x67)+x68);

	if (t16 != 13139) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 14569;
	int16_t x70 = -1;
	int32_t x71 = INT32_MIN;
	static uint32_t x72 = 3U;

	t17 = (((x69<=x70)<x71)+x72);

	if (t17 != 3U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = -1;
	int8_t x76 = 0;
	volatile int32_t t18 = 114;

	t18 = (((x73<=x74)<x75)+x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -17786074706582LL;
	volatile int8_t x86 = INT8_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t19 = -15004260;

	t19 = (((x85<=x86)<x87)+x88);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -3253;
	static uint64_t x90 = 9357345863037919LLU;
	int64_t x91 = 135626184LL;
	static uint32_t x92 = 32051523U;
	uint32_t t20 = 373980050U;

	t20 = (((x89<=x90)<x91)+x92);

	if (t20 != 32051524U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = -1;
	static uint64_t x95 = UINT64_MAX;
	int32_t t21 = 13;

	t21 = (((x93<=x94)<x95)+x96);

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	static volatile uint64_t x98 = 124337LLU;
	static volatile uint32_t x99 = 14066U;
	int8_t x100 = INT8_MIN;
	static int32_t t22 = 106;

	t22 = (((x97<=x98)<x99)+x100);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x102 = INT64_MAX;
	int32_t x103 = -4;
	int64_t x104 = -1LL;
	int64_t t23 = 473970LL;

	t23 = (((x101<=x102)<x103)+x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 3U;
	static volatile int32_t x108 = INT32_MIN;
	volatile int32_t t24 = 28;

	t24 = (((x105<=x106)<x107)+x108);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x109 = 6;
	static int32_t x111 = 8521;
	volatile int32_t t25 = 1;

	t25 = (((x109<=x110)<x111)+x112);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 0U;
	volatile uint16_t x114 = 2U;
	static int64_t x115 = 2971802LL;
	volatile uint64_t x116 = 11025360LLU;
	volatile uint64_t t26 = 18473753598132487LLU;

	t26 = (((x113<=x114)<x115)+x116);

	if (t26 != 11025361LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -1;
	uint32_t x118 = 39U;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 1184486178998874LLU;
	uint64_t t27 = 1024297950440426046LLU;

	t27 = (((x117<=x118)<x119)+x120);

	if (t27 != 1184486178998874LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = INT64_MIN;
	static uint32_t x122 = 1286U;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 4U;
	int32_t t28 = -5690716;

	t28 = (((x121<=x122)<x123)+x124);

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	int32_t x126 = 304374;
	int32_t x127 = INT32_MIN;
	int32_t x128 = 1;
	static int32_t t29 = -492784297;

	t29 = (((x125<=x126)<x127)+x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = -23695LL;
	static uint16_t x132 = 2U;
	static int32_t t30 = 9;

	t30 = (((x129<=x130)<x131)+x132);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 37744U;
	int32_t x134 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int64_t t31 = -162481657LL;

	t31 = (((x133<=x134)<x135)+x136);

	if (t31 != -257954560LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	volatile int8_t x138 = -1;
	static int8_t x139 = 49;
	uint32_t x140 = 426U;
	volatile uint32_t t32 = 993177988U;

	t32 = (((x137<=x138)<x139)+x140);

	if (t32 != 427U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	volatile int16_t x143 = -1;
	volatile int32_t t33 = 57837;

	t33 = (((x141<=x142)<x143)+x144);

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x147 = 2015038;
	int16_t x148 = -1;
	static volatile int32_t t34 = -9398;

	t34 = (((x145<=x146)<x147)+x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -1;
	volatile int16_t x151 = 568;
	int64_t x152 = 95586LL;
	volatile int64_t t35 = 95LL;

	t35 = (((x149<=x150)<x151)+x152);

	if (t35 != 95587LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = 39247;
	volatile int32_t t36 = 106;

	t36 = (((x153<=x154)<x155)+x156);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = 22LL;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 8354623U;

	t37 = (((x157<=x158)<x159)+x160);

	if (t37 != 8354623U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = -69548947LL;
	uint32_t x162 = 23828U;
	uint16_t x163 = 2U;
	int64_t x164 = INT64_MIN;
	volatile int64_t t38 = 28LL;

	t38 = (((x161<=x162)<x163)+x164);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x166 = 20584U;
	volatile uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;
	static int64_t t39 = 951727565LL;

	t39 = (((x165<=x166)<x167)+x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MAX;
	static uint64_t x170 = UINT64_MAX;
	static int64_t x171 = -6LL;
	static int8_t x172 = INT8_MIN;

	t40 = (((x169<=x170)<x171)+x172);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 28;
	int16_t x175 = -764;
	volatile uint32_t x176 = 0U;
	uint32_t t41 = 1U;

	t41 = (((x173<=x174)<x175)+x176);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = 15744286LL;
	int16_t x179 = 3;
	static int32_t x180 = -1;
	static volatile int32_t t42 = -2391;

	t42 = (((x177<=x178)<x179)+x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x182 = -1904;
	static volatile int32_t x183 = 1889105;
	uint16_t x184 = 724U;
	volatile int32_t t43 = -1612;

	t43 = (((x181<=x182)<x183)+x184);

	if (t43 != 725) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x185 = INT32_MIN;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (((x185<=x186)<x187)+x188);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 122U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

	t45 = (((x189<=x190)<x191)+x192);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 11U;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;

	t46 = (((x193<=x194)<x195)+x196);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = 1;
	int16_t x199 = INT16_MIN;
	int8_t x200 = 37;
	volatile int32_t t47 = -14;

	t47 = (((x197<=x198)<x199)+x200);

	if (t47 != 37) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = -3007030;
	volatile int16_t x202 = 0;
	int32_t x203 = INT32_MIN;
	volatile int32_t t48 = 1;

	t48 = (((x201<=x202)<x203)+x204);

	if (t48 != -20459418) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = INT64_MAX;
	static int32_t x210 = 8058;
	static volatile uint32_t x211 = 240973396U;
	static volatile int16_t x212 = 15;

	t49 = (((x209<=x210)<x211)+x212);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	uint64_t x216 = 303734085963528LLU;

	t50 = (((x213<=x214)<x215)+x216);

	if (t50 != 303734085963529LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x217 = 7931U;
	volatile int64_t x219 = INT64_MAX;
	static volatile uint64_t x220 = UINT64_MAX;
	uint64_t t51 = 83852534117872500LLU;

	t51 = (((x217<=x218)<x219)+x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (((x221<=x222)<x223)+x224);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 217574;
	volatile uint16_t x226 = 346U;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 120U;
	int32_t t53 = 3707;

	t53 = (((x225<=x226)<x227)+x228);

	if (t53 != 120) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = INT8_MAX;
	static uint32_t x230 = 3531U;
	uint16_t x231 = 59U;
	int32_t x232 = INT32_MIN;
	int32_t t54 = -36;

	t54 = (((x229<=x230)<x231)+x232);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 6402584475LLU;
	int8_t x235 = INT8_MIN;

	t55 = (((x233<=x234)<x235)+x236);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 54;
	static int8_t x238 = 1;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t56 = 1019U;

	t56 = (((x237<=x238)<x239)+x240);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 1484057U;
	int64_t x242 = INT64_MIN;
	static volatile uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;

	t57 = (((x241<=x242)<x243)+x244);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = 147501013248010019LL;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -1812596;
	static int64_t x248 = INT64_MAX;
	int64_t t58 = INT64_MAX;

	t58 = (((x245<=x246)<x247)+x248);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MIN;
	int32_t t59 = -130;

	t59 = (((x249<=x250)<x251)+x252);

	if (t59 != 564) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x257 = -46;
	volatile uint16_t x259 = 0U;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = (((x257<=x258)<x259)+x260);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 4U;
	volatile int64_t x262 = INT64_MIN;
	uint64_t x264 = 11616678LLU;
	static volatile uint64_t t61 = 1LLU;

	t61 = (((x261<=x262)<x263)+x264);

	if (t61 != 11616678LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x265 = 0;
	int32_t x267 = -16095549;
	uint32_t x268 = 1652521361U;

	t62 = (((x265<=x266)<x267)+x268);

	if (t62 != 1652521361U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x270 = 0LLU;
	static uint16_t x271 = 51U;
	uint32_t x272 = 255U;

	t63 = (((x269<=x270)<x271)+x272);

	if (t63 != 256U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 1LL;
	int16_t x274 = -2679;
	volatile int64_t x275 = INT64_MAX;
	int8_t x276 = 30;

	t64 = (((x273<=x274)<x275)+x276);

	if (t64 != 31) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	volatile int32_t t65 = 0;

	t65 = (((x277<=x278)<x279)+x280);

	if (t65 != 65536) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x282 = 1;
	int64_t x284 = -183507632220942818LL;

	t66 = (((x281<=x282)<x283)+x284);

	if (t66 != -183507632220942818LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -393731701LL;
	int16_t x286 = INT16_MIN;
	volatile int16_t x287 = -8;
	int8_t x288 = 0;
	int32_t t67 = 589216545;

	t67 = (((x285<=x286)<x287)+x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x290 = 15343U;
	static int32_t x292 = -1;
	int32_t t68 = -13978;

	t68 = (((x289<=x290)<x291)+x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t x296 = -1;
	int32_t t69 = 496807992;

	t69 = (((x293<=x294)<x295)+x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 8;
	uint8_t x298 = 86U;
	uint64_t x299 = 112460026724243564LLU;
	uint64_t x300 = UINT64_MAX;
	uint64_t t70 = 6684264LLU;

	t70 = (((x297<=x298)<x299)+x300);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 120U;
	volatile int64_t x304 = INT64_MIN;

	t71 = (((x301<=x302)<x303)+x304);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 886171U;
	volatile int16_t x306 = INT16_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int32_t t72 = 888466386;

	t72 = (((x305<=x306)<x307)+x308);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 15LL;
	int64_t x310 = -1LL;
	uint32_t x312 = 123032384U;

	t73 = (((x309<=x310)<x311)+x312);

	if (t73 != 123032384U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x314 = 0;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	static int64_t t74 = INT64_MIN;

	t74 = (((x313<=x314)<x315)+x316);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -46;
	uint16_t x320 = UINT16_MAX;
	int32_t t75 = 1;

	t75 = (((x317<=x318)<x319)+x320);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = INT8_MIN;
	static uint32_t x322 = 1U;
	volatile uint16_t x323 = UINT16_MAX;
	uint16_t x324 = 18483U;
	int32_t t76 = 2069043;

	t76 = (((x321<=x322)<x323)+x324);

	if (t76 != 18484) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = -1;
	int32_t x326 = -1;
	int8_t x327 = -1;
	int8_t x328 = -1;
	int32_t t77 = 0;

	t77 = (((x325<=x326)<x327)+x328);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MIN;
	volatile int32_t t78 = -23882;

	t78 = (((x329<=x330)<x331)+x332);

	if (t78 != 516) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 1U;
	int16_t x335 = -1;
	int64_t x336 = -17022078255928LL;
	static int64_t t79 = -382LL;

	t79 = (((x333<=x334)<x335)+x336);

	if (t79 != -17022078255928LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x337 = 114U;
	int32_t x338 = INT32_MAX;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	static uint32_t t80 = 38298U;

	t80 = (((x337<=x338)<x339)+x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 187LLU;
	uint8_t x342 = 1U;
	int32_t x343 = INT32_MAX;
	int64_t x344 = -13267792701252LL;
	volatile int64_t t81 = -159649271LL;

	t81 = (((x341<=x342)<x343)+x344);

	if (t81 != -13267792701251LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MAX;
	int32_t x347 = -227619;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t82 = INT32_MAX;

	t82 = (((x345<=x346)<x347)+x348);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile uint32_t x350 = UINT32_MAX;
	uint32_t x351 = UINT32_MAX;
	static uint16_t x352 = UINT16_MAX;
	volatile int32_t t83 = -2;

	t83 = (((x349<=x350)<x351)+x352);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MAX;
	uint8_t x354 = 0U;
	uint64_t x355 = 15972507505093LLU;
	uint8_t x356 = 1U;
	static int32_t t84 = 40279;

	t84 = (((x353<=x354)<x355)+x356);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = 230859443;
	int8_t x359 = -1;
	uint8_t x360 = 117U;
	static volatile int32_t t85 = -127088;

	t85 = (((x357<=x358)<x359)+x360);

	if (t85 != 117) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 0U;
	int64_t x363 = INT64_MIN;
	static uint64_t x364 = 6LLU;

	t86 = (((x361<=x362)<x363)+x364);

	if (t86 != 6LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x365 = -12;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 1U;

	t87 = (((x365<=x366)<x367)+x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = 21;
	static int32_t t88 = 13;

	t88 = (((x369<=x370)<x371)+x372);

	if (t88 != 22) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = 107;
	static int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = (((x373<=x374)<x375)+x376);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x377 = 6;
	uint64_t x378 = 2260081649979LLU;
	int16_t x379 = -258;
	volatile uint32_t x380 = 0U;
	volatile uint32_t t90 = 141U;

	t90 = (((x377<=x378)<x379)+x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MAX;
	volatile int16_t x382 = INT16_MIN;
	int8_t x383 = 0;
	volatile int8_t x384 = 37;

	t91 = (((x381<=x382)<x383)+x384);

	if (t91 != 37) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = 1;
	static int32_t x387 = -1;

	t92 = (((x385<=x386)<x387)+x388);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x390 = INT64_MIN;
	uint32_t x391 = 0U;
	int8_t x392 = INT8_MAX;
	volatile int32_t t93 = 10;

	t93 = (((x389<=x390)<x391)+x392);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x394 = 26U;
	static uint64_t x395 = 63614142477LLU;
	int8_t x396 = 39;
	int32_t t94 = -1;

	t94 = (((x393<=x394)<x395)+x396);

	if (t94 != 40) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = 53744U;
	volatile int16_t x400 = -1;

	t95 = (((x397<=x398)<x399)+x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -379;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MAX;

	t96 = (((x401<=x402)<x403)+x404);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x406 = -178;
	static volatile int8_t x407 = INT8_MIN;
	int32_t t97 = 9;

	t97 = (((x405<=x406)<x407)+x408);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = 1246LL;
	uint64_t x410 = 201303795149LLU;
	static uint32_t x411 = UINT32_MAX;
	int8_t x412 = 7;
	int32_t t98 = 3;

	t98 = (((x409<=x410)<x411)+x412);

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x413 = 10204U;
	volatile uint32_t x414 = 100740U;
	static int16_t x415 = -1;
	static uint64_t x416 = UINT64_MAX;

	t99 = (((x413<=x414)<x415)+x416);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

