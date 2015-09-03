#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = INT64_MIN;
int32_t x22 = INT32_MIN;
int32_t x28 = 10389066;
int64_t t5 = 15597008402018761LL;
int64_t x29 = INT64_MAX;
int64_t x31 = -117029952968957LL;
volatile int64_t t6 = 6494980941955962LL;
uint32_t x49 = 24559104U;
int64_t x52 = INT64_MAX;
int16_t x59 = -1;
uint8_t x60 = 24U;
uint32_t x62 = 13U;
int64_t x65 = -415272707724LL;
volatile int64_t t12 = -114557155101681LL;
int16_t x69 = INT16_MAX;
static volatile int32_t x72 = -617239304;
uint32_t x73 = 17U;
volatile int32_t x74 = INT32_MIN;
volatile int32_t x81 = -1;
static uint64_t x85 = 133126577LLU;
int16_t x96 = INT16_MIN;
static uint32_t t18 = 447024U;
volatile uint64_t t22 = 119492093LLU;
volatile int8_t x138 = INT8_MIN;
int64_t t29 = -62176996LL;
static int64_t x146 = -3867LL;
static int64_t t32 = -1285LL;
volatile int16_t x158 = INT16_MIN;
uint32_t x159 = UINT32_MAX;
volatile int64_t x168 = INT64_MAX;
volatile uint64_t x177 = 7393365636LLU;
volatile uint64_t t38 = 2079942481857077607LLU;
uint32_t x183 = 156U;
volatile int32_t t41 = -19819913;
uint64_t x197 = UINT64_MAX;
volatile uint32_t t50 = 18U;
volatile uint32_t t51 = 39082114U;
uint16_t x241 = UINT16_MAX;
int32_t x246 = INT32_MIN;
static volatile int64_t t54 = -311492382LL;
int64_t x251 = -1LL;
static int32_t x254 = -1;
int8_t x255 = INT8_MIN;
int64_t x262 = INT64_MIN;
volatile int8_t x268 = 0;
static int16_t x275 = 0;
volatile uint32_t x287 = 240U;
static uint8_t x288 = 81U;
int64_t t64 = -82032105LL;
int32_t x306 = INT32_MIN;
static int32_t x307 = -1;
int64_t x308 = INT64_MIN;
int64_t x310 = 493735LL;
int8_t x313 = INT8_MAX;
int32_t x314 = -23369111;
int16_t x318 = INT16_MIN;
uint64_t x319 = UINT64_MAX;
uint64_t t68 = 51002574335LLU;
int64_t t69 = 0LL;
static int8_t x334 = INT8_MAX;
int64_t x342 = INT64_MIN;
int8_t x343 = INT8_MIN;
volatile int64_t t72 = 805LL;
int32_t x356 = INT32_MAX;
uint32_t x357 = 407069U;
int8_t x359 = 1;
int32_t x365 = -1;
int8_t x366 = INT8_MIN;
uint16_t x383 = 2030U;
uint16_t x385 = UINT16_MAX;
int16_t x394 = INT16_MAX;
int64_t x398 = INT64_MIN;
volatile uint64_t t86 = 40812565942LLU;
uint64_t x411 = 826LLU;
uint16_t x413 = 1947U;
volatile uint32_t t88 = 533312U;
uint64_t x423 = UINT64_MAX;
uint64_t t89 = 7253LLU;
int32_t x425 = -1;
int64_t x426 = -127809LL;
static volatile int64_t t90 = -572535553506LL;
int64_t t91 = 19120LL;
static int32_t x452 = -1;
int8_t x457 = -7;
volatile int64_t x463 = 2LL;


void f0(void) {
	int8_t x1 = -1;
	static int32_t x2 = -997;
	int16_t x3 = 0;
	int16_t x4 = -154;
	static volatile int32_t t0 = -333;

	t0 = (x1%((x2-x3)|x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	int32_t x10 = 5173095;
	int64_t x11 = -45LL;
	static int8_t x12 = INT8_MIN;
	int64_t t1 = 773735308LL;

	t1 = (x9%((x10-x11)|x12));

	if (t1 != 43LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	volatile uint8_t x15 = 57U;
	uint64_t t2 = 15920891LLU;

	t2 = (x13%((x14-x15)|x16));

	if (t2 != 57LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = 3356076LLU;
	int8_t x18 = INT8_MIN;
	static int64_t x19 = -449364720450391533LL;
	int64_t x20 = -591383853754517863LL;
	static volatile uint64_t t3 = 1977162613LLU;

	t3 = (x17%((x18-x19)|x20));

	if (t3 != 3356076LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1623U;
	volatile uint32_t x23 = 2107079876U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 55139305780295050LLU;

	t4 = (x21%((x22-x23)|x24));

	if (t4 != 1623LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint32_t x26 = 28429U;
	int32_t x27 = INT32_MIN;

	t5 = (x25%((x26-x27)|x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = -1;
	uint32_t x32 = UINT32_MAX;

	t6 = (x29%((x30-x31)|x32));

	if (t6 != 73903502341080LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 979U;
	int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = -1;
	static uint64_t t7 = 689294210305LLU;

	t7 = (x33%((x34-x35)|x36));

	if (t7 != 979LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	static int64_t x38 = INT64_MIN;
	static int8_t x39 = INT8_MIN;
	int8_t x40 = -1;
	volatile int64_t t8 = 15421065011334LL;

	t8 = (x37%((x38-x39)|x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x50 = 42;
	int32_t x51 = -1;
	int64_t t9 = -4898187839LL;

	t9 = (x49%((x50-x51)|x52));

	if (t9 != 24559104LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = 5956LLU;
	static uint64_t t10 = 695560LLU;

	t10 = (x57%((x58-x59)|x60));

	if (t10 != 490LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = -70341303220LL;
	static uint16_t x63 = 3U;
	int64_t x64 = -11227070338LL;
	volatile int64_t t11 = -4045897815548LL;

	t11 = (x61%((x62-x63)|x64));

	if (t11 != -2978881192LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x66 = 33;
	int16_t x67 = -1;
	static int64_t x68 = INT64_MIN;

	t12 = (x65%((x66-x67)|x68));

	if (t12 != -415272707724LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x70 = UINT64_MAX;
	uint8_t x71 = 71U;
	uint64_t t13 = 33613694592LLU;

	t13 = (x69%((x70-x71)|x72));

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x75 = 103345LL;
	volatile int8_t x76 = 1;
	volatile int64_t t14 = 1357555LL;

	t14 = (x73%((x74-x75)|x76));

	if (t14 != 17LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x82 = INT8_MAX;
	volatile uint16_t x83 = 2U;
	int64_t x84 = -1LL;
	int64_t t15 = -9999144176LL;

	t15 = (x81%((x82-x83)|x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x86 = 172;
	uint16_t x87 = 4917U;
	int16_t x88 = INT16_MAX;
	uint64_t t16 = 17407285122LLU;

	t16 = (x85%((x86-x87)|x88));

	if (t16 != 133126577LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = 1272U;
	uint32_t x90 = 5U;
	uint8_t x91 = 20U;
	uint64_t x92 = 2433724601764691LLU;
	uint64_t t17 = 26419972LLU;

	t17 = (x89%((x90-x91)|x92));

	if (t17 != 1272LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	static volatile uint32_t x95 = UINT32_MAX;

	t18 = (x93%((x94-x95)|x96));

	if (t18 != 4294967168U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -44;
	int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	static uint8_t x100 = 2U;
	volatile int32_t t19 = -31666;

	t19 = (x97%((x98-x99)|x100));

	if (t19 != -44) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	static int16_t x104 = INT16_MIN;
	static volatile int64_t t20 = -9701LL;

	t20 = (x101%((x102-x103)|x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	uint64_t x106 = 1836651533715325LLU;
	static volatile int64_t x107 = INT64_MIN;
	volatile int64_t x108 = 57778776083285145LL;
	static volatile uint64_t t21 = 2197808289709062LLU;

	t21 = (x105%((x106-x107)|x108));

	if (t21 != 9164887373195098114LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = -891117;
	int16_t x110 = 7;
	volatile uint64_t x111 = 34LLU;
	uint64_t x112 = UINT64_MAX;

	t22 = (x109%((x110-x111)|x112));

	if (t22 != 18446744073708660499LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 2U;
	int16_t x114 = -5;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = 173;
	volatile int64_t t23 = 482LL;

	t23 = (x113%((x114-x115)|x116));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -1;
	uint64_t x122 = 25697365LLU;
	static uint32_t x123 = 481567103U;
	int16_t x124 = INT16_MAX;
	volatile uint64_t t24 = 330210652LLU;

	t24 = (x121%((x122-x123)|x124));

	if (t24 != 455868416LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = 7;
	int16_t x126 = -1;
	volatile int16_t x127 = INT16_MIN;
	int64_t x128 = 140567087072278LL;
	volatile int64_t t25 = 32240525794974LL;

	t25 = (x125%((x126-x127)|x128));

	if (t25 != 7LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x129 = -1;
	uint64_t x130 = 926862304058345LLU;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	uint64_t t26 = 12LLU;

	t26 = (x129%((x130-x131)|x132));

	if (t26 != 21LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 21605560620827339LLU;
	volatile int8_t x134 = -1;
	uint32_t x135 = 612200811U;
	volatile uint32_t x136 = 93074U;
	volatile uint64_t t27 = 2369782530074833LLU;

	t27 = (x133%((x134-x135)|x136));

	if (t27 != 3546842405LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	int64_t x139 = -1LL;
	static int8_t x140 = INT8_MIN;
	volatile int64_t t28 = -3043083836463LL;

	t28 = (x137%((x138-x139)|x140));

	if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = 1;
	int8_t x142 = -51;
	uint32_t x143 = 153805349U;
	int64_t x144 = INT64_MIN;

	t29 = (x141%((x142-x143)|x144));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 25U;
	int64_t x147 = -482853622665LL;
	int8_t x148 = INT8_MAX;
	static int64_t t30 = -5005LL;

	t30 = (x145%((x146-x147)|x148));

	if (t30 != 25LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	static uint8_t x150 = 3U;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = 42U;
	int32_t t31 = -181300276;

	t31 = (x149%((x150-x151)|x152));

	if (t31 != 45) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x153 = UINT32_MAX;
	int8_t x154 = -1;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = 37951LL;

	t32 = (x153%((x154-x155)|x156));

	if (t32 != 14674LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	volatile uint8_t x160 = UINT8_MAX;
	static uint32_t t33 = 1846433715U;

	t33 = (x157%((x158-x159)|x160));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = -116LL;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	volatile int64_t t34 = -946355748LL;

	t34 = (x161%((x162-x163)|x164));

	if (t34 != -98LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -1LL;
	uint8_t x166 = 23U;
	int8_t x167 = 1;
	volatile int64_t t35 = -1122470807LL;

	t35 = (x165%((x166-x167)|x168));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x169 = 43;
	volatile uint64_t x170 = 133991497591LLU;
	volatile int16_t x171 = 3;
	int8_t x172 = -57;
	static uint64_t t36 = 135227057709477LLU;

	t36 = (x169%((x170-x171)|x172));

	if (t36 != 43LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -1LL;
	int16_t x174 = INT16_MIN;
	volatile uint8_t x175 = 25U;
	static uint32_t x176 = 40U;
	int64_t t37 = 486747063LL;

	t37 = (x173%((x174-x175)|x176));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = -4LL;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = -1LL;

	t38 = (x177%((x178-x179)|x180));

	if (t38 != 7393365636LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -1;
	static int16_t x182 = INT16_MIN;
	int64_t x184 = 25010283873LL;
	int64_t t39 = 9558133120LL;

	t39 = (x181%((x182-x183)|x184));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x185 = 26578557529LLU;
	volatile uint16_t x186 = 817U;
	int8_t x187 = INT8_MIN;
	volatile uint8_t x188 = 8U;
	static volatile uint64_t t40 = 502158153218167LLU;

	t40 = (x185%((x186-x187)|x188));

	if (t40 != 308LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x193 = INT32_MAX;
	int8_t x194 = -6;
	int32_t x195 = -291945;
	int8_t x196 = -1;

	t41 = (x193%((x194-x195)|x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = -1;
	int64_t x199 = INT64_MIN;
	volatile uint64_t x200 = 9LLU;
	static uint64_t t42 = 701692392215449LLU;

	t42 = (x197%((x198-x199)|x200));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MAX;
	static int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MAX;
	static int32_t x204 = 79;
	static volatile int64_t t43 = 209929081724438LL;

	t43 = (x201%((x202-x203)|x204));

	if (t43 != 1582LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = 38;
	volatile int16_t x206 = -1;
	volatile uint8_t x207 = 66U;
	int16_t x208 = 1;
	int32_t t44 = 7;

	t44 = (x205%((x206-x207)|x208));

	if (t44 != 38) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x209 = INT8_MAX;
	static int32_t x210 = -205;
	int16_t x211 = 10571;
	volatile uint64_t x212 = UINT64_MAX;
	volatile uint64_t t45 = 2LLU;

	t45 = (x209%((x210-x211)|x212));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 3U;
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = -960390957;
	int64_t x216 = INT64_MIN;
	int64_t t46 = -11696290LL;

	t46 = (x213%((x214-x215)|x216));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = 5815U;
	static int8_t x218 = INT8_MIN;
	static int32_t x219 = INT32_MIN;
	int32_t x220 = -1326;
	uint32_t t47 = 6U;

	t47 = (x217%((x218-x219)|x220));

	if (t47 != 5815U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x221 = INT64_MIN;
	int16_t x222 = -62;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 7U;
	int64_t t48 = -361849456LL;

	t48 = (x221%((x222-x223)|x224));

	if (t48 != -5LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -1;
	static uint8_t x226 = UINT8_MAX;
	int16_t x227 = INT16_MIN;
	int32_t x228 = 8943;
	static volatile int32_t t49 = 8628753;

	t49 = (x225%((x226-x227)|x228));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = -1;
	static uint32_t x230 = 171U;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MAX;

	t50 = (x229%((x230-x231)|x232));

	if (t50 != 316U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x233 = 6U;
	uint32_t x234 = 861U;
	int32_t x235 = -264;
	int32_t x236 = -1;

	t51 = (x233%((x234-x235)|x236));

	if (t51 != 6U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	uint64_t t52 = 96035163283599362LLU;

	t52 = (x237%((x238-x239)|x240));

	if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x242 = -1LL;
	uint32_t x243 = UINT32_MAX;
	static int64_t x244 = -2028318435770663210LL;
	volatile int64_t t53 = -3901217804735LL;

	t53 = (x241%((x242-x243)|x244));

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = 3852842U;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MAX;

	t54 = (x245%((x246-x247)|x248));

	if (t54 != 3852842LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int32_t x250 = -1;
	static int8_t x252 = INT8_MAX;
	static uint64_t t55 = 0LLU;

	t55 = (x249%((x250-x251)|x252));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	int64_t x256 = 653053754LL;
	int64_t t56 = -280144357949463929LL;

	t56 = (x253%((x254-x255)|x256));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x263 = -1;
	int64_t x264 = 1352274727941152LL;
	static volatile int64_t t57 = -55734060834LL;

	t57 = (x261%((x262-x263)|x264));

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -156774682929521890LL;
	int32_t x266 = INT32_MIN;
	static int64_t x267 = INT64_MIN;
	int64_t t58 = 4386362485332803134LL;

	t58 = (x265%((x266-x267)|x268));

	if (t58 != -156774682929521890LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x273 = INT64_MIN;
	volatile int32_t x274 = -1;
	static uint16_t x276 = UINT16_MAX;
	static int64_t t59 = 4196831815LL;

	t59 = (x273%((x274-x275)|x276));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x285 = INT64_MAX;
	int64_t x286 = 0LL;
	int64_t t60 = 546111899LL;

	t60 = (x285%((x286-x287)|x288));

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x289 = 19293301LLU;
	volatile uint64_t x290 = UINT64_MAX;
	int8_t x291 = 1;
	int16_t x292 = -1;
	uint64_t t61 = 1065458813LLU;

	t61 = (x289%((x290-x291)|x292));

	if (t61 != 19293301LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x293 = -1;
	static volatile uint16_t x294 = UINT16_MAX;
	uint32_t x295 = UINT32_MAX;
	static volatile int64_t x296 = INT64_MIN;
	volatile int64_t t62 = 141124076LL;

	t62 = (x293%((x294-x295)|x296));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = -87;
	static uint32_t x298 = 973U;
	int8_t x299 = INT8_MIN;
	int64_t x300 = -4098029471LL;
	volatile int64_t t63 = 39410813LL;

	t63 = (x297%((x298-x299)|x300));

	if (t63 != -87LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x301 = INT16_MIN;
	static int8_t x302 = INT8_MIN;
	volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;

	t64 = (x301%((x302-x303)|x304));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -467004LL;
	int64_t t65 = -63332730LL;

	t65 = (x305%((x306-x307)|x308));

	if (t65 != -467004LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -1LL;
	volatile int32_t x311 = -203013;
	uint32_t x312 = 33U;
	int64_t t66 = 1154229696270354LL;

	t66 = (x309%((x310-x311)|x312));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x315 = 0;
	int64_t x316 = -1LL;
	static int64_t t67 = 14731260LL;

	t67 = (x313%((x314-x315)|x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = UINT16_MAX;
	volatile int16_t x320 = INT16_MIN;

	t68 = (x317%((x318-x319)|x320));

	if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = 2U;
	int16_t x324 = 118;

	t69 = (x321%((x322-x323)|x324));

	if (t69 != -8LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x325 = 3U;
	int16_t x326 = INT16_MIN;
	int32_t x327 = -283;
	int64_t x328 = -11236250987755385LL;
	static int64_t t70 = 114887004623627LL;

	t70 = (x325%((x326-x327)|x328));

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x333 = INT16_MIN;
	static int32_t x335 = 61331493;
	int8_t x336 = INT8_MIN;
	int32_t t71 = 1004802293;

	t71 = (x333%((x334-x335)|x336));

	if (t71 != -12) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -2;
	int64_t x344 = INT64_MIN;

	t72 = (x341%((x342-x343)|x344));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	int8_t x346 = 0;
	static volatile uint64_t x347 = UINT64_MAX;
	static volatile uint32_t x348 = UINT32_MAX;
	volatile uint64_t t73 = 49576665489828LLU;

	t73 = (x345%((x346-x347)|x348));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = 5396418U;
	uint64_t x350 = 9077LLU;
	uint64_t x351 = 3067573328492094LLU;
	int64_t x352 = 26652688394353LL;
	volatile uint64_t t74 = 921809714917LLU;

	t74 = (x349%((x350-x351)|x352));

	if (t74 != 5396418LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = 5;
	volatile uint64_t x354 = 230569LLU;
	static uint8_t x355 = 11U;
	static uint64_t t75 = 67171256092332005LLU;

	t75 = (x353%((x354-x355)|x356));

	if (t75 != 5LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x358 = INT16_MAX;
	int64_t x360 = -1711891584735LL;
	int64_t t76 = -630751499LL;

	t76 = (x357%((x358-x359)|x360));

	if (t76 != 407069LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x367 = -1LL;
	static uint8_t x368 = 5U;
	int64_t t77 = 2LL;

	t77 = (x365%((x366-x367)|x368));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = INT64_MIN;
	static int32_t x374 = 3927;
	int64_t x375 = -1LL;
	int32_t x376 = INT32_MIN;
	volatile int64_t t78 = -1078098287103996LL;

	t78 = (x373%((x374-x375)|x376));

	if (t78 != -30858368LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = 23;
	int16_t x378 = 0;
	int32_t x379 = -1;
	int16_t x380 = INT16_MIN;
	volatile int32_t t79 = -95;

	t79 = (x377%((x378-x379)|x380));

	if (t79 != 23) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x381 = 3833LLU;
	uint64_t x382 = 11039502566375LLU;
	static volatile int8_t x384 = -1;
	static uint64_t t80 = 17982957495724053LLU;

	t80 = (x381%((x382-x383)|x384));

	if (t80 != 3833LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 1786U;
	volatile int32_t t81 = -5404007;

	t81 = (x385%((x386-x387)|x388));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x389 = 111;
	int32_t x390 = 1;
	static int8_t x391 = 0;
	int8_t x392 = INT8_MAX;
	volatile int32_t t82 = 46;

	t82 = (x389%((x390-x391)|x392));

	if (t82 != 111) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x393 = -1;
	uint8_t x395 = 14U;
	uint8_t x396 = UINT8_MAX;
	int32_t t83 = 195964;

	t83 = (x393%((x394-x395)|x396));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 1065U;
	volatile uint64_t t84 = 133970LLU;

	t84 = (x397%((x398-x399)|x400));

	if (t84 != 9223372036854741974LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = 1;
	int8_t x402 = INT8_MIN;
	volatile int64_t x403 = -1LL;
	int8_t x404 = INT8_MAX;
	volatile int64_t t85 = -16468513246934LL;

	t85 = (x401%((x402-x403)|x404));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x405 = 444866677932LLU;
	static int64_t x406 = 4906388LL;
	volatile uint32_t x407 = 5801U;
	volatile uint8_t x408 = UINT8_MAX;

	t86 = (x405%((x406-x407)|x408));

	if (t86 != 4276293LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = -320;
	int16_t x410 = INT16_MAX;
	int32_t x412 = INT32_MAX;
	uint64_t t87 = 2243569820322433988LLU;

	t87 = (x409%((x410-x411)|x412));

	if (t87 != 2147483331LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 186;
	int16_t x416 = -1;

	t88 = (x413%((x414-x415)|x416));

	if (t88 != 1947U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = -679;
	uint32_t x424 = 56424U;

	t89 = (x421%((x422-x423)|x424));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x427 = 27;
	int16_t x428 = INT16_MIN;

	t90 = (x425%((x426-x427)|x428));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x429 = 0U;
	int64_t x430 = INT64_MIN;
	int32_t x431 = -1;
	int8_t x432 = INT8_MIN;

	t91 = (x429%((x430-x431)|x432));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x433 = INT64_MIN;
	static int16_t x434 = -2841;
	volatile int16_t x435 = INT16_MIN;
	int8_t x436 = -1;
	int64_t t92 = 16112LL;

	t92 = (x433%((x434-x435)|x436));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 462LLU;
	uint64_t x438 = UINT64_MAX;
	static int8_t x439 = INT8_MIN;
	int16_t x440 = -1;
	volatile uint64_t t93 = 561697LLU;

	t93 = (x437%((x438-x439)|x440));

	if (t93 != 462LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = 12;
	int16_t x442 = -10;
	uint32_t x443 = 101310U;
	volatile int8_t x444 = INT8_MIN;
	uint32_t t94 = 128542U;

	t94 = (x441%((x442-x443)|x444));

	if (t94 != 12U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = -2625;
	uint64_t x450 = 2603074563097587LLU;
	static int64_t x451 = INT64_MAX;
	static uint64_t t95 = 34922964685000LLU;

	t95 = (x449%((x450-x451)|x452));

	if (t95 != 18446744073709548991LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = 296LL;
	int64_t x454 = 55712002482LL;
	int8_t x455 = -8;
	static uint16_t x456 = UINT16_MAX;
	static int64_t t96 = 47840937788351640LL;

	t96 = (x453%((x454-x455)|x456));

	if (t96 != 296LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x458 = 3U;
	static uint64_t x459 = UINT64_MAX;
	int64_t x460 = 25950349324079757LL;
	uint64_t t97 = 15560268LLU;

	t97 = (x457%((x458-x459)|x460));

	if (t97 != 21996053612924139LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = 439U;
	uint16_t x462 = 3137U;
	volatile int16_t x464 = -1;
	int64_t t98 = 28176LL;

	t98 = (x461%((x462-x463)|x464));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 145043519656969LLU;
	int64_t x467 = INT64_MAX;
	int16_t x468 = INT16_MIN;
	static volatile uint64_t t99 = 1LLU;

	t99 = (x465%((x466-x467)|x468));

	if (t99 != 11253LLU) { NG(); } else { ; }
	
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

