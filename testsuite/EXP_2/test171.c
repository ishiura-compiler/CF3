#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
volatile int16_t x10 = -1;
int64_t t1 = 12679LL;
int16_t x16 = INT16_MAX;
int32_t x40 = INT32_MIN;
int16_t x41 = 1;
static volatile int16_t x44 = -1;
static volatile int32_t t6 = 1273191;
static int32_t x47 = 47;
uint64_t t7 = 66LLU;
int8_t x49 = -1;
int64_t x58 = -1LL;
uint64_t t10 = 26LLU;
uint8_t x65 = 5U;
int32_t x66 = INT32_MIN;
volatile int16_t x67 = -1;
int32_t t11 = -129518;
int32_t x71 = 1;
uint64_t t12 = 528322373818LLU;
volatile int16_t x80 = -1;
int32_t x112 = -2;
int64_t x114 = -1LL;
int32_t x117 = INT32_MIN;
int16_t x120 = -57;
volatile int64_t t21 = -1LL;
static uint64_t x128 = UINT64_MAX;
uint64_t t22 = 931465680621LLU;
int16_t x131 = -1;
static uint16_t x138 = 894U;
int32_t x146 = INT32_MIN;
int16_t x148 = INT16_MIN;
int32_t x152 = 344299;
int8_t x161 = INT8_MIN;
volatile uint64_t t29 = 44LLU;
int64_t x169 = -11LL;
int16_t x171 = INT16_MIN;
int32_t x182 = -1;
int64_t x188 = 5359509376435LL;
int8_t x202 = 3;
int8_t x203 = 6;
int16_t x231 = -1;
volatile int32_t t39 = 124490142;
uint16_t x243 = UINT16_MAX;
volatile int32_t t41 = 12;
uint32_t t42 = 230493U;
volatile int64_t x259 = -1048582771608849LL;
int8_t x264 = -1;
int64_t x270 = -1LL;
int32_t x273 = -1;
volatile uint64_t x275 = 57631519593LLU;
volatile uint64_t t47 = 10990624430789477LLU;
uint64_t x281 = 766314748851LLU;
static uint64_t x282 = UINT64_MAX;
uint64_t t48 = 1LLU;
volatile uint32_t t50 = 89470U;
uint8_t x297 = 0U;
uint8_t x299 = UINT8_MAX;
int32_t x314 = -1;
static volatile uint64_t t55 = 5105645057375598LLU;
int16_t x326 = 0;
int64_t x334 = -172707153LL;
uint16_t x335 = 52U;
int8_t x337 = -1;
static int64_t x340 = -1024873648792278LL;
int16_t x359 = 410;
int8_t x360 = INT8_MIN;
int8_t x378 = 0;
int8_t x386 = -1;
int8_t x402 = 1;
volatile int64_t t72 = 970356LL;
int16_t x419 = INT16_MAX;
int16_t x420 = -1;
volatile int16_t x431 = 1445;
uint16_t x455 = 554U;
int32_t x458 = 5810014;
volatile int8_t x462 = INT8_MIN;
int16_t x463 = INT16_MAX;
static int16_t x464 = 0;
int32_t t79 = 74408140;
volatile uint32_t x473 = 4945U;
int8_t x475 = 30;
volatile int64_t x486 = -51756895LL;
int16_t x490 = 112;
volatile uint16_t x492 = 138U;
int64_t x498 = INT64_MIN;
uint8_t x502 = 13U;
volatile int16_t x513 = -4;
int8_t x515 = 0;
volatile int64_t t91 = -247737LL;
uint8_t x546 = UINT8_MAX;
uint16_t x548 = 3U;
uint32_t t94 = 0U;
uint32_t x558 = 91349U;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int64_t x3 = -1775160844669997456LL;
	static volatile int8_t x4 = 2;
	volatile int64_t t0 = -388LL;

	t0 = ((x1+(x2-x3))-x4);

	if (t0 != -7448211192184778482LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = 585LL;
	volatile int8_t x11 = -1;
	int32_t x12 = -439155;

	t1 = ((x9+(x10-x11))-x12);

	if (t1 != 439740LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 63U;
	volatile int8_t x14 = INT8_MIN;
	static volatile int8_t x15 = -1;
	volatile int32_t t2 = 598;

	t2 = ((x13+(x14-x15))-x16);

	if (t2 != -32831) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 65U;
	uint32_t x18 = 797453U;
	static int32_t x19 = INT32_MAX;
	static volatile int8_t x20 = -1;
	volatile uint32_t t3 = 894U;

	t3 = ((x17+(x18-x19))-x20);

	if (t3 != 2148281168U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 25726315276052LLU;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t4 = 243254317112295339LLU;

	t4 = ((x25+(x26-x27))-x28);

	if (t4 != 9223346310539565290LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x37 = UINT16_MAX;
	static volatile uint32_t x38 = 5639U;
	int32_t x39 = INT32_MAX;
	volatile uint32_t t5 = 299U;

	t5 = ((x37+(x38-x39))-x40);

	if (t5 != 71175U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;

	t6 = ((x41+(x42-x43))-x44);

	if (t6 != -65534) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 263129469LLU;
	uint16_t x46 = 10755U;
	int8_t x48 = INT8_MIN;

	t7 = ((x45+(x46-x47))-x48);

	if (t7 != 263140305LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x50 = -2;
	uint16_t x51 = 36U;
	uint32_t x52 = UINT32_MAX;
	static volatile uint32_t t8 = 424762750U;

	t8 = ((x49+(x50-x51))-x52);

	if (t8 != 4294967258U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int8_t x59 = 5;
	int16_t x60 = INT16_MIN;
	int64_t t9 = 77135LL;

	t9 = ((x57+(x58-x59))-x60);

	if (t9 != -6LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x61 = -1;
	int8_t x62 = -4;
	uint64_t x63 = 180919145546400167LLU;
	int64_t x64 = INT64_MIN;

	t10 = ((x61+(x62-x63))-x64);

	if (t10 != 9042452891308375636LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x68 = INT32_MIN;

	t11 = ((x65+(x66-x67))-x68);

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 3649131LLU;
	static uint8_t x70 = 0U;
	int32_t x72 = INT32_MAX;

	t12 = ((x69+(x70-x71))-x72);

	if (t12 != 18446744071565717099LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x73 = 15U;
	uint8_t x74 = 0U;
	volatile uint64_t x75 = 1456077LLU;
	uint32_t x76 = UINT32_MAX;
	volatile uint64_t t13 = 292349937053187413LLU;

	t13 = ((x73+(x74-x75))-x76);

	if (t13 != 18446744069413128259LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 6U;
	int16_t x79 = -1965;
	static uint32_t t14 = 3707U;

	t14 = ((x77+(x78-x79))-x80);

	if (t14 != 4294936500U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x81 = INT8_MAX;
	static uint16_t x82 = 6157U;
	volatile int8_t x83 = -1;
	int8_t x84 = INT8_MIN;
	static int32_t t15 = -15433939;

	t15 = ((x81+(x82-x83))-x84);

	if (t15 != 6413) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = 1;
	int16_t x86 = 4071;
	static volatile int8_t x87 = 5;
	int8_t x88 = -1;
	volatile int32_t t16 = 6854;

	t16 = ((x85+(x86-x87))-x88);

	if (t16 != 4068) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x93 = INT16_MIN;
	volatile int32_t x94 = 3108;
	int8_t x95 = -1;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t17 = 31575318833LLU;

	t17 = ((x93+(x94-x95))-x96);

	if (t17 != 18446744073709521958LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x109 = 3U;
	int32_t x110 = 57462451;
	static int16_t x111 = INT16_MIN;
	static int32_t t18 = 328311280;

	t18 = ((x109+(x110-x111))-x112);

	if (t18 != 57495224) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = INT32_MAX;
	int64_t x115 = 0LL;
	uint8_t x116 = 8U;
	volatile int64_t t19 = 177932670324779LL;

	t19 = ((x113+(x114-x115))-x116);

	if (t19 != 2147483638LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x118 = -21;
	uint32_t x119 = 61210U;
	uint32_t t20 = 694858U;

	t20 = ((x117+(x118-x119))-x120);

	if (t20 != 2147422474U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = -1LL;
	int8_t x123 = 45;
	static int8_t x124 = INT8_MIN;

	t21 = ((x121+(x122-x123))-x124);

	if (t21 != 337LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x125 = INT8_MAX;
	static int64_t x126 = 655590973LL;
	int64_t x127 = -492971365179LL;

	t22 = ((x125+(x126-x127))-x128);

	if (t22 != 493626956280LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x130 = 1052862392U;
	int8_t x132 = INT8_MAX;
	uint32_t t23 = 1U;

	t23 = ((x129+(x130-x131))-x132);

	if (t23 != 3200345913U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x133 = INT16_MAX;
	static uint64_t x134 = 29777850314256889LLU;
	int16_t x135 = -1;
	int32_t x136 = -1;
	volatile uint64_t t24 = 9LLU;

	t24 = ((x133+(x134-x135))-x136);

	if (t24 != 29777850314289658LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 57U;
	uint64_t x139 = 8299106087137392LLU;
	volatile uint8_t x140 = UINT8_MAX;
	volatile uint64_t t25 = 1627719570331758543LLU;

	t25 = ((x137+(x138-x139))-x140);

	if (t25 != 18438444967622414920LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = 6441664762784486LLU;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	static uint16_t x144 = UINT16_MAX;
	uint64_t t26 = 7928LLU;

	t26 = ((x141+(x142-x143))-x144);

	if (t26 != 6441664762620648LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x145 = 3586175687664LL;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t27 = 423816551LLU;

	t27 = ((x145+(x146-x147))-x148);

	if (t27 != 3584028236785LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x149 = INT16_MIN;
	uint16_t x150 = 472U;
	static volatile uint8_t x151 = UINT8_MAX;
	volatile int32_t t28 = 52548025;

	t28 = ((x149+(x150-x151))-x152);

	if (t28 != -376850) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 61U;

	t29 = ((x161+(x162-x163))-x164);

	if (t29 != 32578LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x165 = 159188LLU;
	volatile int8_t x166 = 6;
	volatile int8_t x167 = -23;
	int32_t x168 = 445;
	volatile uint64_t t30 = 174394759992LLU;

	t30 = ((x165+(x166-x167))-x168);

	if (t30 != 158772LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x170 = -359;
	uint16_t x172 = UINT16_MAX;
	int64_t t31 = -159198LL;

	t31 = ((x169+(x170-x171))-x172);

	if (t31 != -33137LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	static uint64_t x175 = 8189700324753306555LLU;
	volatile uint16_t x176 = 16179U;
	volatile uint64_t t32 = 5555993LLU;

	t32 = ((x173+(x174-x175))-x176);

	if (t32 != 10257043746808745233LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x181 = INT16_MAX;
	static uint64_t x183 = 0LLU;
	static volatile uint32_t x184 = 114587U;
	uint64_t t33 = 982140907LLU;

	t33 = ((x181+(x182-x183))-x184);

	if (t33 != 18446744073709469795LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static volatile int64_t t34 = 7154604172847LL;

	t34 = ((x185+(x186-x187))-x188);

	if (t34 != -5361656859956LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = -11579356;
	uint64_t x195 = 259550280147212LLU;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t35 = 5904114155928955LLU;

	t35 = ((x193+(x194-x195))-x196);

	if (t35 != 9223112490858016535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = 0;
	int32_t x204 = 62;
	volatile int32_t t36 = 0;

	t36 = ((x201+(x202-x203))-x204);

	if (t36 != -65) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = -1;
	volatile int64_t x214 = -1252787398656LL;
	volatile int32_t x215 = 5;
	static int16_t x216 = -114;
	int64_t t37 = -43244003LL;

	t37 = ((x213+(x214-x215))-x216);

	if (t37 != -1252787398548LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x217 = 138590U;
	static int64_t x218 = -426226338526182212LL;
	int16_t x219 = INT16_MAX;
	static int8_t x220 = 3;
	volatile int64_t t38 = -361195085851LL;

	t38 = ((x217+(x218-x219))-x220);

	if (t38 != -426226338526076392LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x229 = 114U;
	static int8_t x230 = INT8_MAX;
	int16_t x232 = INT16_MAX;

	t39 = ((x229+(x230-x231))-x232);

	if (t39 != -32525) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x237 = -3;
	uint64_t x238 = UINT64_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MIN;
	static uint64_t t40 = 13102445060068LLU;

	t40 = ((x237+(x238-x239))-x240);

	if (t40 != 125LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MAX;
	volatile uint8_t x244 = 107U;

	t41 = ((x241+(x242-x243))-x244);

	if (t41 != -108) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x245 = INT32_MIN;
	uint32_t x246 = 3628U;
	int16_t x247 = 3948;
	volatile uint8_t x248 = 12U;

	t42 = ((x245+(x246-x247))-x248);

	if (t42 != 2147483316U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x253 = 2113LL;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	volatile int64_t t43 = 6996203418294LL;

	t43 = ((x253+(x254-x255))-x256);

	if (t43 != 2241LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	static int64_t t44 = -148539583658520LL;

	t44 = ((x257+(x258-x259))-x260);

	if (t44 != 1048580624190864LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	int32_t x263 = -1;
	volatile int32_t t45 = -324308302;

	t45 = ((x261+(x262-x263))-x264);

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x269 = 59095328336154249LLU;
	static int16_t x271 = INT16_MAX;
	int32_t x272 = -1;
	volatile uint64_t t46 = 85LLU;

	t46 = ((x269+(x270-x271))-x272);

	if (t46 != 59095328336121482LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x274 = -837LL;
	int16_t x276 = INT16_MIN;

	t47 = ((x273+(x274-x275))-x276);

	if (t47 != 18446744016078063953LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x283 = 1LLU;
	int8_t x284 = -1;

	t48 = ((x281+(x282-x283))-x284);

	if (t48 != 766314748850LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x285 = 29971366229376924LLU;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	volatile int16_t x288 = INT16_MAX;
	uint64_t t49 = 241589679528LLU;

	t49 = ((x285+(x286-x287))-x288);

	if (t49 != 9253343403084120093LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x290 = -114040;
	int8_t x291 = -1;
	static volatile uint32_t x292 = 15391U;

	t50 = ((x289+(x290-x291))-x292);

	if (t50 != 4294837738U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	volatile int16_t x294 = -1;
	int32_t x295 = -1;
	int64_t x296 = INT64_MIN;
	uint64_t t51 = 1952107LLU;

	t51 = ((x293+(x294-x295))-x296);

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x298 = INT16_MIN;
	static int32_t x300 = INT32_MIN;
	int32_t t52 = 98;

	t52 = ((x297+(x298-x299))-x300);

	if (t52 != 2147450625) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x301 = 3644837LL;
	int16_t x302 = INT16_MAX;
	volatile int16_t x303 = -1790;
	volatile uint32_t x304 = 855U;
	volatile int64_t t53 = 7207282576LL;

	t53 = ((x301+(x302-x303))-x304);

	if (t53 != 3678539LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x309 = 1U;
	static uint64_t x310 = 1040LLU;
	int32_t x311 = INT32_MIN;
	static volatile int32_t x312 = 1702;
	volatile uint64_t t54 = 163439574348451181LLU;

	t54 = ((x309+(x310-x311))-x312);

	if (t54 != 2147482987LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x313 = UINT64_MAX;
	int32_t x315 = -1;
	int16_t x316 = INT16_MAX;

	t55 = ((x313+(x314-x315))-x316);

	if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x325 = 43U;
	static volatile int32_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	uint64_t t56 = 1LLU;

	t56 = ((x325+(x326-x327))-x328);

	if (t56 != 45LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x333 = INT16_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	int64_t t57 = 816110555LL;

	t57 = ((x333+(x334-x335))-x336);

	if (t57 != -4467641733LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x338 = -1;
	int16_t x339 = -1;
	volatile int64_t t58 = 67938698184LL;

	t58 = ((x337+(x338-x339))-x340);

	if (t58 != 1024873648792277LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x349 = 1893342LLU;
	volatile int32_t x350 = -36;
	uint8_t x351 = 4U;
	static uint16_t x352 = 6U;
	static volatile uint64_t t59 = 12654606403960143LLU;

	t59 = ((x349+(x350-x351))-x352);

	if (t59 != 1893296LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x353 = 52U;
	uint32_t x354 = 20094294U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = 125267826LL;
	int64_t t60 = -16807512284921521LL;

	t60 = ((x353+(x354-x355))-x356);

	if (t60 != -105206247LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint64_t x358 = UINT64_MAX;
	uint64_t t61 = 31049401266579LLU;

	t61 = ((x357+(x358-x359))-x360);

	if (t61 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x361 = INT8_MAX;
	int8_t x362 = -1;
	uint32_t x363 = 7324266U;
	volatile uint8_t x364 = UINT8_MAX;
	uint32_t t62 = 1512622617U;

	t62 = ((x361+(x362-x363))-x364);

	if (t62 != 4287642901U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = 19;
	int32_t x366 = -24;
	static int16_t x367 = -3;
	int8_t x368 = INT8_MAX;
	volatile int32_t t63 = -807613;

	t63 = ((x365+(x366-x367))-x368);

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x369 = -6;
	static int32_t x370 = -22;
	static int8_t x371 = INT8_MAX;
	int16_t x372 = 13;
	volatile int32_t t64 = -9804148;

	t64 = ((x369+(x370-x371))-x372);

	if (t64 != -168) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x373 = 7240241LLU;
	int8_t x374 = INT8_MIN;
	static int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	static uint64_t t65 = 151709346630665770LLU;

	t65 = ((x373+(x374-x375))-x376);

	if (t65 != 7273009LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x377 = INT8_MIN;
	int16_t x379 = -1;
	int16_t x380 = INT16_MIN;
	static int32_t t66 = 282331;

	t66 = ((x377+(x378-x379))-x380);

	if (t66 != 32641) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x385 = 9943U;
	static uint8_t x387 = 0U;
	int32_t x388 = 21923693;
	volatile int32_t t67 = 25413;

	t67 = ((x385+(x386-x387))-x388);

	if (t67 != -21913751) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = -1;
	volatile int32_t x390 = 359526518;
	int32_t x391 = -1;
	int16_t x392 = 0;
	static volatile int32_t t68 = 17356952;

	t68 = ((x389+(x390-x391))-x392);

	if (t68 != 359526518) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x397 = 52223U;
	static int64_t x398 = -5342193114697945LL;
	int16_t x399 = 12755;
	static volatile uint64_t x400 = 2010144939LLU;
	static uint64_t t69 = 3LLU;

	t69 = ((x397+(x398-x399))-x400);

	if (t69 != 18441401878584748200LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x401 = -1LL;
	static int32_t x403 = -1;
	int16_t x404 = -15;
	int64_t t70 = -10LL;

	t70 = ((x401+(x402-x403))-x404);

	if (t70 != 16LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	volatile int16_t x408 = INT16_MAX;
	volatile int32_t t71 = 532971770;

	t71 = ((x405+(x406-x407))-x408);

	if (t71 != -65918) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = -1;
	static volatile int32_t x411 = INT32_MAX;
	volatile int64_t x412 = 4811342309723643LL;

	t72 = ((x409+(x410-x411))-x412);

	if (t72 != -4811340162239996LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x417 = INT16_MAX;
	uint8_t x418 = UINT8_MAX;
	static volatile int32_t t73 = 25602;

	t73 = ((x417+(x418-x419))-x420);

	if (t73 != 256) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = -1LL;
	static int32_t x422 = -10;
	static int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MAX;
	volatile int64_t t74 = 548002LL;

	t74 = ((x421+(x422-x423))-x424);

	if (t74 != -10LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x429 = 51U;
	int64_t x430 = 132573064433LL;
	int16_t x432 = INT16_MIN;
	int64_t t75 = -255136892787LL;

	t75 = ((x429+(x430-x431))-x432);

	if (t75 != 132573095807LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x437 = 1U;
	uint16_t x438 = UINT16_MAX;
	uint8_t x439 = 75U;
	int64_t x440 = INT64_MAX;
	volatile int64_t t76 = -3872472LL;

	t76 = ((x437+(x438-x439))-x440);

	if (t76 != -9223372036854710346LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x453 = 22574611U;
	volatile int32_t x454 = -27538429;
	static volatile int32_t x456 = -1;
	uint32_t t77 = 392486027U;

	t77 = ((x453+(x454-x455))-x456);

	if (t77 != 4290002925U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = INT8_MIN;
	int16_t x459 = -569;
	static uint16_t x460 = UINT16_MAX;
	static int32_t t78 = 3359689;

	t78 = ((x457+(x458-x459))-x460);

	if (t78 != 5744920) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x461 = -1021652;

	t79 = ((x461+(x462-x463))-x464);

	if (t79 != -1054547) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x465 = -26738;
	int64_t x466 = -1LL;
	volatile uint8_t x467 = UINT8_MAX;
	uint64_t x468 = 104LLU;
	volatile uint64_t t80 = 666845618619006622LLU;

	t80 = ((x465+(x466-x467))-x468);

	if (t80 != 18446744073709524518LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x469 = INT8_MIN;
	uint8_t x470 = 42U;
	volatile int16_t x471 = -226;
	volatile int64_t x472 = INT64_MAX;
	volatile int64_t t81 = -243LL;

	t81 = ((x469+(x470-x471))-x472);

	if (t81 != -9223372036854775667LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x474 = -1LL;
	int16_t x476 = INT16_MIN;
	static volatile int64_t t82 = 1868714878073LL;

	t82 = ((x473+(x474-x475))-x476);

	if (t82 != 37682LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x477 = UINT16_MAX;
	static uint16_t x478 = 368U;
	volatile int32_t x479 = INT32_MAX;
	static volatile uint8_t x480 = 86U;
	volatile int32_t t83 = -182;

	t83 = ((x477+(x478-x479))-x480);

	if (t83 != -2147417830) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x485 = INT16_MIN;
	static volatile uint64_t x487 = UINT64_MAX;
	static volatile uint64_t x488 = 55771338671880503LLU;
	uint64_t t84 = 925240420764446042LLU;

	t84 = ((x485+(x486-x487))-x488);

	if (t84 != 18390972734985881451LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x489 = 1U;
	static uint8_t x491 = 69U;
	static volatile int32_t t85 = -56;

	t85 = ((x489+(x490-x491))-x492);

	if (t85 != -94) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x493 = 0U;
	int32_t x494 = 1119;
	uint32_t x495 = 4847U;
	int64_t x496 = INT64_MAX;
	static volatile int64_t t86 = 13139949369LL;

	t86 = ((x493+(x494-x495))-x496);

	if (t86 != -9223372032559812239LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x497 = UINT8_MAX;
	volatile int32_t x499 = INT32_MIN;
	int16_t x500 = -5;
	static int64_t t87 = 2501290735251LL;

	t87 = ((x497+(x498-x499))-x500);

	if (t87 != -9223372034707291900LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x501 = -1;
	volatile int64_t x503 = -45483987202734653LL;
	static uint8_t x504 = UINT8_MAX;
	volatile int64_t t88 = 495761494664783710LL;

	t88 = ((x501+(x502-x503))-x504);

	if (t88 != 45483987202734410LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x514 = 4663U;
	static volatile uint64_t x516 = UINT64_MAX;
	volatile uint64_t t89 = 5689049795711969LLU;

	t89 = ((x513+(x514-x515))-x516);

	if (t89 != 4660LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x517 = 47486364086LLU;
	static int64_t x518 = -13953636456343LL;
	uint8_t x519 = 37U;
	uint16_t x520 = 46U;
	static uint64_t t90 = 2181166265884019147LLU;

	t90 = ((x517+(x518-x519))-x520);

	if (t90 != 18446730167559459276LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x525 = INT8_MAX;
	int8_t x526 = -1;
	int64_t x527 = -1LL;
	volatile int32_t x528 = INT32_MIN;

	t91 = ((x525+(x526-x527))-x528);

	if (t91 != 2147483775LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x529 = 2;
	int8_t x530 = INT8_MAX;
	int8_t x531 = -25;
	static uint16_t x532 = 5412U;
	int32_t t92 = -94908;

	t92 = ((x529+(x530-x531))-x532);

	if (t92 != -5258) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x537 = 164240919652LL;
	int16_t x538 = INT16_MIN;
	int8_t x539 = -1;
	int8_t x540 = 1;
	int64_t t93 = 67390058608487732LL;

	t93 = ((x537+(x538-x539))-x540);

	if (t93 != 164240886884LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x545 = 318;
	uint32_t x547 = 115555U;

	t94 = ((x545+(x546-x547))-x548);

	if (t94 != 4294852311U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x549 = UINT32_MAX;
	int8_t x550 = INT8_MIN;
	volatile int16_t x551 = -1;
	int16_t x552 = INT16_MAX;
	static uint32_t t95 = 302U;

	t95 = ((x549+(x550-x551))-x552);

	if (t95 != 4294934401U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x553 = INT8_MAX;
	int16_t x554 = 3;
	int32_t x555 = 15036139;
	int64_t x556 = -1LL;
	volatile int64_t t96 = -33737279LL;

	t96 = ((x553+(x554-x555))-x556);

	if (t96 != -15036008LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x557 = INT32_MIN;
	static int32_t x559 = -2;
	int64_t x560 = 873153LL;
	volatile int64_t t97 = -11028383730536LL;

	t97 = ((x557+(x558-x559))-x560);

	if (t97 != 2146701846LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x561 = INT16_MIN;
	int8_t x562 = -1;
	volatile int32_t x563 = -7159;
	uint32_t x564 = 31U;
	static volatile uint32_t t98 = 1548570U;

	t98 = ((x561+(x562-x563))-x564);

	if (t98 != 4294941655U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x565 = INT16_MAX;
	int32_t x566 = 1089;
	static int16_t x567 = 3;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t99 = -23288;

	t99 = ((x565+(x566-x567))-x568);

	if (t99 != 33981) { NG(); } else { ; }
	
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

