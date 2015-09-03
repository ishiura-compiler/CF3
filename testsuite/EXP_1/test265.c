#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 178U;
int8_t x6 = INT8_MAX;
volatile uint16_t x8 = UINT16_MAX;
volatile int32_t t2 = -57235673;
static volatile uint32_t x14 = UINT32_MAX;
static int8_t x18 = -1;
int8_t x21 = INT8_MIN;
int64_t x28 = INT64_MIN;
volatile int32_t x31 = INT32_MAX;
int16_t x41 = INT16_MIN;
uint32_t x42 = 2063U;
int8_t x44 = INT8_MAX;
int64_t x47 = 436773208LL;
uint32_t t9 = 0U;
int8_t x53 = -13;
static uint64_t x54 = 165986LLU;
static int64_t x57 = -1LL;
volatile uint32_t x64 = 10451513U;
static int64_t x72 = INT64_MIN;
int32_t x87 = INT32_MIN;
int32_t x97 = 93278305;
int32_t t19 = 79394085;
uint64_t x102 = 4LLU;
int32_t x110 = -1;
volatile int16_t x117 = INT16_MIN;
static int16_t x120 = -1;
int64_t x132 = 76345516LL;
uint32_t x136 = 696225U;
int64_t x141 = INT64_MAX;
uint8_t x142 = 85U;
int8_t x155 = 3;
int32_t x163 = INT32_MAX;
int16_t x166 = -1;
static volatile int64_t t33 = 454449655964530LL;
volatile uint64_t x176 = 44328177LLU;
static int16_t x182 = 14631;
uint32_t x196 = 13518U;
volatile int8_t x203 = INT8_MIN;
int32_t t42 = 462698248;
static uint64_t x209 = 45310LLU;
volatile int16_t x214 = INT16_MAX;
uint8_t x219 = UINT8_MAX;
uint64_t x232 = 184728807796560822LLU;
volatile int8_t x238 = -1;
int64_t x239 = INT64_MIN;
int32_t x253 = -1;
int64_t x255 = INT64_MIN;
volatile int16_t x260 = INT16_MIN;
volatile uint64_t x264 = 396659024570216LLU;
volatile uint64_t t55 = 2LLU;
static int8_t x273 = INT8_MIN;
volatile uint8_t x275 = UINT8_MAX;
int16_t x279 = INT16_MIN;
uint64_t x295 = 807LLU;
int32_t x299 = INT32_MIN;
int16_t x309 = 95;
static int16_t x313 = -26;
int32_t x316 = INT32_MAX;
int32_t t67 = 95109;
volatile uint32_t x326 = UINT32_MAX;
int32_t x331 = -152959570;
static int32_t x347 = INT32_MAX;
volatile int32_t t72 = -11;
volatile int64_t t77 = -1344960313LL;
int16_t x385 = INT16_MIN;
volatile uint8_t x386 = UINT8_MAX;
int64_t x387 = 273259409LL;
uint8_t x389 = 6U;
static volatile int8_t x390 = -1;
volatile uint8_t x392 = 88U;
int32_t t81 = -463680;
int8_t x394 = INT8_MAX;
int16_t x396 = -1;
int8_t x400 = -1;
int16_t x406 = INT16_MAX;
static int8_t x409 = -1;
static uint32_t x420 = 12U;
volatile uint8_t x421 = 3U;
static int16_t x424 = -1;
int16_t x426 = -1;
static volatile int32_t t88 = -671;
static int16_t x429 = INT16_MIN;
int32_t x431 = INT32_MIN;
static volatile int16_t x435 = INT16_MIN;
uint32_t t90 = 701U;
uint8_t x437 = 18U;
static int32_t t91 = 24517551;
static int8_t x446 = INT8_MIN;
int8_t x451 = 0;
static int8_t x455 = INT8_MIN;
int64_t x456 = -53817974715721823LL;
int64_t t95 = 1LL;
static volatile uint8_t x461 = 2U;
int64_t x464 = INT64_MAX;
int64_t x474 = -1LL;
int32_t x480 = INT32_MIN;
volatile int32_t t99 = -54864;


void f0(void) {
	static volatile int32_t x1 = -1;
	int16_t x3 = INT16_MAX;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -3770;

	t0 = (((x1-x2)==x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	static uint32_t x7 = UINT32_MAX;
	int32_t t1 = -777057;

	t1 = (((x5-x6)==x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int64_t x10 = INT64_MAX;
	uint16_t x11 = 11557U;
	uint16_t x12 = 803U;

	t2 = (((x9-x10)==x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	static int64_t x16 = -3LL;
	int64_t t3 = 1472258661895LL;

	t3 = (((x13-x14)==x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -737;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = 46756875133217LL;

	t4 = (((x17-x18)==x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 8405854934LLU;
	uint32_t x23 = 234164626U;
	static int16_t x24 = -1;
	volatile int32_t t5 = -851;

	t5 = (((x21-x22)==x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int16_t x26 = -1;
	volatile int64_t x27 = INT64_MAX;
	volatile int64_t t6 = -118LL;

	t6 = (((x25-x26)==x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MIN;
	uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 27U;

	t7 = (((x29-x30)==x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x43 = UINT32_MAX;
	int32_t t8 = -9;

	t8 = (((x41-x42)==x43)%x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MAX;
	uint16_t x46 = UINT16_MAX;
	uint32_t x48 = UINT32_MAX;

	t9 = (((x45-x46)==x47)%x48);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x55 = UINT8_MAX;
	uint32_t x56 = 62024U;
	volatile uint32_t t10 = 6146U;

	t10 = (((x53-x54)==x55)%x56);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = -976267;
	volatile int32_t t11 = -5525;

	t11 = (((x57-x58)==x59)%x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = 1;
	static int8_t x62 = 27;
	uint64_t x63 = 82087361989LLU;
	uint32_t t12 = 31U;

	t12 = (((x61-x62)==x63)%x64);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = 55U;
	int32_t x66 = -1;
	int16_t x67 = 1687;
	static volatile int64_t x68 = -51176285329LL;
	volatile int64_t t13 = 1LL;

	t13 = (((x65-x66)==x67)%x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -6809;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = -1;
	volatile int64_t t14 = 2362LL;

	t14 = (((x69-x70)==x71)%x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t15 = -9794;

	t15 = (((x73-x74)==x75)%x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	static uint8_t x78 = 127U;
	int16_t x79 = 920;
	volatile int8_t x80 = INT8_MIN;
	int32_t t16 = -49151404;

	t16 = (((x77-x78)==x79)%x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = -1LL;
	int16_t x82 = INT16_MIN;
	static int32_t x83 = INT32_MIN;
	uint8_t x84 = 25U;
	static int32_t t17 = -301438761;

	t17 = (((x81-x82)==x83)%x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = 564200608177LL;
	int64_t x88 = INT64_MIN;
	static int64_t t18 = 14502LL;

	t18 = (((x85-x86)==x87)%x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x98 = 1930077U;
	uint16_t x99 = 2655U;
	int8_t x100 = -1;

	t19 = (((x97-x98)==x99)%x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x101 = INT32_MIN;
	int8_t x103 = -3;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t20 = 602508060;

	t20 = (((x101-x102)==x103)%x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 1U;
	volatile uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 50U;
	uint8_t x108 = 2U;
	int32_t t21 = -3;

	t21 = (((x105-x106)==x107)%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -1LL;
	uint8_t x111 = 11U;
	uint32_t x112 = 3U;
	volatile uint32_t t22 = 19973U;

	t22 = (((x109-x110)==x111)%x112);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = -1;
	static int32_t x114 = INT32_MAX;
	uint16_t x115 = 29941U;
	static int16_t x116 = -7856;
	static int32_t t23 = 2;

	t23 = (((x113-x114)==x115)%x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = -1LL;
	int64_t x119 = -3LL;
	volatile int32_t t24 = 15673;

	t24 = (((x117-x118)==x119)%x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 237U;
	int32_t t25 = -490200181;

	t25 = (((x121-x122)==x123)%x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x125 = 37390321LLU;
	int32_t x126 = 129802970;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -60;
	static volatile int32_t t26 = 463207;

	t26 = (((x125-x126)==x127)%x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	int64_t x130 = -1LL;
	int16_t x131 = 864;
	static volatile int64_t t27 = -125471728LL;

	t27 = (((x129-x130)==x131)%x132);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MAX;
	static uint32_t x135 = 11264550U;
	static volatile uint32_t t28 = 5646478U;

	t28 = (((x133-x134)==x135)%x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x143 = 0;
	int8_t x144 = INT8_MIN;
	static int32_t t29 = -242212;

	t29 = (((x141-x142)==x143)%x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = 5;
	int32_t x154 = -1;
	int32_t x156 = INT32_MIN;
	int32_t t30 = -29652;

	t30 = (((x153-x154)==x155)%x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x161 = UINT16_MAX;
	uint32_t x162 = 7198U;
	static volatile int64_t x164 = INT64_MIN;
	int64_t t31 = 5112523578971LL;

	t31 = (((x161-x162)==x163)%x164);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = -1;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;
	static volatile int32_t t32 = -6445134;

	t32 = (((x165-x166)==x167)%x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 18U;
	volatile uint64_t x170 = 8538796328153LLU;
	volatile int64_t x171 = -1LL;
	int64_t x172 = INT64_MIN;

	t33 = (((x169-x170)==x171)%x172);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	volatile int32_t x175 = -5;
	volatile uint64_t t34 = 7729154606752LLU;

	t34 = (((x173-x174)==x175)%x176);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x177 = -5;
	volatile uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = -56;
	volatile int32_t t35 = -286909214;

	t35 = (((x177-x178)==x179)%x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x181 = INT32_MAX;
	int8_t x183 = -56;
	int16_t x184 = -209;
	int32_t t36 = 373;

	t36 = (((x181-x182)==x183)%x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -1LL;
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MAX;
	int32_t x188 = -1;
	volatile int32_t t37 = 1;

	t37 = (((x185-x186)==x187)%x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t38 = 6384755LL;

	t38 = (((x189-x190)==x191)%x192);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = -1LL;
	int64_t x194 = 2853654873183020LL;
	volatile uint32_t x195 = UINT32_MAX;
	uint32_t t39 = 0U;

	t39 = (((x193-x194)==x195)%x196);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -1;
	volatile int32_t t40 = 18;

	t40 = (((x197-x198)==x199)%x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = -227778078LL;
	static int32_t x202 = 1174043;
	static uint16_t x204 = 126U;
	volatile int32_t t41 = -758305541;

	t41 = (((x201-x202)==x203)%x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x205 = 117U;
	static volatile uint64_t x206 = 4554671557296643461LLU;
	int64_t x207 = 318118095055LL;
	int8_t x208 = INT8_MIN;

	t42 = (((x205-x206)==x207)%x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x210 = -1;
	int8_t x211 = 3;
	int8_t x212 = -1;
	volatile int32_t t43 = 1989829;

	t43 = (((x209-x210)==x211)%x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x213 = UINT32_MAX;
	static int16_t x215 = 1900;
	int16_t x216 = -7766;
	static int32_t t44 = 9727;

	t44 = (((x213-x214)==x215)%x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = -1;
	uint16_t x218 = 1U;
	uint64_t x220 = 30004105507LLU;
	volatile uint64_t t45 = 374543LLU;

	t45 = (((x217-x218)==x219)%x220);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MAX;
	volatile uint8_t x222 = 2U;
	int64_t x223 = 378412005LL;
	static int8_t x224 = 1;
	static int32_t t46 = 0;

	t46 = (((x221-x222)==x223)%x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x225 = 0U;
	uint32_t x226 = 14U;
	volatile uint64_t x227 = 551380612501029LLU;
	uint16_t x228 = 488U;
	int32_t t47 = -412687;

	t47 = (((x225-x226)==x227)%x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = INT32_MIN;
	static int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	volatile uint64_t t48 = 189LLU;

	t48 = (((x229-x230)==x231)%x232);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -6680;
	int16_t x234 = INT16_MIN;
	volatile int64_t x235 = -1LL;
	uint8_t x236 = 2U;
	int32_t t49 = -382959699;

	t49 = (((x233-x234)==x235)%x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t50 = 27;

	t50 = (((x237-x238)==x239)%x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = 450455U;
	static int8_t x242 = INT8_MIN;
	int8_t x243 = -51;
	int64_t x244 = -489254LL;
	int64_t t51 = -2013753685294392LL;

	t51 = (((x241-x242)==x243)%x244);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = 15U;
	int8_t x250 = -57;
	int16_t x251 = -1;
	int64_t x252 = 3454887194168152813LL;
	volatile int64_t t52 = 1340752216735827101LL;

	t52 = (((x249-x250)==x251)%x252);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x254 = 29U;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t53 = -6;

	t53 = (((x253-x254)==x255)%x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = -1LL;
	static volatile int64_t x258 = 172272328431LL;
	int16_t x259 = 562;
	volatile int32_t t54 = 10574581;

	t54 = (((x257-x258)==x259)%x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	int64_t x263 = -1LL;

	t55 = (((x261-x262)==x263)%x264);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	volatile uint16_t x267 = 299U;
	uint8_t x268 = 21U;
	int32_t t56 = 454025;

	t56 = (((x265-x266)==x267)%x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -52;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = -17815442;
	uint16_t x272 = 16U;
	volatile int32_t t57 = 1116622;

	t57 = (((x269-x270)==x271)%x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x274 = 0;
	int64_t x276 = -1LL;
	volatile int64_t t58 = 4046240279004738LL;

	t58 = (((x273-x274)==x275)%x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MIN;
	int16_t x280 = 3;
	volatile int32_t t59 = -135;

	t59 = (((x277-x278)==x279)%x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = INT32_MIN;
	uint8_t x283 = 60U;
	int8_t x284 = INT8_MAX;
	volatile int32_t t60 = -186808;

	t60 = (((x281-x282)==x283)%x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MAX;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t61 = -7089192;

	t61 = (((x285-x286)==x287)%x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = 43081U;
	static int8_t x294 = INT8_MIN;
	volatile int32_t x296 = -10454;
	volatile int32_t t62 = -229;

	t62 = (((x293-x294)==x295)%x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = 346058879;
	uint64_t x298 = 12083LLU;
	static int32_t x300 = -107;
	int32_t t63 = -72742671;

	t63 = (((x297-x298)==x299)%x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x305 = -24;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -1;
	uint8_t x308 = 2U;
	int32_t t64 = 1;

	t64 = (((x305-x306)==x307)%x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x310 = 21464;
	int32_t x311 = -1;
	int32_t x312 = -1;
	static volatile int32_t t65 = 31865;

	t65 = (((x309-x310)==x311)%x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	volatile int32_t t66 = 31;

	t66 = (((x313-x314)==x315)%x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x321 = INT8_MAX;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = 1;
	int32_t x324 = -58902;

	t67 = (((x321-x322)==x323)%x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint16_t x327 = 1134U;
	uint8_t x328 = 25U;
	int32_t t68 = 36139;

	t68 = (((x325-x326)==x327)%x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MIN;
	static int64_t x330 = -1LL;
	int8_t x332 = INT8_MIN;
	volatile int32_t t69 = 2994;

	t69 = (((x329-x330)==x331)%x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = -18;
	static volatile int32_t x335 = INT32_MIN;
	int16_t x336 = -15;
	static int32_t t70 = 227000;

	t70 = (((x333-x334)==x335)%x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x345 = -1LL;
	uint32_t x346 = UINT32_MAX;
	static uint64_t x348 = 1555LLU;
	volatile uint64_t t71 = 527162367925712LLU;

	t71 = (((x345-x346)==x347)%x348);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = -1;
	volatile int8_t x350 = 1;
	volatile uint8_t x351 = UINT8_MAX;
	uint8_t x352 = UINT8_MAX;

	t72 = (((x349-x350)==x351)%x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = 959826LLU;
	volatile uint8_t x359 = 0U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t73 = -3;

	t73 = (((x357-x358)==x359)%x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x361 = 1468882579U;
	int16_t x362 = 2220;
	volatile uint32_t x363 = 115363625U;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t74 = 220474U;

	t74 = (((x361-x362)==x363)%x364);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = 763U;
	volatile int32_t t75 = 18;

	t75 = (((x365-x366)==x367)%x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x369 = 222U;
	static int64_t x370 = -136880634012LL;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t76 = -47751375420LL;

	t76 = (((x369-x370)==x371)%x372);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = -1LL;

	t77 = (((x373-x374)==x375)%x376);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = 1;
	int64_t x378 = 1LL;
	volatile int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;
	volatile int64_t t78 = -14729946LL;

	t78 = (((x377-x378)==x379)%x380);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -13;
	uint8_t x382 = UINT8_MAX;
	static int64_t x383 = -6347728991967LL;
	int32_t x384 = INT32_MAX;
	static int32_t t79 = -837293;

	t79 = (((x381-x382)==x383)%x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x388 = 3678;
	int32_t t80 = 123866;

	t80 = (((x385-x386)==x387)%x388);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x391 = UINT8_MAX;

	t81 = (((x389-x390)==x391)%x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x393 = UINT16_MAX;
	static uint16_t x395 = 0U;
	static int32_t t82 = 205;

	t82 = (((x393-x394)==x395)%x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x397 = INT8_MIN;
	int16_t x398 = -176;
	int32_t x399 = 1;
	int32_t t83 = -17644700;

	t83 = (((x397-x398)==x399)%x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x407 = INT32_MAX;
	static uint32_t x408 = UINT32_MAX;
	volatile uint32_t t84 = 98378226U;

	t84 = (((x405-x406)==x407)%x408);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x410 = 818;
	uint8_t x411 = 20U;
	int8_t x412 = INT8_MAX;
	static int32_t t85 = -3854;

	t85 = (((x409-x410)==x411)%x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x417 = INT8_MIN;
	static int16_t x418 = INT16_MIN;
	uint8_t x419 = 28U;
	volatile uint32_t t86 = 19227867U;

	t86 = (((x417-x418)==x419)%x420);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x422 = 354U;
	uint64_t x423 = UINT64_MAX;
	int32_t t87 = 1;

	t87 = (((x421-x422)==x423)%x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = -18;
	static uint8_t x427 = 2U;
	volatile int16_t x428 = 5108;

	t88 = (((x425-x426)==x427)%x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x430 = -17336445266234071LL;
	int64_t x432 = INT64_MAX;
	int64_t t89 = -21LL;

	t89 = (((x429-x430)==x431)%x432);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x433 = -61;
	static volatile int32_t x434 = -1;
	uint32_t x436 = 595794077U;

	t90 = (((x433-x434)==x435)%x436);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x438 = 9U;
	int64_t x439 = 441257186117LL;
	static int16_t x440 = -1;

	t91 = (((x437-x438)==x439)%x440);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x441 = 3724U;
	int8_t x442 = INT8_MIN;
	static int64_t x443 = INT64_MIN;
	uint16_t x444 = 1023U;
	static volatile int32_t t92 = 22290761;

	t92 = (((x441-x442)==x443)%x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = INT16_MIN;
	int32_t x447 = -230044;
	int16_t x448 = INT16_MIN;
	volatile int32_t t93 = -53;

	t93 = (((x445-x446)==x447)%x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int16_t x450 = -1;
	int32_t x452 = -825;
	int32_t t94 = -2;

	t94 = (((x449-x450)==x451)%x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = UINT64_MAX;
	int64_t x454 = -736635506219302LL;

	t95 = (((x453-x454)==x455)%x456);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x462 = INT8_MIN;
	volatile int8_t x463 = -1;
	volatile int64_t t96 = -87048742LL;

	t96 = (((x461-x462)==x463)%x464);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x473 = -3522;
	int64_t x475 = INT64_MIN;
	static uint32_t x476 = UINT32_MAX;
	volatile uint32_t t97 = 14U;

	t97 = (((x473-x474)==x475)%x476);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = -20;
	uint32_t x478 = 572468490U;
	uint16_t x479 = UINT16_MAX;
	int32_t t98 = 0;

	t98 = (((x477-x478)==x479)%x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x481 = -14542021543LL;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -15;
	static volatile int16_t x484 = INT16_MAX;

	t99 = (((x481-x482)==x483)%x484);

	if (t99 != 0) { NG(); } else { ; }
	
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

