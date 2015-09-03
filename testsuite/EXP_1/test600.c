#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 1127U;
int64_t x11 = INT64_MAX;
int8_t x14 = INT8_MAX;
int64_t x20 = INT64_MAX;
int64_t x22 = -1728LL;
int32_t t6 = -1;
static uint64_t x37 = 581163656066353LLU;
volatile uint16_t x40 = 27296U;
static int64_t x43 = -1LL;
uint16_t x49 = UINT16_MAX;
volatile int64_t x50 = INT64_MAX;
volatile int8_t x51 = INT8_MAX;
int16_t x57 = INT16_MIN;
int16_t x58 = 123;
uint64_t x63 = 21129LLU;
uint8_t x74 = 23U;
static volatile uint32_t x77 = 1U;
static volatile uint8_t x78 = 10U;
static volatile int32_t x79 = -409239;
int8_t x88 = INT8_MIN;
int8_t x92 = 59;
volatile uint64_t t23 = 69LLU;
uint16_t x116 = UINT16_MAX;
static volatile int16_t x117 = -8;
static int16_t x122 = INT16_MIN;
volatile int32_t t26 = 328996866;
int16_t x129 = INT16_MIN;
volatile int16_t x130 = -1;
uint8_t x152 = 1U;
uint8_t x154 = UINT8_MAX;
volatile int64_t t33 = 951169209LL;
uint32_t x165 = 17002221U;
volatile uint32_t t34 = 7161U;
int8_t x170 = INT8_MAX;
int8_t x179 = -1;
int32_t t37 = -36;
int8_t x185 = INT8_MIN;
uint32_t x188 = 241543870U;
int32_t x192 = -1;
static volatile uint8_t x196 = 118U;
int16_t x198 = INT16_MAX;
static int64_t x199 = INT64_MAX;
int32_t t41 = 1744804;
int8_t x201 = -24;
static volatile uint64_t x207 = UINT64_MAX;
int8_t x219 = INT8_MAX;
int8_t x221 = INT8_MIN;
int8_t x228 = -1;
static uint32_t x230 = 91023607U;
int16_t x251 = -3;
int16_t x253 = INT16_MAX;
int16_t x262 = INT16_MIN;
int32_t t55 = 2623618;
uint32_t x275 = 558254145U;
volatile uint8_t x282 = 10U;
int16_t x289 = INT16_MAX;
volatile int8_t x302 = INT8_MIN;
static int8_t x312 = 50;
int32_t t65 = -76;
static int16_t x314 = INT16_MAX;
static int32_t x324 = -1718266;
static int32_t x331 = INT32_MIN;
volatile int32_t t69 = 1;
uint32_t x333 = 61U;
int8_t x337 = INT8_MIN;
volatile int16_t x343 = INT16_MIN;
static int16_t x353 = INT16_MIN;
volatile int16_t x362 = -1;
int32_t t77 = 3040164;
int16_t x376 = 3774;
volatile int32_t t78 = -50;
int16_t x378 = -1;
static uint64_t x380 = 628497616682502LLU;
volatile int64_t x382 = INT64_MIN;
static int64_t t80 = 38159LL;
int64_t x406 = INT64_MIN;
int16_t x409 = INT16_MIN;
volatile int8_t x414 = INT8_MIN;
uint16_t x416 = 25U;
volatile int32_t t87 = -79;
int64_t x425 = INT64_MAX;
int64_t x426 = 96844352714701LL;
int16_t x429 = INT16_MIN;
uint32_t x431 = UINT32_MAX;
volatile int32_t t90 = 28027042;
uint16_t x434 = UINT16_MAX;
int64_t x436 = -1LL;
int8_t x438 = INT8_MIN;
int64_t x443 = 1517537357LL;
int64_t x446 = -1LL;
static int8_t x447 = INT8_MAX;
static int64_t x454 = -118343252LL;
int32_t x458 = -1;
int64_t t96 = 3402956LL;
volatile uint64_t x464 = 722173083145352LLU;
uint64_t x465 = 423LLU;
volatile uint32_t t98 = 1772387563U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int64_t x2 = -1LL;
	int16_t x4 = -1;
	volatile int32_t t0 = 788245635;

	t0 = (((x1/x2)==x3)-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -219826393351036LL;
	int8_t x6 = INT8_MAX;
	uint8_t x7 = 3U;
	int32_t x8 = -1;
	volatile int32_t t1 = -850748474;

	t1 = (((x5/x6)==x7)-x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int32_t x10 = INT32_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -889468995;

	t2 = (((x9/x10)==x11)-x12);

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = 3U;
	volatile int32_t t3 = -1221672;

	t3 = (((x13/x14)==x15)-x16);

	if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 26171U;
	int64_t x18 = INT64_MAX;
	volatile uint16_t x19 = 0U;
	volatile int64_t t4 = 0LL;

	t4 = (((x17/x18)==x19)-x20);

	if (t4 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x23 = -1;
	uint8_t x24 = 11U;
	volatile int32_t t5 = 21469;

	t5 = (((x21/x22)==x23)-x24);

	if (t5 != -11) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int16_t x26 = INT16_MIN;
	static uint32_t x27 = 101925U;
	int8_t x28 = INT8_MIN;

	t6 = (((x25/x26)==x27)-x28);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 127U;
	static volatile int32_t x30 = 15993;
	volatile int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -5;

	t7 = (((x29/x30)==x31)-x32);

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	int32_t t8 = -1;

	t8 = (((x37/x38)==x39)-x40);

	if (t8 != -27296) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	static volatile int32_t x42 = -1;
	uint32_t x44 = 251845735U;
	volatile uint32_t t9 = 5U;

	t9 = (((x41/x42)==x43)-x44);

	if (t9 != 4043121561U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x52 = INT8_MAX;
	volatile int32_t t10 = 0;

	t10 = (((x49/x50)==x51)-x52);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x59 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t11 = 193073016;

	t11 = (((x57/x58)==x59)-x60);

	if (t11 != -255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = -1;
	uint64_t x64 = 212875LLU;
	uint64_t t12 = 2727932312122309825LLU;

	t12 = (((x61/x62)==x63)-x64);

	if (t12 != 18446744073709338741LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = -1LL;
	int16_t x66 = INT16_MAX;
	volatile int8_t x67 = -1;
	int64_t x68 = 244LL;
	int64_t t13 = -7039138201LL;

	t13 = (((x65/x66)==x67)-x68);

	if (t13 != -244LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = 107464414184397LL;
	static uint32_t x71 = 18904U;
	static int64_t x72 = -1LL;
	int64_t t14 = -63218LL;

	t14 = (((x69/x70)==x71)-x72);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -4304478857842LL;
	volatile int16_t x75 = INT16_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t15 = 48738;

	t15 = (((x73/x74)==x75)-x76);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x80 = INT64_MAX;
	int64_t t16 = 18801396245LL;

	t16 = (((x77/x78)==x79)-x80);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	static int32_t x82 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	static uint16_t x84 = 6527U;
	int32_t t17 = -3;

	t17 = (((x81/x82)==x83)-x84);

	if (t17 != -6527) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MAX;
	static int32_t t18 = -207518;

	t18 = (((x85/x86)==x87)-x88);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	int32_t t19 = 16349;

	t19 = (((x89/x90)==x91)-x92);

	if (t19 != -59) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x97 = 15LLU;
	volatile int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	volatile int32_t t20 = -149147782;

	t20 = (((x97/x98)==x99)-x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	volatile int16_t x102 = -1;
	static int8_t x103 = INT8_MIN;
	int16_t x104 = 0;
	int32_t t21 = 506579;

	t21 = (((x101/x102)==x103)-x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -110651;
	uint8_t x106 = 8U;
	int16_t x107 = -1;
	volatile uint8_t x108 = 49U;
	volatile int32_t t22 = 26290;

	t22 = (((x105/x106)==x107)-x108);

	if (t22 != -49) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = -33;
	uint32_t x111 = 22895967U;
	static uint64_t x112 = 349468346852036822LLU;

	t23 = (((x109/x110)==x111)-x112);

	if (t23 != 18097275726857514794LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 88U;
	static uint16_t x114 = 6316U;
	static volatile int8_t x115 = INT8_MAX;
	volatile int32_t t24 = 181;

	t24 = (((x113/x114)==x115)-x116);

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = INT8_MAX;
	int8_t x119 = 1;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t25 = 211499160607233120LLU;

	t25 = (((x117/x118)==x119)-x120);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MIN;
	uint32_t x123 = 246U;
	uint16_t x124 = 786U;

	t26 = (((x121/x122)==x123)-x124);

	if (t26 != -786) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x131 = INT32_MIN;
	uint8_t x132 = 41U;
	volatile int32_t t27 = 156899;

	t27 = (((x129/x130)==x131)-x132);

	if (t27 != -41) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -15;
	static int16_t x134 = 15;
	int32_t x135 = 1;
	static int32_t x136 = 30531;
	int32_t t28 = 33;

	t28 = (((x133/x134)==x135)-x136);

	if (t28 != -30531) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	static uint16_t x142 = UINT16_MAX;
	static uint32_t x143 = UINT32_MAX;
	int8_t x144 = -1;
	volatile int32_t t29 = -15;

	t29 = (((x141/x142)==x143)-x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = 1U;
	static int8_t x147 = INT8_MIN;
	uint16_t x148 = 3U;
	int32_t t30 = 1;

	t30 = (((x145/x146)==x147)-x148);

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	static uint64_t x151 = 1613463LLU;
	int32_t t31 = 1;

	t31 = (((x149/x150)==x151)-x152);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -52941;
	int32_t x155 = -1;
	int32_t x156 = 1;
	int32_t t32 = -122;

	t32 = (((x153/x154)==x155)-x156);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = INT8_MIN;
	int16_t x158 = -11443;
	int32_t x159 = INT32_MAX;
	int64_t x160 = 336979623225581LL;

	t33 = (((x157/x158)==x159)-x160);

	if (t33 != -336979623225581LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x166 = 34U;
	int16_t x167 = -218;
	static uint32_t x168 = 146642556U;

	t34 = (((x165/x166)==x167)-x168);

	if (t34 != 4148324740U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = -1;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = 14;
	static int32_t t35 = 3066160;

	t35 = (((x169/x170)==x171)-x172);

	if (t35 != -14) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x173 = 271366546595267LLU;
	static volatile uint64_t x174 = UINT64_MAX;
	static int64_t x175 = 246726849091443056LL;
	static int16_t x176 = -1;
	static int32_t t36 = 67;

	t36 = (((x173/x174)==x175)-x176);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	int32_t x180 = INT32_MAX;

	t37 = (((x177/x178)==x179)-x180);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x186 = INT32_MIN;
	uint8_t x187 = 4U;
	volatile uint32_t t38 = 117712693U;

	t38 = (((x185/x186)==x187)-x188);

	if (t38 != 4053423426U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -1;
	int16_t x190 = -1;
	int64_t x191 = INT64_MIN;
	volatile int32_t t39 = 139219479;

	t39 = (((x189/x190)==x191)-x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x193 = 5959175LLU;
	uint64_t x194 = UINT64_MAX;
	static uint64_t x195 = 210789LLU;
	volatile int32_t t40 = 810082;

	t40 = (((x193/x194)==x195)-x196);

	if (t40 != -118) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = 12805;
	int32_t x200 = 30955628;

	t41 = (((x197/x198)==x199)-x200);

	if (t41 != -30955628) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x202 = 2;
	int64_t x203 = -1LL;
	uint8_t x204 = 0U;
	volatile int32_t t42 = -563494;

	t42 = (((x201/x202)==x203)-x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1271431875942LL;
	static volatile int16_t x206 = -1;
	static volatile int32_t x208 = INT32_MAX;
	static volatile int32_t t43 = -14453;

	t43 = (((x205/x206)==x207)-x208);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MAX;
	int64_t x215 = INT64_MAX;
	volatile uint16_t x216 = 8U;
	volatile int32_t t44 = -3;

	t44 = (((x213/x214)==x215)-x216);

	if (t44 != -8) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -1;
	uint64_t x218 = UINT64_MAX;
	volatile int64_t x220 = 0LL;
	static volatile int64_t t45 = -8LL;

	t45 = (((x217/x218)==x219)-x220);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x222 = 3U;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MAX;
	int64_t t46 = -20403451103516245LL;

	t46 = (((x221/x222)==x223)-x224);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x225 = 2911U;
	int8_t x226 = -1;
	uint64_t x227 = 916603609642922LLU;
	int32_t t47 = -39352066;

	t47 = (((x225/x226)==x227)-x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = 31764351;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 1U;
	volatile int32_t t48 = 5853642;

	t48 = (((x229/x230)==x231)-x232);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x233 = -5426855LL;
	int64_t x234 = INT64_MIN;
	volatile int64_t x235 = INT64_MAX;
	static volatile int32_t x236 = -271399832;
	int32_t t49 = -5;

	t49 = (((x233/x234)==x235)-x236);

	if (t49 != 271399832) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x237 = INT8_MIN;
	int16_t x238 = 2045;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	static int32_t t50 = -283993;

	t50 = (((x237/x238)==x239)-x240);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	static int16_t x242 = INT16_MIN;
	static int32_t x243 = -1;
	uint16_t x244 = 76U;
	static int32_t t51 = 338133;

	t51 = (((x241/x242)==x243)-x244);

	if (t51 != -76) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = -1LL;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t52 = -972940468;

	t52 = (((x245/x246)==x247)-x248);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 25;
	int64_t x250 = 1581071776871LL;
	int8_t x252 = -3;
	volatile int32_t t53 = -182818;

	t53 = (((x249/x250)==x251)-x252);

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x254 = -1;
	static volatile int8_t x255 = INT8_MIN;
	int8_t x256 = 21;
	static int32_t t54 = 20422;

	t54 = (((x253/x254)==x255)-x256);

	if (t54 != -21) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x263 = 203U;
	static volatile int8_t x264 = 1;

	t55 = (((x261/x262)==x263)-x264);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile uint64_t x266 = 2099LLU;
	static int64_t x267 = INT64_MIN;
	static int64_t x268 = 35486897966LL;
	int64_t t56 = -417358027110509LL;

	t56 = (((x265/x266)==x267)-x268);

	if (t56 != -35486897966LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -16;
	uint8_t x270 = 4U;
	static int16_t x271 = INT16_MAX;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t57 = -284;

	t57 = (((x269/x270)==x271)-x272);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -1LL;
	static uint32_t x274 = UINT32_MAX;
	static volatile int8_t x276 = 0;
	static int32_t t58 = -9;

	t58 = (((x273/x274)==x275)-x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x281 = 63745062237LLU;
	volatile int16_t x283 = INT16_MIN;
	static uint64_t x284 = 4380682999LLU;
	uint64_t t59 = 235LLU;

	t59 = (((x281/x282)==x283)-x284);

	if (t59 != 18446744069328868617LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x285 = -1;
	uint64_t x286 = 5229292920LLU;
	int32_t x287 = -82392089;
	uint64_t x288 = 26187029955LLU;
	volatile uint64_t t60 = 8394054704984031LLU;

	t60 = (((x285/x286)==x287)-x288);

	if (t60 != 18446744047522521661LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x290 = INT8_MAX;
	volatile uint16_t x291 = 20U;
	uint16_t x292 = UINT16_MAX;
	int32_t t61 = -22;

	t61 = (((x289/x290)==x291)-x292);

	if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x293 = 630U;
	int8_t x294 = INT8_MAX;
	volatile int8_t x295 = 6;
	int32_t x296 = -20;
	int32_t t62 = 57902;

	t62 = (((x293/x294)==x295)-x296);

	if (t62 != 20) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 1U;
	int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	int32_t t63 = 377;

	t63 = (((x301/x302)==x303)-x304);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MAX;
	volatile int64_t x306 = INT64_MIN;
	volatile int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t64 = 65;

	t64 = (((x305/x306)==x307)-x308);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = 142767478LL;
	static uint32_t x310 = UINT32_MAX;
	volatile int16_t x311 = INT16_MIN;

	t65 = (((x309/x310)==x311)-x312);

	if (t65 != -50) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t66 = 418252592;

	t66 = (((x313/x314)==x315)-x316);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x317 = UINT32_MAX;
	volatile int64_t x318 = INT64_MIN;
	static int32_t x319 = -1;
	static uint16_t x320 = UINT16_MAX;
	volatile int32_t t67 = -1616;

	t67 = (((x317/x318)==x319)-x320);

	if (t67 != -65535) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MAX;
	volatile int32_t x323 = INT32_MAX;
	int32_t t68 = 23666362;

	t68 = (((x321/x322)==x323)-x324);

	if (t68 != 1718266) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MIN;
	int8_t x332 = -1;

	t69 = (((x329/x330)==x331)-x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x334 = INT32_MIN;
	static int64_t x335 = INT64_MIN;
	int8_t x336 = 15;
	volatile int32_t t70 = 4;

	t70 = (((x333/x334)==x335)-x336);

	if (t70 != -15) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x338 = -3451556937LL;
	uint16_t x339 = 22U;
	volatile uint8_t x340 = 90U;
	volatile int32_t t71 = -87;

	t71 = (((x337/x338)==x339)-x340);

	if (t71 != -90) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int64_t x344 = 55722958LL;
	int64_t t72 = -3823317811617013LL;

	t72 = (((x341/x342)==x343)-x344);

	if (t72 != -55722958LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x349 = INT64_MAX;
	static uint8_t x350 = 22U;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t73 = 1142;

	t73 = (((x349/x350)==x351)-x352);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x354 = 151U;
	volatile uint16_t x355 = 670U;
	static uint8_t x356 = UINT8_MAX;
	static int32_t t74 = 5;

	t74 = (((x353/x354)==x355)-x356);

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x361 = INT8_MAX;
	int32_t x363 = 3;
	volatile uint64_t x364 = 68663LLU;
	uint64_t t75 = 262009LLU;

	t75 = (((x361/x362)==x363)-x364);

	if (t75 != 18446744073709482953LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = -1;
	static int32_t x366 = -1;
	volatile int8_t x367 = -1;
	int16_t x368 = INT16_MIN;
	int32_t t76 = -1;

	t76 = (((x365/x366)==x367)-x368);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = 7LL;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = -1;

	t77 = (((x369/x370)==x371)-x372);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = INT32_MAX;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -1;

	t78 = (((x373/x374)==x375)-x376);

	if (t78 != -3774) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = INT32_MAX;
	volatile int32_t x379 = INT32_MIN;
	static volatile uint64_t t79 = 131649240LLU;

	t79 = (((x377/x378)==x379)-x380);

	if (t79 != 18446115576092869114LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = -6710;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MAX;

	t80 = (((x381/x382)==x383)-x384);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = -1;
	int8_t x386 = 7;
	uint32_t x387 = 63458730U;
	int16_t x388 = INT16_MIN;
	int32_t t81 = -656934;

	t81 = (((x385/x386)==x387)-x388);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = INT32_MIN;
	static int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = UINT16_MAX;
	int32_t t82 = 27176051;

	t82 = (((x389/x390)==x391)-x392);

	if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x393 = INT8_MIN;
	int32_t x394 = 7850038;
	static int16_t x395 = INT16_MIN;
	volatile uint16_t x396 = 2152U;
	volatile int32_t t83 = -72;

	t83 = (((x393/x394)==x395)-x396);

	if (t83 != -2152) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x397 = 4551590106186427565LLU;
	static volatile int32_t x398 = INT32_MIN;
	static volatile uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t84 = -885478645;

	t84 = (((x397/x398)==x399)-x400);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x405 = 356886757U;
	static int64_t x407 = INT64_MAX;
	uint8_t x408 = 19U;
	int32_t t85 = -361;

	t85 = (((x405/x406)==x407)-x408);

	if (t85 != -19) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x410 = -1LL;
	uint64_t x411 = 1191804LLU;
	uint16_t x412 = 1661U;
	int32_t t86 = 39;

	t86 = (((x409/x410)==x411)-x412);

	if (t86 != -1661) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x413 = -187076467578LL;
	static int64_t x415 = -1LL;

	t87 = (((x413/x414)==x415)-x416);

	if (t87 != -25) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x417 = 426U;
	uint32_t x418 = 287828093U;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = 4U;
	int32_t t88 = 1;

	t88 = (((x417/x418)==x419)-x420);

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t89 = 61;

	t89 = (((x425/x426)==x427)-x428);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x430 = 7U;
	int32_t x432 = -29729;

	t90 = (((x429/x430)==x431)-x432);

	if (t90 != 29729) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x433 = -58423LL;
	int32_t x435 = -356;
	volatile int64_t t91 = -16246396307220LL;

	t91 = (((x433/x434)==x435)-x436);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x437 = INT64_MIN;
	uint8_t x439 = 102U;
	int16_t x440 = INT16_MIN;
	volatile int32_t t92 = 2849;

	t92 = (((x437/x438)==x439)-x440);

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x441 = 0U;
	int8_t x442 = -42;
	int64_t x444 = 69791835879681LL;
	int64_t t93 = 3940663075717976LL;

	t93 = (((x441/x442)==x443)-x444);

	if (t93 != -69791835879681LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x445 = UINT32_MAX;
	static int16_t x448 = INT16_MAX;
	volatile int32_t t94 = 329657226;

	t94 = (((x445/x446)==x447)-x448);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x453 = 1411U;
	int16_t x455 = INT16_MIN;
	int16_t x456 = INT16_MAX;
	volatile int32_t t95 = 3277362;

	t95 = (((x453/x454)==x455)-x456);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = -1;
	int32_t x459 = -1;
	static int64_t x460 = -62208638036LL;

	t96 = (((x457/x458)==x459)-x460);

	if (t96 != 62208638036LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = INT16_MIN;
	volatile int64_t x462 = -1LL;
	volatile uint8_t x463 = UINT8_MAX;
	uint64_t t97 = 8365627164LLU;

	t97 = (((x461/x462)==x463)-x464);

	if (t97 != 18446021900626406264LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x466 = INT32_MAX;
	volatile int8_t x467 = 4;
	volatile uint32_t x468 = UINT32_MAX;

	t98 = (((x465/x466)==x467)-x468);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x469 = -1;
	static int32_t x470 = -1507;
	uint64_t x471 = UINT64_MAX;
	static uint32_t x472 = UINT32_MAX;
	static volatile uint32_t t99 = 11U;

	t99 = (((x469/x470)==x471)-x472);

	if (t99 != 1U) { NG(); } else { ; }
	
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

