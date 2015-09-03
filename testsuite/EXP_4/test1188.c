#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -1LL;
int8_t x11 = INT8_MIN;
int64_t x28 = -1LL;
volatile int8_t x31 = INT8_MIN;
int16_t x37 = 298;
int64_t x47 = -1LL;
int8_t x49 = INT8_MIN;
int16_t x52 = INT16_MAX;
static uint32_t x55 = UINT32_MAX;
volatile uint8_t x56 = UINT8_MAX;
int16_t x57 = INT16_MIN;
uint32_t x64 = UINT32_MAX;
uint8_t x79 = UINT8_MAX;
uint64_t x82 = 10133LLU;
uint8_t x91 = UINT8_MAX;
int64_t x93 = -1LL;
volatile int16_t x94 = INT16_MIN;
int8_t x99 = INT8_MIN;
int64_t t24 = 3196444565446700LL;
int64_t x104 = INT64_MIN;
static uint64_t x110 = 90966942750788LLU;
volatile uint16_t x114 = 314U;
static int8_t x116 = -4;
int64_t x124 = INT64_MIN;
static uint32_t x133 = 3906712U;
uint8_t x134 = 2U;
uint8_t x138 = 54U;
int64_t x142 = -1LL;
volatile int64_t t35 = 63LL;
static uint8_t x155 = 7U;
volatile int32_t t40 = 13829874;
int32_t x169 = 10351;
static int16_t x171 = INT16_MIN;
int32_t x181 = INT32_MAX;
uint32_t x186 = 26533730U;
uint16_t x195 = 23957U;
uint64_t x196 = UINT64_MAX;
static int16_t x199 = -7100;
uint64_t x203 = 17790LLU;
uint32_t x204 = UINT32_MAX;
static volatile int32_t t49 = -1803535;
int16_t x206 = INT16_MIN;
static uint8_t x210 = 1U;
uint64_t x212 = UINT64_MAX;
volatile int8_t x223 = INT8_MIN;
static volatile int16_t x225 = -1;
static uint32_t t55 = 158U;
uint16_t x231 = UINT16_MAX;
volatile int32_t t57 = -1;
volatile int8_t x247 = 0;
int16_t x250 = -1;
static volatile int8_t x252 = 6;
static int32_t x255 = -1;
int16_t x258 = INT16_MIN;
static int8_t x263 = -1;
uint16_t x271 = 10U;
static int64_t x280 = INT64_MAX;
int64_t x288 = -1LL;
int8_t x292 = INT8_MIN;
volatile int64_t t70 = -3LL;
uint64_t x301 = 5341468944307LLU;
static int16_t x303 = -1;
uint32_t x306 = UINT32_MAX;
uint64_t x308 = 239476235LLU;
static uint64_t t73 = 4613424147478405LLU;
uint32_t x318 = 1888607U;
volatile int64_t x320 = -1LL;
int64_t x322 = INT64_MAX;
volatile int32_t x326 = INT32_MIN;
volatile uint32_t x327 = UINT32_MAX;
int64_t x335 = INT64_MAX;
int8_t x341 = INT8_MAX;
static int16_t x342 = INT16_MAX;
int64_t x347 = -1LL;
volatile int64_t t81 = 157812432776LL;
static int32_t x360 = 18565558;
volatile int64_t t84 = 20476756429085LL;
volatile uint64_t t85 = 898LLU;
int32_t x366 = -1;
static int16_t x368 = INT16_MIN;
int16_t x371 = 5;
uint32_t x372 = 3U;
uint32_t x373 = UINT32_MAX;
int16_t x376 = INT16_MIN;
int8_t x393 = 0;
int16_t x395 = INT16_MAX;
int32_t t93 = -125;
uint32_t x399 = UINT32_MAX;
int32_t t94 = 0;
int32_t t96 = -159693520;
int8_t x410 = 1;
volatile uint16_t x412 = 17145U;
volatile int32_t x424 = INT32_MIN;
static int32_t t99 = 130;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	static int32_t t0 = 330341;

	t0 = (x1%(x2+(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int32_t x6 = INT32_MIN;
	int32_t x7 = 50;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = 122;

	t1 = (x5%(x6+(x7==x8)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 24021078099LL;
	uint64_t x10 = UINT64_MAX;
	volatile int16_t x12 = INT16_MIN;
	uint64_t t2 = 4669413282099LLU;

	t2 = (x9%(x10+(x11==x12)));

	if (t2 != 24021078099LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 2795680366533776LLU;
	int16_t x16 = 0;
	volatile uint32_t t3 = 0U;

	t3 = (x13%(x14+(x15==x16)));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	static int64_t x19 = -257784LL;
	int16_t x20 = -1;
	uint32_t t4 = 1445104U;

	t4 = (x17%(x18+(x19==x20)));

	if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = -56307LL;
	uint32_t x23 = UINT32_MAX;
	static int16_t x24 = -1;
	volatile int64_t t5 = 170794890LL;

	t5 = (x21%(x22+(x23==x24)));

	if (t5 != 1921LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = -1;
	uint64_t x27 = 11636LLU;
	volatile int64_t t6 = -18443913396531LL;

	t6 = (x25%(x26+(x27==x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 743LLU;
	int16_t x32 = INT16_MIN;
	uint64_t t7 = 2988771123LLU;

	t7 = (x29%(x30+(x31==x32)));

	if (t7 != 582LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile uint32_t x34 = 10645U;
	int64_t x35 = -1LL;
	volatile int64_t x36 = INT64_MIN;
	static uint32_t t8 = 355908691U;

	t8 = (x33%(x34+(x35==x36)));

	if (t8 != 3928U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = -1778662574634356LL;
	static int8_t x39 = -1;
	uint8_t x40 = 30U;
	int64_t t9 = 1681060234579LL;

	t9 = (x37%(x38+(x39==x40)));

	if (t9 != 298LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 5627U;
	uint8_t x44 = UINT8_MAX;
	volatile uint64_t t10 = 54LLU;

	t10 = (x41%(x42+(x43==x44)));

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	uint32_t x46 = 115U;
	int8_t x48 = INT8_MIN;
	volatile uint32_t t11 = 63U;

	t11 = (x45%(x46+(x47==x48)));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 1121U;
	int32_t x51 = 161;
	volatile int32_t t12 = -88;

	t12 = (x49%(x50+(x51==x52)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1399946LLU;
	static int16_t x54 = INT16_MIN;
	uint64_t t13 = 7408592140LLU;

	t13 = (x53%(x54+(x55==x56)));

	if (t13 != 1399946LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = INT8_MIN;
	uint16_t x59 = 945U;
	volatile int64_t x60 = -3637LL;
	volatile int32_t t14 = 27;

	t14 = (x57%(x58+(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	int64_t x63 = -1LL;
	static volatile int32_t t15 = 7252;

	t15 = (x61%(x62+(x63==x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -6LL;
	int64_t x66 = INT64_MIN;
	static uint16_t x67 = 16295U;
	int32_t x68 = INT32_MAX;
	int64_t t16 = 67462019363LL;

	t16 = (x65%(x66+(x67==x68)));

	if (t16 != -6LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 163U;
	uint64_t x70 = 881576605LLU;
	int8_t x71 = -6;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = 717LLU;

	t17 = (x69%(x70+(x71==x72)));

	if (t17 != 163LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 238482950U;
	static int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	uint32_t t18 = 4122U;

	t18 = (x73%(x74+(x75==x76)));

	if (t18 != 255U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -349;
	volatile int8_t x78 = -1;
	volatile int16_t x80 = INT16_MAX;
	int32_t t19 = -4464758;

	t19 = (x77%(x78+(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 3;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = -1;
	volatile uint64_t t20 = 127506574044384LLU;

	t20 = (x81%(x82+(x83==x84)));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 7593384923LLU;
	int32_t x87 = INT32_MAX;
	uint16_t x88 = 1U;
	volatile uint64_t t21 = 16561626536793873LLU;

	t21 = (x85%(x86+(x87==x88)));

	if (t21 != 3868066077LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MIN;
	int64_t x92 = 0LL;
	volatile int64_t t22 = -4LL;

	t22 = (x89%(x90+(x91==x92)));

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int64_t t23 = 3LL;

	t23 = (x93%(x94+(x95==x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int16_t x98 = -12059;
	int16_t x100 = -1;

	t24 = (x97%(x98+(x99==x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	int8_t x102 = INT8_MIN;
	uint32_t x103 = 8602U;
	static int32_t t25 = -653196012;

	t25 = (x101%(x102+(x103==x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 89LL;
	int64_t x106 = INT64_MIN;
	int16_t x107 = -1;
	int16_t x108 = -1;
	volatile int64_t t26 = 6453387083LL;

	t26 = (x105%(x106+(x107==x108)));

	if (t26 != 89LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	uint64_t t27 = 138030969752LLU;

	t27 = (x109%(x110+(x111==x112)));

	if (t27 != 12587990771483LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 1;
	int16_t x115 = INT16_MIN;
	int32_t t28 = -101;

	t28 = (x113%(x114+(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -1;
	uint8_t x118 = 21U;
	int32_t x119 = -1;
	static volatile uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = -6727461;

	t29 = (x117%(x118+(x119==x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -88451271;
	volatile int32_t x122 = INT32_MIN;
	int64_t x123 = -11438387275LL;
	int32_t t30 = 164891446;

	t30 = (x121%(x122+(x123==x124)));

	if (t30 != -88451271) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	static uint64_t x126 = 123696LLU;
	uint32_t x127 = 56804U;
	volatile uint64_t x128 = 15982LLU;
	volatile uint64_t t31 = 133666LLU;

	t31 = (x125%(x126+(x127==x128)));

	if (t31 != 121087LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	int8_t x130 = -18;
	uint16_t x131 = 50U;
	int32_t x132 = -716869671;
	int32_t t32 = -31;

	t32 = (x129%(x130+(x131==x132)));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = 1;
	int64_t x136 = INT64_MIN;
	static uint32_t t33 = 184256901U;

	t33 = (x133%(x134+(x135==x136)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x139 = 2732;
	static uint8_t x140 = 90U;
	static volatile int32_t t34 = -131960;

	t34 = (x137%(x138+(x139==x140)));

	if (t34 != -38) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -411LL;
	uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MIN;

	t35 = (x141%(x142+(x143==x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 33121889U;
	volatile int64_t x146 = 77218632123932940LL;
	static int32_t x147 = -509443;
	static uint64_t x148 = UINT64_MAX;
	volatile int64_t t36 = -179401089218321600LL;

	t36 = (x145%(x146+(x147==x148)));

	if (t36 != 33121889LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = UINT16_MAX;
	static uint32_t x154 = UINT32_MAX;
	int32_t x156 = -1308486;
	volatile uint32_t t37 = 60294U;

	t37 = (x153%(x154+(x155==x156)));

	if (t37 != 65535U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x157 = 37U;
	volatile uint32_t x158 = 771714U;
	static int32_t x159 = 961;
	uint16_t x160 = 1U;
	uint32_t t38 = 131739125U;

	t38 = (x157%(x158+(x159==x160)));

	if (t38 != 37U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	static uint32_t x162 = UINT32_MAX;
	volatile int32_t x163 = INT32_MIN;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t39 = -626814042552123LL;

	t39 = (x161%(x162+(x163==x164)));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 23071851;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;
	int64_t x168 = -1LL;

	t40 = (x165%(x166+(x167==x168)));

	if (t40 != 23071851) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x170 = 13U;
	int8_t x172 = -1;
	int32_t t41 = 6;

	t41 = (x169%(x170+(x171==x172)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	static int64_t x175 = 15626761213LL;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t42 = -29;

	t42 = (x173%(x174+(x175==x176)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 130592255952LLU;
	volatile int32_t x178 = INT32_MAX;
	volatile uint64_t x179 = 2291690LLU;
	static uint8_t x180 = UINT8_MAX;
	uint64_t t43 = 772877016772LLU;

	t43 = (x177%(x178+(x179==x180)));

	if (t43 != 1743237132LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x182 = 21U;
	uint64_t x183 = 2615374603698067750LLU;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = 61821;

	t44 = (x181%(x182+(x183==x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -2174854999785044811LL;
	uint32_t x187 = 574920U;
	volatile int64_t x188 = -13941LL;
	int64_t t45 = 428668524031349LL;

	t45 = (x185%(x186+(x187==x188)));

	if (t45 != -16639511LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	int64_t x192 = 20LL;
	uint64_t t46 = 4160508477251841LLU;

	t46 = (x189%(x190+(x191==x192)));

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 0;
	static int64_t x194 = 32LL;
	volatile int64_t t47 = 24544LL;

	t47 = (x193%(x194+(x195==x196)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = -1LL;
	uint32_t x200 = 307201U;
	volatile int64_t t48 = -1LL;

	t48 = (x197%(x198+(x199==x200)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MIN;
	int16_t x202 = -1;

	t49 = (x201%(x202+(x203==x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x205 = 4U;
	int64_t x207 = 11362883LL;
	uint8_t x208 = 1U;
	static volatile int32_t t50 = 251;

	t50 = (x205%(x206+(x207==x208)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 10U;
	int8_t x211 = 1;
	static int32_t t51 = -3299103;

	t51 = (x209%(x210+(x211==x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -583533LL;
	uint8_t x216 = UINT8_MAX;
	static int32_t t52 = 938142;

	t52 = (x213%(x214+(x215==x216)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	uint8_t x218 = 13U;
	int32_t x219 = INT32_MAX;
	static int8_t x220 = -1;
	int32_t t53 = -31068955;

	t53 = (x217%(x218+(x219==x220)));

	if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 0LLU;
	int64_t x222 = 27626LL;
	int16_t x224 = -1;
	static volatile uint64_t t54 = 1114881570602029LLU;

	t54 = (x221%(x222+(x223==x224)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x226 = 3624468U;
	int16_t x227 = -1;
	uint64_t x228 = 723620608941214317LLU;

	t55 = (x225%(x226+(x227==x228)));

	if (t55 != 3597183U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -2080157288LL;
	int16_t x232 = INT16_MAX;
	int64_t t56 = -98299833947352902LL;

	t56 = (x229%(x230+(x231==x232)));

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	volatile uint16_t x234 = UINT16_MAX;
	static uint16_t x235 = 29U;
	int16_t x236 = -6549;

	t57 = (x233%(x234+(x235==x236)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = -1102049;
	static uint16_t x239 = 31102U;
	static volatile uint8_t x240 = UINT8_MAX;
	static int32_t t58 = -1;

	t58 = (x237%(x238+(x239==x240)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	uint32_t x246 = 80U;
	int32_t x248 = -1;
	uint32_t t59 = 10614U;

	t59 = (x245%(x246+(x247==x248)));

	if (t59 != 47U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -1;
	static volatile uint64_t x251 = UINT64_MAX;
	int32_t t60 = 409882623;

	t60 = (x249%(x250+(x251==x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 13U;
	volatile int8_t x254 = 5;
	int64_t x256 = INT64_MAX;
	volatile uint32_t t61 = 170U;

	t61 = (x253%(x254+(x255==x256)));

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	int32_t x259 = -1;
	volatile uint16_t x260 = 7U;
	int32_t t62 = 43779;

	t62 = (x257%(x258+(x259==x260)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	static int16_t x264 = INT16_MAX;
	volatile int64_t t63 = 13606200600LL;

	t63 = (x261%(x262+(x263==x264)));

	if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = 116LL;
	volatile uint64_t x270 = UINT64_MAX;
	static uint16_t x272 = UINT16_MAX;
	uint64_t t64 = 1386086870218144486LLU;

	t64 = (x269%(x270+(x271==x272)));

	if (t64 != 116LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MAX;
	static int32_t x274 = 3;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	static int32_t t65 = 1;

	t65 = (x273%(x274+(x275==x276)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 58411LLU;
	int8_t x278 = -1;
	uint8_t x279 = 0U;
	static uint64_t t66 = 945556LLU;

	t66 = (x277%(x278+(x279==x280)));

	if (t66 != 58411LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = 294192539;
	int32_t x282 = -13;
	int32_t x283 = -1;
	int32_t x284 = INT32_MIN;
	int32_t t67 = -15860768;

	t67 = (x281%(x282+(x283==x284)));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = INT64_MIN;
	static int64_t x286 = INT64_MIN;
	volatile int16_t x287 = 9;
	static volatile int64_t t68 = -1180233380948042LL;

	t68 = (x285%(x286+(x287==x288)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = -7LL;
	uint32_t x291 = 30771599U;
	volatile int64_t t69 = -235171634766790LL;

	t69 = (x289%(x290+(x291==x292)));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MIN;

	t70 = (x297%(x298+(x299==x300)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x302 = INT64_MIN;
	volatile int64_t x304 = INT64_MAX;
	uint64_t t71 = 909131518435753LLU;

	t71 = (x301%(x302+(x303==x304)));

	if (t71 != 5341468944307LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	int8_t x307 = -1;
	volatile uint32_t t72 = 1781U;

	t72 = (x305%(x306+(x307==x308)));

	if (t72 != 255U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 15048LLU;
	uint32_t x310 = 3609U;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = -1;

	t73 = (x309%(x310+(x311==x312)));

	if (t73 != 612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x313 = 120U;
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = 6694009LL;
	int32_t t74 = 489999;

	t74 = (x313%(x314+(x315==x316)));

	if (t74 != 120) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x317 = 2U;
	int8_t x319 = INT8_MIN;
	volatile uint32_t t75 = 6578U;

	t75 = (x317%(x318+(x319==x320)));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x321 = -14716LL;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = 1819203LLU;
	int64_t t76 = 10953673469LL;

	t76 = (x321%(x322+(x323==x324)));

	if (t76 != -14716LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	static volatile int64_t x328 = INT64_MAX;
	int32_t t77 = -5711259;

	t77 = (x325%(x326+(x327==x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 64U;
	static int16_t x336 = -971;
	volatile int32_t t78 = -862112728;

	t78 = (x333%(x334+(x335==x336)));

	if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x337 = -104164754984604681LL;
	static int32_t x338 = -1;
	uint16_t x339 = 0U;
	int32_t x340 = INT32_MIN;
	int64_t t79 = -6353873589LL;

	t79 = (x337%(x338+(x339==x340)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 19U;
	volatile int32_t t80 = -274848;

	t80 = (x341%(x342+(x343==x344)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MAX;
	volatile int64_t x346 = INT64_MAX;
	static int32_t x348 = -170282;

	t81 = (x345%(x346+(x347==x348)));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	int8_t x350 = -18;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = 1LL;
	int32_t t82 = -4832;

	t82 = (x349%(x350+(x351==x352)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	int16_t x355 = INT16_MAX;
	uint16_t x356 = 3677U;
	int32_t t83 = 1523981;

	t83 = (x353%(x354+(x355==x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = 5479156800LL;
	int16_t x358 = INT16_MAX;
	int16_t x359 = -1;

	t84 = (x357%(x358+(x359==x360)));

	if (t84 != 22895LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = 6993809;
	uint64_t x362 = UINT64_MAX;
	static int16_t x363 = -1;
	uint16_t x364 = 3U;

	t85 = (x361%(x362+(x363==x364)));

	if (t85 != 6993809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 73U;
	int8_t x367 = -37;
	volatile uint32_t t86 = 160314U;

	t86 = (x365%(x366+(x367==x368)));

	if (t86 != 73U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = -1;
	static volatile int64_t t87 = -1LL;

	t87 = (x369%(x370+(x371==x372)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x374 = 404161LL;
	static uint16_t x375 = UINT16_MAX;
	volatile int64_t t88 = 13237345615896850LL;

	t88 = (x373%(x374+(x375==x376)));

	if (t88 != 352509LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	uint32_t x379 = 8283791U;
	int32_t x380 = INT32_MIN;
	int64_t t89 = -1577189572LL;

	t89 = (x377%(x378+(x379==x380)));

	if (t89 != 65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = 3837U;
	uint8_t x382 = UINT8_MAX;
	static int64_t x383 = -21339LL;
	int32_t x384 = INT32_MIN;
	int32_t t90 = 7;

	t90 = (x381%(x382+(x383==x384)));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 1U;
	int64_t x386 = INT64_MIN;
	int64_t x387 = 2956831318487141932LL;
	uint64_t x388 = 2310LLU;
	int64_t t91 = -486215776428LL;

	t91 = (x385%(x386+(x387==x388)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x389 = 9U;
	int32_t x390 = -1;
	int32_t x391 = -1;
	uint16_t x392 = 1759U;
	volatile int32_t t92 = 36559;

	t92 = (x389%(x390+(x391==x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x394 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;

	t93 = (x393%(x394+(x395==x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -22034777;
	int16_t x398 = INT16_MAX;
	volatile int8_t x400 = 1;

	t94 = (x397%(x398+(x399==x400)));

	if (t94 != -15353) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -1LL;
	volatile int16_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;
	int64_t t95 = -11083514903762LL;

	t95 = (x401%(x402+(x403==x404)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x405 = 2U;
	uint16_t x406 = 26913U;
	volatile int64_t x407 = -21LL;
	int16_t x408 = -1;

	t96 = (x405%(x406+(x407==x408)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = INT64_MIN;
	uint64_t x411 = 5305323740695810LLU;
	static volatile int64_t t97 = -83168062838LL;

	t97 = (x409%(x410+(x411==x412)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -1;
	static uint32_t x414 = 135U;
	uint16_t x415 = 1U;
	uint32_t x416 = UINT32_MAX;
	uint32_t t98 = 0U;

	t98 = (x413%(x414+(x415==x416)));

	if (t98 != 75U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x421 = UINT16_MAX;
	static uint8_t x422 = 6U;
	static uint8_t x423 = 15U;

	t99 = (x421%(x422+(x423==x424)));

	if (t99 != 3) { NG(); } else { ; }
	
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

