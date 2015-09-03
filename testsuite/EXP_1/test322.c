#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
int64_t x7 = -1087161714121LL;
static volatile int64_t x10 = INT64_MAX;
volatile int32_t t1 = -1440;
uint16_t x13 = 887U;
int32_t x20 = INT32_MAX;
volatile uint8_t x25 = UINT8_MAX;
uint64_t x27 = 112LLU;
static volatile int32_t x33 = -9158;
uint16_t x35 = UINT16_MAX;
int64_t x36 = -1LL;
static int32_t x41 = -1;
volatile int32_t t8 = -166773;
int32_t t9 = -467;
static uint8_t x61 = 0U;
volatile int32_t t13 = -28448;
static int64_t x67 = 169282512LL;
volatile int32_t t14 = 0;
int16_t x69 = 11969;
int32_t t15 = -7534;
uint16_t x75 = UINT16_MAX;
static volatile uint8_t x87 = 18U;
int8_t x89 = INT8_MIN;
int32_t t20 = 232883;
static uint16_t x109 = 1070U;
uint32_t x110 = 929687U;
static int64_t x122 = INT64_MAX;
uint64_t x124 = UINT64_MAX;
int16_t x128 = INT16_MIN;
int16_t x136 = 107;
int32_t t28 = -56134;
volatile uint32_t x143 = UINT32_MAX;
volatile int8_t x146 = INT8_MAX;
volatile int32_t x147 = 736850;
volatile int32_t t32 = 6162826;
int32_t x165 = INT32_MIN;
int32_t x166 = INT32_MIN;
static int64_t x168 = INT64_MIN;
uint64_t x169 = 17944483165649LLU;
int32_t t36 = -1493488;
volatile int8_t x173 = -1;
int16_t x176 = -1878;
int8_t x184 = INT8_MIN;
volatile int64_t x188 = INT64_MIN;
volatile int32_t t40 = 204;
int64_t x201 = -108115568224783529LL;
int32_t t43 = -183099;
static volatile int32_t t44 = 1;
int16_t x210 = INT16_MIN;
volatile int32_t t45 = 215;
volatile int32_t x214 = INT32_MIN;
uint8_t x224 = UINT8_MAX;
static int32_t x227 = -1;
uint8_t x235 = UINT8_MAX;
volatile uint64_t x240 = 4099896LLU;
uint16_t x241 = UINT16_MAX;
int8_t x242 = 11;
static volatile int32_t t54 = -524425087;
static int16_t x251 = INT16_MAX;
int32_t t55 = 1997;
volatile int32_t x259 = INT32_MAX;
int32_t x263 = -47505;
volatile uint16_t x265 = 1U;
static int32_t x266 = -829256878;
uint32_t x274 = UINT32_MAX;
static volatile int32_t x276 = INT32_MIN;
volatile int32_t t63 = 0;
static int8_t x292 = INT8_MIN;
volatile int8_t x294 = -2;
volatile int32_t t67 = 921499;
volatile uint16_t x303 = 14280U;
int16_t x308 = INT16_MIN;
int32_t x312 = 45247;
int16_t x318 = INT16_MIN;
int32_t t72 = -841;
int8_t x321 = 2;
static int8_t x323 = -14;
int32_t x325 = -1;
int32_t t74 = 48;
int8_t x329 = INT8_MAX;
volatile uint8_t x330 = 3U;
volatile int32_t t76 = -982;
int32_t x342 = -249;
static int16_t x353 = INT16_MAX;
uint32_t x357 = UINT32_MAX;
volatile int64_t x361 = -40LL;
int32_t t83 = -265;
uint64_t x369 = UINT64_MAX;
uint8_t x372 = 2U;
int32_t x377 = INT32_MIN;
static uint32_t x379 = 68103U;
uint32_t x381 = 233U;
uint16_t x386 = 157U;
volatile int32_t t89 = 10813;
int8_t x394 = 19;
int8_t x401 = 1;
volatile uint64_t x402 = 103323729779LLU;
int64_t x404 = -1LL;
int64_t x412 = -1445LL;
uint16_t x415 = 109U;
int16_t x420 = INT16_MIN;
int64_t x427 = INT64_MAX;
int32_t t96 = -33;
static int32_t x436 = 17938501;
int16_t x439 = INT16_MAX;
int64_t x440 = -1LL;
int32_t t99 = 60536463;


void f0(void) {
	static int8_t x6 = INT8_MAX;
	uint64_t x8 = 1LLU;
	int32_t t0 = -1;

	t0 = (((x5-x6)|x7)<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 4422030537LLU;
	int8_t x11 = INT8_MAX;
	static int64_t x12 = 445127920211836330LL;

	t1 = (((x9-x10)|x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 4U;
	static uint8_t x15 = 0U;
	volatile int64_t x16 = INT64_MAX;
	volatile int32_t t2 = 54563;

	t2 = (((x13-x14)|x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	uint16_t x18 = 49U;
	int32_t x19 = INT32_MAX;
	int32_t t3 = 396203;

	t3 = (((x17-x18)|x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 655LL;
	int64_t x22 = -38518635638274LL;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = 3670U;
	int32_t t4 = -2098471;

	t4 = (((x21-x22)|x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 6474035LL;
	int16_t x28 = -1;
	int32_t t5 = -37275378;

	t5 = (((x25-x26)|x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MAX;
	static volatile uint64_t x31 = 17LLU;
	int64_t x32 = -28536297LL;
	int32_t t6 = 3448922;

	t6 = (((x29-x30)|x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	volatile int32_t t7 = -6813133;

	t7 = (((x33-x34)|x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = 1553980481LL;
	uint32_t x44 = UINT32_MAX;

	t8 = (((x41-x42)|x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -143;
	uint8_t x46 = 0U;
	volatile uint16_t x47 = 5U;
	volatile int32_t x48 = INT32_MIN;

	t9 = (((x45-x46)|x47)<=x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t10 = -4929;

	t10 = (((x49-x50)|x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile int64_t x56 = INT64_MIN;
	volatile int32_t t11 = 0;

	t11 = (((x53-x54)|x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	volatile int8_t x58 = 0;
	int32_t x59 = INT32_MIN;
	int16_t x60 = 2;
	int32_t t12 = -3;

	t12 = (((x57-x58)|x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x62 = -2090LL;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MIN;

	t13 = (((x61-x62)|x63)<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 1;
	volatile int64_t x66 = -371983LL;
	volatile int64_t x68 = INT64_MIN;

	t14 = (((x65-x66)|x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x70 = UINT8_MAX;
	volatile int8_t x71 = -24;
	int8_t x72 = INT8_MAX;

	t15 = (((x69-x70)|x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x73 = -1LL;
	uint16_t x74 = 203U;
	int32_t x76 = INT32_MIN;
	int32_t t16 = -557;

	t16 = (((x73-x74)|x75)<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = INT16_MIN;
	static int8_t x79 = -1;
	int8_t x80 = 9;
	static int32_t t17 = 209;

	t17 = (((x77-x78)|x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 29131177U;
	int32_t x82 = -1;
	int8_t x83 = INT8_MAX;
	int64_t x84 = 51962863012LL;
	int32_t t18 = 0;

	t18 = (((x81-x82)|x83)<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	volatile int32_t x86 = -1900;
	int32_t x88 = -1;
	int32_t t19 = -28314202;

	t19 = (((x85-x86)|x87)<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x90 = 4955U;
	uint64_t x91 = UINT64_MAX;
	static volatile uint16_t x92 = UINT16_MAX;

	t20 = (((x89-x90)|x91)<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 15;
	int8_t x94 = -1;
	volatile int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MAX;
	int32_t t21 = -305881309;

	t21 = (((x93-x94)|x95)<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	int32_t x98 = -3090;
	int64_t x99 = -1LL;
	volatile uint32_t x100 = 192U;
	static int32_t t22 = 33968;

	t22 = (((x97-x98)|x99)<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	static int16_t x107 = -5;
	int32_t x108 = -1;
	volatile int32_t t23 = 100;

	t23 = (((x105-x106)|x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = 2U;
	volatile int32_t t24 = 45;

	t24 = (((x109-x110)|x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x121 = 0;
	int8_t x123 = INT8_MIN;
	int32_t t25 = -59220860;

	t25 = (((x121-x122)|x123)<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 7288069716257932729LLU;
	uint64_t x126 = 6441LLU;
	static int32_t x127 = INT32_MIN;
	static volatile int32_t t26 = 1;

	t26 = (((x125-x126)|x127)<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = -1LL;
	int64_t x130 = INT64_MAX;
	int32_t x131 = -51887;
	volatile int8_t x132 = INT8_MAX;
	volatile int32_t t27 = -614;

	t27 = (((x129-x130)|x131)<=x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = 2;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;

	t28 = (((x133-x134)|x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 8078LLU;
	int64_t x142 = -16LL;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t29 = 375;

	t29 = (((x141-x142)|x143)<=x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	int32_t x148 = -1;
	volatile int32_t t30 = 1593;

	t30 = (((x145-x146)|x147)<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x149 = -123;
	int64_t x150 = -1LL;
	static uint16_t x151 = 8U;
	volatile int32_t x152 = -44050;
	volatile int32_t t31 = -25210758;

	t31 = (((x149-x150)|x151)<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 14U;
	int16_t x154 = 13825;
	int16_t x155 = INT16_MAX;
	volatile int8_t x156 = -1;

	t32 = (((x153-x154)|x155)<=x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x157 = INT8_MAX;
	static uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -15;
	volatile int32_t t33 = 267558;

	t33 = (((x157-x158)|x159)<=x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 14LLU;
	uint16_t x162 = 666U;
	static uint32_t x163 = 1032U;
	static int64_t x164 = INT64_MAX;
	int32_t t34 = 2788556;

	t34 = (((x161-x162)|x163)<=x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x167 = 1254043832690844LLU;
	int32_t t35 = 143041;

	t35 = (((x165-x166)|x167)<=x168);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x170 = 16054535844124071LLU;
	int8_t x171 = INT8_MAX;
	volatile uint64_t x172 = 868295LLU;

	t36 = (((x169-x170)|x171)<=x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = INT64_MAX;
	static int64_t x175 = 1097430LL;
	volatile int32_t t37 = 81989;

	t37 = (((x173-x174)|x175)<=x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	volatile int64_t x179 = 2238244106034LL;
	volatile int8_t x180 = INT8_MIN;
	int32_t t38 = -9184;

	t38 = (((x177-x178)|x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = UINT32_MAX;
	uint32_t x182 = UINT32_MAX;
	static uint8_t x183 = 3U;
	int32_t t39 = -218823876;

	t39 = (((x181-x182)|x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -1LL;
	int32_t x186 = -208;
	uint16_t x187 = UINT16_MAX;

	t40 = (((x185-x186)|x187)<=x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 2;
	volatile uint64_t x190 = UINT64_MAX;
	static uint16_t x191 = 2U;
	static int32_t x192 = INT32_MIN;
	int32_t t41 = 386339;

	t41 = (((x189-x190)|x191)<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x193 = -1LL;
	int16_t x194 = -1;
	uint64_t x195 = 294838LLU;
	uint64_t x196 = 362LLU;
	int32_t t42 = -483227348;

	t42 = (((x193-x194)|x195)<=x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x202 = UINT16_MAX;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;

	t43 = (((x201-x202)|x203)<=x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = INT64_MIN;
	static int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	volatile int32_t x208 = INT32_MIN;

	t44 = (((x205-x206)|x207)<=x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 8944U;
	int16_t x211 = INT16_MAX;
	static int64_t x212 = 1184909060929LL;

	t45 = (((x209-x210)|x211)<=x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = UINT32_MAX;
	static int16_t x215 = INT16_MIN;
	static int32_t x216 = INT32_MAX;
	int32_t t46 = 7887;

	t46 = (((x213-x214)|x215)<=x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 564LL;
	uint16_t x218 = 31U;
	int64_t x219 = 83941947834057519LL;
	int64_t x220 = INT64_MIN;
	int32_t t47 = -16816;

	t47 = (((x217-x218)|x219)<=x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x221 = 969U;
	static volatile int16_t x222 = -11963;
	int16_t x223 = INT16_MIN;
	static volatile int32_t t48 = -21783;

	t48 = (((x221-x222)|x223)<=x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1LL;
	int8_t x226 = 2;
	static int16_t x228 = -1;
	int32_t t49 = 962;

	t49 = (((x225-x226)|x227)<=x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	static int64_t x230 = -34236766243749128LL;
	int16_t x231 = -11;
	int8_t x232 = INT8_MIN;
	volatile int32_t t50 = -757106;

	t50 = (((x229-x230)|x231)<=x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -1;
	volatile uint64_t x236 = 373870642262LLU;
	int32_t t51 = 4;

	t51 = (((x233-x234)|x235)<=x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MIN;
	int8_t x239 = 9;
	volatile int32_t t52 = -81;

	t52 = (((x237-x238)|x239)<=x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x243 = -1;
	uint8_t x244 = 3U;
	volatile int32_t t53 = -474220;

	t53 = (((x241-x242)|x243)<=x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = UINT16_MAX;
	uint16_t x246 = UINT16_MAX;
	static uint32_t x247 = 370914U;
	volatile uint8_t x248 = 58U;

	t54 = (((x245-x246)|x247)<=x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = 20LL;
	int16_t x252 = INT16_MIN;

	t55 = (((x249-x250)|x251)<=x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -57;
	int8_t x254 = 1;
	uint32_t x255 = 5U;
	uint64_t x256 = 272LLU;
	volatile int32_t t56 = 1;

	t56 = (((x253-x254)|x255)<=x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 575LLU;
	static volatile int32_t x258 = INT32_MAX;
	int16_t x260 = 43;
	int32_t t57 = -61;

	t57 = (((x257-x258)|x259)<=x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -1;
	volatile uint64_t x262 = 879088688262LLU;
	static uint16_t x264 = 1U;
	static volatile int32_t t58 = 200;

	t58 = (((x261-x262)|x263)<=x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x267 = 706;
	static uint64_t x268 = 40LLU;
	volatile int32_t t59 = -52393806;

	t59 = (((x265-x266)|x267)<=x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -1;
	volatile int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t60 = 0;

	t60 = (((x269-x270)|x271)<=x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	volatile int32_t t61 = 1965;

	t61 = (((x273-x274)|x275)<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -1;
	volatile int32_t x278 = 24636;
	int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t62 = -7368561;

	t62 = (((x277-x278)|x279)<=x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x281 = 44U;
	int16_t x282 = 567;
	int8_t x283 = 1;
	uint16_t x284 = 25U;

	t63 = (((x281-x282)|x283)<=x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 26U;
	uint8_t x286 = 3U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int32_t t64 = -121;

	t64 = (((x285-x286)|x287)<=x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	int32_t t65 = -708933;

	t65 = (((x289-x290)|x291)<=x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 430168097952751LLU;
	int32_t x295 = INT32_MIN;
	static uint64_t x296 = 138LLU;
	static int32_t t66 = 3819;

	t66 = (((x293-x294)|x295)<=x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -4;
	volatile int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	uint16_t x300 = UINT16_MAX;

	t67 = (((x297-x298)|x299)<=x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = 1;
	int32_t x302 = INT32_MAX;
	int64_t x304 = -2614321698734LL;
	static int32_t t68 = 0;

	t68 = (((x301-x302)|x303)<=x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 263U;
	volatile int32_t t69 = 54;

	t69 = (((x305-x306)|x307)<=x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = UINT16_MAX;
	static int8_t x310 = INT8_MAX;
	volatile int8_t x311 = -1;
	int32_t t70 = 86530343;

	t70 = (((x309-x310)|x311)<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x313 = 110056091U;
	static int16_t x314 = -6;
	static volatile int64_t x315 = 71919331338686192LL;
	uint64_t x316 = 11362921LLU;
	int32_t t71 = 85;

	t71 = (((x313-x314)|x315)<=x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = INT8_MIN;
	volatile int32_t x319 = -1;
	static int32_t x320 = -1;

	t72 = (((x317-x318)|x319)<=x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x322 = 4;
	uint32_t x324 = UINT32_MAX;
	static int32_t t73 = 0;

	t73 = (((x321-x322)|x323)<=x324);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x326 = INT16_MAX;
	static int64_t x327 = 16824092310LL;
	uint64_t x328 = UINT64_MAX;

	t74 = (((x325-x326)|x327)<=x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x331 = UINT64_MAX;
	static uint8_t x332 = UINT8_MAX;
	volatile int32_t t75 = -3;

	t75 = (((x329-x330)|x331)<=x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x333 = UINT64_MAX;
	int32_t x334 = -2433;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = -1;

	t76 = (((x333-x334)|x335)<=x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = INT8_MAX;
	uint32_t x338 = UINT32_MAX;
	static volatile uint16_t x339 = 300U;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t77 = -76577;

	t77 = (((x337-x338)|x339)<=x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	uint32_t x343 = 3599U;
	volatile int8_t x344 = -1;
	static int32_t t78 = -22;

	t78 = (((x341-x342)|x343)<=x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = 0;
	int64_t x346 = INT64_MAX;
	static uint8_t x347 = 3U;
	int8_t x348 = -7;
	volatile int32_t t79 = 1;

	t79 = (((x345-x346)|x347)<=x348);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 0U;
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 16680U;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t80 = -8;

	t80 = (((x349-x350)|x351)<=x352);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x354 = INT16_MIN;
	volatile int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t81 = 92491040;

	t81 = (((x353-x354)|x355)<=x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MAX;
	volatile int32_t t82 = 45463713;

	t82 = (((x357-x358)|x359)<=x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x362 = 31U;
	static volatile int64_t x363 = -1LL;
	int64_t x364 = INT64_MIN;

	t83 = (((x361-x362)|x363)<=x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = 367;
	volatile int8_t x366 = INT8_MIN;
	volatile uint16_t x367 = 10381U;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t84 = 3169;

	t84 = (((x365-x366)|x367)<=x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x370 = 391068LL;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t85 = 378;

	t85 = (((x369-x370)|x371)<=x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = 1U;
	static int16_t x374 = INT16_MIN;
	static uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t86 = 271036142;

	t86 = (((x373-x374)|x375)<=x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x378 = INT8_MIN;
	uint32_t x380 = 300285U;
	int32_t t87 = -458;

	t87 = (((x377-x378)|x379)<=x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x382 = 3U;
	uint64_t x383 = 447LLU;
	uint16_t x384 = 30U;
	int32_t t88 = 739703466;

	t88 = (((x381-x382)|x383)<=x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = 0U;
	volatile int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;

	t89 = (((x385-x386)|x387)<=x388);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = -1;
	int64_t x390 = INT64_MAX;
	static uint8_t x391 = UINT8_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t90 = -5739100;

	t90 = (((x389-x390)|x391)<=x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x393 = UINT16_MAX;
	uint8_t x395 = 1U;
	volatile int16_t x396 = -1;
	int32_t t91 = 159907;

	t91 = (((x393-x394)|x395)<=x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x403 = 3;
	volatile int32_t t92 = -30565298;

	t92 = (((x401-x402)|x403)<=x404);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	volatile int8_t x411 = INT8_MIN;
	volatile int32_t t93 = -1288238;

	t93 = (((x409-x410)|x411)<=x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 8LLU;
	uint8_t x416 = UINT8_MAX;
	int32_t t94 = -30635;

	t94 = (((x413-x414)|x415)<=x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = -1;
	static int32_t x418 = INT32_MIN;
	uint16_t x419 = 2603U;
	static volatile int32_t t95 = -29;

	t95 = (((x417-x418)|x419)<=x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x425 = UINT64_MAX;
	volatile int32_t x426 = INT32_MAX;
	static volatile int8_t x428 = INT8_MIN;

	t96 = (((x425-x426)|x427)<=x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x429 = 14;
	int16_t x430 = INT16_MAX;
	uint8_t x431 = 0U;
	static int32_t x432 = 14773;
	int32_t t97 = 3994541;

	t97 = (((x429-x430)|x431)<=x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MAX;
	int32_t x434 = 29;
	uint16_t x435 = 0U;
	volatile int32_t t98 = 22920;

	t98 = (((x433-x434)|x435)<=x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;

	t99 = (((x437-x438)|x439)<=x440);

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

