#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x14 = -1;
int64_t x24 = 20LL;
volatile int64_t t7 = 29824183229LL;
static int64_t x33 = -28058994094333LL;
volatile int16_t x55 = INT16_MIN;
int32_t x64 = INT32_MIN;
int8_t x65 = INT8_MIN;
static int8_t x67 = INT8_MAX;
volatile int64_t x102 = INT64_MAX;
int64_t x108 = INT64_MIN;
int16_t x112 = 1;
volatile uint64_t t23 = UINT64_MAX;
static volatile int64_t t24 = -334LL;
int16_t x131 = INT16_MIN;
int32_t x135 = -1;
static uint64_t x136 = 1495094575581LLU;
int64_t x137 = -1655312093624LL;
int16_t x151 = -1;
int32_t x152 = INT32_MAX;
static int64_t x163 = INT64_MAX;
int32_t x176 = -1;
static volatile uint64_t x181 = 13963602LLU;
int32_t x184 = -1;
uint16_t x196 = 4108U;
volatile uint8_t x201 = 66U;
static uint8_t x206 = 1U;
static volatile uint8_t x207 = 26U;
int16_t x209 = INT16_MAX;
int64_t x213 = 28541187154904LL;
int8_t x214 = INT8_MAX;
int16_t x218 = INT16_MIN;
volatile int32_t t46 = -67372;
int64_t t48 = -13671039LL;
int32_t x242 = INT32_MIN;
volatile int32_t x245 = INT32_MAX;
int32_t x250 = INT32_MAX;
volatile int32_t t53 = -20731;
volatile int64_t x262 = -1LL;
int64_t x281 = 369911730176LL;
int32_t x283 = -1;
int8_t x285 = 3;
static uint16_t x287 = 453U;
int64_t x291 = INT64_MIN;
volatile int64_t t62 = -216LL;
volatile int64_t x303 = 1LL;
static int64_t x305 = -1220083LL;
volatile int8_t x310 = INT8_MIN;
int16_t x330 = INT16_MIN;
static uint64_t t74 = 9831426116818LLU;
volatile int16_t x346 = 1832;
uint32_t x354 = 109822811U;
int16_t x363 = -2;
volatile int64_t x364 = INT64_MIN;
static volatile int32_t t80 = 1;
uint64_t t81 = 1349LLU;
volatile int8_t x373 = INT8_MIN;
int64_t x376 = 1LL;
volatile int64_t t84 = -1286010207868LL;
int8_t x389 = INT8_MIN;
int32_t x391 = -1;
int16_t x403 = INT16_MAX;
volatile int64_t t89 = 27768686456880LL;
uint64_t x409 = 25048LLU;
volatile int64_t x411 = -1LL;
int8_t x414 = INT8_MIN;
int64_t t92 = 888LL;
uint64_t x420 = 5LLU;
volatile int32_t x424 = -597988413;
volatile int64_t t94 = 1921LL;
int8_t x429 = 11;
volatile uint64_t t95 = 9LLU;
int8_t x433 = INT8_MIN;
uint8_t x439 = UINT8_MAX;
volatile uint64_t t98 = 3856046LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint64_t x2 = 3804086LLU;
	uint64_t x3 = UINT64_MAX;
	static int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 9LLU;

	t0 = (x1|((x2+x3)&x4));

	if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 6864962;
	uint64_t x6 = 61515LLU;
	volatile uint8_t x7 = 2U;
	int32_t x8 = 0;
	volatile uint64_t t1 = 53205LLU;

	t1 = (x5|((x6+x7)&x8));

	if (t1 != 6864962LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 2LL;
	static uint16_t x10 = 13U;
	volatile int8_t x11 = -1;
	int16_t x12 = -1;
	int64_t t2 = -1571554LL;

	t2 = (x9|((x10+x11)&x12));

	if (t2 != 14LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 370413;
	int64_t x15 = 136247349875120706LL;
	uint32_t x16 = 130148U;
	int64_t t3 = -426LL;

	t3 = (x13|((x14+x15)&x16));

	if (t3 != 376557LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = 70U;
	volatile int32_t t4 = -25;

	t4 = (x17|((x18+x19)&x20));

	if (t4 != 70) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 18519571U;
	volatile int32_t x22 = INT32_MAX;
	volatile uint64_t x23 = UINT64_MAX;
	volatile uint64_t t5 = 257458273446343LLU;

	t5 = (x21|((x22+x23)&x24));

	if (t5 != 18519575LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -23536;
	static uint8_t x26 = 2U;
	uint64_t x27 = 20353220042977882LLU;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t6 = 419045932500136LLU;

	t6 = (x25|((x26+x27)&x28));

	if (t6 != 18446744073709549148LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -509;

	t7 = (x29|((x30+x31)&x32));

	if (t7 != -9223372034707292669LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = -1360437;
	static int64_t x35 = INT64_MAX;
	static int32_t x36 = -1778;
	static volatile int64_t t8 = -151451135LL;

	t8 = (x33|((x34+x35)&x36));

	if (t8 != -245LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = 64782LLU;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -6712764140216940LL;
	static uint64_t t9 = 7LLU;

	t9 = (x49|((x50+x51)&x52));

	if (t9 != 18440031308261367044LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = -1LL;
	int16_t x54 = 1;
	uint64_t x56 = 508994352588LLU;
	uint64_t t10 = UINT64_MAX;

	t10 = (x53|((x54+x55)&x56));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	volatile int32_t t11 = 14;

	t11 = (x57|((x58+x59)&x60));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1051621025LL;
	static int32_t x62 = INT32_MIN;
	uint64_t x63 = 3LLU;
	static volatile uint64_t t12 = 4207253769470LLU;

	t12 = (x61|((x62+x63)&x64));

	if (t12 != 18446744072657930591LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MAX;
	uint16_t x68 = 15996U;
	volatile int32_t t13 = 50276;

	t13 = (x65|((x66+x67)&x68));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 2934178213496326271LL;
	int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	int32_t x76 = -1;
	int64_t t14 = -15717524LL;

	t14 = (x73|((x74+x75)&x76));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 60U;
	uint32_t x80 = UINT32_MAX;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x77|((x78+x79)&x80));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 121LLU;
	uint64_t x82 = UINT64_MAX;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t16 = 21223846751471362LLU;

	t16 = (x81|((x82+x83)&x84));

	if (t16 != 9223372036854775929LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x89 = 126U;
	int32_t x90 = INT32_MAX;
	volatile int32_t x91 = INT32_MIN;
	static uint16_t x92 = 6839U;
	volatile int32_t t17 = -1;

	t17 = (x89|((x90+x91)&x92));

	if (t17 != 6911) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x93 = INT16_MIN;
	uint8_t x94 = 6U;
	static int16_t x95 = INT16_MAX;
	static volatile uint16_t x96 = 8638U;
	int32_t t18 = -1299;

	t18 = (x93|((x94+x95)&x96));

	if (t18 != -32764) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = 11;
	int8_t x98 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = INT16_MAX;
	int32_t t19 = -97;

	t19 = (x97|((x98+x99)&x100));

	if (t19 != 32639) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x101 = 49479175672041LL;
	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = -1;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x101|((x102+x103)&x104));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = 6;
	uint16_t x106 = 18701U;
	int16_t x107 = 2;
	volatile int64_t t21 = -85932260111976LL;

	t21 = (x105|((x106+x107)&x108));

	if (t21 != 6LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	int64_t x111 = 189LL;
	int64_t t22 = -352684LL;

	t22 = (x109|((x110+x111)&x112));

	if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MAX;
	int64_t x120 = INT64_MIN;

	t23 = (x117|((x118+x119)&x120));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x121 = INT64_MIN;
	int64_t x122 = -1LL;
	uint32_t x123 = 359970890U;
	int8_t x124 = -4;

	t24 = (x121|((x122+x123)&x124));

	if (t24 != -9223372036494804920LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x125 = UINT32_MAX;
	int16_t x126 = INT16_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile uint64_t t25 = 1LLU;

	t25 = (x125|((x126+x127)&x128));

	if (t25 != 4294967295LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MAX;
	int64_t x132 = -1LL;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x129|((x130+x131)&x132));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 13711903U;
	int8_t x134 = INT8_MIN;
	uint64_t t27 = 56674LLU;

	t27 = (x133|((x134+x135)&x136));

	if (t27 != 1495098850143LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x138 = -1;
	uint32_t x139 = 83090U;
	static int32_t x140 = INT32_MAX;
	int64_t t28 = -1LL;

	t28 = (x137|((x138+x139)&x140));

	if (t28 != -1655312093479LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MAX;
	uint64_t x142 = 1432997LLU;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MAX;
	uint64_t t29 = 1LLU;

	t29 = (x141|((x142+x143)&x144));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x145 = 12433U;
	int64_t x146 = 632634668602612757LL;
	int64_t x147 = INT64_MIN;
	static volatile uint32_t x148 = 1615176U;
	int64_t t30 = -1496107214404LL;

	t30 = (x145|((x146+x147)&x148));

	if (t30 != 46225LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = 9;
	volatile uint16_t x150 = 1U;
	volatile int32_t t31 = 101549671;

	t31 = (x149|((x150+x151)&x152));

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t32 = 0LL;

	t32 = (x157|((x158+x159)&x160));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	volatile int16_t x164 = INT16_MIN;
	int64_t t33 = -885519744999616LL;

	t33 = (x161|((x162+x163)&x164));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = -1;
	static int32_t x171 = 761826;
	uint8_t x172 = 1U;
	volatile int32_t t34 = 3;

	t34 = (x169|((x170+x171)&x172));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = 30348570699756731LL;
	uint64_t x174 = UINT64_MAX;
	static volatile uint16_t x175 = 34U;
	volatile uint64_t t35 = 446555720LLU;

	t35 = (x173|((x174+x175)&x176));

	if (t35 != 30348570699756731LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x182 = 1U;
	int16_t x183 = -117;
	volatile uint64_t t36 = 115272LLU;

	t36 = (x181|((x182+x183)&x184));

	if (t36 != 4294967262LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -4240570442885LL;
	int16_t x186 = INT16_MIN;
	volatile uint16_t x187 = 2108U;
	uint8_t x188 = 1U;
	int64_t t37 = 7767397661LL;

	t37 = (x185|((x186+x187)&x188));

	if (t37 != -4240570442885LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x189 = -1;
	static uint32_t x190 = UINT32_MAX;
	uint64_t x191 = 336134351072LLU;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x189|((x190+x191)&x192));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x193 = UINT32_MAX;
	static int64_t x194 = INT64_MIN;
	int8_t x195 = 0;
	volatile int64_t t39 = 149LL;

	t39 = (x193|((x194+x195)&x196));

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x197 = 35;
	static int16_t x198 = 35;
	int32_t x199 = -39740;
	int32_t x200 = -37172555;
	int32_t t40 = 102;

	t40 = (x197|((x198+x199)&x200));

	if (t40 != -37207897) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x202 = 25;
	static int8_t x203 = INT8_MAX;
	uint16_t x204 = 3U;
	volatile int32_t t41 = 1036090;

	t41 = (x201|((x202+x203)&x204));

	if (t41 != 66) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = UINT32_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x205|((x206+x207)&x208));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x210 = INT32_MIN;
	uint64_t x211 = 117075589895570LLU;
	int8_t x212 = -1;
	uint64_t t43 = 3839996LLU;

	t43 = (x209|((x210+x211)&x212));

	if (t43 != 117073442439167LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x215 = INT32_MIN;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t44 = -1918831488LL;

	t44 = (x213|((x214+x215)&x216));

	if (t44 != -9223343495667620904LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MAX;
	int32_t x219 = 198;
	static int16_t x220 = -23;
	static volatile int64_t t45 = -1564439LL;

	t45 = (x217|((x218+x219)&x220));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = 9;
	int8_t x223 = 9;
	static int16_t x224 = INT16_MIN;

	t46 = (x221|((x222+x223)&x224));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = INT16_MAX;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 22438U;
	int64_t x228 = -1LL;
	volatile int64_t t47 = 43990578436503LL;

	t47 = (x225|((x226+x227)&x228));

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -3LL;
	int16_t x230 = 90;
	uint16_t x231 = UINT16_MAX;
	static uint16_t x232 = 4031U;

	t48 = (x229|((x230+x231)&x232));

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = -70825847;
	int16_t x234 = 1143;
	volatile int8_t x235 = -3;
	uint8_t x236 = 1U;
	int32_t t49 = 3;

	t49 = (x233|((x234+x235)&x236));

	if (t49 != -70825847) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	static int64_t x243 = 21628118153873LL;
	uint32_t x244 = UINT32_MAX;
	volatile int64_t t50 = -2LL;

	t50 = (x241|((x242+x243)&x244));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x246 = 20LLU;
	uint64_t x247 = 56975736609LLU;
	int32_t x248 = INT32_MIN;
	static uint64_t t51 = 1050936999290LLU;

	t51 = (x245|((x246+x247)&x248));

	if (t51 != 57982058495LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x249 = -5612LL;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = 952LLU;
	volatile uint64_t t52 = 317451LLU;

	t52 = (x249|((x250+x251)&x252));

	if (t52 != 18446744073709546300LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 4U;
	static volatile int32_t x254 = -8205373;
	uint8_t x255 = UINT8_MAX;
	volatile int8_t x256 = INT8_MIN;

	t53 = (x253|((x254+x255)&x256));

	if (t53 != -8205180) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 0U;
	int8_t x258 = -1;
	int8_t x259 = 0;
	int16_t x260 = INT16_MAX;
	volatile int32_t t54 = 0;

	t54 = (x257|((x258+x259)&x260));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x261 = 11918111U;
	volatile int32_t x263 = 14794853;
	uint64_t x264 = 304090947745322LLU;
	static uint64_t t55 = 8010183987LLU;

	t55 = (x261|((x262+x263)&x264));

	if (t55 != 16112447LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	volatile uint16_t x267 = 119U;
	int32_t x268 = -1;
	int64_t t56 = -99104LL;

	t56 = (x265|((x266+x267)&x268));

	if (t56 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x269 = 292235U;
	int16_t x270 = 760;
	uint64_t x271 = 1109LLU;
	uint32_t x272 = 2295126U;
	volatile uint64_t t57 = 6950LLU;

	t57 = (x269|((x270+x271)&x272));

	if (t57 != 292303LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = INT64_MIN;
	static uint32_t x274 = UINT32_MAX;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	static int64_t t58 = 5LL;

	t58 = (x273|((x274+x275)&x276));

	if (t58 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x277 = 35061922LLU;
	uint64_t x278 = 124067276679LLU;
	static int64_t x279 = INT64_MIN;
	int8_t x280 = 25;
	uint64_t t59 = 41362705375047LLU;

	t59 = (x277|((x278+x279)&x280));

	if (t59 != 35061923LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x282 = -6149;
	uint32_t x284 = UINT32_MAX;
	int64_t t60 = 3795448591102451LL;

	t60 = (x281|((x282+x283)&x284));

	if (t60 != 373662152698LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x286 = INT8_MAX;
	volatile int32_t x288 = -1;
	volatile int32_t t61 = -67;

	t61 = (x285|((x286+x287)&x288));

	if (t61 != 583) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -15954;
	volatile uint32_t x290 = 453288177U;
	static int32_t x292 = INT32_MIN;

	t62 = (x289|((x290+x291)&x292));

	if (t62 != -15954LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = 0;
	int64_t x296 = INT64_MAX;
	volatile uint64_t t63 = 27412629671629LLU;

	t63 = (x293|((x294+x295)&x296));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = 128030;
	volatile int32_t x302 = INT32_MAX;
	int32_t x304 = -1;
	volatile int64_t t64 = 5723331089224LL;

	t64 = (x301|((x302+x303)&x304));

	if (t64 != 2147611678LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x306 = 246396771909LLU;
	volatile uint64_t x307 = 6393300956470LLU;
	int16_t x308 = INT16_MAX;
	uint64_t t65 = 2261928LLU;

	t65 = (x305|((x306+x307)&x308));

	if (t65 != 18446744073708335999LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x309 = -1;
	int32_t x311 = -1;
	static uint8_t x312 = 11U;
	volatile int32_t t66 = 55;

	t66 = (x309|((x310+x311)&x312));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = 222542278895900LL;
	uint32_t x314 = 10940790U;
	static volatile int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	static int64_t t67 = -34947380250251012LL;

	t67 = (x313|((x314+x315)&x316));

	if (t67 != -9223149494567196388LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = 24;
	int32_t x319 = -1;
	static int64_t x320 = INT64_MIN;
	static int64_t t68 = 103063963LL;

	t68 = (x317|((x318+x319)&x320));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MAX;
	int32_t x323 = 22;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t69 = 1138606U;

	t69 = (x321|((x322+x323)&x324));

	if (t69 != 2147483797U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = INT16_MAX;
	uint8_t x326 = 0U;
	static uint16_t x327 = 0U;
	volatile int64_t x328 = -67341741608734LL;
	int64_t t70 = 268827938297415895LL;

	t70 = (x325|((x326+x327)&x328));

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -4;
	uint16_t x331 = 1445U;
	int32_t x332 = -1;
	int32_t t71 = 210;

	t71 = (x329|((x330+x331)&x332));

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x333 = INT16_MAX;
	static uint16_t x334 = 2U;
	int64_t x335 = -1LL;
	volatile int64_t x336 = INT64_MAX;
	int64_t t72 = 16LL;

	t72 = (x333|((x334+x335)&x336));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = 3;
	static uint8_t x339 = UINT8_MAX;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t73 = 621999LLU;

	t73 = (x337|((x338+x339)&x340));

	if (t73 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 126836250LLU;
	int32_t x343 = 124;
	int32_t x344 = -8;

	t74 = (x341|((x342+x343)&x344));

	if (t74 != 18446744073709543056LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x345 = UINT16_MAX;
	int8_t x347 = -6;
	uint8_t x348 = 50U;
	int32_t t75 = -37;

	t75 = (x345|((x346+x347)&x348));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = -1;
	volatile uint8_t x351 = 1U;
	volatile int64_t x352 = INT64_MIN;
	static int64_t t76 = 207923636435237640LL;

	t76 = (x349|((x350+x351)&x352));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MAX;
	int8_t x355 = 57;
	volatile int8_t x356 = -1;
	uint32_t t77 = 22837U;

	t77 = (x353|((x354+x355)&x356));

	if (t77 != 109822975U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x357 = UINT16_MAX;
	volatile int16_t x358 = -193;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t78 = 0;

	t78 = (x357|((x358+x359)&x360));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x361 = 2;
	int64_t x362 = 79897607625946447LL;
	int64_t t79 = 726LL;

	t79 = (x361|((x362+x363)&x364));

	if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	static volatile int16_t x367 = -1;
	int16_t x368 = INT16_MIN;

	t80 = (x365|((x366+x367)&x368));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	uint64_t x372 = 267629554694LLU;

	t81 = (x369|((x370+x371)&x372));

	if (t81 != 18446744073709546502LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x374 = -1LL;
	static uint32_t x375 = 128370271U;
	volatile int64_t t82 = 191LL;

	t82 = (x373|((x374+x375)&x376));

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = 5;
	int8_t x378 = 0;
	int8_t x379 = INT8_MAX;
	uint16_t x380 = 8723U;
	int32_t t83 = -7565;

	t83 = (x377|((x378+x379)&x380));

	if (t83 != 23) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = -46;
	static int64_t x382 = -1LL;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MAX;

	t84 = (x381|((x382+x383)&x384));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 12U;
	static uint32_t x386 = 148817U;
	uint64_t x387 = 34900279822221LLU;
	int64_t x388 = INT64_MIN;
	static uint64_t t85 = 3LLU;

	t85 = (x385|((x386+x387)&x388));

	if (t85 != 12LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x390 = 1;
	uint16_t x392 = 42U;
	static volatile int32_t t86 = 3670;

	t86 = (x389|((x390+x391)&x392));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x393 = INT8_MIN;
	uint64_t x394 = 1027LLU;
	uint16_t x395 = 1U;
	uint16_t x396 = 10751U;
	volatile uint64_t t87 = 67LLU;

	t87 = (x393|((x394+x395)&x396));

	if (t87 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MAX;
	int8_t x400 = 1;
	int64_t t88 = -105497703791284176LL;

	t88 = (x397|((x398+x399)&x400));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x401 = 8262064U;
	int64_t x402 = INT64_MIN;
	static int8_t x404 = INT8_MAX;

	t89 = (x401|((x402+x403)&x404));

	if (t89 != 8262143LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x405 = INT8_MIN;
	static int32_t x406 = INT32_MIN;
	int8_t x407 = 3;
	volatile int8_t x408 = -1;
	int32_t t90 = 191;

	t90 = (x405|((x406+x407)&x408));

	if (t90 != -125) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x410 = -7;
	uint64_t x412 = 65211243LLU;
	volatile uint64_t t91 = 30460LLU;

	t91 = (x409|((x410+x411)&x412));

	if (t91 != 65235960LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MAX;
	int8_t x415 = -5;
	int8_t x416 = -52;

	t92 = (x413|((x414+x415)&x416));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = -1;
	int32_t x418 = 806;
	volatile int16_t x419 = INT16_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x417|((x418+x419)&x420));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = INT64_MIN;
	uint16_t x422 = 246U;
	int64_t x423 = -1LL;

	t94 = (x421|((x422+x423)&x424));

	if (t94 != -9223372036854775615LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x430 = UINT32_MAX;
	int16_t x431 = 5174;
	static uint64_t x432 = UINT64_MAX;

	t95 = (x429|((x430+x431)&x432));

	if (t95 != 5183LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x434 = -2886186326065LL;
	static int8_t x435 = INT8_MAX;
	uint32_t x436 = 10960U;
	static volatile int64_t t96 = 4179574998LL;

	t96 = (x433|((x434+x435)&x436));

	if (t96 != -64LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x437 = INT32_MAX;
	volatile uint8_t x438 = 0U;
	static uint64_t x440 = UINT64_MAX;
	volatile uint64_t t97 = 4209198LLU;

	t97 = (x437|((x438+x439)&x440));

	if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 71135666754LLU;
	static uint16_t x442 = 1311U;
	static volatile int8_t x443 = INT8_MIN;
	volatile int16_t x444 = INT16_MIN;

	t98 = (x441|((x442+x443)&x444));

	if (t98 != 71135666754LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x445 = 4;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = -1LL;
	int64_t x448 = INT64_MIN;
	volatile int64_t t99 = -13LL;

	t99 = (x445|((x446+x447)&x448));

	if (t99 != 4LL) { NG(); } else { ; }
	
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

