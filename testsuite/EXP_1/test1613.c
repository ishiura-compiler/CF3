#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = 722798;
uint8_t x7 = 83U;
int32_t t1 = 142508496;
static volatile int8_t x11 = INT8_MIN;
int16_t x14 = -88;
uint64_t x15 = 8966815617937329048LLU;
int32_t x16 = INT32_MAX;
uint16_t x20 = 218U;
volatile int32_t t4 = 163;
uint32_t x29 = 21U;
static int64_t x30 = INT64_MAX;
static uint16_t x42 = 101U;
uint16_t x45 = 2U;
int32_t t12 = INT32_MIN;
int64_t x53 = -1LL;
int32_t x57 = INT32_MIN;
int64_t x61 = 39330171665403LL;
uint64_t x67 = 3264707LLU;
volatile int32_t x69 = INT32_MIN;
int16_t x77 = INT16_MIN;
uint32_t x78 = 149U;
static uint64_t x79 = UINT64_MAX;
int32_t x82 = -1018048;
uint8_t x94 = 10U;
static int16_t x99 = 0;
volatile int64_t x100 = -1LL;
int64_t t24 = 543686366LL;
volatile int64_t x102 = INT64_MAX;
int16_t x103 = INT16_MAX;
int8_t x108 = INT8_MIN;
static int32_t x111 = INT32_MIN;
uint8_t x113 = 39U;
int32_t x119 = INT32_MIN;
int32_t t29 = INT32_MIN;
static volatile int64_t x123 = 508LL;
static volatile uint8_t x124 = UINT8_MAX;
uint64_t x127 = 43LLU;
volatile uint32_t x130 = UINT32_MAX;
static int64_t x143 = INT64_MAX;
int16_t x146 = -1;
static int32_t x151 = INT32_MAX;
static int8_t x155 = -12;
int8_t x157 = -1;
volatile uint8_t x158 = UINT8_MAX;
int8_t x159 = INT8_MIN;
static volatile int16_t x170 = INT16_MIN;
int32_t x176 = 0;
volatile int32_t t43 = -1;
volatile uint32_t x178 = 17718928U;
int32_t t45 = -1;
static uint64_t x185 = 113408016886LLU;
int32_t x191 = 2256;
volatile uint8_t x195 = UINT8_MAX;
int16_t x208 = INT16_MIN;
int8_t x209 = INT8_MIN;
volatile int16_t x210 = 5;
volatile int64_t x211 = -1LL;
volatile int32_t t52 = 627777849;
int16_t x213 = -1;
static volatile uint32_t t53 = 1U;
uint32_t x218 = 11047610U;
int32_t t57 = 1418;
uint16_t x246 = 1556U;
int32_t t61 = -295984;
static int16_t x255 = INT16_MIN;
int8_t x256 = -1;
uint32_t x257 = 18545U;
uint8_t x262 = 76U;
int8_t x264 = 1;
int32_t x265 = -1;
static volatile uint8_t x268 = UINT8_MAX;
int32_t t66 = 1;
int8_t x269 = -1;
int32_t x273 = 81544;
int32_t t69 = -196666419;
volatile int64_t x283 = -1LL;
uint16_t x289 = 6343U;
uint16_t x298 = UINT16_MAX;
uint8_t x302 = 52U;
volatile int32_t t76 = 9256;
volatile int32_t t77 = 0;
static int16_t x316 = -1;
volatile int8_t x319 = -1;
volatile uint32_t t79 = 0U;
static uint64_t x327 = 1761271957802LLU;
int32_t x330 = INT32_MIN;
volatile int32_t t83 = 0;
uint16_t x337 = 0U;
uint16_t x339 = 122U;
static uint32_t t84 = 236225U;
int64_t x344 = INT64_MIN;
uint64_t x348 = UINT64_MAX;
int64_t x351 = -1LL;
uint8_t x352 = 15U;
int32_t x357 = 0;
uint32_t x359 = 13006913U;
int16_t x360 = INT16_MIN;
int16_t x362 = INT16_MIN;
int64_t x373 = -1LL;
volatile int8_t x376 = INT8_MIN;
volatile uint64_t x378 = UINT64_MAX;
int64_t x381 = -387LL;
volatile int8_t x388 = INT8_MAX;
static uint32_t x391 = 13152564U;
static int16_t x394 = INT16_MIN;
uint32_t t98 = UINT32_MAX;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int8_t x2 = -1;
	int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -119839;

	t0 = (((x1<=x2)==x3)+x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int32_t x8 = -6;

	t1 = (((x5<=x6)==x7)+x8);

	if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = INT32_MIN;

	t2 = (((x9<=x10)==x11)+x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (((x13<=x14)==x15)+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = 9937;
	static int8_t x19 = INT8_MIN;

	t4 = (((x17<=x18)==x19)+x20);

	if (t4 != 218) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 635505569;
	uint16_t x22 = 0U;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 0U;
	int32_t t5 = -4178;

	t5 = (((x21<=x22)==x23)+x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int64_t x26 = -100160692LL;
	int64_t x27 = -37254340702LL;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = -258226;

	t6 = (((x25<=x26)==x27)+x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MAX;
	int32_t x32 = -4914;
	static int32_t t7 = 13958222;

	t7 = (((x29<=x30)==x31)+x32);

	if (t7 != -4914) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint16_t x34 = 6U;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = -162LL;
	int64_t t8 = -5470LL;

	t8 = (((x33<=x34)==x35)+x36);

	if (t8 != -162LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	volatile uint16_t x38 = 3479U;
	uint32_t x39 = 4592393U;
	uint16_t x40 = UINT16_MAX;
	static int32_t t9 = -49513;

	t9 = (((x37<=x38)==x39)+x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -88;
	volatile int16_t x43 = 8086;
	static uint32_t x44 = UINT32_MAX;
	static uint32_t t10 = UINT32_MAX;

	t10 = (((x41<=x42)==x43)+x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	volatile int8_t x47 = INT8_MIN;
	volatile int32_t x48 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (((x45<=x46)==x47)+x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int64_t x50 = -136473166009663538LL;
	int32_t x51 = 363226;
	int32_t x52 = INT32_MIN;

	t12 = (((x49<=x50)==x51)+x52);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = INT32_MIN;
	static int32_t x55 = -2732423;
	static int64_t x56 = INT64_MIN;
	static int64_t t13 = INT64_MIN;

	t13 = (((x53<=x54)==x55)+x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	uint32_t x59 = 1062448895U;
	uint64_t x60 = 1LLU;
	uint64_t t14 = 462338182693LLU;

	t14 = (((x57<=x58)==x59)+x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = 711501872949086528LL;
	int8_t x63 = 1;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 252757298710LL;

	t15 = (((x61<=x62)==x63)+x64);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 30U;
	uint32_t x68 = 11U;
	uint32_t t16 = 799955U;

	t16 = (((x65<=x66)==x67)+x68);

	if (t16 != 11U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = 16211310LL;
	static uint32_t x71 = 1U;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -301;

	t17 = (((x69<=x70)==x71)+x72);

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = -1;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = 46321;
	volatile int32_t t18 = -117845;

	t18 = (((x73<=x74)==x75)+x76);

	if (t18 != 46321) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x80 = 47U;
	volatile int32_t t19 = 0;

	t19 = (((x77<=x78)==x79)+x80);

	if (t19 != 47) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 15U;
	uint8_t x83 = 124U;
	volatile int32_t x84 = -1;
	int32_t t20 = -32465846;

	t20 = (((x81<=x82)==x83)+x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 81;
	int32_t x86 = INT32_MAX;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = 98407184LL;
	volatile int64_t t21 = -1899305278LL;

	t21 = (((x85<=x86)==x87)+x88);

	if (t21 != 98407184LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int32_t x90 = 1131;
	uint8_t x91 = 7U;
	uint64_t x92 = 107223LLU;
	volatile uint64_t t22 = 3LLU;

	t22 = (((x89<=x90)==x91)+x92);

	if (t22 != 107223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 55522215U;
	static uint16_t x95 = 6U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 3;

	t23 = (((x93<=x94)==x95)+x96);

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x97 = 80194LLU;
	int8_t x98 = 0;

	t24 = (((x97<=x98)==x99)+x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	int32_t t25 = INT32_MAX;

	t25 = (((x101<=x102)==x103)+x104);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 1U;
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	int32_t t26 = 471879420;

	t26 = (((x105<=x106)==x107)+x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static volatile uint16_t x110 = 2505U;
	static int8_t x112 = INT8_MIN;
	static int32_t t27 = -40819707;

	t27 = (((x109<=x110)==x111)+x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	int16_t x116 = 69;
	volatile int32_t t28 = 10002160;

	t28 = (((x113<=x114)==x115)+x116);

	if (t28 != 69) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = -71173;
	static int32_t x120 = INT32_MIN;

	t29 = (((x117<=x118)==x119)+x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	int64_t x122 = INT64_MAX;
	static int32_t t30 = -3;

	t30 = (((x121<=x122)==x123)+x124);

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 334116309;

	t31 = (((x125<=x126)==x127)+x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -2;
	static int16_t x131 = -1;
	volatile int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = -333171106;

	t32 = (((x129<=x130)==x131)+x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -6992873507971890LL;
	static int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 133610771;

	t33 = (((x133<=x134)==x135)+x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	volatile int16_t x138 = -1;
	volatile int32_t x139 = 1;
	uint64_t x140 = 3748LLU;
	uint64_t t34 = 14LLU;

	t34 = (((x137<=x138)==x139)+x140);

	if (t34 != 3749LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = -28954377;
	int32_t x144 = INT32_MAX;
	static int32_t t35 = INT32_MAX;

	t35 = (((x141<=x142)==x143)+x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	int32_t x147 = 5227;
	int8_t x148 = 1;
	int32_t t36 = -3661756;

	t36 = (((x145<=x146)==x147)+x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -52;
	uint8_t x150 = 1U;
	uint32_t x152 = 409U;
	volatile uint32_t t37 = 633495159U;

	t37 = (((x149<=x150)==x151)+x152);

	if (t37 != 409U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 2864U;
	volatile int8_t x154 = INT8_MIN;
	int16_t x156 = -864;
	volatile int32_t t38 = 7;

	t38 = (((x153<=x154)==x155)+x156);

	if (t38 != -864) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x160 = 948;
	volatile int32_t t39 = -14245;

	t39 = (((x157<=x158)==x159)+x160);

	if (t39 != 948) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint8_t x162 = 15U;
	int64_t x163 = -1LL;
	volatile int64_t x164 = -1LL;
	int64_t t40 = 18140604LL;

	t40 = (((x161<=x162)==x163)+x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int32_t x166 = 774466;
	int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MIN;
	int32_t t41 = 4;

	t41 = (((x165<=x166)==x167)+x168);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = -2606686292923LL;
	int32_t x172 = 0;
	volatile int32_t t42 = 1;

	t42 = (((x169<=x170)==x171)+x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int64_t x174 = 7998502872173266LL;
	uint16_t x175 = UINT16_MAX;

	t43 = (((x173<=x174)==x175)+x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -2;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = 40U;
	int32_t t44 = -4643;

	t44 = (((x177<=x178)==x179)+x180);

	if (t44 != 40) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	volatile uint8_t x184 = 114U;

	t45 = (((x181<=x182)==x183)+x184);

	if (t45 != 114) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -954;
	volatile int16_t x187 = INT16_MAX;
	static int64_t x188 = -2111472537LL;
	volatile int64_t t46 = 250155LL;

	t46 = (((x185<=x186)==x187)+x188);

	if (t46 != -2111472537LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	volatile int32_t x190 = -157;
	uint16_t x192 = 3824U;
	volatile int32_t t47 = 35;

	t47 = (((x189<=x190)==x191)+x192);

	if (t47 != 3824) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = 0;
	volatile int8_t x194 = -3;
	int8_t x196 = 14;
	volatile int32_t t48 = 29;

	t48 = (((x193<=x194)==x195)+x196);

	if (t48 != 14) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -620368600;
	int16_t x198 = 71;
	int32_t x199 = INT32_MIN;
	static int64_t x200 = -1LL;
	volatile int64_t t49 = -26800LL;

	t49 = (((x197<=x198)==x199)+x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	uint8_t x202 = 1U;
	static int32_t x203 = 0;
	int16_t x204 = 18;
	volatile int32_t t50 = -4;

	t50 = (((x201<=x202)==x203)+x204);

	if (t50 != 18) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	static uint64_t x206 = 121022137132LLU;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t t51 = -1;

	t51 = (((x205<=x206)==x207)+x208);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x212 = -1;

	t52 = (((x209<=x210)==x211)+x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	static int64_t x215 = INT64_MAX;
	uint32_t x216 = 14305U;

	t53 = (((x213<=x214)==x215)+x216);

	if (t53 != 14305U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = 12160;
	int16_t x219 = -1;
	int16_t x220 = INT16_MAX;
	int32_t t54 = 21;

	t54 = (((x217<=x218)==x219)+x220);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 1U;
	volatile uint8_t x222 = UINT8_MAX;
	static uint16_t x223 = 0U;
	static int64_t x224 = INT64_MIN;
	int64_t t55 = INT64_MIN;

	t55 = (((x221<=x222)==x223)+x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -41;
	static int32_t x226 = INT32_MIN;
	int16_t x227 = -7709;
	static int64_t x228 = 1147461678LL;
	volatile int64_t t56 = -6LL;

	t56 = (((x225<=x226)==x227)+x228);

	if (t56 != 1147461678LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 1U;
	volatile int32_t x230 = -1;
	volatile uint16_t x231 = 318U;
	static uint16_t x232 = 271U;

	t57 = (((x229<=x230)==x231)+x232);

	if (t57 != 271) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -6415;
	volatile int32_t x234 = INT32_MIN;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;
	static volatile int64_t t58 = 7632LL;

	t58 = (((x233<=x234)==x235)+x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -1;
	static volatile int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = 5U;
	int32_t t59 = 3;

	t59 = (((x237<=x238)==x239)+x240);

	if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 4056768396788534070LL;
	int32_t x242 = INT32_MAX;
	volatile int64_t x243 = INT64_MAX;
	uint32_t x244 = UINT32_MAX;
	uint32_t t60 = UINT32_MAX;

	t60 = (((x241<=x242)==x243)+x244);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = 1;

	t61 = (((x245<=x246)==x247)+x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 2U;
	static int16_t x250 = INT16_MIN;
	int8_t x251 = 0;
	volatile uint16_t x252 = 41U;
	static int32_t t62 = 9520581;

	t62 = (((x249<=x250)==x251)+x252);

	if (t62 != 42) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	int8_t x254 = -1;
	int32_t t63 = 0;

	t63 = (((x253<=x254)==x255)+x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 13068U;
	int64_t x259 = -119309102542496270LL;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -17552044;

	t64 = (((x257<=x258)==x259)+x260);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	static volatile uint64_t x263 = 147388162973LLU;
	int32_t t65 = 32697856;

	t65 = (((x261<=x262)==x263)+x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = INT32_MIN;
	static volatile int32_t x267 = INT32_MAX;

	t66 = (((x265<=x266)==x267)+x268);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	int32_t t67 = 61;

	t67 = (((x269<=x270)==x271)+x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = 666376205;
	int32_t x275 = INT32_MAX;
	int64_t x276 = -1LL;
	static int64_t t68 = 711LL;

	t68 = (((x273<=x274)==x275)+x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = -8;
	uint64_t x279 = 25623487121735LLU;
	volatile int32_t x280 = 12346806;

	t69 = (((x277<=x278)==x279)+x280);

	if (t69 != 12346806) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = 184;
	uint64_t x284 = 3LLU;
	uint64_t t70 = 12372991494LLU;

	t70 = (((x281<=x282)==x283)+x284);

	if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	volatile uint16_t x286 = 914U;
	int16_t x287 = -1;
	uint32_t x288 = UINT32_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = (((x285<=x286)==x287)+x288);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 2U;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t x292 = INT32_MAX;
	int32_t t72 = INT32_MAX;

	t72 = (((x289<=x290)==x291)+x292);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3899872176LLU;
	int16_t x294 = -1;
	uint64_t x295 = 5LLU;
	int64_t x296 = INT64_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x293<=x294)==x295)+x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -14166980;
	static uint64_t x299 = 17LLU;
	int32_t x300 = INT32_MAX;
	int32_t t74 = INT32_MAX;

	t74 = (((x297<=x298)==x299)+x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x303 = -1LL;
	volatile int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x301<=x302)==x303)+x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1;
	uint8_t x306 = 2U;
	static int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MAX;

	t76 = (((x305<=x306)==x307)+x308);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static volatile int16_t x310 = 941;
	uint32_t x311 = 361U;
	static uint16_t x312 = 5141U;

	t77 = (((x309<=x310)==x311)+x312);

	if (t77 != 5141) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 1975;
	volatile uint8_t x314 = 103U;
	volatile int32_t x315 = INT32_MAX;
	static volatile int32_t t78 = 15216;

	t78 = (((x313<=x314)==x315)+x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = 66U;
	uint32_t x320 = 5U;

	t79 = (((x317<=x318)==x319)+x320);

	if (t79 != 5U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = 62536214;
	uint16_t x323 = 376U;
	static int8_t x324 = -1;
	volatile int32_t t80 = -3317225;

	t80 = (((x321<=x322)==x323)+x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	uint64_t x326 = UINT64_MAX;
	int32_t x328 = -484;
	volatile int32_t t81 = 812706;

	t81 = (((x325<=x326)==x327)+x328);

	if (t81 != -484) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int64_t x331 = -137774557413LL;
	int16_t x332 = 4090;
	static int32_t t82 = 6;

	t82 = (((x329<=x330)==x331)+x332);

	if (t82 != 4090) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -238;
	static int64_t x334 = INT64_MIN;
	static uint8_t x335 = UINT8_MAX;
	uint16_t x336 = UINT16_MAX;

	t83 = (((x333<=x334)==x335)+x336);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = 3250697090762426162LL;
	uint32_t x340 = 3290857U;

	t84 = (((x337<=x338)==x339)+x340);

	if (t84 != 3290857U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 820157U;
	static volatile int64_t x342 = -1LL;
	static uint16_t x343 = 2U;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (((x341<=x342)==x343)+x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	static volatile uint64_t x346 = 169LLU;
	int64_t x347 = 4232841773721648LL;
	uint64_t t86 = UINT64_MAX;

	t86 = (((x345<=x346)==x347)+x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -1;
	static volatile int32_t t87 = -3600;

	t87 = (((x349<=x350)==x351)+x352);

	if (t87 != 15) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = 1927;
	volatile int32_t x355 = 63867;
	int8_t x356 = -1;
	int32_t t88 = 39;

	t88 = (((x353<=x354)==x355)+x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = -1LL;
	int32_t t89 = -191141617;

	t89 = (((x357<=x358)==x359)+x360);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint8_t x363 = 35U;
	uint8_t x364 = 2U;
	int32_t t90 = -3;

	t90 = (((x361<=x362)==x363)+x364);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = 102048084358070313LL;
	static int32_t x367 = INT32_MIN;
	uint32_t x368 = 484U;
	uint32_t t91 = 1U;

	t91 = (((x365<=x366)==x367)+x368);

	if (t91 != 484U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -3192;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	uint8_t x372 = 5U;
	volatile int32_t t92 = 1;

	t92 = (((x369<=x370)==x371)+x372);

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 3303754U;
	uint8_t x375 = 14U;
	static int32_t t93 = 3561;

	t93 = (((x373<=x374)==x375)+x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 53U;
	static int16_t x379 = -1;
	int64_t x380 = -5532LL;
	volatile int64_t t94 = -675456186849730635LL;

	t94 = (((x377<=x378)==x379)+x380);

	if (t94 != -5532LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x382 = INT8_MIN;
	static volatile uint32_t x383 = 192U;
	uint32_t x384 = 1670347U;
	volatile uint32_t t95 = 76U;

	t95 = (((x381<=x382)==x383)+x384);

	if (t95 != 1670347U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static volatile uint16_t x386 = 0U;
	volatile int32_t x387 = INT32_MIN;
	int32_t t96 = 11;

	t96 = (((x385<=x386)==x387)+x388);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -5136;

	t97 = (((x389<=x390)==x391)+x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x395 = INT64_MAX;
	uint32_t x396 = UINT32_MAX;

	t98 = (((x393<=x394)==x395)+x396);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = -1503361247037974LL;
	uint8_t x399 = 1U;
	int16_t x400 = INT16_MAX;
	static int32_t t99 = 85;

	t99 = (((x397<=x398)==x399)+x400);

	if (t99 != 32768) { NG(); } else { ; }
	
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

