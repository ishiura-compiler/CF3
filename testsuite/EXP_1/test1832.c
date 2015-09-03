#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = 9615;
int32_t t0 = 931;
static int32_t x5 = -1;
static int8_t x7 = -1;
uint64_t x10 = UINT64_MAX;
uint32_t x12 = 54U;
volatile uint32_t x19 = 3U;
uint8_t x21 = 15U;
static int64_t x23 = -102940810500667LL;
static volatile uint16_t x25 = UINT16_MAX;
static int16_t x30 = INT16_MIN;
static int64_t x32 = INT64_MAX;
int64_t t7 = INT64_MAX;
volatile uint8_t x34 = 1U;
static volatile int32_t t8 = 29355;
uint16_t x41 = 53U;
static uint8_t x44 = 94U;
uint16_t x47 = 3671U;
uint16_t x52 = 458U;
volatile uint32_t x62 = 0U;
volatile uint32_t t15 = 9241U;
uint32_t x65 = 1U;
volatile int32_t x68 = -1;
int64_t t16 = -609855117893920LL;
static int32_t x74 = INT32_MIN;
uint32_t x79 = UINT32_MAX;
int32_t x86 = -1;
uint16_t x93 = 11075U;
static uint64_t x94 = UINT64_MAX;
int16_t x97 = INT16_MIN;
uint64_t x98 = 622LLU;
int64_t x102 = INT64_MAX;
volatile int64_t t25 = 1259164LL;
int32_t x122 = 101070461;
int64_t x129 = -1LL;
static uint64_t x130 = 92928LLU;
uint64_t t33 = 189LLU;
static int32_t x137 = -294323;
int16_t x140 = INT16_MIN;
volatile uint64_t t34 = 1467563218344070LLU;
static uint32_t x142 = UINT32_MAX;
int64_t x143 = -6982569LL;
uint64_t t37 = 1304818934LLU;
int16_t x160 = -63;
uint64_t x167 = 7510087LLU;
uint64_t t41 = UINT64_MAX;
uint32_t x174 = UINT32_MAX;
volatile uint64_t x175 = 290861571680262505LLU;
static volatile int64_t x177 = 32901984LL;
int8_t x195 = INT8_MIN;
static int32_t t48 = 6940;
int32_t x198 = 926;
volatile int32_t x210 = INT32_MIN;
int64_t x215 = INT64_MIN;
static int64_t x216 = -1LL;
static int16_t x217 = -4189;
int8_t x227 = INT8_MIN;
uint64_t x231 = 1089389467741LLU;
volatile uint64_t t57 = UINT64_MAX;
int16_t x237 = 229;
static volatile int8_t x243 = INT8_MAX;
int8_t x247 = INT8_MIN;
int8_t x249 = -1;
int64_t x251 = -1LL;
int64_t x255 = 5616149LL;
int64_t x256 = INT64_MIN;
int32_t x263 = -21805;
int32_t x264 = INT32_MIN;
uint64_t t65 = 989764LLU;
uint8_t x268 = UINT8_MAX;
uint32_t x270 = 27737163U;
uint16_t x273 = UINT16_MAX;
uint16_t x274 = 1766U;
int16_t x276 = -1;
int8_t x279 = INT8_MAX;
int32_t t69 = 362;
int32_t x283 = INT32_MIN;
volatile uint16_t x287 = 27168U;
volatile int64_t t72 = 12134081LL;
int8_t x294 = -1;
static uint16_t x298 = UINT16_MAX;
int32_t t75 = 1486125;
volatile uint64_t t76 = 1240816288738LLU;
uint16_t x318 = 3813U;
int8_t x334 = INT8_MIN;
int64_t x336 = -1LL;
static volatile uint16_t x337 = UINT16_MAX;
static uint8_t x341 = UINT8_MAX;
int8_t x344 = -1;
int32_t t86 = -1580;
uint64_t t88 = 24LLU;
int16_t x371 = -1;
uint64_t x378 = 1828597701165570LLU;
static uint16_t x384 = 26U;
static volatile int64_t t95 = -52362369LL;
int64_t x386 = INT64_MAX;
uint8_t x387 = 1U;
uint8_t x394 = UINT8_MAX;
uint64_t x400 = UINT64_MAX;


void f0(void) {
	int16_t x1 = 13623;
	volatile int8_t x3 = -8;
	int16_t x4 = -10350;

	t0 = (((x1&x2)&x3)|x4);

	if (t0 != -2158) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	int16_t x8 = -311;
	volatile int32_t t1 = -914294;

	t1 = (((x5&x6)&x7)|x8);

	if (t1 != -257) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int16_t x11 = 0;
	static volatile uint64_t t2 = 45483LLU;

	t2 = (((x9&x10)&x11)|x12);

	if (t2 != 54LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1LL;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	static uint8_t x16 = 18U;
	volatile int64_t t3 = -6LL;

	t3 = (((x13&x14)&x15)|x16);

	if (t3 != 18LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int16_t x18 = -1;
	int32_t x20 = -1;
	static volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x17&x18)&x19)|x20);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	int16_t x24 = INT16_MAX;
	int64_t t5 = 122335400272LL;

	t5 = (((x21&x22)&x23)|x24);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MIN;
	static int64_t x27 = INT64_MAX;
	uint8_t x28 = 7U;
	volatile int64_t t6 = 7178131LL;

	t6 = (((x25&x26)&x27)|x28);

	if (t6 != 32775LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	uint8_t x31 = 26U;

	t7 = (((x29&x30)&x31)|x32);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = 225856091;
	int16_t x36 = INT16_MIN;

	t8 = (((x33&x34)&x35)|x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	volatile int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 15391207U;

	t9 = (((x37&x38)&x39)|x40);

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 2U;
	uint64_t x43 = 2019748054689921958LLU;
	uint64_t t10 = 247282055228LLU;

	t10 = (((x41&x42)&x43)|x44);

	if (t10 != 94LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int64_t x48 = -1517580442LL;
	volatile int64_t t11 = 34073868LL;

	t11 = (((x45&x46)&x47)|x48);

	if (t11 != -1517580442LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 58U;
	uint8_t x50 = 7U;
	volatile int32_t x51 = INT32_MAX;
	int32_t t12 = 0;

	t12 = (((x49&x50)&x51)|x52);

	if (t12 != 458) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint32_t x54 = 26727U;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = INT64_MAX;

	t13 = (((x53&x54)&x55)|x56);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = -106;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	static volatile int64_t t14 = INT64_MAX;

	t14 = (((x57&x58)&x59)|x60);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 19U;
	static int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;

	t15 = (((x61&x62)&x63)|x64);

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;

	t16 = (((x65&x66)&x67)|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 20383700176303LL;
	int32_t x70 = INT32_MIN;
	static uint8_t x71 = 1U;
	int16_t x72 = INT16_MIN;
	static int64_t t17 = 16127771LL;

	t17 = (((x69&x70)&x71)|x72);

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 134U;
	uint16_t x75 = 31U;
	uint8_t x76 = 1U;
	int32_t t18 = -14;

	t18 = (((x73&x74)&x75)|x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static int16_t x78 = -3708;
	int32_t x80 = INT32_MIN;
	uint32_t t19 = 10U;

	t19 = (((x77&x78)&x79)|x80);

	if (t19 != 4294963588U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static int8_t x82 = -1;
	uint64_t x83 = 19148709018710LLU;
	volatile uint32_t x84 = UINT32_MAX;
	volatile uint64_t t20 = 154LLU;

	t20 = (((x81&x82)&x83)|x84);

	if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 3335610LL;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = -1;
	int64_t t21 = -3489353148LL;

	t21 = (((x85&x86)&x87)|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	uint8_t x92 = UINT8_MAX;
	int64_t t22 = -1637933378LL;

	t22 = (((x89&x90)&x91)|x92);

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	uint64_t x96 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x93&x94)&x95)|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 22LLU;
	uint32_t x100 = UINT32_MAX;
	uint64_t t24 = 143275LLU;

	t24 = (((x97&x98)&x99)|x100);

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	static int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MIN;

	t25 = (((x101&x102)&x103)|x104);

	if (t25 != -2147483520LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = UINT16_MAX;
	static int8_t x106 = -1;
	uint32_t x107 = 10167729U;
	uint16_t x108 = UINT16_MAX;
	static volatile uint32_t t26 = 51U;

	t26 = (((x105&x106)&x107)|x108);

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 4;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	volatile uint64_t x112 = 3000LLU;
	uint64_t t27 = 3045951643LLU;

	t27 = (((x109&x110)&x111)|x112);

	if (t27 != 3000LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MAX;
	static int64_t x116 = -38954739694280LL;
	volatile uint64_t t28 = 185376484875LLU;

	t28 = (((x113&x114)&x115)|x116);

	if (t28 != 18446705118969857407LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = 1215U;
	volatile int8_t x119 = -4;
	volatile int32_t x120 = -1;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x117&x118)&x119)|x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 960070505LLU;
	volatile uint64_t t30 = 111427849709445LLU;

	t30 = (((x121&x122)&x123)|x124);

	if (t30 != 1061127017LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	volatile int64_t x126 = 51045743666922LL;
	static uint32_t x127 = 2336U;
	static volatile int16_t x128 = INT16_MIN;
	int64_t t31 = -639704595851820LL;

	t31 = (((x125&x126)&x127)|x128);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x131 = INT16_MIN;
	volatile uint32_t x132 = UINT32_MAX;
	uint64_t t32 = 8979184045143052380LLU;

	t32 = (((x129&x130)&x131)|x132);

	if (t32 != 4294967295LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 55353990LLU;
	static int16_t x134 = 2334;
	uint32_t x135 = 2136325425U;
	uint64_t x136 = 546881347514LLU;

	t33 = (((x133&x134)&x135)|x136);

	if (t33 != 546881347514LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x138 = 63249117570LLU;
	volatile int64_t x139 = -2LL;

	t34 = (((x137&x138)&x139)|x140);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -155;
	static int16_t x144 = INT16_MAX;
	int64_t t35 = 6304320722791159LL;

	t35 = (((x141&x142)&x143)|x144);

	if (t35 != 4287987711LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	static int64_t x148 = INT64_MIN;
	int64_t t36 = 113364823659122162LL;

	t36 = (((x145&x146)&x147)|x148);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	uint64_t x150 = 2596342136LLU;
	int16_t x151 = INT16_MAX;
	volatile int64_t x152 = INT64_MIN;

	t37 = (((x149&x150)&x151)|x152);

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	static uint32_t x154 = 1U;
	static int8_t x155 = INT8_MAX;
	volatile uint16_t x156 = 0U;
	volatile uint32_t t38 = 59083188U;

	t38 = (((x153&x154)&x155)|x156);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int32_t x158 = 44743;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t39 = 202963779;

	t39 = (((x157&x158)&x159)|x160);

	if (t39 != -63) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int16_t x163 = 1;
	int8_t x164 = 59;
	uint64_t t40 = 600220441LLU;

	t40 = (((x161&x162)&x163)|x164);

	if (t40 != 59LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	int32_t x168 = -1;

	t41 = (((x165&x166)&x167)|x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -390;
	volatile int8_t x172 = 2;
	int32_t t42 = 1084;

	t42 = (((x169&x170)&x171)|x172);

	if (t42 != -32766) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 3U;
	int16_t x176 = 879;
	volatile uint64_t t43 = 759302LLU;

	t43 = (((x173&x174)&x175)|x176);

	if (t43 != 879LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 7U;
	uint8_t x180 = 33U;
	volatile int64_t t44 = 11242LL;

	t44 = (((x177&x178)&x179)|x180);

	if (t44 != 33LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile int32_t x182 = -1;
	int64_t x183 = 163905437149110LL;
	static uint16_t x184 = 221U;
	volatile int64_t t45 = -6407675919236696LL;

	t45 = (((x181&x182)&x183)|x184);

	if (t45 != 163905437149149LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 38961631U;
	volatile uint64_t x186 = 1011239LLU;
	int8_t x187 = -1;
	volatile uint64_t x188 = 238198LLU;
	volatile uint64_t t46 = 26369129LLU;

	t46 = (((x185&x186)&x187)|x188);

	if (t46 != 238199LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 166;

	t47 = (((x189&x190)&x191)|x192);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = -1;
	int32_t x194 = 508110;
	int32_t x196 = 14;

	t48 = (((x193&x194)&x195)|x196);

	if (t48 != 508046) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 223U;
	static volatile int16_t x199 = INT16_MIN;
	static int16_t x200 = -1;
	static uint32_t t49 = UINT32_MAX;

	t49 = (((x197&x198)&x199)|x200);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MAX;
	int8_t x203 = -15;
	uint64_t x204 = 0LLU;
	uint64_t t50 = 13832LLU;

	t50 = (((x201&x202)&x203)|x204);

	if (t50 != 2147450880LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 11172U;
	uint8_t x206 = 3U;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = (((x205&x206)&x207)|x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 213104477196LL;
	uint8_t x211 = UINT8_MAX;
	static int32_t x212 = -2866654;
	int64_t t52 = 10338047LL;

	t52 = (((x209&x210)&x211)|x212);

	if (t52 != -2866654LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -10;
	int32_t x214 = 108;
	int64_t t53 = 1LL;

	t53 = (((x213&x214)&x215)|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	int64_t x219 = -1LL;
	static volatile uint16_t x220 = 2U;
	int64_t t54 = 15161391874963613LL;

	t54 = (((x217&x218)&x219)|x220);

	if (t54 != 2147479459LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 0U;
	int16_t x222 = INT16_MAX;
	volatile int64_t x223 = 17475709892LL;
	static int8_t x224 = INT8_MIN;
	int64_t t55 = -127685137897360LL;

	t55 = (((x221&x222)&x223)|x224);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -3;
	static int32_t x226 = -1;
	int16_t x228 = 0;
	int32_t t56 = 8642335;

	t56 = (((x225&x226)&x227)|x228);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = 182;
	volatile uint16_t x230 = UINT16_MAX;
	volatile int8_t x232 = -1;

	t57 = (((x229&x230)&x231)|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -3;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	int32_t x236 = -5;
	int32_t t58 = -39175;

	t58 = (((x233&x234)&x235)|x236);

	if (t58 != -5) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x238 = 2U;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = 9539689;

	t59 = (((x237&x238)&x239)|x240);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -4526;
	int8_t x242 = INT8_MIN;
	static uint16_t x244 = 21652U;
	volatile int32_t t60 = 182;

	t60 = (((x241&x242)&x243)|x244);

	if (t60 != 21652) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 3190U;
	int32_t x246 = -1;
	volatile int16_t x248 = -239;
	uint32_t t61 = 72224120U;

	t61 = (((x245&x246)&x247)|x248);

	if (t61 != 4294967057U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 0U;
	uint64_t x252 = 123824520LLU;
	uint64_t t62 = 21087334564639453LLU;

	t62 = (((x249&x250)&x251)|x252);

	if (t62 != 123824520LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 287001515;
	volatile int16_t x254 = INT16_MIN;
	volatile int64_t t63 = 214LL;

	t63 = (((x253&x254)&x255)|x256);

	if (t63 != -9223372036853661696LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = -1;
	uint32_t x258 = 80U;
	volatile uint32_t x259 = 1U;
	volatile int32_t x260 = INT32_MIN;
	volatile uint32_t t64 = 16776U;

	t64 = (((x257&x258)&x259)|x260);

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 142896426173062557LLU;
	uint8_t x262 = 3U;

	t65 = (((x261&x262)&x263)|x264);

	if (t65 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = 462113LLU;
	static int64_t x267 = -5498301374274LL;
	volatile uint64_t t66 = 1906486744533105030LLU;

	t66 = (((x265&x266)&x267)|x268);

	if (t66 != 255LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -452;
	static uint64_t x271 = UINT64_MAX;
	static uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (((x269&x270)&x271)|x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x275 = UINT16_MAX;
	volatile int32_t t68 = -12;

	t68 = (((x273&x274)&x275)|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x280 = INT8_MAX;

	t69 = (((x277&x278)&x279)|x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	int32_t x284 = -58293;
	int32_t t70 = 1871;

	t70 = (((x281&x282)&x283)|x284);

	if (t70 != -58293) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = UINT16_MAX;
	static uint64_t x286 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	static uint64_t t71 = 13744LLU;

	t71 = (((x285&x286)&x287)|x288);

	if (t71 != 27391LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 24U;

	t72 = (((x289&x290)&x291)|x292);

	if (t72 != -32744LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -1LL;
	uint16_t x295 = 5571U;
	int8_t x296 = INT8_MIN;
	volatile int64_t t73 = -370682851962LL;

	t73 = (((x293&x294)&x295)|x296);

	if (t73 != -61LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = 7U;
	static int64_t x300 = 239887282LL;
	volatile int64_t t74 = -29280LL;

	t74 = (((x297&x298)&x299)|x300);

	if (t74 != 239887282LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 28;
	int16_t x302 = 1;
	volatile int32_t x303 = -1;
	int8_t x304 = INT8_MIN;

	t75 = (((x301&x302)&x303)|x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = UINT16_MAX;
	int16_t x306 = -1089;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t x308 = INT32_MIN;

	t76 = (((x305&x306)&x307)|x308);

	if (t76 != 18446744071562132415LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = 1342722410118695134LLU;
	static int64_t x311 = INT64_MIN;
	static int16_t x312 = 16;
	uint64_t t77 = 18782232166507824LLU;

	t77 = (((x309&x310)&x311)|x312);

	if (t77 != 16LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = -1;
	static int32_t x316 = -5383;
	volatile int32_t t78 = -113785315;

	t78 = (((x313&x314)&x315)|x316);

	if (t78 != -5383) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int8_t x319 = -1;
	static int32_t x320 = 3;
	uint32_t t79 = 7221U;

	t79 = (((x317&x318)&x319)|x320);

	if (t79 != 3815U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1U;
	static int16_t x322 = -1;
	int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = 20LL;

	t80 = (((x321&x322)&x323)|x324);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 1U;
	int8_t x327 = INT8_MIN;
	volatile int16_t x328 = 0;
	static uint32_t t81 = 4862824U;

	t81 = (((x325&x326)&x327)|x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 5616287LL;
	uint64_t x330 = 16066203171419897LLU;
	int16_t x331 = -124;
	int16_t x332 = INT16_MIN;
	uint64_t t82 = 51589173180357803LLU;

	t82 = (((x329&x330)&x331)|x332);

	if (t82 != 18446744073709531776LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x335 = 0U;
	int64_t t83 = 17779238322719839LL;

	t83 = (((x333&x334)&x335)|x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = -1LL;
	volatile int32_t x339 = -1;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -26190556789LL;

	t84 = (((x337&x338)&x339)|x340);

	if (t84 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MAX;
	volatile int16_t x343 = -1;
	volatile int32_t t85 = -62;

	t85 = (((x341&x342)&x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -5;
	int32_t x346 = INT32_MAX;
	static int8_t x347 = -9;
	int32_t x348 = -1;

	t86 = (((x345&x346)&x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	static volatile int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MAX;
	int32_t t87 = -44;

	t87 = (((x349&x350)&x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 63LLU;
	int32_t x354 = INT32_MAX;
	uint32_t x355 = 689U;
	uint64_t x356 = 825659802965022LLU;

	t88 = (((x353&x354)&x355)|x356);

	if (t88 != 825659802965055LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	static volatile uint64_t x358 = 53LLU;
	static int64_t x359 = -1LL;
	volatile int16_t x360 = -86;
	uint64_t t89 = 497LLU;

	t89 = (((x357&x358)&x359)|x360);

	if (t89 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MAX;
	uint32_t x362 = 219427373U;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = UINT8_MAX;
	volatile uint32_t t90 = 1044636U;

	t90 = (((x361&x362)&x363)|x364);

	if (t90 != 13055U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -47;
	int16_t x366 = 31;
	volatile int16_t x367 = INT16_MIN;
	volatile uint8_t x368 = 24U;
	volatile int32_t t91 = -1147125;

	t91 = (((x365&x366)&x367)|x368);

	if (t91 != 24) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	uint32_t x372 = 14668U;
	volatile uint32_t t92 = 19022U;

	t92 = (((x369&x370)&x371)|x372);

	if (t92 != 32716U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -595929390;
	int8_t x374 = -1;
	uint64_t x375 = 7996LLU;
	int64_t x376 = -1LL;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x373&x374)&x375)|x376);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	uint8_t x379 = 3U;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t94 = 471823052121LLU;

	t94 = (((x377&x378)&x379)|x380);

	if (t94 != 4294967295LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MAX;
	int16_t x382 = 50;
	volatile uint32_t x383 = 0U;

	t95 = (((x381&x382)&x383)|x384);

	if (t95 != 26LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	int16_t x388 = -1;
	volatile int64_t t96 = 876887LL;

	t96 = (((x385&x386)&x387)|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static int8_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t97 = -449474311981LL;

	t97 = (((x389&x390)&x391)|x392);

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	static uint32_t x395 = UINT32_MAX;
	volatile uint8_t x396 = 1U;
	uint32_t t98 = 2286U;

	t98 = (((x393&x394)&x395)|x396);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 125219U;
	uint32_t x398 = UINT32_MAX;
	static int32_t x399 = INT32_MIN;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x397&x398)&x399)|x400);

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

