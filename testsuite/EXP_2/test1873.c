#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 155LL;
volatile int32_t x9 = -96;
int8_t x11 = -16;
int32_t x12 = -1;
volatile int32_t t2 = 7056595;
int16_t x17 = INT16_MAX;
int64_t x18 = -22090730465261761LL;
int32_t x26 = 301466881;
int8_t x29 = -7;
uint32_t x33 = 1957U;
uint16_t x34 = 28U;
int32_t x37 = -1;
uint8_t x40 = UINT8_MAX;
int64_t x41 = INT64_MIN;
int64_t x42 = INT64_MIN;
static volatile uint32_t x43 = 31U;
static volatile uint16_t x47 = 0U;
uint64_t x56 = UINT64_MAX;
static int8_t x65 = -11;
int64_t x66 = -1LL;
uint16_t x68 = 24U;
int16_t x69 = -1;
uint16_t x72 = 1973U;
static int8_t x78 = INT8_MIN;
int8_t x86 = -1;
uint64_t x87 = 3LLU;
uint64_t x89 = 258977563076180LLU;
uint8_t x93 = 1U;
static volatile int8_t x100 = INT8_MIN;
static int64_t x101 = -132227LL;
volatile uint32_t x110 = 11U;
int32_t t26 = -42284019;
uint16_t x117 = UINT16_MAX;
int32_t x125 = -1;
int32_t x127 = INT32_MAX;
int8_t x131 = INT8_MIN;
uint64_t x133 = UINT64_MAX;
int16_t x137 = INT16_MAX;
volatile uint64_t t32 = 2155LLU;
int64_t x143 = -27823LL;
volatile uint64_t x145 = 64791716922500LLU;
volatile int32_t x147 = -1;
static volatile uint64_t t34 = 26255726LLU;
int32_t x161 = 11126470;
volatile int8_t x165 = INT8_MIN;
int64_t x171 = INT64_MAX;
static uint64_t x176 = 456438636196166497LLU;
int64_t x181 = INT64_MIN;
volatile uint64_t t42 = 58886226010LLU;
volatile int32_t x196 = INT32_MIN;
volatile int8_t x197 = -1;
int16_t x204 = INT16_MAX;
uint8_t x206 = 115U;
int32_t x212 = INT32_MIN;
uint8_t x214 = 3U;
static int32_t x217 = INT32_MIN;
volatile int64_t x220 = 86294833598104662LL;
uint32_t t50 = 488U;
volatile int32_t t51 = 85607;
uint32_t t53 = 1764919U;
volatile uint8_t x238 = 26U;
uint32_t x239 = UINT32_MAX;
static int8_t x250 = INT8_MAX;
int64_t x251 = INT64_MIN;
volatile int64_t t56 = 3LL;
uint8_t x253 = 12U;
volatile uint32_t x256 = UINT32_MAX;
int32_t x276 = INT32_MIN;
int64_t x289 = -2793LL;
uint8_t x291 = 41U;
int16_t x296 = 6;
volatile int64_t t65 = -33LL;
static uint32_t x306 = UINT32_MAX;
static volatile uint32_t x307 = 2761U;
uint64_t t67 = 2995097833LLU;
uint32_t x312 = 22U;
uint64_t x316 = UINT64_MAX;
int64_t x320 = -1690713573977556922LL;
static int8_t x322 = -2;
uint16_t x323 = 3471U;
uint64_t t72 = 6037455163928023LLU;
volatile uint64_t x329 = 2893318736341157LLU;
volatile uint64_t t73 = 586675LLU;
volatile int64_t t76 = -6572335122418LL;
uint64_t x350 = 145382705380643LLU;
volatile int32_t x355 = -1;
int64_t x363 = -253LL;
static volatile int16_t x368 = INT16_MIN;
volatile int64_t x371 = INT64_MIN;
int16_t x372 = INT16_MAX;
int32_t x377 = INT32_MAX;
int16_t x385 = -17;
int8_t x387 = -1;
int32_t x390 = -46;
int32_t x391 = 24175900;
int8_t x394 = 0;
static int16_t x398 = INT16_MIN;
int32_t x404 = INT32_MAX;
int64_t x408 = -115LL;
int64_t t91 = -105290000477385LL;
static int8_t x418 = INT8_MIN;
static int32_t x421 = -1;
uint32_t x426 = UINT32_MAX;
volatile int64_t t95 = -59943851758497565LL;
int8_t x432 = 1;
static int64_t t96 = -40040737693LL;
static uint8_t x438 = 0U;
int8_t x440 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 6U;
	volatile int32_t x2 = 1491657;
	uint64_t x3 = 243569313LLU;
	uint16_t x4 = 2002U;
	volatile uint64_t t0 = 1008853038000257823LLU;

	t0 = ((x1-(x2|x3))+x4);

	if (t0 != 18446744073464788207LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static volatile uint32_t x6 = 13207U;
	int64_t x7 = -14782236LL;
	uint32_t x8 = 6413U;

	t1 = ((x5-(x6|x7))+x8);

	if (t1 != 4309755157LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;

	t2 = ((x9-(x10|x11))+x12);

	if (t2 != -96) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = -1LL;
	int8_t x15 = -1;
	int8_t x16 = -1;
	volatile int64_t t3 = 30594828LL;

	t3 = ((x13-(x14|x15))+x16);

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = 6381LL;
	volatile int8_t x20 = 9;
	int64_t t4 = -672LL;

	t4 = ((x17-(x18|x19))+x20);

	if (t4 != 22090730465288201LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 15276517490183LL;
	volatile int8_t x22 = -1;
	static int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -128951215687032LL;

	t5 = ((x21-(x22|x23))+x24);

	if (t5 != -9223356760337285624LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x27 = 85440LL;
	static int16_t x28 = 59;
	int64_t t6 = -4485431696243LL;

	t6 = ((x25-(x26|x27))+x28);

	if (t6 != -301550983LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 96U;
	int8_t x31 = -1;
	volatile int32_t x32 = 1;
	volatile int32_t t7 = 8905;

	t7 = ((x29-(x30|x31))+x32);

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = INT16_MIN;
	int16_t x36 = 1397;
	static volatile uint32_t t8 = 938684U;

	t8 = ((x33-(x34|x35))+x36);

	if (t8 != 36094U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x38 = -4;
	uint32_t x39 = 394U;
	uint32_t t9 = 2302037U;

	t9 = ((x37-(x38|x39))+x40);

	if (t9 != 256U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x44 = 57U;
	static int64_t t10 = -45281987LL;

	t10 = ((x41-(x42|x43))+x44);

	if (t10 != 26LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = -1LL;
	int32_t x48 = -1;
	int64_t t11 = 260LL;

	t11 = ((x45-(x46|x47))+x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	uint64_t x50 = 50125413618633LLU;
	int32_t x51 = INT32_MIN;
	static int64_t x52 = INT64_MAX;
	uint64_t t12 = 59451916873LLU;

	t12 = ((x49-(x50|x51))+x52);

	if (t12 != 9223372038004468791LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = UINT32_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	static volatile uint64_t t13 = 65023987587161576LLU;

	t13 = ((x53-(x54|x55))+x56);

	if (t13 != 4294967295LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 6;
	int16_t x58 = -1;
	volatile int64_t x59 = INT64_MIN;
	static int32_t x60 = 1384;
	int64_t t14 = -464949589686LL;

	t14 = ((x57-(x58|x59))+x60);

	if (t14 != 1391LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 16LLU;
	static volatile uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = 14;
	static volatile int16_t x64 = -1;
	volatile uint64_t t15 = 4155410LLU;

	t15 = ((x61-(x62|x63))+x64);

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = -337;
	int64_t t16 = 3895LL;

	t16 = ((x65-(x66|x67))+x68);

	if (t16 != 14LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	int64_t x71 = 53339459469LL;
	volatile int64_t t17 = 12343690262982LL;

	t17 = ((x69-(x70|x71))+x72);

	if (t17 != 9223371983515318311LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 134;
	uint8_t x79 = 60U;
	int16_t x80 = INT16_MIN;
	int32_t t18 = 0;

	t18 = ((x77-(x78|x79))+x80);

	if (t18 != -32566) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 28598943909LL;
	static volatile uint64_t x82 = 1048206LLU;
	int16_t x83 = -1;
	uint64_t x84 = 139LLU;
	volatile uint64_t t19 = 996201030653705LLU;

	t19 = ((x81-(x82|x83))+x84);

	if (t19 != 28598944049LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x88 = -1;
	volatile uint64_t t20 = 729465LLU;

	t20 = ((x85-(x86|x87))+x88);

	if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 51U;
	int32_t x91 = -598638;
	uint64_t x92 = 103238389199LLU;
	uint64_t t21 = 1368477822795499LLU;

	t21 = ((x89-(x90|x91))+x92);

	if (t21 != 259076507096688LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	static uint8_t x96 = UINT8_MAX;
	uint32_t t22 = 698157819U;

	t22 = ((x93-(x94|x95))+x96);

	if (t22 != 257U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 3311418912290LLU;
	int64_t x98 = -1LL;
	volatile uint16_t x99 = UINT16_MAX;
	volatile uint64_t t23 = 581742425366291LLU;

	t23 = ((x97-(x98|x99))+x100);

	if (t23 != 3311418912163LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = 134826195LLU;
	int16_t x103 = INT16_MAX;
	static int32_t x104 = -4678707;
	static uint64_t t24 = 58451918407LLU;

	t24 = ((x101-(x102|x103))+x104);

	if (t24 != 18446744073569900363LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	uint32_t x111 = 12U;
	uint64_t x112 = UINT64_MAX;
	static uint64_t t25 = 152825846726315LLU;

	t25 = ((x109-(x110|x111))+x112);

	if (t25 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = INT8_MAX;

	t26 = ((x113-(x114|x115))+x116);

	if (t26 != 65663) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x118 = INT16_MIN;
	int32_t x119 = -205;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 2;

	t27 = ((x117-(x118|x119))+x120);

	if (t27 != 65612) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 4U;
	int64_t x122 = -1LL;
	uint32_t x123 = 22811U;
	uint64_t x124 = 267203556369LLU;
	volatile uint64_t t28 = 1000LLU;

	t28 = ((x121-(x122|x123))+x124);

	if (t28 != 267203556374LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x126 = UINT32_MAX;
	int64_t x128 = 123403096602125LL;
	int64_t t29 = 3783040LL;

	t29 = ((x125-(x126|x127))+x128);

	if (t29 != 123403096602125LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 0U;
	volatile int32_t x130 = INT32_MIN;
	uint64_t x132 = 41524481324214LLU;
	static uint64_t t30 = 120069829073LLU;

	t30 = ((x129-(x130|x131))+x132);

	if (t30 != 41524481324342LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x134 = 463U;
	static uint32_t x135 = 14232U;
	int32_t x136 = INT32_MAX;
	uint64_t t31 = 1225LLU;

	t31 = ((x133-(x134|x135))+x136);

	if (t31 != 2147469343LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x138 = UINT64_MAX;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = -125;

	t32 = ((x137-(x138|x139))+x140);

	if (t32 != 32643LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = -1LL;
	uint8_t x142 = 10U;
	uint64_t x144 = 754795LLU;
	volatile uint64_t t33 = 480LLU;

	t33 = ((x141-(x142|x143))+x144);

	if (t33 != 782607LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MIN;
	int32_t x148 = 33;

	t34 = ((x145-(x146|x147))+x148);

	if (t34 != 64791716922534LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -708060;
	static int8_t x158 = INT8_MAX;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 1687U;
	volatile uint32_t t35 = 922119U;

	t35 = ((x157-(x158|x159))+x160);

	if (t35 != 4294195388U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x162 = -1;
	static uint8_t x163 = 7U;
	volatile uint64_t x164 = 251548636519LLU;
	volatile uint64_t t36 = 27411LLU;

	t36 = ((x161-(x162|x163))+x164);

	if (t36 != 251559762990LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = 110U;
	static int16_t x167 = -1;
	int32_t x168 = -1;
	uint32_t t37 = 627840U;

	t37 = ((x165-(x166|x167))+x168);

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -2656;
	static int8_t x170 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	uint64_t t38 = 30093976335LLU;

	t38 = ((x169-(x170|x171))+x172);

	if (t38 != 18446744073709548960LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	static int8_t x174 = INT8_MIN;
	int32_t x175 = -3318;
	volatile uint64_t t39 = 704643573216277LLU;

	t39 = ((x173-(x174|x175))+x176);

	if (t39 != 456438636196166487LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = -281117798;
	static int8_t x184 = 7;
	int64_t t40 = 8993569349829349LL;

	t40 = ((x181-(x182|x183))+x184);

	if (t40 != -9223372036573658104LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 49938;
	volatile uint64_t x186 = 38LLU;
	static int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t41 = 1784895077168030835LLU;

	t41 = ((x185-(x186|x187))+x188);

	if (t41 != 17171LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = INT16_MAX;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MAX;

	t42 = ((x189-(x190|x191))+x192);

	if (t42 != 2147516415LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x193 = INT16_MAX;
	uint16_t x194 = 44U;
	int8_t x195 = -1;
	int32_t t43 = 327615229;

	t43 = ((x193-(x194|x195))+x196);

	if (t43 != -2147450880) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = ((x197-(x198|x199))+x200);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -81058;
	static int32_t x202 = -1;
	int16_t x203 = INT16_MIN;
	volatile int32_t t45 = -33242;

	t45 = ((x201-(x202|x203))+x204);

	if (t45 != -48290) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x205 = 161U;
	int32_t x207 = -1;
	static int8_t x208 = INT8_MIN;
	static volatile int32_t t46 = -41106;

	t46 = ((x205-(x206|x207))+x208);

	if (t46 != 34) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x209 = 87U;
	volatile uint8_t x210 = UINT8_MAX;
	int8_t x211 = -1;
	volatile uint32_t t47 = 12360473U;

	t47 = ((x209-(x210|x211))+x212);

	if (t47 != 2147483736U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x213 = -1;
	int32_t x215 = 18;
	uint32_t x216 = 64U;
	static uint32_t t48 = 134347U;

	t48 = ((x213-(x214|x215))+x216);

	if (t48 != 44U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = 9792LL;
	uint32_t x219 = 101419U;
	volatile int64_t t49 = -213899171688311LL;

	t49 = ((x217-(x218|x219))+x220);

	if (t49 != 86294831450510827LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = 14;
	uint32_t x223 = 957U;
	int32_t x224 = -43;

	t50 = ((x221-(x222|x223))+x224);

	if (t50 != 4294933526U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 53U;
	volatile int8_t x226 = 61;
	volatile int8_t x227 = INT8_MIN;
	volatile int8_t x228 = -32;

	t51 = ((x225-(x226|x227))+x228);

	if (t51 != 88) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = 6U;
	int32_t x232 = INT32_MAX;
	static uint64_t t52 = 736628219LLU;

	t52 = ((x229-(x230|x231))+x232);

	if (t52 != 9223372039002259448LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x233 = UINT32_MAX;
	static uint16_t x234 = 4905U;
	volatile int16_t x235 = INT16_MIN;
	int32_t x236 = -2081836;

	t53 = ((x233-(x234|x235))+x236);

	if (t53 != 4292913322U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x237 = 55981676491877LL;
	static int8_t x240 = -1;
	int64_t t54 = 214LL;

	t54 = ((x237-(x238|x239))+x240);

	if (t54 != 55977381524581LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 34;
	volatile uint32_t x242 = 5444556U;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	uint32_t t55 = 6U;

	t55 = ((x241-(x242|x243))+x244);

	if (t55 != 2142038998U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int64_t x252 = INT64_MIN;

	t56 = ((x249-(x250|x251))+x252);

	if (t56 != -32895LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x254 = 1U;
	int16_t x255 = INT16_MIN;
	volatile uint32_t t57 = 26U;

	t57 = ((x253-(x254|x255))+x256);

	if (t57 != 32778U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x258 = 5750;
	volatile uint32_t x259 = 11101U;
	uint32_t x260 = UINT32_MAX;
	static uint64_t t58 = 8911424LLU;

	t58 = ((x257-(x258|x259))+x260);

	if (t58 != 4294951039LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = UINT8_MAX;
	static volatile uint8_t x266 = UINT8_MAX;
	uint64_t x267 = 3722262807065LLU;
	uint32_t x268 = 24533302U;
	uint64_t t59 = 2139516203316LLU;

	t59 = ((x265-(x266|x267))+x268);

	if (t59 != 18446740351471277878LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 27U;
	volatile int16_t x270 = INT16_MIN;
	static int16_t x271 = -89;
	static uint8_t x272 = UINT8_MAX;
	int32_t t60 = 14;

	t60 = ((x269-(x270|x271))+x272);

	if (t60 != 371) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = 0;
	int8_t x274 = -1;
	static int32_t x275 = 88;
	volatile int32_t t61 = 3;

	t61 = ((x273-(x274|x275))+x276);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 455U;
	uint8_t x278 = 41U;
	uint32_t x279 = 8486416U;
	int32_t x280 = INT32_MAX;
	volatile uint32_t t62 = 1031U;

	t62 = ((x277-(x278|x279))+x280);

	if (t62 != 2138997645U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = INT32_MAX;
	uint32_t x283 = 10U;
	static int32_t x284 = INT32_MAX;
	volatile uint32_t t63 = 28617U;

	t63 = ((x281-(x282|x283))+x284);

	if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x290 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t64 = -33872924982296LL;

	t64 = ((x289-(x290|x291))+x292);

	if (t64 != -2451LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x293 = -1;
	int8_t x294 = INT8_MAX;
	int64_t x295 = -1821233710LL;

	t65 = ((x293-(x294|x295))+x296);

	if (t65 != 1821233670LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	volatile uint16_t x298 = UINT16_MAX;
	static volatile int32_t x299 = INT32_MIN;
	int32_t x300 = -19814052;
	volatile int64_t t66 = 13025LL;

	t66 = ((x297-(x298|x299))+x300);

	if (t66 != -9223372034727171747LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = -5;
	static uint64_t x308 = 7088400617LLU;

	t67 = ((x305-(x306|x307))+x308);

	if (t67 != 11383367909LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int64_t x310 = -750082838905LL;
	uint8_t x311 = 1U;
	int64_t t68 = 175573LL;

	t68 = ((x309-(x310|x311))+x312);

	if (t68 != 750082904462LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int16_t x315 = -1;
	uint64_t t69 = 1828656LLU;

	t69 = ((x313-(x314|x315))+x316);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x317 = INT8_MIN;
	uint8_t x318 = 8U;
	volatile uint64_t x319 = 8758966070LLU;
	uint64_t t70 = 8147266152183204328LLU;

	t70 = ((x317-(x318|x319))+x320);

	if (t70 != 16756030490973028488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	static int8_t x324 = -1;
	int32_t t71 = 3368306;

	t71 = ((x321-(x322|x323))+x324);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x325 = UINT64_MAX;
	int64_t x326 = 1482056LL;
	uint16_t x327 = 7U;
	int16_t x328 = INT16_MIN;

	t72 = ((x325-(x326|x327))+x328);

	if (t72 != 18446744073708036784LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	static uint16_t x332 = 30168U;

	t73 = ((x329-(x330|x331))+x332);

	if (t73 != 2893318736371326LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x333 = -50;
	int32_t x334 = INT32_MIN;
	volatile uint8_t x335 = UINT8_MAX;
	uint16_t x336 = 2U;
	int32_t t74 = 1020397636;

	t74 = ((x333-(x334|x335))+x336);

	if (t74 != 2147483345) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = 12083U;
	int32_t x338 = -1;
	int8_t x339 = 19;
	int8_t x340 = INT8_MIN;
	int32_t t75 = 1246726;

	t75 = ((x337-(x338|x339))+x340);

	if (t75 != 11956) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x341 = INT32_MIN;
	int32_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MAX;

	t76 = ((x341-(x342|x343))+x344);

	if (t76 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -1126;
	volatile uint8_t x346 = 53U;
	static int16_t x347 = -1;
	int32_t x348 = -2857257;
	static volatile int32_t t77 = 2;

	t77 = ((x345-(x346|x347))+x348);

	if (t77 != -2858382) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x349 = 89U;
	volatile int8_t x351 = INT8_MIN;
	int8_t x352 = 7;
	volatile uint64_t t78 = 35549239LLU;

	t78 = ((x349-(x350|x351))+x352);

	if (t78 != 189LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -633211830LL;
	int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	volatile int64_t t79 = -7LL;

	t79 = ((x353-(x354|x355))+x356);

	if (t79 != 9223372036221563978LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MAX;
	static int32_t x359 = -9026;
	uint16_t x360 = 0U;
	volatile int64_t t80 = 135433474LL;

	t80 = ((x357-(x358|x359))+x360);

	if (t80 != -127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	static int8_t x364 = 22;
	volatile int64_t t81 = -48332659LL;

	t81 = ((x361-(x362|x363))+x364);

	if (t81 != 147LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x365 = 1;
	int64_t x366 = INT64_MIN;
	volatile int16_t x367 = -15271;
	volatile int64_t t82 = -66657137694476LL;

	t82 = ((x365-(x366|x367))+x368);

	if (t82 != -17496LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = 5795;
	int16_t x370 = -1;
	int64_t t83 = 554103617662899221LL;

	t83 = ((x369-(x370|x371))+x372);

	if (t83 != 38563LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x378 = 481668864U;
	int8_t x379 = 19;
	int8_t x380 = -1;
	uint32_t t84 = 590323617U;

	t84 = ((x377-(x378|x379))+x380);

	if (t84 != 1665814763U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x381 = INT8_MIN;
	uint16_t x382 = 98U;
	static int8_t x383 = 24;
	int8_t x384 = -1;
	volatile int32_t t85 = -3968368;

	t85 = ((x381-(x382|x383))+x384);

	if (t85 != -251) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x386 = INT16_MIN;
	volatile int16_t x388 = INT16_MAX;
	volatile int32_t t86 = -2070861;

	t86 = ((x385-(x386|x387))+x388);

	if (t86 != 32751) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	int8_t x392 = INT8_MAX;
	volatile int64_t t87 = -1074600LL;

	t87 = ((x389-(x390|x391))+x392);

	if (t87 != -9223372036854775647LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x393 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 13790U;
	uint64_t t88 = 14166LLU;

	t88 = ((x393-(x394|x395))+x396);

	if (t88 != 18446744073709532639LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x397 = 1U;
	volatile uint32_t x399 = 24U;
	int16_t x400 = -1;
	static uint32_t t89 = 10532090U;

	t89 = ((x397-(x398|x399))+x400);

	if (t89 != 32744U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int64_t x403 = -1LL;
	static volatile int64_t t90 = -133727977974LL;

	t90 = ((x401-(x402|x403))+x404);

	if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x405 = -1;
	int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MAX;

	t91 = ((x405-(x406|x407))+x408);

	if (t91 != -32883LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MAX;
	volatile uint32_t x410 = 0U;
	static volatile int8_t x411 = INT8_MAX;
	static int32_t x412 = 517962826;
	uint32_t t92 = 1U;

	t92 = ((x409-(x410|x411))+x412);

	if (t92 != 517995466U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	int32_t x420 = -1;
	int32_t t93 = -239956;

	t93 = ((x417-(x418|x419))+x420);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x422 = -7592100;
	uint16_t x423 = 640U;
	uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t94 = 3772837955993968339LLU;

	t94 = ((x421-(x422|x423))+x424);

	if (t94 != 7591970LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = -118011551394952185LL;
	volatile int32_t x427 = INT32_MAX;
	uint32_t x428 = 800143U;

	t95 = ((x425-(x426|x427))+x428);

	if (t95 != -118011555689119337LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -6LL;
	int8_t x430 = -1;
	static uint32_t x431 = UINT32_MAX;

	t96 = ((x429-(x430|x431))+x432);

	if (t96 != -4294967300LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x433 = 50U;
	uint8_t x434 = 14U;
	volatile int32_t x435 = 381327042;
	int8_t x436 = INT8_MIN;
	uint32_t t97 = 8U;

	t97 = ((x433-(x434|x435))+x436);

	if (t97 != 3913640164U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 1997713230U;
	int8_t x439 = -1;
	static uint32_t t98 = 105U;

	t98 = ((x437-(x438|x439))+x440);

	if (t98 != 1997713103U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x441 = INT32_MIN;
	int64_t x442 = INT64_MIN;
	volatile uint32_t x443 = 1088U;
	volatile int8_t x444 = 13;
	int64_t t99 = -229429851327297360LL;

	t99 = ((x441-(x442|x443))+x444);

	if (t99 != 9223372034707291085LL) { NG(); } else { ; }
	
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

