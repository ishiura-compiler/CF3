#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MAX;
static int8_t x8 = INT8_MIN;
int32_t x13 = 703537881;
uint64_t x25 = 53927059094679726LLU;
int64_t x26 = -1LL;
int16_t x34 = -4838;
int8_t x36 = INT8_MIN;
int16_t x46 = INT16_MAX;
uint8_t x47 = 23U;
static uint64_t t11 = 1755194280LLU;
int8_t x53 = INT8_MIN;
int16_t x54 = -13;
uint8_t x61 = 1U;
int16_t x63 = INT16_MIN;
static volatile uint32_t t14 = 1003627646U;
int8_t x65 = -1;
volatile int32_t t15 = 153520891;
uint8_t x73 = 118U;
int16_t x79 = -6324;
static int64_t t19 = 3LL;
int64_t x90 = 1035323221LL;
int32_t x96 = INT32_MIN;
volatile int8_t x97 = 3;
volatile uint16_t x100 = 846U;
int64_t x113 = INT64_MIN;
int32_t t29 = 156860;
uint8_t x131 = 0U;
volatile int32_t t31 = 139106;
volatile int32_t t32 = 1;
static int32_t x138 = 8136454;
static volatile int64_t t33 = -186534923LL;
volatile uint64_t t35 = 2LLU;
volatile int32_t t36 = -18;
int64_t x162 = -1527499856LL;
static uint8_t x164 = UINT8_MAX;
static int32_t t37 = 4096341;
int64_t x165 = -59103381652160LL;
static uint16_t x173 = 976U;
static volatile int32_t t40 = -20569;
static uint32_t x188 = 582903U;
static int32_t x189 = -1;
int32_t t44 = -3;
static int64_t x198 = INT64_MIN;
volatile int16_t x203 = -1;
static uint64_t x208 = UINT64_MAX;
static int8_t x209 = INT8_MAX;
static int32_t x211 = -20;
uint64_t t49 = 86502LLU;
volatile int8_t x215 = -1;
int64_t x218 = -1LL;
uint64_t t52 = 66364263917710780LLU;
volatile int32_t t53 = 30800924;
uint16_t x231 = 30082U;
uint64_t t55 = 6390753123224409198LLU;
int32_t x243 = -6503469;
uint16_t x244 = 1U;
int32_t t59 = -909329;
volatile int64_t x255 = -1LL;
int32_t x260 = -114697728;
static uint8_t x261 = 60U;
int8_t x263 = -1;
static int32_t t62 = 45;
volatile int64_t x265 = INT64_MIN;
int64_t x272 = 504LL;
int16_t x275 = INT16_MIN;
static int64_t t66 = 112693518291559LL;
int16_t x285 = -1;
uint8_t x286 = UINT8_MAX;
volatile int64_t t70 = 146670344842813LL;
uint16_t x301 = 1U;
volatile uint32_t x302 = 27U;
int16_t x303 = -1;
volatile int32_t t73 = 432968049;
static int64_t x310 = INT64_MIN;
static volatile uint64_t t74 = 38LLU;
uint64_t x314 = UINT64_MAX;
static volatile int32_t x317 = INT32_MIN;
volatile int64_t x321 = INT64_MIN;
static volatile int16_t x323 = INT16_MIN;
int8_t x327 = -13;
uint16_t x331 = UINT16_MAX;
volatile int8_t x336 = INT8_MIN;
volatile int32_t t81 = -1051558632;
int64_t x342 = 108849098751LL;
int64_t x349 = -1867110799071LL;
volatile int32_t t88 = 885868;
static int8_t x370 = -1;
static int64_t x371 = INT64_MIN;
int16_t x375 = INT16_MIN;
int32_t x381 = 27424;
volatile int32_t x385 = 15850958;
int32_t x387 = -13;
int8_t x395 = INT8_MIN;
int64_t x400 = INT64_MIN;
int64_t t96 = 29429LL;
int32_t x402 = INT32_MAX;
int8_t x405 = INT8_MIN;
static int64_t x406 = -3757312LL;
static int8_t x407 = -28;
uint32_t t98 = 3613U;


void f0(void) {
	volatile uint16_t x1 = 220U;
	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -652217910;

	t0 = ((x1&(x2==x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	volatile int64_t t1 = -81510454127LL;

	t1 = ((x5&(x6==x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	int8_t x10 = 7;
	int16_t x11 = -148;
	int32_t x12 = -169753;
	int32_t t2 = -15232;

	t2 = ((x9&(x10==x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = -11;
	int16_t x15 = INT16_MIN;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = 107079544170LL;

	t3 = ((x13&(x14==x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -3148;
	int16_t x22 = -1;
	uint16_t x23 = 1U;
	uint64_t x24 = 632797538183564LLU;
	uint64_t t4 = 116083209598954LLU;

	t4 = ((x21&(x22==x23))/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x27 = -22;
	volatile int8_t x28 = -1;
	static uint64_t t5 = 41LLU;

	t5 = ((x25&(x26==x27))/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x29 = INT32_MAX;
	int8_t x30 = -21;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 40U;
	volatile int32_t t6 = 14;

	t6 = ((x29&(x30==x31))/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = UINT64_MAX;
	static volatile uint64_t x35 = UINT64_MAX;
	uint64_t t7 = 4229273191347LLU;

	t7 = ((x33&(x34==x35))/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MAX;
	static uint64_t x39 = UINT64_MAX;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 0U;

	t8 = ((x37&(x38==x39))/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x42 = -336;
	static volatile uint32_t x43 = 17957749U;
	static uint16_t x44 = UINT16_MAX;
	int32_t t9 = 29344;

	t9 = ((x41&(x42==x43))/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 0U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -181;

	t10 = ((x45&(x46==x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x49 = 1LLU;
	static uint64_t x50 = UINT64_MAX;
	uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 19U;

	t11 = ((x49&(x50==x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t12 = -82140LL;

	t12 = ((x53&(x54==x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 7;
	int64_t x58 = INT64_MAX;
	int32_t x59 = 1823;
	uint32_t x60 = 2924U;
	uint32_t t13 = 235448U;

	t13 = ((x57&(x58==x59))/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 706LLU;
	volatile uint32_t x64 = 641U;

	t14 = ((x61&(x62==x63))/x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = INT64_MAX;
	volatile int8_t x67 = -1;
	int16_t x68 = INT16_MIN;

	t15 = ((x65&(x66==x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 1311608085U;
	volatile uint32_t t16 = 90216251U;

	t16 = ((x69&(x70==x71))/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = -1;
	int8_t x75 = -1;
	int32_t x76 = 15;
	volatile int32_t t17 = -1394947;

	t17 = ((x73&(x74==x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MAX;
	static int8_t x78 = INT8_MAX;
	static uint16_t x80 = 3834U;
	volatile int64_t t18 = -55182LL;

	t18 = ((x77&(x78==x79))/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 0;
	volatile int16_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	int64_t x84 = -32LL;

	t19 = ((x81&(x82==x83))/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = UINT8_MAX;
	static volatile int16_t x88 = -1;
	volatile int32_t t20 = 2870;

	t20 = ((x85&(x86==x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MAX;
	volatile int64_t x91 = INT64_MAX;
	uint8_t x92 = 5U;
	static volatile int32_t t21 = 3173865;

	t21 = ((x89&(x90==x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -886;
	static uint16_t x94 = 143U;
	volatile int16_t x95 = INT16_MIN;
	static volatile int32_t t22 = 2944034;

	t22 = ((x93&(x94==x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	static int32_t t23 = -224;

	t23 = ((x97&(x98==x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 56997LL;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 3054778181113634LLU;
	volatile uint64_t x104 = 6664626LLU;
	uint64_t t24 = 5183547122LLU;

	t24 = ((x101&(x102==x103))/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 8U;
	volatile uint32_t x106 = 1019501U;
	uint8_t x107 = 0U;
	volatile uint8_t x108 = 112U;
	int32_t t25 = -3974;

	t25 = ((x105&(x106==x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MAX;
	volatile uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	int64_t t26 = 6610730332LL;

	t26 = ((x109&(x110==x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = UINT32_MAX;
	int16_t x115 = -1;
	int16_t x116 = INT16_MIN;
	volatile int64_t t27 = 532356226LL;

	t27 = ((x113&(x114==x115))/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 14U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;
	int32_t t28 = 7735;

	t28 = ((x117&(x118==x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	uint64_t x122 = 6048704LLU;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = 99U;

	t29 = ((x121&(x122==x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	static uint16_t x126 = 5U;
	static uint16_t x127 = 0U;
	uint8_t x128 = 3U;
	volatile uint64_t t30 = 1879LLU;

	t30 = ((x125&(x126==x127))/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = 3;
	int64_t x130 = INT64_MAX;
	volatile int16_t x132 = INT16_MIN;

	t31 = ((x129&(x130==x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	uint8_t x134 = 3U;
	uint8_t x135 = 0U;
	int16_t x136 = -1;

	t32 = ((x133&(x134==x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -1LL;
	static uint32_t x139 = 2122259U;
	int8_t x140 = -1;

	t33 = ((x137&(x138==x139))/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = 3641U;
	volatile uint32_t x151 = UINT32_MAX;
	static int8_t x152 = INT8_MIN;
	uint32_t t34 = 1011088377U;

	t34 = ((x149&(x150==x151))/x152);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 2;
	static int8_t x154 = INT8_MIN;
	volatile uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = UINT64_MAX;

	t35 = ((x153&(x154==x155))/x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int16_t x160 = -11137;

	t36 = ((x157&(x158==x159))/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	volatile uint8_t x163 = 8U;

	t37 = ((x161&(x162==x163))/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	volatile uint32_t x168 = 1895416U;
	int64_t t38 = 3LL;

	t38 = ((x165&(x166==x167))/x168);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = -1;
	int32_t x172 = INT32_MAX;
	static int64_t t39 = 379130414362LL;

	t39 = ((x169&(x170==x171))/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = INT64_MIN;
	volatile int16_t x175 = 0;
	uint16_t x176 = 16044U;

	t40 = ((x173&(x174==x175))/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 8U;
	uint64_t x178 = 15242253788138LLU;
	static int64_t x179 = INT64_MAX;
	int16_t x180 = INT16_MAX;
	int32_t t41 = -2657;

	t41 = ((x177&(x178==x179))/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	static int8_t x184 = -46;
	volatile int64_t t42 = -4519924098LL;

	t42 = ((x181&(x182==x183))/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x185 = UINT32_MAX;
	int32_t x186 = 6469547;
	uint8_t x187 = UINT8_MAX;
	volatile uint32_t t43 = 755937054U;

	t43 = ((x185&(x186==x187))/x188);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x190 = 729U;
	volatile int64_t x191 = INT64_MAX;
	uint16_t x192 = 21U;

	t44 = ((x189&(x190==x191))/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 8661314763789451LLU;
	uint16_t x195 = UINT16_MAX;
	uint8_t x196 = 1U;
	volatile int32_t t45 = -56682;

	t45 = ((x193&(x194==x195))/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	static volatile int16_t x199 = 8740;
	int32_t x200 = 38178;
	int32_t t46 = 255;

	t46 = ((x197&(x198==x199))/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x201 = 56U;
	int16_t x202 = 38;
	uint32_t x204 = 143U;
	static uint32_t t47 = 0U;

	t47 = ((x201&(x202==x203))/x204);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	volatile int16_t x206 = -1;
	uint8_t x207 = 3U;
	uint64_t t48 = 4414102575506837LLU;

	t48 = ((x205&(x206==x207))/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x210 = -1LL;
	uint64_t x212 = UINT64_MAX;

	t49 = ((x209&(x210==x211))/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = 426861374U;
	static uint64_t x216 = 130909101376828LLU;
	volatile uint64_t t50 = 2996725446919672LLU;

	t50 = ((x213&(x214==x215))/x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 22966905803619LLU;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -111;
	uint64_t t51 = 21360364282211872LLU;

	t51 = ((x217&(x218==x219))/x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = -25811912;
	static int8_t x223 = INT8_MIN;
	uint64_t x224 = 3343440078LLU;

	t52 = ((x221&(x222==x223))/x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = 0;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = 17779U;
	volatile int32_t x228 = -1;

	t53 = ((x225&(x226==x227))/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = -1LL;
	volatile int16_t x230 = 2;
	int64_t x232 = -4LL;
	volatile int64_t t54 = 21213666326LL;

	t54 = ((x229&(x230==x231))/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = -15;
	uint32_t x235 = 2503U;
	int16_t x236 = -43;

	t55 = ((x233&(x234==x235))/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = -17;
	int8_t x238 = -14;
	int32_t x239 = INT32_MIN;
	volatile uint8_t x240 = 49U;
	volatile int32_t t56 = -208151;

	t56 = ((x237&(x238==x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MAX;
	static volatile int32_t t57 = -9016996;

	t57 = ((x241&(x242==x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 2U;
	int32_t x246 = -877;
	int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	int32_t t58 = -6906731;

	t58 = ((x245&(x246==x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = 4660;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	static volatile int16_t x252 = INT16_MIN;

	t59 = ((x249&(x250==x251))/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x253 = 55LLU;
	uint32_t x254 = 22982056U;
	int32_t x256 = INT32_MAX;
	uint64_t t60 = 4379798053325LLU;

	t60 = ((x253&(x254==x255))/x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = 41;
	int32_t x259 = 241072;
	static int32_t t61 = -26449306;

	t61 = ((x257&(x258==x259))/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = 45063LL;
	uint8_t x264 = UINT8_MAX;

	t62 = ((x261&(x262==x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x266 = 38422;
	static volatile int32_t x267 = -702;
	int16_t x268 = 590;
	volatile int64_t t63 = 30LL;

	t63 = ((x265&(x266==x267))/x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = 0;
	int16_t x271 = INT16_MAX;
	int64_t t64 = -24007078288510LL;

	t64 = ((x269&(x270==x271))/x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 3061246346898955148LLU;
	static int16_t x276 = INT16_MIN;
	volatile int64_t t65 = 524076LL;

	t65 = ((x273&(x274==x275))/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = INT64_MAX;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 3U;

	t66 = ((x277&(x278==x279))/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1LL;
	int8_t x283 = 1;
	static int32_t x284 = INT32_MIN;
	int32_t t67 = 15;

	t67 = ((x281&(x282==x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	int32_t t68 = -46319714;

	t68 = ((x285&(x286==x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x289 = 1882U;
	volatile int32_t x290 = 174629412;
	int16_t x291 = INT16_MIN;
	int64_t x292 = 90829LL;
	volatile int64_t t69 = -323883546LL;

	t69 = ((x289&(x290==x291))/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	volatile uint8_t x294 = 60U;
	static int8_t x295 = 1;
	static uint8_t x296 = UINT8_MAX;

	t70 = ((x293&(x294==x295))/x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MAX;
	static volatile int64_t x299 = INT64_MAX;
	int32_t x300 = INT32_MIN;
	static int32_t t71 = -747;

	t71 = ((x297&(x298==x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x304 = -1LL;
	int64_t t72 = -165671543026723969LL;

	t72 = ((x301&(x302==x303))/x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MIN;
	static uint64_t x306 = 3LLU;
	int8_t x307 = -47;
	int16_t x308 = INT16_MAX;

	t73 = ((x305&(x306==x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x309 = 133838210732411LLU;
	uint64_t x311 = 68267205LLU;
	int64_t x312 = INT64_MIN;

	t74 = ((x309&(x310==x311))/x312);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	volatile int32_t x315 = INT32_MIN;
	static uint16_t x316 = 479U;
	int32_t t75 = -37;

	t75 = ((x313&(x314==x315))/x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x318 = 252U;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t76 = 1;

	t76 = ((x317&(x318==x319))/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x322 = 1U;
	int32_t x324 = -4786221;
	volatile int64_t t77 = -307740LL;

	t77 = ((x321&(x322==x323))/x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 3;
	int16_t x326 = 2941;
	static int8_t x328 = -5;
	volatile int32_t t78 = -456877037;

	t78 = ((x325&(x326==x327))/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MAX;
	volatile int32_t x330 = INT32_MIN;
	volatile uint8_t x332 = 58U;
	int64_t t79 = 4200124399249884863LL;

	t79 = ((x329&(x330==x331))/x332);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MIN;
	static uint32_t x334 = 28037U;
	static int8_t x335 = INT8_MIN;
	int32_t t80 = -133503326;

	t80 = ((x333&(x334==x335))/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x337 = INT32_MAX;
	uint64_t x338 = UINT64_MAX;
	static uint64_t x339 = 8962795579991285LLU;
	static int16_t x340 = 71;

	t81 = ((x337&(x338==x339))/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = INT8_MAX;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 1275857643939161LLU;
	static volatile uint64_t t82 = 25529LLU;

	t82 = ((x341&(x342==x343))/x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 31579U;
	static volatile uint8_t x347 = UINT8_MAX;
	uint16_t x348 = 180U;
	int32_t t83 = -1520;

	t83 = ((x345&(x346==x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x350 = INT8_MIN;
	uint8_t x351 = 0U;
	int8_t x352 = INT8_MIN;
	static int64_t t84 = 40270672673194LL;

	t84 = ((x349&(x350==x351))/x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	int16_t x354 = -7483;
	int32_t x355 = INT32_MIN;
	static uint16_t x356 = 2U;
	volatile int32_t t85 = 5777008;

	t85 = ((x353&(x354==x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	int32_t x360 = 2005160;
	int32_t t86 = 745884210;

	t86 = ((x357&(x358==x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x361 = 2073LLU;
	static volatile uint8_t x362 = 12U;
	int32_t x363 = -57;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t87 = 29117461499LLU;

	t87 = ((x361&(x362==x363))/x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 10U;
	uint16_t x366 = 1925U;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;

	t88 = ((x365&(x366==x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x369 = INT16_MIN;
	int32_t x372 = -16;
	volatile int32_t t89 = 56075;

	t89 = ((x369&(x370==x371))/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	volatile int8_t x374 = -1;
	static uint16_t x376 = UINT16_MAX;
	static volatile int32_t t90 = -24556483;

	t90 = ((x373&(x374==x375))/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MAX;
	volatile int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	int64_t t91 = 372509256507046502LL;

	t91 = ((x377&(x378==x379))/x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x382 = INT16_MIN;
	static int32_t x383 = 3;
	uint32_t x384 = 54465U;
	uint32_t t92 = 1299U;

	t92 = ((x381&(x382==x383))/x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x386 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	uint32_t t93 = 1U;

	t93 = ((x385&(x386==x387))/x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MAX;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile int16_t x392 = -1;
	int32_t t94 = 199985004;

	t94 = ((x389&(x390==x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x393 = -1;
	uint32_t x394 = 15610U;
	int32_t x396 = INT32_MAX;
	int32_t t95 = 17057;

	t95 = ((x393&(x394==x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = UINT32_MAX;
	volatile int16_t x398 = 24;
	uint8_t x399 = 4U;

	t96 = ((x397&(x398==x399))/x400);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 41U;
	uint8_t x403 = 3U;
	volatile int8_t x404 = INT8_MIN;
	int32_t t97 = 233770;

	t97 = ((x401&(x402==x403))/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x408 = 379912687U;

	t98 = ((x405&(x406==x407))/x408);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x409 = -3464LL;
	uint8_t x410 = 1U;
	static int8_t x411 = 6;
	uint16_t x412 = 117U;
	volatile int64_t t99 = -4LL;

	t99 = ((x409&(x410==x411))/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

