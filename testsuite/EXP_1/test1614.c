#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 1278;
int16_t x11 = INT16_MIN;
static volatile int32_t t3 = -5207;
static int64_t x23 = INT64_MAX;
int32_t x25 = -1;
uint16_t x26 = UINT16_MAX;
int8_t x36 = 5;
int64_t t9 = -695940231113508LL;
int8_t x51 = INT8_MIN;
static int32_t x55 = INT32_MIN;
int32_t t13 = 188;
int8_t x72 = -58;
static int64_t x74 = INT64_MIN;
int32_t t18 = 2;
int16_t x77 = INT16_MIN;
int16_t x80 = -1;
static int16_t x87 = INT16_MIN;
int32_t x106 = INT32_MAX;
volatile int32_t t25 = 228;
static int8_t x112 = INT8_MIN;
uint16_t x113 = 1U;
int32_t x114 = -1;
int32_t t28 = 45;
uint32_t x126 = UINT32_MAX;
static int16_t x127 = INT16_MIN;
volatile int32_t t29 = 18204859;
int64_t x135 = -1LL;
uint32_t x140 = 4905310U;
int64_t x142 = -1LL;
uint32_t x146 = 108989U;
int16_t x148 = INT16_MIN;
volatile int32_t t35 = -100779598;
static int8_t x156 = -1;
int64_t x158 = INT64_MIN;
int32_t x160 = -5;
int32_t t37 = 1126;
static int16_t x170 = INT16_MIN;
volatile int32_t t42 = 29457;
int8_t x196 = 3;
int64_t x201 = INT64_MIN;
volatile int16_t x205 = INT16_MIN;
volatile int64_t x213 = -7113514530028380LL;
int64_t t49 = -751967174LL;
static uint8_t x217 = 2U;
uint8_t x224 = UINT8_MAX;
int8_t x227 = 3;
int8_t x235 = INT8_MIN;
int64_t x238 = -16LL;
int8_t x242 = INT8_MIN;
volatile int32_t t56 = -102519946;
int32_t t59 = 118;
int32_t x265 = INT32_MAX;
uint16_t x266 = UINT16_MAX;
int32_t x289 = INT32_MIN;
volatile int8_t x294 = 62;
int16_t x297 = -1;
int64_t t66 = -7LL;
volatile int8_t x302 = INT8_MIN;
static int16_t x304 = INT16_MIN;
int64_t x306 = -1LL;
volatile int16_t x314 = 6343;
int32_t t70 = -227;
int32_t x326 = INT32_MIN;
uint64_t x328 = 3369335199819LLU;
int16_t x334 = INT16_MIN;
int32_t x341 = -49317910;
uint64_t x342 = 208288966921220LLU;
int32_t x345 = INT32_MIN;
static volatile int32_t t78 = 48953760;
static volatile int64_t t80 = -58087172458LL;
static uint32_t x362 = 201U;
static volatile int32_t t83 = 0;
uint8_t x373 = 31U;
volatile int16_t x374 = INT16_MIN;
int32_t t85 = 126737887;
static int64_t x383 = -1LL;
int32_t x385 = -122303696;
static volatile int32_t t87 = 12864334;
uint32_t x390 = 61559U;
volatile int16_t x395 = 1;
static volatile int32_t t89 = 700090;
volatile int32_t x400 = INT32_MAX;
int8_t x403 = INT8_MAX;
uint32_t x404 = 17U;
int8_t x409 = -45;
int64_t x410 = INT64_MIN;
static int8_t x412 = -1;
static int64_t x420 = INT64_MAX;
volatile int64_t t95 = -13400819532684826LL;
int32_t x422 = -755853390;
volatile int64_t t96 = 21720867751LL;
int16_t x425 = INT16_MAX;
int8_t x434 = 48;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -1;
	static int32_t t0 = 1411;

	t0 = (((x1<=x2)==x3)-x4);

	if (t0 != -1278) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	uint8_t x8 = 3U;
	int32_t t1 = 3845;

	t1 = (((x5<=x6)==x7)-x8);

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x10 = -36066;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 314212;

	t2 = (((x9<=x10)==x11)-x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	static uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MAX;
	int32_t x16 = 220262;

	t3 = (((x13<=x14)==x15)-x16);

	if (t3 != -220262) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = 461373018;
	uint32_t x19 = 9407491U;
	uint8_t x20 = 49U;
	static volatile int32_t t4 = -91;

	t4 = (((x17<=x18)==x19)-x20);

	if (t4 != -49) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 1590U;
	uint8_t x22 = 12U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 488830753080557557LLU;

	t5 = (((x21<=x22)==x23)-x24);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	static int32_t t6 = -14079;

	t6 = (((x25<=x26)==x27)-x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static int8_t x30 = INT8_MIN;
	uint8_t x31 = UINT8_MAX;
	int16_t x32 = -213;
	int32_t t7 = -3;

	t7 = (((x29<=x30)==x31)-x32);

	if (t7 != 213) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 71U;
	static int64_t x34 = INT64_MIN;
	uint32_t x35 = 1314U;
	static int32_t t8 = -1678;

	t8 = (((x33<=x34)==x35)-x36);

	if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 113661866;
	int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MAX;

	t9 = (((x37<=x38)==x39)-x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = -2;

	t10 = (((x41<=x42)==x43)-x44);

	if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -12597308;
	static int32_t x46 = -1;
	uint8_t x47 = 9U;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = -2189;

	t11 = (((x45<=x46)==x47)-x48);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MAX;
	volatile int16_t x52 = INT16_MAX;
	int32_t t12 = -3;

	t12 = (((x49<=x50)==x51)-x52);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	uint8_t x54 = 3U;
	int8_t x56 = INT8_MIN;

	t13 = (((x53<=x54)==x55)-x56);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 37462912126LLU;
	int8_t x58 = INT8_MAX;
	volatile int16_t x59 = 4320;
	uint64_t x60 = 938377476174903LLU;
	uint64_t t14 = 142894592244LLU;

	t14 = (((x57<=x58)==x59)-x60);

	if (t14 != 18445805696233376713LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	static int16_t x62 = 1;
	uint8_t x63 = UINT8_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 37706104561607LLU;

	t15 = (((x61<=x62)==x63)-x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -8;
	volatile int8_t x66 = -17;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -7845LL;
	volatile int64_t t16 = 29533373237315LL;

	t16 = (((x65<=x66)==x67)-x68);

	if (t16 != 7845LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MAX;
	static int32_t t17 = 468759;

	t17 = (((x69<=x70)==x71)-x72);

	if (t17 != 58) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 2;
	int16_t x75 = -253;
	volatile int8_t x76 = INT8_MIN;

	t18 = (((x73<=x74)==x75)-x76);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 1550U;
	int64_t x79 = INT64_MAX;
	int32_t t19 = -241926642;

	t19 = (((x77<=x78)==x79)-x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -816LL;
	uint32_t x82 = UINT32_MAX;
	static uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 684;

	t20 = (((x81<=x82)==x83)-x84);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	volatile int64_t x86 = 13LL;
	uint32_t x88 = 0U;
	uint32_t t21 = 1U;

	t21 = (((x85<=x86)==x87)-x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 14U;
	uint32_t x90 = 395458U;
	volatile int64_t x91 = INT64_MAX;
	static uint32_t x92 = 126765U;
	volatile uint32_t t22 = 2U;

	t22 = (((x89<=x90)==x91)-x92);

	if (t22 != 4294840531U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	volatile int32_t x94 = 2997;
	int64_t x95 = -1209LL;
	uint16_t x96 = 4U;
	volatile int32_t t23 = -494210;

	t23 = (((x93<=x94)==x95)-x96);

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 111U;
	int16_t x98 = -2614;
	int32_t x99 = -1;
	uint32_t x100 = 11884100U;
	volatile uint32_t t24 = 7612U;

	t24 = (((x97<=x98)==x99)-x100);

	if (t24 != 4283083196U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	volatile int8_t x108 = 9;

	t25 = (((x105<=x106)==x107)-x108);

	if (t25 != -9) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;
	volatile int32_t t26 = 0;

	t26 = (((x109<=x110)==x111)-x112);

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x115 = -1;
	int32_t x116 = 6;
	int32_t t27 = -49904074;

	t27 = (((x113<=x114)==x115)-x116);

	if (t27 != -6) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	int16_t x118 = -1;
	int8_t x119 = 48;
	int32_t x120 = INT32_MAX;

	t28 = (((x117<=x118)==x119)-x120);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -20;
	volatile int32_t x128 = 402;

	t29 = (((x125<=x126)==x127)-x128);

	if (t29 != -402) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	int32_t x130 = -619587;
	volatile int32_t x131 = INT32_MAX;
	uint16_t x132 = 5326U;
	int32_t t30 = -52300;

	t30 = (((x129<=x130)==x131)-x132);

	if (t30 != -5326) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	uint64_t x134 = 824758LLU;
	static volatile int16_t x136 = INT16_MAX;
	volatile int32_t t31 = -1478776;

	t31 = (((x133<=x134)==x135)-x136);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 7674U;
	static int32_t x138 = 5;
	int64_t x139 = -706LL;
	static uint32_t t32 = 0U;

	t32 = (((x137<=x138)==x139)-x140);

	if (t32 != 4290061986U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -114;
	static volatile int32_t t33 = 243;

	t33 = (((x141<=x142)==x143)-x144);

	if (t33 != 114) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	volatile int16_t x147 = 376;
	int32_t t34 = 0;

	t34 = (((x145<=x146)==x147)-x148);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 34937964390457LLU;
	volatile int32_t x151 = 23603936;
	int32_t x152 = -105;

	t35 = (((x149<=x150)==x151)-x152);

	if (t35 != 105) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x153 = 30U;
	volatile int64_t x154 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	volatile int32_t t36 = -487;

	t36 = (((x153<=x154)==x155)-x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = UINT64_MAX;
	volatile uint16_t x159 = 854U;

	t37 = (((x157<=x158)==x159)-x160);

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -150852625918903968LL;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t38 = 1087109;

	t38 = (((x169<=x170)==x171)-x172);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 3U;
	int32_t x174 = INT32_MIN;
	static int16_t x175 = -1;
	int16_t x176 = -1;
	int32_t t39 = 4200;

	t39 = (((x173<=x174)==x175)-x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 1887861766016LL;
	int8_t x178 = INT8_MAX;
	static volatile uint16_t x179 = 1167U;
	int8_t x180 = 0;
	static volatile int32_t t40 = -748798;

	t40 = (((x177<=x178)==x179)-x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 21U;
	int64_t x182 = -58647LL;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = 2062349LLU;
	static uint64_t t41 = 33890956569LLU;

	t41 = (((x181<=x182)==x183)-x184);

	if (t41 != 18446744073707489267LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x185 = INT16_MAX;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;

	t42 = (((x185<=x186)==x187)-x188);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -460397942;
	uint64_t x190 = UINT64_MAX;
	uint16_t x191 = 0U;
	int8_t x192 = -1;
	volatile int32_t t43 = -15;

	t43 = (((x189<=x190)==x191)-x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 91U;
	volatile int32_t t44 = -4006421;

	t44 = (((x193<=x194)==x195)-x196);

	if (t44 != -3) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	static volatile uint64_t x199 = 363302LLU;
	static uint8_t x200 = 0U;
	volatile int32_t t45 = 232784228;

	t45 = (((x197<=x198)==x199)-x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x202 = 3U;
	int64_t x203 = 61258450027683269LL;
	int8_t x204 = INT8_MIN;
	volatile int32_t t46 = -20;

	t46 = (((x201<=x202)==x203)-x204);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = -1;
	int8_t x207 = INT8_MAX;
	static int8_t x208 = INT8_MAX;
	int32_t t47 = -1;

	t47 = (((x205<=x206)==x207)-x208);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	static int16_t x210 = INT16_MAX;
	int16_t x211 = -1;
	volatile int16_t x212 = -10;
	int32_t t48 = 416;

	t48 = (((x209<=x210)==x211)-x212);

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x214 = 41U;
	volatile int8_t x215 = INT8_MAX;
	volatile int64_t x216 = -1LL;

	t49 = (((x213<=x214)==x215)-x216);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = 160;
	uint64_t x219 = 2386953090416266677LLU;
	int16_t x220 = -1;
	volatile int32_t t50 = 1;

	t50 = (((x217<=x218)==x219)-x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x221 = 0U;
	static int64_t x222 = -7541643LL;
	int16_t x223 = INT16_MIN;
	int32_t t51 = 375;

	t51 = (((x221<=x222)==x223)-x224);

	if (t51 != -255) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = -8062266395LL;
	static int8_t x228 = 0;
	static int32_t t52 = -1001;

	t52 = (((x225<=x226)==x227)-x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	static uint64_t x232 = 5LLU;
	volatile uint64_t t53 = 705149LLU;

	t53 = (((x229<=x230)==x231)-x232);

	if (t53 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x233 = 162341469161323248LL;
	int64_t x234 = INT64_MAX;
	uint8_t x236 = 18U;
	volatile int32_t t54 = 92412;

	t54 = (((x233<=x234)==x235)-x236);

	if (t54 != -18) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x237 = 4U;
	int64_t x239 = -1LL;
	volatile uint8_t x240 = UINT8_MAX;
	int32_t t55 = -21;

	t55 = (((x237<=x238)==x239)-x240);

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = -1;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;

	t56 = (((x241<=x242)==x243)-x244);

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = 17492LL;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int32_t x248 = -1943;
	volatile int32_t t57 = 290294061;

	t57 = (((x245<=x246)==x247)-x248);

	if (t57 != 1943) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = UINT16_MAX;
	static int32_t x250 = -1;
	static volatile int32_t x251 = -660765;
	int32_t x252 = 157126;
	int32_t t58 = -394552079;

	t58 = (((x249<=x250)==x251)-x252);

	if (t58 != -157126) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -300722;
	uint32_t x254 = 258287U;
	volatile uint8_t x255 = 26U;
	static volatile int32_t x256 = -1;

	t59 = (((x253<=x254)==x255)-x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x257 = INT32_MIN;
	uint8_t x258 = 44U;
	static uint16_t x259 = 490U;
	int32_t x260 = -1;
	volatile int32_t t60 = -2827;

	t60 = (((x257<=x258)==x259)-x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x261 = -56;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;
	uint64_t t61 = 691LLU;

	t61 = (((x261<=x262)==x263)-x264);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x267 = INT32_MIN;
	int64_t x268 = -1LL;
	int64_t t62 = -954860058723063LL;

	t62 = (((x265<=x266)==x267)-x268);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MAX;
	static int32_t x280 = INT32_MAX;
	int32_t t63 = -118899;

	t63 = (((x277<=x278)==x279)-x280);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x290 = -18;
	static int64_t x291 = INT64_MIN;
	static uint16_t x292 = 2U;
	int32_t t64 = 227836417;

	t64 = (((x289<=x290)==x291)-x292);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x293 = INT64_MIN;
	static int16_t x295 = INT16_MAX;
	volatile int8_t x296 = -1;
	static int32_t t65 = 499;

	t65 = (((x293<=x294)==x295)-x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x298 = 2;
	int64_t x299 = INT64_MAX;
	int64_t x300 = -1164LL;

	t66 = (((x297<=x298)==x299)-x300);

	if (t66 != 1164LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x301 = -6345;
	static int8_t x303 = 0;
	volatile int32_t t67 = -127934195;

	t67 = (((x301<=x302)==x303)-x304);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x305 = INT16_MIN;
	uint16_t x307 = 7U;
	volatile uint64_t x308 = 12982183LLU;
	uint64_t t68 = 2508934029225LLU;

	t68 = (((x305<=x306)==x307)-x308);

	if (t68 != 18446744073696569433LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = 2046;
	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = 23642U;
	volatile int64_t x312 = 247970306818LL;
	volatile int64_t t69 = 3113618LL;

	t69 = (((x309<=x310)==x311)-x312);

	if (t69 != -247970306818LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1856637767747LL;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -1;

	t70 = (((x313<=x314)==x315)-x316);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = -2;
	int64_t x318 = 549652845319149461LL;
	int32_t x319 = 270;
	static uint64_t x320 = 1841475803456851106LLU;
	uint64_t t71 = 22LLU;

	t71 = (((x317<=x318)==x319)-x320);

	if (t71 != 16605268270252700510LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x321 = UINT16_MAX;
	int32_t x322 = 209893855;
	static int8_t x323 = INT8_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t72 = -6;

	t72 = (((x321<=x322)==x323)-x324);

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -1;
	uint32_t x327 = 15U;
	volatile uint64_t t73 = 87017479090LLU;

	t73 = (((x325<=x326)==x327)-x328);

	if (t73 != 18446740704374351797LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x329 = 78LLU;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	volatile int32_t t74 = -956342;

	t74 = (((x329<=x330)==x331)-x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = -1;
	uint64_t x335 = 35LLU;
	uint32_t x336 = 7353U;
	uint32_t t75 = 44997842U;

	t75 = (((x333<=x334)==x335)-x336);

	if (t75 != 4294959943U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 2859596619LLU;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = 8715069U;
	uint16_t x340 = 84U;
	int32_t t76 = 12;

	t76 = (((x337<=x338)==x339)-x340);

	if (t76 != -84) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x343 = INT8_MIN;
	static int16_t x344 = -196;
	static int32_t t77 = 1;

	t77 = (((x341<=x342)==x343)-x344);

	if (t77 != 196) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x346 = -1;
	static uint16_t x347 = 1U;
	static int32_t x348 = -1;

	t78 = (((x345<=x346)==x347)-x348);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MAX;
	static uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MAX;
	int32_t t79 = -94018;

	t79 = (((x349<=x350)==x351)-x352);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = -288366;
	int64_t x355 = -1LL;
	volatile int64_t x356 = -968018LL;

	t80 = (((x353<=x354)==x355)-x356);

	if (t80 != 968018LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 0LLU;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t81 = -1951014;

	t81 = (((x357<=x358)==x359)-x360);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int16_t x363 = 4;
	static volatile uint16_t x364 = 7U;
	int32_t t82 = 1002365;

	t82 = (((x361<=x362)==x363)-x364);

	if (t82 != -7) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = UINT8_MAX;
	int64_t x366 = -1LL;
	volatile int32_t x367 = INT32_MAX;
	int16_t x368 = INT16_MIN;

	t83 = (((x365<=x366)==x367)-x368);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x375 = 49;
	int64_t x376 = -113LL;
	volatile int64_t t84 = 1819305108280LL;

	t84 = (((x373<=x374)==x375)-x376);

	if (t84 != 113LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -143350319396928078LL;
	int64_t x378 = INT64_MIN;
	int8_t x379 = -1;
	uint16_t x380 = 3838U;

	t85 = (((x377<=x378)==x379)-x380);

	if (t85 != -3838) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 1824041777027155LLU;
	int16_t x382 = 7435;
	int16_t x384 = INT16_MIN;
	volatile int32_t t86 = -125156;

	t86 = (((x381<=x382)==x383)-x384);

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -1;

	t87 = (((x385<=x386)==x387)-x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = -1;
	int32_t x391 = 103314054;
	int64_t x392 = 5913426LL;
	int64_t t88 = -82648022LL;

	t88 = (((x389<=x390)==x391)-x392);

	if (t88 != -5913426LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MAX;
	volatile int32_t x394 = -1;
	volatile int16_t x396 = INT16_MIN;

	t89 = (((x393<=x394)==x395)-x396);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MAX;
	volatile int32_t x398 = INT32_MIN;
	uint32_t x399 = 231U;
	volatile int32_t t90 = 1663842;

	t90 = (((x397<=x398)==x399)-x400);

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -1;
	uint8_t x402 = UINT8_MAX;
	volatile uint32_t t91 = 240617947U;

	t91 = (((x401<=x402)==x403)-x404);

	if (t91 != 4294967279U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = -1LL;
	static int64_t x406 = INT64_MIN;
	volatile int32_t x407 = -53063;
	int16_t x408 = -1;
	volatile int32_t t92 = -1;

	t92 = (((x405<=x406)==x407)-x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x411 = 41;
	volatile int32_t t93 = -9572;

	t93 = (((x409<=x410)==x411)-x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x413 = -1LL;
	int32_t x414 = -1;
	static int64_t x415 = -230332558839952286LL;
	uint32_t x416 = UINT32_MAX;
	static uint32_t t94 = 4434U;

	t94 = (((x413<=x414)==x415)-x416);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = -27296321LL;
	int16_t x418 = INT16_MAX;
	static int64_t x419 = INT64_MAX;

	t95 = (((x417<=x418)==x419)-x420);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -2906;
	int8_t x423 = INT8_MIN;
	volatile int64_t x424 = 31547395LL;

	t96 = (((x421<=x422)==x423)-x424);

	if (t96 != -31547395LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x426 = 5116781U;
	uint32_t x427 = UINT32_MAX;
	static int64_t x428 = -14459955477006887LL;
	int64_t t97 = -3143663912314217104LL;

	t97 = (((x425<=x426)==x427)-x428);

	if (t97 != 14459955477006887LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x429 = 380;
	static int16_t x430 = INT16_MIN;
	static int64_t x431 = 5008593815LL;
	int64_t x432 = 817326814801406977LL;
	int64_t t98 = 510205090445352072LL;

	t98 = (((x429<=x430)==x431)-x432);

	if (t98 != -817326814801406977LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = 6029250166689009858LLU;
	uint32_t x435 = 977947U;
	static int32_t x436 = 233;
	volatile int32_t t99 = -651328169;

	t99 = (((x433<=x434)==x435)-x436);

	if (t99 != -233) { NG(); } else { ; }
	
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

