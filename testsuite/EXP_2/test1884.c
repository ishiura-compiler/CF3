#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = UINT16_MAX;
uint8_t x12 = 103U;
uint64_t x16 = 74844881LLU;
uint32_t x17 = 406562867U;
volatile uint32_t x22 = UINT32_MAX;
int8_t x23 = -1;
volatile int16_t x24 = -1;
static int32_t x27 = 11;
volatile uint64_t x28 = 488865070845LLU;
int8_t x32 = -1;
int64_t x34 = INT64_MIN;
static volatile int32_t t9 = 741242;
volatile uint64_t t12 = 0LLU;
static int32_t t13 = 1;
static volatile int16_t x68 = INT16_MAX;
uint64_t x70 = 7006822474260929005LLU;
int64_t x73 = -1LL;
int32_t x78 = INT32_MAX;
int64_t x79 = 2571011LL;
int32_t x90 = -1;
uint8_t x91 = 66U;
int64_t t21 = -68452389LL;
uint64_t x101 = 1483LLU;
static volatile int64_t x110 = INT64_MIN;
int8_t x111 = -3;
int32_t x112 = 29;
static volatile uint32_t x113 = UINT32_MAX;
volatile uint8_t x131 = 71U;
int16_t x140 = -1;
int16_t x145 = INT16_MIN;
volatile uint32_t x153 = 2U;
volatile uint8_t x155 = UINT8_MAX;
int64_t x158 = INT64_MAX;
uint8_t x162 = 17U;
int16_t x163 = INT16_MAX;
volatile int32_t x171 = -1;
int16_t x172 = INT16_MAX;
volatile uint16_t x177 = UINT16_MAX;
int8_t x179 = 31;
int32_t t39 = -1670;
uint64_t t40 = 207088219LLU;
volatile int16_t x189 = INT16_MAX;
int32_t x197 = INT32_MIN;
int64_t t42 = -19013161920835984LL;
int16_t x206 = INT16_MIN;
int8_t x209 = INT8_MIN;
volatile uint8_t x213 = UINT8_MAX;
int64_t t46 = 7LL;
int64_t x222 = INT64_MIN;
int16_t x229 = -595;
volatile uint16_t x241 = 1U;
int16_t x242 = INT16_MAX;
int64_t t53 = 6133609381098982LL;
uint16_t x254 = UINT16_MAX;
int32_t x262 = -1;
static volatile int16_t x277 = -7;
int32_t x279 = INT32_MAX;
static int16_t x281 = -1;
int8_t x286 = -5;
int8_t x288 = -51;
static int64_t x291 = -355378725815LL;
uint64_t x296 = 30LLU;
int64_t x299 = -16781231348165LL;
volatile int64_t t65 = -7LL;
uint64_t x306 = 800LLU;
volatile int16_t x309 = -1;
int8_t x316 = INT8_MIN;
uint32_t x319 = 70349284U;
int64_t x320 = INT64_MIN;
volatile int64_t x321 = -1LL;
int64_t x322 = INT64_MAX;
int32_t x334 = INT32_MIN;
uint32_t x338 = UINT32_MAX;
volatile int8_t x340 = INT8_MIN;
uint64_t t77 = 31LLU;
volatile int64_t t79 = 244612612566866LL;
int16_t x361 = 17;
int64_t x364 = -1LL;
int8_t x381 = -1;
static uint8_t x393 = UINT8_MAX;
int64_t x397 = -1LL;
int8_t x402 = INT8_MIN;
uint8_t x408 = 19U;
volatile uint32_t t91 = 269241U;
uint8_t x409 = 40U;
int8_t x412 = -1;
int64_t x414 = -1LL;
uint8_t x426 = UINT8_MAX;
static int32_t x430 = INT32_MIN;
volatile uint8_t x431 = 1U;
volatile int32_t x432 = -1;
static int8_t x439 = INT8_MIN;
volatile uint16_t x443 = 3U;


void f0(void) {
	volatile uint8_t x5 = UINT8_MAX;
	static uint32_t x6 = UINT32_MAX;
	static int8_t x7 = 0;
	int32_t x8 = -1;
	uint32_t t0 = UINT32_MAX;

	t0 = ((x5-(x6|x7))|x8);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -6027;
	static int16_t x10 = -1;
	int32_t t1 = 15;

	t1 = ((x9-(x10|x11))|x12);

	if (t1 != -6025) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 646120121457923141LLU;
	int16_t x14 = INT16_MAX;
	uint16_t x15 = 16366U;
	static volatile uint64_t t2 = 18042567640164LLU;

	t2 = ((x13-(x14|x15))|x16);

	if (t2 != 646120121529458391LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = 793095517450788695LL;
	int16_t x19 = -6784;
	uint16_t x20 = 599U;
	volatile int64_t t3 = 76383760575573021LL;

	t3 = ((x17-(x18|x19))|x20);

	if (t3 != 406563423LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 10544869;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x21-(x22|x23))|x24);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint32_t x26 = 7445U;
	volatile uint64_t t5 = 3711294837LLU;

	t5 = ((x25-(x26|x27))|x28);

	if (t5 != 489626271485LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x29 = INT32_MIN;
	uint64_t x30 = 2114338313LLU;
	int16_t x31 = -16;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x29-(x30|x31))|x32);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 330LLU;
	uint64_t t7 = 6983252490089303LLU;

	t7 = ((x33-(x34|x35))|x36);

	if (t7 != 18446744073709486411LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 210333294879LLU;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;
	uint64_t t8 = 16355477LLU;

	t8 = ((x37-(x38|x39))|x40);

	if (t8 != 18446744073709543712LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = -1;

	t9 = ((x41-(x42|x43))|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	static int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	int64_t x48 = INT64_MIN;
	static volatile int64_t t10 = -2079077563015494804LL;

	t10 = ((x45-(x46|x47))|x48);

	if (t10 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -2;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 1009U;
	uint8_t x52 = 6U;
	volatile uint32_t t11 = 63443851U;

	t11 = ((x49-(x50|x51))|x52);

	if (t11 != 2147482639U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 182811271;
	uint64_t x54 = UINT64_MAX;
	volatile int32_t x55 = -1;
	int32_t x56 = INT32_MIN;

	t12 = ((x53-(x54|x55))|x56);

	if (t12 != 18446744071744879240LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MAX;
	volatile int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;

	t13 = ((x57-(x58|x59))|x60);

	if (t13 != 33023) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	static int64_t x66 = INT64_MIN;
	static int32_t x67 = INT32_MAX;
	int64_t t14 = 6953695643LL;

	t14 = ((x65-(x66|x67))|x68);

	if (t14 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1U;
	uint32_t x71 = 3726U;
	int32_t x72 = INT32_MAX;
	static volatile uint64_t t15 = 137144LLU;

	t15 = ((x69-(x70|x71))|x72);

	if (t15 != 11439921600095322111LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = -1;
	volatile int16_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int64_t t16 = -8939LL;

	t16 = ((x73-(x74|x75))|x76);

	if (t16 != 65535LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 358775;
	static int8_t x80 = INT8_MIN;
	volatile int64_t t17 = -16970656701709LL;

	t17 = ((x77-(x78|x79))|x80);

	if (t17 != -8LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = -22;
	volatile int32_t t18 = -3;

	t18 = ((x81-(x82|x83))|x84);

	if (t18 != -22) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 10U;
	int64_t x86 = INT64_MAX;
	static int8_t x87 = INT8_MIN;
	static uint16_t x88 = 1U;
	int64_t t19 = -16361032LL;

	t19 = ((x85-(x86|x87))|x88);

	if (t19 != 11LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	uint16_t x92 = 331U;
	volatile int64_t t20 = 0LL;

	t20 = ((x89-(x90|x91))|x92);

	if (t20 != -9223372036854775477LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -56193LL;
	int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MAX;
	volatile int8_t x96 = INT8_MIN;

	t21 = ((x93-(x94|x95))|x96);

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = INT64_MAX;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	uint64_t t22 = 1666LLU;

	t22 = ((x101-(x102|x103))|x104);

	if (t22 != 18446744071562069452LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = 132;
	volatile int64_t t23 = 926035262452490LL;

	t23 = ((x109-(x110|x111))|x112);

	if (t23 != 159LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x114 = 3U;
	int32_t x115 = INT32_MIN;
	static uint16_t x116 = 0U;
	volatile uint32_t t24 = 126U;

	t24 = ((x113-(x114|x115))|x116);

	if (t24 != 2147483644U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 51819973441LLU;
	volatile int32_t x118 = INT32_MIN;
	uint32_t x119 = 11550352U;
	static int32_t x120 = INT32_MIN;
	volatile uint64_t t25 = 464899364589269053LLU;

	t25 = ((x117-(x118|x119))|x120);

	if (t25 != 18446744071830883505LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	static int32_t x130 = 761458;
	static uint64_t x132 = 16LLU;
	uint64_t t26 = 1LLU;

	t26 = ((x129-(x130|x131))|x132);

	if (t26 != 18446744073708757401LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x133 = 218;
	static int16_t x134 = INT16_MIN;
	static volatile int16_t x135 = INT16_MIN;
	static volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t27 = 294684582;

	t27 = ((x133-(x134|x135))|x136);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 47359U;
	uint32_t t28 = UINT32_MAX;

	t28 = ((x137-(x138|x139))|x140);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MAX;
	static uint64_t x142 = UINT64_MAX;
	static int32_t x143 = -108909594;
	int32_t x144 = INT32_MIN;
	volatile uint64_t t29 = 10426359803LLU;

	t29 = ((x141-(x142|x143))|x144);

	if (t29 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x146 = -1;
	static int8_t x147 = -2;
	int64_t x148 = -54918996161716LL;
	int64_t t30 = 8578647LL;

	t30 = ((x145-(x146|x147))|x148);

	if (t30 != -29875LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x149 = 3632;
	uint64_t x150 = UINT64_MAX;
	uint8_t x151 = 1U;
	volatile int8_t x152 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x149-(x150|x151))|x152);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = 791U;
	volatile int16_t x156 = -124;
	volatile uint32_t t32 = 77U;

	t32 = ((x153-(x154|x155))|x156);

	if (t32 != 4294967175U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x157 = INT16_MIN;
	static volatile int64_t x159 = INT64_MIN;
	static uint32_t x160 = 799707860U;
	static int64_t t33 = -22LL;

	t33 = ((x157-(x158|x159))|x160);

	if (t33 != -27947LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -57;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t34 = -13;

	t34 = ((x161-(x162|x163))|x164);

	if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x165 = 2LL;
	static int64_t x166 = 3918LL;
	int64_t x167 = -225895193518407LL;
	static volatile uint64_t x168 = 47449034641462LLU;
	uint64_t t35 = 511236LLU;

	t35 = ((x165-(x166|x167))|x168);

	if (t35 != 263297985081399LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	int32_t t36 = 970;

	t36 = ((x169-(x170|x171))|x172);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = UINT8_MAX;
	static int8_t x174 = INT8_MAX;
	int16_t x175 = INT16_MAX;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t37 = 839098416;

	t37 = ((x173-(x174|x175))|x176);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = -44;
	int64_t x180 = INT64_MAX;
	int64_t t38 = INT64_MAX;

	t38 = ((x177-(x178|x179))|x180);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = 0;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = -1;
	int32_t x184 = INT32_MIN;

	t39 = ((x181-(x182|x183))|x184);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = 32221828LLU;
	static int32_t x187 = INT32_MIN;
	static int8_t x188 = -4;

	t40 = ((x185-(x186|x187))|x188);

	if (t40 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x190 = 2LLU;
	static uint64_t x191 = 4696894476LLU;
	int64_t x192 = INT64_MIN;
	static volatile uint64_t t41 = 12274LLU;

	t41 = ((x189-(x190|x191))|x192);

	if (t41 != 18446744069012689905LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x198 = -1;
	volatile int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;

	t42 = ((x197-(x198|x199))|x200);

	if (t42 != -2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = -1;
	int32_t x203 = -1;
	int64_t x204 = -327564LL;
	int64_t t43 = 334882LL;

	t43 = ((x201-(x202|x203))|x204);

	if (t43 != -327436LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x205 = -53866085933981097LL;
	int64_t x207 = INT64_MIN;
	static volatile int64_t x208 = INT64_MIN;
	volatile int64_t t44 = 4243637657LL;

	t44 = ((x205-(x206|x207))|x208);

	if (t44 != -53866085933948329LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x210 = INT64_MIN;
	uint16_t x211 = 61U;
	int16_t x212 = -1;
	volatile int64_t t45 = -3364642326315LL;

	t45 = ((x209-(x210|x211))|x212);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x214 = -62832293142LL;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = -1LL;

	t46 = ((x213-(x214|x215))|x216);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x221 = INT64_MIN;
	uint32_t x223 = 45405U;
	int64_t x224 = -1LL;
	volatile int64_t t47 = 62947729LL;

	t47 = ((x221-(x222|x223))|x224);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 104652679770098LLU;
	volatile uint64_t t48 = 104844980LLU;

	t48 = ((x229-(x230|x231))|x232);

	if (t48 != 104653320585214LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = INT64_MAX;
	static uint32_t x234 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	static int32_t x236 = INT32_MAX;
	volatile uint64_t t49 = 6LLU;

	t49 = ((x233-(x234|x235))|x236);

	if (t49 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = 262U;
	int16_t x238 = -1;
	static volatile int32_t x239 = INT32_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t50 = -46;

	t50 = ((x237-(x238|x239))|x240);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x243 = 4U;
	int8_t x244 = 48;
	volatile int32_t t51 = -1913417;

	t51 = ((x241-(x242|x243))|x244);

	if (t51 != -32718) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	static int64_t x248 = 155891585LL;
	static int64_t t52 = -316298LL;

	t52 = ((x245-(x246|x247))|x248);

	if (t52 != 2147483521LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = INT64_MAX;
	int8_t x250 = 3;
	int64_t x251 = INT64_MAX;
	static uint16_t x252 = 7U;

	t53 = ((x249-(x250|x251))|x252);

	if (t53 != 7LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = -250036646358848099LL;
	uint16_t x255 = 31355U;
	static volatile uint32_t x256 = 1U;
	volatile int64_t t54 = -16110LL;

	t54 = ((x253-(x254|x255))|x256);

	if (t54 != -250036646358913633LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 117U;
	volatile int64_t x260 = INT64_MIN;
	static volatile uint64_t t55 = 948LLU;

	t55 = ((x257-(x258|x259))|x260);

	if (t55 != 9223372036854808458LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x263 = 28U;
	uint16_t x264 = 29U;
	int32_t t56 = -209;

	t56 = ((x261-(x262|x263))|x264);

	if (t56 != 157) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x265 = UINT64_MAX;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = 15801;
	int64_t x268 = INT64_MAX;
	volatile uint64_t t57 = 51998810508460210LLU;

	t57 = ((x265-(x266|x267))|x268);

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int32_t x272 = 77735;
	int32_t t58 = 41835;

	t58 = ((x269-(x270|x271))|x272);

	if (t58 != 77735) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int32_t x275 = 231607;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t59 = -470;

	t59 = ((x273-(x274|x275))|x276);

	if (t59 != -32696) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x278 = -1;
	int16_t x280 = -1;
	volatile int32_t t60 = 4;

	t60 = ((x277-(x278|x279))|x280);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x282 = -1LL;
	static int16_t x283 = 1647;
	volatile int16_t x284 = INT16_MIN;
	volatile int64_t t61 = 129145LL;

	t61 = ((x281-(x282|x283))|x284);

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = 13U;
	volatile int16_t x287 = 1;
	int32_t t62 = 2;

	t62 = ((x285-(x286|x287))|x288);

	if (t62 != -33) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MIN;
	volatile int8_t x292 = -1;
	volatile int64_t t63 = -7858LL;

	t63 = ((x289-(x290|x291))|x292);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -1;
	static uint8_t x294 = UINT8_MAX;
	int16_t x295 = 48;
	volatile uint64_t t64 = 183066LLU;

	t64 = ((x293-(x294|x295))|x296);

	if (t64 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 87U;
	int8_t x298 = 2;
	volatile int64_t x300 = -214325845591LL;

	t65 = ((x297-(x298|x299))|x300);

	if (t65 != -209388078147LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x301 = -1;
	static int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = -5;
	int32_t t66 = -592744398;

	t66 = ((x301-(x302|x303))|x304);

	if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MAX;
	uint16_t x307 = 1U;
	volatile int64_t x308 = INT64_MIN;
	volatile uint64_t t67 = 176218024552057336LLU;

	t67 = ((x305-(x306|x307))|x308);

	if (t67 != 9223372036854807774LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x310 = INT32_MIN;
	volatile int16_t x311 = -1;
	int8_t x312 = 2;
	int32_t t68 = -1;

	t68 = ((x309-(x310|x311))|x312);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x313 = 2271LL;
	static int16_t x314 = -1;
	int16_t x315 = 0;
	int64_t t69 = 4313345402717LL;

	t69 = ((x313-(x314|x315))|x316);

	if (t69 != -32LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x317 = INT16_MAX;
	static int16_t x318 = INT16_MAX;
	volatile int64_t t70 = -17359897LL;

	t70 = ((x317-(x318|x319))|x320);

	if (t70 != -9223372032630128640LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int64_t t71 = 64010LL;

	t71 = ((x321-(x322|x323))|x324);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x325 = 10004U;
	int16_t x326 = -1;
	volatile uint16_t x327 = 31753U;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x325-(x326|x327))|x328);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = 311364766316219LL;
	int16_t x330 = INT16_MAX;
	static int64_t x331 = -119LL;
	static int16_t x332 = INT16_MIN;
	volatile int64_t t73 = 0LL;

	t73 = ((x329-(x330|x331))|x332);

	if (t73 != -18756LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	static uint8_t x335 = 1U;
	volatile uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x333-(x334|x335))|x336);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = -64251480;
	uint32_t x339 = UINT32_MAX;
	static volatile uint32_t t75 = 613330U;

	t75 = ((x337-(x338|x339))|x340);

	if (t75 != 4294967209U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x342 = 0LL;
	uint32_t x343 = 522588650U;
	volatile int32_t x344 = 347439;
	static int64_t t76 = 68937516441LL;

	t76 = ((x341-(x342|x343))|x344);

	if (t76 != -522326209LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	static uint8_t x346 = 3U;
	uint64_t x347 = 102LLU;
	static int32_t x348 = INT32_MIN;

	t77 = ((x345-(x346|x347))|x348);

	if (t77 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = 996858552586556LL;
	int16_t x351 = 30;
	int16_t x352 = INT16_MIN;
	int64_t t78 = 2564862770132LL;

	t78 = ((x349-(x350|x351))|x352);

	if (t78 != -4542LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = UINT16_MAX;
	static int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	static int8_t x356 = 7;

	t79 = ((x353-(x354|x355))|x356);

	if (t79 != 2147549183LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x362 = -9318;
	volatile int16_t x363 = 125;
	volatile int64_t t80 = 440609503092192135LL;

	t80 = ((x361-(x362|x363))|x364);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -1;
	int32_t x366 = 2847638;
	int32_t x367 = INT32_MIN;
	int16_t x368 = 14;
	int32_t t81 = 853350;

	t81 = ((x365-(x366|x367))|x368);

	if (t81 != 2144636015) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = -1;
	static uint8_t x370 = 31U;
	static volatile uint32_t x371 = UINT32_MAX;
	int64_t x372 = -1LL;
	static volatile int64_t t82 = -126775838220LL;

	t82 = ((x369-(x370|x371))|x372);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint64_t x374 = 29717890LLU;
	volatile int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t83 = 29500837596LLU;

	t83 = ((x373-(x374|x375))|x376);

	if (t83 != 18446744073679833725LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 15560U;
	volatile uint8_t x378 = 0U;
	int8_t x379 = -1;
	int64_t x380 = -93LL;
	volatile int64_t t84 = -306685886685LL;

	t84 = ((x377-(x378|x379))|x380);

	if (t84 != -21LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x382 = 85U;
	int64_t x383 = -1LL;
	volatile uint32_t x384 = 18815326U;
	volatile int64_t t85 = 2888327LL;

	t85 = ((x381-(x382|x383))|x384);

	if (t85 != 18815326LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	static volatile int16_t x387 = INT16_MIN;
	volatile int32_t x388 = -45465;
	volatile uint32_t t86 = 5U;

	t86 = ((x385-(x386|x387))|x388);

	if (t86 != 4294921855U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MIN;
	int64_t x392 = 23489LL;
	volatile int64_t t87 = -275805584262195LL;

	t87 = ((x389-(x390|x391))|x392);

	if (t87 != 23489LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x394 = 48652908258067LL;
	int64_t x395 = INT64_MIN;
	static uint16_t x396 = 1U;
	volatile int64_t t88 = -62215LL;

	t88 = ((x393-(x394|x395))|x396);

	if (t88 != 9223323383946517997LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x398 = 2U;
	int16_t x399 = INT16_MIN;
	int32_t x400 = 1945;
	int64_t t89 = 936269LL;

	t89 = ((x397-(x398|x399))|x400);

	if (t89 != 32765LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x401 = INT16_MAX;
	static uint8_t x403 = 101U;
	int64_t x404 = -1LL;
	int64_t t90 = -11958LL;

	t90 = ((x401-(x402|x403))|x404);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static uint32_t x406 = UINT32_MAX;
	volatile int32_t x407 = -16;

	t91 = ((x405-(x406|x407))|x408);

	if (t91 != 19U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x410 = UINT16_MAX;
	static uint32_t x411 = 8633U;
	uint32_t t92 = UINT32_MAX;

	t92 = ((x409-(x410|x411))|x412);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 2229U;
	uint64_t x415 = UINT64_MAX;
	uint16_t x416 = 1712U;
	uint64_t t93 = 176998LLU;

	t93 = ((x413-(x414|x415))|x416);

	if (t93 != 3766LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x417 = INT8_MIN;
	uint8_t x418 = 10U;
	uint16_t x419 = 388U;
	volatile int32_t x420 = INT32_MIN;
	int32_t t94 = -3736968;

	t94 = ((x417-(x418|x419))|x420);

	if (t94 != -526) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = 133386293387897730LLU;
	static uint16_t x422 = 3U;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	uint64_t t95 = 8110226259009449723LLU;

	t95 = ((x421-(x422|x423))|x424);

	if (t95 != 133386295345938431LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x425 = -1;
	int32_t x427 = INT32_MIN;
	static volatile int8_t x428 = INT8_MIN;
	volatile int32_t t96 = -76287960;

	t96 = ((x425-(x426|x427))|x428);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 242851453000LLU;
	uint64_t t97 = UINT64_MAX;

	t97 = ((x429-(x430|x431))|x432);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x437 = UINT16_MAX;
	static int32_t x438 = INT32_MAX;
	uint32_t x440 = 23698122U;
	volatile uint32_t t98 = 155782U;

	t98 = ((x437-(x438|x439))|x440);

	if (t98 != 23698122U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 12U;
	int16_t x442 = -1;
	volatile int16_t x444 = -1;
	int32_t t99 = -420;

	t99 = ((x441-(x442|x443))|x444);

	if (t99 != -1) { NG(); } else { ; }
	
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

