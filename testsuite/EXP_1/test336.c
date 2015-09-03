#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x17 = UINT64_MAX;
int64_t x18 = -1LL;
int16_t x22 = INT16_MIN;
volatile uint64_t t3 = 2251398031LLU;
int64_t x44 = -53333LL;
volatile int64_t x45 = INT64_MAX;
uint32_t x46 = UINT32_MAX;
volatile uint8_t x52 = 0U;
static int64_t x55 = INT64_MIN;
uint16_t x64 = UINT16_MAX;
int64_t t12 = -442125726LL;
static int64_t x67 = INT64_MAX;
int16_t x69 = INT16_MIN;
uint64_t t14 = 58856847200233LLU;
static int64_t t15 = -29139LL;
uint16_t x77 = 10723U;
static int8_t x79 = 1;
uint64_t t17 = 41646LLU;
int64_t x85 = -1LL;
uint8_t x86 = 24U;
uint64_t x88 = UINT64_MAX;
static int16_t x97 = 586;
int64_t x99 = -11LL;
static int8_t x104 = -3;
int16_t x107 = 10074;
uint16_t x108 = UINT16_MAX;
volatile int32_t t21 = 1;
int32_t x128 = INT32_MIN;
int8_t x131 = INT8_MAX;
int32_t t28 = INT32_MIN;
volatile int8_t x144 = INT8_MIN;
int32_t x150 = INT32_MIN;
uint64_t t31 = 45402156LLU;
static int8_t x161 = -1;
volatile uint64_t x162 = 2093126952887218LLU;
static int64_t x167 = -2456926865011LL;
volatile uint8_t x171 = 70U;
uint16_t x175 = 374U;
int16_t x177 = 22;
int32_t t37 = INT32_MIN;
uint8_t x182 = UINT8_MAX;
int8_t x190 = INT8_MAX;
volatile uint32_t x204 = UINT32_MAX;
uint8_t x205 = 102U;
static int64_t x214 = INT64_MAX;
int8_t x221 = 0;
int8_t x223 = INT8_MAX;
volatile int64_t x224 = 13655276383LL;
static int16_t x226 = INT16_MIN;
uint32_t x228 = 14863591U;
uint64_t x229 = 158767509213716209LLU;
static uint32_t t52 = 22139476U;
uint8_t x252 = UINT8_MAX;
volatile uint64_t t54 = 9678LLU;
int8_t x262 = INT8_MIN;
volatile uint32_t t57 = 899378U;
int8_t x269 = INT8_MIN;
int8_t x271 = INT8_MAX;
static int16_t x272 = -1;
volatile int8_t x273 = INT8_MAX;
volatile int16_t x285 = INT16_MIN;
int64_t t62 = -5932001LL;
uint32_t x291 = 3U;
volatile uint16_t x303 = UINT16_MAX;
uint32_t x305 = 91U;
uint8_t x306 = UINT8_MAX;
int32_t x314 = 0;
static int32_t x325 = -1;
uint16_t x328 = UINT16_MAX;
uint32_t x330 = 161621081U;
int8_t x332 = INT8_MAX;
static uint32_t x341 = 10816164U;
int8_t x347 = -1;
int32_t x366 = 8187947;
int64_t x373 = -1LL;
uint16_t x376 = 14U;
int64_t t81 = 94LL;
int64_t x400 = -165450665LL;
int16_t x403 = INT16_MIN;
static int64_t t86 = 39373603657970702LL;
int16_t x406 = -1;
volatile uint64_t t87 = 0LLU;
int64_t t89 = 1152621443LL;
static int16_t x429 = 8462;
int8_t x431 = INT8_MIN;
static int16_t x433 = 88;
int32_t x434 = INT32_MAX;
uint16_t x435 = UINT16_MAX;
int16_t x446 = -1;
static volatile int64_t x449 = INT64_MIN;
static int8_t x454 = INT8_MAX;
uint64_t t98 = 1053211462086703762LLU;


void f0(void) {
	int32_t x5 = -6469274;
	int16_t x6 = -1590;
	int8_t x7 = -1;
	volatile uint16_t x8 = 158U;
	int32_t t0 = -59;

	t0 = (((x5-x6)^x7)&x8);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = 7;
	int32_t x15 = -1;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t1 = INT64_MIN;

	t1 = (((x13-x14)^x15)&x16);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x19 = INT8_MIN;
	int32_t x20 = -345;
	volatile uint64_t t2 = 1322517627589550700LLU;

	t2 = (((x17-x18)^x19)&x20);

	if (t2 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 8411836104742245175LLU;
	static int64_t x23 = 62842003181653LL;
	static uint32_t x24 = 2U;

	t3 = (((x21-x22)^x23)&x24);

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 2169567994532079465LLU;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	int32_t x28 = -145378899;
	uint64_t t4 = 957640646136LLU;

	t4 = (((x25-x26)^x27)&x28);

	if (t4 != 11392940033398022441LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 6798865LLU;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	uint64_t t5 = 6110567491657264937LLU;

	t5 = (((x29-x30)^x31)&x32);

	if (t5 != 6831727LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -3120224;
	static int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	int32_t x36 = -35256;
	int32_t t6 = 728530;

	t6 = (((x33-x34)^x35)&x36);

	if (t6 != -2144398336) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	volatile int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	static volatile int64_t t7 = 132489017975LL;

	t7 = (((x41-x42)^x43)&x44);

	if (t7 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 1U;
	uint64_t t8 = 4462LLU;

	t8 = (((x45-x46)^x47)&x48);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = 58430;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = -1;
	volatile uint32_t t9 = 8489628U;

	t9 = (((x49-x50)^x51)&x52);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = INT32_MIN;
	static volatile uint32_t x54 = UINT32_MAX;
	int64_t x56 = -1LL;
	volatile int64_t t10 = -27880960532070LL;

	t10 = (((x53-x54)^x55)&x56);

	if (t10 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -26;
	volatile uint16_t x58 = 25U;
	uint16_t x59 = UINT16_MAX;
	static volatile int16_t x60 = INT16_MIN;
	int32_t t11 = 14;

	t11 = (((x57-x58)^x59)&x60);

	if (t11 != -65536) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -7;
	static volatile int32_t x62 = 406973063;
	int64_t x63 = INT64_MIN;

	t12 = (((x61-x62)^x63)&x64);

	if (t12 != 5490LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 258717LLU;
	uint64_t x66 = UINT64_MAX;
	int8_t x68 = INT8_MAX;
	static volatile uint64_t t13 = 1LLU;

	t13 = (((x65-x66)^x67)&x68);

	if (t13 != 97LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x70 = UINT32_MAX;
	static int8_t x71 = INT8_MIN;
	volatile uint64_t x72 = UINT64_MAX;

	t14 = (((x69-x70)^x71)&x72);

	if (t14 != 32641LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;

	t15 = (((x73-x74)^x75)&x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t16 = 75;

	t16 = (((x77-x78)^x79)&x80);

	if (t16 != 10624) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 327750159094364LLU;
	int16_t x83 = 3;
	volatile int64_t x84 = INT64_MIN;

	t17 = (((x81-x82)^x83)&x84);

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x87 = 35LL;
	volatile uint64_t t18 = 2510212LLU;

	t18 = (((x85-x86)^x87)&x88);

	if (t18 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x98 = 19U;
	int32_t x100 = INT32_MIN;
	int64_t t19 = 12817351097LL;

	t19 = (((x97-x98)^x99)&x100);

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = 1567U;
	volatile uint8_t x102 = 56U;
	uint32_t x103 = UINT32_MAX;
	static uint32_t t20 = 608364U;

	t20 = (((x101-x102)^x103)&x104);

	if (t20 != 4294965784U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = 6;
	uint8_t x106 = UINT8_MAX;

	t21 = (((x105-x106)^x107)&x108);

	if (t21 != 55389) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x113 = 123705286LL;
	static int32_t x114 = -16;
	static uint16_t x115 = 7U;
	static int32_t x116 = -1;
	volatile int64_t t22 = 5253128LL;

	t22 = (((x113-x114)^x115)&x116);

	if (t22 != 123705297LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	static int16_t x118 = 8567;
	static uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MAX;
	volatile uint32_t t23 = 1660672263U;

	t23 = (((x117-x118)^x119)&x120);

	if (t23 != 8439U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x121 = INT16_MAX;
	static volatile uint64_t x122 = 6789425278158608003LLU;
	int32_t x123 = -1;
	int64_t x124 = INT64_MIN;
	uint64_t t24 = 35LLU;

	t24 = (((x121-x122)^x123)&x124);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MAX;
	uint16_t x127 = 26U;
	volatile uint32_t t25 = 1663858305U;

	t25 = (((x125-x126)^x127)&x128);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	uint16_t x132 = 161U;
	int64_t t26 = -5966729988167705LL;

	t26 = (((x129-x130)^x131)&x132);

	if (t26 != 33LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = -6;
	static int16_t x134 = -76;
	volatile int64_t x135 = -1LL;
	uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t27 = 16LLU;

	t27 = (((x133-x134)^x135)&x136);

	if (t27 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x137 = INT8_MIN;
	static volatile uint8_t x138 = 10U;
	static uint16_t x139 = 58U;
	static int32_t x140 = INT32_MIN;

	t28 = (((x137-x138)^x139)&x140);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = INT64_MIN;
	static int16_t x142 = -16342;
	int16_t x143 = -16107;
	static volatile int64_t t29 = -41326702LL;

	t29 = (((x141-x142)^x143)&x144);

	if (t29 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	static int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	static int16_t x148 = INT16_MAX;
	volatile int64_t t30 = -185158LL;

	t30 = (((x145-x146)^x147)&x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x149 = INT32_MIN;
	static int32_t x151 = 48191;
	uint64_t x152 = 40521995LLU;

	t31 = (((x149-x150)^x151)&x152);

	if (t31 != 4107LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 8542;
	static volatile int16_t x158 = INT16_MAX;
	static int64_t x159 = INT64_MAX;
	int8_t x160 = -1;
	int64_t t32 = 197807LL;

	t32 = (((x157-x158)^x159)&x160);

	if (t32 != -9223372036854751584LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x163 = INT64_MIN;
	int64_t x164 = 3464085LL;
	uint64_t t33 = 5032427LLU;

	t33 = (((x161-x162)^x163)&x164);

	if (t33 != 55301LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = -5343;
	int32_t x166 = -12207;
	int8_t x168 = INT8_MIN;
	volatile int64_t t34 = 26961681798298359LL;

	t34 = (((x165-x166)^x167)&x168);

	if (t34 != -2456926870784LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -1LL;
	int16_t x170 = 5908;
	static uint32_t x172 = 3335U;
	int64_t t35 = 36535092098507LL;

	t35 = (((x169-x170)^x171)&x172);

	if (t35 != 2053LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = INT64_MAX;
	uint64_t x176 = 188660134746370LLU;
	uint64_t t36 = 555LLU;

	t36 = (((x173-x174)^x175)&x176);

	if (t36 != 258LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x178 = INT32_MAX;
	volatile uint8_t x179 = UINT8_MAX;
	int32_t x180 = INT32_MIN;

	t37 = (((x177-x178)^x179)&x180);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = 1792610150569LL;
	int64_t x183 = -1LL;
	int16_t x184 = -1;
	int64_t t38 = 3659490621848220LL;

	t38 = (((x181-x182)^x183)&x184);

	if (t38 != -1792610150315LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -45;
	int64_t x186 = -1LL;
	volatile uint64_t x187 = 5953149494LLU;
	int8_t x188 = -1;
	volatile uint64_t t39 = 4763872243406LLU;

	t39 = (((x185-x186)^x187)&x188);

	if (t39 != 18446744067756402146LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 7821U;
	volatile uint32_t t40 = 461U;

	t40 = (((x189-x190)^x191)&x192);

	if (t40 != 7693U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 21U;
	int16_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = 0;
	static volatile uint64_t t41 = 33112381036LLU;

	t41 = (((x193-x194)^x195)&x196);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = -1;
	uint64_t x199 = 145867LLU;
	static uint16_t x200 = UINT16_MAX;
	uint64_t t42 = 145724499319214182LLU;

	t42 = (((x197-x198)^x199)&x200);

	if (t42 != 14539LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	int16_t x203 = -3777;
	uint32_t t43 = 2U;

	t43 = (((x201-x202)^x203)&x204);

	if (t43 != 4294938304U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 32421U;
	int16_t x208 = -1376;
	int32_t t44 = -58;

	t44 = (((x205-x206)^x207)&x208);

	if (t44 != -32640) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	volatile uint16_t x210 = 177U;
	uint16_t x211 = 7U;
	int8_t x212 = -1;
	int32_t t45 = 26;

	t45 = (((x209-x210)^x211)&x212);

	if (t45 != -32952) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x213 = INT8_MAX;
	volatile uint8_t x215 = UINT8_MAX;
	int32_t x216 = -1;
	volatile int64_t t46 = 325034546LL;

	t46 = (((x213-x214)^x215)&x216);

	if (t46 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x222 = UINT8_MAX;
	volatile int64_t t47 = 10133LL;

	t47 = (((x221-x222)^x223)&x224);

	if (t47 != 13655276382LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = -3911471;
	int32_t x227 = -2;
	volatile uint32_t t48 = 264U;

	t48 = (((x225-x226)^x227)&x228);

	if (t48 != 2231335U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = INT16_MIN;
	static volatile int8_t x231 = INT8_MIN;
	static volatile int16_t x232 = 0;
	uint64_t t49 = 1524099152LLU;

	t49 = (((x229-x230)^x231)&x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x233 = -1LL;
	int32_t x234 = INT32_MIN;
	static uint32_t x235 = 209U;
	static int8_t x236 = INT8_MAX;
	volatile int64_t t50 = -137478154620719LL;

	t50 = (((x233-x234)^x235)&x236);

	if (t50 != 46LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 574U;
	volatile int16_t x238 = INT16_MAX;
	int16_t x239 = -1;
	uint32_t x240 = 2U;
	uint32_t t51 = 250U;

	t51 = (((x237-x238)^x239)&x240);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = -1;
	static uint32_t x242 = 509390961U;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = -768898759;

	t52 = (((x241-x242)^x243)&x244);

	if (t52 != 302546993U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = 39U;
	int64_t x246 = INT64_MAX;
	int16_t x247 = -8111;
	static int64_t x248 = INT64_MIN;
	volatile int64_t t53 = 25887267783LL;

	t53 = (((x245-x246)^x247)&x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x249 = 7692LLU;
	int16_t x250 = 7422;
	uint32_t x251 = 0U;

	t54 = (((x249-x250)^x251)&x252);

	if (t54 != 14LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = 25LL;
	static int8_t x254 = 1;
	int32_t x255 = -256002;
	volatile int16_t x256 = -1;
	static int64_t t55 = 189614124037LL;

	t55 = (((x253-x254)^x255)&x256);

	if (t55 != -256026LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = INT32_MIN;
	static int16_t x259 = INT16_MAX;
	uint16_t x260 = 0U;
	volatile uint64_t t56 = 66LLU;

	t56 = (((x257-x258)^x259)&x260);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 128U;
	static uint32_t x263 = 11U;
	uint32_t x264 = 615398961U;

	t57 = (((x261-x262)^x263)&x264);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = -1;
	volatile uint16_t x266 = 23611U;
	int16_t x267 = INT16_MAX;
	static volatile int8_t x268 = 1;
	volatile int32_t t58 = -1;

	t58 = (((x265-x266)^x267)&x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x270 = -240363;
	int32_t t59 = -744963;

	t59 = (((x269-x270)^x271)&x272);

	if (t59 != 240148) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = 2;
	int8_t x276 = -3;
	int32_t t60 = -27;

	t60 = (((x273-x274)^x275)&x276);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MIN;
	static volatile int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 25401661624940746LLU;
	volatile uint64_t t61 = 394268010814280026LLU;

	t61 = (((x277-x278)^x279)&x280);

	if (t61 != 25401661624940672LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x286 = INT64_MIN;
	static uint32_t x287 = 164U;
	uint8_t x288 = UINT8_MAX;

	t62 = (((x285-x286)^x287)&x288);

	if (t62 != 164LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MAX;
	int64_t x290 = 5329922LL;
	int32_t x292 = INT32_MIN;
	static int64_t t63 = -301LL;

	t63 = (((x289-x290)^x291)&x292);

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MAX;
	uint8_t x294 = 15U;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t64 = 497;

	t64 = (((x293-x294)^x295)&x296);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -1;
	uint64_t x299 = UINT64_MAX;
	volatile uint32_t x300 = 3U;
	volatile uint64_t t65 = 3LLU;

	t65 = (((x297-x298)^x299)&x300);

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -1LL;
	int8_t x304 = INT8_MIN;
	volatile int64_t t66 = 262LL;

	t66 = (((x301-x302)^x303)&x304);

	if (t66 != -65536LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x307 = 633;
	uint16_t x308 = UINT16_MAX;
	uint32_t t67 = 70402456U;

	t67 = (((x305-x306)^x307)&x308);

	if (t67 != 64805U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = 1;
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t68 = -229530876;

	t68 = (((x313-x314)^x315)&x316);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = 50;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = INT32_MAX;
	static uint32_t t69 = 48239620U;

	t69 = (((x317-x318)^x319)&x320);

	if (t69 != 177U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x321 = -1340;
	static volatile int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t70 = -17261;

	t70 = (((x321-x322)^x323)&x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x326 = 3;
	int8_t x327 = 1;
	int32_t t71 = 92;

	t71 = (((x325-x326)^x327)&x328);

	if (t71 != 65533) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x329 = INT8_MIN;
	uint64_t x331 = 5534084341674LLU;
	volatile uint64_t t72 = 4374LLU;

	t72 = (((x329-x330)^x331)&x332);

	if (t72 != 13LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x342 = INT16_MIN;
	int64_t x343 = -454471340LL;
	static int16_t x344 = -1;
	static volatile int64_t t73 = 23867378147LL;

	t73 = (((x341-x342)^x343)&x344);

	if (t73 != -464725008LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	volatile uint64_t x348 = 840911147843589LLU;
	volatile uint64_t t74 = 28768868014890071LLU;

	t74 = (((x345-x346)^x347)&x348);

	if (t74 != 840909499400192LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 184783324U;
	int64_t x352 = -6526165016125LL;
	volatile int64_t t75 = 102471755079352LL;

	t75 = (((x349-x350)^x351)&x352);

	if (t75 != -9223372036821220928LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t76 = 1;

	t76 = (((x353-x354)^x355)&x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = 3202937LLU;
	static uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t77 = 81252025700684355LLU;

	t77 = (((x361-x362)^x363)&x364);

	if (t77 != 18446744071565246464LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x365 = INT16_MIN;
	static volatile int16_t x367 = -1;
	static int64_t x368 = INT64_MAX;
	volatile int64_t t78 = -1455819746668193074LL;

	t78 = (((x365-x366)^x367)&x368);

	if (t78 != 8220714LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = -1;
	volatile int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = UINT16_MAX;
	static int32_t t79 = -116400440;

	t79 = (((x369-x370)^x371)&x372);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x374 = 1898U;
	int64_t x375 = -1LL;
	volatile int64_t t80 = 528018003896937LL;

	t80 = (((x373-x374)^x375)&x376);

	if (t80 != 10LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x377 = UINT8_MAX;
	volatile int64_t x378 = -1LL;
	int16_t x379 = -1;
	int32_t x380 = -1;

	t81 = (((x377-x378)^x379)&x380);

	if (t81 != -257LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x381 = -1;
	volatile uint16_t x382 = 248U;
	int16_t x383 = -1;
	uint32_t x384 = 745594011U;
	volatile uint32_t t82 = 0U;

	t82 = (((x381-x382)^x383)&x384);

	if (t82 != 152U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x385 = 88782860370874461LLU;
	static int8_t x386 = 0;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t83 = 135280463LLU;

	t83 = (((x385-x386)^x387)&x388);

	if (t83 != 88782858113515520LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = 231U;
	volatile uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = -2027431;
	int8_t x396 = -40;
	volatile uint64_t t84 = 14652719428270073LLU;

	t84 = (((x393-x394)^x395)&x396);

	if (t84 != 18446744073707524240LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = -1;
	int16_t x398 = -10;
	int32_t x399 = -1;
	int64_t t85 = 339LL;

	t85 = (((x397-x398)^x399)&x400);

	if (t85 != -165450666LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1631222306508282409LL;
	volatile int16_t x404 = INT16_MIN;

	t86 = (((x401-x402)^x403)&x404);

	if (t86 != -1631222306508374016LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x405 = 13157876LLU;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;

	t87 = (((x405-x406)^x407)&x408);

	if (t87 != 9223372036867933568LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MIN;
	uint16_t x416 = 159U;
	volatile uint32_t t88 = 6219U;

	t88 = (((x413-x414)^x415)&x416);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x417 = -71;
	static int64_t x418 = -28899113876LL;
	uint32_t x419 = 1U;
	int32_t x420 = 399917179;

	t89 = (((x417-x418)^x419)&x420);

	if (t89 != 310657096LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	int64_t x422 = 1898189069LL;
	int8_t x423 = INT8_MIN;
	static uint32_t x424 = 102U;
	volatile int64_t t90 = -84665488705LL;

	t90 = (((x421-x422)^x423)&x424);

	if (t90 != 98LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x425 = 42U;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 2U;
	volatile int16_t x428 = -5262;
	volatile uint32_t t91 = 64799485U;

	t91 = (((x425-x426)^x427)&x428);

	if (t91 != 32U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x430 = UINT8_MAX;
	int64_t x432 = -391198911LL;
	volatile int64_t t92 = -59137845LL;

	t92 = (((x429-x430)^x431)&x432);

	if (t92 != -391198975LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x436 = 12726;
	volatile int32_t t93 = 915;

	t93 = (((x433-x434)^x435)&x436);

	if (t93 != 12710) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = 0;
	int8_t x438 = INT8_MIN;
	static int8_t x439 = 0;
	static int32_t x440 = -7790906;
	int32_t t94 = 29;

	t94 = (((x437-x438)^x439)&x440);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = 3112501;
	static uint16_t x442 = UINT16_MAX;
	uint32_t x443 = 1038519U;
	static volatile int32_t x444 = -1056;
	volatile uint32_t t95 = 8502098U;

	t95 = (((x441-x442)^x443)&x444);

	if (t95 != 2204288U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x445 = 1092261211627524LL;
	int32_t x447 = INT32_MIN;
	static uint32_t x448 = UINT32_MAX;
	int64_t t96 = -83877LL;

	t96 = (((x445-x446)^x447)&x448);

	if (t96 != 1636130821LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x450 = INT16_MIN;
	int32_t x451 = -1;
	uint64_t x452 = 34656298022099038LLU;
	volatile uint64_t t97 = 619507446LLU;

	t97 = (((x449-x450)^x451)&x452);

	if (t97 != 34656298022099038LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = -287;
	static uint64_t x455 = 3470418285082110260LLU;
	static int32_t x456 = INT32_MIN;

	t98 = (((x453-x454)^x455)&x456);

	if (t98 != 14976325786754088960LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = 149875;
	uint64_t x458 = UINT64_MAX;
	int8_t x459 = INT8_MIN;
	int64_t x460 = -185LL;
	volatile uint64_t t99 = 66849847761203LLU;

	t99 = (((x457-x458)^x459)&x460);

	if (t99 != 18446744073709401668LLU) { NG(); } else { ; }
	
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

