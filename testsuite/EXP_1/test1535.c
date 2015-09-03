#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int32_t t1 = -995;
volatile int32_t t2 = -709967994;
static int16_t x18 = -1;
volatile int64_t t6 = 212419230938LL;
int8_t x32 = -45;
volatile uint64_t x34 = UINT64_MAX;
int8_t x37 = INT8_MIN;
int8_t x39 = -1;
static uint16_t x56 = UINT16_MAX;
static int32_t t13 = -2852;
volatile int64_t t14 = 67LL;
int32_t x67 = 35028;
static int64_t t15 = -302LL;
uint64_t x69 = 1358371596649LLU;
uint64_t x70 = 3LLU;
volatile uint32_t t17 = 13922414U;
uint32_t x79 = 2018351352U;
uint64_t x80 = 621696693269LLU;
uint64_t x83 = UINT64_MAX;
volatile int64_t x90 = INT64_MIN;
int64_t t21 = -782540096683895944LL;
uint32_t x93 = UINT32_MAX;
volatile int16_t x96 = INT16_MIN;
int64_t x111 = -1LL;
volatile uint32_t x128 = UINT32_MAX;
static volatile int64_t x137 = INT64_MAX;
int16_t x139 = INT16_MAX;
int16_t x143 = INT16_MIN;
volatile int16_t x145 = -1;
uint64_t t32 = 9331416200LLU;
static volatile int64_t x151 = -42302LL;
int64_t x152 = INT64_MIN;
int64_t t33 = 8844225398963LL;
int8_t x153 = 38;
int32_t x155 = -1;
int64_t x162 = INT64_MAX;
int32_t x173 = -1746721;
uint16_t x177 = 230U;
int32_t t39 = -770250;
int8_t x182 = 2;
volatile uint16_t x194 = UINT16_MAX;
static uint32_t x195 = 7U;
uint64_t x196 = 129127758525209734LLU;
int32_t t44 = 13;
int8_t x215 = INT8_MIN;
int64_t x218 = INT64_MIN;
static int16_t x219 = INT16_MIN;
uint16_t x231 = 812U;
int32_t x235 = INT32_MAX;
int32_t t50 = 1008;
uint32_t x240 = 1U;
int8_t x241 = 1;
int32_t t52 = 167276083;
uint64_t x245 = 57494235412LLU;
int32_t x246 = INT32_MAX;
int32_t x248 = 4902402;
volatile int8_t x250 = INT8_MIN;
volatile int64_t x252 = 345LL;
volatile int16_t x253 = INT16_MIN;
int16_t x260 = -1;
uint64_t t57 = 65215LLU;
int16_t x278 = INT16_MIN;
int16_t x281 = 11560;
int32_t x285 = -1;
int16_t x289 = -1;
volatile uint16_t x292 = UINT16_MAX;
int8_t x294 = INT8_MIN;
static int16_t x295 = -7;
int16_t x307 = INT16_MIN;
volatile int64_t x318 = -58LL;
volatile int64_t t69 = -1308LL;
int64_t x323 = INT64_MAX;
int32_t x326 = -949211;
volatile uint32_t x328 = 43U;
volatile int32_t x339 = -12;
volatile uint32_t x345 = 741U;
volatile uint32_t x346 = 210536738U;
int32_t x350 = -5;
uint8_t x352 = 1U;
volatile int8_t x356 = -27;
int8_t x364 = 2;
int32_t t79 = -2428203;
int64_t x370 = INT64_MIN;
int32_t x378 = INT32_MIN;
volatile int64_t x380 = INT64_MIN;
static int32_t x382 = INT32_MIN;
int32_t t83 = -115;
static int8_t x410 = -1;
int16_t x411 = 1;
volatile int32_t t87 = -2;
int32_t t88 = 24783;
volatile int8_t x422 = -1;
volatile int16_t x426 = INT16_MIN;
volatile uint64_t t90 = 25794104082LLU;
int64_t t91 = 13076980282502LL;
static int64_t x438 = -1LL;
uint64_t t92 = 14641LLU;
int8_t x442 = INT8_MAX;
volatile int32_t t93 = 29566694;
int16_t x447 = INT16_MAX;
int32_t t94 = -1733069;
volatile int16_t x458 = INT16_MIN;
volatile int32_t x460 = INT32_MIN;
int64_t x466 = INT64_MIN;
uint32_t x471 = 771U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 832U;

	t0 = (((x1<=x2)-x3)+x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int16_t x6 = INT16_MIN;
	volatile uint8_t x7 = 93U;
	int32_t x8 = -1;

	t1 = (((x5<=x6)-x7)+x8);

	if (t1 != -94) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	int64_t x10 = INT64_MAX;
	int16_t x11 = -1360;
	int16_t x12 = -1;

	t2 = (((x9<=x10)-x11)+x12);

	if (t2 != 1360) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	static uint32_t x14 = 2111979447U;
	uint32_t x15 = UINT32_MAX;
	uint64_t x16 = 48753888017549198LLU;
	volatile uint64_t t3 = 61601LLU;

	t3 = (((x13<=x14)-x15)+x16);

	if (t3 != 48753888017549200LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 36;
	int32_t x19 = -1;
	uint8_t x20 = 7U;
	int32_t t4 = 110395;

	t4 = (((x17<=x18)-x19)+x20);

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int8_t x22 = INT8_MAX;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 16U;
	int32_t t5 = -2114213;

	t5 = (((x21<=x22)-x23)+x24);

	if (t5 != 32784) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	volatile uint16_t x26 = 2U;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -13LL;

	t6 = (((x25<=x26)-x27)+x28);

	if (t6 != 115LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	int16_t x30 = 93;
	static int8_t x31 = INT8_MIN;
	int32_t t7 = -87332;

	t7 = (((x29<=x30)-x31)+x32);

	if (t7 != 84) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	int64_t x35 = -1LL;
	int32_t x36 = 5877105;
	static int64_t t8 = 149759881929LL;

	t8 = (((x33<=x34)-x35)+x36);

	if (t8 != 5877107LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = 23;
	int64_t x40 = 59864LL;
	volatile int64_t t9 = -1850011954357756660LL;

	t9 = (((x37<=x38)-x39)+x40);

	if (t9 != 59866LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	static int16_t x42 = 41;
	int16_t x43 = 5;
	int8_t x44 = -1;
	volatile int32_t t10 = 127082;

	t10 = (((x41<=x42)-x43)+x44);

	if (t10 != -5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	static int8_t x47 = -1;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -62;

	t11 = (((x45<=x46)-x47)+x48);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	volatile int32_t t12 = -398320009;

	t12 = (((x53<=x54)-x55)+x56);

	if (t12 != 98303) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x57 = 1987989579LLU;
	int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	int16_t x60 = 8568;

	t13 = (((x57<=x58)-x59)+x60);

	if (t13 != 8570) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 503U;
	uint64_t x62 = 301988LLU;
	int64_t x63 = 12098316225263LL;
	int8_t x64 = -20;

	t14 = (((x61<=x62)-x63)+x64);

	if (t14 != -12098316225282LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static volatile int64_t x66 = INT64_MAX;
	int64_t x68 = -1LL;

	t15 = (((x65<=x66)-x67)+x68);

	if (t15 != -35028LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x71 = INT8_MIN;
	volatile uint64_t x72 = 207971LLU;
	uint64_t t16 = 30133870021987LLU;

	t16 = (((x69<=x70)-x71)+x72);

	if (t16 != 208099LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x73 = 0U;
	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = UINT32_MAX;
	static int32_t x76 = -2749;

	t17 = (((x73<=x74)-x75)+x76);

	if (t17 != 4294964549U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 1583771LLU;
	int32_t x78 = INT32_MIN;
	uint64_t t18 = 21302749187986980LLU;

	t18 = (((x77<=x78)-x79)+x80);

	if (t18 != 623973309214LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 1U;
	static int8_t x82 = -1;
	int64_t x84 = -5871995936048LL;
	uint64_t t19 = 31600419LLU;

	t19 = (((x81<=x82)-x83)+x84);

	if (t19 != 18446738201713615569LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = 336U;
	volatile uint8_t x87 = UINT8_MAX;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -2793825;

	t20 = (((x85<=x86)-x87)+x88);

	if (t20 != -383) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int32_t x91 = -7;
	int64_t x92 = INT64_MIN;

	t21 = (((x89<=x90)-x91)+x92);

	if (t21 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MAX;
	volatile int32_t t22 = 401300202;

	t22 = (((x93<=x94)-x95)+x96);

	if (t22 != -32895) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -14359604078655LL;
	int64_t x102 = 99008LL;
	static int8_t x103 = INT8_MIN;
	static int8_t x104 = -1;
	volatile int32_t t23 = 110;

	t23 = (((x101<=x102)-x103)+x104);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x109 = 3U;
	int16_t x110 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	volatile int64_t t24 = -8541415LL;

	t24 = (((x109<=x110)-x111)+x112);

	if (t24 != -32766LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 4507LL;
	uint32_t x114 = 827386U;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MAX;
	int32_t t25 = 0;

	t25 = (((x113<=x114)-x115)+x116);

	if (t25 != 32896) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	volatile uint16_t x123 = UINT16_MAX;
	static int32_t x124 = -1;
	static int32_t t26 = -20;

	t26 = (((x121<=x122)-x123)+x124);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	static uint16_t x126 = 1866U;
	volatile int64_t x127 = 2589424314950510LL;
	static int64_t t27 = 28401532440654416LL;

	t27 = (((x125<=x126)-x127)+x128);

	if (t27 != -2589420019983214LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	uint64_t x130 = 846366801764206LLU;
	int32_t x131 = -1;
	int32_t x132 = -10298518;
	int32_t t28 = 215;

	t28 = (((x129<=x130)-x131)+x132);

	if (t28 != -10298517) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -108;
	volatile uint8_t x135 = 127U;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t29 = -8087831;

	t29 = (((x133<=x134)-x135)+x136);

	if (t29 != 2147483521) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = INT32_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t30 = 673LLU;

	t30 = (((x137<=x138)-x139)+x140);

	if (t30 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int32_t x142 = 0;
	uint64_t x144 = 11884LLU;
	uint64_t t31 = 2871648515903LLU;

	t31 = (((x141<=x142)-x143)+x144);

	if (t31 != 44653LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x146 = INT8_MIN;
	int32_t x147 = 0;
	static volatile uint64_t x148 = 2312350884766815220LLU;

	t32 = (((x145<=x146)-x147)+x148);

	if (t32 != 2312350884766815220LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = UINT16_MAX;

	t33 = (((x149<=x150)-x151)+x152);

	if (t33 != -9223372036854733505LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x154 = UINT64_MAX;
	static uint16_t x156 = 356U;
	int32_t t34 = 966878675;

	t34 = (((x153<=x154)-x155)+x156);

	if (t34 != 358) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 398539763543LLU;
	int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	static int32_t t35 = -1;

	t35 = (((x157<=x158)-x159)+x160);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x161 = -8338;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = -32;
	int32_t t36 = -8378;

	t36 = (((x161<=x162)-x163)+x164);

	if (t36 != -65566) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -23;
	int64_t x166 = -43090733943320520LL;
	static int32_t x167 = -1;
	static int16_t x168 = 0;
	volatile int32_t t37 = 1;

	t37 = (((x165<=x166)-x167)+x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x174 = -1;
	int64_t x175 = INT64_MAX;
	volatile int16_t x176 = 14;
	int64_t t38 = 1856080LL;

	t38 = (((x173<=x174)-x175)+x176);

	if (t38 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x178 = 0;
	volatile int16_t x179 = 648;
	int8_t x180 = INT8_MIN;

	t39 = (((x177<=x178)-x179)+x180);

	if (t39 != -776) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = -83;
	int8_t x183 = 1;
	uint8_t x184 = 28U;
	int32_t t40 = -382344984;

	t40 = (((x181<=x182)-x183)+x184);

	if (t40 != 28) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = UINT16_MAX;
	static int64_t x186 = 12LL;
	volatile int16_t x187 = INT16_MIN;
	uint64_t x188 = 15159984349416906LLU;
	uint64_t t41 = 34858LLU;

	t41 = (((x185<=x186)-x187)+x188);

	if (t41 != 15159984349449674LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = -3821268;
	volatile uint64_t t42 = 1341486LLU;

	t42 = (((x193<=x194)-x195)+x196);

	if (t42 != 129127762820177024LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x197 = 14;
	static int8_t x198 = INT8_MIN;
	uint64_t x199 = 7538655678831LLU;
	uint16_t x200 = 3473U;
	uint64_t t43 = 40309807154439160LLU;

	t43 = (((x197<=x198)-x199)+x200);

	if (t43 != 18446736535053876258LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	static int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;

	t44 = (((x209<=x210)-x211)+x212);

	if (t44 != 32641) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x213 = INT16_MAX;
	volatile uint16_t x214 = 7U;
	int16_t x216 = -1;
	int32_t t45 = -516430192;

	t45 = (((x213<=x214)-x215)+x216);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = 2862433146647LLU;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t46 = -6830;

	t46 = (((x217<=x218)-x219)+x220);

	if (t46 != 32641) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x221 = INT8_MIN;
	int16_t x222 = 4414;
	volatile uint32_t x223 = 543914506U;
	int16_t x224 = INT16_MAX;
	volatile uint32_t t47 = 739869268U;

	t47 = (((x221<=x222)-x223)+x224);

	if (t47 != 3751085558U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = 246U;
	int16_t x228 = INT16_MAX;
	uint32_t t48 = 1U;

	t48 = (((x225<=x226)-x227)+x228);

	if (t48 != 32521U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 0U;
	int8_t x230 = INT8_MAX;
	static volatile int16_t x232 = INT16_MIN;
	static int32_t t49 = 0;

	t49 = (((x229<=x230)-x231)+x232);

	if (t49 != -33579) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = 42495575;
	static int8_t x234 = INT8_MAX;
	static int32_t x236 = INT32_MAX;

	t50 = (((x233<=x234)-x235)+x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x237 = -13878701LL;
	static volatile uint64_t x238 = UINT64_MAX;
	static int8_t x239 = INT8_MIN;
	uint32_t t51 = 0U;

	t51 = (((x237<=x238)-x239)+x240);

	if (t51 != 130U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = -14;
	volatile uint16_t x244 = 29287U;

	t52 = (((x241<=x242)-x243)+x244);

	if (t52 != 29302) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x247 = UINT64_MAX;
	static uint64_t t53 = 6617736501LLU;

	t53 = (((x245<=x246)-x247)+x248);

	if (t53 != 4902403LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x249 = INT64_MAX;
	static uint64_t x251 = 22LLU;
	uint64_t t54 = 92269LLU;

	t54 = (((x249<=x250)-x251)+x252);

	if (t54 != 323LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 25950631LLU;
	uint64_t t55 = 19LLU;

	t55 = (((x253<=x254)-x255)+x256);

	if (t55 != 25950376LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	volatile int32_t t56 = -71;

	t56 = (((x257<=x258)-x259)+x260);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x261 = INT32_MIN;
	int32_t x262 = -475396;
	static volatile uint64_t x263 = 84LLU;
	int8_t x264 = INT8_MIN;

	t57 = (((x261<=x262)-x263)+x264);

	if (t57 != 18446744073709551405LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x265 = 1488U;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -1;
	volatile int32_t t58 = 15896;

	t58 = (((x265<=x266)-x267)+x268);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -23390;
	uint32_t x270 = 669439U;
	int16_t x271 = INT16_MIN;
	static uint16_t x272 = UINT16_MAX;
	int32_t t59 = -58;

	t59 = (((x269<=x270)-x271)+x272);

	if (t59 != 98303) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x277 = 2U;
	volatile int16_t x279 = -3208;
	uint8_t x280 = 5U;
	volatile int32_t t60 = -75961;

	t60 = (((x277<=x278)-x279)+x280);

	if (t60 != 3213) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	volatile uint16_t x284 = 25128U;
	int64_t t61 = -382LL;

	t61 = (((x281<=x282)-x283)+x284);

	if (t61 != -9223372036854750678LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = 935242420854377038LLU;
	uint64_t t62 = 10584548821775LLU;

	t62 = (((x285<=x286)-x287)+x288);

	if (t62 != 935242420854377167LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 31U;
	int32_t t63 = -3098011;

	t63 = (((x289<=x290)-x291)+x292);

	if (t63 != 65505) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x293 = INT32_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	static uint32_t t64 = 6U;

	t64 = (((x293<=x294)-x295)+x296);

	if (t64 != 7U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 7711U;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 34U;
	static uint32_t x300 = 27704U;
	uint32_t t65 = 87389U;

	t65 = (((x297<=x298)-x299)+x300);

	if (t65 != 27671U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;
	uint64_t t66 = 8105364197541252122LLU;

	t66 = (((x305<=x306)-x307)+x308);

	if (t66 != 32768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x309 = -1;
	int16_t x310 = -1;
	int8_t x311 = INT8_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t67 = -16152644;

	t67 = (((x309<=x310)-x311)+x312);

	if (t67 != -2147483519) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x313 = 30U;
	int64_t x314 = INT64_MAX;
	static uint8_t x315 = 75U;
	uint32_t x316 = 3141U;
	uint32_t t68 = 169230250U;

	t68 = (((x313<=x314)-x315)+x316);

	if (t68 != 3067U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = 16U;
	int64_t x319 = 235271LL;
	volatile int8_t x320 = -1;

	t69 = (((x317<=x318)-x319)+x320);

	if (t69 != -235272LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x321 = 0U;
	volatile uint32_t x322 = 205U;
	static int8_t x324 = 16;
	volatile int64_t t70 = -1911411230922LL;

	t70 = (((x321<=x322)-x323)+x324);

	if (t70 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x325 = -3148384644LL;
	int8_t x327 = INT8_MIN;
	volatile uint32_t t71 = 1U;

	t71 = (((x325<=x326)-x327)+x328);

	if (t71 != 172U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x329 = -1;
	static volatile int8_t x330 = -1;
	static uint32_t x331 = 1621U;
	int32_t x332 = -1;
	uint32_t t72 = 473U;

	t72 = (((x329<=x330)-x331)+x332);

	if (t72 != 4294965675U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = -5;
	uint8_t x334 = 31U;
	uint16_t x335 = 11U;
	uint8_t x336 = 92U;
	static volatile int32_t t73 = 11;

	t73 = (((x333<=x334)-x335)+x336);

	if (t73 != 82) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x337 = INT16_MIN;
	static uint8_t x338 = 2U;
	static uint32_t x340 = UINT32_MAX;
	static uint32_t t74 = 513788913U;

	t74 = (((x337<=x338)-x339)+x340);

	if (t74 != 12U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t75 = -24;

	t75 = (((x345<=x346)-x347)+x348);

	if (t75 != 32641) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = 3971U;
	int32_t x351 = INT32_MAX;
	volatile int32_t t76 = -1;

	t76 = (((x349<=x350)-x351)+x352);

	if (t76 != -2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 1463U;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = 1;
	volatile int32_t t77 = -1808905;

	t77 = (((x353<=x354)-x355)+x356);

	if (t77 != -27) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x357 = 886006LLU;
	int8_t x358 = 1;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = 2059611U;
	uint32_t t78 = 488U;

	t78 = (((x357<=x358)-x359)+x360);

	if (t78 != 2026844U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = 194851;
	int16_t x362 = -1;
	int8_t x363 = -1;

	t79 = (((x361<=x362)-x363)+x364);

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 12496524U;
	int32_t x371 = -19;
	uint32_t x372 = 38604278U;
	static volatile uint32_t t80 = 938630U;

	t80 = (((x369<=x370)-x371)+x372);

	if (t80 != 38604297U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 17145U;
	int8_t x374 = INT8_MAX;
	uint16_t x375 = 4275U;
	static int32_t x376 = 4;
	volatile int32_t t81 = 115808318;

	t81 = (((x373<=x374)-x375)+x376);

	if (t81 != -4271) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x377 = -1;
	uint64_t x379 = 551982432LLU;
	static volatile uint64_t t82 = 4931074LLU;

	t82 = (((x377<=x378)-x379)+x380);

	if (t82 != 9223372036302793376LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x381 = 4580U;
	uint8_t x383 = 1U;
	uint8_t x384 = UINT8_MAX;

	t83 = (((x381<=x382)-x383)+x384);

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 16494916135337974LLU;
	uint64_t t84 = 13431598365LLU;

	t84 = (((x397<=x398)-x399)+x400);

	if (t84 != 16494916135337720LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = -1;
	uint16_t x402 = 37U;
	static volatile int32_t x403 = -1;
	volatile uint16_t x404 = 6U;
	static int32_t t85 = 0;

	t85 = (((x401<=x402)-x403)+x404);

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x405 = UINT8_MAX;
	volatile int8_t x406 = -1;
	static int8_t x407 = 43;
	volatile int32_t x408 = -1;
	int32_t t86 = 111174608;

	t86 = (((x405<=x406)-x407)+x408);

	if (t86 != -44) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x409 = 1339U;
	volatile int16_t x412 = INT16_MAX;

	t87 = (((x409<=x410)-x411)+x412);

	if (t87 != 32766) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x413 = INT8_MAX;
	int32_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	volatile uint16_t x416 = UINT16_MAX;

	t88 = (((x413<=x414)-x415)+x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = INT64_MAX;
	static int64_t x423 = -1LL;
	static volatile int8_t x424 = -46;
	volatile int64_t t89 = -1230LL;

	t89 = (((x421<=x422)-x423)+x424);

	if (t89 != -45LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x425 = 4U;
	uint64_t x427 = 5128330LLU;
	int8_t x428 = INT8_MIN;

	t90 = (((x425<=x426)-x427)+x428);

	if (t90 != 18446744073704423158LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x429 = 14830117221107LLU;
	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MAX;
	volatile int16_t x432 = 193;

	t91 = (((x429<=x430)-x431)+x432);

	if (t91 != -9223372036854775613LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x437 = INT64_MAX;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = INT16_MIN;

	t92 = (((x437<=x438)-x439)+x440);

	if (t92 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -30;
	int32_t x443 = -11;
	int32_t x444 = -42215;

	t93 = (((x441<=x442)-x443)+x444);

	if (t93 != -42203) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x445 = 547465973143399LLU;
	int8_t x446 = -1;
	int8_t x448 = INT8_MIN;

	t94 = (((x445<=x446)-x447)+x448);

	if (t94 != -32894) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x449 = -1;
	int64_t x450 = INT64_MAX;
	int64_t x451 = -873LL;
	uint16_t x452 = 3738U;
	int64_t t95 = -8378791LL;

	t95 = (((x449<=x450)-x451)+x452);

	if (t95 != 4612LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x457 = 193912U;
	int8_t x459 = -1;
	int32_t t96 = 28684;

	t96 = (((x457<=x458)-x459)+x460);

	if (t96 != -2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x461 = INT16_MAX;
	static int64_t x462 = INT64_MAX;
	volatile int16_t x463 = -1;
	uint8_t x464 = 8U;
	int32_t t97 = -726;

	t97 = (((x461<=x462)-x463)+x464);

	if (t97 != 10) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MIN;
	uint64_t x467 = 146910577LLU;
	int32_t x468 = INT32_MIN;
	static volatile uint64_t t98 = 26LLU;

	t98 = (((x465<=x466)-x467)+x468);

	if (t98 != 18446744071415157391LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x469 = 3LL;
	int8_t x470 = INT8_MAX;
	static int64_t x472 = INT64_MIN;
	volatile int64_t t99 = 8828LL;

	t99 = (((x469<=x470)-x471)+x472);

	if (t99 != -9223372032559809282LL) { NG(); } else { ; }
	
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

