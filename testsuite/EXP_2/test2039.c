#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
uint64_t x12 = 4055510549609119574LLU;
int64_t t3 = -970222329656206LL;
volatile int16_t x22 = -12485;
uint32_t x24 = 125378U;
uint32_t t5 = 321047U;
uint64_t t6 = 9547679719441LLU;
uint64_t x32 = 0LLU;
int32_t x48 = 18;
static int8_t x50 = INT8_MAX;
uint32_t x60 = 6293U;
int64_t x64 = -1LL;
volatile int64_t t13 = 0LL;
int32_t x65 = 476158;
int8_t x68 = 27;
volatile int8_t x69 = 24;
int32_t x74 = -1;
int32_t x76 = INT32_MIN;
static volatile int64_t t17 = -320128848585026329LL;
int16_t x87 = INT16_MIN;
volatile int64_t t19 = 10478749998461053LL;
uint32_t x95 = 1576U;
volatile int32_t x112 = INT32_MIN;
int16_t x114 = -1;
uint64_t x118 = 357LLU;
int64_t x119 = 371533130LL;
static volatile int32_t t27 = -453532;
static int32_t x126 = INT32_MIN;
volatile uint64_t x127 = 467482LLU;
uint64_t t28 = 173982650894084LLU;
volatile uint32_t x130 = 490661U;
int32_t x131 = -1;
int64_t t29 = -24363885264495231LL;
int64_t t30 = INT64_MIN;
int8_t x139 = INT8_MAX;
uint64_t x141 = 14LLU;
uint64_t t32 = 133398878944LLU;
int8_t x153 = INT8_MIN;
static uint32_t t34 = 1U;
uint32_t x165 = UINT32_MAX;
uint16_t x179 = 102U;
int16_t x180 = -56;
static int16_t x182 = INT16_MIN;
volatile int64_t t40 = -110LL;
int16_t x191 = INT16_MIN;
int64_t x196 = INT64_MIN;
volatile int64_t t42 = 12LL;
volatile int64_t t43 = -1871425LL;
int64_t x205 = 2LL;
static volatile int64_t x207 = -1LL;
int16_t x208 = 1;
int32_t x211 = INT32_MAX;
int64_t x216 = -1LL;
int32_t x223 = INT32_MAX;
int16_t x224 = INT16_MIN;
uint32_t x228 = 188486U;
uint32_t t49 = 1403195U;
uint16_t x234 = 3U;
uint64_t x235 = UINT64_MAX;
int16_t x240 = INT16_MAX;
uint32_t x242 = 29944U;
uint32_t t52 = 0U;
volatile uint8_t x247 = 95U;
volatile uint8_t x258 = 5U;
int32_t x259 = INT32_MIN;
volatile uint8_t x260 = 11U;
volatile uint16_t x261 = UINT16_MAX;
static volatile int32_t x262 = INT32_MIN;
volatile int64_t t56 = INT64_MIN;
static int16_t x274 = INT16_MAX;
int32_t x275 = INT32_MAX;
static int16_t x276 = INT16_MIN;
volatile int32_t t59 = 123458;
int32_t x279 = INT32_MIN;
static int32_t x284 = INT32_MIN;
int64_t x285 = -1037LL;
int64_t x287 = -3344452LL;
int8_t x288 = -25;
volatile uint16_t x294 = 7889U;
uint32_t x298 = UINT32_MAX;
uint16_t x311 = 140U;
uint16_t x313 = UINT16_MAX;
uint16_t x332 = 0U;
uint64_t t73 = 18431LLU;
int64_t x368 = INT64_MAX;
volatile int64_t x377 = -1LL;
volatile int32_t x380 = -1094;
int16_t x381 = INT16_MIN;
int32_t x387 = INT32_MIN;
int64_t t82 = 6577188947433130LL;
int32_t x390 = -1;
int16_t x394 = -1;
int32_t x396 = -1;
volatile int8_t x397 = INT8_MIN;
int8_t x398 = -18;
int16_t x400 = -47;
static uint8_t x403 = 2U;
static int8_t x412 = -1;
static volatile int32_t t88 = -7910883;
static int64_t x417 = -1LL;
volatile int32_t x420 = -1;
int32_t x428 = INT32_MIN;
int8_t x434 = -15;
static uint64_t x442 = UINT64_MAX;
volatile int8_t x443 = INT8_MAX;
uint8_t x444 = 60U;
int32_t x454 = -1;
int32_t t98 = 1;
int32_t x465 = -1;


void f0(void) {
	uint64_t x1 = 42769294102927LLU;
	static int8_t x2 = INT8_MAX;
	int8_t x3 = -9;
	uint64_t x4 = 892842LLU;
	volatile uint64_t t0 = 6479699882204462LLU;

	t0 = ((x1+(x2^x3))&x4);

	if (t0 != 332034LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	static int64_t x8 = -1LL;
	int64_t t1 = -3LL;

	t1 = ((x5+(x6^x7))&x8);

	if (t1 != -65410LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 8188359880324LLU;
	uint64_t t2 = 56404845003864LLU;

	t2 = ((x9+(x10^x11))&x12);

	if (t2 != 1453851169106LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 4U;
	static int32_t x14 = INT32_MIN;
	int8_t x15 = -47;
	int64_t x16 = -1LL;

	t3 = ((x13+(x14^x15))&x16);

	if (t3 != 2147483605LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1158LL;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 50U;
	int64_t x20 = 6166LL;
	volatile int64_t t4 = 7177946877103783LL;

	t4 = ((x17+(x18^x19))&x20);

	if (t4 != 6148LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 60U;
	int32_t x23 = INT32_MAX;

	t5 = ((x21+(x22^x23))&x24);

	if (t5 != 8448U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 103621LLU;
	static uint8_t x26 = 4U;
	static uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;

	t6 = ((x25+(x26^x27))&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 974970;
	uint16_t x30 = 27909U;
	int8_t x31 = -16;
	uint64_t t7 = 32258852576975LLU;

	t7 = ((x29+(x30^x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = 0;
	volatile int16_t x38 = -62;
	int16_t x39 = 8;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = -580406;

	t8 = ((x37+(x38^x39))&x40);

	if (t8 != 202) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	volatile uint8_t x43 = 13U;
	int64_t x44 = 0LL;
	int64_t t9 = -270747387605LL;

	t9 = ((x41+(x42^x43))&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = -12701;
	int32_t x47 = -507618720;
	volatile int32_t t10 = 2;

	t10 = ((x45+(x46^x47))&x48);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 1469320473U;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = INT16_MIN;
	uint32_t t11 = 1U;

	t11 = ((x49+(x50^x51))&x52);

	if (t11 != 1469382656U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	static int8_t x58 = -47;
	volatile int32_t x59 = INT32_MAX;
	static uint32_t t12 = 463127641U;

	t12 = ((x57+(x58^x59))&x60);

	if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = 100U;
	int8_t x62 = INT8_MIN;
	int64_t x63 = 10622LL;

	t13 = ((x61+(x62^x63))&x64);

	if (t13 != -10398LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = 20;
	static uint64_t x67 = 363594937511852LLU;
	static uint64_t t14 = 50709LLU;

	t14 = ((x65+(x66^x67))&x68);

	if (t14 != 18LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x70 = -1;
	int16_t x71 = INT16_MIN;
	static int32_t x72 = -1623;
	int32_t t15 = -182477;

	t15 = ((x69+(x70^x71))&x72);

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -81;
	int64_t x75 = INT64_MIN;
	int64_t t16 = -2777119631994LL;

	t16 = ((x73+(x74^x75))&x76);

	if (t16 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MIN;
	static uint32_t x78 = 180083U;
	static uint16_t x79 = 5621U;
	int64_t x80 = INT64_MIN;

	t17 = ((x77+(x78^x79))&x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = -9;
	static int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	int8_t x84 = 2;
	static int64_t t18 = 1240766711874505LL;

	t18 = ((x81+(x82^x83))&x84);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 40292LL;
	uint32_t x86 = UINT32_MAX;
	int8_t x88 = INT8_MIN;

	t19 = ((x85+(x86^x87))&x88);

	if (t19 != 72960LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = INT64_MAX;
	int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -8340LL;

	t20 = ((x89+(x90^x91))&x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MAX;
	static int16_t x94 = 0;
	static uint32_t x96 = 459566U;
	volatile uint32_t t21 = 0U;

	t21 = ((x93+(x94^x95))&x96);

	if (t21 != 550U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 123U;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 1674094055743LLU;
	int64_t x104 = INT64_MIN;
	static uint64_t t22 = 16584511732LLU;

	t22 = ((x101+(x102^x103))&x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = 25;
	static volatile int64_t x106 = -1LL;
	int8_t x107 = 0;
	int8_t x108 = INT8_MIN;
	static int64_t t23 = -424LL;

	t23 = ((x105+(x106^x107))&x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1389673187759369LL;
	int16_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int64_t t24 = 372LL;

	t24 = ((x109+(x110^x111))&x112);

	if (t24 != -1389675323326464LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MAX;
	uint64_t x115 = 12737797491LLU;
	int8_t x116 = -14;
	uint64_t t25 = 14027631558674LLU;

	t25 = ((x113+(x114^x115))&x116);

	if (t25 != 9223372024116978306LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	int64_t x120 = -1LL;
	static uint64_t t26 = 17269554360LLU;

	t26 = ((x117+(x118^x119))&x120);

	if (t26 != 18446744071933600815LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -2;
	int8_t x122 = -1;
	static volatile int8_t x123 = 1;
	int16_t x124 = INT16_MAX;

	t27 = ((x121+(x122^x123))&x124);

	if (t27 != 32764) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 237074023U;
	int8_t x128 = INT8_MIN;

	t28 = ((x125+(x126^x127))&x128);

	if (t28 != 18446744071799609472LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 7900621787LL;
	volatile int32_t x132 = INT32_MAX;

	t29 = ((x129+(x130^x131))&x132);

	if (t29 != 1457680181LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MIN;

	t30 = ((x133+(x134^x135))&x136);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 9207451LLU;
	volatile int16_t x138 = INT16_MIN;
	volatile uint8_t x140 = 2U;
	volatile uint64_t t31 = 718LLU;

	t31 = ((x137+(x138^x139))&x140);

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = 1LLU;
	static volatile int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;

	t32 = ((x141+(x142^x143))&x144);

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	static volatile uint32_t x148 = 18799U;
	volatile uint32_t t33 = 1005190U;

	t33 = ((x145+(x146^x147))&x148);

	if (t33 != 18688U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x154 = UINT32_MAX;
	uint32_t x155 = 107962U;
	volatile int32_t x156 = INT32_MIN;

	t34 = ((x153+(x154^x155))&x156);

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x161 = 778LLU;
	uint32_t x162 = 318U;
	int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MIN;
	uint64_t t35 = 8636051629467LLU;

	t35 = ((x161+(x162^x163))&x164);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x166 = INT16_MIN;
	static int64_t x167 = -1LL;
	static uint8_t x168 = 81U;
	int64_t t36 = 81036LL;

	t36 = ((x165+(x166^x167))&x168);

	if (t36 != 80LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 1469195U;
	int64_t x170 = -2644949LL;
	volatile uint64_t x171 = UINT64_MAX;
	volatile uint64_t x172 = 4146677422005LLU;
	volatile uint64_t t37 = 32590LLU;

	t37 = ((x169+(x170^x171))&x172);

	if (t37 != 3933845LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = -8;
	int32_t t38 = 5;

	t38 = ((x177+(x178^x179))&x180);

	if (t38 != 136) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	int32_t t39 = 79121127;

	t39 = ((x181+(x182^x183))&x184);

	if (t39 != 98175) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x185 = -3;
	static volatile int64_t x186 = INT64_MIN;
	int8_t x187 = -7;
	volatile int32_t x188 = -1;

	t40 = ((x185+(x186^x187))&x188);

	if (t40 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 75499752319LLU;
	uint64_t x192 = 110684550934054967LLU;
	static uint64_t t41 = 21LLU;

	t41 = ((x189+(x190^x191))&x192);

	if (t41 != 110684546303543350LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 61U;
	int32_t x194 = -290045246;
	static int16_t x195 = INT16_MIN;

	t42 = ((x193+(x194^x195))&x196);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x197 = 6LL;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;

	t43 = ((x197+(x198^x199))&x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x206 = -1;
	static volatile int64_t t44 = -41909947138503LL;

	t44 = ((x205+(x206^x207))&x208);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = 84U;
	int32_t x212 = -1;
	int32_t t45 = -63856;

	t45 = ((x209+(x210^x211))&x212);

	if (t45 != 2147450795) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x213 = 1455612106119881701LL;
	static int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	volatile int64_t t46 = 11584622829573LL;

	t46 = ((x213+(x214^x215))&x216);

	if (t46 != 1455612108267365348LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x221 = -1;
	uint8_t x222 = 60U;
	int32_t t47 = 0;

	t47 = ((x221+(x222^x223))&x224);

	if (t47 != 2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = UINT64_MAX;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = 48;
	static volatile uint64_t t48 = 3420LLU;

	t48 = ((x225+(x226^x227))&x228);

	if (t48 != 188486LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 250U;
	uint32_t x230 = 45U;
	volatile int16_t x231 = 1288;
	static int16_t x232 = INT16_MIN;

	t49 = ((x229+(x230^x231))&x232);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 1206U;
	int16_t x236 = -58;
	static uint64_t t50 = 6347425LLU;

	t50 = ((x233+(x234^x235))&x236);

	if (t50 != 1154LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 22;
	int64_t x238 = -943954991357210LL;
	uint64_t x239 = UINT64_MAX;
	uint64_t t51 = 3817LLU;

	t51 = ((x237+(x238^x239))&x240);

	if (t51 != 7471LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = -1;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 632U;

	t52 = ((x241+(x242^x243))&x244);

	if (t52 != 112U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = -373327533208LL;
	int8_t x248 = INT8_MAX;
	int64_t t53 = 3329344416553902551LL;

	t53 = ((x245+(x246^x247))&x248);

	if (t53 != 55LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = -13;
	volatile uint8_t x251 = 3U;
	int8_t x252 = 30;
	volatile int32_t t54 = 1394000;

	t54 = ((x249+(x250^x251))&x252);

	if (t54 != 14) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = 2U;
	volatile int32_t t55 = -17;

	t55 = ((x257+(x258^x259))&x260);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;

	t56 = ((x261+(x262^x263))&x264);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x265 = INT8_MIN;
	static volatile uint8_t x266 = 1U;
	uint8_t x267 = 2U;
	uint32_t x268 = 0U;
	uint32_t t57 = 59U;

	t57 = ((x265+(x266^x267))&x268);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	static volatile int64_t x271 = INT64_MIN;
	uint32_t x272 = 282539102U;
	volatile int64_t t58 = -2433341836179LL;

	t58 = ((x269+(x270^x271))&x272);

	if (t58 != 282539102LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x273 = 1U;

	t59 = ((x273+(x274^x275))&x276);

	if (t59 != 2147450880) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = 7U;
	uint8_t x278 = UINT8_MAX;
	int64_t x280 = 193874534LL;
	volatile int64_t t60 = -6653LL;

	t60 = ((x277+(x278^x279))&x280);

	if (t60 != 6LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	static int16_t x282 = 12;
	static int32_t x283 = INT32_MAX;
	static volatile int32_t t61 = 924;

	t61 = ((x281+(x282^x283))&x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x286 = 45417U;
	int64_t t62 = 378LL;

	t62 = ((x285+(x286^x287))&x288);

	if (t62 != -3390784LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x293 = -125;
	uint64_t x295 = UINT64_MAX;
	volatile int16_t x296 = INT16_MIN;
	uint64_t t63 = 2900327396LLU;

	t63 = ((x293+(x294^x295))&x296);

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 58U;
	static int8_t x299 = -1;
	uint8_t x300 = 15U;
	volatile uint32_t t64 = 28964U;

	t64 = ((x297+(x298^x299))&x300);

	if (t64 != 10U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = 38417;
	uint8_t x303 = 113U;
	int64_t x304 = INT64_MAX;
	int64_t t65 = 371259454LL;

	t65 = ((x301+(x302^x303))&x304);

	if (t65 != 38495LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MAX;
	static volatile uint16_t x306 = UINT16_MAX;
	static uint64_t x307 = 476250LLU;
	volatile int16_t x308 = -1;
	volatile uint64_t t66 = 14849LLU;

	t66 = ((x305+(x306^x307))&x308);

	if (t66 != 539556LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MAX;
	static volatile uint32_t x310 = 719333U;
	int8_t x312 = -1;
	uint32_t t67 = 37021194U;

	t67 = ((x309+(x310^x311))&x312);

	if (t67 != 751976U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x314 = -247;
	uint8_t x315 = 1U;
	int8_t x316 = -1;
	static volatile int32_t t68 = 4956;

	t68 = ((x313+(x314^x315))&x316);

	if (t68 != 65287) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	int32_t x319 = -1;
	int16_t x320 = INT16_MAX;
	volatile int32_t t69 = 89;

	t69 = ((x317+(x318^x319))&x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x325 = 34553815U;
	int8_t x326 = -1;
	uint16_t x327 = 24U;
	static int32_t x328 = 8108;
	static uint32_t t70 = 4U;

	t70 = ((x325+(x326^x327))&x328);

	if (t70 != 8108U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -99389943;
	int16_t x330 = -1;
	uint64_t x331 = 2090723LLU;
	volatile uint64_t t71 = 342017360776757229LLU;

	t71 = ((x329+(x330^x331))&x332);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x333 = 281U;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MAX;
	volatile uint32_t t72 = 1074596972U;

	t72 = ((x333+(x334^x335))&x336);

	if (t72 != 153U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x337 = 45375083825539LLU;
	int32_t x338 = -185535;
	volatile uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MAX;

	t73 = ((x337+(x338^x339))&x340);

	if (t73 != 65LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x341 = INT8_MAX;
	static int16_t x342 = 0;
	int64_t x343 = -667930983490505LL;
	int8_t x344 = 1;
	volatile int64_t t74 = 318370299359246868LL;

	t74 = ((x341+(x342^x343))&x344);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x349 = 4U;
	int32_t x350 = INT32_MAX;
	static int8_t x351 = -42;
	uint16_t x352 = 11U;
	static volatile int32_t t75 = -5730;

	t75 = ((x349+(x350^x351))&x352);

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x357 = 9U;
	static int32_t x358 = -1;
	static int64_t x359 = -1LL;
	int16_t x360 = 3;
	volatile int64_t t76 = 25864255757363577LL;

	t76 = ((x357+(x358^x359))&x360);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x361 = INT16_MAX;
	volatile int32_t x362 = -14513;
	int32_t x363 = -1;
	int16_t x364 = -1;
	int32_t t77 = 8;

	t77 = ((x361+(x362^x363))&x364);

	if (t77 != 47279) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 24186U;
	volatile int32_t x367 = INT32_MIN;
	static volatile int64_t t78 = 179658799558670LL;

	t78 = ((x365+(x366^x367))&x368);

	if (t78 != 2147507706LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x369 = 7U;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	static uint32_t t79 = 23411U;

	t79 = ((x369+(x370^x371))&x372);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = UINT32_MAX;
	volatile uint64_t t80 = 3832016946436LLU;

	t80 = ((x377+(x378^x379))&x380);

	if (t80 != 18446744069414583226LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x382 = -1;
	int32_t x383 = -8699967;
	int16_t x384 = 922;
	int32_t t81 = 363708030;

	t81 = ((x381+(x382^x383))&x384);

	if (t81 != 26) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MAX;
	int32_t x388 = -1;

	t82 = ((x385+(x386^x387))&x388);

	if (t82 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x389 = INT32_MIN;
	static int32_t x391 = -1;
	int16_t x392 = 3;
	int32_t t83 = 231703717;

	t83 = ((x389+(x390^x391))&x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x393 = 44;
	uint16_t x395 = 3U;
	int32_t t84 = -894224017;

	t84 = ((x393+(x394^x395))&x396);

	if (t84 != 40) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x399 = -5;
	volatile int32_t t85 = -7;

	t85 = ((x397+(x398^x399))&x400);

	if (t85 != -111) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x402 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t86 = -3738;

	t86 = ((x401+(x402^x403))&x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x405 = 4U;
	int32_t x406 = INT32_MIN;
	int8_t x407 = INT8_MAX;
	volatile uint8_t x408 = 22U;
	volatile int32_t t87 = 1581;

	t87 = ((x405+(x406^x407))&x408);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x409 = UINT16_MAX;
	volatile int32_t x410 = INT32_MIN;
	static uint16_t x411 = 11U;

	t88 = ((x409+(x410^x411))&x412);

	if (t88 != -2147418102) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x418 = UINT16_MAX;
	uint32_t x419 = UINT32_MAX;
	int64_t t89 = 143LL;

	t89 = ((x417+(x418^x419))&x420);

	if (t89 != 4294901759LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	int8_t x427 = -1;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x425+(x426^x427))&x428);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x429 = 234;
	int8_t x430 = 2;
	int64_t x431 = 24257LL;
	int32_t x432 = INT32_MAX;
	static volatile int64_t t91 = -52999LL;

	t91 = ((x429+(x430^x431))&x432);

	if (t91 != 24493LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = 513U;
	uint64_t x435 = 408LLU;
	int16_t x436 = INT16_MAX;
	uint64_t t92 = 6487876617947498195LLU;

	t92 = ((x433+(x434^x435))&x436);

	if (t92 != 106LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x437 = INT32_MAX;
	int64_t x438 = INT64_MIN;
	static volatile uint8_t x439 = 4U;
	int16_t x440 = -1;
	int64_t t93 = 14LL;

	t93 = ((x437+(x438^x439))&x440);

	if (t93 != -9223372034707292157LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x441 = 5003819LLU;
	volatile uint64_t t94 = 995911LLU;

	t94 = ((x441+(x442^x443))&x444);

	if (t94 != 40LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 10U;
	int64_t t95 = 4970945522416733LL;

	t95 = ((x445+(x446^x447))&x448);

	if (t95 != 10LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x449 = INT16_MIN;
	uint16_t x450 = UINT16_MAX;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = INT16_MAX;
	uint64_t t96 = 9010369552922611336LLU;

	t96 = ((x449+(x450^x451))&x452);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = 48516LLU;
	int32_t x455 = INT32_MIN;
	int8_t x456 = -1;
	uint64_t t97 = 0LLU;

	t97 = ((x453+(x454^x455))&x456);

	if (t97 != 2147532163LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x461 = UINT8_MAX;
	static uint8_t x462 = 0U;
	int8_t x463 = 0;
	static uint8_t x464 = UINT8_MAX;

	t98 = ((x461+(x462^x463))&x464);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x466 = 327U;
	int32_t x467 = 7514;
	int64_t x468 = -1LL;
	int64_t t99 = 175275080LL;

	t99 = ((x465+(x466^x467))&x468);

	if (t99 != 7196LL) { NG(); } else { ; }
	
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

