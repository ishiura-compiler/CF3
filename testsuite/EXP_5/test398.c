#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x13 = UINT16_MAX;
volatile int32_t x15 = -490191384;
static volatile int32_t t2 = 1126528;
int16_t x19 = INT16_MIN;
uint64_t x24 = 87538009LLU;
uint16_t x27 = UINT16_MAX;
int16_t x28 = INT16_MAX;
int64_t x29 = INT64_MIN;
int64_t x33 = -1LL;
static int64_t x39 = -8980732767LL;
int8_t x41 = INT8_MAX;
static int16_t x45 = INT16_MIN;
int8_t x50 = 4;
static volatile int8_t x52 = 1;
int32_t t11 = 14910725;
uint8_t x56 = 2U;
uint64_t x57 = 4110148269191LLU;
static int16_t x60 = INT16_MIN;
volatile int32_t x63 = -1;
uint32_t x64 = UINT32_MAX;
int64_t x65 = -34760143460LL;
int8_t x68 = 5;
static int32_t x69 = -289905;
uint16_t x94 = UINT16_MAX;
int32_t x97 = INT32_MAX;
volatile int32_t x126 = 289;
int64_t x128 = INT64_MIN;
uint16_t x132 = 2961U;
int8_t x138 = INT8_MIN;
int32_t x140 = INT32_MIN;
int32_t t29 = 607918215;
int64_t x141 = INT64_MAX;
int32_t t32 = 1370577;
int32_t x185 = INT32_MAX;
int32_t t36 = 93;
volatile int32_t x189 = -1;
int8_t x191 = -1;
int16_t x192 = 1372;
static int64_t x200 = 3693899636LL;
uint16_t x212 = UINT16_MAX;
uint8_t x221 = UINT8_MAX;
volatile int32_t x224 = 3876837;
volatile int32_t t41 = 45955;
volatile int16_t x226 = INT16_MIN;
volatile int16_t x238 = -3100;
int32_t x243 = INT32_MIN;
uint8_t x244 = 3U;
volatile uint16_t x245 = 1U;
volatile int32_t t49 = -211137;
int32_t x262 = -1;
int32_t t52 = 8503633;
int16_t x274 = -1;
volatile int32_t t54 = 5168;
volatile int32_t x287 = INT32_MIN;
uint16_t x305 = 1U;
int16_t x306 = INT16_MIN;
volatile int32_t t59 = -172607964;
int32_t x332 = INT32_MIN;
volatile int16_t x334 = INT16_MAX;
volatile uint32_t x336 = 504U;
int32_t x339 = -8052;
uint32_t x340 = 4632013U;
volatile uint64_t x348 = UINT64_MAX;
static int16_t x350 = INT16_MAX;
uint8_t x351 = UINT8_MAX;
volatile int32_t t68 = -11909;
volatile int32_t t70 = -1942155;
volatile int64_t x383 = INT64_MIN;
volatile int32_t t72 = 488427651;
volatile int32_t t73 = 1015599;
volatile int32_t x396 = -1;
volatile int8_t x411 = 37;
volatile int32_t t76 = 23967157;
uint64_t x421 = 2209366LLU;
uint64_t x430 = 5791804406845663LLU;
int16_t x434 = INT16_MIN;
int64_t x435 = 288046LL;
int32_t t83 = 822972341;
uint16_t x449 = UINT16_MAX;
int32_t t84 = 146045362;
static uint8_t x465 = 2U;
uint32_t x468 = 14398U;
int32_t t87 = 87;
int32_t t88 = 167265;
int8_t x497 = -1;
int64_t x498 = 92010LL;
volatile int32_t t91 = 21315535;
volatile int8_t x505 = 6;
int32_t t92 = 4014963;
uint64_t x516 = 63285845443LLU;
int32_t x517 = INT32_MIN;
int64_t x523 = 17LL;
int32_t x532 = INT32_MIN;
volatile int32_t t98 = -543561;
int8_t x534 = INT8_MAX;
volatile int32_t t99 = -229;


void f0(void) {
	static uint64_t x1 = 17557370LLU;
	int64_t x2 = -1138LL;
	static uint16_t x3 = 25U;
	volatile uint8_t x4 = 7U;
	int32_t t0 = -3;

	t0 = (x1==((x2*x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 663U;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = 666041772385281LLU;
	int8_t x12 = 41;
	int32_t t1 = 1424631;

	t1 = (x9==((x10*x11)%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 1023476937U;
	static uint16_t x16 = 12U;

	t2 = (x13==((x14*x15)%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 30U;
	static int16_t x18 = INT16_MIN;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 764488478;

	t3 = (x17==((x18*x19)%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	uint32_t x22 = UINT32_MAX;
	volatile uint8_t x23 = 3U;
	volatile int32_t t4 = -7;

	t4 = (x21==((x22*x23)%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x25 = INT16_MAX;
	uint8_t x26 = 34U;
	volatile int32_t t5 = 13;

	t5 = (x25==((x26*x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = 9954921U;
	uint32_t x31 = 125830284U;
	volatile uint16_t x32 = 18448U;
	volatile int32_t t6 = -11;

	t6 = (x29==((x30*x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t7 = -291902;

	t7 = (x33==((x34*x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	volatile int16_t x40 = INT16_MAX;
	volatile int32_t t8 = -767;

	t8 = (x37==((x38*x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x42 = 602250925123610175LLU;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = 11742479;

	t9 = (x41==((x42*x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = 1292347208U;
	uint32_t x47 = 1028U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = 90335;

	t10 = (x45==((x46*x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 445LLU;
	int64_t x51 = -1797190160LL;

	t11 = (x49==((x50*x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MIN;
	static int64_t x54 = 83128627LL;
	static int64_t x55 = -3193LL;
	volatile int32_t t12 = 10267;

	t12 = (x53==((x54*x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x58 = UINT32_MAX;
	uint32_t x59 = 1889775765U;
	static volatile int32_t t13 = 0;

	t13 = (x57==((x58*x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = -23887439LL;
	volatile int32_t t14 = -249495791;

	t14 = (x61==((x62*x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 349769431680LLU;
	volatile int32_t t15 = 867;

	t15 = (x65==((x66*x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x70 = INT8_MIN;
	uint32_t x71 = 1118866U;
	uint8_t x72 = UINT8_MAX;
	static int32_t t16 = -7194;

	t16 = (x69==((x70*x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 6U;
	int8_t x74 = -1;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 1U;
	volatile int32_t t17 = 2495;

	t17 = (x73==((x74*x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile int64_t x84 = 24676123181LL;
	volatile int32_t t18 = 1037;

	t18 = (x81==((x82*x83)%x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x86 = -1;
	int32_t x87 = -53652;
	volatile int8_t x88 = -1;
	int32_t t19 = 1362;

	t19 = (x85==((x86*x87)%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	static volatile int16_t x95 = 11;
	volatile uint16_t x96 = UINT16_MAX;
	int32_t t20 = 11221;

	t20 = (x93==((x94*x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x98 = -29;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t21 = -8560219;

	t21 = (x97==((x98*x99)%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = 2U;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 30U;
	int16_t x108 = -1;
	int32_t t22 = -39139512;

	t22 = (x105==((x106*x107)%x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MAX;
	static uint64_t x110 = 6863476842LLU;
	int32_t x111 = INT32_MAX;
	uint32_t x112 = 182U;
	volatile int32_t t23 = -136;

	t23 = (x109==((x110*x111)%x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -1LL;
	int16_t x114 = -1;
	static uint16_t x115 = 144U;
	int16_t x116 = -516;
	volatile int32_t t24 = 370448472;

	t24 = (x113==((x114*x115)%x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = 0;
	static int16_t x119 = 6;
	static volatile uint8_t x120 = 20U;
	int32_t t25 = -5343470;

	t25 = (x117==((x118*x119)%x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t t26 = 88884593;

	t26 = (x125==((x126*x127)%x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x129 = -1;
	int32_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int32_t t27 = 12;

	t27 = (x129==((x130*x131)%x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = -678773;
	static volatile int32_t x134 = -1763998;
	int8_t x135 = 2;
	int32_t x136 = INT32_MIN;
	int32_t t28 = -273;

	t28 = (x133==((x134*x135)%x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = -58;
	static volatile int32_t x139 = -16;

	t29 = (x137==((x138*x139)%x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t30 = 22520346;

	t30 = (x141==((x142*x143)%x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = -1;
	volatile int8_t x154 = -1;
	static int8_t x155 = INT8_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t31 = 1465874;

	t31 = (x153==((x154*x155)%x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = 1689478667832LL;
	int64_t x158 = -139073180746797LL;
	int8_t x159 = -41;
	int64_t x160 = INT64_MAX;

	t32 = (x157==((x158*x159)%x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 40U;
	static uint16_t x162 = 52U;
	uint64_t x163 = 664886LLU;
	int8_t x164 = INT8_MIN;
	volatile int32_t t33 = -16;

	t33 = (x161==((x162*x163)%x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x165 = 19174819;
	volatile int8_t x166 = -11;
	int64_t x167 = -1LL;
	volatile uint64_t x168 = 11LLU;
	volatile int32_t t34 = -16609528;

	t34 = (x165==((x166*x167)%x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = -1;
	int32_t x170 = 2882861;
	static uint32_t x171 = UINT32_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t35 = -6866264;

	t35 = (x169==((x170*x171)%x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x186 = -984449473LL;
	int16_t x187 = 12585;
	uint64_t x188 = UINT64_MAX;

	t36 = (x185==((x186*x187)%x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x190 = 0U;
	int32_t t37 = 134275;

	t37 = (x189==((x190*x191)%x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = INT32_MIN;
	uint64_t x198 = 1307527494LLU;
	static int16_t x199 = -1;
	volatile int32_t t38 = 66155278;

	t38 = (x197==((x198*x199)%x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = INT8_MIN;
	volatile int64_t x210 = -1259708151LL;
	volatile uint16_t x211 = 1U;
	volatile int32_t t39 = -18775;

	t39 = (x209==((x210*x211)%x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x213 = INT16_MIN;
	uint32_t x214 = 47569962U;
	volatile uint16_t x215 = 1U;
	int16_t x216 = -1;
	int32_t t40 = -1;

	t40 = (x213==((x214*x215)%x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = -514;

	t41 = (x221==((x222*x223)%x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x225 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile int16_t x228 = -1;
	int32_t t42 = 834;

	t42 = (x225==((x226*x227)%x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x229 = 26785860;
	uint32_t x230 = 181261U;
	int32_t x231 = -2923644;
	int64_t x232 = -128367284641LL;
	static volatile int32_t t43 = -151573827;

	t43 = (x229==((x230*x231)%x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = -1;
	int64_t x239 = -25LL;
	int16_t x240 = INT16_MIN;
	int32_t t44 = 6877;

	t44 = (x237==((x238*x239)%x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x241 = 1913U;
	int64_t x242 = 504236LL;
	int32_t t45 = 42801343;

	t45 = (x241==((x242*x243)%x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 6678215U;
	int8_t x248 = 1;
	static int32_t t46 = 67116869;

	t46 = (x245==((x246*x247)%x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	static uint64_t x251 = UINT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t47 = -53;

	t47 = (x249==((x250*x251)%x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x253 = 1U;
	static uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t48 = -1551;

	t48 = (x253==((x254*x255)%x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = -747096;
	volatile int16_t x258 = INT16_MIN;
	int64_t x259 = -243855145738LL;
	volatile int64_t x260 = -3773752879412025LL;

	t49 = (x257==((x258*x259)%x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = -1;
	int16_t x263 = INT16_MAX;
	uint32_t x264 = 139496U;
	volatile int32_t t50 = 4195339;

	t50 = (x261==((x262*x263)%x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MAX;
	int64_t x267 = -1LL;
	volatile uint8_t x268 = 6U;
	static volatile int32_t t51 = 457743400;

	t51 = (x265==((x266*x267)%x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x269 = 436U;
	volatile int32_t x270 = INT32_MIN;
	volatile uint64_t x271 = 38LLU;
	int16_t x272 = -366;

	t52 = (x269==((x270*x271)%x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x275 = 2569;
	int16_t x276 = INT16_MIN;
	static int32_t t53 = 64;

	t53 = (x273==((x274*x275)%x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x281 = 51285038554622LLU;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = 1733200U;
	int32_t x284 = INT32_MAX;

	t54 = (x281==((x282*x283)%x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x285 = 63LLU;
	int32_t x286 = 0;
	uint8_t x288 = UINT8_MAX;
	int32_t t55 = -1;

	t55 = (x285==((x286*x287)%x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x289 = 12737U;
	static uint16_t x290 = 2260U;
	uint32_t x291 = 24537U;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t56 = -42263011;

	t56 = (x289==((x290*x291)%x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x302 = 13988LLU;
	uint32_t x303 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	int32_t t57 = -21116615;

	t57 = (x301==((x302*x303)%x304));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x307 = -1;
	static volatile int16_t x308 = -250;
	int32_t t58 = 19561;

	t58 = (x305==((x306*x307)%x308));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x309 = 0;
	uint8_t x310 = 1U;
	int16_t x311 = 2;
	volatile int16_t x312 = INT16_MIN;

	t59 = (x309==((x310*x311)%x312));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int8_t x315 = 30;
	int16_t x316 = -314;
	int32_t t60 = -3;

	t60 = (x313==((x314*x315)%x316));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x317 = -1;
	int16_t x318 = 6;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = 2U;
	static volatile int32_t t61 = -240;

	t61 = (x317==((x318*x319)%x320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x321 = 403818220LL;
	uint8_t x322 = 0U;
	int64_t x323 = -1LL;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t62 = 423;

	t62 = (x321==((x322*x323)%x324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x325 = INT16_MAX;
	static int8_t x326 = -1;
	static volatile uint32_t x327 = UINT32_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t63 = 3924543;

	t63 = (x325==((x326*x327)%x328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = -33753LL;
	int8_t x330 = -1;
	static int8_t x331 = -2;
	int32_t t64 = -2584;

	t64 = (x329==((x330*x331)%x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x333 = INT16_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	volatile int32_t t65 = -137659;

	t65 = (x333==((x334*x335)%x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x337 = UINT16_MAX;
	static volatile int8_t x338 = INT8_MIN;
	volatile int32_t t66 = -23377;

	t66 = (x337==((x338*x339)%x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x345 = INT32_MIN;
	static uint64_t x346 = 295124695LLU;
	static int32_t x347 = INT32_MAX;
	volatile int32_t t67 = 5114318;

	t67 = (x345==((x346*x347)%x348));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x349 = -763LL;
	uint64_t x352 = 5113458993224834LLU;

	t68 = (x349==((x350*x351)%x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x357 = 4U;
	static int16_t x358 = -6335;
	volatile int16_t x359 = 199;
	static volatile int64_t x360 = 75989949LL;
	int32_t t69 = 205147;

	t69 = (x357==((x358*x359)%x360));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = INT32_MIN;
	static int64_t x366 = -1LL;
	volatile int64_t x367 = -35623181LL;
	static volatile int16_t x368 = INT16_MIN;

	t70 = (x365==((x366*x367)%x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x377 = 1;
	int64_t x378 = -1LL;
	static volatile uint64_t x379 = 1657305LLU;
	static volatile uint32_t x380 = 8692711U;
	static int32_t t71 = -259;

	t71 = (x377==((x378*x379)%x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x381 = INT64_MAX;
	int64_t x382 = 1LL;
	int8_t x384 = INT8_MAX;

	t72 = (x381==((x382*x383)%x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x385 = UINT16_MAX;
	static int8_t x386 = INT8_MIN;
	uint8_t x387 = 1U;
	static int64_t x388 = INT64_MIN;

	t73 = (x385==((x386*x387)%x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x389 = 0U;
	static uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	static int8_t x392 = INT8_MIN;
	static volatile int32_t t74 = -542601;

	t74 = (x389==((x390*x391)%x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = -5805;
	int8_t x395 = INT8_MAX;
	int32_t t75 = -5;

	t75 = (x393==((x394*x395)%x396));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x409 = 60414165159369470LLU;
	int8_t x410 = INT8_MAX;
	volatile uint8_t x412 = UINT8_MAX;

	t76 = (x409==((x410*x411)%x412));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x413 = -1;
	uint32_t x414 = 26169U;
	uint64_t x415 = 349445LLU;
	volatile uint64_t x416 = 23LLU;
	int32_t t77 = 3570796;

	t77 = (x413==((x414*x415)%x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = INT64_MAX;
	static uint16_t x418 = UINT16_MAX;
	int32_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile int32_t t78 = -126375230;

	t78 = (x417==((x418*x419)%x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x422 = -38855631446562431LL;
	volatile uint8_t x423 = 12U;
	static int16_t x424 = -7257;
	volatile int32_t t79 = 50244910;

	t79 = (x421==((x422*x423)%x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = INT32_MIN;
	uint64_t x426 = 135294419305814LLU;
	volatile int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	volatile int32_t t80 = -132193;

	t80 = (x425==((x426*x427)%x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x429 = INT32_MAX;
	int32_t x431 = INT32_MAX;
	int16_t x432 = 3;
	int32_t t81 = -4388;

	t81 = (x429==((x430*x431)%x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x433 = -1;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t82 = 1007900;

	t82 = (x433==((x434*x435)%x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x437 = 52U;
	volatile int64_t x438 = -7224LL;
	volatile int32_t x439 = -104881268;
	static uint32_t x440 = 63811U;

	t83 = (x437==((x438*x439)%x440));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x450 = -1;
	static int64_t x451 = -1348770LL;
	int64_t x452 = INT64_MIN;

	t84 = (x449==((x450*x451)%x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x453 = INT64_MIN;
	int32_t x454 = INT32_MAX;
	static uint32_t x455 = 685U;
	uint32_t x456 = 658818U;
	volatile int32_t t85 = 1990;

	t85 = (x453==((x454*x455)%x456));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MIN;
	int32_t t86 = 144628106;

	t86 = (x465==((x466*x467)%x468));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x469 = 470530LLU;
	uint64_t x470 = 26036LLU;
	volatile uint8_t x471 = 84U;
	uint64_t x472 = 228977092516395LLU;

	t87 = (x469==((x470*x471)%x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x477 = INT16_MAX;
	int8_t x478 = -1;
	uint64_t x479 = 3458727LLU;
	int64_t x480 = INT64_MIN;

	t88 = (x477==((x478*x479)%x480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = 0;
	volatile int16_t x482 = INT16_MIN;
	int16_t x483 = 118;
	static volatile int8_t x484 = -1;
	volatile int32_t t89 = -1;

	t89 = (x481==((x482*x483)%x484));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x493 = INT32_MIN;
	static volatile uint8_t x494 = 5U;
	int8_t x495 = 1;
	uint16_t x496 = 31024U;
	int32_t t90 = -14609;

	t90 = (x493==((x494*x495)%x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x499 = -1LL;
	int32_t x500 = 513820;

	t91 = (x497==((x498*x499)%x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MAX;
	static int8_t x508 = -18;

	t92 = (x505==((x506*x507)%x508));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x509 = INT8_MAX;
	int8_t x510 = -8;
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = 5;
	volatile int32_t t93 = 11633008;

	t93 = (x509==((x510*x511)%x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x513 = -229;
	static volatile uint64_t x514 = 718LLU;
	volatile int8_t x515 = INT8_MIN;
	volatile int32_t t94 = -617115;

	t94 = (x513==((x514*x515)%x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x518 = 3U;
	int16_t x519 = -1;
	static int64_t x520 = INT64_MAX;
	volatile int32_t t95 = 257022;

	t95 = (x517==((x518*x519)%x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x521 = 40U;
	int16_t x522 = INT16_MAX;
	uint64_t x524 = 354773LLU;
	int32_t t96 = -16578784;

	t96 = (x521==((x522*x523)%x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x525 = 1721896402LL;
	int16_t x526 = -7870;
	int16_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	int32_t t97 = 0;

	t97 = (x525==((x526*x527)%x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x529 = INT8_MIN;
	volatile uint8_t x530 = UINT8_MAX;
	int64_t x531 = 203929093008LL;

	t98 = (x529==((x530*x531)%x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x533 = 27U;
	uint32_t x535 = 227508U;
	uint32_t x536 = 1502269U;

	t99 = (x533==((x534*x535)%x536));

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

