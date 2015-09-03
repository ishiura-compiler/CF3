#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = 748075173;
uint64_t t4 = 1276997LLU;
static int8_t x25 = INT8_MIN;
int8_t x26 = -1;
uint16_t x28 = UINT16_MAX;
uint8_t x37 = 7U;
uint64_t x59 = 869956876371LLU;
static uint64_t x72 = 2621617LLU;
uint8_t x73 = UINT8_MAX;
uint32_t t17 = 1U;
int64_t x78 = -1LL;
uint64_t t21 = UINT64_MAX;
int32_t x112 = INT32_MIN;
int32_t t24 = INT32_MIN;
volatile uint16_t x115 = 16U;
int32_t t25 = 528963545;
static int32_t x117 = INT32_MIN;
int16_t x125 = -1;
volatile int64_t t28 = INT64_MAX;
int32_t t29 = -23857258;
volatile uint32_t x133 = 2041490501U;
int16_t x136 = -1;
volatile uint8_t x139 = 25U;
int32_t t31 = 1093692;
volatile int16_t x145 = -1;
int64_t x146 = INT64_MIN;
volatile uint8_t x150 = UINT8_MAX;
int8_t x151 = -38;
int16_t x155 = INT16_MAX;
static int16_t x159 = 149;
uint64_t x161 = 1410089862LLU;
static int8_t x163 = 2;
int32_t t37 = 0;
static volatile int16_t x167 = INT16_MIN;
uint8_t x170 = UINT8_MAX;
static volatile int32_t x181 = INT32_MIN;
int16_t x185 = INT16_MIN;
volatile int16_t x188 = -1;
int16_t x189 = -1;
int32_t x190 = INT32_MAX;
uint8_t x194 = 16U;
int64_t x198 = INT64_MIN;
int64_t x200 = INT64_MIN;
uint16_t x206 = UINT16_MAX;
int64_t x207 = INT64_MIN;
int16_t x216 = INT16_MIN;
int8_t x220 = INT8_MIN;
int32_t x225 = 1078;
int64_t x228 = INT64_MAX;
static uint16_t x231 = 12U;
static int8_t x232 = -1;
volatile int64_t x233 = INT64_MIN;
volatile uint64_t t55 = 328952070595LLU;
static volatile int32_t t56 = INT32_MIN;
int64_t x247 = INT64_MIN;
int64_t t60 = 2LL;
int64_t x264 = INT64_MAX;
uint16_t x268 = UINT16_MAX;
static int32_t x270 = INT32_MAX;
int8_t x278 = -1;
int32_t x281 = INT32_MAX;
int64_t x287 = INT64_MIN;
int16_t x294 = INT16_MIN;
volatile uint64_t x315 = UINT64_MAX;
uint64_t x316 = 7329LLU;
uint64_t x318 = UINT64_MAX;
static int16_t x319 = INT16_MAX;
int64_t x323 = -479502LL;
uint32_t x327 = 36U;
int32_t t78 = 129239;
int64_t x333 = INT64_MIN;
int64_t x341 = 1547154309528536LL;
uint8_t x343 = UINT8_MAX;
int32_t t82 = 98117809;
int32_t x351 = 6093318;
uint8_t x355 = 1U;
int64_t x361 = INT64_MIN;
int16_t x362 = INT16_MIN;
volatile int32_t t88 = INT32_MIN;
int32_t x370 = INT32_MAX;
int32_t t89 = 88757727;
volatile int64_t t91 = INT64_MIN;
volatile int32_t x381 = 78597;
static int32_t x382 = -4286919;
volatile uint64_t x383 = 16LLU;
int64_t x385 = 260437020786966069LL;
uint8_t x386 = 6U;
uint16_t x394 = 22687U;
uint32_t x406 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	uint16_t x3 = 0U;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -5608361;

	t0 = (((x1%x2)==x3)|x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	static uint32_t x8 = 24U;
	uint32_t t1 = 92U;

	t1 = (((x5%x6)==x7)|x8);

	if (t1 != 24U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x10 = 12U;
	uint32_t x11 = 23737197U;
	volatile uint64_t x12 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x9%x10)==x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = 1334LL;
	uint64_t x15 = 242469LLU;
	int16_t x16 = INT16_MIN;

	t3 = (((x13%x14)==x15)|x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -1;
	uint16_t x19 = 3560U;
	uint64_t x20 = 231468429141181896LLU;

	t4 = (((x17%x18)==x19)|x20);

	if (t4 != 231468429141181896LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -3;
	int8_t x22 = 2;
	static uint32_t x23 = 3U;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -5049;

	t5 = (((x21%x22)==x23)|x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = -2;

	t6 = (((x25%x26)==x27)|x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 11703U;
	int64_t x30 = INT64_MAX;
	int32_t x31 = -1;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = INT32_MIN;

	t7 = (((x29%x30)==x31)|x32);

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = -5;
	uint16_t x39 = 1423U;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t8 = INT32_MAX;

	t8 = (((x37%x38)==x39)|x40);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = 32809837116918288LL;
	int64_t x43 = INT64_MIN;
	static int32_t x44 = -7317661;
	static int32_t t9 = -966;

	t9 = (((x41%x42)==x43)|x44);

	if (t9 != -7317661) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (((x45%x46)==x47)|x48);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = UINT16_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	static int64_t x51 = INT64_MIN;
	uint16_t x52 = 21U;
	int32_t t11 = -1;

	t11 = (((x49%x50)==x51)|x52);

	if (t11 != 21) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 35;
	volatile uint16_t x54 = 6754U;
	static int8_t x55 = -13;
	int16_t x56 = INT16_MIN;
	int32_t t12 = 296862;

	t12 = (((x53%x54)==x55)|x56);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -123479;
	uint32_t x58 = 98121192U;
	int64_t x60 = INT64_MAX;
	int64_t t13 = INT64_MAX;

	t13 = (((x57%x58)==x59)|x60);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 5U;
	volatile uint16_t x63 = 13U;
	int64_t x64 = 1362792610LL;
	volatile int64_t t14 = 1970208LL;

	t14 = (((x61%x62)==x63)|x64);

	if (t14 != 1362792610LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -6;
	int16_t x66 = -1;
	int32_t x67 = -127687425;
	uint64_t x68 = 186563277LLU;
	static uint64_t t15 = 349214672019016560LLU;

	t15 = (((x65%x66)==x67)|x68);

	if (t15 != 186563277LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	static volatile int8_t x71 = INT8_MIN;
	uint64_t t16 = 6687282546457119LLU;

	t16 = (((x69%x70)==x71)|x72);

	if (t16 != 2621617LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x74 = -1LL;
	static uint8_t x75 = 2U;
	uint32_t x76 = 1010219757U;

	t17 = (((x73%x74)==x75)|x76);

	if (t17 != 1010219757U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	volatile int16_t x79 = -27;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = -1;

	t18 = (((x77%x78)==x79)|x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int16_t x82 = -8;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = (((x81%x82)==x83)|x84);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 110322U;
	uint8_t x90 = 55U;
	static int64_t x91 = INT64_MAX;
	uint16_t x92 = 1957U;
	volatile int32_t t20 = -14342409;

	t20 = (((x89%x90)==x91)|x92);

	if (t20 != 1957) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	static uint64_t x96 = UINT64_MAX;

	t21 = (((x93%x94)==x95)|x96);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = -32;
	uint64_t x98 = 144419407554049LLU;
	static int8_t x99 = -1;
	int16_t x100 = INT16_MIN;
	int32_t t22 = -168154311;

	t22 = (((x97%x98)==x99)|x100);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -87159202847240LL;
	uint8_t x102 = UINT8_MAX;
	static int16_t x103 = INT16_MAX;
	volatile uint8_t x104 = 1U;
	volatile int32_t t23 = -60511836;

	t23 = (((x101%x102)==x103)|x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;

	t24 = (((x109%x110)==x111)|x112);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MIN;
	static int16_t x114 = INT16_MIN;
	int16_t x116 = 39;

	t25 = (((x113%x114)==x115)|x116);

	if (t25 != 39) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	int32_t x120 = -40924870;
	volatile int32_t t26 = -9;

	t26 = (((x117%x118)==x119)|x120);

	if (t26 != -40924870) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 3402U;
	int8_t x122 = -1;
	int32_t x123 = -959;
	static int64_t x124 = INT64_MAX;
	static int64_t t27 = INT64_MAX;

	t27 = (((x121%x122)==x123)|x124);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 39530883U;
	static int32_t x127 = -1;
	static int64_t x128 = INT64_MAX;

	t28 = (((x125%x126)==x127)|x128);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	static int8_t x130 = -1;
	volatile int32_t x131 = INT32_MIN;
	volatile int16_t x132 = 7817;

	t29 = (((x129%x130)==x131)|x132);

	if (t29 != 7817) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x134 = INT8_MIN;
	int64_t x135 = -318946LL;
	static int32_t t30 = 75993;

	t30 = (((x133%x134)==x135)|x136);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -1;
	uint8_t x138 = 10U;
	int32_t x140 = 11349;

	t31 = (((x137%x138)==x139)|x140);

	if (t31 != 11349) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MAX;
	volatile int64_t x142 = -1LL;
	volatile int8_t x143 = -1;
	volatile uint16_t x144 = UINT16_MAX;
	volatile int32_t t32 = -275;

	t32 = (((x141%x142)==x143)|x144);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x147 = INT32_MIN;
	int64_t x148 = -180607355LL;
	int64_t t33 = -6696269087LL;

	t33 = (((x145%x146)==x147)|x148);

	if (t33 != -180607355LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x152 = 19195769LLU;
	uint64_t t34 = 289LLU;

	t34 = (((x149%x150)==x151)|x152);

	if (t34 != 19195769LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -7000101847LL;
	int32_t x154 = INT32_MIN;
	int64_t x156 = 1785328150127329414LL;
	volatile int64_t t35 = 12733110886LL;

	t35 = (((x153%x154)==x155)|x156);

	if (t35 != 1785328150127329414LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MAX;
	uint8_t x158 = 2U;
	static uint32_t x160 = 1879U;
	volatile uint32_t t36 = 1715108U;

	t36 = (((x157%x158)==x159)|x160);

	if (t36 != 1879U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x162 = 462041499856817LLU;
	int8_t x164 = INT8_MAX;

	t37 = (((x161%x162)==x163)|x164);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 28611U;
	int16_t x166 = INT16_MAX;
	uint8_t x168 = 5U;
	static volatile int32_t t38 = 71;

	t38 = (((x165%x166)==x167)|x168);

	if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 954283551U;
	uint16_t x171 = 10U;
	int8_t x172 = 10;
	static volatile int32_t t39 = 962258;

	t39 = (((x169%x170)==x171)|x172);

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	volatile int8_t x174 = -1;
	volatile int32_t x175 = 82;
	static int16_t x176 = -1;
	volatile int32_t t40 = 11711;

	t40 = (((x173%x174)==x175)|x176);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -35176LL;
	int8_t x178 = 1;
	static int32_t x179 = -1;
	int16_t x180 = INT16_MAX;
	static int32_t t41 = 73689576;

	t41 = (((x177%x178)==x179)|x180);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = -1748112;
	static int16_t x183 = 31;
	uint32_t x184 = UINT32_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (((x181%x182)==x183)|x184);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	int32_t t43 = 0;

	t43 = (((x185%x186)==x187)|x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	static volatile int32_t t44 = 1039348891;

	t44 = (((x189%x190)==x191)|x192);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -2732;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t45 = INT64_MIN;

	t45 = (((x193%x194)==x195)|x196);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = 273662930;
	volatile int64_t x199 = 322066LL;
	int64_t t46 = INT64_MIN;

	t46 = (((x197%x198)==x199)|x200);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	volatile int8_t x202 = -3;
	uint32_t x203 = UINT32_MAX;
	int64_t x204 = 1881217LL;
	int64_t t47 = -3673796LL;

	t47 = (((x201%x202)==x203)|x204);

	if (t47 != 1881217LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 3547243540808LLU;
	static int64_t x208 = -1LL;
	int64_t t48 = 689337657139LL;

	t48 = (((x205%x206)==x207)|x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = -18;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x209%x210)==x211)|x212);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MAX;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t50 = -3125085;

	t50 = (((x213%x214)==x215)|x216);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	int32_t x218 = -1;
	int8_t x219 = 1;
	int32_t t51 = 169879678;

	t51 = (((x217%x218)==x219)|x220);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 20U;
	uint8_t x222 = 20U;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t52 = -1345;

	t52 = (((x221%x222)==x223)|x224);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x226 = INT32_MIN;
	uint64_t x227 = 4050237LLU;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (((x225%x226)==x227)|x228);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	static int32_t x230 = -38115;
	int32_t t54 = -1;

	t54 = (((x229%x230)==x231)|x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = 91LL;
	int64_t x235 = -8646951569676LL;
	volatile uint64_t x236 = 74229904827469859LLU;

	t55 = (((x233%x234)==x235)|x236);

	if (t55 != 74229904827469859LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x237 = -1;
	int64_t x238 = 2531265030066LL;
	int64_t x239 = -1242160288943LL;
	volatile int32_t x240 = INT32_MIN;

	t56 = (((x237%x238)==x239)|x240);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = INT64_MIN;
	static int64_t x242 = -1LL;
	int8_t x243 = 13;
	int16_t x244 = INT16_MIN;
	int32_t t57 = -1500059;

	t57 = (((x241%x242)==x243)|x244);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x245 = INT8_MAX;
	int16_t x246 = 1305;
	int32_t x248 = INT32_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = (((x245%x246)==x247)|x248);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 104U;
	int32_t x250 = -7;
	uint32_t x251 = 476U;
	uint32_t x252 = UINT32_MAX;
	static uint32_t t59 = UINT32_MAX;

	t59 = (((x249%x250)==x251)|x252);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	uint32_t x255 = 1576U;
	int64_t x256 = -1LL;

	t60 = (((x253%x254)==x255)|x256);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 150042U;
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;
	volatile int32_t t61 = -89196497;

	t61 = (((x257%x258)==x259)|x260);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint16_t x262 = 1U;
	volatile int32_t x263 = INT32_MAX;
	static volatile int64_t t62 = INT64_MAX;

	t62 = (((x261%x262)==x263)|x264);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = INT8_MAX;
	uint8_t x266 = 6U;
	int16_t x267 = INT16_MAX;
	int32_t t63 = 3;

	t63 = (((x265%x266)==x267)|x268);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -95281LL;
	volatile int64_t x271 = -1LL;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t64 = -735715;

	t64 = (((x269%x270)==x271)|x272);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = UINT16_MAX;
	static int64_t x274 = INT64_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	int16_t x276 = -1;
	static volatile int32_t t65 = 656;

	t65 = (((x273%x274)==x275)|x276);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	int32_t x279 = INT32_MAX;
	int64_t x280 = 1049LL;
	static int64_t t66 = -3027009135LL;

	t66 = (((x277%x278)==x279)|x280);

	if (t66 != 1049LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x282 = INT16_MIN;
	static int32_t x283 = INT32_MIN;
	static volatile int16_t x284 = INT16_MIN;
	int32_t t67 = 109;

	t67 = (((x281%x282)==x283)|x284);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	static int64_t x286 = -158418LL;
	uint64_t x288 = 21439LLU;
	volatile uint64_t t68 = 11359095LLU;

	t68 = (((x285%x286)==x287)|x288);

	if (t68 != 21439LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MAX;
	uint64_t x291 = 86333338841LLU;
	int8_t x292 = INT8_MIN;
	static int32_t t69 = 24;

	t69 = (((x289%x290)==x291)|x292);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = 92U;
	volatile uint64_t x295 = 45193LLU;
	int8_t x296 = -54;
	int32_t t70 = -16172978;

	t70 = (((x293%x294)==x295)|x296);

	if (t70 != -54) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	uint32_t x298 = 85U;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MAX;
	int32_t t71 = -72554;

	t71 = (((x297%x298)==x299)|x300);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = -1LL;
	volatile int16_t x303 = INT16_MAX;
	volatile int16_t x304 = 104;
	int32_t t72 = -17483;

	t72 = (((x301%x302)==x303)|x304);

	if (t72 != 104) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -1;
	int32_t x306 = -75;
	volatile uint16_t x307 = UINT16_MAX;
	static uint8_t x308 = UINT8_MAX;
	int32_t t73 = -3269100;

	t73 = (((x305%x306)==x307)|x308);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = -32;
	int32_t x310 = -53;
	int32_t x311 = 11793776;
	static int64_t x312 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

	t74 = (((x309%x310)==x311)|x312);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x313 = 28U;
	int16_t x314 = INT16_MIN;
	uint64_t t75 = 1766510LLU;

	t75 = (((x313%x314)==x315)|x316);

	if (t75 != 7329LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -1;
	volatile int64_t x320 = INT64_MIN;
	int64_t t76 = INT64_MIN;

	t76 = (((x317%x318)==x319)|x320);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	int64_t x324 = 210074937149630LL;
	volatile int64_t t77 = -169203100421475228LL;

	t77 = (((x321%x322)==x323)|x324);

	if (t77 != 210074937149630LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 1U;
	int8_t x326 = INT8_MIN;
	int8_t x328 = INT8_MIN;

	t78 = (((x325%x326)==x327)|x328);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x329 = 56U;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 80U;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t79 = -8;

	t79 = (((x329%x330)==x331)|x332);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x334 = 27663630U;
	uint32_t x335 = 1028944U;
	static uint8_t x336 = 1U;
	volatile int32_t t80 = 140530;

	t80 = (((x333%x334)==x335)|x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 11878U;
	int16_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = -1;
	int32_t t81 = -59;

	t81 = (((x337%x338)==x339)|x340);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x342 = UINT16_MAX;
	volatile int16_t x344 = INT16_MIN;

	t82 = (((x341%x342)==x343)|x344);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = 155818917551090LL;
	int16_t x346 = -1;
	static int16_t x347 = -1;
	int32_t x348 = 12428739;
	volatile int32_t t83 = -53899715;

	t83 = (((x345%x346)==x347)|x348);

	if (t83 != 12428739) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -88;
	int64_t x350 = INT64_MAX;
	static int32_t x352 = INT32_MIN;
	static volatile int32_t t84 = INT32_MIN;

	t84 = (((x349%x350)==x351)|x352);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = UINT16_MAX;
	static uint8_t x354 = 7U;
	uint8_t x356 = UINT8_MAX;
	static int32_t t85 = 1;

	t85 = (((x353%x354)==x355)|x356);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x357 = -18;
	static int8_t x358 = INT8_MIN;
	uint32_t x359 = 57968825U;
	static volatile uint64_t x360 = 56263899LLU;
	uint64_t t86 = 7222496359LLU;

	t86 = (((x357%x358)==x359)|x360);

	if (t86 != 56263899LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 3U;
	uint32_t t87 = 1U;

	t87 = (((x361%x362)==x363)|x364);

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;

	t88 = (((x365%x366)==x367)|x368);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = 1437969;
	int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;

	t89 = (((x369%x370)==x371)|x372);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -637823138;
	static volatile int16_t x374 = INT16_MIN;
	int32_t x375 = 152;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t90 = 0;

	t90 = (((x373%x374)==x375)|x376);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x377 = 198;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = INT32_MAX;
	int64_t x380 = INT64_MIN;

	t91 = (((x377%x378)==x379)|x380);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x384 = INT32_MAX;
	int32_t t92 = INT32_MAX;

	t92 = (((x381%x382)==x383)|x384);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x387 = 7;
	volatile int8_t x388 = 0;
	static volatile int32_t t93 = 1130625;

	t93 = (((x385%x386)==x387)|x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = 12U;
	uint32_t x390 = UINT32_MAX;
	static int16_t x391 = 106;
	int64_t x392 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (((x389%x390)==x391)|x392);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	int16_t x395 = 1692;
	int32_t x396 = 9978;
	volatile int32_t t95 = 66;

	t95 = (((x393%x394)==x395)|x396);

	if (t95 != 9978) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -1;
	int16_t x398 = -1;
	static int8_t x399 = -1;
	static uint32_t x400 = 2U;
	uint32_t t96 = 30004U;

	t96 = (((x397%x398)==x399)|x400);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MIN;
	volatile int64_t x402 = -71555371663325305LL;
	int8_t x403 = INT8_MIN;
	volatile int32_t x404 = INT32_MIN;
	static volatile int32_t t97 = INT32_MIN;

	t97 = (((x401%x402)==x403)|x404);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = 1LL;
	static volatile int16_t x407 = INT16_MAX;
	uint8_t x408 = 1U;
	volatile int32_t t98 = 15296;

	t98 = (((x405%x406)==x407)|x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MAX;
	uint8_t x411 = 3U;
	static volatile uint32_t x412 = UINT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (((x409%x410)==x411)|x412);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

